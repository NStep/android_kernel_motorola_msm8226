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
	{ 0xa9c8a224, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x1424f59, "sg_copy_to_buffer" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x20d35ff5, "debugfs_create_dir" },
	{ 0x70eec7c9, "mem_map" },
	{ 0x97255bdf, "strlen" },
	{ 0xb4dac8dd, "dev_set_drvdata" },
	{ 0xcf8cc5ee, "msm_bus_scale_unregister_client" },
	{ 0xc1130897, "crypto_ablkcipher_type" },
	{ 0xa418317d, "crypto_dequeue_request" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x8371daff, "sg_copy_from_buffer" },
	{ 0x8949858b, "schedule_work" },
	{ 0xdfabe0ff, "scm_call" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x78f062cb, "msm_bus_scale_client_update_request" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x1f7220d4, "mutex_unlock" },
	{ 0xe1ac0a34, "debugfs_create_file" },
	{ 0x103c9c3e, "qce_ablk_cipher_req" },
	{ 0x6c60ea37, "crypto_aead_type" },
	{ 0x27c4e16d, "debugfs_remove_recursive" },
	{ 0x91dda801, "scatterwalk_map_and_copy" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa7ecf324, "__init_waitqueue_head" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xe15f32b5, "msm_bus_cl_get_pdata" },
	{ 0x64ed92b1, "dev_err" },
	{ 0x8ddab831, "_raw_spin_unlock_irqrestore" },
	{ 0x6aae07e8, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xe3f0223, "wait_for_completion_interruptible" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xe36f91c1, "crypto_register_ahash" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x404a7484, "mutex_lock" },
	{ 0xd26f8cb, "qce_enable_clk" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xbe2c0274, "add_timer" },
	{ 0x12e272f4, "platform_driver_register" },
	{ 0x2c7a412e, "device_init_wakeup" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x597ceff0, "qce_hw_support" },
	{ 0xf55d502d, "crypto_enqueue_request" },
	{ 0x9949a97c, "_dev_info" },
	{ 0x1437bc5e, "qce_aead_req" },
	{ 0x383c6f65, "qce_open" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x81a61e31, "qce_disable_clk" },
	{ 0x700279fc, "crypto_unregister_ahash" },
	{ 0x1da3a0ee, "crypto_register_alg" },
	{ 0x98fa95e7, "kmem_cache_alloc_trace" },
	{ 0x1a9b678e, "_raw_spin_lock_irqsave" },
	{ 0x575c81e1, "qce_close" },
	{ 0x39ce1d28, "pm_stay_awake" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7ded90b3, "msm_bus_scale_register_client" },
	{ 0xcfd9a2c0, "des_ekey" },
	{ 0x996ea6ab, "pm_relax" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x7a4497db, "kzfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xad998077, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x341c9490, "platform_driver_unregister" },
	{ 0x8bfb200b, "crypto_unregister_alg" },
	{ 0x7d070e0e, "dev_get_drvdata" },
	{ 0x75b45b18, "qce_process_sha_req" },
	{ 0xe14fcbef, "crypto_ahash_type" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

