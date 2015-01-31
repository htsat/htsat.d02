/******************************************************************************

                  ??Ȩ???? (C), 2011-2021, ??Ϊ???????޹?˾

 ******************************************************************************
  ?? ?? ??   : sre_sub_m3.h
  ?? ?? ??   : ????
  ??    ??   : z00176027
  ????????   : 2013??10??17??
  ?????޸?   :
  ????????   : p660 M3??ϵͳ ??λ???⸴λ????ͷ?ļ?
  ?????б?   :
  ?޸???ʷ   :
  1.??    ??   : 2013??10??17??
    ??    ??   : z00176027
    ?޸?????   : ?????ļ?

******************************************************************************/
#ifndef __C_SRE_SUB_M3_H__
#define __C_SRE_SUB_M3_H__


#include "hrdCommon.h"
#include "hrdOs.h"
#include "osal_api.h"
#include "sre_crg_api.h"

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

/* m3_subctrl ģ???Ĵ???????ַ */
#define M3_SUB_BASE                               (0xA0000000)
#define M3_SUB_BASE_SIZE                          (0x10000)

/******************************************************************************/
/*                      PHOSPHOR M3_SUB Registers' Definitions                            */
/******************************************************************************/

#define M3_SUB_SC_WDG_CLK_EN_REG                 (M3_SUB_BASE + 0x300)  /* WDGʱ??ʹ?ܼĴ??? */                                                             
#define M3_SUB_SC_WDG_CLK_DIS_REG                (M3_SUB_BASE + 0x304)  /* WDGʱ?ӽ?ֹ?Ĵ??? */                                                             
#define M3_SUB_SC_TIMER_CLK_EN_REG               (M3_SUB_BASE + 0x308)  /* TIMERʱ??ʹ?ܼĴ??? */                                                           
#define M3_SUB_SC_TIMER_CLK_DIS_REG              (M3_SUB_BASE + 0x30C)  /* TIMERʱ?ӽ?ֹ?Ĵ??? */                                                           
#define M3_SUB_SC_UART_CLK_EN_REG                (M3_SUB_BASE + 0x310)  /* UARTʱ??ʹ?ܼĴ??? */                                                            
#define M3_SUB_SC_UART_CLK_DIS_REG               (M3_SUB_BASE + 0x314)  /* UARTʱ?ӽ?ֹ?Ĵ??? */                                                            
#define M3_SUB_SC_ITS_CLK_EN_REG                 (M3_SUB_BASE + 0x318)  /* ITSʱ??ʹ?ܼĴ??? */                                                             
#define M3_SUB_SC_ITS_CLK_DIS_REG                (M3_SUB_BASE + 0x31C)  /* ITSʱ?ӽ?ֹ?Ĵ??? */                                                             
#define M3_SUB_SC_IPCM_CLK_EN_REG                (M3_SUB_BASE + 0x320)  /* IPCMʱ??ʹ?ܼĴ??? */                                                            
#define M3_SUB_SC_IPCM_CLK_DIS_REG               (M3_SUB_BASE + 0x324)  /* IPCMʱ?ӽ?ֹ?Ĵ??? */                                                            
#define M3_SUB_SC_SRAM_CLK_EN_REG                (M3_SUB_BASE + 0x328)  /* SRAMʱ??ʹ?ܼĴ??? */                                                            
#define M3_SUB_SC_SRAM_CLK_DIS_REG               (M3_SUB_BASE + 0x32C)  /* SRAMʱ?ӽ?ֹ?Ĵ??? */                                                            
#define M3_SUB_SC_SFC_CLK_EN_REG                 (M3_SUB_BASE + 0x330)  /* SFCʱ??ʹ?ܼĴ??? */                                                             
#define M3_SUB_SC_SFC_CLK_DIS_REG                (M3_SUB_BASE + 0x334)  /* SFCʱ?ӽ?ֹ?Ĵ??? */                                                             
#define M3_SUB_SC_I2CM_CLK_EN_REG                (M3_SUB_BASE + 0x338)  /* I2CMʱ??ʹ?ܼĴ??? */                                                            
#define M3_SUB_SC_I2CM_CLK_DIS_REG               (M3_SUB_BASE + 0x33C)  /* I2CMʱ?ӽ?ֹ?Ĵ??? */                                                            
#define M3_SUB_SC_I2C_CLK_EN_REG                 (M3_SUB_BASE + 0x340)  /* I2Cʱ??ʹ?ܼĴ??? */                                                             
#define M3_SUB_SC_I2C_CLK_DIS_REG                (M3_SUB_BASE + 0x344)  /* I2Cʱ?ӽ?ֹ?Ĵ??? */                                                             
#define M3_SUB_SC_GPIO_CLK_EN_REG                (M3_SUB_BASE + 0x348)  /* GPIOʱ??ʹ?ܼĴ??? */                                                            
#define M3_SUB_SC_GPIO_CLK_DIS_REG               (M3_SUB_BASE + 0x34C)  /* GPIOʱ?ӽ?ֹ?Ĵ??? */                                                            
#define M3_SUB_SC_CPU_CLK_EN_REG                 (M3_SUB_BASE + 0x350)  /* M3 CPUʱ??ʹ?ܼĴ??? */                                                          
#define M3_SUB_SC_CPU_CLK_DIS_REG                (M3_SUB_BASE + 0x354)  /* M3 CPUʱ?ӽ?ֹ?Ĵ??? */                                                          
#define M3_SUB_SC_USB_CLK_EN_REG                 (M3_SUB_BASE + 0x368)  /* USBʱ??ʹ?ܼĴ??? */                                                             
#define M3_SUB_SC_USB_CLK_DIS_REG                (M3_SUB_BASE + 0x36C)  /* USBʱ?ӽ?ֹ?Ĵ??? */                                                             
#define M3_SUB_SC_SPI_CLK_EN_REG                 (M3_SUB_BASE + 0x388)  /* spiʱ??ʹ?ܼĴ??? */                                                             
#define M3_SUB_SC_SPI_CLK_DIS_REG                (M3_SUB_BASE + 0x38C)  /* spiʱ?ӽ?ֹ?Ĵ??? */                                                             
#define M3_SUB_SC_SEC_CLK_EN_REG                 (M3_SUB_BASE + 0x3B8)  /* SECʱ??ʹ?ܼĴ??? */                                                             
#define M3_SUB_SC_SEC_CLK_DIS_REG                (M3_SUB_BASE + 0x3BC)  /* SECʱ?ӽ?ֹ?Ĵ??? */                                                             
#define M3_SUB_SC_WDG_RESET_REQ_REG              (M3_SUB_BASE + 0xA00)  /* WDG?���λ???????ƼĴ??? */                                                          
#define M3_SUB_SC_WDG_RESET_DREQ_REG             (M3_SUB_BASE + 0xA04)  /* WDG?���λȥ???????ƼĴ??? */                                                         
#define M3_SUB_SC_TIMER_RESET_REQ_REG            (M3_SUB_BASE + 0xA08)  /* TIMER?���λ???????ƼĴ??? */                                                        
#define M3_SUB_SC_TIMER_RESET_DREQ_REG           (M3_SUB_BASE + 0xA0C)  /* TIMER?���λȥ???????ƼĴ??? */                                                       
#define M3_SUB_SC_UART_RESET_REQ_REG             (M3_SUB_BASE + 0xA10)  /* UART?���λ???????ƼĴ??? */                                                         
#define M3_SUB_SC_UART_RESET_DREQ_REG            (M3_SUB_BASE + 0xA14)  /* UART?���λȥ???????ƼĴ??? */                                                        
#define M3_SUB_SC_ITS_RESET_REQ_REG              (M3_SUB_BASE + 0xA18)  /* ITS?���λ???????ƼĴ??? */                                                          
#define M3_SUB_SC_ITS_RESET_DREQ_REG             (M3_SUB_BASE + 0xA1C)  /* ITS?���λȥ???????ƼĴ??? */                                                         
#define M3_SUB_SC_IPCM_RESET_REQ_REG             (M3_SUB_BASE + 0xA20)  /* IPCM?���λ???????ƼĴ??? */                                                         
#define M3_SUB_SC_IPCM_RESET_DREQ_REG            (M3_SUB_BASE + 0xA24)  /* IPCM?���λȥ???????ƼĴ??? */                                                        
#define M3_SUB_SC_SRAM_RESET_REQ_REG             (M3_SUB_BASE + 0xA28)  /* SRAM?���λ???????ƼĴ??? */                                                         
#define M3_SUB_SC_SRAM_RESET_DREQ_REG            (M3_SUB_BASE + 0xA2C)  /* SRAM?���λȥ???????ƼĴ??? */                                                        
#define M3_SUB_SC_SFC_RESET_REQ_REG              (M3_SUB_BASE + 0xA30)  /* SFC?���λ???????ƼĴ??? */                                                          
#define M3_SUB_SC_SFC_RESET_DREQ_REG             (M3_SUB_BASE + 0xA34)  /* SFC?���λȥ???????ƼĴ??? */                                                         
#define M3_SUB_SC_I2CM_RESET_REQ_REG             (M3_SUB_BASE + 0xA38)  /* I2CM?���λ???????ƼĴ??? */                                                         
#define M3_SUB_SC_I2CM_RESET_DREQ_REG            (M3_SUB_BASE + 0xA3C)  /* I2CM?���λȥ???????ƼĴ??? */                                                        
#define M3_SUB_SC_I2C_RESET_REQ_REG              (M3_SUB_BASE + 0xA40)  /* I2C?���λ???????ƼĴ??? */                                                          
#define M3_SUB_SC_I2C_RESET_DREQ_REG             (M3_SUB_BASE + 0xA44)  /* I2C?���λȥ???????ƼĴ??? */                                                         
#define M3_SUB_SC_GPIO_RESET_REQ_REG             (M3_SUB_BASE + 0xA48)  /* GPIO?���λ???????ƼĴ??? */                                                         
#define M3_SUB_SC_GPIO_RESET_DREQ_REG            (M3_SUB_BASE + 0xA4C)  /* GPIO?���λȥ???????ƼĴ??? */                                                        
#define M3_SUB_SC_CPU_RESET_REQ_REG              (M3_SUB_BASE + 0xA50)  /* M3 CPU?���λ???????ƼĴ??? */                                                       
#define M3_SUB_SC_CPU_RESET_DREQ_REG             (M3_SUB_BASE + 0xA54)  /* M3 CPU?���λȥ???????ƼĴ??? */                                                      
#define M3_SUB_SC_USB_RESET_REQ_REG              (M3_SUB_BASE + 0xA88)  /* USB?���λ???????ƼĴ??? */                                                          
#define M3_SUB_SC_USB_RESET_DREQ_REG             (M3_SUB_BASE + 0xA8C)  /* USB?���λȥ???????ƼĴ??? */                                                         
#define M3_SUB_SC_SPI_RESET_REQ_REG              (M3_SUB_BASE + 0xA98)  /* SPI?���λ???????ƼĴ??? */                                                          
#define M3_SUB_SC_SPI_RESET_DREQ_REG             (M3_SUB_BASE + 0xA9C)  /* SPI?���λȥ???????ƼĴ??? */                                                         
#define M3_SUB_SC_SEC_RESET_REQ_REG              (M3_SUB_BASE + 0xAA8)  /* SEC?���λ???????ƼĴ??? */                                                          
#define M3_SUB_SC_SEC_RESET_DREQ_REG             (M3_SUB_BASE + 0xAAC)  /* SEC?���λȥ???????ƼĴ??? */                                                         
#define M3_SUB_SC_SEC_BUILD_RESET_REQ_REG        (M3_SUB_BASE + 0xAB8)  /* SEC BUILD?���λ???????ƼĴ??? */                                                    
#define M3_SUB_SC_SEC_BUILD_RESET_DREQ_REG       (M3_SUB_BASE + 0xABC)  /* SEC BUILD?���λȥ???????ƼĴ??? */                                                   
#define M3_SUB_SC_PW_CTRL_RESET_REQ_REG      (M3_SUB_BASE + 0xAC0)  /* PW_CTRL?���λ???????ƼĴ??? */
#define M3_SUB_SC_PW_CTRL_RESET_DREQ_REG     (M3_SUB_BASE + 0xAC4)  /* PW_CTRL?���λȥ???????ƼĴ??? */
#define M3_SUB_SC_DISPATCH_DAW_EN_REG        (M3_SUB_BASE + 0x1000) /* dispatch daw en???? */
#define M3_SUB_SC_DISPATCH_DAW_ARRAY0_REG    (M3_SUB_BASE + 0x1004) /* dispatch daw????????0 */
#define M3_SUB_SC_DISPATCH_DAW_ARRAY1_REG    (M3_SUB_BASE + 0x1008) /* dispatch daw????????1 */
#define M3_SUB_SC_DISPATCH_DAW_ARRAY2_REG    (M3_SUB_BASE + 0x100C) /* dispatch daw????????2 */
#define M3_SUB_SC_DISPATCH_DAW_ARRAY3_REG    (M3_SUB_BASE + 0x1010) /* dispatch daw????????3 */
#define M3_SUB_SC_DISPATCH_DAW_ARRAY4_REG    (M3_SUB_BASE + 0x1014) /* dispatch daw????????4 */
#define M3_SUB_SC_DISPATCH_DAW_ARRAY5_REG    (M3_SUB_BASE + 0x1018) /* dispatch daw????????5 */
#define M3_SUB_SC_DISPATCH_DAW_ARRAY6_REG    (M3_SUB_BASE + 0x101C) /* dispatch daw????????6 */
#define M3_SUB_SC_DISPATCH_DAW_ARRAY7_REG    (M3_SUB_BASE + 0x1020) /* dispatch daw????????7 */
#define M3_SUB_SC_DISPATCH_RETRY_CONTROL_REG (M3_SUB_BASE + 0x1030) /* dispatch retry???ƼĴ??? */
#define M3_SUB_SC_DISPATCH_INTMASK_REG       (M3_SUB_BASE + 0x1100) /* dispatch???ж??��μĴ??? */
#define M3_SUB_SC_DISPATCH_RAWINT_REG        (M3_SUB_BASE + 0x1104) /* dispatch??ԭʼ?ж?״̬?Ĵ??? */
#define M3_SUB_SC_DISPATCH_INTSTAT_REG       (M3_SUB_BASE + 0x1108) /* dispatch???��κ????ж?״̬?Ĵ??? */
#define M3_SUB_SC_DISPATCH_INTCLR_REG        (M3_SUB_BASE + 0x110C) /* dispatch???ж??????Ĵ??? */
#define M3_SUB_SC_DISPATCH_ERRSTAT_REG       (M3_SUB_BASE + 0x1110) /* dispatch??ERR״̬?Ĵ??? */
#define M3_SUB_SC_REMAP_CTRL_REG             (M3_SUB_BASE + 0x1200) /* subsys??????Remap?Ĵ??? */
#define M3_SUB_SC_EXTINT_CTRL_REG            (M3_SUB_BASE + 0x2000) /* ?ⲿ?жϼ??????üĴ??? */
#define M3_SUB_SC_SPI_CTRL_REG               (M3_SUB_BASE + 0x2020) /* spi???ƼĴ??? */
#define M3_SUB_SC_I2C_CTRL_REG               (M3_SUB_BASE + 0x2024) /* i2c???ƼĴ??? */
#define M3_SUB_SC_SRAM_CTRL0_REG             (M3_SUB_BASE + 0x2030) /* sram???ƼĴ???0 */
#define M3_SUB_SC_SRAM_CTRL1_REG             (M3_SUB_BASE + 0x2034) /* sram???ƼĴ???1????ȫ?Ĵ????? */
#define M3_SUB_SC_SRAM_CTRL2_REG             (M3_SUB_BASE + 0x2038) /* sram???ƼĴ???2????ȫ?Ĵ????? */
#define M3_SUB_SC_SRAM_CTRL3_REG             (M3_SUB_BASE + 0x203C) /* sram???ƼĴ???3????ȫ?Ĵ????? */
#define M3_SUB_SC_TIMER_CLKEN_CTRL_REG       (M3_SUB_BASE + 0x2040) /* TIMER??clken???ɿ??ƼĴ??? */
#define M3_SUB_SC_WDOG_CLKEN_CTRL_REG        (M3_SUB_BASE + 0x2050) /* WDOG??clken???ɿ??ƼĴ??? */
#define M3_SUB_SC_USBHOST_CTRL0_REG          (M3_SUB_BASE + 0x2060) /* usb???? */
#define M3_SUB_SC_ISO_EN_TSV_SLLC_SRST_REG   (M3_SUB_BASE + 0x2080) /* IDIE isolation CELLʹ???źţ?TSV_SLLC_IDIE?????���λ???????? */
#define M3_SUB_SC_USBPHY_CTRL0_REG           (M3_SUB_BASE + 0x20A0) /* USBPHY???ƼĴ???0 */
#define M3_SUB_SC_USBPHY_CTRL1_REG           (M3_SUB_BASE + 0x20A4) /* USBPHY???ƼĴ???1 */
#define M3_SUB_SC_M3_CTRL0_REG               (M3_SUB_BASE + 0x20B0) /* M3???ƼĴ???0 */
#define M3_SUB_SC_M3_CTRL1_REG               (M3_SUB_BASE + 0x20B4) /* M3???ƼĴ???1 */
#define M3_SUB_SC_VMID_CTRL0_REG             (M3_SUB_BASE + 0x20E0) /* m3 vmid???? */
#define M3_SUB_SC_VMID_CTRL1_REG             (M3_SUB_BASE + 0x20E4) /* usb vmid???? */
#define M3_SUB_SC_I2C_M_VMID_REG             (M3_SUB_BASE + 0x20E8) /* i2c_m vmid???? */
#define M3_SUB_SC_M3_REMAP_ADDR_EN_REG       (M3_SUB_BASE + 0x2180) /* m3??ַӳ??ʹ?? */
#define M3_SUB_SC_M3_REMAP_ADDR_0_SECURE_REG (M3_SUB_BASE + 0x2190) /* ??һ?Ĵ??????????? */
#define M3_SUB_SC_M3_REMAP_ADDR_0_REG        (M3_SUB_BASE + 0x2194) /* M3 remap??spi flash?Ļ???ַ???? */
#define M3_SUB_SC_M3_REMAP_ADDR_1_REG        (M3_SUB_BASE + 0x2198) /* M3 remap??sram?Ļ???ַ???? */
#define M3_SUB_SC_M3_REMAP_ADDR_2_REG        (M3_SUB_BASE + 0x219C) /* M3??ַ??ӳ???Ĵ??? */
#define M3_SUB_SC_M3_REMAP_ADDR_3_REG        (M3_SUB_BASE + 0x21A0) /* M3??ַ??ӳ???Ĵ??? */
#define M3_SUB_SC_M3_REMAP_ADDR_4_REG        (M3_SUB_BASE + 0x21A4) /* M3??ַ??ӳ???Ĵ??? */
#define M3_SUB_SC_M3_REMAP_ADDR_5_REG        (M3_SUB_BASE + 0x21A8) /* M3??ַ??ӳ???Ĵ??? */
#define M3_SUB_SC_M3_REMAP_ADDR_6_REG        (M3_SUB_BASE + 0x21AC) /* M3??ַ??ӳ???Ĵ??? */
#define M3_SUB_SC_M3_REMAP_ADDR_7_REG        (M3_SUB_BASE + 0x21B0) /* M3??ַ??ӳ???Ĵ??? */
#define M3_SUB_SC_M3_REMAP_ADDR_8_REG        (M3_SUB_BASE + 0x21B4) /* M3??ַ??ӳ???Ĵ??? */
#define M3_SUB_SC_M3_REMAP_ADDR_9_REG        (M3_SUB_BASE + 0x21B8) /* M3??ַ??ӳ???Ĵ??? */
#define M3_SUB_SC_M3_REMAP_ADDR_10_REG       (M3_SUB_BASE + 0x21BC) /* M3??ַ??ӳ???Ĵ??? */
#define M3_SUB_SC_M3_REMAP_ADDR_11_REG       (M3_SUB_BASE + 0x21C0) /* M3??ַ??ӳ???Ĵ??? */
#define M3_SUB_SC_M3_REMAP_ADDR_12_REG       (M3_SUB_BASE + 0x21C4) /* M3??ַ??ӳ???Ĵ??? */
#define M3_SUB_SC_M3_REMAP_ADDR_13_REG       (M3_SUB_BASE + 0x21C8) /* M3??ַ??ӳ???Ĵ??? */
#define M3_SUB_SC_M3_REMAP_ADDR_14_REG       (M3_SUB_BASE + 0x21CC) /* M3??ַ??ӳ???Ĵ??? */
#define M3_SUB_SC_M3_REMAP_ADDR_15_REG       (M3_SUB_BASE + 0x21D0) /* M3??ַ??ӳ???Ĵ??? */
#define M3_SUB_SC_ITS_M3_INT_MUX_SEL_REG     (M3_SUB_BASE + 0x21F0) /* ???ж??͵?ITS????M3????MUXѡ?? */
#define M3_SUB_SC_FTE_MUX_CTRL_REG           (M3_SUB_BASE + 0x2200) /* FTE????ѡ???Ĵ??? */
#define M3_SUB_SC_PM_CTRL0_REG               (M3_SUB_BASE + 0x2380) /* PW_STAT_CTRL?Ŀ??ƼĴ??? */
#define M3_SUB_SC_PM_CTRL1_REG               (M3_SUB_BASE + 0x2384) /* PW_STAT_CTRL?Ŀ??ƼĴ??? */
#define M3_SUB_SC_PM_CTRL2_REG               (M3_SUB_BASE + 0x2388) /* PW_STAT_CTRL?Ŀ??ƼĴ??? */
#define M3_SUB_SC_PM_INT_REG                 (M3_SUB_BASE + 0x238C) /* PW_STAT_CTRL???ж?Դ?Ĵ??? */
#define M3_SUB_SC_PM_INT_MASK_REG            (M3_SUB_BASE + 0x2390) /* PW_STAT_CTRL???ж??��μĴ??? */
#define M3_SUB_SC_PM_CTRL3_REG               (M3_SUB_BASE + 0x2394) /* ???ƹܽ?PM_CTL */
#define M3_SUB_SC_PM_ST_REG                  (M3_SUB_BASE + 0x2398) /* ?ϵ縴λָʾ״̬?ź? */
#define M3_SUB_SC_BISR_RE_REPAIR_EN_REG      (M3_SUB_BASE + 0x2D80) /* BISR??RE REPAIRʹ?ܼĴ??? */
#define M3_SUB_SC_BISR_INT_REG               (M3_SUB_BASE + 0x2D90) /* BISR_TOP_IDIE???ж?Դ?Ĵ??? */
#define M3_SUB_SC_BISR_INT_MASK_REG          (M3_SUB_BASE + 0x2DA0) /* BISR_TOP_IDIE???ж??��μĴ??? */
#define M3_SUB_SC_USB_EHCI_ADDR_H_REG        (M3_SUB_BASE + 0x2E0C) /* M3ָ??ͨ?��?32λ??ַ?????Ĵ??? */
#define M3_SUB_SC_USB_OHCI_ADDR_H_REG        (M3_SUB_BASE + 0x2E10) /* M3????ͨ?��?32λ??ַ?????Ĵ??? */
#define M3_SUB_SC_I2C_M_ADDR_H_REG           (M3_SUB_BASE + 0x2E14) /* M3????ͨ?��?32λ??ַ?????Ĵ??? */
#define M3_SUB_SC_SMMU_MEM_CTRL0_REG         (M3_SUB_BASE + 0x3000) /* smmu mem???ƼĴ???0 */
#define M3_SUB_SC_SMMU_MEM_CTRL1_REG         (M3_SUB_BASE + 0x3004) /* smmu mem???ƼĴ???1 */
#define M3_SUB_SC_SMMU_MEM_CTRL2_REG         (M3_SUB_BASE + 0x3008) /* smmu mem???ƼĴ???2 */
#define M3_SUB_SC_SRAM_MEM_CTRL_REG          (M3_SUB_BASE + 0x3020) /* sram mem???ƼĴ??? */
#define M3_SUB_SC_SFC_MEM_CTRL_REG           (M3_SUB_BASE + 0x3030) /* sfc mem???ƼĴ??? */
#define M3_SUB_SC_SEC_MEM_CTRL_REG           (M3_SUB_BASE + 0x3070) /* sec mem???ƼĴ??? */
#define M3_SUB_SC_WDG_CLK_ST_REG             (M3_SUB_BASE + 0x5300) /* WDGʱ??״̬?Ĵ??? */
#define M3_SUB_SC_TIMER_CLK_ST_REG           (M3_SUB_BASE + 0x5304) /* TIMERʱ??״̬?Ĵ??? */
#define M3_SUB_SC_UART_CLK_ST_REG            (M3_SUB_BASE + 0x5308) /* UARTʱ??״̬?Ĵ??? */
#define M3_SUB_SC_ITS_CLK_ST_REG             (M3_SUB_BASE + 0x530C) /* ITSʱ??״̬?Ĵ??? */
#define M3_SUB_SC_IPCM_CLK_ST_REG            (M3_SUB_BASE + 0x5310) /* IPCMʱ??״̬?Ĵ??? */
#define M3_SUB_SC_SRAM_CLK_ST_REG            (M3_SUB_BASE + 0x5314) /* SRAMʱ??״̬?Ĵ??? */
#define M3_SUB_SC_SFC_CLK_ST_REG             (M3_SUB_BASE + 0x5318) /* SFCʱ??״̬?Ĵ??? */
#define M3_SUB_SC_I2CM_CLK_ST_REG            (M3_SUB_BASE + 0x531C) /* I2CMʱ??״̬?Ĵ??? */
#define M3_SUB_SC_I2C_CLK_ST_REG             (M3_SUB_BASE + 0x5320) /* I2Cʱ??״̬?Ĵ??? */
#define M3_SUB_SC_GPIO_CLK_ST_REG            (M3_SUB_BASE + 0x5324) /* GPIOʱ??״̬?Ĵ??? */
#define M3_SUB_SC_CPU_CLK_ST_REG             (M3_SUB_BASE + 0x5328) /* M3 CPUʱ??״̬?Ĵ??? */
#define M3_SUB_SC_USB_CLK_ST_REG             (M3_SUB_BASE + 0x5334) /* USBʱ??״̬?Ĵ??? */
#define M3_SUB_SC_SPI_CLK_ST_REG             (M3_SUB_BASE + 0x5344) /* SPIʱ??״̬?Ĵ??? */
#define M3_SUB_SC_SEC_CLK_ST_REG             (M3_SUB_BASE + 0x535C) /* SECʱ??״̬?Ĵ??? */
#define M3_SUB_SC_WDG_RESET_ST_REG           (M3_SUB_BASE + 0x5A00) /* WDG??λ״̬?Ĵ??? */
#define M3_SUB_SC_TIMER_RESET_ST_REG         (M3_SUB_BASE + 0x5A04) /* TIMER??λ״̬?Ĵ??? */
#define M3_SUB_SC_UART_RESET_ST_REG          (M3_SUB_BASE + 0x5A08) /* UART??λ״̬?Ĵ??? */
#define M3_SUB_SC_ITS_RESET_ST_REG           (M3_SUB_BASE + 0x5A0C) /* ITS??λ״̬?Ĵ??? */
#define M3_SUB_SC_IPCM_RESET_ST_REG          (M3_SUB_BASE + 0x5A10) /* IPCM??λ״̬?Ĵ??? */
#define M3_SUB_SC_SRAM_RESET_ST_REG          (M3_SUB_BASE + 0x5A14) /* SRAM??λ״̬?Ĵ??? */
#define M3_SUB_SC_SFC_RESET_ST_REG           (M3_SUB_BASE + 0x5A18) /* SFC??λ״̬?Ĵ??? */
#define M3_SUB_SC_I2CM_RESET_ST_REG          (M3_SUB_BASE + 0x5A1C) /* I2CM??λ״̬?Ĵ??? */
#define M3_SUB_SC_I2C_RESET_ST_REG           (M3_SUB_BASE + 0x5A20) /* I2C??λ״̬?Ĵ??? */
#define M3_SUB_SC_GPIO_RESET_ST_REG          (M3_SUB_BASE + 0x5A24) /* GPIO??λ״̬?Ĵ??? */
#define M3_SUB_SC_CPU_RESET_ST_REG           (M3_SUB_BASE + 0x5A28) /* M3 CPU??λ״̬?Ĵ??? */
#define M3_SUB_SC_USB_RESET_ST_REG           (M3_SUB_BASE + 0x5A44) /* USB??λ״̬?Ĵ??? */
#define M3_SUB_SC_SPI_RESET_ST_REG           (M3_SUB_BASE + 0x5A4C) /* SPI??λ״̬?Ĵ??? */
#define M3_SUB_SC_SEC_RESET_ST_REG           (M3_SUB_BASE + 0x5A54) /* SEC??λ״̬?Ĵ??? */
#define M3_SUB_SC_SEC_BUILD_RESET_ST_REG     (M3_SUB_BASE + 0x5A5C) /* SEC BUILD??λ״̬?Ĵ??? */
#define M3_SUB_SC_PW_CTRL_RESET_ST_REG       (M3_SUB_BASE + 0x5A60) /* PW_CTRL??λ״̬?Ĵ??? */
#define M3_SUB_SC_MBIST_CPUI_ENABLE_REG      (M3_SUB_BASE + 0x5C00) /* CPU????MBISTѡ???źţ?оƬ??·????ʹ?á? */
#define M3_SUB_SC_MBIST_CPUI_RESET_N_REG     (M3_SUB_BASE + 0x5C04) /* CPU????MBIST??λ?ź? */
#define M3_SUB_SC_MBIST_CPUI_DATAIN_REG      (M3_SUB_BASE + 0x5C08) /* CPU????MBIST??TMB??·???ݺ?ָ???????ӿڼĴ??? */
#define M3_SUB_SC_MBIST_CPUI_WRITE_EN_REG    (M3_SUB_BASE + 0x5C0C) /* DFT MBISTģʽ??TMB??·CPU2TAP?ӿ????üĴ?????оƬ??·????ʹ?á? */
#define M3_SUB_SC_SRAM_ST0_REG               (M3_SUB_BASE + 0x6000) /* sram״̬?Ĵ???0 */
#define M3_SUB_SC_SRAM_ST1_REG               (M3_SUB_BASE + 0x6004) /* sram״̬?Ĵ???1 */
#define M3_SUB_SC_SRAM_ST2_REG               (M3_SUB_BASE + 0x6008) /* sram״̬?Ĵ???2 */
#define M3_SUB_SC_SRAM_ST3_REG               (M3_SUB_BASE + 0x600C) /* sram״̬?Ĵ???3 */
#define M3_SUB_SC_SRAM_ST4_REG               (M3_SUB_BASE + 0x6010) /* sram״̬?Ĵ???4 */
#define M3_SUB_SC_SRAM_ST5_REG               (M3_SUB_BASE + 0x6014) /* sram״̬?Ĵ???5 */
#define M3_SUB_SC_M3_STAT_REG                (M3_SUB_BASE + 0x6100)
#define M3_SUB_SC_PM_ST0_REG                 (M3_SUB_BASE + 0x6380) /* PW_STAT_CTRL???ڲ?״̬ */
#define M3_SUB_SC_PM_ST1_REG                 (M3_SUB_BASE + 0x6384) /* ��?Թܽŵ?PWRGD״̬ */
#define M3_SUB_SC_PM_ST2_REG                 (M3_SUB_BASE + 0x6388) /* ???????ܽŵ?PWR_CTRL2~0 */
#define M3_SUB_SC_PM_ST3_REG                 (M3_SUB_BASE + 0x638C) /* ME???عܽ?״̬ */
#define M3_SUB_SC_DBG_AUTH_CTRL_REG          (M3_SUB_BASE + 0x6700) /* ??ȫ?ȼ???Ȩ???ƼĴ??����?ע?⣺1???˼Ĵ????ռ??????ǰ?ȫ???ʲ??ܳɹ???2??Ĭ?Ͼ??Ǵ򿪵???ģʽ????©??????????????ʱ????ʼ???رյ??Թ??ܣ? */
#define M3_SUB_SC_ECO_RSV0_REG               (M3_SUB_BASE + 0x8000) /* ECO ?Ĵ???0 */
#define M3_SUB_SC_ECO_RSV1_REG               (M3_SUB_BASE + 0x8004) /* ECO ?Ĵ???1 */
#define M3_SUB_SC_ECO_RSV2_REG               (M3_SUB_BASE + 0x8008) /* ECO ?Ĵ???2 */
#define M3_SUB_SC_MBIST_CPUI_DATAOUT_REG     (M3_SUB_BASE + 0xDC00) /* DFT MBISTģʽ?¶????ݼĴ??? */
#define M3_SUB_SC_DIE_ID7_REG                (M3_SUB_BASE + 0xE004) /* DIE ID ?Ĵ???bit[255:224]?? */
#define M3_SUB_SC_DIE_ID6_REG                (M3_SUB_BASE + 0xE008) /* DIE ID ?Ĵ???bit[223:192]?? */
#define M3_SUB_SC_DIE_ID5_REG                (M3_SUB_BASE + 0xE00C) /* DIE ID ?Ĵ???bit[191:160]?? */
#define M3_SUB_SC_DIE_ID4_REG                (M3_SUB_BASE + 0xE010) /* DIE ID ?Ĵ???bit[159:128]?? */
#define M3_SUB_SC_DIE_ID3_REG                (M3_SUB_BASE + 0xE014) /* DIE ID ?Ĵ???bit[127:96]?? */
#define M3_SUB_SC_DIE_ID2_REG                (M3_SUB_BASE + 0xE018) /* DIE ID ?Ĵ???bit[95:64]?? */
#define M3_SUB_SC_DIE_ID1_REG                (M3_SUB_BASE + 0xE01C) /* DIE ID ?Ĵ???bit[63:32]?? */
#define M3_SUB_SC_DIE_ID0_REG                (M3_SUB_BASE + 0xE020) /* DIE ID ?Ĵ???bit[31:0]?? */
#define M3_SUB_SC_BOOT_CTRL_ST_REG           (M3_SUB_BASE + 0xE084) /* SC_BOOT_CTRL_ST??ʾCPU?����??Ƶ?PAD??eFuse?ź?״̬ */
#define M3_SUB_SC_EFUSE_RD_ADDR_REG          (M3_SUB_BASE + 0xE100) /* ??DIEIDʱ???õ?ַ????ȫ?Ĵ????? */
#define M3_SUB_SC_EFUSE_RD_DATA_REG          (M3_SUB_BASE + 0xE180) /* ??DIEIDʱ?õ??????ݣ???ȫ?Ĵ????? */


