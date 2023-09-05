#include <linux/module.h>
#include <linux/kernel.h>

#define DRIVER_AUTHOR "Pavlo Svirin"
#define DRIVER_DESC   "A Hello World module for Eudyptula, task 01"
#define DRIVER_LICENSE "GPL"
#define DRIVER_SUPPORTED_DEVICE "hellodevice"

static int __init init_hello_module(void){
	printk(KERN_INFO "Hello world!");

	return 0;
}


static void __exit exit_hello_module(void){
	printk(KERN_INFO "Goodbye world!");
}

module_init(init_hello_module);
module_exit(exit_hello_module);


MODULE_LICENSE(DRIVER_LICENSE);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_SUPPORTED_DEVICE(DRIVER_SUPPORTED_DEVICE);
