PWD := $(shell pwd)
KDIR := /lib/modules/$(shell uname -r)/build

obj-m += ext42.o

ext42-y	:= merkle_tree3.o balloc.o bitmap.o dir.o file.o fsync.o ialloc.o inode.o page-io.o \
		ioctl.o namei.o super.o symlink.o hash.o resize.o extents.o \
		ext4_jbd2.o migrate.o mballoc.o block_validity.o move_extent.o \
		mmp.o indirect.o extents_status.o xattr.o xattr_user.o \
		xattr_trusted.o inline.o readpage.o sysfs.o 

ext42-$(CONFIG_EXT4_FS_POSIX_ACL)	+= acl.o
ext42-$(CONFIG_EXT4_FS_SECURITY)	+= xattr_security.o
ext42-$(CONFIG_EXT4_FS_ENCRYPTION)	+= crypto_policy.o crypto.o \
		crypto_key.o crypto_fname.o

EXTRA_CFLAGS=-I$(PWD)/include

SUBDIRS := $(PWD)
COMMON_OPS = -C $(KDIR) M='$(SUBDIRS)' EXTRA_CFLAGS='$(EXTRA_CFLAGS)'

deafult:
	$(MAKE) $(COMMON_OPS) modules

clean:
	rm -rf *.o *.ko *.cmd *.mod.c .*.cmd *.o.ur-safe .tmp_versions modules.order Module.symvers .cache.mk *~