#if(ENDNESS == ENDNESS_BIG)

/* Define the union U_SC_WDG_CLK_EN_U */
/* WDGʱ??ʹ?ܼĴ??? */
/* 0x300 */
typedef union tagScWdgClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_wdg_enb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_WDG_CLK_EN_U;

/* Define the union U_SC_WDG_CLK_DIS_U */
/* WDGʱ?ӽ?ֹ?Ĵ??? */
/* 0x304 */
typedef union tagScWdgClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_wdg_dsb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_WDG_CLK_DIS_U;

/* Define the union U_SC_TIMER_CLK_EN_U */
/* TIMERʱ??ʹ?ܼĴ??? */
/* 0x308 */
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
/* 0x30C */
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

/* Define the union U_SC_UART_CLK_EN_U */
/* UARTʱ??ʹ?ܼĴ??? */
/* 0x310 */
typedef union tagScUartClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    clk_uart1_enb         : 1   ; /* [1]  */
        unsigned int    clk_uart0_enb         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_UART_CLK_EN_U;

/* Define the union U_SC_UART_CLK_DIS_U */
/* UARTʱ?ӽ?ֹ?Ĵ??? */
/* 0x314 */
typedef union tagScUartClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    clk_uart1_dsb         : 1   ; /* [1]  */
        unsigned int    clk_uart0_dsb         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_UART_CLK_DIS_U;

