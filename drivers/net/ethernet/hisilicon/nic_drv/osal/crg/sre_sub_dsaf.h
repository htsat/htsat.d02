/******************************************************************************

                  ??Ȩ???? (C), 2011-2021, ??Ϊ???????޹?˾

 ******************************************************************************
  ?? ?? ??   : sre_sub_dsaf.h
  ?? ?? ??   : ????
  ??    ??   : z00176027
  ????????   : 2013??10??17??
  ?????޸?   :
  ????????   : p660 dsaf??ϵͳ ??λ???⸴λ????ͷ?ļ?
  ?????б?   :
  ?޸???ʷ   :
  1.??    ??   : 2013??10??17??
    ??    ??   : z00176027
    ?޸?????   : ?????ļ?

******************************************************************************/
#ifndef __C_SRE_SUB_DSAF_H__
#define __C_SRE_SUB_DSAF_H__

#include "hrdCommon.h"
#include "hrdOs.h"
#include "osal_api.h"
#include "hrd_crg_api.h"

#ifdef HRD_OS_LINUX
#include "hrd_comm_kernel_api.h"
#endif



/*----------------------------------------------*
 * ?ⲿ??��˵??                                 *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ?ⲿ????ԭ??˵??                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ?ڲ?????ԭ??˵??                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ȫ?ֱ?��                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ģ?鼶??��                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ??��????                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ?궨??                                       *
 *----------------------------------------------*/

    /* dsaf_subctrl ģ???Ĵ???????ַ */
#define DSAF_SUB_BASE                             (0xC0000000)
#define DSAF_SUB_BASE_SIZE                        (0x10000)

/******************************************************************************/
/*                      PHOSPHOR DSAF_SUB Registers' Definitions                            */
/******************************************************************************/

#define DSAF_SUB_SC_NT_SRAM_CLK_SEL_REG                (DSAF_SUB_BASE + 0x100)  /* Node Tableģ??TCAM??memoryʱ?ӿ??ƼĴ??? */
#define DSAF_SUB_SC_HILINK3_CRG_CTRL0_REG              (DSAF_SUB_BASE + 0x180)  /* ????HILINK CRG */
#define DSAF_SUB_SC_HILINK3_CRG_CTRL1_REG              (DSAF_SUB_BASE + 0x184)  /* ????HILINK CRG */
#define DSAF_SUB_SC_HILINK3_CRG_CTRL2_REG              (DSAF_SUB_BASE + 0x188)  /* ????HILINK CRG */
#define DSAF_SUB_SC_HILINK3_CRG_CTRL3_REG              (DSAF_SUB_BASE + 0x18C)  /* ????HILINK CRG */
#define DSAF_SUB_SC_HILINK4_CRG_CTRL0_REG              (DSAF_SUB_BASE + 0x190)  /* ????HILINK CRG */
#define DSAF_SUB_SC_HILINK4_CRG_CTRL1_REG              (DSAF_SUB_BASE + 0x194)  /* ????HILINK CRG */
#define DSAF_SUB_SC_DSAF_CLK_EN_REG                    (DSAF_SUB_BASE + 0x300)  /* DSAFʱ??ʹ?ܼĴ??? */
#define DSAF_SUB_SC_DSAF_CLK_DIS_REG                   (DSAF_SUB_BASE + 0x304)  /* DSAFʱ?ӽ?ֹ?Ĵ??? */
#define DSAF_SUB_SC_NT_CLK_EN_REG                      (DSAF_SUB_BASE + 0x308)  /* NTʱ??ʹ?ܼĴ??? */
#define DSAF_SUB_SC_NT_CLK_DIS_REG                     (DSAF_SUB_BASE + 0x30C)  /* NTʱ?ӽ?ֹ?Ĵ??? */
#define DSAF_SUB_SC_XGE_CLK_EN_REG                     (DSAF_SUB_BASE + 0x310)  /* XGEʱ??ʹ?ܼĴ??? */
#define DSAF_SUB_SC_XGE_CLK_DIS_REG                    (DSAF_SUB_BASE + 0x314)  /* XGEʱ?ӽ?ֹ?Ĵ??? */
#define DSAF_SUB_SC_GE_CLK_EN_REG                      (DSAF_SUB_BASE + 0x318)  /* GEʱ??ʹ?ܼĴ??? */
#define DSAF_SUB_SC_GE_CLK_DIS_REG                     (DSAF_SUB_BASE + 0x31C)  /* GEʱ?ӽ?ֹ?Ĵ??? */
#define DSAF_SUB_SC_PPE_CLK_EN_REG                     (DSAF_SUB_BASE + 0x320)  /* PPEʱ??ʹ?ܼĴ??? */
#define DSAF_SUB_SC_PPE_CLK_DIS_REG                    (DSAF_SUB_BASE + 0x324)  /* PPEʱ?ӽ?ֹ?Ĵ??? */
#define DSAF_SUB_SC_ROCEE_CLK_EN_REG                   (DSAF_SUB_BASE + 0x328)  /* ROCEEʱ??ʹ?ܼĴ??? */
#define DSAF_SUB_SC_ROCEE_CLK_DIS_REG                  (DSAF_SUB_BASE + 0x32C)  /* ROCEEʱ?ӽ?ֹ?Ĵ??? */
#define DSAF_SUB_SC_CPU_CLK_EN_REG                     (DSAF_SUB_BASE + 0x330)  /* CPUʱ??ʹ?ܼĴ??? */
#define DSAF_SUB_SC_CPU_CLK_DIS_REG                    (DSAF_SUB_BASE + 0x334)  /* CPUʱ?ӽ?ֹ?Ĵ??? */
#define DSAF_SUB_SC_SAS_CLK_EN_REG                     (DSAF_SUB_BASE + 0x338)  /* SASʱ???ſ??ź? */
#define DSAF_SUB_SC_SAS_CLK_DIS_REG                    (DSAF_SUB_BASE + 0x33C)  /* SASʱ???ſ??ź? */
#define DSAF_SUB_SC_ITS_CLK_EN_REG                     (DSAF_SUB_BASE + 0x340)  /* itsʱ??ʹ?ܼĴ??? */
#define DSAF_SUB_SC_ITS_CLK_DIS_REG                    (DSAF_SUB_BASE + 0x344)  /* itsʱ?ӽ?ֹ?Ĵ??? */
#define DSAF_SUB_SC_SRAM_CLK_EN_REG                    (DSAF_SUB_BASE + 0x348)  /* SRAMʱ??ʹ?ܼĴ??? */
#define DSAF_SUB_SC_SRAM_CLK_DIS_REG                   (DSAF_SUB_BASE + 0x34C)  /* SRAMʱ?ӽ?ֹ?Ĵ??? */
#define DSAF_SUB_SC_RCB_PPE_COM_CLK_EN_REG             (DSAF_SUB_BASE + 0x350)  /* RCB PPE????ʱ??ʹ?ܼĴ??? */
#define DSAF_SUB_SC_RCB_PPE_COM_CLK_DIS_REG            (DSAF_SUB_BASE + 0x354)  /* RCB PPE????ʱ?ӽ?ֹ?Ĵ??? */
#define DSAF_SUB_SC_TIMER_CLK_EN_REG                   (DSAF_SUB_BASE + 0x358)  /* TIMERʱ??ʹ?ܼĴ??? */
#define DSAF_SUB_SC_TIMER_CLK_DIS_REG                  (DSAF_SUB_BASE + 0x35C)  /* TIMERʱ?ӽ?ֹ?Ĵ??? */
#define DSAF_SUB_SC_SLLC_CLK_EN_REG                    (DSAF_SUB_BASE + 0x360)  /* SLLC1ʱ??ʹ?ܼĴ??? */
#define DSAF_SUB_SC_SLLC_CLK_DIS_REG                   (DSAF_SUB_BASE + 0x364)  /* SLLC1ʱ?ӽ?ֹ?Ĵ??? */
#define DSAF_SUB_SC_XBAR_RESET_REQ_REG                 (DSAF_SUB_BASE + 0xA00)  /* XBAR?���λ???????ƼĴ??? */
#define DSAF_SUB_SC_XBAR_RESET_DREQ_REG                (DSAF_SUB_BASE + 0xA04)  /* XBAR?���λȥ???????ƼĴ??? */
#define DSAF_SUB_SC_NT_RESET_REQ_REG                   (DSAF_SUB_BASE + 0xA08)  /* NT?���λ???????ƼĴ??? */
#define DSAF_SUB_SC_NT_RESET_DREQ_REG                  (DSAF_SUB_BASE + 0xA0C)  /* NT?���λȥ???????ƼĴ??? */
#define DSAF_SUB_SC_XGE_RESET_REQ_REG                  (DSAF_SUB_BASE + 0xA10)  /* XGE?���λ???????ƼĴ??? */
#define DSAF_SUB_SC_XGE_RESET_DREQ_REG                 (DSAF_SUB_BASE + 0xA14)  /* XGE?���λȥ???????ƼĴ??? */
#define DSAF_SUB_SC_GE_RESET_REQ0_REG                  (DSAF_SUB_BASE + 0xA18)  /* GE?���λ???????ƼĴ???0 */
#define DSAF_SUB_SC_GE_RESET_DREQ0_REG                 (DSAF_SUB_BASE + 0xA1C)  /* GE?���λȥ???????ƼĴ???0 */
#define DSAF_SUB_SC_GE_RESET_REQ1_REG                  (DSAF_SUB_BASE + 0xA20)  /* GE?���λ???????ƼĴ???1 */
#define DSAF_SUB_SC_GE_RESET_DREQ1_REG                 (DSAF_SUB_BASE + 0xA24)  /* GE?���λȥ???????ƼĴ???1 */
#define DSAF_SUB_SC_PPE_RESET_REQ_REG                  (DSAF_SUB_BASE + 0xA48)  /* PPE?���λ???????ƼĴ??? */
#define DSAF_SUB_SC_PPE_RESET_DREQ_REG                 (DSAF_SUB_BASE + 0xA4C)  /* PPE?���λȥ???????ƼĴ??? */
#define DSAF_SUB_SC_ROCEE_RESET_REQ_REG                (DSAF_SUB_BASE + 0xA50)  /* ROCEE?���λ???????ƼĴ??? */
#define DSAF_SUB_SC_ROCEE_RESET_DREQ_REG               (DSAF_SUB_BASE + 0xA54)  /* ROCEE?���λȥ???????ƼĴ??? */
#define DSAF_SUB_SC_CPU_RESET_REQ_REG                  (DSAF_SUB_BASE + 0xA58)  /* CPU?���λ???????ƼĴ??? */
#define DSAF_SUB_SC_CPU_RESET_DREQ_REG                 (DSAF_SUB_BASE + 0xA5C)  /* CPU?���λȥ???????ƼĴ??? */
#define DSAF_SUB_SC_SAS_RESET_REQ_REG                  (DSAF_SUB_BASE + 0xA60)  /* SAS?���λ???? */
#define DSAF_SUB_SC_SAS_RESET_DREQ_REG                 (DSAF_SUB_BASE + 0xA64)  /* SAS?????���λ???? */
#define DSAF_SUB_SC_SLLC_TSVRX_RESET_REQ_REG           (DSAF_SUB_BASE + 0xA68)  /* SLLC TSVRXͨ???���λ???????ƼĴ??? */
#define DSAF_SUB_SC_SLLC_TSVRX_RESET_DREQ_REG          (DSAF_SUB_BASE + 0xA6C)  /* SLLC TSVRXͨ???���λ???????ƼĴ??? */
#define DSAF_SUB_SC_ITS_RESET_REQ_REG                  (DSAF_SUB_BASE + 0xA70)  /* ITS?���λ???????ƼĴ??? */
#define DSAF_SUB_SC_ITS_RESET_DREQ_REG                 (DSAF_SUB_BASE + 0xA74)  /* ITS?���λȥ???????ƼĴ??? */
#define DSAF_SUB_SC_SRAM_RESET_REQ_REG                 (DSAF_SUB_BASE + 0xA80)  /* SRAM?���λ???????ƼĴ??? */
#define DSAF_SUB_SC_SRAM_RESET_DREQ_REG                (DSAF_SUB_BASE + 0xA84)  /* SRAM?���λȥ???????ƼĴ??? */
#define DSAF_SUB_SC_RCB_PPE_COM_RESET_REQ_REG          (DSAF_SUB_BASE + 0xA88)  /* RCB PPE?????���λ???????ƼĴ??? */
#define DSAF_SUB_SC_RCB_PPE_COM_RESET_DREQ_REG         (DSAF_SUB_BASE + 0xA8C)  /* RCB PPE?????���λȥ???????ƼĴ??? */
#define DSAF_SUB_SC_TIMER_RESET_REQ_REG                (DSAF_SUB_BASE + 0xA98)  /* TIMER?���λ???????ƼĴ??? */
#define DSAF_SUB_SC_TIMER_RESET_DREQ_REG               (DSAF_SUB_BASE + 0xA9C)  /* TIMER?���λȥ???????ƼĴ??? */
#define DSAF_SUB_SC_SLLC_RESET_REQ_REG                 (DSAF_SUB_BASE + 0xAA0)  /* SLLC1?���λ???????ƼĴ??? */
#define DSAF_SUB_SC_SLLC_RESET_DREQ_REG                (DSAF_SUB_BASE + 0xAA4)  /* SLLC1?���λȥ???????ƼĴ??? */
#define DSAF_SUB_SC_DISPATCH_DAW_EN_REG                (DSAF_SUB_BASE + 0x1000) /* dispatch daw en???? */
#define DSAF_SUB_SC_DISPATCH_DAW_ARRAY0_REG            (DSAF_SUB_BASE + 0x1004) /* dispatch daw????????0 */
#define DSAF_SUB_SC_DISPATCH_DAW_ARRAY1_REG            (DSAF_SUB_BASE + 0x1008) /* dispatch daw????????1 */
#define DSAF_SUB_SC_DISPATCH_DAW_ARRAY2_REG            (DSAF_SUB_BASE + 0x100C) /* dispatch daw????????2 */
#define DSAF_SUB_SC_DISPATCH_DAW_ARRAY3_REG            (DSAF_SUB_BASE + 0x1010) /* dispatch daw????????3 */
#define DSAF_SUB_SC_DISPATCH_DAW_ARRAY4_REG            (DSAF_SUB_BASE + 0x1014) /* dispatch daw????????4 */
#define DSAF_SUB_SC_DISPATCH_DAW_ARRAY5_REG            (DSAF_SUB_BASE + 0x1018) /* dispatch daw????????5 */
#define DSAF_SUB_SC_DISPATCH_DAW_ARRAY6_REG            (DSAF_SUB_BASE + 0x101C) /* dispatch daw????????6 */
#define DSAF_SUB_SC_DISPATCH_DAW_ARRAY7_REG            (DSAF_SUB_BASE + 0x1020) /* dispatch daw????????7 */
#define DSAF_SUB_SC_DISPATCH_RETRY_CONTROL_REG         (DSAF_SUB_BASE + 0x1030) /* dispatch retry???ƼĴ??? */
#define DSAF_SUB_SC_DISPATCH_INTMASK_REG               (DSAF_SUB_BASE + 0x1100) /* dispatch???ж??��μĴ??? */
#define DSAF_SUB_SC_DISPATCH_RAWINT_REG                (DSAF_SUB_BASE + 0x1104) /* dispatch??ԭʼ?ж?״̬?Ĵ??? */
#define DSAF_SUB_SC_DISPATCH_INTSTAT_REG               (DSAF_SUB_BASE + 0x1108) /* dispatch???��κ????ж?״̬?Ĵ??? */
#define DSAF_SUB_SC_DISPATCH_INTCLR_REG                (DSAF_SUB_BASE + 0x110C) /* dispatch???ж??????Ĵ??? */
#define DSAF_SUB_SC_DISPATCH_ERRSTAT_REG               (DSAF_SUB_BASE + 0x1110) /* dispatch??ERR״̬?Ĵ??? */
#define DSAF_SUB_SC_REMAP_CTRL_REG                     (DSAF_SUB_BASE + 0x1200) /* subsys??????Remap?Ĵ??? */
#define DSAF_SUB_SC_SRAM_CTRL0_REG                     (DSAF_SUB_BASE + 0x2030) /* sram???ƼĴ???0 */
#define DSAF_SUB_SC_M3_CTRL_REG                        (DSAF_SUB_BASE + 0x2040) /* M3???ƼĴ??? */
#define DSAF_SUB_SC_REMAP_SRAM_ADDR_CTRL_REG           (DSAF_SUB_BASE + 0x2050) /* M3 remap??sram?ĵ?ַ???? */
#define DSAF_SUB_SC_LIGHT_MODULE_DETECT_EN_REG         (DSAF_SUB_BASE + 0x2060) /* ??ģ??SD?źż???ʹ?ܼĴ??? */
#define DSAF_SUB_SC_TIMER_CLKEN_CTRL_REG               (DSAF_SUB_BASE + 0x2070) /* TIMER??clken???ɿ??ƼĴ??? */
#define DSAF_SUB_SC_VMID_CTRL0_REG                     (DSAF_SUB_BASE + 0x20E0) /* M3 VMID???? */
#define DSAF_SUB_SC_ROCEE_VMID_REG                     (DSAF_SUB_BASE + 0x20E4) /* ROCEE VMID???? */
#define DSAF_SUB_SC_ITS_M3_INT_MUX_SEL_REG             (DSAF_SUB_BASE + 0x21F0) /* ???ж??͵?ITS????M3????MUXѡ?? */
#define DSAF_SUB_SC_FTE_MUX_SEL_REG                    (DSAF_SUB_BASE + 0x2200)
#define DSAF_SUB_SC_TCAM_MBIST_EN_REG                  (DSAF_SUB_BASE + 0x2300) /* DSAF??TCAM MBIST????ʹ?ܡ? */
#define DSAF_SUB_SC_HILINK2_LRSTB_MUX_CTRL_REG         (DSAF_SUB_BASE + 0x2340) /* HILINK2 lrstb[7:0]??MUXѡ?????? */
#define DSAF_SUB_SC_HILINK2_MACRO_SS_REFCLK_REG        (DSAF_SUB_BASE + 0x2400) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK2_MACRO_CS_REFCLK_DIRSEL_REG (DSAF_SUB_BASE + 0x2404) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK2_MACRO_LIFECLK2DIG_SEL_REG  (DSAF_SUB_BASE + 0x2408) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK2_MACRO_CORE_CLK_SELEXT_REG  (DSAF_SUB_BASE + 0x240C) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK2_MACRO_CORE_CLK_SEL_REG     (DSAF_SUB_BASE + 0x2410) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK2_MACRO_CTRL_BUS_MODE_REG    (DSAF_SUB_BASE + 0x2414) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK2_MACRO_MACROPWRDB_REG       (DSAF_SUB_BASE + 0x2418) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK2_MACRO_GRSTB_REG            (DSAF_SUB_BASE + 0x241C) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK2_MACRO_BIT_SLIP_REG         (DSAF_SUB_BASE + 0x2420) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK2_MACRO_LRSTB_REG            (DSAF_SUB_BASE + 0x2424) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK3_MACRO_SS_REFCLK_REG        (DSAF_SUB_BASE + 0x2500) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK3_MACRO_CS_REFCLK_DIRSEL_REG (DSAF_SUB_BASE + 0x2504) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK3_MACRO_LIFECLK2DIG_SEL_REG  (DSAF_SUB_BASE + 0x2508) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK3_MACRO_CORE_CLK_SELEXT_REG  (DSAF_SUB_BASE + 0x250C) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK3_MACRO_CORE_CLK_SEL_REG     (DSAF_SUB_BASE + 0x2510) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK3_MACRO_CTRL_BUS_MODE_REG    (DSAF_SUB_BASE + 0x2514) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK3_MACRO_MACROPWRDB_REG       (DSAF_SUB_BASE + 0x2518) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK3_MACRO_GRSTB_REG            (DSAF_SUB_BASE + 0x251C) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK3_MACRO_BIT_SLIP_REG         (DSAF_SUB_BASE + 0x2520) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK3_MACRO_LRSTB_REG            (DSAF_SUB_BASE + 0x2524) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK4_MACRO_SS_REFCLK_REG        (DSAF_SUB_BASE + 0x2600) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK4_MACRO_CS_REFCLK_DIRSEL_REG (DSAF_SUB_BASE + 0x2604) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK4_MACRO_LIFECLK2DIG_SEL_REG  (DSAF_SUB_BASE + 0x2608) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK4_MACRO_CORE_CLK_SELEXT_REG  (DSAF_SUB_BASE + 0x260C) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK4_MACRO_CORE_CLK_SEL_REG     (DSAF_SUB_BASE + 0x2610) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK4_MACRO_CTRL_BUS_MODE_REG    (DSAF_SUB_BASE + 0x2614) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK4_MACRO_MACROPWRDB_REG       (DSAF_SUB_BASE + 0x2618) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK4_MACRO_GRSTB_REG            (DSAF_SUB_BASE + 0x261C) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK4_MACRO_BIT_SLIP_REG         (DSAF_SUB_BASE + 0x2620) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_HILINK4_MACRO_LRSTB_REG            (DSAF_SUB_BASE + 0x2624) /* HILINK???üĴ??? */
#define DSAF_SUB_SC_M3_I_ADDR_H_REG                    (DSAF_SUB_BASE + 0x2E00) /* M3ָ??ͨ?��?32λ??ַ?????Ĵ??? */
#define DSAF_SUB_SC_M3_D_ADDR_H_REG                    (DSAF_SUB_BASE + 0x2E04) /* M3????ͨ?��?32λ??ַ?????Ĵ??? */
#define DSAF_SUB_SC_M3_S_ADDR_H_REG                    (DSAF_SUB_BASE + 0x2E08) /* M3????ͨ?��?32λ??ַ?????Ĵ??? */
#define DSAF_SUB_SC_SMMU_MEM_CTRL0_REG                 (DSAF_SUB_BASE + 0x3000) /* smmu mem???ƼĴ???0 */
#define DSAF_SUB_SC_SMMU_MEM_CTRL1_REG                 (DSAF_SUB_BASE + 0x3004) /* smmu mem???ƼĴ???1 */
#define DSAF_SUB_SC_SMMU_MEM_CTRL2_REG                 (DSAF_SUB_BASE + 0x3008) /* smmu mem???ƼĴ???2 */
#define DSAF_SUB_SC_SLLC1_MEM_CTRL_REG                 (DSAF_SUB_BASE + 0x3010) /* sllc1 mem???ƼĴ??? */
#define DSAF_SUB_SC_SRAM_MEM_CTRL_REG                  (DSAF_SUB_BASE + 0x3020) /* sram mem???ƼĴ??? */
#define DSAF_SUB_SC_ROCEE_MEM_CTRL0_REG                (DSAF_SUB_BASE + 0x3030) /* rocee mem???ƼĴ???0 */
#define DSAF_SUB_SC_ROCEE_MEM_CTRL1_REG                (DSAF_SUB_BASE + 0x3034) /* rocee mem???ƼĴ???1 */
#define DSAF_SUB_SC_XGE_MEM_CTRL0_REG                  (DSAF_SUB_BASE + 0x3040) /* xge mem???ƼĴ???0 */
#define DSAF_SUB_SC_XGE_MEM_CTRL1_REG                  (DSAF_SUB_BASE + 0x3044) /* xge mem???ƼĴ???1 */
#define DSAF_SUB_SC_SAS_MEM_CTRL_REG                   (DSAF_SUB_BASE + 0x3050) /* sas mem???ƼĴ???0 */
#define DSAF_SUB_SC_GE_MEM_CTRL_REG                    (DSAF_SUB_BASE + 0x3060) /* ge mem???ƼĴ??? */
#define DSAF_SUB_SC_XBAR_MEM_CTRL0_REG                 (DSAF_SUB_BASE + 0x3070) /* xbar mem???ƼĴ???0 */
#define DSAF_SUB_SC_XBAR_MEM_CTRL1_REG                 (DSAF_SUB_BASE + 0x3074) /* xbar mem???ƼĴ???1 */
#define DSAF_SUB_SC_RCB_MEM_CTRL0_REG                  (DSAF_SUB_BASE + 0x3080) /* rcb mem???ƼĴ???0 */
#define DSAF_SUB_SC_RCB_MEM_CTRL1_REG                  (DSAF_SUB_BASE + 0x3084) /* rcb mem???ƼĴ???1 */
#define DSAF_SUB_SC_DSAF_CLK_ST_REG                    (DSAF_SUB_BASE + 0x5300) /* DSAFʱ??״̬?Ĵ??? */
#define DSAF_SUB_SC_NT_CLK_ST_REG                      (DSAF_SUB_BASE + 0x5304) /* NTʱ??״̬?Ĵ??? */
#define DSAF_SUB_SC_XGE_CLK_ST_REG                     (DSAF_SUB_BASE + 0x5308) /* XGEʱ??״̬?Ĵ??? */
#define DSAF_SUB_SC_GE_CLK_ST_REG                      (DSAF_SUB_BASE + 0x530C) /* GEʱ??״̬?Ĵ??? */
#define DSAF_SUB_SC_PPE_CLK_ST_REG                     (DSAF_SUB_BASE + 0x5310) /* PPEʱ??״̬?Ĵ??? */
#define DSAF_SUB_SC_ROCEE_CLK_ST_REG                   (DSAF_SUB_BASE + 0x5314) /* ROCEEʱ??״̬?Ĵ??? */
#define DSAF_SUB_SC_CPU_CLK_ST_REG                     (DSAF_SUB_BASE + 0x5318) /* CPUʱ??״̬?Ĵ??? */
#define DSAF_SUB_SC_SAS_CLK_ST_REG                     (DSAF_SUB_BASE + 0x531C) /* SASʱ???ſ??ź?״̬ */
#define DSAF_SUB_SC_ITS_CLK_ST_REG                     (DSAF_SUB_BASE + 0x5320) /* ITSʱ??״̬?Ĵ??? */
#define DSAF_SUB_SC_SRAM_CLK_ST_REG                    (DSAF_SUB_BASE + 0x5324) /* SRAMʱ??״̬?Ĵ??? */
#define DSAF_SUB_SC_RCB_PPE_COM_CLK_ST_REG             (DSAF_SUB_BASE + 0x5328) /* RCB PPE????ʱ??״̬?Ĵ??? */
#define DSAF_SUB_SC_TIMER_CLK_ST_REG                   (DSAF_SUB_BASE + 0x532C) /* TIMERʱ??״̬?Ĵ??? */
#define DSAF_SUB_SC_SLLC_CLK_ST_REG                    (DSAF_SUB_BASE + 0x5330) /* SLLC1ʱ??״̬?Ĵ??? */
#define DSAF_SUB_SC_XBAR_RESET_ST_REG                  (DSAF_SUB_BASE + 0x5A00) /* DSAF?���λ????״̬?Ĵ??? */
#define DSAF_SUB_SC_NT_RESET_ST_REG                    (DSAF_SUB_BASE + 0x5A04) /* NT?���λ????״̬?Ĵ??? */
#define DSAF_SUB_SC_XGE_RESET_ST_REG                   (DSAF_SUB_BASE + 0x5A08) /* XGE?���λ????״̬?Ĵ??? */
#define DSAF_SUB_SC_GE_RESET_ST0_REG                   (DSAF_SUB_BASE + 0x5A0C) /* GE?���λ????״̬?Ĵ???0 */
#define DSAF_SUB_SC_GE_RESET_ST1_REG                   (DSAF_SUB_BASE + 0x5A10) /* GE?���λ????״̬?Ĵ???1 */
#define DSAF_SUB_SC_PPE_RESET_ST_REG                   (DSAF_SUB_BASE + 0x5A24) /* PPE?���λ????״̬?Ĵ??? */
#define DSAF_SUB_SC_ROCEE_RESET_ST_REG                 (DSAF_SUB_BASE + 0x5A28) /* ROCEE?���λ????״̬?Ĵ??? */
#define DSAF_SUB_SC_CPU_RESET_ST_REG                   (DSAF_SUB_BASE + 0x5A2C) /* CPU?���λ????״̬?Ĵ??? */
#define DSAF_SUB_SC_SAS_RESET_ST_REG                   (DSAF_SUB_BASE + 0x5A30) /* SAS?���λ????״̬?Ĵ??? */
#define DSAF_SUB_SC_SLLC_TSVRX_RESET_ST_REG            (DSAF_SUB_BASE + 0x5A34) /* ΪSLLC TSVRXͨ???���λ״̬?Ĵ??? */
#define DSAF_SUB_SC_ITS_RESET_ST_REG                   (DSAF_SUB_BASE + 0x5A38) /* ITS?���λ????״̬?Ĵ??? */
#define DSAF_SUB_SC_SRAM_RESET_ST_REG                  (DSAF_SUB_BASE + 0x5A40) /* SRAM?���λ????״̬?Ĵ??? */
#define DSAF_SUB_SC_RCB_PPE_COM_RESET_ST_REG           (DSAF_SUB_BASE + 0x5A44) /* RCB PPE?????���λ????״̬?Ĵ??? */
#define DSAF_SUB_SC_TIMER_RESET_ST_REG                 (DSAF_SUB_BASE + 0x5A4C) /* TIMER??λ״̬?Ĵ??? */
#define DSAF_SUB_SC_SLLC_RESET_ST_REG                  (DSAF_SUB_BASE + 0x5A50) /* SLLC1??λ״̬?Ĵ??? */
#define DSAF_SUB_SC_SRAM_ST0_REG                       (DSAF_SUB_BASE + 0x6000) /* sram״̬?Ĵ???0 */
#define DSAF_SUB_SC_SRAM_ST1_REG                       (DSAF_SUB_BASE + 0x6004) /* sram״̬?Ĵ???1 */
#define DSAF_SUB_SC_SRAM_ST2_REG                       (DSAF_SUB_BASE + 0x6008) /* sram״̬?Ĵ???2 */
#define DSAF_SUB_SC_SRAM_ST3_REG                       (DSAF_SUB_BASE + 0x600C) /* sram״̬?Ĵ???3 */
#define DSAF_SUB_SC_SRAM_ST4_REG                       (DSAF_SUB_BASE + 0x6010) /* sram״̬?Ĵ???4 */
#define DSAF_SUB_SC_SRAM_ST5_REG                       (DSAF_SUB_BASE + 0x6014) /* sram״̬?Ĵ???5 */
#define DSAF_SUB_SC_M3_STAT_REG                        (DSAF_SUB_BASE + 0x6100)
#define DSAF_SUB_SC_TCAM_MBIST_ST_REG                  (DSAF_SUB_BASE + 0x6300) /* DSAF??TCAM MBIST???Խ???״̬ */
#define DSAF_SUB_SC_GE_ST_REG                          (DSAF_SUB_BASE + 0x6380) /* DSAF??GE?Ĺ???״ָ̬ʾ */
#define DSAF_SUB_SC_XGE_ST_REG                         (DSAF_SUB_BASE + 0x6390) /* DSAF??XGE?Ĺ???״ָ̬ʾ */
#define DSAF_SUB_SC_HILINK2_MACRO_PLLOUTOFLOCK_REG     (DSAF_SUB_BASE + 0x6400) /* HILINK״̬?Ĵ??? */
#define DSAF_SUB_SC_HILINK2_MACRO_PRBS_ERR_REG         (DSAF_SUB_BASE + 0x6404) /* HILINK״̬?Ĵ??? */
#define DSAF_SUB_SC_HILINK2_MACRO_LOS_REG              (DSAF_SUB_BASE + 0x6408) /* HILINK״̬?Ĵ??? */
#define DSAF_SUB_SC_HILINK3_MACRO_PLLOUTOFLOCK_REG     (DSAF_SUB_BASE + 0x6500) /* HILINK״̬?Ĵ??? */
#define DSAF_SUB_SC_HILINK3_MACRO_PRBS_ERR_REG         (DSAF_SUB_BASE + 0x6504) /* HILINK״̬?Ĵ??? */
#define DSAF_SUB_SC_HILINK3_MACRO_LOS_REG              (DSAF_SUB_BASE + 0x6508) /* HILINK״̬?Ĵ??? */
#define DSAF_SUB_SC_HILINK4_MACRO_PLLOUTOFLOCK_REG     (DSAF_SUB_BASE + 0x6600) /* HILINK״̬?Ĵ??? */
#define DSAF_SUB_SC_HILINK4_MACRO_PRBS_ERR_REG         (DSAF_SUB_BASE + 0x6604) /* HILINK״̬?Ĵ??? */
#define DSAF_SUB_SC_HILINK4_MACRO_LOS_REG              (DSAF_SUB_BASE + 0x6608) /* HILINK״̬?Ĵ??? */
#define DSAF_SUB_SC_ECO_RSV0_REG                       (DSAF_SUB_BASE + 0x8000) /* ECO ?Ĵ???0 */
#define DSAF_SUB_SC_ECO_RSV1_REG                       (DSAF_SUB_BASE + 0x8004) /* ECO ?Ĵ???1 */
#define DSAF_SUB_SC_ECO_RSV2_REG                       (DSAF_SUB_BASE + 0x8008) /* ECO ?Ĵ???2 */


