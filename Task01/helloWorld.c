/*
A very simple kernel module that write a Linux kernel module, and stand-alone Makefile, that when loaded
prints to the kernel debug log level, "Hello World!"
The module is also unloadable

The Makefile is  able to build the kernel module against the
source of the currently-running kernel as well as being able to accept
an arbitrary kernel sources directory from an environment variable.
*/

#include <linux/module.h> // Needed for all modules
#include <linux/init.h> // Needed for entry and exit macros
#include <linux/kernel.h> // Needed for printk macros
#include <asm/current.h> // Needed for process information
#include <linux/sched.h> // Needed for struct task_struct

static int __init start(void){
	printk(KERN_INFO "Hello World!\n");
	return 0;
}

static void __exit stop(void){

}

module_init(start);
module_exit(stop);