/* Define the union U_SC_ITS_CLK_EN_U */
/* ITSʱ??ʹ?ܼĴ??? */
/* 0x318 */
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
/* ITSʱ?ӽ?ֹ?Ĵ??? */
/* 0x31C */
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

/* Define the union U_SC_IPCM_CLK_EN_U */
/* IPCMʱ??ʹ?ܼĴ??? */
/* 0x320 */
typedef union tagScIpcmClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_ipcm_enb          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_IPCM_CLK_EN_U;

/* Define the union U_SC_IPCM_CLK_DIS_U */
/* IPCMʱ?ӽ?ֹ?Ĵ??? */
/* 0x324 */
typedef union tagScIpcmClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_ipcm_dsb          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_IPCM_CLK_DIS_U;

/* Define the union U_SC_SRAM_CLK_EN_U */
/* SRAMʱ??ʹ?ܼĴ??? */
/* 0x328 */
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
/* 0x32C */
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

/* Define the union U_SC_SFC_CLK_EN_U */
/* SFCʱ??ʹ?ܼĴ??? */
/* 0x330 */
typedef union tagScSfcClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    clk_sfc_bus_enb       : 1   ; /* [1]  */
        unsigned int    clk_sfc_enb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SFC_CLK_EN_U;

/* Define the union U_SC_SFC_CLK_DIS_U */
/* SFCʱ?ӽ?ֹ?Ĵ??? */
/* 0x334 */
typedef union tagScSfcClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    clk_sfc_bus_dsb       : 1   ; /* [1]  */
        unsigned int    clk_sfc_dsb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SFC_CLK_DIS_U;

/* Define the union U_SC_I2CM_CLK_EN_U */
/* I2CMʱ??ʹ?ܼĴ??? */
/* 0x338 */
typedef union tagScI2cmClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_i2c_m_enb         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2CM_CLK_EN_U;

/* Define the union U_SC_I2CM_CLK_DIS_U */
/* I2CMʱ?ӽ?ֹ?Ĵ??? */
/* 0x33C */
typedef union tagScI2cmClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_i2c_m_dsb         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2CM_CLK_DIS_U;

/* Define the union U_SC_I2C_CLK_EN_U */
/* I2Cʱ??ʹ?ܼĴ??? */
/* 0x340 */
typedef union tagScI2cClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
        unsigned int    clk_i2c2_enb          : 1   ; /* [2]  */
        unsigned int    clk_i2c1_enb          : 1   ; /* [1]  */
        unsigned int    clk_i2c0_enb          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2C_CLK_EN_U;

/* Define the union U_SC_I2C_CLK_DIS_U */
/* I2Cʱ?ӽ?ֹ?Ĵ??? */
/* 0x344 */
typedef union tagScI2cClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
        unsigned int    clk_i2c2_dsb          : 1   ; /* [2]  */
        unsigned int    clk_i2c1_dsb          : 1   ; /* [1]  */
        unsigned int    clk_i2c0_dsb          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2C_CLK_DIS_U;

/* Define the union U_SC_GPIO_CLK_EN_U */
/* GPIOʱ??ʹ?ܼĴ??? */
/* 0x348 */
typedef union tagScGpioClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
        unsigned int    clk_gpio4_enb         : 1   ; /* [4]  */
        unsigned int    clk_gpio3_enb         : 1   ; /* [3]  */
        unsigned int    clk_gpio2_enb         : 1   ; /* [2]  */
        unsigned int    clk_gpio1_enb         : 1   ; /* [1]  */
        unsigned int    clk_gpio0_enb         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_CLK_EN_U;

/* Define the union U_SC_GPIO_CLK_DIS_U */
/* GPIOʱ?ӽ?ֹ?Ĵ??? */
/* 0x34C */
typedef union tagScGpioClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
        unsigned int    clk_gpio4_dsb         : 1   ; /* [4]  */
        unsigned int    clk_gpio3_dsb         : 1   ; /* [3]  */
        unsigned int    clk_gpio2_dsb         : 1   ; /* [2]  */
        unsigned int    clk_gpio1_dsb         : 1   ; /* [1]  */
        unsigned int    clk_gpio0_dsb         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_CLK_DIS_U;

/* Define the union U_SC_CPU_CLK_EN_U */
/* M3 CPUʱ??ʹ?ܼĴ??? */
/* 0x350 */
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
/* M3 CPUʱ?ӽ?ֹ?Ĵ??? */
/* 0x354 */
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

/* Define the union U_SC_USB_CLK_EN_U */
/* USBʱ??ʹ?ܼĴ??? */
/* 0x368 */
typedef union tagScUsbClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
        unsigned int    clk_usb_ohci_12m_enb  : 1   ; /* [3]  */
        unsigned int    clk_usb_ohci_48m_enb  : 1   ; /* [2]  */
        unsigned int    clk_usb_phy_core_enb  : 1   ; /* [1]  */
        unsigned int    clk_usb_ahb_enb       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_USB_CLK_EN_U;

/* Define the union U_SC_USB_CLK_DIS_U */
/* USBʱ?ӽ?ֹ?Ĵ??? */
/* 0x36C */
typedef union tagScUsbClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
        unsigned int    clk_usb_ohci_12m_dsb  : 1   ; /* [3]  */
        unsigned int    clk_usb_ohci_48m_dsb  : 1   ; /* [2]  */
        unsigned int    clk_usb_phy_core_dsb  : 1   ; /* [1]  */
        unsigned int    clk_usb_ahb_dsb       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_USB_CLK_DIS_U;

/* Define the union U_SC_SPI_CLK_EN_U */
/* spiʱ??ʹ?ܼĴ??? */
/* 0x388 */
typedef union tagScSpiClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_spi_enb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SPI_CLK_EN_U;

/* Define the union U_SC_SPI_CLK_DIS_U */
/* spiʱ?ӽ?ֹ?Ĵ??? */
/* 0x38C */
typedef union tagScSpiClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_spi_dsb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SPI_CLK_DIS_U;

/* Define the union U_SC_SEC_CLK_EN_U */
/* SECʱ??ʹ?ܼĴ??? */
/* 0x3B8 */
typedef union tagScSecClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
        unsigned int    clk_sec_trace_dbg_enb : 1   ; /* [2]  */
        unsigned int    clk_sec_ahb_enb       : 1   ; /* [1]  */
        unsigned int    clk_sec_enb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_CLK_EN_U;

/* Define the union U_SC_SEC_CLK_DIS_U */
/* SECʱ?ӽ?ֹ?Ĵ??? */
/* 0x3BC */
typedef union tagScSecClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
        unsigned int    clk_sec_trace_dbg_dsb : 1   ; /* [2]  */
        unsigned int    clk_sec_ahb_dsb       : 1   ; /* [1]  */
        unsigned int    clk_sec_dsb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_CLK_DIS_U;

/* Define the union U_SC_WDG_RESET_REQ_U */
/* WDG?���λ???????ƼĴ??? */
/* 0xA00 */
typedef union tagScWdgResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    wdg_srst_req          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_WDG_RESET_REQ_U;

/* Define the union U_SC_WDG_RESET_DREQ_U */
/* WDG?���λȥ???????ƼĴ??? */
/* 0xA04 */
typedef union tagScWdgResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    wdg_srst_dreq         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_WDG_RESET_DREQ_U;

/* Define the union U_SC_TIMER_RESET_REQ_U */
/* TIMER?���λ???????ƼĴ??? */
/* 0xA08 */
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
/* 0xA0C */
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

/* Define the union U_SC_UART_RESET_REQ_U */
/* UART?���λ???????ƼĴ??? */
/* 0xA10 */
typedef union tagScUartResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    uart1_srst_req        : 1   ; /* [1]  */
        unsigned int    uart0_srst_req        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_UART_RESET_REQ_U;

/* Define the union U_SC_UART_RESET_DREQ_U */
/* UART?���λȥ???????ƼĴ??? */
/* 0xA14 */
typedef union tagScUartResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    uart1_srst_dreq       : 1   ; /* [1]  */
        unsigned int    uart0_srst_dreq       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_UART_RESET_DREQ_U;

/* Define the union U_SC_ITS_RESET_REQ_U */
/* ITS?���λ???????ƼĴ??? */
/* 0xA18 */
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
/* 0xA1C */
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

/* Define the union U_SC_IPCM_RESET_REQ_U */
/* IPCM?���λ???????ƼĴ??? */
/* 0xA20 */
typedef union tagScIpcmResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    ipcm_srst_req         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_IPCM_RESET_REQ_U;

/* Define the union U_SC_IPCM_RESET_DREQ_U */
/* IPCM?���λȥ???????ƼĴ??? */
/* 0xA24 */
typedef union tagScIpcmResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    ipcm_srst_dreq        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_IPCM_RESET_DREQ_U;

/* Define the union U_SC_SRAM_RESET_REQ_U */
/* SRAM?���λ???????ƼĴ??? */
/* 0xA28 */
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
/* 0xA2C */
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

/* Define the union U_SC_SFC_RESET_REQ_U */
/* SFC?���λ???????ƼĴ??? */
/* 0xA30 */
typedef union tagScSfcResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    sfc_bus_srst_req      : 1   ; /* [1]  */
        unsigned int    sfc_srst_req          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SFC_RESET_REQ_U;

/* Define the union U_SC_SFC_RESET_DREQ_U */
/* SFC?���λȥ???????ƼĴ??? */
/* 0xA34 */
typedef union tagScSfcResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    sfc_bus_srst_dreq     : 1   ; /* [1]  */
        unsigned int    sfc_srst_dreq         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SFC_RESET_DREQ_U;

/* Define the union U_SC_I2CM_RESET_REQ_U */
/* I2CM?���λ???????ƼĴ??? */
/* 0xA38 */
typedef union tagScI2cmResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    i2c_m_srst_req        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2CM_RESET_REQ_U;

/* Define the union U_SC_I2CM_RESET_DREQ_U */
/* I2CM?���λȥ???????ƼĴ??? */
/* 0xA3C */
typedef union tagScI2cmResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    i2c_m_srst_dreq       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2CM_RESET_DREQ_U;

/* Define the union U_SC_I2C_RESET_REQ_U */
/* I2C?���λ???????ƼĴ??? */
/* 0xA40 */
typedef union tagScI2cResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
        unsigned int    i2c2_srst_req         : 1   ; /* [2]  */
        unsigned int    i2c1_srst_req         : 1   ; /* [1]  */
        unsigned int    i2c0_srst_req         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2C_RESET_REQ_U;

/* Define the union U_SC_I2C_RESET_DREQ_U */
/* I2C?���λȥ???????ƼĴ??? */
/* 0xA44 */
typedef union tagScI2cResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
        unsigned int    i2c2_srst_dreq        : 1   ; /* [2]  */
        unsigned int    i2c1_srst_dreq        : 1   ; /* [1]  */
        unsigned int    i2c0_srst_dreq        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2C_RESET_DREQ_U;

/* Define the union U_SC_GPIO_RESET_REQ_U */
/* GPIO?���λ???????ƼĴ??? */
/* 0xA48 */
typedef union tagScGpioResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
        unsigned int    gpio4_srst_req        : 1   ; /* [4]  */
        unsigned int    gpio3_srst_req        : 1   ; /* [3]  */
        unsigned int    gpio2_srst_req        : 1   ; /* [2]  */
        unsigned int    gpio1_srst_req        : 1   ; /* [1]  */
        unsigned int    gpio0_srst_req        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_RESET_REQ_U;

/* Define the union U_SC_GPIO_RESET_DREQ_U */
/* GPIO?���λȥ???????ƼĴ??? */
/* 0xA4C */
typedef union tagScGpioResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
        unsigned int    gpio4_srst_dreq       : 1   ; /* [4]  */
        unsigned int    gpio3_srst_dreq       : 1   ; /* [3]  */
        unsigned int    gpio2_srst_dreq       : 1   ; /* [2]  */
        unsigned int    gpio1_srst_dreq       : 1   ; /* [1]  */
        unsigned int    gpio0_srst_dreq       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_RESET_DREQ_U;

/* Define the union U_SC_CPU_RESET_REQ_U */
/* M3 CPU?���λ???????ƼĴ??? */
/* 0xA50 */
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
/* M3 CPU?���λȥ???????ƼĴ??? */
/* 0xA54 */
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

/* Define the union U_SC_USB_RESET_REQ_U */
/* USB?���λ???????ƼĴ??? */
/* 0xA88 */
typedef union tagScUsbResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
        unsigned int    usbhost_phy0_por_srst_req : 1   ; /* [4]  */
        unsigned int    usbhost_phy0_port_srst_req : 1   ; /* [3]  */
        unsigned int    usbhost_ahb_srst_req  : 1   ; /* [2]  */
        unsigned int    usbhost_phy0_srst_req : 1   ; /* [1]  */
        unsigned int    usbhost_utmi0_srst_req : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_USB_RESET_REQ_U;

