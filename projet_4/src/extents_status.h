/*
 *  fs/ext42/extents_status.h
 *
 * Written by Yongqiang Yang <xiaoqiangnk@gmail.com>
 * Modified by
 *	Allison Henderson <achender@linux.vnet.ibm.com>
 *	Zheng Liu <wenqing.lz@taobao.com>
 *
 */

#ifndef _EXT4_EXTENTS_STATUS_H
#define _EXT4_EXTENTS_STATUS_H

/*
 * Turn on ES_DEBUG__ to get lots of info about extent status operations.
 */
#ifdef ES_DEBUG__
#define es_debug(fmt, ...)	printk(fmt, ##__VA_ARGS__)
#else
#define es_debug(fmt, ...)	no_printk(fmt, ##__VA_ARGS__)
#endif

/*
 * With ES_AGGRESSIVE_TEST defined, the result of es caching will be
 * checked with old map_block's result.
 */
#define ES_AGGRESSIVE_TEST__

/*
 * These flags live in the high bits of extent_status.es_pblk
 */
enum {
	ES_WRITTEN_B,
	ES_UNWRITTEN_B,
	ES_DELAYED_B,
	ES_HOLE_B,
	ES_REFERENCED_B,
	ES_FLAGS
};

#define ES_SHIFT (sizeof(ext42_fsblk_t)*8 - ES_FLAGS)
#define ES_MASK (~((ext42_fsblk_t)0) << ES_SHIFT)

#define EXTENT_STATUS_WRITTEN	(1 << ES_WRITTEN_B)
#define EXTENT_STATUS_UNWRITTEN (1 << ES_UNWRITTEN_B)
#define EXTENT_STATUS_DELAYED	(1 << ES_DELAYED_B)
#define EXTENT_STATUS_HOLE	(1 << ES_HOLE_B)
#define EXTENT_STATUS_REFERENCED	(1 << ES_REFERENCED_B)

#define ES_TYPE_MASK	((ext42_fsblk_t)(EXTENT_STATUS_WRITTEN | \
			  EXTENT_STATUS_UNWRITTEN | \
			  EXTENT_STATUS_DELAYED | \
			  EXTENT_STATUS_HOLE) << ES_SHIFT)

struct ext42_sb_info;
struct ext42_extent;

struct extent_status {
	struct rb_node rb_node;
	ext42_lblk_t es_lblk;	/* first logical block extent covers */
	ext42_lblk_t es_len;	/* length of extent in block */
	ext42_fsblk_t es_pblk;	/* first physical block */
};

struct ext42_es_tree {
	struct rb_root root;
	struct extent_status *cache_es;	/* recently accessed extent */
};

struct ext42_es_stats {
	unsigned long es_stats_shrunk;
	unsigned long es_stats_cache_hits;
	unsigned long es_stats_cache_misses;
	u64 es_stats_scan_time;
	u64 es_stats_max_scan_time;
	struct percpu_counter es_stats_all_cnt;
	struct percpu_counter es_stats_shk_cnt;
};

extern int __init ext42_init_es(void);
extern void ext42_exit_es(void);
extern void ext42_es_init_tree(struct ext42_es_tree *tree);

extern int ext42_es_insert_extent(struct inode *inode, ext42_lblk_t lblk,
				 ext42_lblk_t len, ext42_fsblk_t pblk,
				 unsigned int status);
extern void ext42_es_cache_extent(struct inode *inode, ext42_lblk_t lblk,
				 ext42_lblk_t len, ext42_fsblk_t pblk,
				 unsigned int status);
extern int ext42_es_remove_extent(struct inode *inode, ext42_lblk_t lblk,
				 ext42_lblk_t len);
extern void ext42_es_find_delayed_extent_range(struct inode *inode,
					ext42_lblk_t lblk, ext42_lblk_t end,
					struct extent_status *es);
extern int ext42_es_lookup_extent(struct inode *inode, ext42_lblk_t lblk,
				 struct extent_status *es);

static inline unsigned int ext42_es_status(struct extent_status *es)
{
	return es->es_pblk >> ES_SHIFT;
}

static inline unsigned int ext42_es_type(struct extent_status *es)
{
	return (es->es_pblk & ES_TYPE_MASK) >> ES_SHIFT;
}

static inline int ext42_es_is_written(struct extent_status *es)
{
	return (ext42_es_type(es) & EXTENT_STATUS_WRITTEN) != 0;
}

static inline int ext42_es_is_unwritten(struct extent_status *es)
{
	return (ext42_es_type(es) & EXTENT_STATUS_UNWRITTEN) != 0;
}

static inline int ext42_es_is_delayed(struct extent_status *es)
{
	return (ext42_es_type(es) & EXTENT_STATUS_DELAYED) != 0;
}

static inline int ext42_es_is_hole(struct extent_status *es)
{
	return (ext42_es_type(es) & EXTENT_STATUS_HOLE) != 0;
}

static inline void ext42_es_set_referenced(struct extent_status *es)
{
	es->es_pblk |= ((ext42_fsblk_t)EXTENT_STATUS_REFERENCED) << ES_SHIFT;
}

static inline void ext42_es_clear_referenced(struct extent_status *es)
{
	es->es_pblk &= ~(((ext42_fsblk_t)EXTENT_STATUS_REFERENCED) << ES_SHIFT);
}

static inline int ext42_es_is_referenced(struct extent_status *es)
{
	return (ext42_es_status(es) & EXTENT_STATUS_REFERENCED) != 0;
}

static inline ext42_fsblk_t ext42_es_pblock(struct extent_status *es)
{
	return es->es_pblk & ~ES_MASK;
}

static inline void ext42_es_store_pblock(struct extent_status *es,
					ext42_fsblk_t pb)
{
	ext42_fsblk_t block;

	block = (pb & ~ES_MASK) | (es->es_pblk & ES_MASK);
	es->es_pblk = block;
}

static inline void ext42_es_store_status(struct extent_status *es,
					unsigned int status)
{
	es->es_pblk = (((ext42_fsblk_t)status << ES_SHIFT) & ES_MASK) |
		      (es->es_pblk & ~ES_MASK);
}

static inline void ext42_es_store_pblock_status(struct extent_status *es,
					       ext42_fsblk_t pb,
					       unsigned int status)
{
	es->es_pblk = (((ext42_fsblk_t)status << ES_SHIFT) & ES_MASK) |
		      (pb & ~ES_MASK);
}

extern int ext42_es_register_shrinker(struct ext42_sb_info *sbi);
extern void ext42_es_unregister_shrinker(struct ext42_sb_info *sbi);

extern int ext42_seq_es_shrinker_info_show(struct seq_file *seq, void *v);

#endif /* _EXT4_EXTENTS_STATUS_H */
