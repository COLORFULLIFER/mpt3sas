cmd_/home/loquat/mpt3sas/Module.symvers := sed 's/\.ko$$/\.o/' /home/loquat/mpt3sas/modules.order | scripts/mod/modpost -m -a  -o /home/loquat/mpt3sas/Module.symvers -e -i Module.symvers   -T -