/* Define the union U_SC_USB_RESET_DREQ_U */
/* USB?���λȥ???????ƼĴ??? */
/* 0xA8C */
typedef union tagScUsbResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
        unsigned int    usbhost_phy0_por_srst_dreq : 1   ; /* [4]  */
        unsigned int    usbhost_phy0_port_srst_dreq : 1   ; /* [3]  */
        unsigned int    usbhost_ahb_srst_dreq : 1   ; /* [2]  */
        unsigned int    usbhost_phy0_srst_dreq : 1   ; /* [1]  */
        unsigned int    usbhost_utmi0_srst_dreq : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_USB_RESET_DREQ_U;

/* Define the union U_SC_SPI_RESET_REQ_U */
/* SPI?���λ???????ƼĴ??? */
/* 0xA98 */
typedef union tagScSpiResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    spi_srst_req          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SPI_RESET_REQ_U;

/* Define the union U_SC_SPI_RESET_DREQ_U */
/* SPI?���λȥ???????ƼĴ??? */
/* 0xA9C */
typedef union tagScSpiResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    spi_srst_dreq         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SPI_RESET_DREQ_U;

/* Define the union U_SC_SEC_RESET_REQ_U */
/* SEC?���λ???????ƼĴ??? */
/* 0xAA8 */
typedef union tagScSecResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    sec_srst_req          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_RESET_REQ_U;

/* Define the union U_SC_SEC_RESET_DREQ_U */
/* SEC?���λȥ???????ƼĴ??? */
/* 0xAAC */
typedef union tagScSecResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    sec_srst_dreq         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_RESET_DREQ_U;

/* Define the union U_SC_SEC_BUILD_RESET_REQ_U */
/* SEC BUILD?���λ???????ƼĴ??? */
/* 0xAB8 */
typedef union tagScSecBuildResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 11  ; /* [31..21]  */
        unsigned int    sec_ahb_srst_req      : 1   ; /* [20]  */
        unsigned int    sec_build_ahb_srst_req7 : 1   ; /* [19]  */
        unsigned int    sec_build_srst_req7   : 1   ; /* [18]  */
        unsigned int    sec_build_ahb_srst_req6 : 1   ; /* [17]  */
        unsigned int    sec_build_srst_req6   : 1   ; /* [16]  */
        unsigned int    sec_build_ahb_srst_req5 : 1   ; /* [15]  */
        unsigned int    sec_build_srst_req5   : 1   ; /* [14]  */
        unsigned int    sec_build_ahb_srst_req4 : 1   ; /* [13]  */
        unsigned int    sec_build_srst_req4   : 1   ; /* [12]  */
        unsigned int    sec_cluster1_ahb_srst_req : 1   ; /* [11]  */
        unsigned int    sec_cluster1_srst_req : 1   ; /* [10]  */
        unsigned int    sec_build_ahb_srst_req3 : 1   ; /* [9]  */
        unsigned int    sec_build_srst_req3   : 1   ; /* [8]  */
        unsigned int    sec_build_ahb_srst_req2 : 1   ; /* [7]  */
        unsigned int    sec_build_srst_req2   : 1   ; /* [6]  */
        unsigned int    sec_build_ahb_srst_req1 : 1   ; /* [5]  */
        unsigned int    sec_build_srst_req1   : 1   ; /* [4]  */
        unsigned int    sec_build_ahb_srst_req0 : 1   ; /* [3]  */
        unsigned int    sec_build_srst_req0   : 1   ; /* [2]  */
        unsigned int    sec_cluster0_ahb_srst_req : 1   ; /* [1]  */
        unsigned int    sec_cluster0_srst_req : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_BUILD_RESET_REQ_U;

/* Define the union U_SC_SEC_BUILD_RESET_DREQ_U */
/* SEC BUILD?���λȥ???????ƼĴ??? */
/* 0xABC */
typedef union tagScSecBuildResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 11  ; /* [31..21]  */
        unsigned int    sec_ahb_srst_dreq     : 1   ; /* [20]  */
        unsigned int    sec_build_ahb_srst_dreq7 : 1   ; /* [19]  */
        unsigned int    sec_build_srst_dreq7  : 1   ; /* [18]  */
        unsigned int    sec_build_ahb_srst_dreq6 : 1   ; /* [17]  */
        unsigned int    sec_build_srst_dreq6  : 1   ; /* [16]  */
        unsigned int    sec_build_ahb_srst_dreq5 : 1   ; /* [15]  */
        unsigned int    sec_build_srst_dreq5  : 1   ; /* [14]  */
        unsigned int    sec_build_ahb_srst_dreq4 : 1   ; /* [13]  */
        unsigned int    sec_build_srst_dreq4  : 1   ; /* [12]  */
        unsigned int    sec_cluster1_ahb_srst_dreq : 1   ; /* [11]  */
        unsigned int    sec_cluster1_srst_dreq : 1   ; /* [10]  */
        unsigned int    sec_build_ahb_srst_dreq3 : 1   ; /* [9]  */
        unsigned int    sec_build_srst_dreq3  : 1   ; /* [8]  */
        unsigned int    sec_build_ahb_srst_dreq2 : 1   ; /* [7]  */
        unsigned int    sec_build_srst_dreq2  : 1   ; /* [6]  */
        unsigned int    sec_build_ahb_srst_dreq1 : 1   ; /* [5]  */
        unsigned int    sec_build_srst_dreq1  : 1   ; /* [4]  */
        unsigned int    sec_build_ahb_srst_dreq0 : 1   ; /* [3]  */
        unsigned int    sec_build_srst_dreq0  : 1   ; /* [2]  */
        unsigned int    sec_cluster0_ahb_srst_dreq : 1   ; /* [1]  */
        unsigned int    sec_cluster0_srst_dreq : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_BUILD_RESET_DREQ_U;

/* Define the union U_SC_PW_CTRL_RESET_REQ_U */
/* PW_CTRL?���λ???????ƼĴ??? */
/* 0xAC0 */
typedef union tagScPwCtrlResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    pw_ctrl_srst_req      : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PW_CTRL_RESET_REQ_U;

/* Define the union U_SC_PW_CTRL_RESET_DREQ_U */
/* PW_CTRL?���λȥ???????ƼĴ??? */
/* 0xAC4 */
typedef union tagScPwCtrlResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    pw_ctrl_srst_dreq     : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PW_CTRL_RESET_DREQ_U;

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

/* Define the union U_SC_EXTINT_CTRL_U */
/* ?ⲿ?жϼ??????üĴ??? */
/* 0x2000 */
typedef union tagScExtintCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
        unsigned int    ext_int2_polarity     : 1   ; /* [2]  */
        unsigned int    ext_int1_polarity     : 1   ; /* [1]  */
        unsigned int    ext_int0_polarity     : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_EXTINT_CTRL_U;

/* Define the union U_SC_SPI_CTRL_U */
/* spi???ƼĴ??? */
/* 0x2020 */
typedef union tagScSpiCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
        unsigned int    spi_ss_in_n           : 1   ; /* [6]  */
        unsigned int    spi_rcv_only          : 1   ; /* [5]  */
        unsigned int    spi_cs_polarity3      : 1   ; /* [4]  */
        unsigned int    spi_cs_polarity2      : 1   ; /* [3]  */
        unsigned int    spi_cs_polarity1      : 1   ; /* [2]  */
        unsigned int    spi_cs_polarity0      : 1   ; /* [1]  */
        unsigned int    spi_wire_mode         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SPI_CTRL_U;

/* Define the union U_SC_I2C_CTRL_U */
/* i2c???ƼĴ??? */
/* 0x2024 */
typedef union tagScI2cCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 14  ; /* [31..18]  */
        unsigned int    i2c2_sda_cfg          : 1   ; /* [17]  */
        unsigned int    i2c2_dat_oe_cfg       : 1   ; /* [16]  */
        unsigned int    i2c2_dat_mux_sel      : 1   ; /* [15]  */
        unsigned int    i2c2_scl_cfg          : 1   ; /* [14]  */
        unsigned int    i2c2_clk_oe_cfg       : 1   ; /* [13]  */
        unsigned int    i2c2_clk_mux_sel      : 1   ; /* [12]  */
        unsigned int    i2c1_sda_cfg          : 1   ; /* [11]  */
        unsigned int    i2c1_dat_oe_cfg       : 1   ; /* [10]  */
        unsigned int    i2c1_dat_mux_sel      : 1   ; /* [9]  */
        unsigned int    i2c1_scl_cfg          : 1   ; /* [8]  */
        unsigned int    i2c1_clk_oe_cfg       : 1   ; /* [7]  */
        unsigned int    i2c1_clk_mux_sel      : 1   ; /* [6]  */
        unsigned int    i2c0_sda_cfg          : 1   ; /* [5]  */
        unsigned int    i2c0_dat_oe_cfg       : 1   ; /* [4]  */
        unsigned int    i2c0_dat_mux_sel      : 1   ; /* [3]  */
        unsigned int    i2c0_scl_cfg          : 1   ; /* [2]  */
        unsigned int    i2c0_clk_oe_cfg       : 1   ; /* [1]  */
        unsigned int    i2c0_clk_mux_sel      : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2C_CTRL_U;

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

/* Define the union U_SC_SRAM_CTRL1_U */
/* sram???ƼĴ???1????ȫ?Ĵ????? */
/* 0x2034 */
typedef union tagScSramCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    sram_prot_ctrl_en     : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_CTRL1_U;

/* Define the union U_SC_TIMER_CLKEN_CTRL_U */
/* TIMER??clken???ɿ??ƼĴ??? */
/* 0x2040 */
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

/* Define the union U_SC_WDOG_CLKEN_CTRL_U */
/* WDOG??clken???ɿ??ƼĴ??? */
/* 0x2050 */
typedef union tagScWdogClkenCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    wdogen0ov             : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_WDOG_CLKEN_CTRL_U;

/* Define the union U_SC_USBHOST_CTRL0_U */
/* usb???? */
/* 0x2060 */
typedef union tagScUsbhostCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
        unsigned int    usbhost_pwr_ctrl      : 10  ; /* [19..10]  */
        unsigned int    usbhost_app_prt_ovrcur_i : 1   ; /* [9]  */
        unsigned int    usbhost_ohci_susp_lgcy_i : 1   ; /* [8]  */
        unsigned int    usbhost_app_start_clk_i : 1   ; /* [7]  */
        unsigned int    usbhost_ss_hubsetup_min_i : 1   ; /* [6]  */
        unsigned int    usbhost_ss_ena_incrx_align_i : 1   ; /* [5]  */
        unsigned int    usbhost_ss_ena_incr4_i : 1   ; /* [4]  */
        unsigned int    usbhost_ss_ena_incr8_i : 1   ; /* [3]  */
        unsigned int    usbhost_ss_ena_incr16_i : 1   ; /* [2]  */
        unsigned int    usbhost_ss_autoppd_on_overcur_en_i : 1   ; /* [1]  */
        unsigned int    usbhost_ss_word_if_i  : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_USBHOST_CTRL0_U;

/* Define the union U_SC_ISO_EN_TSV_SLLC_SRST_U */
/* IDIE isolation CELLʹ???źţ?TSV_SLLC_IDIE?????���λ???????? */
/* 0x2080 */
typedef union tagScIsoEnTsvSllcSrst
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    tsv_sllc_all_srst_req : 1   ; /* [1]  */
        unsigned int    iso_en                : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ISO_EN_TSV_SLLC_SRST_U;

/* Define the union U_SC_USBPHY_CTRL0_U */
/* USBPHY???ƼĴ???0 */
/* 0x20A0 */
typedef union tagScUsbphyCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
        unsigned int    usbphy_txpreemppulsetune : 1   ; /* [25]  */
        unsigned int    usbphy_txpreempamptune : 2   ; /* [24..23]  */
        unsigned int    usbphy_txrestune      : 2   ; /* [22..21]  */
        unsigned int    usbphy_txrisetune     : 2   ; /* [20..19]  */
        unsigned int    usbphy_txvreftune     : 4   ; /* [18..15]  */
        unsigned int    usbphy_txfslstune     : 4   ; /* [14..11]  */
        unsigned int    usbphy_txhsxvtune     : 2   ; /* [10..9]  */
        unsigned int    usbphy_otgtune        : 3   ; /* [8..6]  */
        unsigned int    usbphy_sqrxtune       : 3   ; /* [5..3]  */
        unsigned int    usbphy_compdistune    : 3   ; /* [2..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_USBPHY_CTRL0_U;

/* Define the union U_SC_USBPHY_CTRL1_U */
/* USBPHY???ƼĴ???1 */
/* 0x20A4 */
typedef union tagScUsbphyCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 21  ; /* [31..11]  */
        unsigned int    usbphy_wordinterface0 : 1   ; /* [10]  */
        unsigned int    usbphy_sleepm         : 1   ; /* [9]  */
        unsigned int    usbphy_otgdisabled    : 1   ; /* [8]  */
        unsigned int    usbphy_retenablen     : 1   ; /* [7]  */
        unsigned int    usbphy_commononn      : 1   ; /* [6]  */
        unsigned int    usbphy_fsel           : 3   ; /* [5..3]  */
        unsigned int    usbphy_refclksel      : 2   ; /* [2..1]  */
        unsigned int    usbphy_siddq          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_USBPHY_CTRL1_U;

/* Define the union U_SC_M3_CTRL0_U */
/* M3???ƼĴ???0 */
/* 0x20B0 */
typedef union tagScM3Ctrl0
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

} SC_M3_CTRL0_U;

/* Define the union U_SC_M3_CTRL1_U */
/* M3???ƼĴ???1 */
/* 0x20B4 */
typedef union tagScM3Ctrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    m3_rst_status         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_M3_CTRL1_U;

/* Define the union U_SC_VMID_CTRL0_U */
/* m3 vmid???? */
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

/* Define the union U_SC_VMID_CTRL1_U */
/* usb vmid???? */
/* 0x20E4 */
typedef union tagScVmidCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
        unsigned int    usbhost_ochi_vmid     : 8   ; /* [15..8]  */
        unsigned int    usbhost_echi_vmid     : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_VMID_CTRL1_U;

/* Define the union U_SC_I2C_M_VMID_U */
/* i2c_m vmid???? */
/* 0x20E8 */
typedef union tagScI2cMVmid
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    i2c_m_vmid            : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2C_M_VMID_U;

/* Define the union U_SC_M3_REMAP_ADDR_EN_U */
/* m3??ַӳ??ʹ?? */
/* 0x2180 */
typedef union tagScM3RemapAddrEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
        unsigned int    m3_remap_addr_en      : 16  ; /* [15..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_M3_REMAP_ADDR_EN_U;

/* Define the union U_SC_ITS_M3_INT_MUX_SEL_U */
/* ???ж??͵?ITS????M3????MUXѡ?? */
/* 0x21F0 */
typedef union tagScItsM3IntMuxSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 21  ; /* [31..11]  */
        unsigned int    int_ext0_mux_sel      : 1   ; /* [10]  */
        unsigned int    int_ext1_mux_sel      : 1   ; /* [9]  */
        unsigned int    int_ext2_mux_sel      : 1   ; /* [8]  */
        unsigned int    int_timer1_mux_sel    : 1   ; /* [7]  */
        unsigned int    int_timer2_mux_sel    : 1   ; /* [6]  */
        unsigned int    int_uart0_mux_sel     : 1   ; /* [5]  */
        unsigned int    int_uart1_mux_sel     : 1   ; /* [4]  */
        unsigned int    int_i2c0_mux_sel      : 1   ; /* [3]  */
        unsigned int    int_i2c1_mux_sel      : 1   ; /* [2]  */
        unsigned int    int_i2c2_mux_sel      : 1   ; /* [1]  */
        unsigned int    int_spi_mux_sel       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ITS_M3_INT_MUX_SEL_U;

/* Define the union U_SC_FTE_MUX_CTRL_U */
/* FTE????ѡ???Ĵ??? */
/* 0x2200 */
typedef union tagScFteMuxCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    mux_sel_fte           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_FTE_MUX_CTRL_U;

/* Define the union U_SC_PM_CTRL0_U */
/* PW_STAT_CTRL?Ŀ??ƼĴ??? */
/* 0x2380 */
typedef union tagScPmCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
        unsigned int    pw_mode_ctrl          : 3   ; /* [2..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_CTRL0_U;

/* Define the union U_SC_PM_CTRL1_U */
/* PW_STAT_CTRL?Ŀ??ƼĴ??? */
/* 0x2384 */
typedef union tagScPmCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    pw_dn_4s_hard_invalid : 1   ; /* [1]  */
        unsigned int    pwr_m3_ctrl_en        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_CTRL1_U;

