EXTRA_CFLAGS += -DHRD_OS_LINUX -DHRD_ENDNESS_LITTLE -DBOARD_TYPE_CHIP -I$(src)/../include -I./crg -Wno-format-extra-args -Wno-error=date-time

obj-$(CONFIG_HI_NET_OSAL)	+= hrdCommon.o hrdOs.o crg/sre_sub_dsaf.o crg/sre_sub_pcie.o crg/sre_sub_crg.o
