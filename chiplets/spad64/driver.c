/* SPAD64 Linux driver skeleton */
#include <linux/module.h>
#include <linux/init.h>
static int __init spad64_init(void){pr_info("spad64 init\n");return 0;} static void __exit spad64_exit(void){pr_info("spad64 exit\n");} module_init(spad64_init); module_exit(spad64_exit); MODULE_LICENSE("GPL");
