ifneq ($(KERNELRELEASE),)
obj-m += helloWorld.o

else
KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

modules:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
endif

clean:
	rm -rf *.o* *~ core .depend .*.cmd *.ko *.mod.c *.sym*
