#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x10289b50, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x8def4986, __VMLINUX_SYMBOL_STR(mb_cache_entry_find_next) },
	{ 0xe73ca8d0, __VMLINUX_SYMBOL_STR(request_key) },
	{ 0x64336e78, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x733491d7, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0xc0206fb9, __VMLINUX_SYMBOL_STR(d_path) },
	{ 0x53326531, __VMLINUX_SYMBOL_STR(mempool_alloc_pages) },
	{ 0xdd7682e0, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xbb49f1aa, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x513f05c9, __VMLINUX_SYMBOL_STR(page_zero_new_buffers) },
	{ 0xefe949a, __VMLINUX_SYMBOL_STR(dquot_alloc) },
	{ 0x2687a8e, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x564c56d0, __VMLINUX_SYMBOL_STR(dquot_destroy) },
	{ 0x7cfc958d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4be85a03, __VMLINUX_SYMBOL_STR(memweight) },
	{ 0xf18242e1, __VMLINUX_SYMBOL_STR(atomic64_set_cx8) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf44c9a2f, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xa9c20040, __VMLINUX_SYMBOL_STR(jbd2_journal_flush) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x92159ac2, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x6b1b67d3, __VMLINUX_SYMBOL_STR(__bdevname) },
	{ 0x827e4ea, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0x89075999, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0xd4f4a211, __VMLINUX_SYMBOL_STR(generic_getxattr) },
	{ 0x7903437a, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0x669e6106, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xdc9b7bf8, __VMLINUX_SYMBOL_STR(jbd2_journal_begin_ordered_truncate) },
	{ 0x7410aba2, __VMLINUX_SYMBOL_STR(strreplace) },
	{ 0x839f9803, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x245118e1, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x68e2f221, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4427064e, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x772f9eec, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0x139b504, __VMLINUX_SYMBOL_STR(cpu_current_top_of_stack) },
	{ 0x3c9d4c99, __VMLINUX_SYMBOL_STR(dquot_writeback_dquots) },
	{ 0x594cdd8, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0x523f807c, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0xf2c6c6dd, __VMLINUX_SYMBOL_STR(filemap_fault) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x2b7fbef4, __VMLINUX_SYMBOL_STR(dquot_quotactl_sysfile_ops) },
	{ 0xf6cc4a9, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xc88ada3b, __VMLINUX_SYMBOL_STR(inode_permission) },
	{ 0xf160d1b2, __VMLINUX_SYMBOL_STR(__cleancache_get_page) },
	{ 0xbecaff37, __VMLINUX_SYMBOL_STR(generic_write_checks) },
	{ 0x6a48e16b, __VMLINUX_SYMBOL_STR(percpu_counter_destroy) },
	{ 0x16881ebe, __VMLINUX_SYMBOL_STR(jbd2_journal_errno) },
	{ 0xc69621a2, __VMLINUX_SYMBOL_STR(__page_symlink) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0xd0d8621b, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xdbecf195, __VMLINUX_SYMBOL_STR(generic_file_llseek_size) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xb792dffe, __VMLINUX_SYMBOL_STR(d_set_d_op) },
	{ 0x98b9803b, __VMLINUX_SYMBOL_STR(dquot_acquire) },
	{ 0x2355aac, __VMLINUX_SYMBOL_STR(kset_register) },
	{ 0x3848f1de, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xa2410345, __VMLINUX_SYMBOL_STR(jbd2_journal_free_reserved) },
	{ 0x6bc0134c, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x5c7c133e, __VMLINUX_SYMBOL_STR(jbd2_journal_lock_updates) },
	{ 0x2e1a4604, __VMLINUX_SYMBOL_STR(__generic_file_write_iter) },
	{ 0xc1d8cfaf, __VMLINUX_SYMBOL_STR(__fdget) },
	{ 0x5423ea53, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0xe4ae9c6, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0x64999478, __VMLINUX_SYMBOL_STR(congestion_wait) },
	{ 0xda5d461a, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xceea4502, __VMLINUX_SYMBOL_STR(end_buffer_write_sync) },
	{ 0xe9e05603, __VMLINUX_SYMBOL_STR(bdev_read_only) },
	{ 0x6e235961, __VMLINUX_SYMBOL_STR(jbd2_journal_invalidatepage) },
	{ 0xd57f990, __VMLINUX_SYMBOL_STR(block_invalidatepage) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x8f2baeec, __VMLINUX_SYMBOL_STR(generic_fh_to_parent) },
	{ 0x2d37342e, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x808df843, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x92742b70, __VMLINUX_SYMBOL_STR(dquot_file_open) },
	{ 0x62d6910, __VMLINUX_SYMBOL_STR(block_is_partially_uptodate) },
	{ 0xf1deabf2, __VMLINUX_SYMBOL_STR(div64_u64) },
	{ 0xa88596e2, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x10dbea6c, __VMLINUX_SYMBOL_STR(dquot_mark_dquot_dirty) },
	{ 0x78e340f9, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_ebx) },
	{ 0x4e68e9be, __VMLINUX_SYMBOL_STR(rb_next_postorder) },
	{ 0xa5bbb3f5, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xef4a8e8, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0xf67ec079, __VMLINUX_SYMBOL_STR(blkdev_issue_flush) },
	{ 0x586f16cc, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xbeaef228, __VMLINUX_SYMBOL_STR(dquot_quota_on_mount) },
	{ 0x25820c64, __VMLINUX_SYMBOL_STR(fs_overflowuid) },
	{ 0x6b818b6c, __VMLINUX_SYMBOL_STR(posix_acl_access_xattr_handler) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x3d636f7b, __VMLINUX_SYMBOL_STR(posix_acl_update_mode) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xe0507f13, __VMLINUX_SYMBOL_STR(jbd2_log_wait_commit) },
	{ 0xf7d9209, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_eax) },
	{ 0x82b482d, __VMLINUX_SYMBOL_STR(mb_cache_entry_get) },
	{ 0x70a8a819, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x8320fc30, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0xad373d0c, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0x5b3f353, __VMLINUX_SYMBOL_STR(tag_pages_for_writeback) },
	{ 0xc8e89084, __VMLINUX_SYMBOL_STR(filemap_write_and_wait) },
	{ 0xafe04e11, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0x327dfece, __VMLINUX_SYMBOL_STR(jbd2_journal_force_commit) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x61c43c2a, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0x6def2db2, __VMLINUX_SYMBOL_STR(half_md4_transform) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x989af108, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x796beca7, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xa813bd59, __VMLINUX_SYMBOL_STR(dquot_quota_off) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x326790fa, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x2d3cc30a, __VMLINUX_SYMBOL_STR(kobject_set_name) },
	{ 0xee91879b, __VMLINUX_SYMBOL_STR(rb_first_postorder) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x5f27544a, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x98c9a569, __VMLINUX_SYMBOL_STR(buffer_migrate_page) },
	{ 0xe4a7bcc8, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x6ed1ea5f, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0x28d486ef, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xed301492, __VMLINUX_SYMBOL_STR(file_path) },
	{ 0xa6b13658, __VMLINUX_SYMBOL_STR(__percpu_counter_sum) },
	{ 0x87bc5be0, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x46d40189, __VMLINUX_SYMBOL_STR(find_inode_nowait) },
	{ 0x3ed0731b, __VMLINUX_SYMBOL_STR(add_to_page_cache_lru) },
	{ 0x4acbb78c, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x92078920, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x6452dafa, __VMLINUX_SYMBOL_STR(__dquot_free_space) },
	{ 0xd1b1c14f, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0xea144e7f, __VMLINUX_SYMBOL_STR(d_instantiate_new) },
	{ 0x3bb7b758, __VMLINUX_SYMBOL_STR(kobject_del) },
	{ 0xe904e743, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xb7f55ecc, __VMLINUX_SYMBOL_STR(atomic64_add_return_cx8) },
	{ 0xbc864fa3, __VMLINUX_SYMBOL_STR(mb_cache_entry_create) },
	{ 0xe2eca88a, __VMLINUX_SYMBOL_STR(_raw_write_trylock) },
	{ 0x32fed3de, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x7fdaccc7, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0x53964cae, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xb0666249, __VMLINUX_SYMBOL_STR(generic_setxattr) },
	{ 0x4cb1b130, __VMLINUX_SYMBOL_STR(__dquot_alloc_space) },
	{ 0x6bb113b8, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0x31fcb99a, __VMLINUX_SYMBOL_STR(jbd2_journal_destroy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x22fc4f3a, __VMLINUX_SYMBOL_STR(trace_print_flags_seq) },
	{ 0x17814c0c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x307c2fd0, __VMLINUX_SYMBOL_STR(generic_check_addressable) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xacd81eb3, __VMLINUX_SYMBOL_STR(jbd2_inode_cache) },
	{ 0x6fa94103, __VMLINUX_SYMBOL_STR(wbc_account_io) },
	{ 0xae71b1a3, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x57bc7d73, __VMLINUX_SYMBOL_STR(dquot_get_dqblk) },
	{ 0x15ba50a6, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x83782cd, __VMLINUX_SYMBOL_STR(try_to_release_page) },
	{ 0xf3d99b3f, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x832d800d, __VMLINUX_SYMBOL_STR(down_write_trylock) },
	{ 0xb15d9bf0, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0xbe89c742, __VMLINUX_SYMBOL_STR(from_kgid_munged) },
	{ 0xfdd3714d, __VMLINUX_SYMBOL_STR(__dax_fault) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0xbc5883eb, __VMLINUX_SYMBOL_STR(jbd2_journal_wipe) },
	{ 0x6eb4e53f, __VMLINUX_SYMBOL_STR(invalidate_bdev) },
	{ 0x215e450e, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x68dfc59f, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xdc11f28a, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x32999fff, __VMLINUX_SYMBOL_STR(mb_cache_entry_find_first) },
	{ 0x3fa58ef8, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x9f7491c6, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0x8e670b0c, __VMLINUX_SYMBOL_STR(__dax_pmd_fault) },
	{ 0x7a2add7d, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0xe97458d4, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0xcffbe6ed, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xbdda2eb2, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x760a820b, __VMLINUX_SYMBOL_STR(jbd2_journal_try_to_free_buffers) },
	{ 0x252272cb, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0x8329e6f0, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6f1e598, __VMLINUX_SYMBOL_STR(crypto_alloc_ablkcipher) },
	{ 0xad1ad0b5, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xd5309ec9, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x7b876f5b, __VMLINUX_SYMBOL_STR(jbd2_journal_dirty_metadata) },
	{ 0x59c88ccc, __VMLINUX_SYMBOL_STR(set_task_ioprio) },
	{ 0x29eab946, __VMLINUX_SYMBOL_STR(dquot_alloc_inode) },
	{ 0xf97456ea, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9b0c73a0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xb9594fab, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x690d6ff, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0xce3a01ae, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0xabbe7474, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8026fa61, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_esi) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5383f34b, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0xe3d88b3a, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x47d1e2d5, __VMLINUX_SYMBOL_STR(posix_acl_chmod) },
	{ 0x50a71ea0, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0xb6e41883, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7caba6e4, __VMLINUX_SYMBOL_STR(jbd2_journal_extend) },
	{ 0x96650583, __VMLINUX_SYMBOL_STR(jbd2_trans_will_send_data_barrier) },
	{ 0xd230b73e, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xb4ecb573, __VMLINUX_SYMBOL_STR(iov_iter_alignment) },
	{ 0xf745cb16, __VMLINUX_SYMBOL_STR(atomic64_sub_return_cx8) },
	{ 0xa2b8cb50, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0xcad84572, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x134f8624, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0xdac0960, __VMLINUX_SYMBOL_STR(blkdev_issue_zeroout) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x6f8d2433, __VMLINUX_SYMBOL_STR(jbd2_journal_start_commit) },
	{ 0xcc4d1bfb, __VMLINUX_SYMBOL_STR(atomic64_read_cx8) },
	{ 0x9cbd0128, __VMLINUX_SYMBOL_STR(crypto_shash_digest) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x629ec483, __VMLINUX_SYMBOL_STR(__mb_cache_entry_free) },
	{ 0xb6ed1e53, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xf306798f, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0xd5263820, __VMLINUX_SYMBOL_STR(mb_cache_destroy) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0xa5a6bbf1, __VMLINUX_SYMBOL_STR(__sync_dirty_buffer) },
	{ 0x25df2881, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x8ffdb3b8, __VMLINUX_SYMBOL_STR(crc16) },
	{ 0x46b934c4, __VMLINUX_SYMBOL_STR(jbd2_journal_revoke) },
	{ 0xe86b72c2, __VMLINUX_SYMBOL_STR(dquot_enable) },
	{ 0xeef82e21, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xab9ff572, __VMLINUX_SYMBOL_STR(security_inode_init_security) },
	{ 0x6c2e3320, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x68b83ac6, __VMLINUX_SYMBOL_STR(posix_acl_alloc) },
	{ 0xd985dc99, __VMLINUX_SYMBOL_STR(mempool_free_pages) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x66355efc, __VMLINUX_SYMBOL_STR(vprintk) },
	{ 0x342d410f, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf070af4f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8d60a8ea, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x32fb684b, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0x324a1837, __VMLINUX_SYMBOL_STR(file_update_time) },
	{ 0xff6cf71f, __VMLINUX_SYMBOL_STR(write_cache_pages) },
	{ 0x32b5fa2f, __VMLINUX_SYMBOL_STR(mem_section) },
	{ 0xcf9f5329, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x1a3c4bd4, __VMLINUX_SYMBOL_STR(jbd2_journal_release_jbd_inode) },
	{ 0x1f9eba18, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0x787bb087, __VMLINUX_SYMBOL_STR(dquot_resume) },
	{ 0xa681fe88, __VMLINUX_SYMBOL_STR(generate_random_uuid) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x792eca23, __VMLINUX_SYMBOL_STR(unlock_two_nondirectories) },
	{ 0x7f369fec, __VMLINUX_SYMBOL_STR(insert_inode_locked) },
	{ 0xb013bc7b, __VMLINUX_SYMBOL_STR(init_uts_ns) },
	{ 0x36b8b283, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x3ba1554a, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x5240ee7, __VMLINUX_SYMBOL_STR(percpu_counter_batch) },
	{ 0x79b2e4f, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0xdde030f0, __VMLINUX_SYMBOL_STR(set_cached_acl) },
	{ 0x7ccdf47e, __VMLINUX_SYMBOL_STR(dax_zero_page_range) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x2ab57ece, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0xb55970cd, __VMLINUX_SYMBOL_STR(key_type_logon) },
	{ 0x848628f, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x7263fb9f, __VMLINUX_SYMBOL_STR(jbd2_journal_blocks_per_page) },
	{ 0x5cce9589, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x99956b15, __VMLINUX_SYMBOL_STR(jbd2_journal_abort) },
	{ 0xf8a6fe12, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_edi) },
	{ 0x11c4b87f, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x4e54778d, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x7de749a0, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x563c582d, __VMLINUX_SYMBOL_STR(jbd2_journal_init_inode) },
	{ 0x451e140c, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x1134d9, __VMLINUX_SYMBOL_STR(inode_nohighmem) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xda41fc52, __VMLINUX_SYMBOL_STR(posix_acl_create) },
	{ 0xa31088c4, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x6e0ee6fd, __VMLINUX_SYMBOL_STR(jbd2_journal_clear_err) },
	{ 0x4df87935, __VMLINUX_SYMBOL_STR(jbd2_journal_start_reserved) },
	{ 0x47ce0447, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x172885e, __VMLINUX_SYMBOL_STR(generic_removexattr) },
	{ 0x25a9f38e, __VMLINUX_SYMBOL_STR(key_put) },
	{ 0xe7287954, __VMLINUX_SYMBOL_STR(dquot_set_dqblk) },
	{ 0x51ef33b8, __VMLINUX_SYMBOL_STR(kstrndup) },
	{ 0xf1174e1a, __VMLINUX_SYMBOL_STR(dax_do_io) },
	{ 0x383b1378, __VMLINUX_SYMBOL_STR(dquot_claim_space_nodirty) },
	{ 0x25825cc0, __VMLINUX_SYMBOL_STR(jbd2_journal_update_sb_errno) },
	{ 0x5a02e799, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x7a1401c9, __VMLINUX_SYMBOL_STR(bh_submit_read) },
	{ 0x487bc062, __VMLINUX_SYMBOL_STR(jbd2_journal_force_commit_nested) },
	{ 0x8d026db6, __VMLINUX_SYMBOL_STR(page_follow_link_light) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x2a0aa53f, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0xe96f9661, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0xd1af4a36, __VMLINUX_SYMBOL_STR(block_commit_write) },
	{ 0x5719a4d7, __VMLINUX_SYMBOL_STR(invalidate_inode_buffers) },
	{ 0xc350bfd3, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8ff4079b, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xf5dacd73, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0xbca2d7ca, __VMLINUX_SYMBOL_STR(bio_associate_blkcg) },
	{ 0xa5ae69ad, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0x124c8919, __VMLINUX_SYMBOL_STR(dquot_quota_on) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xa67da660, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x98456bdf, __VMLINUX_SYMBOL_STR(dquot_initialize) },
	{ 0x7a434713, __VMLINUX_SYMBOL_STR(sync_mapping_buffers) },
	{ 0x760d4dfc, __VMLINUX_SYMBOL_STR(generic_block_fiemap) },
	{ 0x738803e6, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xbf291fcc, __VMLINUX_SYMBOL_STR(wait_for_stable_page) },
	{ 0xe3f65cd9, __VMLINUX_SYMBOL_STR(fs_kobj) },
	{ 0xd9d7c852, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xf8750564, __VMLINUX_SYMBOL_STR(sync_blockdev) },
	{ 0x9f057f9b, __VMLINUX_SYMBOL_STR(block_write_end) },
	{ 0xde2f3de4, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x4dd9cba5, __VMLINUX_SYMBOL_STR(create_empty_buffers) },
	{ 0x2453636c, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x21e58ee2, __VMLINUX_SYMBOL_STR(try_to_free_buffers) },
	{ 0x12388e7c, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0x51311455, __VMLINUX_SYMBOL_STR(pagevec_lookup_tag) },
	{ 0xf82ec573, __VMLINUX_SYMBOL_STR(rb_prev) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x579fbcd2, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x4292364c, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x931609c7, __VMLINUX_SYMBOL_STR(jbd2_journal_get_write_access) },
	{ 0xb0207ecf, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x68f53d78, __VMLINUX_SYMBOL_STR(jbd2_journal_init_jbd_inode) },
	{ 0xb8839b55, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{ 0xb2eefafb, __VMLINUX_SYMBOL_STR(dquot_quota_sync) },
	{ 0xfd7795e9, __VMLINUX_SYMBOL_STR(mb_cache_entry_touch) },
	{ 0x2fd05a83, __VMLINUX_SYMBOL_STR(__breadahead) },
	{ 0xfdfc0b3b, __VMLINUX_SYMBOL_STR(fiemap_fill_next_extent) },
	{ 0xd266efe7, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x1611b190, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x3605bdd7, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x8b8059bd, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x4cb2012b, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xbc435770, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x815f2897, __VMLINUX_SYMBOL_STR(empty_zero_page) },
	{ 0xd4d5cd55, __VMLINUX_SYMBOL_STR(lock_two_nondirectories) },
	{ 0x1c90c86c, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0xe3460c96, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_ecx) },
	{ 0x54a9db5f, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xa2bde3b2, __VMLINUX_SYMBOL_STR(page_cache_sync_readahead) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x2d878586, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x4f56a1e7, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0xa33efab5, __VMLINUX_SYMBOL_STR(unmap_underlying_metadata) },
	{ 0x99e55621, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x33358acf, __VMLINUX_SYMBOL_STR(__percpu_counter_init) },
	{ 0xec967c7a, __VMLINUX_SYMBOL_STR(vfs_setpos) },
	{ 0x4c9356ff, __VMLINUX_SYMBOL_STR(clear_page_dirty_for_io) },
	{ 0xea3f34f5, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x97dee519, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_edx) },
	{ 0x6ff18305, __VMLINUX_SYMBOL_STR(submit_bh) },
	{ 0x602a3ff, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0xec1aa6ef, __VMLINUX_SYMBOL_STR(memzero_explicit) },
	{ 0x8b2686df, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfa30957c, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x67f7403e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x67381dba, __VMLINUX_SYMBOL_STR(dquot_drop) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x21fb443e, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x701b7c0e, __VMLINUX_SYMBOL_STR(sync_inode_metadata) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x395a26c0, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x69c898b0, __VMLINUX_SYMBOL_STR(d_tmpfile) },
	{ 0xa546e3aa, __VMLINUX_SYMBOL_STR(dquot_transfer) },
	{ 0xa66b4cf, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xe45f60d8, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe2e69a16, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xd66bd2a7, __VMLINUX_SYMBOL_STR(__pagevec_release) },
	{ 0xa56d356, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xaaae33f0, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0xbdd100b4, __VMLINUX_SYMBOL_STR(I_BDEV) },
	{ 0x91d38043, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x3f008f82, __VMLINUX_SYMBOL_STR(iter_file_splice_write) },
	{ 0xee765404, __VMLINUX_SYMBOL_STR(blockdev_superblock) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x7de0ed8, __VMLINUX_SYMBOL_STR(jbd2_journal_clear_features) },
	{ 0xf706f1dd, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x574642c4, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0x7cd8296b, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x753a5e8f, __VMLINUX_SYMBOL_STR(jbd2_journal_init_dev) },
	{ 0x5705088a, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x83b3136f, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0x87e69615, __VMLINUX_SYMBOL_STR(generic_file_fsync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb67117c3, __VMLINUX_SYMBOL_STR(truncate_pagecache_range) },
	{ 0x95a22232, __VMLINUX_SYMBOL_STR(jbd2_journal_get_create_access) },
	{ 0x35ec4a2a, __VMLINUX_SYMBOL_STR(inode_dio_wait) },
	{ 0xf1f0a2d1, __VMLINUX_SYMBOL_STR(d_find_any_alias) },
	{ 0xb8cd2f21, __VMLINUX_SYMBOL_STR(pagevec_lookup) },
	{ 0xa2ccfec7, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x4a619f83, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9b4a4599, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0x82f48cef, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x721c2492, __VMLINUX_SYMBOL_STR(jbd2_journal_file_inode) },
	{ 0xdd3bf27d, __VMLINUX_SYMBOL_STR(generic_error_remove_page) },
	{ 0x87551ccd, __VMLINUX_SYMBOL_STR(jbd2_journal_unlock_updates) },
	{ 0x5b27e888, __VMLINUX_SYMBOL_STR(jbd2__journal_start) },
	{ 0xa9fecb58, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xd0a91bab, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0xdeef17d0, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0xf835bf71, __VMLINUX_SYMBOL_STR(end_buffer_read_sync) },
	{ 0x5e4164a5, __VMLINUX_SYMBOL_STR(block_page_mkwrite) },
	{ 0xbf4bdddb, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0xc02a55e2, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x3d1ea3a, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x1543fb44, __VMLINUX_SYMBOL_STR(simple_follow_link) },
	{ 0x106819ce, __VMLINUX_SYMBOL_STR(jbd2_journal_set_features) },
	{ 0x832920d8, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0x36ec157f, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xfbc8e8b0, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xfc713f56, __VMLINUX_SYMBOL_STR(__bforget) },
	{ 0x605e11e0, __VMLINUX_SYMBOL_STR(jbd2_journal_check_available_features) },
	{ 0x97a2cce, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x97ba0014, __VMLINUX_SYMBOL_STR(jbd2_journal_load) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0xe190e070, __VMLINUX_SYMBOL_STR(__blockdev_direct_IO) },
	{ 0x75bb675a, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8378e0d5, __VMLINUX_SYMBOL_STR(inode_set_flags) },
	{ 0x2265b038, __VMLINUX_SYMBOL_STR(inode_needs_sync) },
	{ 0x84964e59, __VMLINUX_SYMBOL_STR(__block_write_begin) },
	{ 0x6b64813d, __VMLINUX_SYMBOL_STR(__find_get_block) },
	{ 0xbe50c43e, __VMLINUX_SYMBOL_STR(posix_acl_default_xattr_handler) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x97632068, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0xf0f7f55d, __VMLINUX_SYMBOL_STR(jbd2_journal_restart) },
	{ 0x36f35b33, __VMLINUX_SYMBOL_STR(mapping_tagged) },
	{ 0xcf3ac812, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xeee8776b, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x22dde1a2, __VMLINUX_SYMBOL_STR(dquot_get_state) },
	{ 0x7b38468c, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x2c2cfc58, __VMLINUX_SYMBOL_STR(try_to_writeback_inodes_sb) },
	{ 0x69135e57, __VMLINUX_SYMBOL_STR(jbd2_journal_stop) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xc9dee864, __VMLINUX_SYMBOL_STR(jbd2_journal_forget) },
	{ 0x2ff03247, __VMLINUX_SYMBOL_STR(filemap_map_pages) },
	{ 0x19a9e62b, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x871c0a7e, __VMLINUX_SYMBOL_STR(fiemap_check_flags) },
	{ 0x288390f4, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xc3d24857, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x815ee0a3, __VMLINUX_SYMBOL_STR(kfree_put_link) },
	{ 0x3c93ea25, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x8235805b, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x6a5a97b2, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x7ec6e097, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0x188ee5ca, __VMLINUX_SYMBOL_STR(dquot_free_inode) },
	{ 0x8d44d866, __VMLINUX_SYMBOL_STR(dquot_release) },
	{ 0x491b9b53, __VMLINUX_SYMBOL_STR(dquot_disable) },
	{ 0x2f4dd6d5, __VMLINUX_SYMBOL_STR(generic_fh_to_dentry) },
	{ 0x30c6c4cb, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xf3cebdc0, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x76f279b9, __VMLINUX_SYMBOL_STR(dquot_commit_info) },
	{ 0x38600823, __VMLINUX_SYMBOL_STR(dquot_set_dqinfo) },
	{ 0xe7ba476a, __VMLINUX_SYMBOL_STR(__cleancache_init_fs) },
	{ 0x31fb14d0, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xdd2c169b, __VMLINUX_SYMBOL_STR(mb_cache_create) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x69128211, __VMLINUX_SYMBOL_STR(pagecache_isize_extended) },
	{ 0x1778355f, __VMLINUX_SYMBOL_STR(page_put_link) },
	{ 0x2fb1e38c, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xe6756f17, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x1b1e8479, __VMLINUX_SYMBOL_STR(filemap_flush) },
	{ 0xf1d8ea9, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0x478b7a9a, __VMLINUX_SYMBOL_STR(jbd2_complete_transaction) },
	{ 0xbcce86f6, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0xf2b5b031, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0x92f6660a, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0xa2bb2fa5, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0xcdcc4f54, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x3afbce07, __VMLINUX_SYMBOL_STR(noop_backing_dev_info) },
	{ 0x2e40be46, __VMLINUX_SYMBOL_STR(bh_uptodate_or_lock) },
	{ 0xcd9d1140, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x524f69f6, __VMLINUX_SYMBOL_STR(mb_cache_entry_delete_block) },
	{ 0xe86d8d9b, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
	{ 0x8ef80825, __VMLINUX_SYMBOL_STR(dquot_commit) },
	{ 0xdf929370, __VMLINUX_SYMBOL_STR(fs_overflowgid) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C37F297B2BD4BB5D662B437");