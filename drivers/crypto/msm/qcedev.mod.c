#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6988dd6f, "module_layout" },
	{ 0x341c9490, "platform_driver_unregister" },
	{ 0x27c4e16d, "debugfs_remove_recursive" },
	{ 0x12e272f4, "platform_driver_register" },
	{ 0xe1ac0a34, "debugfs_create_file" },
	{ 0xb81960ca, "snprintf" },
	{ 0x20d35ff5, "debugfs_create_dir" },
	{ 0xa7ecf324, "__init_waitqueue_head" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x70eec7c9, "mem_map" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x2f4ea1ac, "wait_for_completion" },
	{ 0xdfabe0ff, "scm_call" },
	{ 0xd26f8cb, "qce_enable_clk" },
	{ 0x98fa95e7, "kmem_cache_alloc_trace" },
	{ 0xa9c8a224, "kmalloc_caches" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xe15f32b5, "msm_bus_cl_get_pdata" },
	{ 0x7ded90b3, "msm_bus_scale_register_client" },
	{ 0x597ceff0, "qce_hw_support" },
	{ 0x43720747, "misc_register" },
	{ 0xb4dac8dd, "dev_set_drvdata" },
	{ 0x383c6f65, "qce_open" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x81a61e31, "qce_disable_clk" },
	{ 0x78f062cb, "msm_bus_scale_client_update_request" },
	{ 0x1f7220d4, "mutex_unlock" },
	{ 0x404a7484, "mutex_lock" },
	{ 0x7a4497db, "kzfree" },
	{ 0xad998077, "complete" },
	{ 0x8ddab831, "_raw_spin_unlock_irqrestore" },
	{ 0x1a9b678e, "_raw_spin_lock_irqsave" },
	{ 0x75b45b18, "qce_process_sha_req" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0x103c9c3e, "qce_ablk_cipher_req" },
	{ 0x27e1a049, "printk" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x2898509f, "misc_deregister" },
	{ 0xcf8cc5ee, "msm_bus_scale_unregister_client" },
	{ 0x575c81e1, "qce_close" },
	{ 0x7d070e0e, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

