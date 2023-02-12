cmd_/home/loquat/mpt3sas/modules.order := {   echo /home/loquat/mpt3sas/mpt3sas_1.ko; :; } | awk '!x[$$0]++' - > /home/loquat/mpt3sas/modules.order
