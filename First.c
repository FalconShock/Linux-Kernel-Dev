#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/module.h>

static int init_module(void){
      printk(KERN_INFO "Hello, World !");
      return 0;
}

static void cleaner_module(void){
      printk(KERN_INFO "Bye, World !");
}

module.init(init_module);
module.exit(cleaner_module);
