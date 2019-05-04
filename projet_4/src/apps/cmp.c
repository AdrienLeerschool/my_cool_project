#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/xattr.h>   
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>

#define XATTR_HASH_STR      "user.hash"
#define XATTR_SIZE_LEAF_STR "user.size_leaf"

#define DIGEST_SIZE         16

struct merkle_tree
{
    size_t size_leaf;
    size_t depth;
    char *hash;
};

static struct merkle_tree* get_merkle_tree(const char *fname);
static void free_merkle_tree(struct merkle_tree *mt);
static void compare_files(size_t *different_leaves,
                          struct merkle_tree *mt1, struct merkle_tree *mt2,
                          size_t index, size_t depth);

static int pow2(int x);

static int my_log2(int x);

static int my_log2(int x)
{
    int ret = 0;
    while(x != 1)
    {
        x /= 2;
        ++ret;
    }
    return ret;
}

static int pow2(int x)
{
    int ret = 1;
    while(x != 0)
    {
        --x;
        ret *= 2;
    }
    return ret;
}


static void compare_files(size_t *different_leaves,
                          struct merkle_tree *mt1, struct merkle_tree *mt2,
                          size_t index, size_t depth)
{
    size_t index_first_leaf = pow2(mt1->depth) - 1;
    if(depth == mt1->depth)
    {
        if(strncmp(mt1->hash + index * DIGEST_SIZE, 
                   mt2->hash + index * DIGEST_SIZE,
                   DIGEST_SIZE))
        {
            different_leaves[index - index_first_leaf] = 1;
        }
        return;
    }   
    if(strncmp(mt1->hash + index * DIGEST_SIZE, 
               mt2->hash + index * DIGEST_SIZE, 
               DIGEST_SIZE))
    {
        compare_files(different_leaves, mt1, mt2, 2 * index + 1, depth + 1);
        compare_files(different_leaves, mt1, mt2, 2 * index + 2, depth + 1);
    }
    else
        return;

}

/*static void compare_files(size_t *different_leaves,
                          struct merkle_tree *mt1, struct merkle_tree *mt2,
                          size_t index, size_t depth)
{
    size_t index_first_leaf = pow2(mt1->depth) - 1;
    size_t nbr_leaves = pow2(mt1->depth);
    depth = depth + 1;
    for(index = index_first_leaf; index < index_first_leaf + nbr_leaves; ++index)
    {
        if(strncmp(mt1->hash + index * DIGEST_SIZE, 
                   mt2->hash + index * DIGEST_SIZE,
                   DIGEST_SIZE))
        {
            different_leaves[index - index_first_leaf] = 1;
        }
    }
}*/


static void free_merkle_tree(struct merkle_tree *mt)
{
    free(mt->hash);
    free(mt);
}

static struct merkle_tree* get_merkle_tree(const char *fname)
{
    struct merkle_tree *mt = malloc(sizeof(struct merkle_tree));
    int err;
    char *buf;
    err = getxattr(fname, XATTR_SIZE_LEAF_STR, NULL, 0);
    if(err < 0)
        goto out;
    buf = malloc(sizeof(char) * err);
    err = getxattr(fname, XATTR_SIZE_LEAF_STR, buf, err);
    if(err < 0)
    {
        free(buf);  
        goto out;
    }
    mt->size_leaf = atoi(buf);
    free(buf);
    err = getxattr(fname, XATTR_HASH_STR, NULL, 0);
    if(err < 0)
        goto out;
    mt->hash = malloc(sizeof(char) * err);
    mt->depth = my_log2((err + DIGEST_SIZE) / DIGEST_SIZE) - 1;
    err = getxattr(fname, XATTR_HASH_STR, buf, err);
    if(err < 0)
    {
        free(mt->hash);
        goto out;
    }
    return mt;
    out:
        free(mt);
        return NULL;
}

int main(int argc, char** argv)
{
	const char* fname1;
    const char* fname2;
    char ch;
    int print_diffs = 0;
    while((ch = getopt(argc, argv, "l")) != -1)
    {
        switch(ch)
        {
        case 'l':
            print_diffs = 1;
            break;
        default:
            break;
        }
    }
    fname1 = argv[optind];
    fname2 = argv[optind + 1];
    if(fname1 == NULL || fname2 == NULL)
    {
        fprintf(stderr, "cmp need two files to be compared\n");
        exit(-1);
    }
    struct merkle_tree *mt1 = get_merkle_tree(fname1);
    struct merkle_tree *mt2 = get_merkle_tree(fname2);
    size_t nbr_leaves = pow2(mt1->depth);
    size_t *different_leaves = malloc(sizeof(size_t) * nbr_leaves);
    for(size_t i = 0; i < nbr_leaves; ++i)
        different_leaves[i] = 0;
    compare_files(different_leaves, mt1, mt2, 0, 0);
    int fd1 = open(fname1, O_RDONLY);
    int fd2 = open(fname2, O_RDONLY);
    unsigned char *buf1 = malloc(sizeof(char) * mt1->size_leaf);
    unsigned char *buf2 = malloc(sizeof(char) * mt1->size_leaf);
    int err;
    for(size_t i = 0; i < nbr_leaves; ++i)
    {
        if(different_leaves[i] != 0)
        {
            lseek(fd1, i * mt1->size_leaf, SEEK_SET);
            lseek(fd2, i * mt1->size_leaf, SEEK_SET);
            ssize_t ret1 = read(fd1, buf1, mt1->size_leaf);
            ssize_t ret2 = read(fd2, buf2, mt1->size_leaf);
            err += ret2;

            if(print_diffs)
            {
                for(ssize_t j = 0; j < ret1; ++j)
                {
                    if(buf1[j] != buf2[j])
                        printf("%d %o %o\n", j + mt1->size_leaf * i + 1,
                                           (unsigned int)buf1[j], (unsigned int)buf2[j]);
                }
            }
            else
            {
                for(ssize_t j = 0; j < ret1; ++j)
                {
                    if(buf1[j] != buf2[j])
                    {
                        printf("%s %s differ: byte %d\n", fname1, fname2, 
                                                        j + mt1->size_leaf * i + 1);
                        break;
                    }
                }
                break;
            }

        }
    }
    free_merkle_tree(mt1);
    free_merkle_tree(mt2);
    exit(0);
}