/* Define the union U_SC_PM_CTRL2_U */
/* PW_STAT_CTRL?Ŀ??ƼĴ??? */
/* 0x2388 */
typedef union tagScPmCtrl2
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
        unsigned int    pwr_m3_ctrl           : 3   ; /* [2..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_CTRL2_U;

/* Define the union U_SC_PM_INT_U */
/* PW_STAT_CTRL???ж?Դ?Ĵ??? */
/* 0x238C */
typedef union tagScPmInt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
        unsigned int    pw_btn_pw_dn_4s_hard  : 1   ; /* [6]  */
        unsigned int    pw_btn_pw_dn_4s_soft  : 1   ; /* [5]  */
        unsigned int    pw_btn_pw_up          : 1   ; /* [4]  */
        unsigned int    pw_btn_pw_dn          : 1   ; /* [3]  */
        unsigned int    timeout_10ms          : 3   ; /* [2..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_INT_U;

/* Define the union U_SC_PM_INT_MASK_U */
/* PW_STAT_CTRL???ж??��μĴ??? */
/* 0x2390 */
typedef union tagScPmIntMask
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
        unsigned int    pw_btn_pw_dn_4s_hard_int_mask : 1   ; /* [4]  */
        unsigned int    pw_btn_pw_dn_4s_soft_int_mask : 1   ; /* [3]  */
        unsigned int    pw_btn_pw_up_int_mask : 1   ; /* [2]  */
        unsigned int    pw_btn_pw_dn_int_mask : 1   ; /* [1]  */
        unsigned int    timeout_10ms_int_mask : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_INT_MASK_U;

/* Define the union U_SC_PM_CTRL3_U */
/* ???ƹܽ?PM_CTL */
/* 0x2394 */
typedef union tagScPmCtrl3
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    pad_pm_ctl_out        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_CTRL3_U;

/* Define the union U_SC_PM_ST_U */
/* ?ϵ縴λָʾ״̬?ź? */
/* 0x2398 */
typedef union tagScPmSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    pw_ctrl_st            : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_ST_U;

/* Define the union U_SC_BISR_RE_REPAIR_EN_U */
/* BISR??RE REPAIRʹ?ܼĴ??? */
/* 0x2D80 */
typedef union tagScBisrReRepairEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    bisr_re_repair_en     : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_BISR_RE_REPAIR_EN_U;

/* Define the union U_SC_BISR_INT_U */
/* BISR_TOP_IDIE???ж?Դ?Ĵ??? */
/* 0x2D90 */
typedef union tagScBisrInt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hard_repair_done      : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_BISR_INT_U;

/* Define the union U_SC_BISR_INT_MASK_U */
/* BISR_TOP_IDIE???ж??��μĴ??? */
/* 0x2DA0 */
typedef union tagScBisrIntMask
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hard_repair_done_int_mask : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_BISR_INT_MASK_U;

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

/* Define the union U_SC_SFC_MEM_CTRL_U */
/* sfc mem???ƼĴ??? */
/* 0x3030 */
typedef union tagScSfcMemCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
        unsigned int    ctrl_rft_sfc          : 10  ; /* [9..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SFC_MEM_CTRL_U;

/* Define the union U_SC_SEC_MEM_CTRL_U */
/* sec mem???ƼĴ??? */
/* 0x3070 */
typedef union tagScSecMemCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    ctrl_rfs_sec          : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_MEM_CTRL_U;

/* Define the union U_SC_WDG_CLK_ST_U */
/* WDGʱ??״̬?Ĵ??? */
/* 0x5300 */
typedef union tagScWdgClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_wdg_st            : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_WDG_CLK_ST_U;

/* Define the union U_SC_TIMER_CLK_ST_U */
/* TIMERʱ??״̬?Ĵ??? */
/* 0x5304 */
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

/* Define the union U_SC_UART_CLK_ST_U */
/* UARTʱ??״̬?Ĵ??? */
/* 0x5308 */
typedef union tagScUartClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    clk_uart1_st          : 1   ; /* [1]  */
        unsigned int    clk_uart0_st          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_UART_CLK_ST_U;

/* Define the union U_SC_ITS_CLK_ST_U */
/* ITSʱ??״̬?Ĵ??? */
/* 0x530C */
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

/* Define the union U_SC_IPCM_CLK_ST_U */
/* IPCMʱ??״̬?Ĵ??? */
/* 0x5310 */
typedef union tagScIpcmClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_ipcm_st           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_IPCM_CLK_ST_U;

/* Define the union U_SC_SRAM_CLK_ST_U */
/* SRAMʱ??״̬?Ĵ??? */
/* 0x5314 */
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

/* Define the union U_SC_SFC_CLK_ST_U */
/* SFCʱ??״̬?Ĵ??? */
/* 0x5318 */
typedef union tagScSfcClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    clk_sfc_bus_st        : 1   ; /* [1]  */
        unsigned int    clk_sfc_st            : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SFC_CLK_ST_U;

/* Define the union U_SC_I2CM_CLK_ST_U */
/* I2CMʱ??״̬?Ĵ??? */
/* 0x531C */
typedef union tagScI2cmClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_i2c_m_st          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2CM_CLK_ST_U;

/* Define the union U_SC_I2C_CLK_ST_U */
/* I2Cʱ??״̬?Ĵ??? */
/* 0x5320 */
typedef union tagScI2cClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
        unsigned int    clk_i2c2_st           : 1   ; /* [2]  */
        unsigned int    clk_i2c1_st           : 1   ; /* [1]  */
        unsigned int    clk_i2c0_st           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2C_CLK_ST_U;

/* Define the union U_SC_GPIO_CLK_ST_U */
/* GPIOʱ??״̬?Ĵ??? */
/* 0x5324 */
typedef union tagScGpioClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
        unsigned int    clk_gpio4_st          : 1   ; /* [4]  */
        unsigned int    clk_gpio3_st          : 1   ; /* [3]  */
        unsigned int    clk_gpio2_st          : 1   ; /* [2]  */
        unsigned int    clk_gpio1_st          : 1   ; /* [1]  */
        unsigned int    clk_gpio0_st          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_CLK_ST_U;

/* Define the union U_SC_CPU_CLK_ST_U */
/* M3 CPUʱ??״̬?Ĵ??? */
/* 0x5328 */
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

/* Define the union U_SC_USB_CLK_ST_U */
/* USBʱ??״̬?Ĵ??? */
/* 0x5334 */
typedef union tagScUsbClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
        unsigned int    clk_usb_ohci_12m_st   : 1   ; /* [3]  */
        unsigned int    clk_usb_ohci_48m_st   : 1   ; /* [2]  */
        unsigned int    clk_usb_phy_core_st   : 1   ; /* [1]  */
        unsigned int    clk_usb_ahb_st        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_USB_CLK_ST_U;

/* Define the union U_SC_SPI_CLK_ST_U */
/* SPIʱ??״̬?Ĵ??? */
/* 0x5344 */
typedef union tagScSpiClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_spi_st            : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SPI_CLK_ST_U;

/* Define the union U_SC_SEC_CLK_ST_U */
/* SECʱ??״̬?Ĵ??? */
/* 0x535C */
typedef union tagScSecClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
        unsigned int    clk_sec_trace_dbg_st  : 1   ; /* [2]  */
        unsigned int    clk_sec_ahb_st        : 1   ; /* [1]  */
        unsigned int    clk_sec_st            : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_CLK_ST_U;

/* Define the union U_SC_WDG_RESET_ST_U */
/* WDG??λ״̬?Ĵ??? */
/* 0x5A00 */
typedef union tagScWdgResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    wdg_srst_st           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_WDG_RESET_ST_U;

/* Define the union U_SC_TIMER_RESET_ST_U */
/* TIMER??λ״̬?Ĵ??? */
/* 0x5A04 */
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

/* Define the union U_SC_UART_RESET_ST_U */
/* UART??λ״̬?Ĵ??? */
/* 0x5A08 */
typedef union tagScUartResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    uart1_srst_st         : 1   ; /* [1]  */
        unsigned int    uart0_srst_st         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_UART_RESET_ST_U;

/* Define the union U_SC_ITS_RESET_ST_U */
/* ITS??λ״̬?Ĵ??? */
/* 0x5A0C */
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

/* Define the union U_SC_IPCM_RESET_ST_U */
/* IPCM??λ״̬?Ĵ??? */
/* 0x5A10 */
typedef union tagScIpcmResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    ipcm_srst_st          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_IPCM_RESET_ST_U;

/* Define the union U_SC_SRAM_RESET_ST_U */
/* SRAM??λ״̬?Ĵ??? */
/* 0x5A14 */
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

/* Define the union U_SC_SFC_RESET_ST_U */
/* SFC??λ״̬?Ĵ??? */
/* 0x5A18 */
typedef union tagScSfcResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    sfc_bus_srst_st       : 1   ; /* [1]  */
        unsigned int    sfc_srst_st           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SFC_RESET_ST_U;

/* Define the union U_SC_I2CM_RESET_ST_U */
/* I2CM??λ״̬?Ĵ??? */
/* 0x5A1C */
typedef union tagScI2cmResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    i2c_m_srst_st         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2CM_RESET_ST_U;

/* Define the union U_SC_I2C_RESET_ST_U */
/* I2C??λ״̬?Ĵ??? */
/* 0x5A20 */
typedef union tagScI2cResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
        unsigned int    i2c2_srst_st          : 1   ; /* [2]  */
        unsigned int    i2c1_srst_st          : 1   ; /* [1]  */
        unsigned int    i2c0_srst_st          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2C_RESET_ST_U;

/* Define the union U_SC_GPIO_RESET_ST_U */
/* GPIO??λ״̬?Ĵ??? */
/* 0x5A24 */
typedef union tagScGpioResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
        unsigned int    gpio4_srst_st         : 1   ; /* [4]  */
        unsigned int    gpio3_srst_st         : 1   ; /* [3]  */
        unsigned int    gpio2_srst_st         : 1   ; /* [2]  */
        unsigned int    gpio1_srst_st         : 1   ; /* [1]  */
        unsigned int    gpio0_srst_st         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_RESET_ST_U;

/* Define the union U_SC_CPU_RESET_ST_U */
/* M3 CPU??λ״̬?Ĵ??? */
/* 0x5A28 */
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

/* Define the union U_SC_USB_RESET_ST_U */
/* USB??λ״̬?Ĵ??? */
/* 0x5A44 */
typedef union tagScUsbResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
        unsigned int    usbhost_phy0_por_srst_st : 1   ; /* [4]  */
        unsigned int    usbhost_phy0_port_srst_st : 1   ; /* [3]  */
        unsigned int    usbhost_ahb_srst_st   : 1   ; /* [2]  */
        unsigned int    usbhost_phy0_srst_st  : 1   ; /* [1]  */
        unsigned int    usbhost_utmi0_srst_st : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_USB_RESET_ST_U;

/* Define the union U_SC_SPI_RESET_ST_U */
/* SPI??λ״̬?Ĵ??? */
/* 0x5A4C */
typedef union tagScSpiResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    spi_srst_st           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SPI_RESET_ST_U;

/* Define the union U_SC_SEC_RESET_ST_U */
/* SEC??λ״̬?Ĵ??? */
/* 0x5A54 */
typedef union tagScSecResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    sec_srst_st           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_RESET_ST_U;

/* Define the union U_SC_SEC_BUILD_RESET_ST_U */
/* SEC BUILD??λ״̬?Ĵ??? */
/* 0x5A5C */
typedef union tagScSecBuildResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 11  ; /* [31..21]  */
        unsigned int    sec_ahb_srst_st       : 1   ; /* [20]  */
        unsigned int    sec_build_ahb_srst_st7 : 1   ; /* [19]  */
        unsigned int    sec_build_srst_st7    : 1   ; /* [18]  */
        unsigned int    sec_build_ahb_srst_st6 : 1   ; /* [17]  */
        unsigned int    sec_build_srst_st6    : 1   ; /* [16]  */
        unsigned int    sec_build_ahb_srst_st5 : 1   ; /* [15]  */
        unsigned int    sec_build_srst_st5    : 1   ; /* [14]  */
        unsigned int    sec_build_ahb_srst_st4 : 1   ; /* [13]  */
        unsigned int    sec_build_srst_st4    : 1   ; /* [12]  */
        unsigned int    sec_cluster1_ahb_srst_st : 1   ; /* [11]  */
        unsigned int    sec_cluster1_srst_st  : 1   ; /* [10]  */
        unsigned int    sec_build_ahb_srst_st3 : 1   ; /* [9]  */
        unsigned int    sec_build_srst_st3    : 1   ; /* [8]  */
        unsigned int    sec_build_ahb_srst_st2 : 1   ; /* [7]  */
        unsigned int    sec_build_srst_st2    : 1   ; /* [6]  */
        unsigned int    sec_build_ahb_srst_st1 : 1   ; /* [5]  */
        unsigned int    sec_build_srst_st1    : 1   ; /* [4]  */
        unsigned int    sec_build_ahb_srst_st0 : 1   ; /* [3]  */
        unsigned int    sec_build_srst_st0    : 1   ; /* [2]  */
        unsigned int    sec_cluster0_ahb_srst_st : 1   ; /* [1]  */
        unsigned int    sec_cluster0_srst_st  : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_BUILD_RESET_ST_U;

/* Define the union U_SC_PW_CTRL_RESET_ST_U */
/* PW_CTRL??λ״̬?Ĵ??? */
/* 0x5A60 */
typedef union tagScPwCtrlResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    pw_ctrl_srst_st       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PW_CTRL_RESET_ST_U;

/* Define the union U_SC_MBIST_CPUI_ENABLE_U */
/* CPU????MBISTѡ???źţ?оƬ??·????ʹ?á? */
/* 0x5C00 */
typedef union tagScMbistCpuiEnable
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    mbist_cpui_enable     : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_MBIST_CPUI_ENABLE_U;

/* Define the union U_SC_MBIST_CPUI_RESET_N_U */
/* CPU????MBIST??λ?ź? */
/* 0x5C04 */
typedef union tagScMbistCpuiResetN
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    mbist_cpui_reset_n    : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_MBIST_CPUI_RESET_N_U;

/* Define the union U_SC_MBIST_CPUI_WRITE_EN_U */
/* DFT MBISTģʽ??TMB??·CPU2TAP?ӿ????üĴ?????оƬ??·????ʹ?á? */
/* 0x5C0C */
typedef union tagScMbistCpuiWriteEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    mbist_cpui_write_en   : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_MBIST_CPUI_WRITE_EN_U;

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

/* Define the union U_SC_PM_ST0_U */
/* PW_STAT_CTRL???ڲ?״̬ */
/* 0x6380 */
typedef union tagScPmSt0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
        unsigned int    pw_curr_stat          : 4   ; /* [3..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_ST0_U;

/* Define the union U_SC_PM_ST1_U */
/* ��?Թܽŵ?PWRGD״̬ */
/* 0x6384 */
typedef union tagScPmSt1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
        unsigned int    pwrgd                 : 3   ; /* [2..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_ST1_U;

/* Define the union U_SC_PM_ST2_U */
/* ???????ܽŵ?PWR_CTRL2~0 */
/* 0x6388 */
typedef union tagScPmSt2
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
        unsigned int    pwr_ctrl              : 3   ; /* [2..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_ST2_U;

/* Define the union U_SC_PM_ST3_U */
/* ME???عܽ?״̬ */
/* 0x638C */
typedef union tagScPmSt3
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
        unsigned int    pad_me_mst_in         : 1   ; /* [4]  */
        unsigned int    pad_ext_int2_in       : 1   ; /* [3]  */
        unsigned int    pad_ext_int1_in       : 1   ; /* [2]  */
        unsigned int    pad_ext_int0_in       : 1   ; /* [1]  */
        unsigned int    pad_sm_alert_n_in     : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_ST3_U;

/* Define the union U_SC_DBG_AUTH_CTRL_U */
/* ??ȫ?ȼ???Ȩ???ƼĴ?????
??ע?⣺1???˼Ĵ????ռ??????ǰ?ȫ???ʲ??ܳɹ???2??Ĭ?Ͼ??Ǵ򿪵???ģʽ????©??????????????ʱ????ʼ???رյ??Թ??ܣ? */
/* 0x6700 */
typedef union tagScDbgAuthCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    rsa_djtag_sec_acc_en  : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DBG_AUTH_CTRL_U;