#if(ENDNESS == ENDNESS_BIG)

/* Define the union U_SC_NT_SRAM_CLK_SEL_U */
/* Node Tableģ??TCAM??memoryʱ?ӿ??ƼĴ??? */
/* 0x100 */
typedef union tagScNtSramClkSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    nt_sram_clk_sel       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_NT_SRAM_CLK_SEL_U;

/* Define the union U_SC_HILINK3_CRG_CTRL0_U */
/* ????HILINK CRG */
/* 0x180 */
typedef union tagScHilink3CrgCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink3_mode_cfg      : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_CRG_CTRL0_U;

/* Define the union U_SC_HILINK3_CRG_CTRL1_U */
/* ????HILINK CRG */
/* 0x184 */
typedef union tagScHilink3CrgCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink3_ge_tx_div_sel : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_CRG_CTRL1_U;

/* Define the union U_SC_HILINK3_CRG_CTRL2_U */
/* ????HILINK CRG */
/* 0x188 */
typedef union tagScHilink3CrgCtrl2
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    ge2_mclk_clk_sel      : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_CRG_CTRL2_U;

/* Define the union U_SC_HILINK3_CRG_CTRL3_U */
/* ????HILINK CRG */
/* 0x18C */
typedef union tagScHilink3CrgCtrl3
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    ge3_mclk_clk_sel      : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_CRG_CTRL3_U;

/* Define the union U_SC_HILINK4_CRG_CTRL0_U */
/* ????HILINK CRG */
/* 0x190 */
typedef union tagScHilink4CrgCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink4_mode_cfg      : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_CRG_CTRL0_U;

/* Define the union U_SC_HILINK4_CRG_CTRL1_U */
/* ????HILINK CRG */
/* 0x194 */
typedef union tagScHilink4CrgCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink4_ge_tx_div_sel : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_CRG_CTRL1_U;

/* Define the union U_SC_DSAF_CLK_EN_U */
/* DSAFʱ??ʹ?ܼĴ??? */
/* 0x300 */
typedef union tagScDsafClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 13  ; /* [31..19]  */
        unsigned int    clk_xbar_com_enb      : 1   ; /* [18]  */
        unsigned int    reserved_1            : 5   ; /* [17..13]  */
        unsigned int    clk_xbar_roce_enb     : 1   ; /* [12]  */
        unsigned int    reserved_2            : 5   ; /* [11..7]  */
        unsigned int    clk_xbar_ppe_enb      : 1   ; /* [6]  */
        unsigned int    clk_xbar_xge5_enb     : 1   ; /* [5]  */
        unsigned int    clk_xbar_xge4_enb     : 1   ; /* [4]  */
        unsigned int    clk_xbar_xge3_enb     : 1   ; /* [3]  */
        unsigned int    clk_xbar_xge2_enb     : 1   ; /* [2]  */
        unsigned int    clk_xbar_xge1_enb     : 1   ; /* [1]  */
        unsigned int    clk_xbar_xge0_enb     : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DSAF_CLK_EN_U;

/* Define the union U_SC_DSAF_CLK_DIS_U */
/* DSAFʱ?ӽ?ֹ?Ĵ??? */
/* 0x304 */
typedef union tagScDsafClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 13  ; /* [31..19]  */
        unsigned int    clk_xbar_com_dsb      : 1   ; /* [18]  */
        unsigned int    reserved_1            : 5   ; /* [17..13]  */
        unsigned int    clk_xbar_roce_dsb     : 1   ; /* [12]  */
        unsigned int    reserved_2            : 5   ; /* [11..7]  */
        unsigned int    clk_xbar_ppe_dsb      : 1   ; /* [6]  */
        unsigned int    clk_xbar_xge5_dsb     : 1   ; /* [5]  */
        unsigned int    clk_xbar_xge4_dsb     : 1   ; /* [4]  */
        unsigned int    clk_xbar_xge3_dsb     : 1   ; /* [3]  */
        unsigned int    clk_xbar_xge2_dsb     : 1   ; /* [2]  */
        unsigned int    clk_xbar_xge1_dsb     : 1   ; /* [1]  */
        unsigned int    clk_xbar_xge0_dsb     : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DSAF_CLK_DIS_U;

/* Define the union U_SC_NT_CLK_EN_U */
/* NTʱ??ʹ?ܼĴ??? */
/* 0x308 */
typedef union tagScNtClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_nt_enb            : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_NT_CLK_EN_U;

/* Define the union U_SC_NT_CLK_DIS_U */
/* NTʱ?ӽ?ֹ?Ĵ??? */
/* 0x30C */
typedef union tagScNtClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_nt_dsb            : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_NT_CLK_DIS_U;

/* Define the union U_SC_XGE_CLK_EN_U */
/* XGEʱ??ʹ?ܼĴ??? */
/* 0x310 */
typedef union tagScXgeClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 19  ; /* [31..13]  */
        unsigned int    clk_xge5_tx_enb       : 1   ; /* [12]  */
        unsigned int    clk_xge4_tx_enb       : 1   ; /* [11]  */
        unsigned int    clk_xge3_tx_enb       : 1   ; /* [10]  */
        unsigned int    clk_xge2_tx_enb       : 1   ; /* [9]  */
        unsigned int    clk_xge1_tx_enb       : 1   ; /* [8]  */
        unsigned int    clk_xge0_tx_enb       : 1   ; /* [7]  */
        unsigned int    clk_xge5_rx_enb       : 1   ; /* [6]  */
        unsigned int    clk_xge4_rx_enb       : 1   ; /* [5]  */
        unsigned int    clk_xge3_rx_enb       : 1   ; /* [4]  */
        unsigned int    clk_xge2_rx_enb       : 1   ; /* [3]  */
        unsigned int    clk_xge1_rx_enb       : 1   ; /* [2]  */
        unsigned int    clk_xge0_rx_enb       : 1   ; /* [1]  */
        unsigned int    clk_xge_cfg_enb       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XGE_CLK_EN_U;

/* Define the union U_SC_XGE_CLK_DIS_U */
/* XGEʱ?ӽ?ֹ?Ĵ??? */
/* 0x314 */
typedef union tagScXgeClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 19  ; /* [31..13]  */
        unsigned int    clk_xge5_tx_dsb       : 1   ; /* [12]  */
        unsigned int    clk_xge4_tx_dsb       : 1   ; /* [11]  */
        unsigned int    clk_xge3_tx_dsb       : 1   ; /* [10]  */
        unsigned int    clk_xge2_tx_dsb       : 1   ; /* [9]  */
        unsigned int    clk_xge1_tx_dsb       : 1   ; /* [8]  */
        unsigned int    clk_xge0_tx_dsb       : 1   ; /* [7]  */
        unsigned int    clk_xge5_rx_dsb       : 1   ; /* [6]  */
        unsigned int    clk_xge4_rx_dsb       : 1   ; /* [5]  */
        unsigned int    clk_xge3_rx_dsb       : 1   ; /* [4]  */
        unsigned int    clk_xge2_rx_dsb       : 1   ; /* [3]  */
        unsigned int    clk_xge1_rx_dsb       : 1   ; /* [2]  */
        unsigned int    clk_xge0_rx_dsb       : 1   ; /* [1]  */
        unsigned int    clk_xge_cfg_dsb       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XGE_CLK_DIS_U;

/* Define the union U_SC_GE_CLK_EN_U */
/* GEʱ??ʹ?ܼĴ??? */
/* 0x318 */
typedef union tagScGeClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_gmac7_rx_enb      : 1   ; /* [31]  */
        unsigned int    clk_gmac6_rx_enb      : 1   ; /* [30]  */
        unsigned int    clk_gmac5_rx_enb      : 1   ; /* [29]  */
        unsigned int    clk_gmac4_rx_enb      : 1   ; /* [28]  */
        unsigned int    clk_gmac3_rx_enb      : 1   ; /* [27]  */
        unsigned int    clk_gmac2_rx_enb      : 1   ; /* [26]  */
        unsigned int    clk_gmac1_rx_enb      : 1   ; /* [25]  */
        unsigned int    clk_gmac0_rx_enb      : 1   ; /* [24]  */
        unsigned int    clk_gmac7_tx_enb      : 1   ; /* [23]  */
        unsigned int    clk_gmac6_tx_enb      : 1   ; /* [22]  */
        unsigned int    clk_gmac5_tx_enb      : 1   ; /* [21]  */
        unsigned int    clk_gmac4_tx_enb      : 1   ; /* [20]  */
        unsigned int    clk_gmac3_tx_enb      : 1   ; /* [19]  */
        unsigned int    clk_gmac2_tx_enb      : 1   ; /* [18]  */
        unsigned int    clk_gmac1_tx_enb      : 1   ; /* [17]  */
        unsigned int    clk_gmac0_tx_enb      : 1   ; /* [16]  */
        unsigned int    clk_gmac7_125m_enb    : 1   ; /* [15]  */
        unsigned int    clk_gmac6_125m_enb    : 1   ; /* [14]  */
        unsigned int    clk_gmac5_125m_enb    : 1   ; /* [13]  */
        unsigned int    clk_gmac4_125m_enb    : 1   ; /* [12]  */
        unsigned int    clk_gmac3_125m_enb    : 1   ; /* [11]  */
        unsigned int    clk_gmac2_125m_enb    : 1   ; /* [10]  */
        unsigned int    clk_gmac1_125m_enb    : 1   ; /* [9]  */
        unsigned int    clk_gmac0_125m_enb    : 1   ; /* [8]  */
        unsigned int    clk_gmac7_sys_enb     : 1   ; /* [7]  */
        unsigned int    clk_gmac6_sys_enb     : 1   ; /* [6]  */
        unsigned int    clk_gmac5_sys_enb     : 1   ; /* [5]  */
        unsigned int    clk_gmac4_sys_enb     : 1   ; /* [4]  */
        unsigned int    clk_gmac3_sys_enb     : 1   ; /* [3]  */
        unsigned int    clk_gmac2_sys_enb     : 1   ; /* [2]  */
        unsigned int    clk_gmac1_sys_enb     : 1   ; /* [1]  */
        unsigned int    clk_gmac0_sys_enb     : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_CLK_EN_U;

/* Define the union U_SC_GE_CLK_DIS_U */
/* GEʱ?ӽ?ֹ?Ĵ??? */
/* 0x31C */
typedef union tagScGeClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_gmac7_rx_dsb      : 1   ; /* [31]  */
        unsigned int    clk_gmac6_rx_dsb      : 1   ; /* [30]  */
        unsigned int    clk_gmac5_rx_dsb      : 1   ; /* [29]  */
        unsigned int    clk_gmac4_rx_dsb      : 1   ; /* [28]  */
        unsigned int    clk_gmac3_rx_dsb      : 1   ; /* [27]  */
        unsigned int    clk_gmac2_rx_dsb      : 1   ; /* [26]  */
        unsigned int    clk_gmac1_rx_dsb      : 1   ; /* [25]  */
        unsigned int    clk_gmac0_rx_dsb      : 1   ; /* [24]  */
        unsigned int    clk_gmac7_tx_dsb      : 1   ; /* [23]  */
        unsigned int    clk_gmac6_tx_dsb      : 1   ; /* [22]  */
        unsigned int    clk_gmac5_tx_dsb      : 1   ; /* [21]  */
        unsigned int    clk_gmac4_tx_dsb      : 1   ; /* [20]  */
        unsigned int    clk_gmac3_tx_dsb      : 1   ; /* [19]  */
        unsigned int    clk_gmac2_tx_dsb      : 1   ; /* [18]  */
        unsigned int    clk_gmac1_tx_dsb      : 1   ; /* [17]  */
        unsigned int    clk_gmac0_tx_dsb      : 1   ; /* [16]  */
        unsigned int    clk_gmac7_125m_dsb    : 1   ; /* [15]  */
        unsigned int    clk_gmac6_125m_dsb    : 1   ; /* [14]  */
        unsigned int    clk_gmac5_125m_dsb    : 1   ; /* [13]  */
        unsigned int    clk_gmac4_125m_dsb    : 1   ; /* [12]  */
        unsigned int    clk_gmac3_125m_dsb    : 1   ; /* [11]  */
        unsigned int    clk_gmac2_125m_dsb    : 1   ; /* [10]  */
        unsigned int    clk_gmac1_125m_dsb    : 1   ; /* [9]  */
        unsigned int    clk_gmac0_125m_dsb    : 1   ; /* [8]  */
        unsigned int    clk_gmac7_sys_dsb     : 1   ; /* [7]  */
        unsigned int    clk_gmac6_sys_dsb     : 1   ; /* [6]  */
        unsigned int    clk_gmac5_sys_dsb     : 1   ; /* [5]  */
        unsigned int    clk_gmac4_sys_dsb     : 1   ; /* [4]  */
        unsigned int    clk_gmac3_sys_dsb     : 1   ; /* [3]  */
        unsigned int    clk_gmac2_sys_dsb     : 1   ; /* [2]  */
        unsigned int    clk_gmac1_sys_dsb     : 1   ; /* [1]  */
        unsigned int    clk_gmac0_sys_dsb     : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_CLK_DIS_U;

/* Define the union U_SC_PPE_CLK_EN_U */
/* PPEʱ??ʹ?ܼĴ??? */
/* 0x320 */
typedef union tagScPpeClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    clk_rcb_ppe7_enb      : 1   ; /* [7]  */
        unsigned int    clk_rcb_ppe6_enb      : 1   ; /* [6]  */
        unsigned int    clk_ppe5_enb          : 1   ; /* [5]  */
        unsigned int    clk_ppe4_enb          : 1   ; /* [4]  */
        unsigned int    clk_ppe3_enb          : 1   ; /* [3]  */
        unsigned int    clk_ppe2_enb          : 1   ; /* [2]  */
        unsigned int    clk_ppe1_enb          : 1   ; /* [1]  */
        unsigned int    clk_ppe0_enb          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PPE_CLK_EN_U;

/* Define the union U_SC_PPE_CLK_DIS_U */
/* PPEʱ?ӽ?ֹ?Ĵ??? */
/* 0x324 */
typedef union tagScPpeClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    clk_rcb_ppe7_dsb      : 1   ; /* [7]  */
        unsigned int    clk_rcb_ppe6_dsb      : 1   ; /* [6]  */
        unsigned int    clk_ppe5_dsb          : 1   ; /* [5]  */
        unsigned int    clk_ppe4_dsb          : 1   ; /* [4]  */
        unsigned int    clk_ppe3_dsb          : 1   ; /* [3]  */
        unsigned int    clk_ppe2_dsb          : 1   ; /* [2]  */
        unsigned int    clk_ppe1_dsb          : 1   ; /* [1]  */
        unsigned int    clk_ppe0_dsb          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PPE_CLK_DIS_U;

/* Define the union U_SC_ROCEE_CLK_EN_U */
/* ROCEEʱ??ʹ?ܼĴ??? */
/* 0x328 */
typedef union tagScRoceeClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
        unsigned int    clk_rocee5_enb        : 1   ; /* [5]  */
        unsigned int    clk_rocee4_enb        : 1   ; /* [4]  */
        unsigned int    clk_rocee3_enb        : 1   ; /* [3]  */
        unsigned int    clk_rocee2_enb        : 1   ; /* [2]  */
        unsigned int    clk_rocee1_enb        : 1   ; /* [1]  */
        unsigned int    clk_rocee0_enb        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ROCEE_CLK_EN_U;

/* Define the union U_SC_ROCEE_CLK_DIS_U */
/* ROCEEʱ?ӽ?ֹ?Ĵ??? */
/* 0x32C */
typedef union tagScRoceeClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
        unsigned int    clk_rocee5_dsb        : 1   ; /* [5]  */
        unsigned int    clk_rocee4_dsb        : 1   ; /* [4]  */
        unsigned int    clk_rocee3_dsb        : 1   ; /* [3]  */
        unsigned int    clk_rocee2_dsb        : 1   ; /* [2]  */
        unsigned int    clk_rocee1_dsb        : 1   ; /* [1]  */
        unsigned int    clk_rocee0_dsb        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ROCEE_CLK_DIS_U;

/* Define the union U_SC_CPU_CLK_EN_U */
/* CPUʱ??ʹ?ܼĴ??? */
/* 0x330 */
typedef union tagScCpuClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_cpu_enb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_CPU_CLK_EN_U;

/* Define the union U_SC_CPU_CLK_DIS_U */
/* CPUʱ?ӽ?ֹ?Ĵ??? */
/* 0x334 */
typedef union tagScCpuClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_cpu_dsb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_CPU_CLK_DIS_U;

/* Define the union U_SC_SAS_CLK_EN_U */
/* SASʱ???ſ??ź? */
/* 0x338 */
typedef union tagScSasClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
        unsigned int    clk_sas_ch7_tx_enb    : 1   ; /* [19]  */
        unsigned int    clk_sas_ch6_tx_enb    : 1   ; /* [18]  */
        unsigned int    clk_sas_ch5_tx_enb    : 1   ; /* [17]  */
        unsigned int    clk_sas_ch4_tx_enb    : 1   ; /* [16]  */
        unsigned int    clk_sas_ch3_tx_enb    : 1   ; /* [15]  */
        unsigned int    clk_sas_ch2_tx_enb    : 1   ; /* [14]  */
        unsigned int    clk_sas_ch1_tx_enb    : 1   ; /* [13]  */
        unsigned int    clk_sas_ch0_tx_enb    : 1   ; /* [12]  */
        unsigned int    clk_sas_ch7_rx_enb    : 1   ; /* [11]  */
        unsigned int    clk_sas_ch6_rx_enb    : 1   ; /* [10]  */
        unsigned int    clk_sas_ch5_rx_enb    : 1   ; /* [9]  */
        unsigned int    clk_sas_ch4_rx_enb    : 1   ; /* [8]  */
        unsigned int    clk_sas_ch3_rx_enb    : 1   ; /* [7]  */
        unsigned int    clk_sas_ch2_rx_enb    : 1   ; /* [6]  */
        unsigned int    clk_sas_ch1_rx_enb    : 1   ; /* [5]  */
        unsigned int    clk_sas_ch0_rx_enb    : 1   ; /* [4]  */
        unsigned int    clk_sas_oob_enb       : 1   ; /* [3]  */
        unsigned int    clk_sas_ahb_enb       : 1   ; /* [2]  */
        unsigned int    clk_sas_mem_enb       : 1   ; /* [1]  */
        unsigned int    clk_sas_enb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SAS_CLK_EN_U;

/* Define the union U_SC_SAS_CLK_DIS_U */
/* SASʱ???ſ??ź? */
/* 0x33C */
typedef union tagScSasClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
        unsigned int    clk_sas_ch7_tx_dsb    : 1   ; /* [19]  */
        unsigned int    clk_sas_ch6_tx_dsb    : 1   ; /* [18]  */
        unsigned int    clk_sas_ch5_tx_dsb    : 1   ; /* [17]  */
        unsigned int    clk_sas_ch4_tx_dsb    : 1   ; /* [16]  */
        unsigned int    clk_sas_ch3_tx_dsb    : 1   ; /* [15]  */
        unsigned int    clk_sas_ch2_tx_dsb    : 1   ; /* [14]  */
        unsigned int    clk_sas_ch1_tx_dsb    : 1   ; /* [13]  */
        unsigned int    clk_sas_ch0_tx_dsb    : 1   ; /* [12]  */
        unsigned int    clk_sas_ch7_rx_dsb    : 1   ; /* [11]  */
        unsigned int    clk_sas_ch6_rx_dsb    : 1   ; /* [10]  */
        unsigned int    clk_sas_ch5_rx_dsb    : 1   ; /* [9]  */
        unsigned int    clk_sas_ch4_rx_dsb    : 1   ; /* [8]  */
        unsigned int    clk_sas_ch3_rx_dsb    : 1   ; /* [7]  */
        unsigned int    clk_sas_ch2_rx_dsb    : 1   ; /* [6]  */
        unsigned int    clk_sas_ch1_rx_dsb    : 1   ; /* [5]  */
        unsigned int    clk_sas_ch0_rx_dsb    : 1   ; /* [4]  */
        unsigned int    clk_sas_oob_dsb       : 1   ; /* [3]  */
        unsigned int    clk_sas_ahb_dsb       : 1   ; /* [2]  */
        unsigned int    clk_sas_mem_dsb       : 1   ; /* [1]  */
        unsigned int    clk_sas_dsb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SAS_CLK_DIS_U;

/* Define the union U_SC_ITS_CLK_EN_U */
/* itsʱ??ʹ?ܼĴ??? */
/* 0x340 */
typedef union tagScItsClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_its_enb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ITS_CLK_EN_U;

/* Define the union U_SC_ITS_CLK_DIS_U */
/* itsʱ?ӽ?ֹ?Ĵ??? */
/* 0x344 */
typedef union tagScItsClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_its_dsb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ITS_CLK_DIS_U;

/* Define the union U_SC_SRAM_CLK_EN_U */
/* SRAMʱ??ʹ?ܼĴ??? */
/* 0x348 */
typedef union tagScSramClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_sram_enb          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_CLK_EN_U;

/* Define the union U_SC_SRAM_CLK_DIS_U */
/* SRAMʱ?ӽ?ֹ?Ĵ??? */
/* 0x34C */
typedef union tagScSramClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_sram_dsb          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_CLK_DIS_U;

/* Define the union U_SC_RCB_PPE_COM_CLK_EN_U */
/* RCB PPE????ʱ??ʹ?ܼĴ??? */
/* 0x350 */
typedef union tagScRcbPpeComClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_rcb_ppe_com_enb   : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RCB_PPE_COM_CLK_EN_U;

/* Define the union U_SC_RCB_PPE_COM_CLK_DIS_U */
/* RCB PPE????ʱ?ӽ?ֹ?Ĵ??? */
/* 0x354 */
typedef union tagScRcbPpeComClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_rcb_ppe_com_dsb   : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RCB_PPE_COM_CLK_DIS_U;

/* Define the union U_SC_TIMER_CLK_EN_U */
/* TIMERʱ??ʹ?ܼĴ??? */
/* 0x358 */
typedef union tagScTimerClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_timer_enb         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TIMER_CLK_EN_U;

/* Define the union U_SC_TIMER_CLK_DIS_U */
/* TIMERʱ?ӽ?ֹ?Ĵ??? */
/* 0x35C */
typedef union tagScTimerClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_timer_dsb         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TIMER_CLK_DIS_U;

/* Define the union U_SC_SLLC_CLK_EN_U */
/* SLLC1ʱ??ʹ?ܼĴ??? */
/* 0x360 */
typedef union tagScSllcClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_sllc_enb          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC_CLK_EN_U;

/* Define the union U_SC_SLLC_CLK_DIS_U */
/* SLLC1ʱ?ӽ?ֹ?Ĵ??? */
/* 0x364 */
typedef union tagScSllcClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_sllc_dsb          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC_CLK_DIS_U;

/* Define the union U_SC_XBAR_RESET_REQ_U */
/* XBAR?���λ???????ƼĴ??? */
/* 0xA00 */
typedef union tagScXbarResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    xbar_srst_req         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XBAR_RESET_REQ_U;

/* Define the union U_SC_XBAR_RESET_DREQ_U */
/* XBAR?���λȥ???????ƼĴ??? */
/* 0xA04 */
typedef union tagScXbarResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    xbar_srst_dreq        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XBAR_RESET_DREQ_U;

/* Define the union U_SC_NT_RESET_REQ_U */
/* NT?���λ???????ƼĴ??? */
/* 0xA08 */
typedef union tagScNtResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    nt_srst_req           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_NT_RESET_REQ_U;

/* Define the union U_SC_NT_RESET_DREQ_U */
/* NT?���λȥ???????ƼĴ??? */
/* 0xA0C */
typedef union tagScNtResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    nt_srst_dreq          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_NT_RESET_DREQ_U;

/* Define the union U_SC_XGE_RESET_REQ_U */
/* XGE?���λ???????ƼĴ??? */
/* 0xA10 */
typedef union tagScXgeResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 1   ; /* [31]  */
        unsigned int    xge5_fec_rx_srst_req  : 1   ; /* [30]  */
        unsigned int    xge4_fec_rx_srst_req  : 1   ; /* [29]  */
        unsigned int    xge3_fec_rx_srst_req  : 1   ; /* [28]  */
        unsigned int    xge2_fec_rx_srst_req  : 1   ; /* [27]  */
        unsigned int    xge1_fec_rx_srst_req  : 1   ; /* [26]  */
        unsigned int    xge0_fec_rx_srst_req  : 1   ; /* [25]  */
        unsigned int    xge5_fec_tx_srst_req  : 1   ; /* [24]  */
        unsigned int    xge4_fec_tx_srst_req  : 1   ; /* [23]  */
        unsigned int    xge3_fec_tx_srst_req  : 1   ; /* [22]  */
        unsigned int    xge2_fec_tx_srst_req  : 1   ; /* [21]  */
        unsigned int    xge1_fec_tx_srst_req  : 1   ; /* [20]  */
        unsigned int    xge0_fec_tx_srst_req  : 1   ; /* [19]  */
        unsigned int    xge5_core_rx_srst_req : 1   ; /* [18]  */
        unsigned int    xge4_core_rx_srst_req : 1   ; /* [17]  */
        unsigned int    xge3_core_rx_srst_req : 1   ; /* [16]  */
        unsigned int    xge2_core_rx_srst_req : 1   ; /* [15]  */
        unsigned int    xge1_core_rx_srst_req : 1   ; /* [14]  */
        unsigned int    xge0_core_rx_srst_req : 1   ; /* [13]  */
        unsigned int    xge5_core_tx_srst_req : 1   ; /* [12]  */
        unsigned int    xge4_core_tx_srst_req : 1   ; /* [11]  */
        unsigned int    xge3_core_tx_srst_req : 1   ; /* [10]  */
        unsigned int    xge2_core_tx_srst_req : 1   ; /* [9]  */
        unsigned int    xge1_core_tx_srst_req : 1   ; /* [8]  */
        unsigned int    xge0_core_tx_srst_req : 1   ; /* [7]  */
        unsigned int    xge5_cfg_mac_srst_req : 1   ; /* [6]  */
        unsigned int    xge4_cfg_mac_srst_req : 1   ; /* [5]  */
        unsigned int    xge3_cfg_mac_srst_req : 1   ; /* [4]  */
        unsigned int    xge2_cfg_mac_srst_req : 1   ; /* [3]  */
        unsigned int    xge1_cfg_mac_srst_req : 1   ; /* [2]  */
        unsigned int    xge0_cfg_mac_srst_req : 1   ; /* [1]  */
        unsigned int    xge_cfg_srst_req      : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XGE_RESET_REQ_U;

/* Define the union U_SC_XGE_RESET_DREQ_U */
/* XGE?���λȥ???????ƼĴ??? */
/* 0xA14 */
typedef union tagScXgeResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 1   ; /* [31]  */
        unsigned int    xge5_fec_rx_srst_dreq : 1   ; /* [30]  */
        unsigned int    xge4_fec_rx_srst_dreq : 1   ; /* [29]  */
        unsigned int    xge3_fec_rx_srst_dreq : 1   ; /* [28]  */
        unsigned int    xge2_fec_rx_srst_dreq : 1   ; /* [27]  */
        unsigned int    xge1_fec_rx_srst_dreq : 1   ; /* [26]  */
        unsigned int    xge0_fec_rx_srst_dreq : 1   ; /* [25]  */
        unsigned int    xge5_fec_tx_srst_dreq : 1   ; /* [24]  */
        unsigned int    xge4_fec_tx_srst_dreq : 1   ; /* [23]  */
        unsigned int    xge3_fec_tx_srst_dreq : 1   ; /* [22]  */
        unsigned int    xge2_fec_tx_srst_dreq : 1   ; /* [21]  */
        unsigned int    xge1_fec_tx_srst_dreq : 1   ; /* [20]  */
        unsigned int    xge0_fec_tx_srst_dreq : 1   ; /* [19]  */
        unsigned int    xge5_core_rx_srst_dreq : 1   ; /* [18]  */
        unsigned int    xge4_core_rx_srst_dreq : 1   ; /* [17]  */
        unsigned int    xge3_core_rx_srst_dreq : 1   ; /* [16]  */
        unsigned int    xge2_core_rx_srst_dreq : 1   ; /* [15]  */
        unsigned int    xge1_core_rx_srst_dreq : 1   ; /* [14]  */
        unsigned int    xge0_core_rx_srst_dreq : 1   ; /* [13]  */
        unsigned int    xge5_core_tx_srst_dreq : 1   ; /* [12]  */
        unsigned int    xge4_core_tx_srst_dreq : 1   ; /* [11]  */
        unsigned int    xge3_core_tx_srst_dreq : 1   ; /* [10]  */
        unsigned int    xge2_core_tx_srst_dreq : 1   ; /* [9]  */
        unsigned int    xge1_core_tx_srst_dreq : 1   ; /* [8]  */
        unsigned int    xge0_core_tx_srst_dreq : 1   ; /* [7]  */
        unsigned int    xge5_cfg_mac_srst_dreq : 1   ; /* [6]  */
        unsigned int    xge4_cfg_mac_srst_dreq : 1   ; /* [5]  */
        unsigned int    xge3_cfg_mac_srst_dreq : 1   ; /* [4]  */
        unsigned int    xge2_cfg_mac_srst_dreq : 1   ; /* [3]  */
        unsigned int    xge1_cfg_mac_srst_dreq : 1   ; /* [2]  */
        unsigned int    xge0_cfg_mac_srst_dreq : 1   ; /* [1]  */
        unsigned int    xge_cfg_srst_dreq     : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XGE_RESET_DREQ_U;

