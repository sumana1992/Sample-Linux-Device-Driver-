#include<linux/init.h>
#include<linux/module.h>

static int __init helloWorld_init(void){
	printk(KERN_INFO "Hello World\n");
	return 0;
}

static void __exit helloWorld_exit(void){
	printk(KERN_INFO "Bye!\n");
}

module_init(helloWorld_init);
module_exit(helloWorld_exit);
