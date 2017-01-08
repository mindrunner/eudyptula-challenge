name := task01
obj-m := ${name}.o
KDIR := /lib/modules/$(shell uname -r)/build
PWD  := $(shell pwd)
DRVNAME := ${name}.ko
CFLAGS_${name}.o := -DDEBUG

default:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	rm -rf *~ ${name} *.o *.ko *.cmd **.mod.c modules.order Module.symvers .tmp_versions .${name}.*

install:
	insmod $(DRVNAME)

uninstall:
	rmmod $(DRVNAME)

reinstall:
	rmmod $(DRVNAME)
	insmod $(DRVNAME)