/* Define the union U_SC_GE_RESET_REQ0_U */
/* GE?���λ???????ƼĴ???0 */
/* 0xA18 */
typedef union tagScGeResetReq0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
        unsigned int    gmac5_eth_srst_req    : 1   ; /* [29]  */
        unsigned int    gmac4_eth_srst_req    : 1   ; /* [28]  */
        unsigned int    gmac3_eth_srst_req    : 1   ; /* [27]  */
        unsigned int    gmac2_eth_srst_req    : 1   ; /* [26]  */
        unsigned int    gmac1_eth_srst_req    : 1   ; /* [25]  */
        unsigned int    gmac0_eth_srst_req    : 1   ; /* [24]  */
        unsigned int    gmac5_cfg_srst_req    : 1   ; /* [23]  */
        unsigned int    gmac4_cfg_srst_req    : 1   ; /* [22]  */
        unsigned int    gmac3_cfg_srst_req    : 1   ; /* [21]  */
        unsigned int    gmac2_cfg_srst_req    : 1   ; /* [20]  */
        unsigned int    gmac1_cfg_srst_req    : 1   ; /* [19]  */
        unsigned int    gmac0_cfg_srst_req    : 1   ; /* [18]  */
        unsigned int    gmac5_rx_srst_req     : 1   ; /* [17]  */
        unsigned int    gmac4_rx_srst_req     : 1   ; /* [16]  */
        unsigned int    gmac3_rx_srst_req     : 1   ; /* [15]  */
        unsigned int    gmac2_rx_srst_req     : 1   ; /* [14]  */
        unsigned int    gmac1_rx_srst_req     : 1   ; /* [13]  */
        unsigned int    gmac0_rx_srst_req     : 1   ; /* [12]  */
        unsigned int    gmac5_tx_srst_req     : 1   ; /* [11]  */
        unsigned int    gmac4_tx_srst_req     : 1   ; /* [10]  */
        unsigned int    gmac3_tx_srst_req     : 1   ; /* [9]  */
        unsigned int    gmac2_tx_srst_req     : 1   ; /* [8]  */
        unsigned int    gmac1_tx_srst_req     : 1   ; /* [7]  */
        unsigned int    gmac0_tx_srst_req     : 1   ; /* [6]  */
        unsigned int    gmac5_sys_srst_req    : 1   ; /* [5]  */
        unsigned int    gmac4_sys_srst_req    : 1   ; /* [4]  */
        unsigned int    gmac3_sys_srst_req    : 1   ; /* [3]  */
        unsigned int    gmac2_sys_srst_req    : 1   ; /* [2]  */
        unsigned int    gmac1_sys_srst_req    : 1   ; /* [1]  */
        unsigned int    gmac0_sys_srst_req    : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_RESET_REQ0_U;

/* Define the union U_SC_GE_RESET_DREQ0_U */
/* GE?���λȥ???????ƼĴ???0 */
/* 0xA1C */
typedef union tagScGeResetDreq0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
        unsigned int    gmac5_eth_srst_dreq   : 1   ; /* [29]  */
        unsigned int    gmac4_eth_srst_dreq   : 1   ; /* [28]  */
        unsigned int    gmac3_eth_srst_dreq   : 1   ; /* [27]  */
        unsigned int    gmac2_eth_srst_dreq   : 1   ; /* [26]  */
        unsigned int    gmac1_eth_srst_dreq   : 1   ; /* [25]  */
        unsigned int    gmac0_eth_srst_dreq   : 1   ; /* [24]  */
        unsigned int    gmac5_cfg_srst_dreq   : 1   ; /* [23]  */
        unsigned int    gmac4_cfg_srst_dreq   : 1   ; /* [22]  */
        unsigned int    gmac3_cfg_srst_dreq   : 1   ; /* [21]  */
        unsigned int    gmac2_cfg_srst_dreq   : 1   ; /* [20]  */
        unsigned int    gmac1_cfg_srst_dreq   : 1   ; /* [19]  */
        unsigned int    gmac0_cfg_srst_dreq   : 1   ; /* [18]  */
        unsigned int    gmac5_rx_srst_dreq    : 1   ; /* [17]  */
        unsigned int    gmac4_rx_srst_dreq    : 1   ; /* [16]  */
        unsigned int    gmac3_rx_srst_dreq    : 1   ; /* [15]  */
        unsigned int    gmac2_rx_srst_dreq    : 1   ; /* [14]  */
        unsigned int    gmac1_rx_srst_dreq    : 1   ; /* [13]  */
        unsigned int    gmac0_rx_srst_dreq    : 1   ; /* [12]  */
        unsigned int    gmac5_tx_srst_dreq    : 1   ; /* [11]  */
        unsigned int    gmac4_tx_srst_dreq    : 1   ; /* [10]  */
        unsigned int    gmac3_tx_srst_dreq    : 1   ; /* [9]  */
        unsigned int    gmac2_tx_srst_dreq    : 1   ; /* [8]  */
        unsigned int    gmac1_tx_srst_dreq    : 1   ; /* [7]  */
        unsigned int    gmac0_tx_srst_dreq    : 1   ; /* [6]  */
        unsigned int    gmac5_sys_srst_dreq   : 1   ; /* [5]  */
        unsigned int    gmac4_sys_srst_dreq   : 1   ; /* [4]  */
        unsigned int    gmac3_sys_srst_dreq   : 1   ; /* [3]  */
        unsigned int    gmac2_sys_srst_dreq   : 1   ; /* [2]  */
        unsigned int    gmac1_sys_srst_dreq   : 1   ; /* [1]  */
        unsigned int    gmac0_sys_srst_dreq   : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_RESET_DREQ0_U;

/* Define the union U_SC_GE_RESET_REQ1_U */
/* GE?���λ???????ƼĴ???1 */
/* 0xA20 */
typedef union tagScGeResetReq1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 14  ; /* [31..18]  */
        unsigned int    gmac7_fifo_srst_req   : 1   ; /* [17]  */
        unsigned int    gmac6_fifo_srst_req   : 1   ; /* [16]  */
        unsigned int    gmac7_eth_srst_req    : 1   ; /* [15]  */
        unsigned int    gmac6_eth_srst_req    : 1   ; /* [14]  */
        unsigned int    gmac7_cfg_srst_req    : 1   ; /* [13]  */
        unsigned int    gmac6_cfg_srst_req    : 1   ; /* [12]  */
        unsigned int    gmac7_rx_srst_req     : 1   ; /* [11]  */
        unsigned int    gmac6_rx_srst_req     : 1   ; /* [10]  */
        unsigned int    gmac7_tx_srst_req     : 1   ; /* [9]  */
        unsigned int    gmac6_tx_srst_req     : 1   ; /* [8]  */
        unsigned int    gmac7_sys_srst_req    : 1   ; /* [7]  */
        unsigned int    gmac6_sys_srst_req    : 1   ; /* [6]  */
        unsigned int    gmac5_fifo_srst_req   : 1   ; /* [5]  */
        unsigned int    gmac4_fifo_srst_req   : 1   ; /* [4]  */
        unsigned int    gmac3_fifo_srst_req   : 1   ; /* [3]  */
        unsigned int    gmac2_fifo_srst_req   : 1   ; /* [2]  */
        unsigned int    gmac1_fifo_srst_req   : 1   ; /* [1]  */
        unsigned int    gmac0_fifo_srst_req   : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_RESET_REQ1_U;

/* Define the union U_SC_GE_RESET_DREQ1_U */
/* GE?���λȥ???????ƼĴ???1 */
/* 0xA24 */
typedef union tagScGeResetDreq1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 14  ; /* [31..18]  */
        unsigned int    gmac7_fifo_srst_dreq  : 1   ; /* [17]  */
        unsigned int    gmac6_fifo_srst_dreq  : 1   ; /* [16]  */
        unsigned int    gmac7_eth_srst_dreq   : 1   ; /* [15]  */
        unsigned int    gmac6_eth_srst_dreq   : 1   ; /* [14]  */
        unsigned int    gmac7_cfg_srst_dreq   : 1   ; /* [13]  */
        unsigned int    gmac6_cfg_srst_dreq   : 1   ; /* [12]  */
        unsigned int    gmac7_rx_srst_dreq    : 1   ; /* [11]  */
        unsigned int    gmac6_rx_srst_dreq    : 1   ; /* [10]  */
        unsigned int    gmac7_tx_srst_dreq    : 1   ; /* [9]  */
        unsigned int    gmac6_tx_srst_dreq    : 1   ; /* [8]  */
        unsigned int    gmac7_sys_srst_dreq   : 1   ; /* [7]  */
        unsigned int    gmac6_sys_srst_dreq   : 1   ; /* [6]  */
        unsigned int    gmac5_fifo_srst_dreq  : 1   ; /* [5]  */
        unsigned int    gmac4_fifo_srst_dreq  : 1   ; /* [4]  */
        unsigned int    gmac3_fifo_srst_dreq  : 1   ; /* [3]  */
        unsigned int    gmac2_fifo_srst_dreq  : 1   ; /* [2]  */
        unsigned int    gmac1_fifo_srst_dreq  : 1   ; /* [1]  */
        unsigned int    gmac0_fifo_srst_dreq  : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_RESET_DREQ1_U;

/* Define the union U_SC_PPE_RESET_REQ_U */
/* PPE?���λ???????ƼĴ??? */
/* 0xA48 */
typedef union tagScPpeResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
        unsigned int    rcb2_srst_req         : 1   ; /* [9]  */
        unsigned int    rcb1_srst_req         : 1   ; /* [8]  */
        unsigned int    ppe7_srst_req         : 1   ; /* [7]  */
        unsigned int    ppe6_srst_req         : 1   ; /* [6]  */
        unsigned int    ppe5_srst_req         : 1   ; /* [5]  */
        unsigned int    ppe4_srst_req         : 1   ; /* [4]  */
        unsigned int    ppe3_srst_req         : 1   ; /* [3]  */
        unsigned int    ppe2_srst_req         : 1   ; /* [2]  */
        unsigned int    ppe1_srst_req         : 1   ; /* [1]  */
        unsigned int    ppe0_srst_req         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PPE_RESET_REQ_U;

/* Define the union U_SC_PPE_RESET_DREQ_U */
/* PPE?���λȥ???????ƼĴ??? */
/* 0xA4C */
typedef union tagScPpeResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
        unsigned int    rcb2_srst_dreq        : 1   ; /* [9]  */
        unsigned int    rcb1_srst_dreq        : 1   ; /* [8]  */
        unsigned int    ppe7_srst_dreq        : 1   ; /* [7]  */
        unsigned int    ppe6_srst_dreq        : 1   ; /* [6]  */
        unsigned int    ppe5_srst_dreq        : 1   ; /* [5]  */
        unsigned int    ppe4_srst_dreq        : 1   ; /* [4]  */
        unsigned int    ppe3_srst_dreq        : 1   ; /* [3]  */
        unsigned int    ppe2_srst_dreq        : 1   ; /* [2]  */
        unsigned int    ppe1_srst_dreq        : 1   ; /* [1]  */
        unsigned int    ppe0_srst_dreq        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PPE_RESET_DREQ_U;

/* Define the union U_SC_ROCEE_RESET_REQ_U */
/* ROCEE?���λ???????ƼĴ??? */
/* 0xA50 */
typedef union tagScRoceeResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    rocee_srst_req        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ROCEE_RESET_REQ_U;

/* Define the union U_SC_ROCEE_RESET_DREQ_U */
/* ROCEE?���λȥ???????ƼĴ??? */
/* 0xA54 */
typedef union tagScRoceeResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    rocee_srst_dreq       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ROCEE_RESET_DREQ_U;

/* Define the union U_SC_CPU_RESET_REQ_U */
/* CPU?���λ???????ƼĴ??? */
/* 0xA58 */
typedef union tagScCpuResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    cpu_srst_req          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_CPU_RESET_REQ_U;

/* Define the union U_SC_CPU_RESET_DREQ_U */
/* CPU?���λȥ???????ƼĴ??? */
/* 0xA5C */
typedef union tagScCpuResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    cpu_srst_dreq         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_CPU_RESET_DREQ_U;

/* Define the union U_SC_SAS_RESET_REQ_U */
/* SAS?���λ???? */
/* 0xA60 */
typedef union tagScSasResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 13  ; /* [31..19]  */
        unsigned int    sas_ch7_tx_srst_req   : 1   ; /* [18]  */
        unsigned int    sas_ch6_tx_srst_req   : 1   ; /* [17]  */
        unsigned int    sas_ch5_tx_srst_req   : 1   ; /* [16]  */
        unsigned int    sas_ch4_tx_srst_req   : 1   ; /* [15]  */
        unsigned int    sas_ch3_tx_srst_req   : 1   ; /* [14]  */
        unsigned int    sas_ch2_tx_srst_req   : 1   ; /* [13]  */
        unsigned int    sas_ch1_tx_srst_req   : 1   ; /* [12]  */
        unsigned int    sas_ch0_tx_srst_req   : 1   ; /* [11]  */
        unsigned int    sas_ch7_rx_srst_req   : 1   ; /* [10]  */
        unsigned int    sas_ch6_rx_srst_req   : 1   ; /* [9]  */
        unsigned int    sas_ch5_rx_srst_req   : 1   ; /* [8]  */
        unsigned int    sas_ch4_rx_srst_req   : 1   ; /* [7]  */
        unsigned int    sas_ch3_rx_srst_req   : 1   ; /* [6]  */
        unsigned int    sas_ch2_rx_srst_req   : 1   ; /* [5]  */
        unsigned int    sas_ch1_rx_srst_req   : 1   ; /* [4]  */
        unsigned int    sas_ch0_rx_srst_req   : 1   ; /* [3]  */
        unsigned int    sas_ahb_srst_req      : 1   ; /* [2]  */
        unsigned int    sas_oob_srst_req      : 1   ; /* [1]  */
        unsigned int    sas_srst_req          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SAS_RESET_REQ_U;

/* Define the union U_SC_SAS_RESET_DREQ_U */
/* SAS?????���λ???? */
/* 0xA64 */
typedef union tagScSasResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 13  ; /* [31..19]  */
        unsigned int    sas_ch7_tx_srst_dreq  : 1   ; /* [18]  */
        unsigned int    sas_ch6_tx_srst_dreq  : 1   ; /* [17]  */
        unsigned int    sas_ch5_tx_srst_dreq  : 1   ; /* [16]  */
        unsigned int    sas_ch4_tx_srst_dreq  : 1   ; /* [15]  */
        unsigned int    sas_ch3_tx_srst_dreq  : 1   ; /* [14]  */
        unsigned int    sas_ch2_tx_srst_dreq  : 1   ; /* [13]  */
        unsigned int    sas_ch1_tx_srst_dreq  : 1   ; /* [12]  */
        unsigned int    sas_ch0_tx_srst_dreq  : 1   ; /* [11]  */
        unsigned int    sas_ch7_rx_srst_dreq  : 1   ; /* [10]  */
        unsigned int    sas_ch6_rx_srst_dreq  : 1   ; /* [9]  */
        unsigned int    sas_ch5_rx_srst_dreq  : 1   ; /* [8]  */
        unsigned int    sas_ch4_rx_srst_dreq  : 1   ; /* [7]  */
        unsigned int    sas_ch3_rx_srst_dreq  : 1   ; /* [6]  */
        unsigned int    sas_ch2_rx_srst_dreq  : 1   ; /* [5]  */
        unsigned int    sas_ch1_rx_srst_dreq  : 1   ; /* [4]  */
        unsigned int    sas_ch0_rx_srst_dreq  : 1   ; /* [3]  */
        unsigned int    sas_ahb_srst_dreq     : 1   ; /* [2]  */
        unsigned int    sas_oob_srst_dreq     : 1   ; /* [1]  */
        unsigned int    sas_srst_dreq         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SAS_RESET_DREQ_U;

/* Define the union U_SC_SLLC_TSVRX_RESET_REQ_U */
/* SLLC TSVRXͨ???���λ???????ƼĴ??? */
/* 0xA68 */
typedef union tagScSllcTsvrxResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
        unsigned int    sllc_tsvrx3_srst_req  : 1   ; /* [3]  */
        unsigned int    sllc_tsvrx2_srst_req  : 1   ; /* [2]  */
        unsigned int    sllc_tsvrx1_srst_req  : 1   ; /* [1]  */
        unsigned int    sllc_tsvrx0_srst_req  : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC_TSVRX_RESET_REQ_U;

/* Define the union U_SC_SLLC_TSVRX_RESET_DREQ_U */
/* SLLC TSVRXͨ???���λ???????ƼĴ??? */
/* 0xA6C */
typedef union tagScSllcTsvrxResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
        unsigned int    sllc_tsvrx3_srst_dreq : 1   ; /* [3]  */
        unsigned int    sllc_tsvrx2_srst_dreq : 1   ; /* [2]  */
        unsigned int    sllc_tsvrx1_srst_dreq : 1   ; /* [1]  */
        unsigned int    sllc_tsvrx0_srst_dreq : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC_TSVRX_RESET_DREQ_U;

/* Define the union U_SC_ITS_RESET_REQ_U */
/* ITS?���λ???????ƼĴ??? */
/* 0xA70 */
typedef union tagScItsResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    its_srst_req          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ITS_RESET_REQ_U;

/* Define the union U_SC_ITS_RESET_DREQ_U */
/* ITS?���λȥ???????ƼĴ??? */
/* 0xA74 */
typedef union tagScItsResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    its_srst_dreq         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ITS_RESET_DREQ_U;

/* Define the union U_SC_SRAM_RESET_REQ_U */
/* SRAM?���λ???????ƼĴ??? */
/* 0xA80 */
typedef union tagScSramResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    sram_srst_req         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_RESET_REQ_U;

/* Define the union U_SC_SRAM_RESET_DREQ_U */
/* SRAM?���λȥ???????ƼĴ??? */
/* 0xA84 */
typedef union tagScSramResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    sram_srst_dreq        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_RESET_DREQ_U;

/* Define the union U_SC_RCB_PPE_COM_RESET_REQ_U */
/* RCB PPE?????���λ???????ƼĴ??? */
/* 0xA88 */
typedef union tagScRcbPpeComResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    rcb_ppe_com_srst_req  : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RCB_PPE_COM_RESET_REQ_U;

/* Define the union U_SC_RCB_PPE_COM_RESET_DREQ_U */
/* RCB PPE?????���λȥ???????ƼĴ??? */
/* 0xA8C */
typedef union tagScRcbPpeComResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    rcb_ppe_com_srst_dreq : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RCB_PPE_COM_RESET_DREQ_U;

/* Define the union U_SC_TIMER_RESET_REQ_U */
/* TIMER?���λ???????ƼĴ??? */
/* 0xA98 */
typedef union tagScTimerResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    timer_srst_req        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TIMER_RESET_REQ_U;

/* Define the union U_SC_TIMER_RESET_DREQ_U */
/* TIMER?���λȥ???????ƼĴ??? */
/* 0xA9C */
typedef union tagScTimerResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    timer_srst_dreq       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TIMER_RESET_DREQ_U;

/* Define the union U_SC_SLLC_RESET_REQ_U */
/* SLLC1?���λ???????ƼĴ??? */
/* 0xAA0 */
typedef union tagScSllcResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    sllc_srst_req         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC_RESET_REQ_U;

/* Define the union U_SC_SLLC_RESET_DREQ_U */
/* SLLC1?���λȥ???????ƼĴ??? */
/* 0xAA4 */
typedef union tagScSllcResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    sllc_srst_dreq        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC_RESET_DREQ_U;

/* Define the union U_SC_DISPATCH_DAW_EN_U */
/* dispatch daw en???? */
/* 0x1000 */
typedef union tagScDispatchDawEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    dispatch_daw_en       : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_DAW_EN_U;

