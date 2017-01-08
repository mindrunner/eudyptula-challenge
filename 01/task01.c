#include <linux/module.h>
#include <linux/kernel.h>

MODULE_AUTHOR("Lukas Elsner");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("A Hello World Kernel Module");

static int __init hello_init(void)
{
	pr_debug("Hello World\n");
	return 0;
}

static void __exit hello_exit(void)
{
	pr_debug("Good Bye!\n");
}

module_init(hello_init);
module_exit(hello_exit);
