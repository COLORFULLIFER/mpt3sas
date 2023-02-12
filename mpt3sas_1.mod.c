#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x32e21920, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x19d09ac9, "dma_map_sg_attrs" },
	{ 0x26087692, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x890eac70, "scsi_remove_target" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0x10d70d7e, "scsi_change_queue_depth" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x2ff374be, "sas_release_transport" },
	{ 0x822531c7, "pci_free_irq_vectors" },
	{ 0x6ababb05, "debugfs_create_dir" },
	{ 0x8252e049, "scsi_host_alloc" },
	{ 0x63b08813, "debugfs_create_u8" },
	{ 0xb2377275, "param_get_int" },
	{ 0x4fe586bc, "_dev_printk" },
	{ 0x59d2a97, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xc96a028b, "scsi_add_host_with_dma" },
	{ 0xe547c8da, "scsi_block_requests" },
	{ 0xe6a1d1fb, "blk_queue_max_hw_sectors" },
	{ 0xe60e529d, "pci_irq_get_affinity" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0xbc3c631b, "dma_unmap_sg_attrs" },
	{ 0xa4eb5793, "sbitmap_weight" },
	{ 0xb0b9c272, "sas_is_tlr_enabled" },
	{ 0x7eae295f, "dma_set_mask" },
	{ 0x158c5b96, "pci_stop_and_remove_bus_device_locked" },
	{ 0x4290c7d3, "sas_phy_add" },
	{ 0x2a8abeba, "scsi_unblock_requests" },
	{ 0x7038ae48, "sas_disable_tlr" },
	{ 0xfb14ff3c, "pci_disable_device" },
	{ 0xb633f115, "irq_poll_enable" },
	{ 0x4d4d7b79, "blk_mq_map_queues" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4fe9e224, "sas_port_add_phy" },
	{ 0x29332499, "__x86_indirect_thunk_rsi" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x67007b05, "blk_mq_tag_to_rq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x50b49789, "scmd_printk" },
	{ 0x4d14e64, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3a48403c, "sas_port_delete_phy" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x87cec3d1, "dma_free_attrs" },
	{ 0xacc6ff38, "param_set_int" },
	{ 0x8ab92987, "sas_rphy_add" },
	{ 0xc64d3793, "debugfs_create_file" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1ec78afe, "blk_queue_virt_boundary" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xb3378a7b, "pv_ops" },
	{ 0x603f0c58, "scsi_print_command" },
	{ 0x35b97737, "dma_set_coherent_mask" },
	{ 0x2da00799, "kthread_create_on_node" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x424a3ece, "sas_port_delete" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x59c89e5c, "scsi_host_busy" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x914166a0, "blk_mq_unique_tag" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x44d4f11e, "dma_get_required_mask" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xae60cca9, "scsi_internal_device_block_nowait" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3e5f41a9, "raid_class_release" },
	{ 0x3db21ca9, "sas_attach_transport" },
	{ 0x1e323c29, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xde718b0a, "scsi_is_host_device" },
	{ 0x5e60f2f1, "misc_register" },
	{ 0x5f49d55d, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0xc18f69f3, "pci_enable_pcie_error_reporting" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x22a9e612, "pci_restore_state" },
	{ 0x4ab4cd6d, "sas_expander_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb37e6ec2, "sas_read_port_mode_page" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xb7cae461, "sas_end_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xde80cd09, "ioremap" },
	{ 0xf1e046cc, "panic" },
	{ 0x9166fada, "strncpy" },
	{ 0xdeddd266, "fasync_helper" },
	{ 0x29a90398, "pci_read_config_word" },
	{ 0x7df9c00c, "debugfs_remove" },
	{ 0xf9dd2253, "scsi_scan_host" },
	{ 0x1d0107ac, "dma_alloc_attrs" },
	{ 0x2275ee6e, "sdev_prefix_printk" },
	{ 0x584a1c20, "pci_device_is_present" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc6f5d91e, "sas_port_add" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8327cbe, "raid_class_attach" },
	{ 0x19d47a99, "scsi_host_put" },
	{ 0xf45444c3, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x822b009f, "pci_find_capability" },
	{ 0x800473f, "__cond_resched" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x54646bc4, "pci_select_bars" },
	{ 0xf491d782, "sas_phy_free" },
	{ 0xf885e4ab, "_dev_info" },
	{ 0xbb0906df, "pci_disable_link_state" },
	{ 0x1293d310, "scsi_add_device" },
	{ 0xf76b3852, "blk_queue_flag_set" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x39eb8084, "starget_for_each_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x9b7c64da, "device_reprobe" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x62891729, "blk_mq_pci_map_queues" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x6cb2f5a1, "cpumask_next_and" },
	{ 0x15d079a1, "scsi_device_set_state" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x45937b6f, "wake_up_process" },
	{ 0xd43fe21b, "sas_phy_alloc" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x129c249f, "pci_cfg_access_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x233f929e, "pci_unregister_driver" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0xf35141b2, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x7ffbb6ed, "sas_remove_host" },
	{ 0xe297b807, "__scsi_iterate_devices" },
	{ 0x696f32fb, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf5efb42f, "pci_disable_pcie_error_reporting" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x175b8fad, "scsi_internal_device_unblock_nowait" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x52a0ef98, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf9089dcb, "sas_port_alloc_num" },
	{ 0xebe463b3, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x22bf9eb5, "scsi_get_vpd_page" },
	{ 0xf2bb7d9, "__pci_register_driver" },
	{ 0x344b27fd, "kill_fasync" },
	{ 0xe8a0c3e9, "scsi_build_sense" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb8d1a1a0, "param_ops_ushort" },
	{ 0x63b370a5, "bsg_job_done" },
	{ 0xa8528b64, "pci_enable_device_mem" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x6b0827eb, "pci_release_selected_regions" },
	{ 0x17b6c04f, "pci_request_selected_regions" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x2b24ae65, "dma_pool_create" },
	{ 0xe66b5734, "pci_cfg_access_unlock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7b52b91f, "misc_deregister" },
	{ 0x1cf54be1, "sas_enable_tlr" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xcdc8db18, "pcie_capability_read_word" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6e053cc4, "pci_save_state" },
	{ 0xcb02aca8, "param_ops_ullong" },
	{ 0xa87aa399, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_sas,raid_class");

MODULE_ALIAS("pci:v00001000d00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000082sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000083sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000084sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000086sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000087sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000006Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000002B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000002B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000007Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000097sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000094sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000095sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4B1044C3B2284D2362FB7B7");