/* Define the union U_SC_DISPATCH_DAW_ARRAY0_U */
/* dispatch daw????????0 */
/* 0x1004 */
typedef union tagScDispatchDawArray0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    daw_array0_addr       : 19  ; /* [31..13]  */
        unsigned int    reserved_0            : 4   ; /* [12..9]  */
        unsigned int    daw_array0_sync       : 1   ; /* [8]  */
        unsigned int    daw_array0_size       : 5   ; /* [7..3]  */
        unsigned int    daw_array0_did        : 3   ; /* [2..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_DAW_ARRAY0_U;

/* Define the union U_SC_DISPATCH_DAW_ARRAY1_U */
/* dispatch daw????????1 */
/* 0x1008 */
typedef union tagScDispatchDawArray1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    daw_array1_addr       : 19  ; /* [31..13]  */
        unsigned int    reserved_0            : 4   ; /* [12..9]  */
        unsigned int    daw_array1_sync       : 1   ; /* [8]  */
        unsigned int    daw_array1_size       : 5   ; /* [7..3]  */
        unsigned int    daw_array1_did        : 3   ; /* [2..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_DAW_ARRAY1_U;

/* Define the union U_SC_DISPATCH_DAW_ARRAY2_U */
/* dispatch daw????????2 */
/* 0x100C */
typedef union tagScDispatchDawArray2
{
    /* Define the struct bits */
    struct
    {
        unsigned int    daw_array2_addr       : 19  ; /* [31..13]  */
        unsigned int    reserved_0            : 4   ; /* [12..9]  */
        unsigned int    daw_array2_sync       : 1   ; /* [8]  */
        unsigned int    daw_array2_size       : 5   ; /* [7..3]  */
        unsigned int    daw_array2_did        : 3   ; /* [2..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_DAW_ARRAY2_U;

/* Define the union U_SC_DISPATCH_DAW_ARRAY3_U */
/* dispatch daw????????3 */
/* 0x1010 */
typedef union tagScDispatchDawArray3
{
    /* Define the struct bits */
    struct
    {
        unsigned int    daw_array3_addr       : 19  ; /* [31..13]  */
        unsigned int    reserved_0            : 4   ; /* [12..9]  */
        unsigned int    daw_array3_sync       : 1   ; /* [8]  */
        unsigned int    daw_array3_size       : 5   ; /* [7..3]  */
        unsigned int    daw_array3_did        : 3   ; /* [2..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_DAW_ARRAY3_U;

/* Define the union U_SC_DISPATCH_DAW_ARRAY4_U */
/* dispatch daw????????4 */
/* 0x1014 */
typedef union tagScDispatchDawArray4
{
    /* Define the struct bits */
    struct
    {
        unsigned int    daw_array4_addr       : 19  ; /* [31..13]  */
        unsigned int    reserved_0            : 4   ; /* [12..9]  */
        unsigned int    daw_array4_sync       : 1   ; /* [8]  */
        unsigned int    daw_array4_size       : 5   ; /* [7..3]  */
        unsigned int    daw_array4_did        : 3   ; /* [2..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_DAW_ARRAY4_U;

/* Define the union U_SC_DISPATCH_DAW_ARRAY5_U */
/* dispatch daw????????5 */
/* 0x1018 */
typedef union tagScDispatchDawArray5
{
    /* Define the struct bits */
    struct
    {
        unsigned int    daw_array5_addr       : 19  ; /* [31..13]  */
        unsigned int    reserved_0            : 4   ; /* [12..9]  */
        unsigned int    daw_array5_sync       : 1   ; /* [8]  */
        unsigned int    daw_array5_size       : 5   ; /* [7..3]  */
        unsigned int    daw_array5_did        : 3   ; /* [2..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_DAW_ARRAY5_U;

/* Define the union U_SC_DISPATCH_DAW_ARRAY6_U */
/* dispatch daw????????6 */
/* 0x101C */
typedef union tagScDispatchDawArray6
{
    /* Define the struct bits */
    struct
    {
        unsigned int    daw_array6_addr       : 19  ; /* [31..13]  */
        unsigned int    reserved_0            : 4   ; /* [12..9]  */
        unsigned int    daw_array6_sync       : 1   ; /* [8]  */
        unsigned int    daw_array6_size       : 5   ; /* [7..3]  */
        unsigned int    daw_array6_did        : 3   ; /* [2..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_DAW_ARRAY6_U;

/* Define the union U_SC_DISPATCH_DAW_ARRAY7_U */
/* dispatch daw????????7 */
/* 0x1020 */
typedef union tagScDispatchDawArray7
{
    /* Define the struct bits */
    struct
    {
        unsigned int    daw_array7_addr       : 19  ; /* [31..13]  */
        unsigned int    reserved_0            : 4   ; /* [12..9]  */
        unsigned int    daw_array7_sync       : 1   ; /* [8]  */
        unsigned int    daw_array7_size       : 5   ; /* [7..3]  */
        unsigned int    daw_array7_did        : 3   ; /* [2..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_DAW_ARRAY7_U;

/* Define the union U_SC_DISPATCH_RETRY_CONTROL_U */
/* dispatch retry???ƼĴ??? */
/* 0x1030 */
typedef union tagScDispatchRetryControl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 15  ; /* [31..17]  */
        unsigned int    retry_en              : 1   ; /* [16]  */
        unsigned int    retry_num_limit       : 16  ; /* [15..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_RETRY_CONTROL_U;

/* Define the union U_SC_DISPATCH_INTMASK_U */
/* dispatch???ж??��μĴ??? */
/* 0x1100 */
typedef union tagScDispatchIntmask
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    intmask               : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_INTMASK_U;

/* Define the union U_SC_DISPATCH_RAWINT_U */
/* dispatch??ԭʼ?ж?״̬?Ĵ??? */
/* 0x1104 */
typedef union tagScDispatchRawint
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    rawint                : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_RAWINT_U;

/* Define the union U_SC_DISPATCH_INTSTAT_U */
/* dispatch???��κ????ж?״̬?Ĵ??? */
/* 0x1108 */
typedef union tagScDispatchIntstat
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    intsts                : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_INTSTAT_U;

/* Define the union U_SC_DISPATCH_INTCLR_U */
/* dispatch???ж??????Ĵ??? */
/* 0x110C */
typedef union tagScDispatchIntclr
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    intclr                : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_INTCLR_U;

/* Define the union U_SC_DISPATCH_ERRSTAT_U */
/* dispatch??ERR״̬?Ĵ??? */
/* 0x1110 */
typedef union tagScDispatchErrstat
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 10  ; /* [31..22]  */
        unsigned int    err_addr              : 17  ; /* [21..5]  */
        unsigned int    err_opcode            : 5   ; /* [4..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_ERRSTAT_U;

/* Define the union U_SC_REMAP_CTRL_U */
/* subsys??????Remap?Ĵ??? */
/* 0x1200 */
typedef union tagScRemapCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    sys_remap_vld         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_REMAP_CTRL_U;

/* Define the union U_SC_SRAM_CTRL0_U */
/* sram???ƼĴ???0 */
/* 0x2030 */
typedef union tagScSramCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
        unsigned int    sram_swap_en          : 1   ; /* [6]  */
        unsigned int    sram_mulerr_addr_clr  : 1   ; /* [5]  */
        unsigned int    sram_sglerr_addr_clr  : 1   ; /* [4]  */
        unsigned int    sram_err_cnt_clr      : 1   ; /* [3]  */
        unsigned int    sram_err_clr          : 1   ; /* [2]  */
        unsigned int    sram_ecc_err_trans    : 1   ; /* [1]  */
        unsigned int    sram_ecc_en           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_CTRL0_U;

/* Define the union U_SC_M3_CTRL_U */
/* M3???ƼĴ??? */
/* 0x2040 */
typedef union tagScM3Ctrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 1   ; /* [31]  */
        unsigned int    m3_dbgen              : 1   ; /* [30]  */
        unsigned int    m3_bigend             : 1   ; /* [29]  */
        unsigned int    m3_wicenreq           : 1   ; /* [28]  */
        unsigned int    m3_rxev               : 1   ; /* [27]  */
        unsigned int    m3_intnmi             : 1   ; /* [26]  */
        unsigned int    m3_stcalib            : 26  ; /* [25..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_M3_CTRL_U;

/* Define the union U_SC_REMAP_SRAM_ADDR_CTRL_U */
/* M3 remap??sram?ĵ?ַ???? */
/* 0x2050 */
typedef union tagScRemapSramAddrCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    remap_sram_addr       : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_REMAP_SRAM_ADDR_CTRL_U;

/* Define the union U_SC_LIGHT_MODULE_DETECT_EN_U */
/* ??ģ??SD?źż???ʹ?ܼĴ??? */
/* 0x2060 */
typedef union tagScLightModuleDetectEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
        unsigned int    light_module_sd_5_en  : 1   ; /* [5]  */
        unsigned int    light_module_sd_4_en  : 1   ; /* [4]  */
        unsigned int    light_module_sd_3_en  : 1   ; /* [3]  */
        unsigned int    light_module_sd_2_en  : 1   ; /* [2]  */
        unsigned int    light_module_sd_1_en  : 1   ; /* [1]  */
        unsigned int    light_module_sd_0_en  : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_LIGHT_MODULE_DETECT_EN_U;

/* Define the union U_SC_TIMER_CLKEN_CTRL_U */
/* TIMER??clken???ɿ??ƼĴ??? */
/* 0x2070 */
typedef union tagScTimerClkenCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    timeren0ov            : 1   ; /* [1]  */
        unsigned int    timeren0sel           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TIMER_CLKEN_CTRL_U;

/* Define the union U_SC_VMID_CTRL0_U */
/* M3 VMID???? */
/* 0x20E0 */
typedef union tagScVmidCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
        unsigned int    m3_vmid2              : 8   ; /* [23..16]  */
        unsigned int    m3_vmid1              : 8   ; /* [15..8]  */
        unsigned int    m3_vmid0              : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_VMID_CTRL0_U;

/* Define the union U_SC_ROCEE_VMID_U */
/* ROCEE VMID???? */
/* 0x20E4 */
typedef union tagScRoceeVmid
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    rocee_vmid            : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ROCEE_VMID_U;

/* Define the union U_SC_ITS_M3_INT_MUX_SEL_U */
/* ???ж??͵?ITS????M3????MUXѡ?? */
/* 0x21F0 */
typedef union tagScItsM3IntMuxSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
        unsigned int    int_m3_ring0_mux_sel  : 1   ; /* [4]  */
        unsigned int    int_m3_ring1_mux_sel  : 1   ; /* [3]  */
        unsigned int    int_tbl_da_mux_sel    : 1   ; /* [2]  */
        unsigned int    int_tbl_sa_mux_sel    : 1   ; /* [1]  */
        unsigned int    int_tbl_old_mux_sel   : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ITS_M3_INT_MUX_SEL_U;

/* Define the union U_SC_FTE_MUX_SEL_U */
/*  */
/* 0x2200 */
typedef union tagScFteMuxSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    mux_sel_fte           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_FTE_MUX_SEL_U;

/* Define the union U_SC_TCAM_MBIST_EN_U */
/* DSAF??TCAM MBIST????ʹ?ܡ? */
/* 0x2300 */
typedef union tagScTcamMbistEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    tcam_mbist_en         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TCAM_MBIST_EN_U;

/* Define the union U_SC_HILINK2_LRSTB_MUX_CTRL_U */
/* HILINK2 lrstb[7:0]??MUXѡ?????? */
/* 0x2340 */
typedef union tagScHilink2LrstbMuxCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink2_lrstb_mux_sel : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_LRSTB_MUX_CTRL_U;

/* Define the union U_SC_HILINK2_MACRO_SS_REFCLK_U */
/* HILINK???üĴ??? */
/* 0x2400 */
typedef union tagScHilink2MacroSsRefclk
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
        unsigned int    hilink2_ss_refclk1_x2w : 2   ; /* [15..14]  */
        unsigned int    hilink2_ss_refclk1_x2e : 2   ; /* [13..12]  */
        unsigned int    hilink2_ss_refclk1_x2n : 2   ; /* [11..10]  */
        unsigned int    hilink2_ss_refclk1_x2s : 2   ; /* [9..8]  */
        unsigned int    hilink2_ss_refclk0_x2w : 2   ; /* [7..6]  */
        unsigned int    hilink2_ss_refclk0_x2e : 2   ; /* [5..4]  */
        unsigned int    hilink2_ss_refclk0_x2n : 2   ; /* [3..2]  */
        unsigned int    hilink2_ss_refclk0_x2s : 2   ; /* [1..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_SS_REFCLK_U;

/* Define the union U_SC_HILINK2_MACRO_CS_REFCLK_DIRSEL_U */
/* HILINK???üĴ??? */
/* 0x2404 */
typedef union tagScHilink2MacroCsRefclkDirsel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
        unsigned int    hilink2_cs_refclk1_dirsel4 : 2   ; /* [19..18]  */
        unsigned int    hilink2_cs_refclk1_dirsel3 : 2   ; /* [17..16]  */
        unsigned int    hilink2_cs_refclk1_dirsel2 : 2   ; /* [15..14]  */
        unsigned int    hilink2_cs_refclk1_dirsel1 : 2   ; /* [13..12]  */
        unsigned int    hilink2_cs_refclk1_dirsel0 : 2   ; /* [11..10]  */
        unsigned int    hilink2_cs_refclk0_dirsel4 : 2   ; /* [9..8]  */
        unsigned int    hilink2_cs_refclk0_dirsel3 : 2   ; /* [7..6]  */
        unsigned int    hilink2_cs_refclk0_dirsel2 : 2   ; /* [5..4]  */
        unsigned int    hilink2_cs_refclk0_dirsel1 : 2   ; /* [3..2]  */
        unsigned int    hilink2_cs_refclk0_dirsel0 : 2   ; /* [1..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_CS_REFCLK_DIRSEL_U;

/* Define the union U_SC_HILINK2_MACRO_LIFECLK2DIG_SEL_U */
/* HILINK???üĴ??? */
/* 0x2408 */
typedef union tagScHilink2MacroLifeclk2digSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    hilink2_lifeclk2dig_sel : 2   ; /* [1..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_LIFECLK2DIG_SEL_U;

/* Define the union U_SC_HILINK2_MACRO_CORE_CLK_SELEXT_U */
/* HILINK???üĴ??? */
/* 0x240C */
typedef union tagScHilink2MacroCoreClkSelext
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink2_core_clk_selext : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_CORE_CLK_SELEXT_U;

/* Define the union U_SC_HILINK2_MACRO_CORE_CLK_SEL_U */
/* HILINK???üĴ??? */
/* 0x2410 */
typedef union tagScHilink2MacroCoreClkSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink2_core_clk_sel  : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_CORE_CLK_SEL_U;

/* Define the union U_SC_HILINK2_MACRO_CTRL_BUS_MODE_U */
/* HILINK???üĴ??? */
/* 0x2414 */
typedef union tagScHilink2MacroCtrlBusMode
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    hilink2_ctrl_bus_mode : 2   ; /* [1..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_CTRL_BUS_MODE_U;

/* Define the union U_SC_HILINK2_MACRO_MACROPWRDB_U */
/* HILINK???üĴ??? */
/* 0x2418 */
typedef union tagScHilink2MacroMacropwrdb
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink2_macropwrdb    : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_MACROPWRDB_U;

/* Define the union U_SC_HILINK2_MACRO_GRSTB_U */
/* HILINK???üĴ??? */
/* 0x241C */
typedef union tagScHilink2MacroGrstb
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink2_grstb         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_GRSTB_U;

/* Define the union U_SC_HILINK2_MACRO_BIT_SLIP_U */
/* HILINK???üĴ??? */
/* 0x2420 */
typedef union tagScHilink2MacroBitSlip
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    hilink2_bit_slip      : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_BIT_SLIP_U;

/* Define the union U_SC_HILINK2_MACRO_LRSTB_U */
/* HILINK???üĴ??? */
/* 0x2424 */
typedef union tagScHilink2MacroLrstb
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    hilink2_lrstb         : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_LRSTB_U;

/* Define the union U_SC_HILINK3_MACRO_SS_REFCLK_U */
/* HILINK???üĴ??? */
/* 0x2500 */
typedef union tagScHilink3MacroSsRefclk
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
        unsigned int    hilink3_ss_refclk1_x2w : 2   ; /* [15..14]  */
        unsigned int    hilink3_ss_refclk1_x2e : 2   ; /* [13..12]  */
        unsigned int    hilink3_ss_refclk1_x2n : 2   ; /* [11..10]  */
        unsigned int    hilink3_ss_refclk1_x2s : 2   ; /* [9..8]  */
        unsigned int    hilink3_ss_refclk0_x2w : 2   ; /* [7..6]  */
        unsigned int    hilink3_ss_refclk0_x2e : 2   ; /* [5..4]  */
        unsigned int    hilink3_ss_refclk0_x2n : 2   ; /* [3..2]  */
        unsigned int    hilink3_ss_refclk0_x2s : 2   ; /* [1..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_SS_REFCLK_U;

/* Define the union U_SC_HILINK3_MACRO_CS_REFCLK_DIRSEL_U */
/* HILINK???üĴ??? */
/* 0x2504 */
typedef union tagScHilink3MacroCsRefclkDirsel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
        unsigned int    hilink3_cs_refclk1_dirsel4 : 2   ; /* [19..18]  */
        unsigned int    hilink3_cs_refclk1_dirsel3 : 2   ; /* [17..16]  */
        unsigned int    hilink3_cs_refclk1_dirsel2 : 2   ; /* [15..14]  */
        unsigned int    hilink3_cs_refclk1_dirsel1 : 2   ; /* [13..12]  */
        unsigned int    hilink3_cs_refclk1_dirsel0 : 2   ; /* [11..10]  */
        unsigned int    hilink3_cs_refclk0_dirsel4 : 2   ; /* [9..8]  */
        unsigned int    hilink3_cs_refclk0_dirsel3 : 2   ; /* [7..6]  */
        unsigned int    hilink3_cs_refclk0_dirsel2 : 2   ; /* [5..4]  */
        unsigned int    hilink3_cs_refclk0_dirsel1 : 2   ; /* [3..2]  */
        unsigned int    hilink3_cs_refclk0_dirsel0 : 2   ; /* [1..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_CS_REFCLK_DIRSEL_U;

/* Define the union U_SC_HILINK3_MACRO_LIFECLK2DIG_SEL_U */
/* HILINK???üĴ??? */
/* 0x2508 */
typedef union tagScHilink3MacroLifeclk2digSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    hilink3_lifeclk2dig_sel : 2   ; /* [1..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_LIFECLK2DIG_SEL_U;

/* Define the union U_SC_HILINK3_MACRO_CORE_CLK_SELEXT_U */
/* HILINK???üĴ??? */
/* 0x250C */
typedef union tagScHilink3MacroCoreClkSelext
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink3_core_clk_selext : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_CORE_CLK_SELEXT_U;

/* Define the union U_SC_HILINK3_MACRO_CORE_CLK_SEL_U */
/* HILINK???üĴ??? */
/* 0x2510 */
typedef union tagScHilink3MacroCoreClkSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink3_core_clk_sel  : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_CORE_CLK_SEL_U;

/* Define the union U_SC_HILINK3_MACRO_CTRL_BUS_MODE_U */
/* HILINK???üĴ??? */
/* 0x2514 */
typedef union tagScHilink3MacroCtrlBusMode
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    hilink3_ctrl_bus_mode : 2   ; /* [1..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_CTRL_BUS_MODE_U;

/* Define the union U_SC_HILINK3_MACRO_MACROPWRDB_U */
/* HILINK???üĴ??? */
/* 0x2518 */
typedef union tagScHilink3MacroMacropwrdb
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink3_macropwrdb    : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_MACROPWRDB_U;

/* Define the union U_SC_HILINK3_MACRO_GRSTB_U */
/* HILINK???üĴ??? */
/* 0x251C */
typedef union tagScHilink3MacroGrstb
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink3_grstb         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_GRSTB_U;

/* Define the union U_SC_HILINK3_MACRO_BIT_SLIP_U */
/* HILINK???üĴ??? */
/* 0x2520 */
typedef union tagScHilink3MacroBitSlip
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
        unsigned int    hilink3_bit_slip      : 4   ; /* [3..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_BIT_SLIP_U;

/* Define the union U_SC_HILINK3_MACRO_LRSTB_U */
/* HILINK???üĴ??? */
/* 0x2524 */
typedef union tagScHilink3MacroLrstb
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
        unsigned int    hilink3_lrstb         : 4   ; /* [3..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_LRSTB_U;

/* Define the union U_SC_HILINK4_MACRO_SS_REFCLK_U */
/* HILINK???üĴ??? */
/* 0x2600 */
typedef union tagScHilink4MacroSsRefclk
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
        unsigned int    hilink4_ss_refclk1_x2w : 2   ; /* [15..14]  */
        unsigned int    hilink4_ss_refclk1_x2e : 2   ; /* [13..12]  */
        unsigned int    hilink4_ss_refclk1_x2n : 2   ; /* [11..10]  */
        unsigned int    hilink4_ss_refclk1_x2s : 2   ; /* [9..8]  */
        unsigned int    hilink4_ss_refclk0_x2w : 2   ; /* [7..6]  */
        unsigned int    hilink4_ss_refclk0_x2e : 2   ; /* [5..4]  */
        unsigned int    hilink4_ss_refclk0_x2n : 2   ; /* [3..2]  */
        unsigned int    hilink4_ss_refclk0_x2s : 2   ; /* [1..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_SS_REFCLK_U;

/* Define the union U_SC_HILINK4_MACRO_CS_REFCLK_DIRSEL_U */
/* HILINK???üĴ??? */
/* 0x2604 */
typedef union tagScHilink4MacroCsRefclkDirsel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
        unsigned int    hilink4_cs_refclk1_dirsel4 : 1   ; /* [9]  */
        unsigned int    hilink4_cs_refclk1_dirsel3 : 1   ; /* [8]  */
        unsigned int    hilink4_cs_refclk1_dirsel2 : 1   ; /* [7]  */
        unsigned int    hilink4_cs_refclk1_dirsel1 : 1   ; /* [6]  */
        unsigned int    hilink4_cs_refclk1_dirsel0 : 1   ; /* [5]  */
        unsigned int    hilink4_cs_refclk0_dirsel4 : 1   ; /* [4]  */
        unsigned int    hilink4_cs_refclk0_dirsel3 : 1   ; /* [3]  */
        unsigned int    hilink4_cs_refclk0_dirsel2 : 1   ; /* [2]  */
        unsigned int    hilink4_cs_refclk0_dirsel1 : 1   ; /* [1]  */
        unsigned int    hilink4_cs_refclk0_dirsel0 : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_CS_REFCLK_DIRSEL_U;

/* Define the union U_SC_HILINK4_MACRO_LIFECLK2DIG_SEL_U */
/* HILINK???üĴ??? */
/* 0x2608 */
typedef union tagScHilink4MacroLifeclk2digSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink4_lifeclk2dig_sel : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_LIFECLK2DIG_SEL_U;

/* Define the union U_SC_HILINK4_MACRO_CORE_CLK_SELEXT_U */
/* HILINK???üĴ??? */
/* 0x260C */
typedef union tagScHilink4MacroCoreClkSelext
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink4_core_clk_selext : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_CORE_CLK_SELEXT_U;

/* Define the union U_SC_HILINK4_MACRO_CORE_CLK_SEL_U */
/* HILINK???üĴ??? */
/* 0x2610 */
typedef union tagScHilink4MacroCoreClkSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink4_core_clk_sel  : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_CORE_CLK_SEL_U;

/* Define the union U_SC_HILINK4_MACRO_CTRL_BUS_MODE_U */
/* HILINK???üĴ??? */
/* 0x2614 */
typedef union tagScHilink4MacroCtrlBusMode
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    hilink4_ctrl_bus_mode : 2   ; /* [1..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_CTRL_BUS_MODE_U;

/* Define the union U_SC_HILINK4_MACRO_MACROPWRDB_U */
/* HILINK???üĴ??? */
/* 0x2618 */
typedef union tagScHilink4MacroMacropwrdb
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink4_macropwrdb    : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_MACROPWRDB_U;

/* Define the union U_SC_HILINK4_MACRO_GRSTB_U */
/* HILINK???üĴ??? */
/* 0x261C */
typedef union tagScHilink4MacroGrstb
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink4_grstb         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_GRSTB_U;

/* Define the union U_SC_HILINK4_MACRO_BIT_SLIP_U */
/* HILINK???üĴ??? */
/* 0x2620 */
typedef union tagScHilink4MacroBitSlip
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
        unsigned int    hilink4_bit_slip      : 4   ; /* [3..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_BIT_SLIP_U;

/* Define the union U_SC_HILINK4_MACRO_LRSTB_U */
/* HILINK???üĴ??? */
/* 0x2624 */
typedef union tagScHilink4MacroLrstb
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
        unsigned int    hilink4_lrstb         : 4   ; /* [3..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_LRSTB_U;

/* Define the union U_SC_SMMU_MEM_CTRL0_U */
/* smmu mem???ƼĴ???0 */
/* 0x3000 */
typedef union tagScSmmuMemCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    ctrl_rfs_smmu         : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SMMU_MEM_CTRL0_U;

/* Define the union U_SC_SMMU_MEM_CTRL1_U */
/* smmu mem???ƼĴ???1 */
/* 0x3004 */
typedef union tagScSmmuMemCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
        unsigned int    tsel_hc_smmu          : 3   ; /* [2..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SMMU_MEM_CTRL1_U;

/* Define the union U_SC_SMMU_MEM_CTRL2_U */
/* smmu mem???ƼĴ???2 */
/* 0x3008 */
typedef union tagScSmmuMemCtrl2
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    test_hc_smmu          : 2   ; /* [1..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SMMU_MEM_CTRL2_U;

/* Define the union U_SC_SLLC1_MEM_CTRL_U */
/* sllc1 mem???ƼĴ??? */
/* 0x3010 */
typedef union tagScSllc1MemCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
        unsigned int    ctrl_rft_sllc1        : 10  ; /* [9..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC1_MEM_CTRL_U;

/* Define the union U_SC_SRAM_MEM_CTRL_U */
/* sram mem???ƼĴ??? */
/* 0x3020 */
typedef union tagScSramMemCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    ctrl_rashsd_sram      : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_MEM_CTRL_U;

/* Define the union U_SC_ROCEE_MEM_CTRL0_U */
/* rocee mem???ƼĴ???0 */
/* 0x3030 */
typedef union tagScRoceeMemCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    ctrl_rfs_rocee        : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ROCEE_MEM_CTRL0_U;

/* Define the union U_SC_ROCEE_MEM_CTRL1_U */
/* rocee mem???ƼĴ???1 */
/* 0x3034 */
typedef union tagScRoceeMemCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
        unsigned int    ctrl_rft_rocee        : 10  ; /* [9..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ROCEE_MEM_CTRL1_U;

/* Define the union U_SC_XGE_MEM_CTRL0_U */
/* xge mem???ƼĴ???0 */
/* 0x3040 */
typedef union tagScXgeMemCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    ctrl_rfs_xge          : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XGE_MEM_CTRL0_U;

/* Define the union U_SC_XGE_MEM_CTRL1_U */
/* xge mem???ƼĴ???1 */
/* 0x3044 */
typedef union tagScXgeMemCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
        unsigned int    ctrl_rft_xge          : 10  ; /* [9..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XGE_MEM_CTRL1_U;

/* Define the union U_SC_SAS_MEM_CTRL_U */
/* sas mem???ƼĴ???0 */
/* 0x3050 */
typedef union tagScSasMemCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    ctrl_rfs_sas          : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SAS_MEM_CTRL_U;

/* Define the union U_SC_GE_MEM_CTRL_U */
/* ge mem???ƼĴ??? */
/* 0x3060 */
typedef union tagScGeMemCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    ctrl_rfs_ge           : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_MEM_CTRL_U;

/* Define the union U_SC_XBAR_MEM_CTRL0_U */
/* xbar mem???ƼĴ???0 */
/* 0x3070 */
typedef union tagScXbarMemCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    ctrl_rfs_xbar         : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XBAR_MEM_CTRL0_U;

/* Define the union U_SC_XBAR_MEM_CTRL1_U */
/* xbar mem???ƼĴ???1 */
/* 0x3074 */
typedef union tagScXbarMemCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
        unsigned int    ctrl_rashde_xbar      : 7   ; /* [6..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XBAR_MEM_CTRL1_U;

/* Define the union U_SC_RCB_MEM_CTRL0_U */
/* rcb mem???ƼĴ???0 */
/* 0x3080 */
typedef union tagScRcbMemCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    ctrl_rfs_rcb          : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RCB_MEM_CTRL0_U;

/* Define the union U_SC_RCB_MEM_CTRL1_U */
/* rcb mem???ƼĴ???1 */
/* 0x3084 */
typedef union tagScRcbMemCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
        unsigned int    ctrl_rft_rcb          : 10  ; /* [9..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RCB_MEM_CTRL1_U;

/* Define the union U_SC_DSAF_CLK_ST_U */
/* DSAFʱ??״̬?Ĵ??? */
/* 0x5300 */
typedef union tagScDsafClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 13  ; /* [31..19]  */
        unsigned int    clk_xbar_com_st       : 1   ; /* [18]  */
        unsigned int    reserved_1            : 5   ; /* [17..13]  */
        unsigned int    clk_xbar_roce_st      : 1   ; /* [12]  */
        unsigned int    reserved_2            : 5   ; /* [11..7]  */
        unsigned int    clk_xbar_ppe_st       : 1   ; /* [6]  */
        unsigned int    clk_xbar_xge5_st      : 1   ; /* [5]  */
        unsigned int    clk_xbar_xge4_st      : 1   ; /* [4]  */
        unsigned int    clk_xbar_xge3_st      : 1   ; /* [3]  */
        unsigned int    clk_xbar_xge2_st      : 1   ; /* [2]  */
        unsigned int    clk_xbar_xge1_st      : 1   ; /* [1]  */
        unsigned int    clk_xbar_xge0_st      : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DSAF_CLK_ST_U;

/* Define the union U_SC_NT_CLK_ST_U */
/* NTʱ??״̬?Ĵ??? */
/* 0x5304 */
typedef union tagScNtClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_nt_st             : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_NT_CLK_ST_U;

/* Define the union U_SC_XGE_CLK_ST_U */
/* XGEʱ??״̬?Ĵ??? */
/* 0x5308 */
typedef union tagScXgeClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 19  ; /* [31..13]  */
        unsigned int    clk_xge5_rx_st        : 1   ; /* [12]  */
        unsigned int    clk_xge4_rx_st        : 1   ; /* [11]  */
        unsigned int    clk_xge3_rx_st        : 1   ; /* [10]  */
        unsigned int    clk_xge2_rx_st        : 1   ; /* [9]  */
        unsigned int    clk_xge1_rx_st        : 1   ; /* [8]  */
        unsigned int    clk_xge0_rx_st        : 1   ; /* [7]  */
        unsigned int    clk_xge5_tx_st        : 1   ; /* [6]  */
        unsigned int    clk_xge4_tx_st        : 1   ; /* [5]  */
        unsigned int    clk_xge3_tx_st        : 1   ; /* [4]  */
        unsigned int    clk_xge2_tx_st        : 1   ; /* [3]  */
        unsigned int    clk_xge1_tx_st        : 1   ; /* [2]  */
        unsigned int    clk_xge0_tx_st        : 1   ; /* [1]  */
        unsigned int    clk_xge_cfg_st        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XGE_CLK_ST_U;

/* Define the union U_SC_GE_CLK_ST_U */
/* GEʱ??״̬?Ĵ??? */
/* 0x530C */
typedef union tagScGeClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_gmac7_rx_st       : 1   ; /* [31]  */
        unsigned int    clk_gmac6_rx_st       : 1   ; /* [30]  */
        unsigned int    clk_gmac5_rx_st       : 1   ; /* [29]  */
        unsigned int    clk_gmac4_rx_st       : 1   ; /* [28]  */
        unsigned int    clk_gmac3_rx_st       : 1   ; /* [27]  */
        unsigned int    clk_gmac2_rx_st       : 1   ; /* [26]  */
        unsigned int    clk_gmac1_rx_st       : 1   ; /* [25]  */
        unsigned int    clk_gmac0_rx_st       : 1   ; /* [24]  */
        unsigned int    clk_gmac7_tx_st       : 1   ; /* [23]  */
        unsigned int    clk_gmac6_tx_st       : 1   ; /* [22]  */
        unsigned int    clk_gmac5_tx_st       : 1   ; /* [21]  */
        unsigned int    clk_gmac4_tx_st       : 1   ; /* [20]  */
        unsigned int    clk_gmac3_tx_st       : 1   ; /* [19]  */
        unsigned int    clk_gmac2_tx_st       : 1   ; /* [18]  */
        unsigned int    clk_gmac1_tx_st       : 1   ; /* [17]  */
        unsigned int    clk_gmac0_tx_st       : 1   ; /* [16]  */
        unsigned int    clk_gmac7_125m_st     : 1   ; /* [15]  */
        unsigned int    clk_gmac6_125m_st     : 1   ; /* [14]  */
        unsigned int    clk_gmac5_125m_st     : 1   ; /* [13]  */
        unsigned int    clk_gmac4_125m_st     : 1   ; /* [12]  */
        unsigned int    clk_gmac3_125m_st     : 1   ; /* [11]  */
        unsigned int    clk_gmac2_125m_st     : 1   ; /* [10]  */
        unsigned int    clk_gmac1_125m_st     : 1   ; /* [9]  */
        unsigned int    clk_gmac0_125m_st     : 1   ; /* [8]  */
        unsigned int    clk_gmac7_sys_st      : 1   ; /* [7]  */
        unsigned int    clk_gmac6_sys_st      : 1   ; /* [6]  */
        unsigned int    clk_gmac5_sys_st      : 1   ; /* [5]  */
        unsigned int    clk_gmac4_sys_st      : 1   ; /* [4]  */
        unsigned int    clk_gmac3_sys_st      : 1   ; /* [3]  */
        unsigned int    clk_gmac2_sys_st      : 1   ; /* [2]  */
        unsigned int    clk_gmac1_sys_st      : 1   ; /* [1]  */
        unsigned int    clk_gmac0_sys_st      : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_CLK_ST_U;

/* Define the union U_SC_PPE_CLK_ST_U */
/* PPEʱ??״̬?Ĵ??? */
/* 0x5310 */
typedef union tagScPpeClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    clk_rcb_ppe7_st       : 1   ; /* [7]  */
        unsigned int    clk_rcb_ppe6_st       : 1   ; /* [6]  */
        unsigned int    clk_ppe5_st           : 1   ; /* [5]  */
        unsigned int    clk_ppe4_st           : 1   ; /* [4]  */
        unsigned int    clk_ppe3_st           : 1   ; /* [3]  */
        unsigned int    clk_ppe2_st           : 1   ; /* [2]  */
        unsigned int    clk_ppe1_st           : 1   ; /* [1]  */
        unsigned int    clk_ppe0_st           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PPE_CLK_ST_U;

/* Define the union U_SC_ROCEE_CLK_ST_U */
/* ROCEEʱ??״̬?Ĵ??? */
/* 0x5314 */
typedef union tagScRoceeClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
        unsigned int    clk_rocee5_st         : 1   ; /* [5]  */
        unsigned int    clk_rocee4_st         : 1   ; /* [4]  */
        unsigned int    clk_rocee3_st         : 1   ; /* [3]  */
        unsigned int    clk_rocee2_st         : 1   ; /* [2]  */
        unsigned int    clk_rocee1_st         : 1   ; /* [1]  */
        unsigned int    clk_rocee0_st         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ROCEE_CLK_ST_U;

/* Define the union U_SC_CPU_CLK_ST_U */
/* CPUʱ??״̬?Ĵ??? */
/* 0x5318 */
typedef union tagScCpuClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_cpu_st            : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_CPU_CLK_ST_U;

/* Define the union U_SC_SAS_CLK_ST_U */
/* SASʱ???ſ??ź?״̬ */
/* 0x531C */
typedef union tagScSasClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
        unsigned int    clk_sas_ch7_tx_st     : 1   ; /* [19]  */
        unsigned int    clk_sas_ch6_tx_st     : 1   ; /* [18]  */
        unsigned int    clk_sas_ch5_tx_st     : 1   ; /* [17]  */
        unsigned int    clk_sas_ch4_tx_st     : 1   ; /* [16]  */
        unsigned int    clk_sas_ch3_tx_st     : 1   ; /* [15]  */
        unsigned int    clk_sas_ch2_tx_st     : 1   ; /* [14]  */
        unsigned int    clk_sas_ch1_tx_st     : 1   ; /* [13]  */
        unsigned int    clk_sas_ch0_tx_st     : 1   ; /* [12]  */
        unsigned int    clk_sas_ch7_rx_st     : 1   ; /* [11]  */
        unsigned int    clk_sas_ch6_rx_st     : 1   ; /* [10]  */
        unsigned int    clk_sas_ch5_rx_st     : 1   ; /* [9]  */
        unsigned int    clk_sas_ch4_rx_st     : 1   ; /* [8]  */
        unsigned int    clk_sas_ch3_rx_st     : 1   ; /* [7]  */
        unsigned int    clk_sas_ch2_rx_st     : 1   ; /* [6]  */
        unsigned int    clk_sas_ch1_rx_st     : 1   ; /* [5]  */
        unsigned int    clk_sas_ch0_rx_st     : 1   ; /* [4]  */
        unsigned int    clk_sas_oob_st        : 1   ; /* [3]  */
        unsigned int    clk_sas_ahb_st        : 1   ; /* [2]  */
        unsigned int    clk_sas_mem_st        : 1   ; /* [1]  */
        unsigned int    clk_sas_st            : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SAS_CLK_ST_U;

/* Define the union U_SC_ITS_CLK_ST_U */
/* ITSʱ??״̬?Ĵ??? */
/* 0x5320 */
typedef union tagScItsClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_its_st            : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ITS_CLK_ST_U;

/* Define the union U_SC_SRAM_CLK_ST_U */
/* SRAMʱ??״̬?Ĵ??? */
/* 0x5324 */
typedef union tagScSramClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_sram_st           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_CLK_ST_U;

/* Define the union U_SC_RCB_PPE_COM_CLK_ST_U */
/* RCB PPE????ʱ??״̬?Ĵ??? */
/* 0x5328 */
typedef union tagScRcbPpeComClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_rcb_ppe_com_st    : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RCB_PPE_COM_CLK_ST_U;

/* Define the union U_SC_TIMER_CLK_ST_U */
/* TIMERʱ??״̬?Ĵ??? */
/* 0x532C */
typedef union tagScTimerClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_timer_st          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TIMER_CLK_ST_U;

/* Define the union U_SC_SLLC_CLK_ST_U */
/* SLLC1ʱ??״̬?Ĵ??? */
/* 0x5330 */
typedef union tagScSllcClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_sllc_st           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC_CLK_ST_U;

/* Define the union U_SC_XBAR_RESET_ST_U */
/* DSAF?���λ????״̬?Ĵ??? */
/* 0x5A00 */
typedef union tagScXbarResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    xbar_srst_st          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XBAR_RESET_ST_U;

/* Define the union U_SC_NT_RESET_ST_U */
/* NT?���λ????״̬?Ĵ??? */
/* 0x5A04 */
typedef union tagScNtResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    nt_srst_st            : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_NT_RESET_ST_U;

/* Define the union U_SC_XGE_RESET_ST_U */
/* XGE?���λ????״̬?Ĵ??? */
/* 0x5A08 */
typedef union tagScXgeResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 1   ; /* [31]  */
        unsigned int    xge5_fec_rx_srst_st   : 1   ; /* [30]  */
        unsigned int    xge4_fec_rx_srst_st   : 1   ; /* [29]  */
        unsigned int    xge3_fec_rx_srst_st   : 1   ; /* [28]  */
        unsigned int    xge2_fec_rx_srst_st   : 1   ; /* [27]  */
        unsigned int    xge1_fec_rx_srst_st   : 1   ; /* [26]  */
        unsigned int    xge0_fec_rx_srst_st   : 1   ; /* [25]  */
        unsigned int    xge5_fec_tx_srst_st   : 1   ; /* [24]  */
        unsigned int    xge4_fec_tx_srst_st   : 1   ; /* [23]  */
        unsigned int    xge3_fec_tx_srst_st   : 1   ; /* [22]  */
        unsigned int    xge2_fec_tx_srst_st   : 1   ; /* [21]  */
        unsigned int    xge1_fec_tx_srst_st   : 1   ; /* [20]  */
        unsigned int    xge0_fec_tx_srst_st   : 1   ; /* [19]  */
        unsigned int    xge5_core_rx_srst_st  : 1   ; /* [18]  */
        unsigned int    xge4_core_rx_srst_st  : 1   ; /* [17]  */
        unsigned int    xge3_core_rx_srst_st  : 1   ; /* [16]  */
        unsigned int    xge2_core_rx_srst_st  : 1   ; /* [15]  */
        unsigned int    xge1_core_rx_srst_st  : 1   ; /* [14]  */
        unsigned int    xge0_core_rx_srst_st  : 1   ; /* [13]  */
        unsigned int    xge5_core_tx_srst_st  : 1   ; /* [12]  */
        unsigned int    xge4_core_tx_srst_st  : 1   ; /* [11]  */
        unsigned int    xge3_core_tx_srst_st  : 1   ; /* [10]  */
        unsigned int    xge2_core_tx_srst_st  : 1   ; /* [9]  */
        unsigned int    xge1_core_tx_srst_st  : 1   ; /* [8]  */
        unsigned int    xge0_core_tx_srst_st  : 1   ; /* [7]  */
        unsigned int    xge5_cfg_mac_srst_st  : 1   ; /* [6]  */
        unsigned int    xge4_cfg_mac_srst_st  : 1   ; /* [5]  */
        unsigned int    xge3_cfg_mac_srst_st  : 1   ; /* [4]  */
        unsigned int    xge2_cfg_mac_srst_st  : 1   ; /* [3]  */
        unsigned int    xge1_cfg_mac_srst_st  : 1   ; /* [2]  */
        unsigned int    xge0_cfg_mac_srst_st  : 1   ; /* [1]  */
        unsigned int    xge_cfg_srst_st       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XGE_RESET_ST_U;

/* Define the union U_SC_GE_RESET_ST0_U */
/* GE?���λ????״̬?Ĵ???0 */
/* 0x5A0C */
typedef union tagScGeResetSt0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
        unsigned int    gmac5_eth_srst_st     : 1   ; /* [29]  */
        unsigned int    gmac4_eth_srst_st     : 1   ; /* [28]  */
        unsigned int    gmac3_eth_srst_st     : 1   ; /* [27]  */
        unsigned int    gmac2_eth_srst_st     : 1   ; /* [26]  */
        unsigned int    gmac1_eth_srst_st     : 1   ; /* [25]  */
        unsigned int    gmac0_eth_srst_st     : 1   ; /* [24]  */
        unsigned int    gmac5_cfg_srst_st     : 1   ; /* [23]  */
        unsigned int    gmac4_cfg_srst_st     : 1   ; /* [22]  */
        unsigned int    gmac3_cfg_srst_st     : 1   ; /* [21]  */
        unsigned int    gmac2_cfg_srst_st     : 1   ; /* [20]  */
        unsigned int    gmac1_cfg_srst_st     : 1   ; /* [19]  */
        unsigned int    gmac0_cfg_srst_st     : 1   ; /* [18]  */
        unsigned int    gmac5_rx_srst_st      : 1   ; /* [17]  */
        unsigned int    gmac4_rx_srst_st      : 1   ; /* [16]  */
        unsigned int    gmac3_rx_srst_st      : 1   ; /* [15]  */
        unsigned int    gmac2_rx_srst_st      : 1   ; /* [14]  */
        unsigned int    gmac1_rx_srst_st      : 1   ; /* [13]  */
        unsigned int    gmac0_rx_srst_st      : 1   ; /* [12]  */
        unsigned int    gmac5_tx_srst_st      : 1   ; /* [11]  */
        unsigned int    gmac4_tx_srst_st      : 1   ; /* [10]  */
        unsigned int    gmac3_tx_srst_st      : 1   ; /* [9]  */
        unsigned int    gmac2_tx_srst_st      : 1   ; /* [8]  */
        unsigned int    gmac1_tx_srst_st      : 1   ; /* [7]  */
        unsigned int    gmac0_tx_srst_st      : 1   ; /* [6]  */
        unsigned int    gmac5_sys_srst_st     : 1   ; /* [5]  */
        unsigned int    gmac4_sys_srst_st     : 1   ; /* [4]  */
        unsigned int    gmac3_sys_srst_st     : 1   ; /* [3]  */
        unsigned int    gmac2_sys_srst_st     : 1   ; /* [2]  */
        unsigned int    gmac1_sys_srst_st     : 1   ; /* [1]  */
        unsigned int    gmac0_sys_srst_st     : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_RESET_ST0_U;

/* Define the union U_SC_GE_RESET_ST1_U */
/* GE?���λ????״̬?Ĵ???1 */
/* 0x5A10 */
typedef union tagScGeResetSt1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 14  ; /* [31..18]  */
        unsigned int    gmac7_fifo_srst_st    : 1   ; /* [17]  */
        unsigned int    gmac6_fifo_srst_st    : 1   ; /* [16]  */
        unsigned int    gmac7_eth_srst_st     : 1   ; /* [15]  */
        unsigned int    gmac6_eth_srst_st     : 1   ; /* [14]  */
        unsigned int    gmac7_cfg_srst_st     : 1   ; /* [13]  */
        unsigned int    gmac6_cfg_srst_st     : 1   ; /* [12]  */
        unsigned int    gmac7_rx_srst_st      : 1   ; /* [11]  */
        unsigned int    gmac6_rx_srst_st      : 1   ; /* [10]  */
        unsigned int    gmac7_tx_srst_st      : 1   ; /* [9]  */
        unsigned int    gmac6_tx_srst_st      : 1   ; /* [8]  */
        unsigned int    gmac7_sys_srst_st     : 1   ; /* [7]  */
        unsigned int    gmac6_sys_srst_st     : 1   ; /* [6]  */
        unsigned int    gmac5_fifo_srst_st    : 1   ; /* [5]  */
        unsigned int    gmac4_fifo_srst_st    : 1   ; /* [4]  */
        unsigned int    gmac3_fifo_srst_st    : 1   ; /* [3]  */
        unsigned int    gmac2_fifo_srst_st    : 1   ; /* [2]  */
        unsigned int    gmac1_fifo_srst_st    : 1   ; /* [1]  */
        unsigned int    gmac0_fifo_srst_st    : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_RESET_ST1_U;

/* Define the union U_SC_PPE_RESET_ST_U */
/* PPE?���λ????״̬?Ĵ??? */
/* 0x5A24 */
typedef union tagScPpeResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
        unsigned int    rcb2_srst_st          : 1   ; /* [9]  */
        unsigned int    rcb1_srst_st          : 1   ; /* [8]  */
        unsigned int    ppe7_srst_st          : 1   ; /* [7]  */
        unsigned int    ppe6_srst_st          : 1   ; /* [6]  */
        unsigned int    ppe5_srst_st          : 1   ; /* [5]  */
        unsigned int    ppe4_srst_st          : 1   ; /* [4]  */
        unsigned int    ppe3_srst_st          : 1   ; /* [3]  */
        unsigned int    ppe2_srst_st          : 1   ; /* [2]  */
        unsigned int    ppe1_srst_st          : 1   ; /* [1]  */
        unsigned int    ppe0_srst_st          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PPE_RESET_ST_U;

/* Define the union U_SC_ROCEE_RESET_ST_U */
/* ROCEE?���λ????״̬?Ĵ??? */
/* 0x5A28 */
typedef union tagScRoceeResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    rocee_srst_st         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ROCEE_RESET_ST_U;

/* Define the union U_SC_CPU_RESET_ST_U */
/* CPU?���λ????״̬?Ĵ??? */
/* 0x5A2C */
typedef union tagScCpuResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    cpu_srst_st           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_CPU_RESET_ST_U;

/* Define the union U_SC_SAS_RESET_ST_U */
/* SAS?���λ????״̬?Ĵ??? */
/* 0x5A30 */
typedef union tagScSasResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 13  ; /* [31..19]  */
        unsigned int    sas_ch7_tx_srst_st    : 1   ; /* [18]  */
        unsigned int    sas_ch6_tx_srst_st    : 1   ; /* [17]  */
        unsigned int    sas_ch5_tx_srst_st    : 1   ; /* [16]  */
        unsigned int    sas_ch4_tx_srst_st    : 1   ; /* [15]  */
        unsigned int    sas_ch3_tx_srst_st    : 1   ; /* [14]  */
        unsigned int    sas_ch2_tx_srst_st    : 1   ; /* [13]  */
        unsigned int    sas_ch1_tx_srst_st    : 1   ; /* [12]  */
        unsigned int    sas_ch0_tx_srst_st    : 1   ; /* [11]  */
        unsigned int    sas_ch7_rx_srst_st    : 1   ; /* [10]  */
        unsigned int    sas_ch6_rx_srst_st    : 1   ; /* [9]  */
        unsigned int    sas_ch5_rx_srst_st    : 1   ; /* [8]  */
        unsigned int    sas_ch4_rx_srst_st    : 1   ; /* [7]  */
        unsigned int    sas_ch3_rx_srst_st    : 1   ; /* [6]  */
        unsigned int    sas_ch2_rx_srst_st    : 1   ; /* [5]  */
        unsigned int    sas_ch1_rx_srst_st    : 1   ; /* [4]  */
        unsigned int    sas_ch0_rx_srst_st    : 1   ; /* [3]  */
        unsigned int    sas_ahb_srst_st       : 1   ; /* [2]  */
        unsigned int    sas_oob_srst_st       : 1   ; /* [1]  */
        unsigned int    sas_srst_st           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SAS_RESET_ST_U;

/* Define the union U_SC_SLLC_TSVRX_RESET_ST_U */
/* ΪSLLC TSVRXͨ???���λ״̬?Ĵ??? */
/* 0x5A34 */
typedef union tagScSllcTsvrxResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
        unsigned int    sllc_tsvrx3_srst_st   : 1   ; /* [3]  */
        unsigned int    sllc_tsvrx2_srst_st   : 1   ; /* [2]  */
        unsigned int    sllc_tsvrx1_srst_st   : 1   ; /* [1]  */
        unsigned int    sllc_tsvrx0_srst_st   : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC_TSVRX_RESET_ST_U;

/* Define the union U_SC_ITS_RESET_ST_U */
/* ITS?���λ????״̬?Ĵ??? */
/* 0x5A38 */
typedef union tagScItsResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    its_srst_st           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ITS_RESET_ST_U;

/* Define the union U_SC_SRAM_RESET_ST_U */
/* SRAM?���λ????״̬?Ĵ??? */
/* 0x5A40 */
typedef union tagScSramResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    sram_srst_st          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_RESET_ST_U;

/* Define the union U_SC_RCB_PPE_COM_RESET_ST_U */
/* RCB PPE?????���λ????״̬?Ĵ??? */
/* 0x5A44 */
typedef union tagScRcbPpeComResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    rcb_ppe_com_srst_st   : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RCB_PPE_COM_RESET_ST_U;

/* Define the union U_SC_TIMER_RESET_ST_U */
/* TIMER??λ״̬?Ĵ??? */
/* 0x5A4C */
typedef union tagScTimerResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    timer_srst_st         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TIMER_RESET_ST_U;

/* Define the union U_SC_SLLC_RESET_ST_U */
/* SLLC1??λ״̬?Ĵ??? */
/* 0x5A50 */
typedef union tagScSllcResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    sllc_srst_st          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC_RESET_ST_U;

/* Define the union U_SC_SRAM_ST0_U */
/* sram״̬?Ĵ???0 */
/* 0x6000 */
typedef union tagScSramSt0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
        unsigned int    sram_multi_err        : 1   ; /* [2]  */
        unsigned int    sram_double_err       : 1   ; /* [1]  */
        unsigned int    sram_single_err       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_ST0_U;

/* Define the union U_SC_SRAM_ST3_U */
/* sram״̬?Ĵ???3 */
/* 0x600C */
typedef union tagScSramSt3
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
        unsigned int    sram_count_ecc_sglerr : 16  ; /* [15..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_ST3_U;

/* Define the union U_SC_SRAM_ST4_U */
/* sram״̬?Ĵ???4 */
/* 0x6010 */
typedef union tagScSramSt4
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
        unsigned int    sram_count_ecc_mulerr : 16  ; /* [15..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_ST4_U;

/* Define the union U_SC_SRAM_ST5_U */
/* sram״̬?Ĵ???5 */
/* 0x6014 */
typedef union tagScSramSt5
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
        unsigned int    sram_dfx_dbg          : 16  ; /* [15..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_ST5_U;

/* Define the union U_SC_M3_STAT_U */
/*  */
/* 0x6100 */
typedef union tagScM3Stat
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 15  ; /* [31..17]  */
        unsigned int    m3_wakeup             : 1   ; /* [16]  */
        unsigned int    m3_wicenack           : 1   ; /* [15]  */
        unsigned int    m3_currpri            : 8   ; /* [14..7]  */
        unsigned int    m3_sleeping           : 1   ; /* [6]  */
        unsigned int    m3_lockup             : 1   ; /* [5]  */
        unsigned int    m3_halted             : 1   ; /* [4]  */
        unsigned int    m3_brchstat           : 4   ; /* [3..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_M3_STAT_U;

/* Define the union U_SC_TCAM_MBIST_ST_U */
/* DSAF??TCAM MBIST???Խ???״̬ */
/* 0x6300 */
typedef union tagScTcamMbistSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
        unsigned int    tcam_mbist_err_mem    : 1   ; /* [2]  */
        unsigned int    tcam_mbist_err_cmp    : 1   ; /* [1]  */
        unsigned int    tcam_mbist_done       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TCAM_MBIST_ST_U;

/* Define the union U_SC_GE_ST_U */
/* DSAF??GE?Ĺ???״ָ̬ʾ */
/* 0x6380 */
typedef union tagScGeSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    gmac_led_activity_7   : 1   ; /* [7]  */
        unsigned int    gmac_led_activity_6   : 1   ; /* [6]  */
        unsigned int    gmac_led_activity_5   : 1   ; /* [5]  */
        unsigned int    gmac_led_activity_4   : 1   ; /* [4]  */
        unsigned int    gmac_led_activity_3   : 1   ; /* [3]  */
        unsigned int    gmac_led_activity_2   : 1   ; /* [2]  */
        unsigned int    gmac_led_activity_1   : 1   ; /* [1]  */
        unsigned int    gmac_led_activity_0   : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_ST_U;

/* Define the union U_SC_XGE_ST_U */
/* DSAF??XGE?Ĺ???״ָ̬ʾ */
/* 0x6390 */
typedef union tagScXgeSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
        unsigned int    xge_app_rx_link_up_5  : 1   ; /* [5]  */
        unsigned int    xge_app_rx_link_up_4  : 1   ; /* [4]  */
        unsigned int    xge_app_rx_link_up_3  : 1   ; /* [3]  */
        unsigned int    xge_app_rx_link_up_2  : 1   ; /* [2]  */
        unsigned int    xge_app_rx_link_up_1  : 1   ; /* [1]  */
        unsigned int    xge_app_rx_link_up_0  : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XGE_ST_U;

/* Define the union U_SC_HILINK2_MACRO_PLLOUTOFLOCK_U */
/* HILINK״̬?Ĵ??? */
/* 0x6400 */
typedef union tagScHilink2MacroPlloutoflock
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    hilink2_plloutoflock  : 2   ; /* [1..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_PLLOUTOFLOCK_U;

/* Define the union U_SC_HILINK2_MACRO_PRBS_ERR_U */
/* HILINK״̬?Ĵ??? */
/* 0x6404 */
typedef union tagScHilink2MacroPrbsErr
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    hilink2_prbs_err      : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_PRBS_ERR_U;

/* Define the union U_SC_HILINK2_MACRO_LOS_U */
/* HILINK״̬?Ĵ??? */
/* 0x6408 */
typedef union tagScHilink2MacroLos
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    hilink2_los           : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_LOS_U;

/* Define the union U_SC_HILINK3_MACRO_PLLOUTOFLOCK_U */
/* HILINK״̬?Ĵ??? */
/* 0x6500 */
typedef union tagScHilink3MacroPlloutoflock
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    hilink3_plloutoflock  : 2   ; /* [1..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_PLLOUTOFLOCK_U;

/* Define the union U_SC_HILINK3_MACRO_PRBS_ERR_U */
/* HILINK״̬?Ĵ??? */
/* 0x6504 */
typedef union tagScHilink3MacroPrbsErr
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
        unsigned int    hilink3_prbs_err      : 4   ; /* [3..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_PRBS_ERR_U;

/* Define the union U_SC_HILINK3_MACRO_LOS_U */
/* HILINK״̬?Ĵ??? */
/* 0x6508 */
typedef union tagScHilink3MacroLos
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
        unsigned int    hilink3_los           : 4   ; /* [3..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_LOS_U;

/* Define the union U_SC_HILINK4_MACRO_PLLOUTOFLOCK_U */
/* HILINK״̬?Ĵ??? */
/* 0x6600 */
typedef union tagScHilink4MacroPlloutoflock
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hilink4_plloutoflock  : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_PLLOUTOFLOCK_U;

/* Define the union U_SC_HILINK4_MACRO_PRBS_ERR_U */
/* HILINK״̬?Ĵ??? */
/* 0x6604 */
typedef union tagScHilink4MacroPrbsErr
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
        unsigned int    hilink4_prbs_err      : 4   ; /* [3..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_PRBS_ERR_U;

/* Define the union U_SC_HILINK4_MACRO_LOS_U */
/* HILINK״̬?Ĵ??? */
/* 0x6608 */
typedef union tagScHilink4MacroLos
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
        unsigned int    hilink4_los           : 4   ; /* [3..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_LOS_U;

#else

/* Define the union U_SC_NT_SRAM_CLK_SEL_U */
/* Node Tableģ??TCAM??memoryʱ?ӿ??ƼĴ??? */
/* 0x100 */
typedef union tagScNtSramClkSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    nt_sram_clk_sel       : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_NT_SRAM_CLK_SEL_U;

/* Define the union U_SC_HILINK3_CRG_CTRL0_U */
/* ????HILINK CRG */
/* 0x180 */
typedef union tagScHilink3CrgCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink3_mode_cfg      : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_CRG_CTRL0_U;

/* Define the union U_SC_HILINK3_CRG_CTRL1_U */
/* ????HILINK CRG */
/* 0x184 */
typedef union tagScHilink3CrgCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink3_ge_tx_div_sel : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_CRG_CTRL1_U;

/* Define the union U_SC_HILINK3_CRG_CTRL2_U */
/* ????HILINK CRG */
/* 0x188 */
typedef union tagScHilink3CrgCtrl2
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ge2_mclk_clk_sel      : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_CRG_CTRL2_U;

/* Define the union U_SC_HILINK3_CRG_CTRL3_U */
/* ????HILINK CRG */
/* 0x18C */
typedef union tagScHilink3CrgCtrl3
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ge3_mclk_clk_sel      : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_CRG_CTRL3_U;

/* Define the union U_SC_HILINK4_CRG_CTRL0_U */
/* ????HILINK CRG */
/* 0x190 */
typedef union tagScHilink4CrgCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink4_mode_cfg      : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_CRG_CTRL0_U;

/* Define the union U_SC_HILINK4_CRG_CTRL1_U */
/* ????HILINK CRG */
/* 0x194 */
typedef union tagScHilink4CrgCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink4_ge_tx_div_sel : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_CRG_CTRL1_U;

/* Define the union U_SC_DSAF_CLK_EN_U */
/* DSAFʱ??ʹ?ܼĴ??? */
/* 0x300 */
typedef union tagScDsafClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_xbar_xge0_enb     : 1   ; /* [0]  */
        unsigned int    clk_xbar_xge1_enb     : 1   ; /* [1]  */
        unsigned int    clk_xbar_xge2_enb     : 1   ; /* [2]  */
        unsigned int    clk_xbar_xge3_enb     : 1   ; /* [3]  */
        unsigned int    clk_xbar_xge4_enb     : 1   ; /* [4]  */
        unsigned int    clk_xbar_xge5_enb     : 1   ; /* [5]  */
        unsigned int    clk_xbar_ppe_enb      : 1   ; /* [6]  */
        unsigned int    reserved_2            : 5   ; /* [11..7]  */
        unsigned int    clk_xbar_roce_enb     : 1   ; /* [12]  */
        unsigned int    reserved_1            : 5   ; /* [17..13]  */
        unsigned int    clk_xbar_com_enb      : 1   ; /* [18]  */
        unsigned int    reserved_0            : 13  ; /* [31..19]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DSAF_CLK_EN_U;

/* Define the union U_SC_DSAF_CLK_DIS_U */
/* DSAFʱ?ӽ?ֹ?Ĵ??? */
/* 0x304 */
typedef union tagScDsafClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_xbar_xge0_dsb     : 1   ; /* [0]  */
        unsigned int    clk_xbar_xge1_dsb     : 1   ; /* [1]  */
        unsigned int    clk_xbar_xge2_dsb     : 1   ; /* [2]  */
        unsigned int    clk_xbar_xge3_dsb     : 1   ; /* [3]  */
        unsigned int    clk_xbar_xge4_dsb     : 1   ; /* [4]  */
        unsigned int    clk_xbar_xge5_dsb     : 1   ; /* [5]  */
        unsigned int    clk_xbar_ppe_dsb      : 1   ; /* [6]  */
        unsigned int    reserved_2            : 5   ; /* [11..7]  */
        unsigned int    clk_xbar_roce_dsb     : 1   ; /* [12]  */
        unsigned int    reserved_1            : 5   ; /* [17..13]  */
        unsigned int    clk_xbar_com_dsb      : 1   ; /* [18]  */
        unsigned int    reserved_0            : 13  ; /* [31..19]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DSAF_CLK_DIS_U;

/* Define the union U_SC_NT_CLK_EN_U */
/* NTʱ??ʹ?ܼĴ??? */
/* 0x308 */
typedef union tagScNtClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_nt_enb            : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_NT_CLK_EN_U;

/* Define the union U_SC_NT_CLK_DIS_U */
/* NTʱ?ӽ?ֹ?Ĵ??? */
/* 0x30C */
typedef union tagScNtClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_nt_dsb            : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_NT_CLK_DIS_U;

/* Define the union U_SC_XGE_CLK_EN_U */
/* XGEʱ??ʹ?ܼĴ??? */
/* 0x310 */
typedef union tagScXgeClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_xge_cfg_enb       : 1   ; /* [0]  */
        unsigned int    clk_xge0_rx_enb       : 1   ; /* [1]  */
        unsigned int    clk_xge1_rx_enb       : 1   ; /* [2]  */
        unsigned int    clk_xge2_rx_enb       : 1   ; /* [3]  */
        unsigned int    clk_xge3_rx_enb       : 1   ; /* [4]  */
        unsigned int    clk_xge4_rx_enb       : 1   ; /* [5]  */
        unsigned int    clk_xge5_rx_enb       : 1   ; /* [6]  */
        unsigned int    clk_xge0_tx_enb       : 1   ; /* [7]  */
        unsigned int    clk_xge1_tx_enb       : 1   ; /* [8]  */
        unsigned int    clk_xge2_tx_enb       : 1   ; /* [9]  */
        unsigned int    clk_xge3_tx_enb       : 1   ; /* [10]  */
        unsigned int    clk_xge4_tx_enb       : 1   ; /* [11]  */
        unsigned int    clk_xge5_tx_enb       : 1   ; /* [12]  */
        unsigned int    reserved_0            : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XGE_CLK_EN_U;

/* Define the union U_SC_XGE_CLK_DIS_U */
/* XGEʱ?ӽ?ֹ?Ĵ??? */
/* 0x314 */
typedef union tagScXgeClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_xge_cfg_dsb       : 1   ; /* [0]  */
        unsigned int    clk_xge0_rx_dsb       : 1   ; /* [1]  */
        unsigned int    clk_xge1_rx_dsb       : 1   ; /* [2]  */
        unsigned int    clk_xge2_rx_dsb       : 1   ; /* [3]  */
        unsigned int    clk_xge3_rx_dsb       : 1   ; /* [4]  */
        unsigned int    clk_xge4_rx_dsb       : 1   ; /* [5]  */
        unsigned int    clk_xge5_rx_dsb       : 1   ; /* [6]  */
        unsigned int    clk_xge0_tx_dsb       : 1   ; /* [7]  */
        unsigned int    clk_xge1_tx_dsb       : 1   ; /* [8]  */
        unsigned int    clk_xge2_tx_dsb       : 1   ; /* [9]  */
        unsigned int    clk_xge3_tx_dsb       : 1   ; /* [10]  */
        unsigned int    clk_xge4_tx_dsb       : 1   ; /* [11]  */
        unsigned int    clk_xge5_tx_dsb       : 1   ; /* [12]  */
        unsigned int    reserved_0            : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XGE_CLK_DIS_U;

/* Define the union U_SC_GE_CLK_EN_U */
/* GEʱ??ʹ?ܼĴ??? */
/* 0x318 */
typedef union tagScGeClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_gmac0_sys_enb     : 1   ; /* [0]  */
        unsigned int    clk_gmac1_sys_enb     : 1   ; /* [1]  */
        unsigned int    clk_gmac2_sys_enb     : 1   ; /* [2]  */
        unsigned int    clk_gmac3_sys_enb     : 1   ; /* [3]  */
        unsigned int    clk_gmac4_sys_enb     : 1   ; /* [4]  */
        unsigned int    clk_gmac5_sys_enb     : 1   ; /* [5]  */
        unsigned int    clk_gmac6_sys_enb     : 1   ; /* [6]  */
        unsigned int    clk_gmac7_sys_enb     : 1   ; /* [7]  */
        unsigned int    clk_gmac0_125m_enb    : 1   ; /* [8]  */
        unsigned int    clk_gmac1_125m_enb    : 1   ; /* [9]  */
        unsigned int    clk_gmac2_125m_enb    : 1   ; /* [10]  */
        unsigned int    clk_gmac3_125m_enb    : 1   ; /* [11]  */
        unsigned int    clk_gmac4_125m_enb    : 1   ; /* [12]  */
        unsigned int    clk_gmac5_125m_enb    : 1   ; /* [13]  */
        unsigned int    clk_gmac6_125m_enb    : 1   ; /* [14]  */
        unsigned int    clk_gmac7_125m_enb    : 1   ; /* [15]  */
        unsigned int    clk_gmac0_tx_enb      : 1   ; /* [16]  */
        unsigned int    clk_gmac1_tx_enb      : 1   ; /* [17]  */
        unsigned int    clk_gmac2_tx_enb      : 1   ; /* [18]  */
        unsigned int    clk_gmac3_tx_enb      : 1   ; /* [19]  */
        unsigned int    clk_gmac4_tx_enb      : 1   ; /* [20]  */
        unsigned int    clk_gmac5_tx_enb      : 1   ; /* [21]  */
        unsigned int    clk_gmac6_tx_enb      : 1   ; /* [22]  */
        unsigned int    clk_gmac7_tx_enb      : 1   ; /* [23]  */
        unsigned int    clk_gmac0_rx_enb      : 1   ; /* [24]  */
        unsigned int    clk_gmac1_rx_enb      : 1   ; /* [25]  */
        unsigned int    clk_gmac2_rx_enb      : 1   ; /* [26]  */
        unsigned int    clk_gmac3_rx_enb      : 1   ; /* [27]  */
        unsigned int    clk_gmac4_rx_enb      : 1   ; /* [28]  */
        unsigned int    clk_gmac5_rx_enb      : 1   ; /* [29]  */
        unsigned int    clk_gmac6_rx_enb      : 1   ; /* [30]  */
        unsigned int    clk_gmac7_rx_enb      : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_CLK_EN_U;

/* Define the union U_SC_GE_CLK_DIS_U */
/* GEʱ?ӽ?ֹ?Ĵ??? */
/* 0x31C */
typedef union tagScGeClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_gmac0_sys_dsb     : 1   ; /* [0]  */
        unsigned int    clk_gmac1_sys_dsb     : 1   ; /* [1]  */
        unsigned int    clk_gmac2_sys_dsb     : 1   ; /* [2]  */
        unsigned int    clk_gmac3_sys_dsb     : 1   ; /* [3]  */
        unsigned int    clk_gmac4_sys_dsb     : 1   ; /* [4]  */
        unsigned int    clk_gmac5_sys_dsb     : 1   ; /* [5]  */
        unsigned int    clk_gmac6_sys_dsb     : 1   ; /* [6]  */
        unsigned int    clk_gmac7_sys_dsb     : 1   ; /* [7]  */
        unsigned int    clk_gmac0_125m_dsb    : 1   ; /* [8]  */
        unsigned int    clk_gmac1_125m_dsb    : 1   ; /* [9]  */
        unsigned int    clk_gmac2_125m_dsb    : 1   ; /* [10]  */
        unsigned int    clk_gmac3_125m_dsb    : 1   ; /* [11]  */
        unsigned int    clk_gmac4_125m_dsb    : 1   ; /* [12]  */
        unsigned int    clk_gmac5_125m_dsb    : 1   ; /* [13]  */
        unsigned int    clk_gmac6_125m_dsb    : 1   ; /* [14]  */
        unsigned int    clk_gmac7_125m_dsb    : 1   ; /* [15]  */
        unsigned int    clk_gmac0_tx_dsb      : 1   ; /* [16]  */
        unsigned int    clk_gmac1_tx_dsb      : 1   ; /* [17]  */
        unsigned int    clk_gmac2_tx_dsb      : 1   ; /* [18]  */
        unsigned int    clk_gmac3_tx_dsb      : 1   ; /* [19]  */
        unsigned int    clk_gmac4_tx_dsb      : 1   ; /* [20]  */
        unsigned int    clk_gmac5_tx_dsb      : 1   ; /* [21]  */
        unsigned int    clk_gmac6_tx_dsb      : 1   ; /* [22]  */
        unsigned int    clk_gmac7_tx_dsb      : 1   ; /* [23]  */
        unsigned int    clk_gmac0_rx_dsb      : 1   ; /* [24]  */
        unsigned int    clk_gmac1_rx_dsb      : 1   ; /* [25]  */
        unsigned int    clk_gmac2_rx_dsb      : 1   ; /* [26]  */
        unsigned int    clk_gmac3_rx_dsb      : 1   ; /* [27]  */
        unsigned int    clk_gmac4_rx_dsb      : 1   ; /* [28]  */
        unsigned int    clk_gmac5_rx_dsb      : 1   ; /* [29]  */
        unsigned int    clk_gmac6_rx_dsb      : 1   ; /* [30]  */
        unsigned int    clk_gmac7_rx_dsb      : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_CLK_DIS_U;

/* Define the union U_SC_PPE_CLK_EN_U */
/* PPEʱ??ʹ?ܼĴ??? */
/* 0x320 */
typedef union tagScPpeClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_ppe0_enb          : 1   ; /* [0]  */
        unsigned int    clk_ppe1_enb          : 1   ; /* [1]  */
        unsigned int    clk_ppe2_enb          : 1   ; /* [2]  */
        unsigned int    clk_ppe3_enb          : 1   ; /* [3]  */
        unsigned int    clk_ppe4_enb          : 1   ; /* [4]  */
        unsigned int    clk_ppe5_enb          : 1   ; /* [5]  */
        unsigned int    clk_rcb_ppe6_enb      : 1   ; /* [6]  */
        unsigned int    clk_rcb_ppe7_enb      : 1   ; /* [7]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PPE_CLK_EN_U;

/* Define the union U_SC_PPE_CLK_DIS_U */
/* PPEʱ?ӽ?ֹ?Ĵ??? */
/* 0x324 */
typedef union tagScPpeClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_ppe0_dsb          : 1   ; /* [0]  */
        unsigned int    clk_ppe1_dsb          : 1   ; /* [1]  */
        unsigned int    clk_ppe2_dsb          : 1   ; /* [2]  */
        unsigned int    clk_ppe3_dsb          : 1   ; /* [3]  */
        unsigned int    clk_ppe4_dsb          : 1   ; /* [4]  */
        unsigned int    clk_ppe5_dsb          : 1   ; /* [5]  */
        unsigned int    clk_rcb_ppe6_dsb      : 1   ; /* [6]  */
        unsigned int    clk_rcb_ppe7_dsb      : 1   ; /* [7]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PPE_CLK_DIS_U;

/* Define the union U_SC_ROCEE_CLK_EN_U */
/* ROCEEʱ??ʹ?ܼĴ??? */
/* 0x328 */
typedef union tagScRoceeClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_rocee0_enb        : 1   ; /* [0]  */
        unsigned int    clk_rocee1_enb        : 1   ; /* [1]  */
        unsigned int    clk_rocee2_enb        : 1   ; /* [2]  */
        unsigned int    clk_rocee3_enb        : 1   ; /* [3]  */
        unsigned int    clk_rocee4_enb        : 1   ; /* [4]  */
        unsigned int    clk_rocee5_enb        : 1   ; /* [5]  */
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ROCEE_CLK_EN_U;

/* Define the union U_SC_ROCEE_CLK_DIS_U */
/* ROCEEʱ?ӽ?ֹ?Ĵ??? */
/* 0x32C */
typedef union tagScRoceeClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_rocee0_dsb        : 1   ; /* [0]  */
        unsigned int    clk_rocee1_dsb        : 1   ; /* [1]  */
        unsigned int    clk_rocee2_dsb        : 1   ; /* [2]  */
        unsigned int    clk_rocee3_dsb        : 1   ; /* [3]  */
        unsigned int    clk_rocee4_dsb        : 1   ; /* [4]  */
        unsigned int    clk_rocee5_dsb        : 1   ; /* [5]  */
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ROCEE_CLK_DIS_U;

/* Define the union U_SC_CPU_CLK_EN_U */
/* CPUʱ??ʹ?ܼĴ??? */
/* 0x330 */
typedef union tagScCpuClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_cpu_enb           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_CPU_CLK_EN_U;

/* Define the union U_SC_CPU_CLK_DIS_U */
/* CPUʱ?ӽ?ֹ?Ĵ??? */
/* 0x334 */
typedef union tagScCpuClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_cpu_dsb           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_CPU_CLK_DIS_U;

/* Define the union U_SC_SAS_CLK_EN_U */
/* SASʱ???ſ??ź? */
/* 0x338 */
typedef union tagScSasClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_sas_enb           : 1   ; /* [0]  */
        unsigned int    clk_sas_mem_enb       : 1   ; /* [1]  */
        unsigned int    clk_sas_ahb_enb       : 1   ; /* [2]  */
        unsigned int    clk_sas_oob_enb       : 1   ; /* [3]  */
        unsigned int    clk_sas_ch0_rx_enb    : 1   ; /* [4]  */
        unsigned int    clk_sas_ch1_rx_enb    : 1   ; /* [5]  */
        unsigned int    clk_sas_ch2_rx_enb    : 1   ; /* [6]  */
        unsigned int    clk_sas_ch3_rx_enb    : 1   ; /* [7]  */
        unsigned int    clk_sas_ch4_rx_enb    : 1   ; /* [8]  */
        unsigned int    clk_sas_ch5_rx_enb    : 1   ; /* [9]  */
        unsigned int    clk_sas_ch6_rx_enb    : 1   ; /* [10]  */
        unsigned int    clk_sas_ch7_rx_enb    : 1   ; /* [11]  */
        unsigned int    clk_sas_ch0_tx_enb    : 1   ; /* [12]  */
        unsigned int    clk_sas_ch1_tx_enb    : 1   ; /* [13]  */
        unsigned int    clk_sas_ch2_tx_enb    : 1   ; /* [14]  */
        unsigned int    clk_sas_ch3_tx_enb    : 1   ; /* [15]  */
        unsigned int    clk_sas_ch4_tx_enb    : 1   ; /* [16]  */
        unsigned int    clk_sas_ch5_tx_enb    : 1   ; /* [17]  */
        unsigned int    clk_sas_ch6_tx_enb    : 1   ; /* [18]  */
        unsigned int    clk_sas_ch7_tx_enb    : 1   ; /* [19]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SAS_CLK_EN_U;

/* Define the union U_SC_SAS_CLK_DIS_U */
/* SASʱ???ſ??ź? */
/* 0x33C */
typedef union tagScSasClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_sas_dsb           : 1   ; /* [0]  */
        unsigned int    clk_sas_mem_dsb       : 1   ; /* [1]  */
        unsigned int    clk_sas_ahb_dsb       : 1   ; /* [2]  */
        unsigned int    clk_sas_oob_dsb       : 1   ; /* [3]  */
        unsigned int    clk_sas_ch0_rx_dsb    : 1   ; /* [4]  */
        unsigned int    clk_sas_ch1_rx_dsb    : 1   ; /* [5]  */
        unsigned int    clk_sas_ch2_rx_dsb    : 1   ; /* [6]  */
        unsigned int    clk_sas_ch3_rx_dsb    : 1   ; /* [7]  */
        unsigned int    clk_sas_ch4_rx_dsb    : 1   ; /* [8]  */
        unsigned int    clk_sas_ch5_rx_dsb    : 1   ; /* [9]  */
        unsigned int    clk_sas_ch6_rx_dsb    : 1   ; /* [10]  */
        unsigned int    clk_sas_ch7_rx_dsb    : 1   ; /* [11]  */
        unsigned int    clk_sas_ch0_tx_dsb    : 1   ; /* [12]  */
        unsigned int    clk_sas_ch1_tx_dsb    : 1   ; /* [13]  */
        unsigned int    clk_sas_ch2_tx_dsb    : 1   ; /* [14]  */
        unsigned int    clk_sas_ch3_tx_dsb    : 1   ; /* [15]  */
        unsigned int    clk_sas_ch4_tx_dsb    : 1   ; /* [16]  */
        unsigned int    clk_sas_ch5_tx_dsb    : 1   ; /* [17]  */
        unsigned int    clk_sas_ch6_tx_dsb    : 1   ; /* [18]  */
        unsigned int    clk_sas_ch7_tx_dsb    : 1   ; /* [19]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SAS_CLK_DIS_U;

/* Define the union U_SC_ITS_CLK_EN_U */
/* itsʱ??ʹ?ܼĴ??? */
/* 0x340 */
typedef union tagScItsClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_its_enb           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ITS_CLK_EN_U;

/* Define the union U_SC_ITS_CLK_DIS_U */
/* itsʱ?ӽ?ֹ?Ĵ??? */
/* 0x344 */
typedef union tagScItsClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_its_dsb           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ITS_CLK_DIS_U;

/* Define the union U_SC_SRAM_CLK_EN_U */
/* SRAMʱ??ʹ?ܼĴ??? */
/* 0x348 */
typedef union tagScSramClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_sram_enb          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_CLK_EN_U;

/* Define the union U_SC_SRAM_CLK_DIS_U */
/* SRAMʱ?ӽ?ֹ?Ĵ??? */
/* 0x34C */
typedef union tagScSramClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_sram_dsb          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_CLK_DIS_U;

/* Define the union U_SC_RCB_PPE_COM_CLK_EN_U */
/* RCB PPE????ʱ??ʹ?ܼĴ??? */
/* 0x350 */
typedef union tagScRcbPpeComClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_rcb_ppe_com_enb   : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RCB_PPE_COM_CLK_EN_U;

/* Define the union U_SC_RCB_PPE_COM_CLK_DIS_U */
/* RCB PPE????ʱ?ӽ?ֹ?Ĵ??? */
/* 0x354 */
typedef union tagScRcbPpeComClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_rcb_ppe_com_dsb   : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RCB_PPE_COM_CLK_DIS_U;

/* Define the union U_SC_TIMER_CLK_EN_U */
/* TIMERʱ??ʹ?ܼĴ??? */
/* 0x358 */
typedef union tagScTimerClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_timer_enb         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TIMER_CLK_EN_U;

/* Define the union U_SC_TIMER_CLK_DIS_U */
/* TIMERʱ?ӽ?ֹ?Ĵ??? */
/* 0x35C */
typedef union tagScTimerClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_timer_dsb         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TIMER_CLK_DIS_U;

/* Define the union U_SC_SLLC_CLK_EN_U */
/* SLLC1ʱ??ʹ?ܼĴ??? */
/* 0x360 */
typedef union tagScSllcClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_sllc_enb          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC_CLK_EN_U;

/* Define the union U_SC_SLLC_CLK_DIS_U */
/* SLLC1ʱ?ӽ?ֹ?Ĵ??? */
/* 0x364 */
typedef union tagScSllcClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_sllc_dsb          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC_CLK_DIS_U;

/* Define the union U_SC_XBAR_RESET_REQ_U */
/* XBAR?���λ???????ƼĴ??? */
/* 0xA00 */
typedef union tagScXbarResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    xbar_srst_req         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XBAR_RESET_REQ_U;

/* Define the union U_SC_XBAR_RESET_DREQ_U */
/* XBAR?���λȥ???????ƼĴ??? */
/* 0xA04 */
typedef union tagScXbarResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    xbar_srst_dreq        : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XBAR_RESET_DREQ_U;

/* Define the union U_SC_NT_RESET_REQ_U */
/* NT?���λ???????ƼĴ??? */
/* 0xA08 */
typedef union tagScNtResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    nt_srst_req           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_NT_RESET_REQ_U;

/* Define the union U_SC_NT_RESET_DREQ_U */
/* NT?���λȥ???????ƼĴ??? */
/* 0xA0C */
typedef union tagScNtResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    nt_srst_dreq          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_NT_RESET_DREQ_U;

/* Define the union U_SC_XGE_RESET_REQ_U */
/* XGE?���λ???????ƼĴ??? */
/* 0xA10 */
typedef union tagScXgeResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    xge_cfg_srst_req      : 1   ; /* [0]  */
        unsigned int    xge0_cfg_mac_srst_req : 1   ; /* [1]  */
        unsigned int    xge1_cfg_mac_srst_req : 1   ; /* [2]  */
        unsigned int    xge2_cfg_mac_srst_req : 1   ; /* [3]  */
        unsigned int    xge3_cfg_mac_srst_req : 1   ; /* [4]  */
        unsigned int    xge4_cfg_mac_srst_req : 1   ; /* [5]  */
        unsigned int    xge5_cfg_mac_srst_req : 1   ; /* [6]  */
        unsigned int    xge0_core_tx_srst_req : 1   ; /* [7]  */
        unsigned int    xge1_core_tx_srst_req : 1   ; /* [8]  */
        unsigned int    xge2_core_tx_srst_req : 1   ; /* [9]  */
        unsigned int    xge3_core_tx_srst_req : 1   ; /* [10]  */
        unsigned int    xge4_core_tx_srst_req : 1   ; /* [11]  */
        unsigned int    xge5_core_tx_srst_req : 1   ; /* [12]  */
        unsigned int    xge0_core_rx_srst_req : 1   ; /* [13]  */
        unsigned int    xge1_core_rx_srst_req : 1   ; /* [14]  */
        unsigned int    xge2_core_rx_srst_req : 1   ; /* [15]  */
        unsigned int    xge3_core_rx_srst_req : 1   ; /* [16]  */
        unsigned int    xge4_core_rx_srst_req : 1   ; /* [17]  */
        unsigned int    xge5_core_rx_srst_req : 1   ; /* [18]  */
        unsigned int    xge0_fec_tx_srst_req  : 1   ; /* [19]  */
        unsigned int    xge1_fec_tx_srst_req  : 1   ; /* [20]  */
        unsigned int    xge2_fec_tx_srst_req  : 1   ; /* [21]  */
        unsigned int    xge3_fec_tx_srst_req  : 1   ; /* [22]  */
        unsigned int    xge4_fec_tx_srst_req  : 1   ; /* [23]  */
        unsigned int    xge5_fec_tx_srst_req  : 1   ; /* [24]  */
        unsigned int    xge0_fec_rx_srst_req  : 1   ; /* [25]  */
        unsigned int    xge1_fec_rx_srst_req  : 1   ; /* [26]  */
        unsigned int    xge2_fec_rx_srst_req  : 1   ; /* [27]  */
        unsigned int    xge3_fec_rx_srst_req  : 1   ; /* [28]  */
        unsigned int    xge4_fec_rx_srst_req  : 1   ; /* [29]  */
        unsigned int    xge5_fec_rx_srst_req  : 1   ; /* [30]  */
        unsigned int    reserved_0            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XGE_RESET_REQ_U;

/* Define the union U_SC_XGE_RESET_DREQ_U */
/* XGE?���λȥ???????ƼĴ??? */
/* 0xA14 */
typedef union tagScXgeResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    xge_cfg_srst_dreq     : 1   ; /* [0]  */
        unsigned int    xge0_cfg_mac_srst_dreq : 1   ; /* [1]  */
        unsigned int    xge1_cfg_mac_srst_dreq : 1   ; /* [2]  */
        unsigned int    xge2_cfg_mac_srst_dreq : 1   ; /* [3]  */
        unsigned int    xge3_cfg_mac_srst_dreq : 1   ; /* [4]  */
        unsigned int    xge4_cfg_mac_srst_dreq : 1   ; /* [5]  */
        unsigned int    xge5_cfg_mac_srst_dreq : 1   ; /* [6]  */
        unsigned int    xge0_core_tx_srst_dreq : 1   ; /* [7]  */
        unsigned int    xge1_core_tx_srst_dreq : 1   ; /* [8]  */
        unsigned int    xge2_core_tx_srst_dreq : 1   ; /* [9]  */
        unsigned int    xge3_core_tx_srst_dreq : 1   ; /* [10]  */
        unsigned int    xge4_core_tx_srst_dreq : 1   ; /* [11]  */
        unsigned int    xge5_core_tx_srst_dreq : 1   ; /* [12]  */
        unsigned int    xge0_core_rx_srst_dreq : 1   ; /* [13]  */
        unsigned int    xge1_core_rx_srst_dreq : 1   ; /* [14]  */
        unsigned int    xge2_core_rx_srst_dreq : 1   ; /* [15]  */
        unsigned int    xge3_core_rx_srst_dreq : 1   ; /* [16]  */
        unsigned int    xge4_core_rx_srst_dreq : 1   ; /* [17]  */
        unsigned int    xge5_core_rx_srst_dreq : 1   ; /* [18]  */
        unsigned int    xge0_fec_tx_srst_dreq : 1   ; /* [19]  */
        unsigned int    xge1_fec_tx_srst_dreq : 1   ; /* [20]  */
        unsigned int    xge2_fec_tx_srst_dreq : 1   ; /* [21]  */
        unsigned int    xge3_fec_tx_srst_dreq : 1   ; /* [22]  */
        unsigned int    xge4_fec_tx_srst_dreq : 1   ; /* [23]  */
        unsigned int    xge5_fec_tx_srst_dreq : 1   ; /* [24]  */
        unsigned int    xge0_fec_rx_srst_dreq : 1   ; /* [25]  */
        unsigned int    xge1_fec_rx_srst_dreq : 1   ; /* [26]  */
        unsigned int    xge2_fec_rx_srst_dreq : 1   ; /* [27]  */
        unsigned int    xge3_fec_rx_srst_dreq : 1   ; /* [28]  */
        unsigned int    xge4_fec_rx_srst_dreq : 1   ; /* [29]  */
        unsigned int    xge5_fec_rx_srst_dreq : 1   ; /* [30]  */
        unsigned int    reserved_0            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XGE_RESET_DREQ_U;

/* Define the union U_SC_GE_RESET_REQ0_U */
/* GE?���λ???????ƼĴ???0 */
/* 0xA18 */
typedef union tagScGeResetReq0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gmac0_sys_srst_req    : 1   ; /* [0]  */
        unsigned int    gmac1_sys_srst_req    : 1   ; /* [1]  */
        unsigned int    gmac2_sys_srst_req    : 1   ; /* [2]  */
        unsigned int    gmac3_sys_srst_req    : 1   ; /* [3]  */
        unsigned int    gmac4_sys_srst_req    : 1   ; /* [4]  */
        unsigned int    gmac5_sys_srst_req    : 1   ; /* [5]  */
        unsigned int    gmac0_tx_srst_req     : 1   ; /* [6]  */
        unsigned int    gmac1_tx_srst_req     : 1   ; /* [7]  */
        unsigned int    gmac2_tx_srst_req     : 1   ; /* [8]  */
        unsigned int    gmac3_tx_srst_req     : 1   ; /* [9]  */
        unsigned int    gmac4_tx_srst_req     : 1   ; /* [10]  */
        unsigned int    gmac5_tx_srst_req     : 1   ; /* [11]  */
        unsigned int    gmac0_rx_srst_req     : 1   ; /* [12]  */
        unsigned int    gmac1_rx_srst_req     : 1   ; /* [13]  */
        unsigned int    gmac2_rx_srst_req     : 1   ; /* [14]  */
        unsigned int    gmac3_rx_srst_req     : 1   ; /* [15]  */
        unsigned int    gmac4_rx_srst_req     : 1   ; /* [16]  */
        unsigned int    gmac5_rx_srst_req     : 1   ; /* [17]  */
        unsigned int    gmac0_cfg_srst_req    : 1   ; /* [18]  */
        unsigned int    gmac1_cfg_srst_req    : 1   ; /* [19]  */
        unsigned int    gmac2_cfg_srst_req    : 1   ; /* [20]  */
        unsigned int    gmac3_cfg_srst_req    : 1   ; /* [21]  */
        unsigned int    gmac4_cfg_srst_req    : 1   ; /* [22]  */
        unsigned int    gmac5_cfg_srst_req    : 1   ; /* [23]  */
        unsigned int    gmac0_eth_srst_req    : 1   ; /* [24]  */
        unsigned int    gmac1_eth_srst_req    : 1   ; /* [25]  */
        unsigned int    gmac2_eth_srst_req    : 1   ; /* [26]  */
        unsigned int    gmac3_eth_srst_req    : 1   ; /* [27]  */
        unsigned int    gmac4_eth_srst_req    : 1   ; /* [28]  */
        unsigned int    gmac5_eth_srst_req    : 1   ; /* [29]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_RESET_REQ0_U;

/* Define the union U_SC_GE_RESET_DREQ0_U */
/* GE?���λȥ???????ƼĴ???0 */
/* 0xA1C */
typedef union tagScGeResetDreq0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gmac0_sys_srst_dreq   : 1   ; /* [0]  */
        unsigned int    gmac1_sys_srst_dreq   : 1   ; /* [1]  */
        unsigned int    gmac2_sys_srst_dreq   : 1   ; /* [2]  */
        unsigned int    gmac3_sys_srst_dreq   : 1   ; /* [3]  */
        unsigned int    gmac4_sys_srst_dreq   : 1   ; /* [4]  */
        unsigned int    gmac5_sys_srst_dreq   : 1   ; /* [5]  */
        unsigned int    gmac0_tx_srst_dreq    : 1   ; /* [6]  */
        unsigned int    gmac1_tx_srst_dreq    : 1   ; /* [7]  */
        unsigned int    gmac2_tx_srst_dreq    : 1   ; /* [8]  */
        unsigned int    gmac3_tx_srst_dreq    : 1   ; /* [9]  */
        unsigned int    gmac4_tx_srst_dreq    : 1   ; /* [10]  */
        unsigned int    gmac5_tx_srst_dreq    : 1   ; /* [11]  */
        unsigned int    gmac0_rx_srst_dreq    : 1   ; /* [12]  */
        unsigned int    gmac1_rx_srst_dreq    : 1   ; /* [13]  */
        unsigned int    gmac2_rx_srst_dreq    : 1   ; /* [14]  */
        unsigned int    gmac3_rx_srst_dreq    : 1   ; /* [15]  */
        unsigned int    gmac4_rx_srst_dreq    : 1   ; /* [16]  */
        unsigned int    gmac5_rx_srst_dreq    : 1   ; /* [17]  */
        unsigned int    gmac0_cfg_srst_dreq   : 1   ; /* [18]  */
        unsigned int    gmac1_cfg_srst_dreq   : 1   ; /* [19]  */
        unsigned int    gmac2_cfg_srst_dreq   : 1   ; /* [20]  */
        unsigned int    gmac3_cfg_srst_dreq   : 1   ; /* [21]  */
        unsigned int    gmac4_cfg_srst_dreq   : 1   ; /* [22]  */
        unsigned int    gmac5_cfg_srst_dreq   : 1   ; /* [23]  */
        unsigned int    gmac0_eth_srst_dreq   : 1   ; /* [24]  */
        unsigned int    gmac1_eth_srst_dreq   : 1   ; /* [25]  */
        unsigned int    gmac2_eth_srst_dreq   : 1   ; /* [26]  */
        unsigned int    gmac3_eth_srst_dreq   : 1   ; /* [27]  */
        unsigned int    gmac4_eth_srst_dreq   : 1   ; /* [28]  */
        unsigned int    gmac5_eth_srst_dreq   : 1   ; /* [29]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_RESET_DREQ0_U;

/* Define the union U_SC_GE_RESET_REQ1_U */
/* GE?���λ???????ƼĴ???1 */
/* 0xA20 */
typedef union tagScGeResetReq1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gmac0_fifo_srst_req   : 1   ; /* [0]  */
        unsigned int    gmac1_fifo_srst_req   : 1   ; /* [1]  */
        unsigned int    gmac2_fifo_srst_req   : 1   ; /* [2]  */
        unsigned int    gmac3_fifo_srst_req   : 1   ; /* [3]  */
        unsigned int    gmac4_fifo_srst_req   : 1   ; /* [4]  */
        unsigned int    gmac5_fifo_srst_req   : 1   ; /* [5]  */
        unsigned int    gmac6_sys_srst_req    : 1   ; /* [6]  */
        unsigned int    gmac7_sys_srst_req    : 1   ; /* [7]  */
        unsigned int    gmac6_tx_srst_req     : 1   ; /* [8]  */
        unsigned int    gmac7_tx_srst_req     : 1   ; /* [9]  */
        unsigned int    gmac6_rx_srst_req     : 1   ; /* [10]  */
        unsigned int    gmac7_rx_srst_req     : 1   ; /* [11]  */
        unsigned int    gmac6_cfg_srst_req    : 1   ; /* [12]  */
        unsigned int    gmac7_cfg_srst_req    : 1   ; /* [13]  */
        unsigned int    gmac6_eth_srst_req    : 1   ; /* [14]  */
        unsigned int    gmac7_eth_srst_req    : 1   ; /* [15]  */
        unsigned int    gmac6_fifo_srst_req   : 1   ; /* [16]  */
        unsigned int    gmac7_fifo_srst_req   : 1   ; /* [17]  */
        unsigned int    reserved_0            : 14  ; /* [31..18]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_RESET_REQ1_U;

/* Define the union U_SC_GE_RESET_DREQ1_U */
/* GE?���λȥ???????ƼĴ???1 */
/* 0xA24 */
typedef union tagScGeResetDreq1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gmac0_fifo_srst_dreq  : 1   ; /* [0]  */
        unsigned int    gmac1_fifo_srst_dreq  : 1   ; /* [1]  */
        unsigned int    gmac2_fifo_srst_dreq  : 1   ; /* [2]  */
        unsigned int    gmac3_fifo_srst_dreq  : 1   ; /* [3]  */
        unsigned int    gmac4_fifo_srst_dreq  : 1   ; /* [4]  */
        unsigned int    gmac5_fifo_srst_dreq  : 1   ; /* [5]  */
        unsigned int    gmac6_sys_srst_dreq   : 1   ; /* [6]  */
        unsigned int    gmac7_sys_srst_dreq   : 1   ; /* [7]  */
        unsigned int    gmac6_tx_srst_dreq    : 1   ; /* [8]  */
        unsigned int    gmac7_tx_srst_dreq    : 1   ; /* [9]  */
        unsigned int    gmac6_rx_srst_dreq    : 1   ; /* [10]  */
        unsigned int    gmac7_rx_srst_dreq    : 1   ; /* [11]  */
        unsigned int    gmac6_cfg_srst_dreq   : 1   ; /* [12]  */
        unsigned int    gmac7_cfg_srst_dreq   : 1   ; /* [13]  */
        unsigned int    gmac6_eth_srst_dreq   : 1   ; /* [14]  */
        unsigned int    gmac7_eth_srst_dreq   : 1   ; /* [15]  */
        unsigned int    gmac6_fifo_srst_dreq  : 1   ; /* [16]  */
        unsigned int    gmac7_fifo_srst_dreq  : 1   ; /* [17]  */
        unsigned int    reserved_0            : 14  ; /* [31..18]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_RESET_DREQ1_U;

/* Define the union U_SC_PPE_RESET_REQ_U */
/* PPE?���λ???????ƼĴ??? */
/* 0xA48 */
typedef union tagScPpeResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ppe0_srst_req         : 1   ; /* [0]  */
        unsigned int    ppe1_srst_req         : 1   ; /* [1]  */
        unsigned int    ppe2_srst_req         : 1   ; /* [2]  */
        unsigned int    ppe3_srst_req         : 1   ; /* [3]  */
        unsigned int    ppe4_srst_req         : 1   ; /* [4]  */
        unsigned int    ppe5_srst_req         : 1   ; /* [5]  */
        unsigned int    ppe6_srst_req         : 1   ; /* [6]  */
        unsigned int    ppe7_srst_req         : 1   ; /* [7]  */
        unsigned int    rcb1_srst_req         : 1   ; /* [8]  */
        unsigned int    rcb2_srst_req         : 1   ; /* [9]  */
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PPE_RESET_REQ_U;

/* Define the union U_SC_PPE_RESET_DREQ_U */
/* PPE?���λȥ???????ƼĴ??? */
/* 0xA4C */
typedef union tagScPpeResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ppe0_srst_dreq        : 1   ; /* [0]  */
        unsigned int    ppe1_srst_dreq        : 1   ; /* [1]  */
        unsigned int    ppe2_srst_dreq        : 1   ; /* [2]  */
        unsigned int    ppe3_srst_dreq        : 1   ; /* [3]  */
        unsigned int    ppe4_srst_dreq        : 1   ; /* [4]  */
        unsigned int    ppe5_srst_dreq        : 1   ; /* [5]  */
        unsigned int    ppe6_srst_dreq        : 1   ; /* [6]  */
        unsigned int    ppe7_srst_dreq        : 1   ; /* [7]  */
        unsigned int    rcb1_srst_dreq        : 1   ; /* [8]  */
        unsigned int    rcb2_srst_dreq        : 1   ; /* [9]  */
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PPE_RESET_DREQ_U;

/* Define the union U_SC_ROCEE_RESET_REQ_U */
/* ROCEE?���λ???????ƼĴ??? */
/* 0xA50 */
typedef union tagScRoceeResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rocee_srst_req        : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ROCEE_RESET_REQ_U;

/* Define the union U_SC_ROCEE_RESET_DREQ_U */
/* ROCEE?���λȥ???????ƼĴ??? */
/* 0xA54 */
typedef union tagScRoceeResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rocee_srst_dreq       : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ROCEE_RESET_DREQ_U;

/* Define the union U_SC_CPU_RESET_REQ_U */
/* CPU?���λ???????ƼĴ??? */
/* 0xA58 */
typedef union tagScCpuResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cpu_srst_req          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_CPU_RESET_REQ_U;

/* Define the union U_SC_CPU_RESET_DREQ_U */
/* CPU?���λȥ???????ƼĴ??? */
/* 0xA5C */
typedef union tagScCpuResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cpu_srst_dreq         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_CPU_RESET_DREQ_U;

/* Define the union U_SC_SAS_RESET_REQ_U */
/* SAS?���λ???? */
/* 0xA60 */
typedef union tagScSasResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sas_srst_req          : 1   ; /* [0]  */
        unsigned int    sas_oob_srst_req      : 1   ; /* [1]  */
        unsigned int    sas_ahb_srst_req      : 1   ; /* [2]  */
        unsigned int    sas_ch0_rx_srst_req   : 1   ; /* [3]  */
        unsigned int    sas_ch1_rx_srst_req   : 1   ; /* [4]  */
        unsigned int    sas_ch2_rx_srst_req   : 1   ; /* [5]  */
        unsigned int    sas_ch3_rx_srst_req   : 1   ; /* [6]  */
        unsigned int    sas_ch4_rx_srst_req   : 1   ; /* [7]  */
        unsigned int    sas_ch5_rx_srst_req   : 1   ; /* [8]  */
        unsigned int    sas_ch6_rx_srst_req   : 1   ; /* [9]  */
        unsigned int    sas_ch7_rx_srst_req   : 1   ; /* [10]  */
        unsigned int    sas_ch0_tx_srst_req   : 1   ; /* [11]  */
        unsigned int    sas_ch1_tx_srst_req   : 1   ; /* [12]  */
        unsigned int    sas_ch2_tx_srst_req   : 1   ; /* [13]  */
        unsigned int    sas_ch3_tx_srst_req   : 1   ; /* [14]  */
        unsigned int    sas_ch4_tx_srst_req   : 1   ; /* [15]  */
        unsigned int    sas_ch5_tx_srst_req   : 1   ; /* [16]  */
        unsigned int    sas_ch6_tx_srst_req   : 1   ; /* [17]  */
        unsigned int    sas_ch7_tx_srst_req   : 1   ; /* [18]  */
        unsigned int    reserved_0            : 13  ; /* [31..19]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SAS_RESET_REQ_U;

/* Define the union U_SC_SAS_RESET_DREQ_U */
/* SAS?????���λ???? */
/* 0xA64 */
typedef union tagScSasResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sas_srst_dreq         : 1   ; /* [0]  */
        unsigned int    sas_oob_srst_dreq     : 1   ; /* [1]  */
        unsigned int    sas_ahb_srst_dreq     : 1   ; /* [2]  */
        unsigned int    sas_ch0_rx_srst_dreq  : 1   ; /* [3]  */
        unsigned int    sas_ch1_rx_srst_dreq  : 1   ; /* [4]  */
        unsigned int    sas_ch2_rx_srst_dreq  : 1   ; /* [5]  */
        unsigned int    sas_ch3_rx_srst_dreq  : 1   ; /* [6]  */
        unsigned int    sas_ch4_rx_srst_dreq  : 1   ; /* [7]  */
        unsigned int    sas_ch5_rx_srst_dreq  : 1   ; /* [8]  */
        unsigned int    sas_ch6_rx_srst_dreq  : 1   ; /* [9]  */
        unsigned int    sas_ch7_rx_srst_dreq  : 1   ; /* [10]  */
        unsigned int    sas_ch0_tx_srst_dreq  : 1   ; /* [11]  */
        unsigned int    sas_ch1_tx_srst_dreq  : 1   ; /* [12]  */
        unsigned int    sas_ch2_tx_srst_dreq  : 1   ; /* [13]  */
        unsigned int    sas_ch3_tx_srst_dreq  : 1   ; /* [14]  */
        unsigned int    sas_ch4_tx_srst_dreq  : 1   ; /* [15]  */
        unsigned int    sas_ch5_tx_srst_dreq  : 1   ; /* [16]  */
        unsigned int    sas_ch6_tx_srst_dreq  : 1   ; /* [17]  */
        unsigned int    sas_ch7_tx_srst_dreq  : 1   ; /* [18]  */
        unsigned int    reserved_0            : 13  ; /* [31..19]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SAS_RESET_DREQ_U;

/* Define the union U_SC_SLLC_TSVRX_RESET_REQ_U */
/* SLLC TSVRXͨ???���λ???????ƼĴ??? */
/* 0xA68 */
typedef union tagScSllcTsvrxResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sllc_tsvrx0_srst_req  : 1   ; /* [0]  */
        unsigned int    sllc_tsvrx1_srst_req  : 1   ; /* [1]  */
        unsigned int    sllc_tsvrx2_srst_req  : 1   ; /* [2]  */
        unsigned int    sllc_tsvrx3_srst_req  : 1   ; /* [3]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC_TSVRX_RESET_REQ_U;

/* Define the union U_SC_SLLC_TSVRX_RESET_DREQ_U */
/* SLLC TSVRXͨ???���λ???????ƼĴ??? */
/* 0xA6C */
typedef union tagScSllcTsvrxResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sllc_tsvrx0_srst_dreq : 1   ; /* [0]  */
        unsigned int    sllc_tsvrx1_srst_dreq : 1   ; /* [1]  */
        unsigned int    sllc_tsvrx2_srst_dreq : 1   ; /* [2]  */
        unsigned int    sllc_tsvrx3_srst_dreq : 1   ; /* [3]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC_TSVRX_RESET_DREQ_U;

/* Define the union U_SC_ITS_RESET_REQ_U */
/* ITS?���λ???????ƼĴ??? */
/* 0xA70 */
typedef union tagScItsResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    its_srst_req          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ITS_RESET_REQ_U;

/* Define the union U_SC_ITS_RESET_DREQ_U */
/* ITS?���λȥ???????ƼĴ??? */
/* 0xA74 */
typedef union tagScItsResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    its_srst_dreq         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ITS_RESET_DREQ_U;

/* Define the union U_SC_SRAM_RESET_REQ_U */
/* SRAM?���λ???????ƼĴ??? */
/* 0xA80 */
typedef union tagScSramResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sram_srst_req         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_RESET_REQ_U;

/* Define the union U_SC_SRAM_RESET_DREQ_U */
/* SRAM?���λȥ???????ƼĴ??? */
/* 0xA84 */
typedef union tagScSramResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sram_srst_dreq        : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_RESET_DREQ_U;

/* Define the union U_SC_RCB_PPE_COM_RESET_REQ_U */
/* RCB PPE?????���λ???????ƼĴ??? */
/* 0xA88 */
typedef union tagScRcbPpeComResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rcb_ppe_com_srst_req  : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RCB_PPE_COM_RESET_REQ_U;

/* Define the union U_SC_RCB_PPE_COM_RESET_DREQ_U */
/* RCB PPE?????���λȥ???????ƼĴ??? */
/* 0xA8C */
typedef union tagScRcbPpeComResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rcb_ppe_com_srst_dreq : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RCB_PPE_COM_RESET_DREQ_U;

/* Define the union U_SC_TIMER_RESET_REQ_U */
/* TIMER?���λ???????ƼĴ??? */
/* 0xA98 */
typedef union tagScTimerResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    timer_srst_req        : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TIMER_RESET_REQ_U;

/* Define the union U_SC_TIMER_RESET_DREQ_U */
/* TIMER?���λȥ???????ƼĴ??? */
/* 0xA9C */
typedef union tagScTimerResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    timer_srst_dreq       : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TIMER_RESET_DREQ_U;

/* Define the union U_SC_SLLC_RESET_REQ_U */
/* SLLC1?���λ???????ƼĴ??? */
/* 0xAA0 */
typedef union tagScSllcResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sllc_srst_req         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC_RESET_REQ_U;

/* Define the union U_SC_SLLC_RESET_DREQ_U */
/* SLLC1?���λȥ???????ƼĴ??? */
/* 0xAA4 */
typedef union tagScSllcResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sllc_srst_dreq        : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC_RESET_DREQ_U;

/* Define the union U_SC_DISPATCH_DAW_EN_U */
/* dispatch daw en???? */
/* 0x1000 */
typedef union tagScDispatchDawEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dispatch_daw_en       : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_DAW_EN_U;

/* Define the union U_SC_DISPATCH_DAW_ARRAY0_U */
/* dispatch daw????????0 */
/* 0x1004 */
typedef union tagScDispatchDawArray0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    daw_array0_did        : 3   ; /* [2..0]  */
        unsigned int    daw_array0_size       : 5   ; /* [7..3]  */
        unsigned int    daw_array0_sync       : 1   ; /* [8]  */
        unsigned int    reserved_0            : 4   ; /* [12..9]  */
        unsigned int    daw_array0_addr       : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_DAW_ARRAY0_U;

/* Define the union U_SC_DISPATCH_DAW_ARRAY1_U */
/* dispatch daw????????1 */
/* 0x1008 */
typedef union tagScDispatchDawArray1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    daw_array1_did        : 3   ; /* [2..0]  */
        unsigned int    daw_array1_size       : 5   ; /* [7..3]  */
        unsigned int    daw_array1_sync       : 1   ; /* [8]  */
        unsigned int    reserved_0            : 4   ; /* [12..9]  */
        unsigned int    daw_array1_addr       : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_DAW_ARRAY1_U;

/* Define the union U_SC_DISPATCH_DAW_ARRAY2_U */
/* dispatch daw????????2 */
/* 0x100C */
typedef union tagScDispatchDawArray2
{
    /* Define the struct bits */
    struct
    {
        unsigned int    daw_array2_did        : 3   ; /* [2..0]  */
        unsigned int    daw_array2_size       : 5   ; /* [7..3]  */
        unsigned int    daw_array2_sync       : 1   ; /* [8]  */
        unsigned int    reserved_0            : 4   ; /* [12..9]  */
        unsigned int    daw_array2_addr       : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_DAW_ARRAY2_U;

/* Define the union U_SC_DISPATCH_DAW_ARRAY3_U */
/* dispatch daw????????3 */
/* 0x1010 */
typedef union tagScDispatchDawArray3
{
    /* Define the struct bits */
    struct
    {
        unsigned int    daw_array3_did        : 3   ; /* [2..0]  */
        unsigned int    daw_array3_size       : 5   ; /* [7..3]  */
        unsigned int    daw_array3_sync       : 1   ; /* [8]  */
        unsigned int    reserved_0            : 4   ; /* [12..9]  */
        unsigned int    daw_array3_addr       : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_DAW_ARRAY3_U;

/* Define the union U_SC_DISPATCH_DAW_ARRAY4_U */
/* dispatch daw????????4 */
/* 0x1014 */
typedef union tagScDispatchDawArray4
{
    /* Define the struct bits */
    struct
    {
        unsigned int    daw_array4_did        : 3   ; /* [2..0]  */
        unsigned int    daw_array4_size       : 5   ; /* [7..3]  */
        unsigned int    daw_array4_sync       : 1   ; /* [8]  */
        unsigned int    reserved_0            : 4   ; /* [12..9]  */
        unsigned int    daw_array4_addr       : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_DAW_ARRAY4_U;

/* Define the union U_SC_DISPATCH_DAW_ARRAY5_U */
/* dispatch daw????????5 */
/* 0x1018 */
typedef union tagScDispatchDawArray5
{
    /* Define the struct bits */
    struct
    {
        unsigned int    daw_array5_did        : 3   ; /* [2..0]  */
        unsigned int    daw_array5_size       : 5   ; /* [7..3]  */
        unsigned int    daw_array5_sync       : 1   ; /* [8]  */
        unsigned int    reserved_0            : 4   ; /* [12..9]  */
        unsigned int    daw_array5_addr       : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_DAW_ARRAY5_U;

/* Define the union U_SC_DISPATCH_DAW_ARRAY6_U */
/* dispatch daw????????6 */
/* 0x101C */
typedef union tagScDispatchDawArray6
{
    /* Define the struct bits */
    struct
    {
        unsigned int    daw_array6_did        : 3   ; /* [2..0]  */
        unsigned int    daw_array6_size       : 5   ; /* [7..3]  */
        unsigned int    daw_array6_sync       : 1   ; /* [8]  */
        unsigned int    reserved_0            : 4   ; /* [12..9]  */
        unsigned int    daw_array6_addr       : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_DAW_ARRAY6_U;

/* Define the union U_SC_DISPATCH_DAW_ARRAY7_U */
/* dispatch daw????????7 */
/* 0x1020 */
typedef union tagScDispatchDawArray7
{
    /* Define the struct bits */
    struct
    {
        unsigned int    daw_array7_did        : 3   ; /* [2..0]  */
        unsigned int    daw_array7_size       : 5   ; /* [7..3]  */
        unsigned int    daw_array7_sync       : 1   ; /* [8]  */
        unsigned int    reserved_0            : 4   ; /* [12..9]  */
        unsigned int    daw_array7_addr       : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_DAW_ARRAY7_U;

/* Define the union U_SC_DISPATCH_RETRY_CONTROL_U */
/* dispatch retry???ƼĴ??? */
/* 0x1030 */
typedef union tagScDispatchRetryControl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    retry_num_limit       : 16  ; /* [15..0]  */
        unsigned int    retry_en              : 1   ; /* [16]  */
        unsigned int    reserved_0            : 15  ; /* [31..17]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_RETRY_CONTROL_U;

/* Define the union U_SC_DISPATCH_INTMASK_U */
/* dispatch???ж??��μĴ??? */
/* 0x1100 */
typedef union tagScDispatchIntmask
{
    /* Define the struct bits */
    struct
    {
        unsigned int    intmask               : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_INTMASK_U;

/* Define the union U_SC_DISPATCH_RAWINT_U */
/* dispatch??ԭʼ?ж?״̬?Ĵ??? */
/* 0x1104 */
typedef union tagScDispatchRawint
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rawint                : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_RAWINT_U;

/* Define the union U_SC_DISPATCH_INTSTAT_U */
/* dispatch???��κ????ж?״̬?Ĵ??? */
/* 0x1108 */
typedef union tagScDispatchIntstat
{
    /* Define the struct bits */
    struct
    {
        unsigned int    intsts                : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_INTSTAT_U;

/* Define the union U_SC_DISPATCH_INTCLR_U */
/* dispatch???ж??????Ĵ??? */
/* 0x110C */
typedef union tagScDispatchIntclr
{
    /* Define the struct bits */
    struct
    {
        unsigned int    intclr                : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_INTCLR_U;

/* Define the union U_SC_DISPATCH_ERRSTAT_U */
/* dispatch??ERR״̬?Ĵ??? */
/* 0x1110 */
typedef union tagScDispatchErrstat
{
    /* Define the struct bits */
    struct
    {
        unsigned int    err_opcode            : 5   ; /* [4..0]  */
        unsigned int    err_addr              : 17  ; /* [21..5]  */
        unsigned int    reserved_0            : 10  ; /* [31..22]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_ERRSTAT_U;

/* Define the union U_SC_REMAP_CTRL_U */
/* subsys??????Remap?Ĵ??? */
/* 0x1200 */
typedef union tagScRemapCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sys_remap_vld         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_REMAP_CTRL_U;

/* Define the union U_SC_SRAM_CTRL0_U */
/* sram???ƼĴ???0 */
/* 0x2030 */
typedef union tagScSramCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sram_ecc_en           : 1   ; /* [0]  */
        unsigned int    sram_ecc_err_trans    : 1   ; /* [1]  */
        unsigned int    sram_err_clr          : 1   ; /* [2]  */
        unsigned int    sram_err_cnt_clr      : 1   ; /* [3]  */
        unsigned int    sram_sglerr_addr_clr  : 1   ; /* [4]  */
        unsigned int    sram_mulerr_addr_clr  : 1   ; /* [5]  */
        unsigned int    sram_swap_en          : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_CTRL0_U;

/* Define the union U_SC_M3_CTRL_U */
/* M3???ƼĴ??? */
/* 0x2040 */
typedef union tagScM3Ctrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    m3_stcalib            : 26  ; /* [25..0]  */
        unsigned int    m3_intnmi             : 1   ; /* [26]  */
        unsigned int    m3_rxev               : 1   ; /* [27]  */
        unsigned int    m3_wicenreq           : 1   ; /* [28]  */
        unsigned int    m3_bigend             : 1   ; /* [29]  */
        unsigned int    m3_dbgen              : 1   ; /* [30]  */
        unsigned int    reserved_0            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_M3_CTRL_U;

/* Define the union U_SC_REMAP_SRAM_ADDR_CTRL_U */
/* M3 remap??sram?ĵ?ַ???? */
/* 0x2050 */
typedef union tagScRemapSramAddrCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    remap_sram_addr       : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_REMAP_SRAM_ADDR_CTRL_U;

/* Define the union U_SC_LIGHT_MODULE_DETECT_EN_U */
/* ??ģ??SD?źż???ʹ?ܼĴ??? */
/* 0x2060 */
typedef union tagScLightModuleDetectEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    light_module_sd_0_en  : 1   ; /* [0]  */
        unsigned int    light_module_sd_1_en  : 1   ; /* [1]  */
        unsigned int    light_module_sd_2_en  : 1   ; /* [2]  */
        unsigned int    light_module_sd_3_en  : 1   ; /* [3]  */
        unsigned int    light_module_sd_4_en  : 1   ; /* [4]  */
        unsigned int    light_module_sd_5_en  : 1   ; /* [5]  */
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_LIGHT_MODULE_DETECT_EN_U;

/* Define the union U_SC_TIMER_CLKEN_CTRL_U */
/* TIMER??clken???ɿ??ƼĴ??? */
/* 0x2070 */
typedef union tagScTimerClkenCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    timeren0sel           : 1   ; /* [0]  */
        unsigned int    timeren0ov            : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TIMER_CLKEN_CTRL_U;

/* Define the union U_SC_VMID_CTRL0_U */
/* M3 VMID???? */
/* 0x20E0 */
typedef union tagScVmidCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    m3_vmid0              : 8   ; /* [7..0]  */
        unsigned int    m3_vmid1              : 8   ; /* [15..8]  */
        unsigned int    m3_vmid2              : 8   ; /* [23..16]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_VMID_CTRL0_U;

/* Define the union U_SC_ROCEE_VMID_U */
/* ROCEE VMID???? */
/* 0x20E4 */
typedef union tagScRoceeVmid
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rocee_vmid            : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ROCEE_VMID_U;

/* Define the union U_SC_ITS_M3_INT_MUX_SEL_U */
/* ???ж??͵?ITS????M3????MUXѡ?? */
/* 0x21F0 */
typedef union tagScItsM3IntMuxSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    int_tbl_old_mux_sel   : 1   ; /* [0]  */
        unsigned int    int_tbl_sa_mux_sel    : 1   ; /* [1]  */
        unsigned int    int_tbl_da_mux_sel    : 1   ; /* [2]  */
        unsigned int    int_m3_ring1_mux_sel  : 1   ; /* [3]  */
        unsigned int    int_m3_ring0_mux_sel  : 1   ; /* [4]  */
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ITS_M3_INT_MUX_SEL_U;

/* Define the union U_SC_FTE_MUX_SEL_U */
/*  */
/* 0x2200 */
typedef union tagScFteMuxSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    mux_sel_fte           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_FTE_MUX_SEL_U;

/* Define the union U_SC_TCAM_MBIST_EN_U */
/* DSAF??TCAM MBIST????ʹ?ܡ? */
/* 0x2300 */
typedef union tagScTcamMbistEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    tcam_mbist_en         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TCAM_MBIST_EN_U;

/* Define the union U_SC_HILINK2_LRSTB_MUX_CTRL_U */
/* HILINK2 lrstb[7:0]??MUXѡ?????? */
/* 0x2340 */
typedef union tagScHilink2LrstbMuxCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink2_lrstb_mux_sel : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_LRSTB_MUX_CTRL_U;

/* Define the union U_SC_HILINK2_MACRO_SS_REFCLK_U */
/* HILINK???üĴ??? */
/* 0x2400 */
typedef union tagScHilink2MacroSsRefclk
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink2_ss_refclk0_x2s : 2   ; /* [1..0]  */
        unsigned int    hilink2_ss_refclk0_x2n : 2   ; /* [3..2]  */
        unsigned int    hilink2_ss_refclk0_x2e : 2   ; /* [5..4]  */
        unsigned int    hilink2_ss_refclk0_x2w : 2   ; /* [7..6]  */
        unsigned int    hilink2_ss_refclk1_x2s : 2   ; /* [9..8]  */
        unsigned int    hilink2_ss_refclk1_x2n : 2   ; /* [11..10]  */
        unsigned int    hilink2_ss_refclk1_x2e : 2   ; /* [13..12]  */
        unsigned int    hilink2_ss_refclk1_x2w : 2   ; /* [15..14]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_SS_REFCLK_U;

/* Define the union U_SC_HILINK2_MACRO_CS_REFCLK_DIRSEL_U */
/* HILINK???üĴ??? */
/* 0x2404 */
typedef union tagScHilink2MacroCsRefclkDirsel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink2_cs_refclk0_dirsel0 : 2   ; /* [1..0]  */
        unsigned int    hilink2_cs_refclk0_dirsel1 : 2   ; /* [3..2]  */
        unsigned int    hilink2_cs_refclk0_dirsel2 : 2   ; /* [5..4]  */
        unsigned int    hilink2_cs_refclk0_dirsel3 : 2   ; /* [7..6]  */
        unsigned int    hilink2_cs_refclk0_dirsel4 : 2   ; /* [9..8]  */
        unsigned int    hilink2_cs_refclk1_dirsel0 : 2   ; /* [11..10]  */
        unsigned int    hilink2_cs_refclk1_dirsel1 : 2   ; /* [13..12]  */
        unsigned int    hilink2_cs_refclk1_dirsel2 : 2   ; /* [15..14]  */
        unsigned int    hilink2_cs_refclk1_dirsel3 : 2   ; /* [17..16]  */
        unsigned int    hilink2_cs_refclk1_dirsel4 : 2   ; /* [19..18]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_CS_REFCLK_DIRSEL_U;

/* Define the union U_SC_HILINK2_MACRO_LIFECLK2DIG_SEL_U */
/* HILINK???üĴ??? */
/* 0x2408 */
typedef union tagScHilink2MacroLifeclk2digSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink2_lifeclk2dig_sel : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_LIFECLK2DIG_SEL_U;

/* Define the union U_SC_HILINK2_MACRO_CORE_CLK_SELEXT_U */
/* HILINK???üĴ??? */
/* 0x240C */
typedef union tagScHilink2MacroCoreClkSelext
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink2_core_clk_selext : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_CORE_CLK_SELEXT_U;

/* Define the union U_SC_HILINK2_MACRO_CORE_CLK_SEL_U */
/* HILINK???üĴ??? */
/* 0x2410 */
typedef union tagScHilink2MacroCoreClkSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink2_core_clk_sel  : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_CORE_CLK_SEL_U;

/* Define the union U_SC_HILINK2_MACRO_CTRL_BUS_MODE_U */
/* HILINK???üĴ??? */
/* 0x2414 */
typedef union tagScHilink2MacroCtrlBusMode
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink2_ctrl_bus_mode : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_CTRL_BUS_MODE_U;

/* Define the union U_SC_HILINK2_MACRO_MACROPWRDB_U */
/* HILINK???üĴ??? */
/* 0x2418 */
typedef union tagScHilink2MacroMacropwrdb
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink2_macropwrdb    : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_MACROPWRDB_U;

/* Define the union U_SC_HILINK2_MACRO_GRSTB_U */
/* HILINK???üĴ??? */
/* 0x241C */
typedef union tagScHilink2MacroGrstb
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink2_grstb         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_GRSTB_U;

/* Define the union U_SC_HILINK2_MACRO_BIT_SLIP_U */
/* HILINK???üĴ??? */
/* 0x2420 */
typedef union tagScHilink2MacroBitSlip
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink2_bit_slip      : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_BIT_SLIP_U;

/* Define the union U_SC_HILINK2_MACRO_LRSTB_U */
/* HILINK???üĴ??? */
/* 0x2424 */
typedef union tagScHilink2MacroLrstb
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink2_lrstb         : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_LRSTB_U;

/* Define the union U_SC_HILINK3_MACRO_SS_REFCLK_U */
/* HILINK???üĴ??? */
/* 0x2500 */
typedef union tagScHilink3MacroSsRefclk
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink3_ss_refclk0_x2s : 2   ; /* [1..0]  */
        unsigned int    hilink3_ss_refclk0_x2n : 2   ; /* [3..2]  */
        unsigned int    hilink3_ss_refclk0_x2e : 2   ; /* [5..4]  */
        unsigned int    hilink3_ss_refclk0_x2w : 2   ; /* [7..6]  */
        unsigned int    hilink3_ss_refclk1_x2s : 2   ; /* [9..8]  */
        unsigned int    hilink3_ss_refclk1_x2n : 2   ; /* [11..10]  */
        unsigned int    hilink3_ss_refclk1_x2e : 2   ; /* [13..12]  */
        unsigned int    hilink3_ss_refclk1_x2w : 2   ; /* [15..14]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_SS_REFCLK_U;

/* Define the union U_SC_HILINK3_MACRO_CS_REFCLK_DIRSEL_U */
/* HILINK???üĴ??? */
/* 0x2504 */
typedef union tagScHilink3MacroCsRefclkDirsel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink3_cs_refclk0_dirsel0 : 2   ; /* [1..0]  */
        unsigned int    hilink3_cs_refclk0_dirsel1 : 2   ; /* [3..2]  */
        unsigned int    hilink3_cs_refclk0_dirsel2 : 2   ; /* [5..4]  */
        unsigned int    hilink3_cs_refclk0_dirsel3 : 2   ; /* [7..6]  */
        unsigned int    hilink3_cs_refclk0_dirsel4 : 2   ; /* [9..8]  */
        unsigned int    hilink3_cs_refclk1_dirsel0 : 2   ; /* [11..10]  */
        unsigned int    hilink3_cs_refclk1_dirsel1 : 2   ; /* [13..12]  */
        unsigned int    hilink3_cs_refclk1_dirsel2 : 2   ; /* [15..14]  */
        unsigned int    hilink3_cs_refclk1_dirsel3 : 2   ; /* [17..16]  */
        unsigned int    hilink3_cs_refclk1_dirsel4 : 2   ; /* [19..18]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_CS_REFCLK_DIRSEL_U;

/* Define the union U_SC_HILINK3_MACRO_LIFECLK2DIG_SEL_U */
/* HILINK???üĴ??? */
/* 0x2508 */
typedef union tagScHilink3MacroLifeclk2digSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink3_lifeclk2dig_sel : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_LIFECLK2DIG_SEL_U;

/* Define the union U_SC_HILINK3_MACRO_CORE_CLK_SELEXT_U */
/* HILINK???üĴ??? */
/* 0x250C */
typedef union tagScHilink3MacroCoreClkSelext
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink3_core_clk_selext : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_CORE_CLK_SELEXT_U;

/* Define the union U_SC_HILINK3_MACRO_CORE_CLK_SEL_U */
/* HILINK???üĴ??? */
/* 0x2510 */
typedef union tagScHilink3MacroCoreClkSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink3_core_clk_sel  : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_CORE_CLK_SEL_U;

/* Define the union U_SC_HILINK3_MACRO_CTRL_BUS_MODE_U */
/* HILINK???üĴ??? */
/* 0x2514 */
typedef union tagScHilink3MacroCtrlBusMode
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink3_ctrl_bus_mode : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_CTRL_BUS_MODE_U;

/* Define the union U_SC_HILINK3_MACRO_MACROPWRDB_U */
/* HILINK???üĴ??? */
/* 0x2518 */
typedef union tagScHilink3MacroMacropwrdb
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink3_macropwrdb    : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_MACROPWRDB_U;

/* Define the union U_SC_HILINK3_MACRO_GRSTB_U */
/* HILINK???üĴ??? */
/* 0x251C */
typedef union tagScHilink3MacroGrstb
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink3_grstb         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_GRSTB_U;

/* Define the union U_SC_HILINK3_MACRO_BIT_SLIP_U */
/* HILINK???üĴ??? */
/* 0x2520 */
typedef union tagScHilink3MacroBitSlip
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink3_bit_slip      : 4   ; /* [3..0]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_BIT_SLIP_U;

/* Define the union U_SC_HILINK3_MACRO_LRSTB_U */
/* HILINK???üĴ??? */
/* 0x2524 */
typedef union tagScHilink3MacroLrstb
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink3_lrstb         : 4   ; /* [3..0]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_LRSTB_U;

/* Define the union U_SC_HILINK4_MACRO_SS_REFCLK_U */
/* HILINK???üĴ??? */
/* 0x2600 */
typedef union tagScHilink4MacroSsRefclk
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink4_ss_refclk0_x2s : 2   ; /* [1..0]  */
        unsigned int    hilink4_ss_refclk0_x2n : 2   ; /* [3..2]  */
        unsigned int    hilink4_ss_refclk0_x2e : 2   ; /* [5..4]  */
        unsigned int    hilink4_ss_refclk0_x2w : 2   ; /* [7..6]  */
        unsigned int    hilink4_ss_refclk1_x2s : 2   ; /* [9..8]  */
        unsigned int    hilink4_ss_refclk1_x2n : 2   ; /* [11..10]  */
        unsigned int    hilink4_ss_refclk1_x2e : 2   ; /* [13..12]  */
        unsigned int    hilink4_ss_refclk1_x2w : 2   ; /* [15..14]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_SS_REFCLK_U;

/* Define the union U_SC_HILINK4_MACRO_CS_REFCLK_DIRSEL_U */
/* HILINK???üĴ??? */
/* 0x2604 */
typedef union tagScHilink4MacroCsRefclkDirsel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink4_cs_refclk0_dirsel0 : 1   ; /* [0]  */
        unsigned int    hilink4_cs_refclk0_dirsel1 : 1   ; /* [1]  */
        unsigned int    hilink4_cs_refclk0_dirsel2 : 1   ; /* [2]  */
        unsigned int    hilink4_cs_refclk0_dirsel3 : 1   ; /* [3]  */
        unsigned int    hilink4_cs_refclk0_dirsel4 : 1   ; /* [4]  */
        unsigned int    hilink4_cs_refclk1_dirsel0 : 1   ; /* [5]  */
        unsigned int    hilink4_cs_refclk1_dirsel1 : 1   ; /* [6]  */
        unsigned int    hilink4_cs_refclk1_dirsel2 : 1   ; /* [7]  */
        unsigned int    hilink4_cs_refclk1_dirsel3 : 1   ; /* [8]  */
        unsigned int    hilink4_cs_refclk1_dirsel4 : 1   ; /* [9]  */
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_CS_REFCLK_DIRSEL_U;

/* Define the union U_SC_HILINK4_MACRO_LIFECLK2DIG_SEL_U */
/* HILINK???üĴ??? */
/* 0x2608 */
typedef union tagScHilink4MacroLifeclk2digSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink4_lifeclk2dig_sel : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_LIFECLK2DIG_SEL_U;

/* Define the union U_SC_HILINK4_MACRO_CORE_CLK_SELEXT_U */
/* HILINK???üĴ??? */
/* 0x260C */
typedef union tagScHilink4MacroCoreClkSelext
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink4_core_clk_selext : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_CORE_CLK_SELEXT_U;

/* Define the union U_SC_HILINK4_MACRO_CORE_CLK_SEL_U */
/* HILINK???üĴ??? */
/* 0x2610 */
typedef union tagScHilink4MacroCoreClkSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink4_core_clk_sel  : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_CORE_CLK_SEL_U;

/* Define the union U_SC_HILINK4_MACRO_CTRL_BUS_MODE_U */
/* HILINK???üĴ??? */
/* 0x2614 */
typedef union tagScHilink4MacroCtrlBusMode
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink4_ctrl_bus_mode : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_CTRL_BUS_MODE_U;

/* Define the union U_SC_HILINK4_MACRO_MACROPWRDB_U */
/* HILINK???üĴ??? */
/* 0x2618 */
typedef union tagScHilink4MacroMacropwrdb
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink4_macropwrdb    : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_MACROPWRDB_U;

/* Define the union U_SC_HILINK4_MACRO_GRSTB_U */
/* HILINK???üĴ??? */
/* 0x261C */
typedef union tagScHilink4MacroGrstb
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink4_grstb         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_GRSTB_U;

/* Define the union U_SC_HILINK4_MACRO_BIT_SLIP_U */
/* HILINK???üĴ??? */
/* 0x2620 */
typedef union tagScHilink4MacroBitSlip
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink4_bit_slip      : 4   ; /* [3..0]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_BIT_SLIP_U;

/* Define the union U_SC_HILINK4_MACRO_LRSTB_U */
/* HILINK???üĴ??? */
/* 0x2624 */
typedef union tagScHilink4MacroLrstb
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink4_lrstb         : 4   ; /* [3..0]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_LRSTB_U;

/* Define the union U_SC_SMMU_MEM_CTRL0_U */
/* smmu mem???ƼĴ???0 */
/* 0x3000 */
typedef union tagScSmmuMemCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rfs_smmu         : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SMMU_MEM_CTRL0_U;

/* Define the union U_SC_SMMU_MEM_CTRL1_U */
/* smmu mem???ƼĴ???1 */
/* 0x3004 */
typedef union tagScSmmuMemCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    tsel_hc_smmu          : 3   ; /* [2..0]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SMMU_MEM_CTRL1_U;

/* Define the union U_SC_SMMU_MEM_CTRL2_U */
/* smmu mem???ƼĴ???2 */
/* 0x3008 */
typedef union tagScSmmuMemCtrl2
{
    /* Define the struct bits */
    struct
    {
        unsigned int    test_hc_smmu          : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SMMU_MEM_CTRL2_U;

/* Define the union U_SC_SLLC1_MEM_CTRL_U */
/* sllc1 mem???ƼĴ??? */
/* 0x3010 */
typedef union tagScSllc1MemCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rft_sllc1        : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC1_MEM_CTRL_U;

/* Define the union U_SC_SRAM_MEM_CTRL_U */
/* sram mem???ƼĴ??? */
/* 0x3020 */
typedef union tagScSramMemCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rashsd_sram      : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_MEM_CTRL_U;

/* Define the union U_SC_ROCEE_MEM_CTRL0_U */
/* rocee mem???ƼĴ???0 */
/* 0x3030 */
typedef union tagScRoceeMemCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rfs_rocee        : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ROCEE_MEM_CTRL0_U;

/* Define the union U_SC_ROCEE_MEM_CTRL1_U */
/* rocee mem???ƼĴ???1 */
/* 0x3034 */
typedef union tagScRoceeMemCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rft_rocee        : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ROCEE_MEM_CTRL1_U;

/* Define the union U_SC_XGE_MEM_CTRL0_U */
/* xge mem???ƼĴ???0 */
/* 0x3040 */
typedef union tagScXgeMemCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rfs_xge          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XGE_MEM_CTRL0_U;

/* Define the union U_SC_XGE_MEM_CTRL1_U */
/* xge mem???ƼĴ???1 */
/* 0x3044 */
typedef union tagScXgeMemCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rft_xge          : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XGE_MEM_CTRL1_U;

/* Define the union U_SC_SAS_MEM_CTRL_U */
/* sas mem???ƼĴ???0 */
/* 0x3050 */
typedef union tagScSasMemCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rfs_sas          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SAS_MEM_CTRL_U;

/* Define the union U_SC_GE_MEM_CTRL_U */
/* ge mem???ƼĴ??? */
/* 0x3060 */
typedef union tagScGeMemCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rfs_ge           : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_MEM_CTRL_U;

/* Define the union U_SC_XBAR_MEM_CTRL0_U */
/* xbar mem???ƼĴ???0 */
/* 0x3070 */
typedef union tagScXbarMemCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rfs_xbar         : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XBAR_MEM_CTRL0_U;

/* Define the union U_SC_XBAR_MEM_CTRL1_U */
/* xbar mem???ƼĴ???1 */
/* 0x3074 */
typedef union tagScXbarMemCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rashde_xbar      : 7   ; /* [6..0]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XBAR_MEM_CTRL1_U;

/* Define the union U_SC_RCB_MEM_CTRL0_U */
/* rcb mem???ƼĴ???0 */
/* 0x3080 */
typedef union tagScRcbMemCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rfs_rcb          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RCB_MEM_CTRL0_U;

/* Define the union U_SC_RCB_MEM_CTRL1_U */
/* rcb mem???ƼĴ???1 */
/* 0x3084 */
typedef union tagScRcbMemCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rft_rcb          : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RCB_MEM_CTRL1_U;

/* Define the union U_SC_DSAF_CLK_ST_U */
/* DSAFʱ??״̬?Ĵ??? */
/* 0x5300 */
typedef union tagScDsafClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_xbar_xge0_st      : 1   ; /* [0]  */
        unsigned int    clk_xbar_xge1_st      : 1   ; /* [1]  */
        unsigned int    clk_xbar_xge2_st      : 1   ; /* [2]  */
        unsigned int    clk_xbar_xge3_st      : 1   ; /* [3]  */
        unsigned int    clk_xbar_xge4_st      : 1   ; /* [4]  */
        unsigned int    clk_xbar_xge5_st      : 1   ; /* [5]  */
        unsigned int    clk_xbar_ppe_st       : 1   ; /* [6]  */
        unsigned int    reserved_2            : 5   ; /* [11..7]  */
        unsigned int    clk_xbar_roce_st      : 1   ; /* [12]  */
        unsigned int    reserved_1            : 5   ; /* [17..13]  */
        unsigned int    clk_xbar_com_st       : 1   ; /* [18]  */
        unsigned int    reserved_0            : 13  ; /* [31..19]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DSAF_CLK_ST_U;

/* Define the union U_SC_NT_CLK_ST_U */
/* NTʱ??״̬?Ĵ??? */
/* 0x5304 */
typedef union tagScNtClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_nt_st             : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_NT_CLK_ST_U;

/* Define the union U_SC_XGE_CLK_ST_U */
/* XGEʱ??״̬?Ĵ??? */
/* 0x5308 */
typedef union tagScXgeClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_xge_cfg_st        : 1   ; /* [0]  */
        unsigned int    clk_xge0_tx_st        : 1   ; /* [1]  */
        unsigned int    clk_xge1_tx_st        : 1   ; /* [2]  */
        unsigned int    clk_xge2_tx_st        : 1   ; /* [3]  */
        unsigned int    clk_xge3_tx_st        : 1   ; /* [4]  */
        unsigned int    clk_xge4_tx_st        : 1   ; /* [5]  */
        unsigned int    clk_xge5_tx_st        : 1   ; /* [6]  */
        unsigned int    clk_xge0_rx_st        : 1   ; /* [7]  */
        unsigned int    clk_xge1_rx_st        : 1   ; /* [8]  */
        unsigned int    clk_xge2_rx_st        : 1   ; /* [9]  */
        unsigned int    clk_xge3_rx_st        : 1   ; /* [10]  */
        unsigned int    clk_xge4_rx_st        : 1   ; /* [11]  */
        unsigned int    clk_xge5_rx_st        : 1   ; /* [12]  */
        unsigned int    reserved_0            : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XGE_CLK_ST_U;

/* Define the union U_SC_GE_CLK_ST_U */
/* GEʱ??״̬?Ĵ??? */
/* 0x530C */
typedef union tagScGeClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_gmac0_sys_st      : 1   ; /* [0]  */
        unsigned int    clk_gmac1_sys_st      : 1   ; /* [1]  */
        unsigned int    clk_gmac2_sys_st      : 1   ; /* [2]  */
        unsigned int    clk_gmac3_sys_st      : 1   ; /* [3]  */
        unsigned int    clk_gmac4_sys_st      : 1   ; /* [4]  */
        unsigned int    clk_gmac5_sys_st      : 1   ; /* [5]  */
        unsigned int    clk_gmac6_sys_st      : 1   ; /* [6]  */
        unsigned int    clk_gmac7_sys_st      : 1   ; /* [7]  */
        unsigned int    clk_gmac0_125m_st     : 1   ; /* [8]  */
        unsigned int    clk_gmac1_125m_st     : 1   ; /* [9]  */
        unsigned int    clk_gmac2_125m_st     : 1   ; /* [10]  */
        unsigned int    clk_gmac3_125m_st     : 1   ; /* [11]  */
        unsigned int    clk_gmac4_125m_st     : 1   ; /* [12]  */
        unsigned int    clk_gmac5_125m_st     : 1   ; /* [13]  */
        unsigned int    clk_gmac6_125m_st     : 1   ; /* [14]  */
        unsigned int    clk_gmac7_125m_st     : 1   ; /* [15]  */
        unsigned int    clk_gmac0_tx_st       : 1   ; /* [16]  */
        unsigned int    clk_gmac1_tx_st       : 1   ; /* [17]  */
        unsigned int    clk_gmac2_tx_st       : 1   ; /* [18]  */
        unsigned int    clk_gmac3_tx_st       : 1   ; /* [19]  */
        unsigned int    clk_gmac4_tx_st       : 1   ; /* [20]  */
        unsigned int    clk_gmac5_tx_st       : 1   ; /* [21]  */
        unsigned int    clk_gmac6_tx_st       : 1   ; /* [22]  */
        unsigned int    clk_gmac7_tx_st       : 1   ; /* [23]  */
        unsigned int    clk_gmac0_rx_st       : 1   ; /* [24]  */
        unsigned int    clk_gmac1_rx_st       : 1   ; /* [25]  */
        unsigned int    clk_gmac2_rx_st       : 1   ; /* [26]  */
        unsigned int    clk_gmac3_rx_st       : 1   ; /* [27]  */
        unsigned int    clk_gmac4_rx_st       : 1   ; /* [28]  */
        unsigned int    clk_gmac5_rx_st       : 1   ; /* [29]  */
        unsigned int    clk_gmac6_rx_st       : 1   ; /* [30]  */
        unsigned int    clk_gmac7_rx_st       : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_CLK_ST_U;

/* Define the union U_SC_PPE_CLK_ST_U */
/* PPEʱ??״̬?Ĵ??? */
/* 0x5310 */
typedef union tagScPpeClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_ppe0_st           : 1   ; /* [0]  */
        unsigned int    clk_ppe1_st           : 1   ; /* [1]  */
        unsigned int    clk_ppe2_st           : 1   ; /* [2]  */
        unsigned int    clk_ppe3_st           : 1   ; /* [3]  */
        unsigned int    clk_ppe4_st           : 1   ; /* [4]  */
        unsigned int    clk_ppe5_st           : 1   ; /* [5]  */
        unsigned int    clk_rcb_ppe6_st       : 1   ; /* [6]  */
        unsigned int    clk_rcb_ppe7_st       : 1   ; /* [7]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PPE_CLK_ST_U;

/* Define the union U_SC_ROCEE_CLK_ST_U */
/* ROCEEʱ??״̬?Ĵ??? */
/* 0x5314 */
typedef union tagScRoceeClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_rocee0_st         : 1   ; /* [0]  */
        unsigned int    clk_rocee1_st         : 1   ; /* [1]  */
        unsigned int    clk_rocee2_st         : 1   ; /* [2]  */
        unsigned int    clk_rocee3_st         : 1   ; /* [3]  */
        unsigned int    clk_rocee4_st         : 1   ; /* [4]  */
        unsigned int    clk_rocee5_st         : 1   ; /* [5]  */
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ROCEE_CLK_ST_U;

/* Define the union U_SC_CPU_CLK_ST_U */
/* CPUʱ??״̬?Ĵ??? */
/* 0x5318 */
typedef union tagScCpuClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_cpu_st            : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_CPU_CLK_ST_U;

/* Define the union U_SC_SAS_CLK_ST_U */
/* SASʱ???ſ??ź?״̬ */
/* 0x531C */
typedef union tagScSasClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_sas_st            : 1   ; /* [0]  */
        unsigned int    clk_sas_mem_st        : 1   ; /* [1]  */
        unsigned int    clk_sas_ahb_st        : 1   ; /* [2]  */
        unsigned int    clk_sas_oob_st        : 1   ; /* [3]  */
        unsigned int    clk_sas_ch0_rx_st     : 1   ; /* [4]  */
        unsigned int    clk_sas_ch1_rx_st     : 1   ; /* [5]  */
        unsigned int    clk_sas_ch2_rx_st     : 1   ; /* [6]  */
        unsigned int    clk_sas_ch3_rx_st     : 1   ; /* [7]  */
        unsigned int    clk_sas_ch4_rx_st     : 1   ; /* [8]  */
        unsigned int    clk_sas_ch5_rx_st     : 1   ; /* [9]  */
        unsigned int    clk_sas_ch6_rx_st     : 1   ; /* [10]  */
        unsigned int    clk_sas_ch7_rx_st     : 1   ; /* [11]  */
        unsigned int    clk_sas_ch0_tx_st     : 1   ; /* [12]  */
        unsigned int    clk_sas_ch1_tx_st     : 1   ; /* [13]  */
        unsigned int    clk_sas_ch2_tx_st     : 1   ; /* [14]  */
        unsigned int    clk_sas_ch3_tx_st     : 1   ; /* [15]  */
        unsigned int    clk_sas_ch4_tx_st     : 1   ; /* [16]  */
        unsigned int    clk_sas_ch5_tx_st     : 1   ; /* [17]  */
        unsigned int    clk_sas_ch6_tx_st     : 1   ; /* [18]  */
        unsigned int    clk_sas_ch7_tx_st     : 1   ; /* [19]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SAS_CLK_ST_U;

/* Define the union U_SC_ITS_CLK_ST_U */
/* ITSʱ??״̬?Ĵ??? */
/* 0x5320 */
typedef union tagScItsClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_its_st            : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ITS_CLK_ST_U;

/* Define the union U_SC_SRAM_CLK_ST_U */
/* SRAMʱ??״̬?Ĵ??? */
/* 0x5324 */
typedef union tagScSramClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_sram_st           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_CLK_ST_U;

/* Define the union U_SC_RCB_PPE_COM_CLK_ST_U */
/* RCB PPE????ʱ??״̬?Ĵ??? */
/* 0x5328 */
typedef union tagScRcbPpeComClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_rcb_ppe_com_st    : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RCB_PPE_COM_CLK_ST_U;

/* Define the union U_SC_TIMER_CLK_ST_U */
/* TIMERʱ??״̬?Ĵ??? */
/* 0x532C */
typedef union tagScTimerClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_timer_st          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TIMER_CLK_ST_U;

/* Define the union U_SC_SLLC_CLK_ST_U */
/* SLLC1ʱ??״̬?Ĵ??? */
/* 0x5330 */
typedef union tagScSllcClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_sllc_st           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC_CLK_ST_U;

/* Define the union U_SC_XBAR_RESET_ST_U */
/* DSAF?���λ????״̬?Ĵ??? */
/* 0x5A00 */
typedef union tagScXbarResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    xbar_srst_st          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XBAR_RESET_ST_U;

/* Define the union U_SC_NT_RESET_ST_U */
/* NT?���λ????״̬?Ĵ??? */
/* 0x5A04 */
typedef union tagScNtResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    nt_srst_st            : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_NT_RESET_ST_U;

/* Define the union U_SC_XGE_RESET_ST_U */
/* XGE?���λ????״̬?Ĵ??? */
/* 0x5A08 */
typedef union tagScXgeResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    xge_cfg_srst_st       : 1   ; /* [0]  */
        unsigned int    xge0_cfg_mac_srst_st  : 1   ; /* [1]  */
        unsigned int    xge1_cfg_mac_srst_st  : 1   ; /* [2]  */
        unsigned int    xge2_cfg_mac_srst_st  : 1   ; /* [3]  */
        unsigned int    xge3_cfg_mac_srst_st  : 1   ; /* [4]  */
        unsigned int    xge4_cfg_mac_srst_st  : 1   ; /* [5]  */
        unsigned int    xge5_cfg_mac_srst_st  : 1   ; /* [6]  */
        unsigned int    xge0_core_tx_srst_st  : 1   ; /* [7]  */
        unsigned int    xge1_core_tx_srst_st  : 1   ; /* [8]  */
        unsigned int    xge2_core_tx_srst_st  : 1   ; /* [9]  */
        unsigned int    xge3_core_tx_srst_st  : 1   ; /* [10]  */
        unsigned int    xge4_core_tx_srst_st  : 1   ; /* [11]  */
        unsigned int    xge5_core_tx_srst_st  : 1   ; /* [12]  */
        unsigned int    xge0_core_rx_srst_st  : 1   ; /* [13]  */
        unsigned int    xge1_core_rx_srst_st  : 1   ; /* [14]  */
        unsigned int    xge2_core_rx_srst_st  : 1   ; /* [15]  */
        unsigned int    xge3_core_rx_srst_st  : 1   ; /* [16]  */
        unsigned int    xge4_core_rx_srst_st  : 1   ; /* [17]  */
        unsigned int    xge5_core_rx_srst_st  : 1   ; /* [18]  */
        unsigned int    xge0_fec_tx_srst_st   : 1   ; /* [19]  */
        unsigned int    xge1_fec_tx_srst_st   : 1   ; /* [20]  */
        unsigned int    xge2_fec_tx_srst_st   : 1   ; /* [21]  */
        unsigned int    xge3_fec_tx_srst_st   : 1   ; /* [22]  */
        unsigned int    xge4_fec_tx_srst_st   : 1   ; /* [23]  */
        unsigned int    xge5_fec_tx_srst_st   : 1   ; /* [24]  */
        unsigned int    xge0_fec_rx_srst_st   : 1   ; /* [25]  */
        unsigned int    xge1_fec_rx_srst_st   : 1   ; /* [26]  */
        unsigned int    xge2_fec_rx_srst_st   : 1   ; /* [27]  */
        unsigned int    xge3_fec_rx_srst_st   : 1   ; /* [28]  */
        unsigned int    xge4_fec_rx_srst_st   : 1   ; /* [29]  */
        unsigned int    xge5_fec_rx_srst_st   : 1   ; /* [30]  */
        unsigned int    reserved_0            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XGE_RESET_ST_U;

/* Define the union U_SC_GE_RESET_ST0_U */
/* GE?���λ????״̬?Ĵ???0 */
/* 0x5A0C */
typedef union tagScGeResetSt0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gmac0_sys_srst_st     : 1   ; /* [0]  */
        unsigned int    gmac1_sys_srst_st     : 1   ; /* [1]  */
        unsigned int    gmac2_sys_srst_st     : 1   ; /* [2]  */
        unsigned int    gmac3_sys_srst_st     : 1   ; /* [3]  */
        unsigned int    gmac4_sys_srst_st     : 1   ; /* [4]  */
        unsigned int    gmac5_sys_srst_st     : 1   ; /* [5]  */
        unsigned int    gmac0_tx_srst_st      : 1   ; /* [6]  */
        unsigned int    gmac1_tx_srst_st      : 1   ; /* [7]  */
        unsigned int    gmac2_tx_srst_st      : 1   ; /* [8]  */
        unsigned int    gmac3_tx_srst_st      : 1   ; /* [9]  */
        unsigned int    gmac4_tx_srst_st      : 1   ; /* [10]  */
        unsigned int    gmac5_tx_srst_st      : 1   ; /* [11]  */
        unsigned int    gmac0_rx_srst_st      : 1   ; /* [12]  */
        unsigned int    gmac1_rx_srst_st      : 1   ; /* [13]  */
        unsigned int    gmac2_rx_srst_st      : 1   ; /* [14]  */
        unsigned int    gmac3_rx_srst_st      : 1   ; /* [15]  */
        unsigned int    gmac4_rx_srst_st      : 1   ; /* [16]  */
        unsigned int    gmac5_rx_srst_st      : 1   ; /* [17]  */
        unsigned int    gmac0_cfg_srst_st     : 1   ; /* [18]  */
        unsigned int    gmac1_cfg_srst_st     : 1   ; /* [19]  */
        unsigned int    gmac2_cfg_srst_st     : 1   ; /* [20]  */
        unsigned int    gmac3_cfg_srst_st     : 1   ; /* [21]  */
        unsigned int    gmac4_cfg_srst_st     : 1   ; /* [22]  */
        unsigned int    gmac5_cfg_srst_st     : 1   ; /* [23]  */
        unsigned int    gmac0_eth_srst_st     : 1   ; /* [24]  */
        unsigned int    gmac1_eth_srst_st     : 1   ; /* [25]  */
        unsigned int    gmac2_eth_srst_st     : 1   ; /* [26]  */
        unsigned int    gmac3_eth_srst_st     : 1   ; /* [27]  */
        unsigned int    gmac4_eth_srst_st     : 1   ; /* [28]  */
        unsigned int    gmac5_eth_srst_st     : 1   ; /* [29]  */
        unsigned int    reserved_0            : 2   ; /* [31..30]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_RESET_ST0_U;

/* Define the union U_SC_GE_RESET_ST1_U */
/* GE?���λ????״̬?Ĵ???1 */
/* 0x5A10 */
typedef union tagScGeResetSt1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gmac0_fifo_srst_st    : 1   ; /* [0]  */
        unsigned int    gmac1_fifo_srst_st    : 1   ; /* [1]  */
        unsigned int    gmac2_fifo_srst_st    : 1   ; /* [2]  */
        unsigned int    gmac3_fifo_srst_st    : 1   ; /* [3]  */
        unsigned int    gmac4_fifo_srst_st    : 1   ; /* [4]  */
        unsigned int    gmac5_fifo_srst_st    : 1   ; /* [5]  */
        unsigned int    gmac6_sys_srst_st     : 1   ; /* [6]  */
        unsigned int    gmac7_sys_srst_st     : 1   ; /* [7]  */
        unsigned int    gmac6_tx_srst_st      : 1   ; /* [8]  */
        unsigned int    gmac7_tx_srst_st      : 1   ; /* [9]  */
        unsigned int    gmac6_rx_srst_st      : 1   ; /* [10]  */
        unsigned int    gmac7_rx_srst_st      : 1   ; /* [11]  */
        unsigned int    gmac6_cfg_srst_st     : 1   ; /* [12]  */
        unsigned int    gmac7_cfg_srst_st     : 1   ; /* [13]  */
        unsigned int    gmac6_eth_srst_st     : 1   ; /* [14]  */
        unsigned int    gmac7_eth_srst_st     : 1   ; /* [15]  */
        unsigned int    gmac6_fifo_srst_st    : 1   ; /* [16]  */
        unsigned int    gmac7_fifo_srst_st    : 1   ; /* [17]  */
        unsigned int    reserved_0            : 14  ; /* [31..18]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_RESET_ST1_U;

/* Define the union U_SC_PPE_RESET_ST_U */
/* PPE?���λ????״̬?Ĵ??? */
/* 0x5A24 */
typedef union tagScPpeResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ppe0_srst_st          : 1   ; /* [0]  */
        unsigned int    ppe1_srst_st          : 1   ; /* [1]  */
        unsigned int    ppe2_srst_st          : 1   ; /* [2]  */
        unsigned int    ppe3_srst_st          : 1   ; /* [3]  */
        unsigned int    ppe4_srst_st          : 1   ; /* [4]  */
        unsigned int    ppe5_srst_st          : 1   ; /* [5]  */
        unsigned int    ppe6_srst_st          : 1   ; /* [6]  */
        unsigned int    ppe7_srst_st          : 1   ; /* [7]  */
        unsigned int    rcb1_srst_st          : 1   ; /* [8]  */
        unsigned int    rcb2_srst_st          : 1   ; /* [9]  */
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PPE_RESET_ST_U;

/* Define the union U_SC_ROCEE_RESET_ST_U */
/* ROCEE?���λ????״̬?Ĵ??? */
/* 0x5A28 */
typedef union tagScRoceeResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rocee_srst_st         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ROCEE_RESET_ST_U;

/* Define the union U_SC_CPU_RESET_ST_U */
/* CPU?���λ????״̬?Ĵ??? */
/* 0x5A2C */
typedef union tagScCpuResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cpu_srst_st           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_CPU_RESET_ST_U;

/* Define the union U_SC_SAS_RESET_ST_U */
/* SAS?���λ????״̬?Ĵ??? */
/* 0x5A30 */
typedef union tagScSasResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sas_srst_st           : 1   ; /* [0]  */
        unsigned int    sas_oob_srst_st       : 1   ; /* [1]  */
        unsigned int    sas_ahb_srst_st       : 1   ; /* [2]  */
        unsigned int    sas_ch0_rx_srst_st    : 1   ; /* [3]  */
        unsigned int    sas_ch1_rx_srst_st    : 1   ; /* [4]  */
        unsigned int    sas_ch2_rx_srst_st    : 1   ; /* [5]  */
        unsigned int    sas_ch3_rx_srst_st    : 1   ; /* [6]  */
        unsigned int    sas_ch4_rx_srst_st    : 1   ; /* [7]  */
        unsigned int    sas_ch5_rx_srst_st    : 1   ; /* [8]  */
        unsigned int    sas_ch6_rx_srst_st    : 1   ; /* [9]  */
        unsigned int    sas_ch7_rx_srst_st    : 1   ; /* [10]  */
        unsigned int    sas_ch0_tx_srst_st    : 1   ; /* [11]  */
        unsigned int    sas_ch1_tx_srst_st    : 1   ; /* [12]  */
        unsigned int    sas_ch2_tx_srst_st    : 1   ; /* [13]  */
        unsigned int    sas_ch3_tx_srst_st    : 1   ; /* [14]  */
        unsigned int    sas_ch4_tx_srst_st    : 1   ; /* [15]  */
        unsigned int    sas_ch5_tx_srst_st    : 1   ; /* [16]  */
        unsigned int    sas_ch6_tx_srst_st    : 1   ; /* [17]  */
        unsigned int    sas_ch7_tx_srst_st    : 1   ; /* [18]  */
        unsigned int    reserved_0            : 13  ; /* [31..19]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SAS_RESET_ST_U;

/* Define the union U_SC_SLLC_TSVRX_RESET_ST_U */
/* ΪSLLC TSVRXͨ???���λ״̬?Ĵ??? */
/* 0x5A34 */
typedef union tagScSllcTsvrxResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sllc_tsvrx0_srst_st   : 1   ; /* [0]  */
        unsigned int    sllc_tsvrx1_srst_st   : 1   ; /* [1]  */
        unsigned int    sllc_tsvrx2_srst_st   : 1   ; /* [2]  */
        unsigned int    sllc_tsvrx3_srst_st   : 1   ; /* [3]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC_TSVRX_RESET_ST_U;

/* Define the union U_SC_ITS_RESET_ST_U */
/* ITS?���λ????״̬?Ĵ??? */
/* 0x5A38 */
typedef union tagScItsResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    its_srst_st           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ITS_RESET_ST_U;

/* Define the union U_SC_SRAM_RESET_ST_U */
/* SRAM?���λ????״̬?Ĵ??? */
/* 0x5A40 */
typedef union tagScSramResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sram_srst_st          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_RESET_ST_U;

/* Define the union U_SC_RCB_PPE_COM_RESET_ST_U */
/* RCB PPE?????���λ????״̬?Ĵ??? */
/* 0x5A44 */
typedef union tagScRcbPpeComResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rcb_ppe_com_srst_st   : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RCB_PPE_COM_RESET_ST_U;

/* Define the union U_SC_TIMER_RESET_ST_U */
/* TIMER??λ״̬?Ĵ??? */
/* 0x5A4C */
typedef union tagScTimerResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    timer_srst_st         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TIMER_RESET_ST_U;

/* Define the union U_SC_SLLC_RESET_ST_U */
/* SLLC1??λ״̬?Ĵ??? */
/* 0x5A50 */
typedef union tagScSllcResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sllc_srst_st          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SLLC_RESET_ST_U;

/* Define the union U_SC_SRAM_ST0_U */
/* sram״̬?Ĵ???0 */
/* 0x6000 */
typedef union tagScSramSt0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sram_single_err       : 1   ; /* [0]  */
        unsigned int    sram_double_err       : 1   ; /* [1]  */
        unsigned int    sram_multi_err        : 1   ; /* [2]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_ST0_U;

/* Define the union U_SC_SRAM_ST3_U */
/* sram״̬?Ĵ???3 */
/* 0x600C */
typedef union tagScSramSt3
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sram_count_ecc_sglerr : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_ST3_U;

/* Define the union U_SC_SRAM_ST4_U */
/* sram״̬?Ĵ???4 */
/* 0x6010 */
typedef union tagScSramSt4
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sram_count_ecc_mulerr : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_ST4_U;

/* Define the union U_SC_SRAM_ST5_U */
/* sram״̬?Ĵ???5 */
/* 0x6014 */
typedef union tagScSramSt5
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sram_dfx_dbg          : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_ST5_U;

/* Define the union U_SC_M3_STAT_U */
/*  */
/* 0x6100 */
typedef union tagScM3Stat
{
    /* Define the struct bits */
    struct
    {
        unsigned int    m3_brchstat           : 4   ; /* [3..0]  */
        unsigned int    m3_halted             : 1   ; /* [4]  */
        unsigned int    m3_lockup             : 1   ; /* [5]  */
        unsigned int    m3_sleeping           : 1   ; /* [6]  */
        unsigned int    m3_currpri            : 8   ; /* [14..7]  */
        unsigned int    m3_wicenack           : 1   ; /* [15]  */
        unsigned int    m3_wakeup             : 1   ; /* [16]  */
        unsigned int    reserved_0            : 15  ; /* [31..17]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_M3_STAT_U;

/* Define the union U_SC_TCAM_MBIST_ST_U */
/* DSAF??TCAM MBIST???Խ???״̬ */
/* 0x6300 */
typedef union tagScTcamMbistSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    tcam_mbist_done       : 1   ; /* [0]  */
        unsigned int    tcam_mbist_err_cmp    : 1   ; /* [1]  */
        unsigned int    tcam_mbist_err_mem    : 1   ; /* [2]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TCAM_MBIST_ST_U;

/* Define the union U_SC_GE_ST_U */
/* DSAF??GE?Ĺ???״ָ̬ʾ */
/* 0x6380 */
typedef union tagScGeSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gmac_led_activity_0   : 1   ; /* [0]  */
        unsigned int    gmac_led_activity_1   : 1   ; /* [1]  */
        unsigned int    gmac_led_activity_2   : 1   ; /* [2]  */
        unsigned int    gmac_led_activity_3   : 1   ; /* [3]  */
        unsigned int    gmac_led_activity_4   : 1   ; /* [4]  */
        unsigned int    gmac_led_activity_5   : 1   ; /* [5]  */
        unsigned int    gmac_led_activity_6   : 1   ; /* [6]  */
        unsigned int    gmac_led_activity_7   : 1   ; /* [7]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GE_ST_U;

/* Define the union U_SC_XGE_ST_U */
/* DSAF??XGE?Ĺ???״ָ̬ʾ */
/* 0x6390 */
typedef union tagScXgeSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    xge_app_rx_link_up_0  : 1   ; /* [0]  */
        unsigned int    xge_app_rx_link_up_1  : 1   ; /* [1]  */
        unsigned int    xge_app_rx_link_up_2  : 1   ; /* [2]  */
        unsigned int    xge_app_rx_link_up_3  : 1   ; /* [3]  */
        unsigned int    xge_app_rx_link_up_4  : 1   ; /* [4]  */
        unsigned int    xge_app_rx_link_up_5  : 1   ; /* [5]  */
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_XGE_ST_U;

/* Define the union U_SC_HILINK2_MACRO_PLLOUTOFLOCK_U */
/* HILINK״̬?Ĵ??? */
/* 0x6400 */
typedef union tagScHilink2MacroPlloutoflock
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink2_plloutoflock  : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_PLLOUTOFLOCK_U;

/* Define the union U_SC_HILINK2_MACRO_PRBS_ERR_U */
/* HILINK״̬?Ĵ??? */
/* 0x6404 */
typedef union tagScHilink2MacroPrbsErr
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink2_prbs_err      : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_PRBS_ERR_U;

/* Define the union U_SC_HILINK2_MACRO_LOS_U */
/* HILINK״̬?Ĵ??? */
/* 0x6408 */
typedef union tagScHilink2MacroLos
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink2_los           : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK2_MACRO_LOS_U;

/* Define the union U_SC_HILINK3_MACRO_PLLOUTOFLOCK_U */
/* HILINK״̬?Ĵ??? */
/* 0x6500 */
typedef union tagScHilink3MacroPlloutoflock
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink3_plloutoflock  : 2   ; /* [1..0]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_PLLOUTOFLOCK_U;

/* Define the union U_SC_HILINK3_MACRO_PRBS_ERR_U */
/* HILINK״̬?Ĵ??? */
/* 0x6504 */
typedef union tagScHilink3MacroPrbsErr
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink3_prbs_err      : 4   ; /* [3..0]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_PRBS_ERR_U;

/* Define the union U_SC_HILINK3_MACRO_LOS_U */
/* HILINK״̬?Ĵ??? */
/* 0x6508 */
typedef union tagScHilink3MacroLos
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink3_los           : 4   ; /* [3..0]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK3_MACRO_LOS_U;

/* Define the union U_SC_HILINK4_MACRO_PLLOUTOFLOCK_U */
/* HILINK״̬?Ĵ??? */
/* 0x6600 */
typedef union tagScHilink4MacroPlloutoflock
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink4_plloutoflock  : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_PLLOUTOFLOCK_U;

/* Define the union U_SC_HILINK4_MACRO_PRBS_ERR_U */
/* HILINK״̬?Ĵ??? */
/* 0x6604 */
typedef union tagScHilink4MacroPrbsErr
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink4_prbs_err      : 4   ; /* [3..0]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_PRBS_ERR_U;

/* Define the union U_SC_HILINK4_MACRO_LOS_U */
/* HILINK״̬?Ĵ??? */
/* 0x6608 */
typedef union tagScHilink4MacroLos
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hilink4_los           : 4   ; /* [3..0]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK4_MACRO_LOS_U;


#endif
#endif
