/*
  File: fs/ext42/acl.h

  (C) 2001 Andreas Gruenbacher, <a.gruenbacher@computer.org>
*/

#include <linux/posix_acl_xattr.h>

#define EXT4_ACL_VERSION	0x0001

typedef struct {
	__le16		e_tag;
	__le16		e_perm;
	__le32		e_id;
} ext42_acl_entry;

typedef struct {
	__le16		e_tag;
	__le16		e_perm;
} ext42_acl_entry_short;

typedef struct {
	__le32		a_version;
} ext42_acl_header;

static inline size_t ext42_acl_size(int count)
{
	if (count <= 4) {
		return sizeof(ext42_acl_header) +
		       count * sizeof(ext42_acl_entry_short);
	} else {
		return sizeof(ext42_acl_header) +
		       4 * sizeof(ext42_acl_entry_short) +
		       (count - 4) * sizeof(ext42_acl_entry);
	}
}

static inline int ext42_acl_count(size_t size)
{
	ssize_t s;
	size -= sizeof(ext42_acl_header);
	s = size - 4 * sizeof(ext42_acl_entry_short);
	if (s < 0) {
		if (size % sizeof(ext42_acl_entry_short))
			return -1;
		return size / sizeof(ext42_acl_entry_short);
	} else {
		if (s % sizeof(ext42_acl_entry))
			return -1;
		return s / sizeof(ext42_acl_entry) + 4;
	}
}

#ifdef CONFIG_EXT4_FS_POSIX_ACL

/* acl.c */
struct posix_acl *ext42_get_acl(struct inode *inode, int type);
int ext42_set_acl(struct inode *inode, struct posix_acl *acl, int type);
extern int ext42_init_acl(handle_t *, struct inode *, struct inode *);

#else  /* CONFIG_EXT4_FS_POSIX_ACL */
#include <linux/sched.h>
#define ext42_get_acl NULL
#define ext42_set_acl NULL

static inline int
ext42_init_acl(handle_t *handle, struct inode *inode, struct inode *dir)
{
	return 0;
}
#endif  /* CONFIG_EXT4_FS_POSIX_ACL */

