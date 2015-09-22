#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>

static int my_init(void)
{
	printk(" This is Sample Driver Loading into the Kernel\n");
	return 0;
}

static int my_exit(void)
{
	printk(" This Sample Driver i unloading from the kernel\n");
	return 0;
}

module_init(my_init);
module_exit(my_exit);


 