/* Define the union U_SC_BOOT_CTRL_ST_U */
/* SC_BOOT_CTRL_ST??ʾCPU?����??Ƶ?PAD??eFuse?ź?״̬ */
/* 0xE084 */
typedef union tagScBootCtrlSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    efuse_ns_forbid       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_BOOT_CTRL_ST_U;

/* Define the union U_SC_EFUSE_RD_ADDR_U */
/* ??DIEIDʱ???õ?ַ????ȫ?Ĵ????? */
/* 0xE100 */
typedef union tagScEfuseRdAddr
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
        unsigned int    efuse_rd_addr         : 7   ; /* [6..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_EFUSE_RD_ADDR_U;

#else

/* Define the union U_SC_WDG_CLK_EN_U */
/* WDGʱ??ʹ?ܼĴ??? */
/* 0x300 */
typedef union tagScWdgClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_wdg_enb           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_WDG_CLK_EN_U;

/* Define the union U_SC_WDG_CLK_DIS_U */
/* WDGʱ?ӽ?ֹ?Ĵ??? */
/* 0x304 */
typedef union tagScWdgClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_wdg_dsb           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_WDG_CLK_DIS_U;

/* Define the union U_SC_TIMER_CLK_EN_U */
/* TIMERʱ??ʹ?ܼĴ??? */
/* 0x308 */
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
/* 0x30C */
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

/* Define the union U_SC_UART_CLK_EN_U */
/* UARTʱ??ʹ?ܼĴ??? */
/* 0x310 */
typedef union tagScUartClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_uart0_enb         : 1   ; /* [0]  */
        unsigned int    clk_uart1_enb         : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_UART_CLK_EN_U;

/* Define the union U_SC_UART_CLK_DIS_U */
/* UARTʱ?ӽ?ֹ?Ĵ??? */
/* 0x314 */
typedef union tagScUartClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_uart0_dsb         : 1   ; /* [0]  */
        unsigned int    clk_uart1_dsb         : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_UART_CLK_DIS_U;

/* Define the union U_SC_ITS_CLK_EN_U */
/* ITSʱ??ʹ?ܼĴ??? */
/* 0x318 */
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
/* ITSʱ?ӽ?ֹ?Ĵ??? */
/* 0x31C */
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

/* Define the union U_SC_IPCM_CLK_EN_U */
/* IPCMʱ??ʹ?ܼĴ??? */
/* 0x320 */
typedef union tagScIpcmClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_ipcm_enb          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_IPCM_CLK_EN_U;

/* Define the union U_SC_IPCM_CLK_DIS_U */
/* IPCMʱ?ӽ?ֹ?Ĵ??? */
/* 0x324 */
typedef union tagScIpcmClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_ipcm_dsb          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_IPCM_CLK_DIS_U;

/* Define the union U_SC_SRAM_CLK_EN_U */
/* SRAMʱ??ʹ?ܼĴ??? */
/* 0x328 */
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
/* 0x32C */
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

/* Define the union U_SC_SFC_CLK_EN_U */
/* SFCʱ??ʹ?ܼĴ??? */
/* 0x330 */
typedef union tagScSfcClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_sfc_enb           : 1   ; /* [0]  */
        unsigned int    clk_sfc_bus_enb       : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SFC_CLK_EN_U;

/* Define the union U_SC_SFC_CLK_DIS_U */
/* SFCʱ?ӽ?ֹ?Ĵ??? */
/* 0x334 */
typedef union tagScSfcClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_sfc_dsb           : 1   ; /* [0]  */
        unsigned int    clk_sfc_bus_dsb       : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SFC_CLK_DIS_U;

/* Define the union U_SC_I2CM_CLK_EN_U */
/* I2CMʱ??ʹ?ܼĴ??? */
/* 0x338 */
typedef union tagScI2cmClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_i2c_m_enb         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2CM_CLK_EN_U;

/* Define the union U_SC_I2CM_CLK_DIS_U */
/* I2CMʱ?ӽ?ֹ?Ĵ??? */
/* 0x33C */
typedef union tagScI2cmClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_i2c_m_dsb         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2CM_CLK_DIS_U;

/* Define the union U_SC_I2C_CLK_EN_U */
/* I2Cʱ??ʹ?ܼĴ??? */
/* 0x340 */
typedef union tagScI2cClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_i2c0_enb          : 1   ; /* [0]  */
        unsigned int    clk_i2c1_enb          : 1   ; /* [1]  */
        unsigned int    clk_i2c2_enb          : 1   ; /* [2]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2C_CLK_EN_U;

/* Define the union U_SC_I2C_CLK_DIS_U */
/* I2Cʱ?ӽ?ֹ?Ĵ??? */
/* 0x344 */
typedef union tagScI2cClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_i2c0_dsb          : 1   ; /* [0]  */
        unsigned int    clk_i2c1_dsb          : 1   ; /* [1]  */
        unsigned int    clk_i2c2_dsb          : 1   ; /* [2]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2C_CLK_DIS_U;

/* Define the union U_SC_GPIO_CLK_EN_U */
/* GPIOʱ??ʹ?ܼĴ??? */
/* 0x348 */
typedef union tagScGpioClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_gpio0_enb         : 1   ; /* [0]  */
        unsigned int    clk_gpio1_enb         : 1   ; /* [1]  */
        unsigned int    clk_gpio2_enb         : 1   ; /* [2]  */
        unsigned int    clk_gpio3_enb         : 1   ; /* [3]  */
        unsigned int    clk_gpio4_enb         : 1   ; /* [4]  */
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_CLK_EN_U;

/* Define the union U_SC_GPIO_CLK_DIS_U */
/* GPIOʱ?ӽ?ֹ?Ĵ??? */
/* 0x34C */
typedef union tagScGpioClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_gpio0_dsb         : 1   ; /* [0]  */
        unsigned int    clk_gpio1_dsb         : 1   ; /* [1]  */
        unsigned int    clk_gpio2_dsb         : 1   ; /* [2]  */
        unsigned int    clk_gpio3_dsb         : 1   ; /* [3]  */
        unsigned int    clk_gpio4_dsb         : 1   ; /* [4]  */
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_CLK_DIS_U;

/* Define the union U_SC_CPU_CLK_EN_U */
/* M3 CPUʱ??ʹ?ܼĴ??? */
/* 0x350 */
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
/* M3 CPUʱ?ӽ?ֹ?Ĵ??? */
/* 0x354 */
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

/* Define the union U_SC_USB_CLK_EN_U */
/* USBʱ??ʹ?ܼĴ??? */
/* 0x368 */
typedef union tagScUsbClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_usb_ahb_enb       : 1   ; /* [0]  */
        unsigned int    clk_usb_phy_core_enb  : 1   ; /* [1]  */
        unsigned int    clk_usb_ohci_48m_enb  : 1   ; /* [2]  */
        unsigned int    clk_usb_ohci_12m_enb  : 1   ; /* [3]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_USB_CLK_EN_U;

/* Define the union U_SC_USB_CLK_DIS_U */
/* USBʱ?ӽ?ֹ?Ĵ??? */
/* 0x36C */
typedef union tagScUsbClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_usb_ahb_dsb       : 1   ; /* [0]  */
        unsigned int    clk_usb_phy_core_dsb  : 1   ; /* [1]  */
        unsigned int    clk_usb_ohci_48m_dsb  : 1   ; /* [2]  */
        unsigned int    clk_usb_ohci_12m_dsb  : 1   ; /* [3]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_USB_CLK_DIS_U;

/* Define the union U_SC_SPI_CLK_EN_U */
/* spiʱ??ʹ?ܼĴ??? */
/* 0x388 */
typedef union tagScSpiClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_spi_enb           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SPI_CLK_EN_U;

/* Define the union U_SC_SPI_CLK_DIS_U */
/* spiʱ?ӽ?ֹ?Ĵ??? */
/* 0x38C */
typedef union tagScSpiClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_spi_dsb           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SPI_CLK_DIS_U;

/* Define the union U_SC_SEC_CLK_EN_U */
/* SECʱ??ʹ?ܼĴ??? */
/* 0x3B8 */
typedef union tagScSecClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_sec_enb           : 1   ; /* [0]  */
        unsigned int    clk_sec_ahb_enb       : 1   ; /* [1]  */
        unsigned int    clk_sec_trace_dbg_enb : 1   ; /* [2]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_CLK_EN_U;

/* Define the union U_SC_SEC_CLK_DIS_U */
/* SECʱ?ӽ?ֹ?Ĵ??? */
/* 0x3BC */
typedef union tagScSecClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_sec_dsb           : 1   ; /* [0]  */
        unsigned int    clk_sec_ahb_dsb       : 1   ; /* [1]  */
        unsigned int    clk_sec_trace_dbg_dsb : 1   ; /* [2]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_CLK_DIS_U;

/* Define the union U_SC_WDG_RESET_REQ_U */
/* WDG?���λ???????ƼĴ??? */
/* 0xA00 */
typedef union tagScWdgResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wdg_srst_req          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_WDG_RESET_REQ_U;

/* Define the union U_SC_WDG_RESET_DREQ_U */
/* WDG?���λȥ???????ƼĴ??? */
/* 0xA04 */
typedef union tagScWdgResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wdg_srst_dreq         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_WDG_RESET_DREQ_U;

/* Define the union U_SC_TIMER_RESET_REQ_U */
/* TIMER?���λ???????ƼĴ??? */
/* 0xA08 */
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
/* 0xA0C */
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

/* Define the union U_SC_UART_RESET_REQ_U */
/* UART?���λ???????ƼĴ??? */
/* 0xA10 */
typedef union tagScUartResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    uart0_srst_req        : 1   ; /* [0]  */
        unsigned int    uart1_srst_req        : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_UART_RESET_REQ_U;

/* Define the union U_SC_UART_RESET_DREQ_U */
/* UART?���λȥ???????ƼĴ??? */
/* 0xA14 */
typedef union tagScUartResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    uart0_srst_dreq       : 1   ; /* [0]  */
        unsigned int    uart1_srst_dreq       : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_UART_RESET_DREQ_U;

/* Define the union U_SC_ITS_RESET_REQ_U */
/* ITS?���λ???????ƼĴ??? */
/* 0xA18 */
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
/* 0xA1C */
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

/* Define the union U_SC_IPCM_RESET_REQ_U */
/* IPCM?���λ???????ƼĴ??? */
/* 0xA20 */
typedef union tagScIpcmResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ipcm_srst_req         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_IPCM_RESET_REQ_U;

/* Define the union U_SC_IPCM_RESET_DREQ_U */
/* IPCM?���λȥ???????ƼĴ??? */
/* 0xA24 */
typedef union tagScIpcmResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ipcm_srst_dreq        : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_IPCM_RESET_DREQ_U;

/* Define the union U_SC_SRAM_RESET_REQ_U */
/* SRAM?���λ???????ƼĴ??? */
/* 0xA28 */
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
/* 0xA2C */
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

/* Define the union U_SC_SFC_RESET_REQ_U */
/* SFC?���λ???????ƼĴ??? */
/* 0xA30 */
typedef union tagScSfcResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sfc_srst_req          : 1   ; /* [0]  */
        unsigned int    sfc_bus_srst_req      : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SFC_RESET_REQ_U;

/* Define the union U_SC_SFC_RESET_DREQ_U */
/* SFC?���λȥ???????ƼĴ??? */
/* 0xA34 */
typedef union tagScSfcResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sfc_srst_dreq         : 1   ; /* [0]  */
        unsigned int    sfc_bus_srst_dreq     : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SFC_RESET_DREQ_U;

/* Define the union U_SC_I2CM_RESET_REQ_U */
/* I2CM?���λ???????ƼĴ??? */
/* 0xA38 */
typedef union tagScI2cmResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    i2c_m_srst_req        : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2CM_RESET_REQ_U;

/* Define the union U_SC_I2CM_RESET_DREQ_U */
/* I2CM?���λȥ???????ƼĴ??? */
/* 0xA3C */
typedef union tagScI2cmResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    i2c_m_srst_dreq       : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2CM_RESET_DREQ_U;

/* Define the union U_SC_I2C_RESET_REQ_U */
/* I2C?���λ???????ƼĴ??? */
/* 0xA40 */
typedef union tagScI2cResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    i2c0_srst_req         : 1   ; /* [0]  */
        unsigned int    i2c1_srst_req         : 1   ; /* [1]  */
        unsigned int    i2c2_srst_req         : 1   ; /* [2]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2C_RESET_REQ_U;

/* Define the union U_SC_I2C_RESET_DREQ_U */
/* I2C?���λȥ???????ƼĴ??? */
/* 0xA44 */
typedef union tagScI2cResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    i2c0_srst_dreq        : 1   ; /* [0]  */
        unsigned int    i2c1_srst_dreq        : 1   ; /* [1]  */
        unsigned int    i2c2_srst_dreq        : 1   ; /* [2]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2C_RESET_DREQ_U;

/* Define the union U_SC_GPIO_RESET_REQ_U */
/* GPIO?���λ???????ƼĴ??? */
/* 0xA48 */
typedef union tagScGpioResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gpio0_srst_req        : 1   ; /* [0]  */
        unsigned int    gpio1_srst_req        : 1   ; /* [1]  */
        unsigned int    gpio2_srst_req        : 1   ; /* [2]  */
        unsigned int    gpio3_srst_req        : 1   ; /* [3]  */
        unsigned int    gpio4_srst_req        : 1   ; /* [4]  */
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_RESET_REQ_U;

/* Define the union U_SC_GPIO_RESET_DREQ_U */
/* GPIO?���λȥ???????ƼĴ??? */
/* 0xA4C */
typedef union tagScGpioResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gpio0_srst_dreq       : 1   ; /* [0]  */
        unsigned int    gpio1_srst_dreq       : 1   ; /* [1]  */
        unsigned int    gpio2_srst_dreq       : 1   ; /* [2]  */
        unsigned int    gpio3_srst_dreq       : 1   ; /* [3]  */
        unsigned int    gpio4_srst_dreq       : 1   ; /* [4]  */
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_RESET_DREQ_U;

/* Define the union U_SC_CPU_RESET_REQ_U */
/* M3 CPU?���λ???????ƼĴ??? */
/* 0xA50 */
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
/* M3 CPU?���λȥ???????ƼĴ??? */
/* 0xA54 */
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

/* Define the union U_SC_USB_RESET_REQ_U */
/* USB?���λ???????ƼĴ??? */
/* 0xA88 */
typedef union tagScUsbResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    usbhost_utmi0_srst_req : 1   ; /* [0]  */
        unsigned int    usbhost_phy0_srst_req : 1   ; /* [1]  */
        unsigned int    usbhost_ahb_srst_req  : 1   ; /* [2]  */
        unsigned int    usbhost_phy0_port_srst_req : 1   ; /* [3]  */
        unsigned int    usbhost_phy0_por_srst_req : 1   ; /* [4]  */
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_USB_RESET_REQ_U;

/* Define the union U_SC_USB_RESET_DREQ_U */
/* USB?���λȥ???????ƼĴ??? */
/* 0xA8C */
typedef union tagScUsbResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    usbhost_utmi0_srst_dreq : 1   ; /* [0]  */
        unsigned int    usbhost_phy0_srst_dreq : 1   ; /* [1]  */
        unsigned int    usbhost_ahb_srst_dreq : 1   ; /* [2]  */
        unsigned int    usbhost_phy0_port_srst_dreq : 1   ; /* [3]  */
        unsigned int    usbhost_phy0_por_srst_dreq : 1   ; /* [4]  */
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_USB_RESET_DREQ_U;

/* Define the union U_SC_SPI_RESET_REQ_U */
/* SPI?���λ???????ƼĴ??? */
/* 0xA98 */
typedef union tagScSpiResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    spi_srst_req          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SPI_RESET_REQ_U;

/* Define the union U_SC_SPI_RESET_DREQ_U */
/* SPI?���λȥ???????ƼĴ??? */
/* 0xA9C */
typedef union tagScSpiResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    spi_srst_dreq         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SPI_RESET_DREQ_U;

/* Define the union U_SC_SEC_RESET_REQ_U */
/* SEC?���λ???????ƼĴ??? */
/* 0xAA8 */
typedef union tagScSecResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sec_srst_req          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_RESET_REQ_U;

/* Define the union U_SC_SEC_RESET_DREQ_U */
/* SEC?���λȥ???????ƼĴ??? */
/* 0xAAC */
typedef union tagScSecResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sec_srst_dreq         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_RESET_DREQ_U;

/* Define the union U_SC_SEC_BUILD_RESET_REQ_U */
/* SEC BUILD?���λ???????ƼĴ??? */
/* 0xAB8 */
typedef union tagScSecBuildResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sec_cluster0_srst_req : 1   ; /* [0]  */
        unsigned int    sec_cluster0_ahb_srst_req : 1   ; /* [1]  */
        unsigned int    sec_build_srst_req0   : 1   ; /* [2]  */
        unsigned int    sec_build_ahb_srst_req0 : 1   ; /* [3]  */
        unsigned int    sec_build_srst_req1   : 1   ; /* [4]  */
        unsigned int    sec_build_ahb_srst_req1 : 1   ; /* [5]  */
        unsigned int    sec_build_srst_req2   : 1   ; /* [6]  */
        unsigned int    sec_build_ahb_srst_req2 : 1   ; /* [7]  */
        unsigned int    sec_build_srst_req3   : 1   ; /* [8]  */
        unsigned int    sec_build_ahb_srst_req3 : 1   ; /* [9]  */
        unsigned int    sec_cluster1_srst_req : 1   ; /* [10]  */
        unsigned int    sec_cluster1_ahb_srst_req : 1   ; /* [11]  */
        unsigned int    sec_build_srst_req4   : 1   ; /* [12]  */
        unsigned int    sec_build_ahb_srst_req4 : 1   ; /* [13]  */
        unsigned int    sec_build_srst_req5   : 1   ; /* [14]  */
        unsigned int    sec_build_ahb_srst_req5 : 1   ; /* [15]  */
        unsigned int    sec_build_srst_req6   : 1   ; /* [16]  */
        unsigned int    sec_build_ahb_srst_req6 : 1   ; /* [17]  */
        unsigned int    sec_build_srst_req7   : 1   ; /* [18]  */
        unsigned int    sec_build_ahb_srst_req7 : 1   ; /* [19]  */
        unsigned int    sec_ahb_srst_req      : 1   ; /* [20]  */
        unsigned int    reserved_0            : 11  ; /* [31..21]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_BUILD_RESET_REQ_U;

/* Define the union U_SC_SEC_BUILD_RESET_DREQ_U */
/* SEC BUILD?���λȥ???????ƼĴ??? */
/* 0xABC */
typedef union tagScSecBuildResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sec_cluster0_srst_dreq : 1   ; /* [0]  */
        unsigned int    sec_cluster0_ahb_srst_dreq : 1   ; /* [1]  */
        unsigned int    sec_build_srst_dreq0  : 1   ; /* [2]  */
        unsigned int    sec_build_ahb_srst_dreq0 : 1   ; /* [3]  */
        unsigned int    sec_build_srst_dreq1  : 1   ; /* [4]  */
        unsigned int    sec_build_ahb_srst_dreq1 : 1   ; /* [5]  */
        unsigned int    sec_build_srst_dreq2  : 1   ; /* [6]  */
        unsigned int    sec_build_ahb_srst_dreq2 : 1   ; /* [7]  */
        unsigned int    sec_build_srst_dreq3  : 1   ; /* [8]  */
        unsigned int    sec_build_ahb_srst_dreq3 : 1   ; /* [9]  */
        unsigned int    sec_cluster1_srst_dreq : 1   ; /* [10]  */
        unsigned int    sec_cluster1_ahb_srst_dreq : 1   ; /* [11]  */
        unsigned int    sec_build_srst_dreq4  : 1   ; /* [12]  */
        unsigned int    sec_build_ahb_srst_dreq4 : 1   ; /* [13]  */
        unsigned int    sec_build_srst_dreq5  : 1   ; /* [14]  */
        unsigned int    sec_build_ahb_srst_dreq5 : 1   ; /* [15]  */
        unsigned int    sec_build_srst_dreq6  : 1   ; /* [16]  */
        unsigned int    sec_build_ahb_srst_dreq6 : 1   ; /* [17]  */
        unsigned int    sec_build_srst_dreq7  : 1   ; /* [18]  */
        unsigned int    sec_build_ahb_srst_dreq7 : 1   ; /* [19]  */
        unsigned int    sec_ahb_srst_dreq     : 1   ; /* [20]  */
        unsigned int    reserved_0            : 11  ; /* [31..21]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_BUILD_RESET_DREQ_U;

/* Define the union U_SC_PW_CTRL_RESET_REQ_U */
/* PW_CTRL?���λ???????ƼĴ??? */
/* 0xAC0 */
typedef union tagScPwCtrlResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pw_ctrl_srst_req      : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PW_CTRL_RESET_REQ_U;

/* Define the union U_SC_PW_CTRL_RESET_DREQ_U */
/* PW_CTRL?���λȥ???????ƼĴ??? */
/* 0xAC4 */
typedef union tagScPwCtrlResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pw_ctrl_srst_dreq     : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PW_CTRL_RESET_DREQ_U;

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

/* Define the union U_SC_EXTINT_CTRL_U */
/* ?ⲿ?жϼ??????üĴ??? */
/* 0x2000 */
typedef union tagScExtintCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ext_int0_polarity     : 1   ; /* [0]  */
        unsigned int    ext_int1_polarity     : 1   ; /* [1]  */
        unsigned int    ext_int2_polarity     : 1   ; /* [2]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_EXTINT_CTRL_U;

/* Define the union U_SC_SPI_CTRL_U */
/* spi???ƼĴ??? */
/* 0x2020 */
typedef union tagScSpiCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    spi_wire_mode         : 1   ; /* [0]  */
        unsigned int    spi_cs_polarity0      : 1   ; /* [1]  */
        unsigned int    spi_cs_polarity1      : 1   ; /* [2]  */
        unsigned int    spi_cs_polarity2      : 1   ; /* [3]  */
        unsigned int    spi_cs_polarity3      : 1   ; /* [4]  */
        unsigned int    spi_rcv_only          : 1   ; /* [5]  */
        unsigned int    spi_ss_in_n           : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SPI_CTRL_U;

/* Define the union U_SC_I2C_CTRL_U */
/* i2c???ƼĴ??? */
/* 0x2024 */
typedef union tagScI2cCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    i2c0_clk_mux_sel      : 1   ; /* [0]  */
        unsigned int    i2c0_clk_oe_cfg       : 1   ; /* [1]  */
        unsigned int    i2c0_scl_cfg          : 1   ; /* [2]  */
        unsigned int    i2c0_dat_mux_sel      : 1   ; /* [3]  */
        unsigned int    i2c0_dat_oe_cfg       : 1   ; /* [4]  */
        unsigned int    i2c0_sda_cfg          : 1   ; /* [5]  */
        unsigned int    i2c1_clk_mux_sel      : 1   ; /* [6]  */
        unsigned int    i2c1_clk_oe_cfg       : 1   ; /* [7]  */
        unsigned int    i2c1_scl_cfg          : 1   ; /* [8]  */
        unsigned int    i2c1_dat_mux_sel      : 1   ; /* [9]  */
        unsigned int    i2c1_dat_oe_cfg       : 1   ; /* [10]  */
        unsigned int    i2c1_sda_cfg          : 1   ; /* [11]  */
        unsigned int    i2c2_clk_mux_sel      : 1   ; /* [12]  */
        unsigned int    i2c2_clk_oe_cfg       : 1   ; /* [13]  */
        unsigned int    i2c2_scl_cfg          : 1   ; /* [14]  */
        unsigned int    i2c2_dat_mux_sel      : 1   ; /* [15]  */
        unsigned int    i2c2_dat_oe_cfg       : 1   ; /* [16]  */
        unsigned int    i2c2_sda_cfg          : 1   ; /* [17]  */
        unsigned int    reserved_0            : 14  ; /* [31..18]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2C_CTRL_U;

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

/* Define the union U_SC_SRAM_CTRL1_U */
/* sram???ƼĴ???1????ȫ?Ĵ????? */
/* 0x2034 */
typedef union tagScSramCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sram_prot_ctrl_en     : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SRAM_CTRL1_U;

/* Define the union U_SC_TIMER_CLKEN_CTRL_U */
/* TIMER??clken???ɿ??ƼĴ??? */
/* 0x2040 */
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

/* Define the union U_SC_WDOG_CLKEN_CTRL_U */
/* WDOG??clken???ɿ??ƼĴ??? */
/* 0x2050 */
typedef union tagScWdogClkenCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wdogen0ov             : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_WDOG_CLKEN_CTRL_U;

/* Define the union U_SC_USBHOST_CTRL0_U */
/* usb???? */
/* 0x2060 */
typedef union tagScUsbhostCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    usbhost_ss_word_if_i  : 1   ; /* [0]  */
        unsigned int    usbhost_ss_autoppd_on_overcur_en_i : 1   ; /* [1]  */
        unsigned int    usbhost_ss_ena_incr16_i : 1   ; /* [2]  */
        unsigned int    usbhost_ss_ena_incr8_i : 1   ; /* [3]  */
        unsigned int    usbhost_ss_ena_incr4_i : 1   ; /* [4]  */
        unsigned int    usbhost_ss_ena_incrx_align_i : 1   ; /* [5]  */
        unsigned int    usbhost_ss_hubsetup_min_i : 1   ; /* [6]  */
        unsigned int    usbhost_app_start_clk_i : 1   ; /* [7]  */
        unsigned int    usbhost_ohci_susp_lgcy_i : 1   ; /* [8]  */
        unsigned int    usbhost_app_prt_ovrcur_i : 1   ; /* [9]  */
        unsigned int    usbhost_pwr_ctrl      : 10  ; /* [19..10]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_USBHOST_CTRL0_U;

/* Define the union U_SC_ISO_EN_TSV_SLLC_SRST_U */
/* IDIE isolation CELLʹ???źţ?TSV_SLLC_IDIE?????���λ???????? */
/* 0x2080 */
typedef union tagScIsoEnTsvSllcSrst
{
    /* Define the struct bits */
    struct
    {
        unsigned int    iso_en                : 1   ; /* [0]  */
        unsigned int    tsv_sllc_all_srst_req : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ISO_EN_TSV_SLLC_SRST_U;

/* Define the union U_SC_USBPHY_CTRL0_U */
/* USBPHY???ƼĴ???0 */
/* 0x20A0 */
typedef union tagScUsbphyCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    usbphy_compdistune    : 3   ; /* [2..0]  */
        unsigned int    usbphy_sqrxtune       : 3   ; /* [5..3]  */
        unsigned int    usbphy_otgtune        : 3   ; /* [8..6]  */
        unsigned int    usbphy_txhsxvtune     : 2   ; /* [10..9]  */
        unsigned int    usbphy_txfslstune     : 4   ; /* [14..11]  */
        unsigned int    usbphy_txvreftune     : 4   ; /* [18..15]  */
        unsigned int    usbphy_txrisetune     : 2   ; /* [20..19]  */
        unsigned int    usbphy_txrestune      : 2   ; /* [22..21]  */
        unsigned int    usbphy_txpreempamptune : 2   ; /* [24..23]  */
        unsigned int    usbphy_txpreemppulsetune : 1   ; /* [25]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_USBPHY_CTRL0_U;

/* Define the union U_SC_USBPHY_CTRL1_U */
/* USBPHY???ƼĴ???1 */
/* 0x20A4 */
typedef union tagScUsbphyCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    usbphy_siddq          : 1   ; /* [0]  */
        unsigned int    usbphy_refclksel      : 2   ; /* [2..1]  */
        unsigned int    usbphy_fsel           : 3   ; /* [5..3]  */
        unsigned int    usbphy_commononn      : 1   ; /* [6]  */
        unsigned int    usbphy_retenablen     : 1   ; /* [7]  */
        unsigned int    usbphy_otgdisabled    : 1   ; /* [8]  */
        unsigned int    usbphy_sleepm         : 1   ; /* [9]  */
        unsigned int    usbphy_wordinterface0 : 1   ; /* [10]  */
        unsigned int    reserved_0            : 21  ; /* [31..11]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_USBPHY_CTRL1_U;

/* Define the union U_SC_M3_CTRL0_U */
/* M3???ƼĴ???0 */
/* 0x20B0 */
typedef union tagScM3Ctrl0
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

} SC_M3_CTRL0_U;

/* Define the union U_SC_M3_CTRL1_U */
/* M3???ƼĴ???1 */
/* 0x20B4 */
typedef union tagScM3Ctrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    m3_rst_status         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_M3_CTRL1_U;

/* Define the union U_SC_VMID_CTRL0_U */
/* m3 vmid???? */
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

/* Define the union U_SC_VMID_CTRL1_U */
/* usb vmid???? */
/* 0x20E4 */
typedef union tagScVmidCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    usbhost_echi_vmid     : 8   ; /* [7..0]  */
        unsigned int    usbhost_ochi_vmid     : 8   ; /* [15..8]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_VMID_CTRL1_U;

/* Define the union U_SC_I2C_M_VMID_U */
/* i2c_m vmid???? */
/* 0x20E8 */
typedef union tagScI2cMVmid
{
    /* Define the struct bits */
    struct
    {
        unsigned int    i2c_m_vmid            : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2C_M_VMID_U;

/* Define the union U_SC_M3_REMAP_ADDR_EN_U */
/* m3??ַӳ??ʹ?? */
/* 0x2180 */
typedef union tagScM3RemapAddrEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    m3_remap_addr_en      : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_M3_REMAP_ADDR_EN_U;

/* Define the union U_SC_ITS_M3_INT_MUX_SEL_U */
/* ???ж??͵?ITS????M3????MUXѡ?? */
/* 0x21F0 */
typedef union tagScItsM3IntMuxSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    int_spi_mux_sel       : 1   ; /* [0]  */
        unsigned int    int_i2c2_mux_sel      : 1   ; /* [1]  */
        unsigned int    int_i2c1_mux_sel      : 1   ; /* [2]  */
        unsigned int    int_i2c0_mux_sel      : 1   ; /* [3]  */
        unsigned int    int_uart1_mux_sel     : 1   ; /* [4]  */
        unsigned int    int_uart0_mux_sel     : 1   ; /* [5]  */
        unsigned int    int_timer2_mux_sel    : 1   ; /* [6]  */
        unsigned int    int_timer1_mux_sel    : 1   ; /* [7]  */
        unsigned int    int_ext2_mux_sel      : 1   ; /* [8]  */
        unsigned int    int_ext1_mux_sel      : 1   ; /* [9]  */
        unsigned int    int_ext0_mux_sel      : 1   ; /* [10]  */
        unsigned int    reserved_0            : 21  ; /* [31..11]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ITS_M3_INT_MUX_SEL_U;

/* Define the union U_SC_FTE_MUX_CTRL_U */
/* FTE????ѡ???Ĵ??? */
/* 0x2200 */
typedef union tagScFteMuxCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    mux_sel_fte           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_FTE_MUX_CTRL_U;

/* Define the union U_SC_PM_CTRL0_U */
/* PW_STAT_CTRL?Ŀ??ƼĴ??? */
/* 0x2380 */
typedef union tagScPmCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pw_mode_ctrl          : 3   ; /* [2..0]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_CTRL0_U;

/* Define the union U_SC_PM_CTRL1_U */
/* PW_STAT_CTRL?Ŀ??ƼĴ??? */
/* 0x2384 */
typedef union tagScPmCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pwr_m3_ctrl_en        : 1   ; /* [0]  */
        unsigned int    pw_dn_4s_hard_invalid : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_CTRL1_U;

/* Define the union U_SC_PM_CTRL2_U */
/* PW_STAT_CTRL?Ŀ??ƼĴ??? */
/* 0x2388 */
typedef union tagScPmCtrl2
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pwr_m3_ctrl           : 3   ; /* [2..0]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_CTRL2_U;

/* Define the union U_SC_PM_INT_U */
/* PW_STAT_CTRL???ж?Դ?Ĵ??? */
/* 0x238C */
typedef union tagScPmInt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    timeout_10ms          : 3   ; /* [2..0]  */
        unsigned int    pw_btn_pw_dn          : 1   ; /* [3]  */
        unsigned int    pw_btn_pw_up          : 1   ; /* [4]  */
        unsigned int    pw_btn_pw_dn_4s_soft  : 1   ; /* [5]  */
        unsigned int    pw_btn_pw_dn_4s_hard  : 1   ; /* [6]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_INT_U;

/* Define the union U_SC_PM_INT_MASK_U */
/* PW_STAT_CTRL???ж??��μĴ??? */
/* 0x2390 */
typedef union tagScPmIntMask
{
    /* Define the struct bits */
    struct
    {
        unsigned int    timeout_10ms_int_mask : 1   ; /* [0]  */
        unsigned int    pw_btn_pw_dn_int_mask : 1   ; /* [1]  */
        unsigned int    pw_btn_pw_up_int_mask : 1   ; /* [2]  */
        unsigned int    pw_btn_pw_dn_4s_soft_int_mask : 1   ; /* [3]  */
        unsigned int    pw_btn_pw_dn_4s_hard_int_mask : 1   ; /* [4]  */
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_INT_MASK_U;

/* Define the union U_SC_PM_CTRL3_U */
/* ???ƹܽ?PM_CTL */
/* 0x2394 */
typedef union tagScPmCtrl3
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pad_pm_ctl_out        : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_CTRL3_U;

/* Define the union U_SC_PM_ST_U */
/* ?ϵ縴λָʾ״̬?ź? */
/* 0x2398 */
typedef union tagScPmSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pw_ctrl_st            : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_ST_U;

/* Define the union U_SC_BISR_RE_REPAIR_EN_U */
/* BISR??RE REPAIRʹ?ܼĴ??? */
/* 0x2D80 */
typedef union tagScBisrReRepairEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    bisr_re_repair_en     : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_BISR_RE_REPAIR_EN_U;

/* Define the union U_SC_BISR_INT_U */
/* BISR_TOP_IDIE???ж?Դ?Ĵ??? */
/* 0x2D90 */
typedef union tagScBisrInt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hard_repair_done      : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_BISR_INT_U;

/* Define the union U_SC_BISR_INT_MASK_U */
/* BISR_TOP_IDIE???ж??��μĴ??? */
/* 0x2DA0 */
typedef union tagScBisrIntMask
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hard_repair_done_int_mask : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_BISR_INT_MASK_U;

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

/* Define the union U_SC_SFC_MEM_CTRL_U */
/* sfc mem???ƼĴ??? */
/* 0x3030 */
typedef union tagScSfcMemCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rft_sfc          : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SFC_MEM_CTRL_U;

/* Define the union U_SC_SEC_MEM_CTRL_U */
/* sec mem???ƼĴ??? */
/* 0x3070 */
typedef union tagScSecMemCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rfs_sec          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_MEM_CTRL_U;

/* Define the union U_SC_WDG_CLK_ST_U */
/* WDGʱ??״̬?Ĵ??? */
/* 0x5300 */
typedef union tagScWdgClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_wdg_st            : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_WDG_CLK_ST_U;

/* Define the union U_SC_TIMER_CLK_ST_U */
/* TIMERʱ??״̬?Ĵ??? */
/* 0x5304 */
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

/* Define the union U_SC_UART_CLK_ST_U */
/* UARTʱ??״̬?Ĵ??? */
/* 0x5308 */
typedef union tagScUartClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_uart0_st          : 1   ; /* [0]  */
        unsigned int    clk_uart1_st          : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_UART_CLK_ST_U;

/* Define the union U_SC_ITS_CLK_ST_U */
/* ITSʱ??״̬?Ĵ??? */
/* 0x530C */
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

/* Define the union U_SC_IPCM_CLK_ST_U */
/* IPCMʱ??״̬?Ĵ??? */
/* 0x5310 */
typedef union tagScIpcmClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_ipcm_st           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_IPCM_CLK_ST_U;

/* Define the union U_SC_SRAM_CLK_ST_U */
/* SRAMʱ??״̬?Ĵ??? */
/* 0x5314 */
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

/* Define the union U_SC_SFC_CLK_ST_U */
/* SFCʱ??״̬?Ĵ??? */
/* 0x5318 */
typedef union tagScSfcClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_sfc_st            : 1   ; /* [0]  */
        unsigned int    clk_sfc_bus_st        : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SFC_CLK_ST_U;

/* Define the union U_SC_I2CM_CLK_ST_U */
/* I2CMʱ??״̬?Ĵ??? */
/* 0x531C */
typedef union tagScI2cmClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_i2c_m_st          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2CM_CLK_ST_U;

/* Define the union U_SC_I2C_CLK_ST_U */
/* I2Cʱ??״̬?Ĵ??? */
/* 0x5320 */
typedef union tagScI2cClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_i2c0_st           : 1   ; /* [0]  */
        unsigned int    clk_i2c1_st           : 1   ; /* [1]  */
        unsigned int    clk_i2c2_st           : 1   ; /* [2]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2C_CLK_ST_U;

/* Define the union U_SC_GPIO_CLK_ST_U */
/* GPIOʱ??״̬?Ĵ??? */
/* 0x5324 */
typedef union tagScGpioClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_gpio0_st          : 1   ; /* [0]  */
        unsigned int    clk_gpio1_st          : 1   ; /* [1]  */
        unsigned int    clk_gpio2_st          : 1   ; /* [2]  */
        unsigned int    clk_gpio3_st          : 1   ; /* [3]  */
        unsigned int    clk_gpio4_st          : 1   ; /* [4]  */
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_CLK_ST_U;

/* Define the union U_SC_CPU_CLK_ST_U */
/* M3 CPUʱ??״̬?Ĵ??? */
/* 0x5328 */
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

/* Define the union U_SC_USB_CLK_ST_U */
/* USBʱ??״̬?Ĵ??? */
/* 0x5334 */
typedef union tagScUsbClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_usb_ahb_st        : 1   ; /* [0]  */
        unsigned int    clk_usb_phy_core_st   : 1   ; /* [1]  */
        unsigned int    clk_usb_ohci_48m_st   : 1   ; /* [2]  */
        unsigned int    clk_usb_ohci_12m_st   : 1   ; /* [3]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_USB_CLK_ST_U;

/* Define the union U_SC_SPI_CLK_ST_U */
/* SPIʱ??״̬?Ĵ??? */
/* 0x5344 */
typedef union tagScSpiClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_spi_st            : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SPI_CLK_ST_U;

/* Define the union U_SC_SEC_CLK_ST_U */
/* SECʱ??״̬?Ĵ??? */
/* 0x535C */
typedef union tagScSecClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_sec_st            : 1   ; /* [0]  */
        unsigned int    clk_sec_ahb_st        : 1   ; /* [1]  */
        unsigned int    clk_sec_trace_dbg_st  : 1   ; /* [2]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_CLK_ST_U;

/* Define the union U_SC_WDG_RESET_ST_U */
/* WDG??λ״̬?Ĵ??? */
/* 0x5A00 */
typedef union tagScWdgResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    wdg_srst_st           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_WDG_RESET_ST_U;

/* Define the union U_SC_TIMER_RESET_ST_U */
/* TIMER??λ״̬?Ĵ??? */
/* 0x5A04 */
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

/* Define the union U_SC_UART_RESET_ST_U */
/* UART??λ״̬?Ĵ??? */
/* 0x5A08 */
typedef union tagScUartResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    uart0_srst_st         : 1   ; /* [0]  */
        unsigned int    uart1_srst_st         : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_UART_RESET_ST_U;

/* Define the union U_SC_ITS_RESET_ST_U */
/* ITS??λ״̬?Ĵ??? */
/* 0x5A0C */
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

/* Define the union U_SC_IPCM_RESET_ST_U */
/* IPCM??λ״̬?Ĵ??? */
/* 0x5A10 */
typedef union tagScIpcmResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ipcm_srst_st          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_IPCM_RESET_ST_U;

/* Define the union U_SC_SRAM_RESET_ST_U */
/* SRAM??λ״̬?Ĵ??? */
/* 0x5A14 */
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

/* Define the union U_SC_SFC_RESET_ST_U */
/* SFC??λ״̬?Ĵ??? */
/* 0x5A18 */
typedef union tagScSfcResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sfc_srst_st           : 1   ; /* [0]  */
        unsigned int    sfc_bus_srst_st       : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SFC_RESET_ST_U;

/* Define the union U_SC_I2CM_RESET_ST_U */
/* I2CM??λ״̬?Ĵ??? */
/* 0x5A1C */
typedef union tagScI2cmResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    i2c_m_srst_st         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2CM_RESET_ST_U;

/* Define the union U_SC_I2C_RESET_ST_U */
/* I2C??λ״̬?Ĵ??? */
/* 0x5A20 */
typedef union tagScI2cResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    i2c0_srst_st          : 1   ; /* [0]  */
        unsigned int    i2c1_srst_st          : 1   ; /* [1]  */
        unsigned int    i2c2_srst_st          : 1   ; /* [2]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_I2C_RESET_ST_U;

/* Define the union U_SC_GPIO_RESET_ST_U */
/* GPIO??λ״̬?Ĵ??? */
/* 0x5A24 */
typedef union tagScGpioResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gpio0_srst_st         : 1   ; /* [0]  */
        unsigned int    gpio1_srst_st         : 1   ; /* [1]  */
        unsigned int    gpio2_srst_st         : 1   ; /* [2]  */
        unsigned int    gpio3_srst_st         : 1   ; /* [3]  */
        unsigned int    gpio4_srst_st         : 1   ; /* [4]  */
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_RESET_ST_U;

/* Define the union U_SC_CPU_RESET_ST_U */
/* M3 CPU??λ״̬?Ĵ??? */
/* 0x5A28 */
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

/* Define the union U_SC_USB_RESET_ST_U */
/* USB??λ״̬?Ĵ??? */
/* 0x5A44 */
typedef union tagScUsbResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    usbhost_utmi0_srst_st : 1   ; /* [0]  */
        unsigned int    usbhost_phy0_srst_st  : 1   ; /* [1]  */
        unsigned int    usbhost_ahb_srst_st   : 1   ; /* [2]  */
        unsigned int    usbhost_phy0_port_srst_st : 1   ; /* [3]  */
        unsigned int    usbhost_phy0_por_srst_st : 1   ; /* [4]  */
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_USB_RESET_ST_U;

/* Define the union U_SC_SPI_RESET_ST_U */
/* SPI??λ״̬?Ĵ??? */
/* 0x5A4C */
typedef union tagScSpiResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    spi_srst_st           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SPI_RESET_ST_U;

/* Define the union U_SC_SEC_RESET_ST_U */
/* SEC??λ״̬?Ĵ??? */
/* 0x5A54 */
typedef union tagScSecResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sec_srst_st           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_RESET_ST_U;

/* Define the union U_SC_SEC_BUILD_RESET_ST_U */
/* SEC BUILD??λ״̬?Ĵ??? */
/* 0x5A5C */
typedef union tagScSecBuildResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sec_cluster0_srst_st  : 1   ; /* [0]  */
        unsigned int    sec_cluster0_ahb_srst_st : 1   ; /* [1]  */
        unsigned int    sec_build_srst_st0    : 1   ; /* [2]  */
        unsigned int    sec_build_ahb_srst_st0 : 1   ; /* [3]  */
        unsigned int    sec_build_srst_st1    : 1   ; /* [4]  */
        unsigned int    sec_build_ahb_srst_st1 : 1   ; /* [5]  */
        unsigned int    sec_build_srst_st2    : 1   ; /* [6]  */
        unsigned int    sec_build_ahb_srst_st2 : 1   ; /* [7]  */
        unsigned int    sec_build_srst_st3    : 1   ; /* [8]  */
        unsigned int    sec_build_ahb_srst_st3 : 1   ; /* [9]  */
        unsigned int    sec_cluster1_srst_st  : 1   ; /* [10]  */
        unsigned int    sec_cluster1_ahb_srst_st : 1   ; /* [11]  */
        unsigned int    sec_build_srst_st4    : 1   ; /* [12]  */
        unsigned int    sec_build_ahb_srst_st4 : 1   ; /* [13]  */
        unsigned int    sec_build_srst_st5    : 1   ; /* [14]  */
        unsigned int    sec_build_ahb_srst_st5 : 1   ; /* [15]  */
        unsigned int    sec_build_srst_st6    : 1   ; /* [16]  */
        unsigned int    sec_build_ahb_srst_st6 : 1   ; /* [17]  */
        unsigned int    sec_build_srst_st7    : 1   ; /* [18]  */
        unsigned int    sec_build_ahb_srst_st7 : 1   ; /* [19]  */
        unsigned int    sec_ahb_srst_st       : 1   ; /* [20]  */
        unsigned int    reserved_0            : 11  ; /* [31..21]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SEC_BUILD_RESET_ST_U;

/* Define the union U_SC_PW_CTRL_RESET_ST_U */
/* PW_CTRL??λ״̬?Ĵ??? */
/* 0x5A60 */
typedef union tagScPwCtrlResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pw_ctrl_srst_st       : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PW_CTRL_RESET_ST_U;

/* Define the union U_SC_MBIST_CPUI_ENABLE_U */
/* CPU????MBISTѡ???źţ?оƬ??·????ʹ?á? */
/* 0x5C00 */
typedef union tagScMbistCpuiEnable
{
    /* Define the struct bits */
    struct
    {
        unsigned int    mbist_cpui_enable     : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_MBIST_CPUI_ENABLE_U;

/* Define the union U_SC_MBIST_CPUI_RESET_N_U */
/* CPU????MBIST??λ?ź? */
/* 0x5C04 */
typedef union tagScMbistCpuiResetN
{
    /* Define the struct bits */
    struct
    {
        unsigned int    mbist_cpui_reset_n    : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_MBIST_CPUI_RESET_N_U;

/* Define the union U_SC_MBIST_CPUI_WRITE_EN_U */
/* DFT MBISTģʽ??TMB??·CPU2TAP?ӿ????üĴ?????оƬ??·????ʹ?á? */
/* 0x5C0C */
typedef union tagScMbistCpuiWriteEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    mbist_cpui_write_en   : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_MBIST_CPUI_WRITE_EN_U;

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

/* Define the union U_SC_PM_ST0_U */
/* PW_STAT_CTRL???ڲ?״̬ */
/* 0x6380 */
typedef union tagScPmSt0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pw_curr_stat          : 4   ; /* [3..0]  */
        unsigned int    reserved_0            : 28  ; /* [31..4]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_ST0_U;

/* Define the union U_SC_PM_ST1_U */
/* ��?Թܽŵ?PWRGD״̬ */
/* 0x6384 */
typedef union tagScPmSt1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pwrgd                 : 3   ; /* [2..0]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_ST1_U;

/* Define the union U_SC_PM_ST2_U */
/* ???????ܽŵ?PWR_CTRL2~0 */
/* 0x6388 */
typedef union tagScPmSt2
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pwr_ctrl              : 3   ; /* [2..0]  */
        unsigned int    reserved_0            : 29  ; /* [31..3]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_ST2_U;

/* Define the union U_SC_PM_ST3_U */
/* ME???عܽ?״̬ */
/* 0x638C */
typedef union tagScPmSt3
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pad_sm_alert_n_in     : 1   ; /* [0]  */
        unsigned int    pad_ext_int0_in       : 1   ; /* [1]  */
        unsigned int    pad_ext_int1_in       : 1   ; /* [2]  */
        unsigned int    pad_ext_int2_in       : 1   ; /* [3]  */
        unsigned int    pad_me_mst_in         : 1   ; /* [4]  */
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PM_ST3_U;

/* Define the union U_SC_DBG_AUTH_CTRL_U */
/* ??ȫ?ȼ???Ȩ???ƼĴ?????
??ע?⣺1???˼Ĵ????ռ??????ǰ?ȫ???ʲ??ܳɹ???2??Ĭ?Ͼ??Ǵ򿪵???ģʽ????©??????????????ʱ????ʼ???رյ??Թ??ܣ? */
/* 0x6700 */
typedef union tagScDbgAuthCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rsa_djtag_sec_acc_en  : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DBG_AUTH_CTRL_U;

/* Define the union U_SC_BOOT_CTRL_ST_U */
/* SC_BOOT_CTRL_ST??ʾCPU?����??Ƶ?PAD??eFuse?ź?״̬ */
/* 0xE084 */
typedef union tagScBootCtrlSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    efuse_ns_forbid       : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_BOOT_CTRL_ST_U;

/* Define the union U_SC_EFUSE_RD_ADDR_U */
/* ??DIEIDʱ???õ?ַ????ȫ?Ĵ????? */
/* 0xE100 */
typedef union tagScEfuseRdAddr
{
    /* Define the struct bits */
    struct
    {
        unsigned int    efuse_rd_addr         : 7   ; /* [6..0]  */
        unsigned int    reserved_0            : 25  ; /* [31..7]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_EFUSE_RD_ADDR_U;

#endif

#endif // __M3_SUB_REG_OFFSET_H__
