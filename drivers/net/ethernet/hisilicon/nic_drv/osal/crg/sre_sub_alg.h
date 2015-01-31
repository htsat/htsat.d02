/******************************************************************************

                  ??Ȩ???? (C), 2011-2021, ??Ϊ???????޹?˾

 ******************************************************************************
  ?? ?? ??   : sre_crs9.h
  ?? ?? ??   : ????
  ??    ??   : z00176027
  ????????   : 2013??10??17??
  ?????޸?   :
  ????????   : p660??ϵͳ9 ??λ???⸴λ????ͷ?ļ?
  ?????б?   :
  ?޸???ʷ   :
  1.??    ??   : 2013??10??17??
    ??    ??   : z00176027
    ?޸?????   : ?????ļ?

******************************************************************************/
#ifndef __C_SRE_SUB_ALG_H__
#define __C_SRE_SUB_ALG_H__

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

/* alg_hccs_subctrl ģ???Ĵ???????ַ */
#define ALG_SUB_BASE                              (0xD0000000)
#define ALG_SUB_BASE_SIZE                         (0x10000)


/******************************************************************************/
/*                      PHOSPHOR ALG_SUB Registers' Definitions                            */
/******************************************************************************/

#define ALG_SUB_SC_PLLFCTRL0_REG               (ALG_SUB_BASE + 0x0)    /* PLL0???ƼĴ???0?? */                                                            
#define ALG_SUB_SC_PLLFCTRL1_REG               (ALG_SUB_BASE + 0x4)    /* PLL0???ƼĴ???1?? */                                                            
#define ALG_SUB_SC_PLLFCTRL2_REG               (ALG_SUB_BASE + 0x8)    /* PLL1???ƼĴ???0?? */                                                            
#define ALG_SUB_SC_PLLFCTRL3_REG               (ALG_SUB_BASE + 0xC)    /* PLL1???ƼĴ???1?? */                                                            
#define ALG_SUB_SC_PLLFCTRL4_REG               (ALG_SUB_BASE + 0x10)   /* PLL2???ƼĴ???0?? */                                                            
#define ALG_SUB_SC_PLLFCTRL5_REG               (ALG_SUB_BASE + 0x14)   /* PLL2???ƼĴ???1?? */                                                            
#define ALG_SUB_SC_PLLFCTRL6_REG               (ALG_SUB_BASE + 0x18)   /* PLL3???ƼĴ???0?? */                                                            
#define ALG_SUB_SC_PLLFCTRL7_REG               (ALG_SUB_BASE + 0x1C)   /* PLL3???ƼĴ???1?? */                                                            
#define ALG_SUB_SC_PLL_CLK_BYPASS0_REG         (ALG_SUB_BASE + 0x20)   /* PLL???ع???ʱ??ѡ???? */                                           
#define ALG_SUB_SC_PLLFCTRL8_REG               (ALG_SUB_BASE + 0x24)   /* pll4???ƼĴ???0?? */                                                            
#define ALG_SUB_SC_PLLFCTRL9_REG               (ALG_SUB_BASE + 0x28)   /* pll4???ƼĴ???1?? */                                                            
#define ALG_SUB_SC_PLL_CLK_BYPASS1_REG         (ALG_SUB_BASE + 0x2C)   /* PLL???ع???ʱ??ѡ???? */                                           
#define ALG_SUB_SC_GPIO_DB_CTRL_REG            (ALG_SUB_BASE + 0x100)  /* ????gpip dbʱ??ѡ?? */                                                          
#define ALG_SUB_SC_SFC_CLK_CTRL_REG            (ALG_SUB_BASE + 0x104)  /* ????SFCʱ??ѡ?? */                                                              
#define ALG_SUB_SC_ALL_SCAN_CTRL_REG           (ALG_SUB_BASE + 0x150)  /* ALL SCAN???ƼĴ??? */                                                          
#define ALG_SUB_SC_SYSRST_CTRL_REG             (ALG_SUB_BASE + 0x200)  /* ϵͳ?���λ???ƼĴ??? */                                                             
#define ALG_SUB_SC_ITS_CLK_EN_REG              (ALG_SUB_BASE + 0x318)  /* ITSʱ??ʹ?ܼĴ??? */                                                             
#define ALG_SUB_SC_ITS_CLK_DIS_REG             (ALG_SUB_BASE + 0x31C)  /* ITSʱ?ӽ?ֹ?Ĵ??? */                                                             
#define ALG_SUB_SC_PA_CLK_EN_REG               (ALG_SUB_BASE + 0x358)  /* PAʱ??ʹ?ܼĴ??? */                                                              
#define ALG_SUB_SC_PA_CLK_DIS_REG              (ALG_SUB_BASE + 0x35C)  /* PAʱ?ӽ?ֹ?Ĵ??? */                                                              
#define ALG_SUB_SC_HLLC_CLK_EN_REG             (ALG_SUB_BASE + 0x360)  /* HLLCʱ??ʹ?ܼĴ??? */                                                            
#define ALG_SUB_SC_HLLC_CLK_DIS_REG            (ALG_SUB_BASE + 0x364)  /* HLLCʱ?ӽ?ֹ?Ĵ??? */                                                            
#define ALG_SUB_SC_REF_CLK_EN_REG              (ALG_SUB_BASE + 0x370)  /* refʱ??ʹ?ܼĴ??? */                                                             
#define ALG_SUB_SC_REF_CLK_DIS_REG             (ALG_SUB_BASE + 0x374)  /* refʱ?ӽ?ֹ?Ĵ??? */                                                             
#define ALG_SUB_SC_GPIO_DB_CLK_EN_REG          (ALG_SUB_BASE + 0x378)  /* gpio_dbʱ??ʹ?ܼĴ??? */                                                         
#define ALG_SUB_SC_GPIO_DB_CLK_DIS_REG         (ALG_SUB_BASE + 0x37C)  /* gpio_dbʱ?ӽ?ֹ?Ĵ??? */                                                         
#define ALG_SUB_SC_DJTAG_CLK_EN_REG            (ALG_SUB_BASE + 0x380)  /* djtagʱ??ʹ?ܼĴ??? */                                                           
#define ALG_SUB_SC_DJTAG_CLK_DIS_REG           (ALG_SUB_BASE + 0x384)  /* djtagʱ?ӽ?ֹ?Ĵ??? */                                                           
#define ALG_SUB_SC_HLLC_RXTX_CLK_EN_REG        (ALG_SUB_BASE + 0x390)  /* hllc rxtxʱ??ʹ?ܼĴ??? */                                                       
#define ALG_SUB_SC_HLLC_RXTX_CLK_DIS_REG       (ALG_SUB_BASE + 0x394)  /* hllc rxtxʱ?ӽ?ֹ?Ĵ??? */                                                       
#define ALG_SUB_SC_RSA_CLK_EN_REG              (ALG_SUB_BASE + 0x3A0)  /* RSAʱ??ʹ?ܼĴ??? */                                                             
#define ALG_SUB_SC_RSA_CLK_DIS_REG             (ALG_SUB_BASE + 0x3A4)  /* RSAʱ?ӽ?ֹ?Ĵ??? */                                                             
#define ALG_SUB_SC_RDE_CLK_EN_REG              (ALG_SUB_BASE + 0x3A8)  /* RDEʱ??ʹ?ܼĴ??? */                                                             
#define ALG_SUB_SC_RDE_CLK_DIS_REG             (ALG_SUB_BASE + 0x3AC)  /* RDEʱ?ӽ?ֹ?Ĵ??? */                                                             
#define ALG_SUB_SC_RNG_CLK_EN_REG              (ALG_SUB_BASE + 0x3B0)  /* RNGʱ??ʹ?ܼĴ??? */                                                             
#define ALG_SUB_SC_RNG_CLK_DIS_REG             (ALG_SUB_BASE + 0x3B4)  /* RNGʱ?ӽ?ֹ?Ĵ??? */                                                             
#define ALG_SUB_SC_SEC_CLK_EN_REG              (ALG_SUB_BASE + 0x3B8)  /* SECʱ??ʹ?ܼĴ??? */                                                             
#define ALG_SUB_SC_SEC_CLK_DIS_REG             (ALG_SUB_BASE + 0x3BC)  /* SECʱ?ӽ?ֹ?Ĵ??? */                                                             
#define ALG_SUB_SC_ITS_RESET_REQ_REG           (ALG_SUB_BASE + 0xA18)  /* ITS?���λ???????ƼĴ??? */                                                          
#define ALG_SUB_SC_ITS_RESET_DREQ_REG          (ALG_SUB_BASE + 0xA1C)  /* ITS?���λȥ???????ƼĴ??? */                                                         
#define ALG_SUB_SC_HILINK_PCS_RESET_REQ_REG    (ALG_SUB_BASE + 0xA58)  /* HILINK PCS?���λ???????ƼĴ??? */                                                   
#define ALG_SUB_SC_HILINK_PCS_RESET_DREQ_REG   (ALG_SUB_BASE + 0xA5C)  /* HILINK PCS?���λȥ???????ƼĴ??? */                                                  
#define ALG_SUB_SC_HLLC_RXTX_RESET_REQ_REG     (ALG_SUB_BASE + 0xA60)  /* hllc rxtx?���λ???????ƼĴ??? */                                                    
#define ALG_SUB_SC_HLLC_RXTX_RESET_DREQ_REG    (ALG_SUB_BASE + 0xA64)  /* hllc rxtx?���λȥ???????ƼĴ??? */                                                   
#define ALG_SUB_SC_PA_RESET_REQ_REG            (ALG_SUB_BASE + 0xA78)  /* PA?���λ???????ƼĴ??? */                                                           
#define ALG_SUB_SC_PA_RESET_DREQ_REG           (ALG_SUB_BASE + 0xA7C)  /* PA?���λȥ???????ƼĴ??? */                                                          
#define ALG_SUB_SC_HLLC_RESET_REQ_REG          (ALG_SUB_BASE + 0xA80)  /* HLLC?���λ???????ƼĴ??? */                                                         
#define ALG_SUB_SC_HLLC_RESET_DREQ_REG         (ALG_SUB_BASE + 0xA84)  /* HLLC?���λȥ???????ƼĴ??? */                                                        
#define ALG_SUB_SC_DJTAG_RESET_REQ_REG         (ALG_SUB_BASE + 0xA90)  /* DJTAG?���λ???????ƼĴ??? */                                                        
#define ALG_SUB_SC_DJTAG_RESET_DREQ_REG        (ALG_SUB_BASE + 0xA94)  /* DJTAG?���λȥ???????ƼĴ??? */                                                       
#define ALG_SUB_SC_RSA_RESET_REQ_REG           (ALG_SUB_BASE + 0xA98)  /* RSA?���λ???????ƼĴ??? */                                                          
#define ALG_SUB_SC_RSA_RESET_DREQ_REG          (ALG_SUB_BASE + 0xA9C)  /* RSA?���λȥ???????ƼĴ??? */                                                         
#define ALG_SUB_SC_RDE_RESET_REQ_REG           (ALG_SUB_BASE + 0xAA0)  /* RDE?���λ???????ƼĴ??? */                                                          
#define ALG_SUB_SC_RDE_RESET_DREQ_REG          (ALG_SUB_BASE + 0xAA4)  /* RDE?���λȥ???????ƼĴ??? */                                                         
#define ALG_SUB_SC_SEC_RESET_REQ_REG           (ALG_SUB_BASE + 0xAA8)  /* SEC?���λ???????ƼĴ??? */                                                          
#define ALG_SUB_SC_SEC_RESET_DREQ_REG          (ALG_SUB_BASE + 0xAAC)  /* SEC?���λȥ???????ƼĴ??? */                                                         
#define ALG_SUB_SC_RNG_RESET_REQ_REG           (ALG_SUB_BASE + 0xAB0)  /* RNG?���λ???????ƼĴ??? */                                                          
#define ALG_SUB_SC_RNG_RESET_DREQ_REG          (ALG_SUB_BASE + 0xAB4)  /* RNG?���λȥ???????ƼĴ??? */                                                         
#define ALG_SUB_SC_SEC_BUILD_RESET_REQ_REG     (ALG_SUB_BASE + 0xAB8)  /* SEC BUILD?���λ???????ƼĴ??? */                                                    
#define ALG_SUB_SC_SEC_BUILD_RESET_DREQ_REG    (ALG_SUB_BASE + 0xABC)  /* SEC BUILD?���λȥ???????ƼĴ??? */                                                   
#define ALG_SUB_SC_PCS_LOCAL_RESET_REQ_REG     (ALG_SUB_BASE + 0xAC0)  /* PCS LOCAL?���λ???????ƼĴ??? */                                                    
#define ALG_SUB_SC_PCS_LOCAL_RESET_DREQ_REG    (ALG_SUB_BASE + 0xAC4)  /* PCS LOCAL?���λȥ???????ƼĴ??? */                                                   
#define ALG_SUB_SC_DISPATCH_DAW_EN_REG         (ALG_SUB_BASE + 0x1000) /* dispatch daw en???? */                                                      
#define ALG_SUB_SC_DISPATCH_DAW_ARRAY0_REG     (ALG_SUB_BASE + 0x1004) /* dispatch daw????????0 */                                                      
#define ALG_SUB_SC_DISPATCH_DAW_ARRAY1_REG     (ALG_SUB_BASE + 0x1008) /* dispatch daw????????1 */                                                      
#define ALG_SUB_SC_DISPATCH_DAW_ARRAY2_REG     (ALG_SUB_BASE + 0x100C) /* dispatch daw????????2 */                                                      
#define ALG_SUB_SC_DISPATCH_DAW_ARRAY3_REG     (ALG_SUB_BASE + 0x1010) /* dispatch daw????????3 */                                                      
#define ALG_SUB_SC_DISPATCH_DAW_ARRAY4_REG     (ALG_SUB_BASE + 0x1014) /* dispatch daw????????4 */                                                      
#define ALG_SUB_SC_DISPATCH_DAW_ARRAY5_REG     (ALG_SUB_BASE + 0x1018) /* dispatch daw????????5 */                                                      
#define ALG_SUB_SC_DISPATCH_DAW_ARRAY6_REG     (ALG_SUB_BASE + 0x101C) /* dispatch daw????????6 */                                                      
#define ALG_SUB_SC_DISPATCH_DAW_ARRAY7_REG     (ALG_SUB_BASE + 0x1020) /* dispatch daw????????7 */                                                      
#define ALG_SUB_SC_DISPATCH_RETRY_CONTROL_REG  (ALG_SUB_BASE + 0x1030) /* dispatch retry???ƼĴ??? */                                                    
#define ALG_SUB_SC_DISPATCH_INTMASK_REG        (ALG_SUB_BASE + 0x1100) /* dispatch???ж??��μĴ??? */                                                       
#define ALG_SUB_SC_DISPATCH_RAWINT_REG         (ALG_SUB_BASE + 0x1104) /* dispatch??ԭʼ?ж?״̬?Ĵ??? */                                                     
#define ALG_SUB_SC_DISPATCH_INTSTAT_REG        (ALG_SUB_BASE + 0x1108) /* dispatch???��κ????ж?״̬?Ĵ??? */                                                   
#define ALG_SUB_SC_DISPATCH_INTCLR_REG         (ALG_SUB_BASE + 0x110C) /* dispatch???ж??????Ĵ??? */                                                       
#define ALG_SUB_SC_DISPATCH_ERRSTAT_REG        (ALG_SUB_BASE + 0x1110) /* dispatch??ERR״̬?Ĵ??? */                                                      
#define ALG_SUB_SC_DISPATCH_REMAP_CTRL_REG     (ALG_SUB_BASE + 0x1200) /* subsys??????Remap?Ĵ??? */                                                      
#define ALG_SUB_SC_TSENSOR_CTRL0_REG           (ALG_SUB_BASE + 0x20D0) /* TSENSOR???ƼĴ???0 */                                                          
#define ALG_SUB_SC_TSENSOR_CTRL1_REG           (ALG_SUB_BASE + 0x20D4) /* TSENSOR???ƼĴ???1 */                                                          
#define ALG_SUB_SC_BOOTROM_CTRL_REG            (ALG_SUB_BASE + 0x20F0) /* BOOTROM???ƼĴ??? */                                                           
#define ALG_SUB_SC_FTE_MUX_CTRL_REG            (ALG_SUB_BASE + 0x2200) /* FTE????ѡ???Ĵ??? */                                                             
#define ALG_SUB_SC_RSA_ADDR_H_REG              (ALG_SUB_BASE + 0x2E00) /* RSA??20λ??ַ?????Ĵ??? */                                                         
#define ALG_SUB_SC_SMMU_MEM_CTRL0_REG          (ALG_SUB_BASE + 0x3000) /* smmu mem???ƼĴ???0 */                                                         
#define ALG_SUB_SC_SMMU_MEM_CTRL1_REG          (ALG_SUB_BASE + 0x3004) /* smmu mem???ƼĴ???1 */                                                         
#define ALG_SUB_SC_SMMU_MEM_CTRL2_REG          (ALG_SUB_BASE + 0x3008) /* smmu mem???ƼĴ???2 */                                                         
#define ALG_SUB_SC_RSA_MEM_CTRL_REG            (ALG_SUB_BASE + 0x3030) /* rsa mem???ƼĴ??? */                                                           
#define ALG_SUB_SC_HLLC_MEM_CTRL_REG           (ALG_SUB_BASE + 0x3040) /* hllc mem???ƼĴ??? */                                                          
#define ALG_SUB_SC_PA_MEM_CTRL0_REG            (ALG_SUB_BASE + 0x3050) /* pa mem???ƼĴ???0 */                                                           
#define ALG_SUB_SC_PA_MEM_CTRL1_REG            (ALG_SUB_BASE + 0x3054) /* pa mem???ƼĴ???1 */                                                           
#define ALG_SUB_SC_RDE_MEM_CTRL_REG            (ALG_SUB_BASE + 0x3060) /* rde mem???ƼĴ??? */                                                           
#define ALG_SUB_SC_SEC_MEM_CTRL_REG            (ALG_SUB_BASE + 0x3070) /* sec mem???ƼĴ??? */                                                           
#define ALG_SUB_SC_PLL_LOCK_ST_REG             (ALG_SUB_BASE + 0x5000) /* PLL????״̬?Ĵ??? */                                                             
#define ALG_SUB_SC_ITS_CLK_ST_REG              (ALG_SUB_BASE + 0x530C) /* ITSʱ??״̬?Ĵ??? */                                                             
#define ALG_SUB_SC_PA_CLK_ST_REG               (ALG_SUB_BASE + 0x532C) /* PAʱ??״̬?Ĵ??? */                                                              
#define ALG_SUB_SC_HLLC_CLK_ST_REG             (ALG_SUB_BASE + 0x5330) /* HLLCʱ??״̬?Ĵ??? */                                                            
#define ALG_SUB_SC_REF_CLK_ST_REG              (ALG_SUB_BASE + 0x5338) /* refʱ??״̬?Ĵ??? */                                                             
#define ALG_SUB_SC_GPIO_DB_CLK_ST_REG          (ALG_SUB_BASE + 0x533C) /* gpio_dbʱ??״̬?Ĵ??? */                                                         
#define ALG_SUB_SC_DJTAG_CLK_ST_REG            (ALG_SUB_BASE + 0x5340) /* djtagʱ??״̬?Ĵ??? */                                                           
#define ALG_SUB_SC_HLLC_RXTX_CLK_ST_REG        (ALG_SUB_BASE + 0x5348) /* hllc rxtxʱ??״̬?Ĵ??? */                                                       
#define ALG_SUB_SC_RSA_CLK_ST_REG              (ALG_SUB_BASE + 0x5350) /* RSAʱ??״̬?Ĵ??? */                                                             
#define ALG_SUB_SC_RDE_CLK_ST_REG              (ALG_SUB_BASE + 0x5354) /* RDEʱ??״̬?Ĵ??? */                                                             
#define ALG_SUB_SC_RNG_CLK_ST_REG              (ALG_SUB_BASE + 0x5358) /* RNGʱ??״̬?Ĵ??? */                                                             
#define ALG_SUB_SC_SEC_CLK_ST_REG              (ALG_SUB_BASE + 0x535C) /* SECʱ??״̬?Ĵ??? */                                                             
#define ALG_SUB_SC_ITS_RESET_ST_REG            (ALG_SUB_BASE + 0x5A0C) /* ITS??λ״̬?Ĵ??? */                                                             
#define ALG_SUB_SC_HILINK_PCS_RESET_ST_REG     (ALG_SUB_BASE + 0x5A2C) /* HILINK_PCS??λ״̬?Ĵ??? */                                                      
#define ALG_SUB_SC_HLLC_RXTX_RESET_ST_REG      (ALG_SUB_BASE + 0x5A30) /* hllc rxtx??λ״̬?Ĵ??? */                                                       
#define ALG_SUB_SC_PA_RESET_ST_REG             (ALG_SUB_BASE + 0x5A3C) /* PA??λ״̬?Ĵ??? */                                                              
#define ALG_SUB_SC_HLLC_RESET_ST_REG           (ALG_SUB_BASE + 0x5A40) /* HLLC??λ״̬?Ĵ??? */                                                            
#define ALG_SUB_SC_DJTAG_RESET_ST_REG          (ALG_SUB_BASE + 0x5A48) /* DJTAG??λ״̬?Ĵ??? */                                                           
#define ALG_SUB_SC_RSA_RESET_ST_REG            (ALG_SUB_BASE + 0x5A4C) /* RSA??λ״̬?Ĵ??? */                                                             
#define ALG_SUB_SC_RDE_RESET_ST_REG            (ALG_SUB_BASE + 0x5A50) /* RDE??λ״̬?Ĵ??? */                                                             
#define ALG_SUB_SC_SEC_RESET_ST_REG            (ALG_SUB_BASE + 0x5A54) /* SEC??λ״̬?Ĵ??? */                                                             
#define ALG_SUB_SC_RNG_RESET_ST_REG            (ALG_SUB_BASE + 0x5A58) /* RNG??λ״̬?Ĵ??? */                                                             
#define ALG_SUB_SC_SEC_BUILD_RESET_ST_REG      (ALG_SUB_BASE + 0x5A5C) /* SEC BUILD??λ״̬?Ĵ??? */                                                       
#define ALG_SUB_SC_PCS_LOCAL_RESET_ST_REG      (ALG_SUB_BASE + 0x5A60) /* PCS LOCAL?���λ????״̬?Ĵ??? */                                                    
#define ALG_SUB_SC_TSENSOR_ST_REG              (ALG_SUB_BASE + 0x6040) /* TSENSOR״̬?Ĵ??? */                                                           
#define ALG_SUB_SC_DJTAG_INT_REG               (ALG_SUB_BASE + 0x6600) /* DJTAG Master??״̬????ʱ?ж?Դ?Ĵ??? */                                               
#define ALG_SUB_SC_DBG_AUTH_CTRL_REG           (ALG_SUB_BASE + 0x6700) /* ??ȫ?ȼ???Ȩ???ƼĴ??����?ע?⣺1???˼Ĵ????ռ??????ǰ?ȫ???ʲ??ܳɹ???2??Ĭ?Ͼ??Ǵ򿪵???ģʽ????©??????????????ʱ????ʼ???رյ??Թ??ܣ? */ 
#define ALG_SUB_SC_DJTAG_MSTR_EN_REG           (ALG_SUB_BASE + 0x6800) /* SC_DJTAG_MSTR_ENΪDJTAG Masterʹ?ܿ??? */                                      
#define ALG_SUB_SC_DJTAG_MSTR_START_EN_REG     (ALG_SUB_BASE + 0x6804) /* SC_DJTAG_MSTR_START_ENΪDJTAG Master????chain��??startʹ?? */                    
#define ALG_SUB_SC_DJTAG_SEC_ACC_EN_REG        (ALG_SUB_BASE + 0x6808) /* DJTAG???ʸ?ģ???ڰ?ȫ?��??Ĵ????İ?ȫ???ʿ???ʹ?ܡ???ע?⣺1???˼Ĵ????ռ??????ǰ?ȫ???ʲ??ܳɹ????? */                  
#define ALG_SUB_SC_DJTAG_DEBUG_MODULE_SEL_REG  (ALG_SUB_BASE + 0x680C) /* SC_DJTAG_DEBUG_MODULE_SELΪDJTAG Master???÷???ģ???Ĵ??? */                        
#define ALG_SUB_SC_DJTAG_MSTR_WR_REG           (ALG_SUB_BASE + 0x6810) /* SC_DJTAG_MSTR_WRΪDJTAG Master?Ķ?д?????ź? */                                   
#define ALG_SUB_SC_DJTAG_CHAIN_UNIT_CFG_EN_REG (ALG_SUB_BASE + 0x6814) /* SC_DJTAG_CHAIN_UNIT_CFG_ENΪDJTAG Master??chain��?ϵ?Ԫ?ķ???ʹ?? */                 
#define ALG_SUB_SC_DJTAG_MSTR_ADDR_REG         (ALG_SUB_BASE + 0x6818) /* SC_DJTAG_MSTR_ADDRΪDJTAG Master???÷???ģ????ƫ?Ƶ?ַ?Ĵ??? */                          
#define ALG_SUB_SC_DJTAG_MSTR_DATA_REG         (ALG_SUB_BASE + 0x681C) /* SC_DJTAG_MSTR_DATAΪDJTAG Master??д???? */                                    
#define ALG_SUB_SC_DJTAG_TMOUT_REG             (ALG_SUB_BASE + 0x6820) /* SC_DJTAG_TMOUTΪIDIE??DJTAG Master??״̬????ʱ??ֵ */                               
#define ALG_SUB_SC_TDRE_OP_ADDR_REG            (ALG_SUB_BASE + 0x6824) /* SC_TDRE_OP_ADDRΪDJTAG Master????TDREģ????ƫ?Ƶ?ַ?Ĵ????Ͳ??????ͼĴ??? */                   
#define ALG_SUB_SC_TDRE_WDATA_REG              (ALG_SUB_BASE + 0x6828) /* SC_TDRE_WDATAΪDJTAG Master??дTDRE???? */                                     
#define ALG_SUB_SC_TDRE_REPAIR_EN_REG          (ALG_SUB_BASE + 0x682C) /* SC_TDRE_REPAIR_ENΪDJTAG Master??TDRE REPAIRʹ?? */                           
#define ALG_SUB_SC_ECO_RSV0_REG                (ALG_SUB_BASE + 0x8000) /* ECO ?Ĵ???0 */                                                               
#define ALG_SUB_SC_ECO_RSV1_REG                (ALG_SUB_BASE + 0x8004) /* ECO ?Ĵ???1 */                                                               
#define ALG_SUB_SC_ECO_RSV2_REG                (ALG_SUB_BASE + 0x8008) /* ECO ?Ĵ???2 */                                                               
#define ALG_SUB_SC_DJTAG_RD_DATA0_REG          (ALG_SUB_BASE + 0xE800) /* DJTAGɨ??��?ϵ?һ??ģ???????ݼĴ??? */                                                   
#define ALG_SUB_SC_DJTAG_RD_DATA1_REG          (ALG_SUB_BASE + 0xE804) /* DJTAGɨ??��?ϵڶ???ģ???????ݼĴ??? */                                                   
#define ALG_SUB_SC_DJTAG_RD_DATA2_REG          (ALG_SUB_BASE + 0xE808) /* DJTAGɨ??��?ϵ?????ģ???????ݼĴ??? */                                                   
#define ALG_SUB_SC_DJTAG_RD_DATA3_REG          (ALG_SUB_BASE + 0xE80C) /* DJTAGɨ??��?ϵ??ĸ?ģ???????ݼĴ??? */                                                   
#define ALG_SUB_SC_DJTAG_RD_DATA4_REG          (ALG_SUB_BASE + 0xE810) /* DJTAGɨ??��?ϵ?????ģ???????ݼĴ??? */                                                   
#define ALG_SUB_SC_DJTAG_RD_DATA5_REG          (ALG_SUB_BASE + 0xE814) /* DJTAGɨ??��?ϵ?????ģ???????ݼĴ??? */                                                   
#define ALG_SUB_SC_DJTAG_RD_DATA6_REG          (ALG_SUB_BASE + 0xE818) /* DJTAGɨ??��?ϵ??߸?ģ???????ݼĴ??? */                                                   
#define ALG_SUB_SC_DJTAG_RD_DATA7_REG          (ALG_SUB_BASE + 0xE81C) /* DJTAGɨ??��?ϵڰ˸?ģ???????ݼĴ??? */                                                   
#define ALG_SUB_SC_DJTAG_RD_DATA8_REG          (ALG_SUB_BASE + 0xE820) /* DJTAGɨ??��?ϵھŸ?ģ???????ݼĴ??? */                                                   
#define ALG_SUB_SC_DJTAG_RD_DATA9_REG          (ALG_SUB_BASE + 0xE824) /* DJTAGɨ??��?ϵ?ʮ??ģ???????ݼĴ??? */                                                   
#define ALG_SUB_SC_DJTAG_OP_ST_REG             (ALG_SUB_BASE + 0xE828) /* DJTAG????״̬?Ĵ??? */                                                           
#define ALG_SUB_SC_TDRE_RDATA1_REG             (ALG_SUB_BASE + 0xE82C) /* DJTAG????TDREģ???Ķ????ݸ?32bit */                                                
#define ALG_SUB_SC_TDRE_RDATA0_REG             (ALG_SUB_BASE + 0xE830) /* DJTAG????TDREģ???Ķ????ݵ?32bit */                                                


#if(ENDNESS == ENDNESS_BIG)
/* Define the union U_SC_PLLFCTRL0_U */
/* PLL0???ƼĴ???0?? */
/* 0x0 */
typedef union tagScPllfctrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 1   ; /* [31]  */
        unsigned int    pll0_foutvcopd        : 1   ; /* [30]  */
        unsigned int    pll0_foutpostdivpd    : 1   ; /* [29]  */
        unsigned int    pll0_fout4phasepd     : 1   ; /* [28]  */
        unsigned int    pll0_dacpd            : 1   ; /* [27]  */
        unsigned int    pll0_dsmpd            : 1   ; /* [26]  */
        unsigned int    pll0_pd               : 1   ; /* [25]  */
        unsigned int    pll0_bypass           : 1   ; /* [24]  */
        unsigned int    pll0_postdiv2         : 3   ; /* [23..21]  */
        unsigned int    pll0_postdiv1         : 3   ; /* [20..18]  */
        unsigned int    pll0_fbdiv            : 12  ; /* [17..6]  */
        unsigned int    pll0_refdiv           : 6   ; /* [5..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL0_U;

/* Define the union U_SC_PLLFCTRL1_U */
/* PLL0???ƼĴ???1?? */
/* 0x4 */
typedef union tagScPllfctrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
        unsigned int    pll0_frac             : 24  ; /* [23..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL1_U;

/* Define the union U_SC_PLLFCTRL2_U */
/* PLL1???ƼĴ???0?? */
/* 0x8 */
typedef union tagScPllfctrl2
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 1   ; /* [31]  */
        unsigned int    pll1_foutvcopd        : 1   ; /* [30]  */
        unsigned int    pll1_foutpostdivpd    : 1   ; /* [29]  */
        unsigned int    pll1_fout4phasepd     : 1   ; /* [28]  */
        unsigned int    pll1_dacpd            : 1   ; /* [27]  */
        unsigned int    pll1_dsmpd            : 1   ; /* [26]  */
        unsigned int    pll1_pd               : 1   ; /* [25]  */
        unsigned int    pll1_bypass           : 1   ; /* [24]  */
        unsigned int    pll1_postdiv2         : 3   ; /* [23..21]  */
        unsigned int    pll1_postdiv1         : 3   ; /* [20..18]  */
        unsigned int    pll1_fbdiv            : 12  ; /* [17..6]  */
        unsigned int    pll1_refdiv           : 6   ; /* [5..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL2_U;

/* Define the union U_SC_PLLFCTRL3_U */
/* PLL1???ƼĴ???1?? */
/* 0xC */
typedef union tagScPllfctrl3
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
        unsigned int    pll1_frac             : 24  ; /* [23..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL3_U;

/* Define the union U_SC_PLLFCTRL4_U */
/* PLL2???ƼĴ???0?? */
/* 0x10 */
typedef union tagScPllfctrl4
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 1   ; /* [31]  */
        unsigned int    pll2_foutvcopd        : 1   ; /* [30]  */
        unsigned int    pll2_foutpostdivpd    : 1   ; /* [29]  */
        unsigned int    pll2_fout4phasepd     : 1   ; /* [28]  */
        unsigned int    pll2_dacpd            : 1   ; /* [27]  */
        unsigned int    pll2_dsmpd            : 1   ; /* [26]  */
        unsigned int    pll2_pd               : 1   ; /* [25]  */
        unsigned int    pll2_bypass           : 1   ; /* [24]  */
        unsigned int    pll2_postdiv2         : 3   ; /* [23..21]  */
        unsigned int    pll2_postdiv1         : 3   ; /* [20..18]  */
        unsigned int    pll2_fbdiv            : 12  ; /* [17..6]  */
        unsigned int    pll2_refdiv           : 6   ; /* [5..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL4_U;

/* Define the union U_SC_PLLFCTRL5_U */
/* PLL2???ƼĴ???1?? */
/* 0x14 */
typedef union tagScPllfctrl5
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
        unsigned int    pll2_frac             : 24  ; /* [23..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL5_U;

/* Define the union U_SC_PLLFCTRL6_U */
/* PLL3???ƼĴ???0?? */
/* 0x18 */
typedef union tagScPllfctrl6
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 1   ; /* [31]  */
        unsigned int    pll3_foutvcopd        : 1   ; /* [30]  */
        unsigned int    pll3_foutpostdivpd    : 1   ; /* [29]  */
        unsigned int    pll3_fout4phasepd     : 1   ; /* [28]  */
        unsigned int    pll3_dacpd            : 1   ; /* [27]  */
        unsigned int    pll3_dsmpd            : 1   ; /* [26]  */
        unsigned int    pll3_pd               : 1   ; /* [25]  */
        unsigned int    pll3_bypass           : 1   ; /* [24]  */
        unsigned int    pll3_postdiv2         : 3   ; /* [23..21]  */
        unsigned int    pll3_postdiv1         : 3   ; /* [20..18]  */
        unsigned int    pll3_fbdiv            : 12  ; /* [17..6]  */
        unsigned int    pll3_refdiv           : 6   ; /* [5..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL6_U;

/* Define the union U_SC_PLLFCTRL7_U */
/* PLL3???ƼĴ???1?? */
/* 0x1C */
typedef union tagScPllfctrl7
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
        unsigned int    pll3_frac             : 24  ; /* [23..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL7_U;

/* Define the union U_SC_PLL_CLK_BYPASS_U */
/* PLL???ع???ʱ??ѡ???? */
/* 0x20 */
typedef union tagScPllClkBypass0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 11  ; /* [31..21]  */
        unsigned int    pll4_peri_mode        : 1   ; /* [20]  */
        unsigned int    pll3_peri_mode        : 1   ; /* [19]  */
        unsigned int    pll2_peri_mode        : 1   ; /* [18]  */
        unsigned int    pll1_peri_mode        : 1   ; /* [17]  */
        unsigned int    pll0_peri_mode        : 1   ; /* [16]  */
        unsigned int    reserved_1            : 16  ; /* [15..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLL_CLK_BYPASS0_U;

/* Define the union U_SC_PLLFCTRL8_U */
/* pll4???ƼĴ???0?? */
/* 0x24 */
typedef union tagScPllfctrl8
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 1   ; /* [31]  */
        unsigned int    pll4_foutvcopd        : 1   ; /* [30]  */
        unsigned int    pll4_foutpostdivpd    : 1   ; /* [29]  */
        unsigned int    pll4_fout4phasepd     : 1   ; /* [28]  */
        unsigned int    pll4_dacpd            : 1   ; /* [27]  */
        unsigned int    pll4_dsmpd            : 1   ; /* [26]  */
        unsigned int    pll4_pd               : 1   ; /* [25]  */
        unsigned int    pll4_bypass           : 1   ; /* [24]  */
        unsigned int    pll4_postdiv2         : 3   ; /* [23..21]  */
        unsigned int    pll4_postdiv1         : 3   ; /* [20..18]  */
        unsigned int    pll4_fbdiv            : 12  ; /* [17..6]  */
        unsigned int    pll4_refdiv           : 6   ; /* [5..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL8_U;

/* Define the union U_SC_PLLFCTRL9_U */
/* pll4???ƼĴ???1?? */
/* 0x28 */
typedef union tagScPllfctrl9
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
        unsigned int    pll4_frac             : 24  ; /* [23..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL9_U;

/* Define the union U_SC_PLL_CLK_BYPASS1_U */
/* PLL???ع???ʱ??ѡ???? */
/* 0x2C */
typedef union tagScPllClkBypass1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
        unsigned int    pll4_bypass_external_n : 1   ; /* [4]  */
        unsigned int    pll3_bypass_external_n : 1   ; /* [3]  */
        unsigned int    pll2_bypass_external_n : 1   ; /* [2]  */
        unsigned int    pll1_bypass_external_n : 1   ; /* [1]  */
        unsigned int    pll0_bypass_external_n : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLL_CLK_BYPASS1_U;

/* Define the union U_SC_GPIO_DB_CTRL_U */
/* ????gpip dbʱ??ѡ?? */
/* 0x100 */
typedef union tagScGpioDbCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    gpio_db_clk_sel       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_DB_CTRL_U;

/* Define the union U_SC_SFC_CLK_CTRL_U */
/* ????SFCʱ??ѡ?? */
/* 0x104 */
typedef union tagScSfcClkCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    sfc_clk_sel           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SFC_CLK_CTRL_U;

/* Define the union U_SC_ALL_SCAN_CTRL_U */
/* ALL SCAN???ƼĴ??? */
/* 0x150 */
typedef union tagScAllScanCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    all_scan_sys_int      : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ALL_SCAN_CTRL_U;

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

/* Define the union U_SC_PA_CLK_EN_U */
/* PAʱ??ʹ?ܼĴ??? */
/* 0x358 */
typedef union tagScPaClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_pa_enb            : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PA_CLK_EN_U;

/* Define the union U_SC_PA_CLK_DIS_U */
/* PAʱ?ӽ?ֹ?Ĵ??? */
/* 0x35C */
typedef union tagScPaClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_pa_dsb            : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PA_CLK_DIS_U;

/* Define the union U_SC_HLLC_CLK_EN_U */
/* HLLCʱ??ʹ?ܼĴ??? */
/* 0x360 */
typedef union tagScHllcClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_hllc_enb          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_CLK_EN_U;

/* Define the union U_SC_HLLC_CLK_DIS_U */
/* HLLCʱ?ӽ?ֹ?Ĵ??? */
/* 0x364 */
typedef union tagScHllcClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_hllc_dsb          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_CLK_DIS_U;

/* Define the union U_SC_REF_CLK_EN_U */
/* refʱ??ʹ?ܼĴ??? */
/* 0x370 */
typedef union tagScRefClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_ref_enb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_REF_CLK_EN_U;

/* Define the union U_SC_REF_CLK_DIS_U */
/* refʱ?ӽ?ֹ?Ĵ??? */
/* 0x374 */
typedef union tagScRefClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_ref_dsb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_REF_CLK_DIS_U;

/* Define the union U_SC_GPIO_DB_CLK_EN_U */
/* gpio_dbʱ??ʹ?ܼĴ??? */
/* 0x378 */
typedef union tagScGpioDbClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_gpio_db_enb       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_DB_CLK_EN_U;

/* Define the union U_SC_GPIO_DB_CLK_DIS_U */
/* gpio_dbʱ?ӽ?ֹ?Ĵ??? */
/* 0x37C */
typedef union tagScGpioDbClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_gpio_db_dsb       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_DB_CLK_DIS_U;

/* Define the union U_SC_DJTAG_CLK_EN_U */
/* djtagʱ??ʹ?ܼĴ??? */
/* 0x380 */
typedef union tagScDjtagClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_djtag_enb         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_CLK_EN_U;

/* Define the union U_SC_DJTAG_CLK_DIS_U */
/* djtagʱ?ӽ?ֹ?Ĵ??? */
/* 0x384 */
typedef union tagScDjtagClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_djtag_dsb         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_CLK_DIS_U;

/* Define the union U_SC_HLLC_RXTX_CLK_EN_U */
/* hllc rxtxʱ??ʹ?ܼĴ??? */
/* 0x390 */
typedef union tagScHllcRxtxClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
        unsigned int    clk_hllc_hilink_rx7_enb : 1   ; /* [15]  */
        unsigned int    clk_hllc_hilink_rx6_enb : 1   ; /* [14]  */
        unsigned int    clk_hllc_hilink_rx5_enb : 1   ; /* [13]  */
        unsigned int    clk_hllc_hilink_rx4_enb : 1   ; /* [12]  */
        unsigned int    clk_hllc_hilink_rx3_enb : 1   ; /* [11]  */
        unsigned int    clk_hllc_hilink_rx2_enb : 1   ; /* [10]  */
        unsigned int    clk_hllc_hilink_rx1_enb : 1   ; /* [9]  */
        unsigned int    clk_hllc_hilink_rx0_enb : 1   ; /* [8]  */
        unsigned int    clk_hllc_hilink_tx7_enb : 1   ; /* [7]  */
        unsigned int    clk_hllc_hilink_tx6_enb : 1   ; /* [6]  */
        unsigned int    clk_hllc_hilink_tx5_enb : 1   ; /* [5]  */
        unsigned int    clk_hllc_hilink_tx4_enb : 1   ; /* [4]  */
        unsigned int    clk_hllc_hilink_tx3_enb : 1   ; /* [3]  */
        unsigned int    clk_hllc_hilink_tx2_enb : 1   ; /* [2]  */
        unsigned int    clk_hllc_hilink_tx1_enb : 1   ; /* [1]  */
        unsigned int    clk_hllc_hilink_tx0_enb : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_RXTX_CLK_EN_U;

/* Define the union U_SC_HLLC_RXTX_CLK_DIS_U */
/* hllc rxtxʱ?ӽ?ֹ?Ĵ??? */
/* 0x394 */
typedef union tagScHllcRxtxClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
        unsigned int    clk_hllc_hilink_rx7_dsb : 1   ; /* [15]  */
        unsigned int    clk_hllc_hilink_rx6_dsb : 1   ; /* [14]  */
        unsigned int    clk_hllc_hilink_rx5_dsb : 1   ; /* [13]  */
        unsigned int    clk_hllc_hilink_rx4_dsb : 1   ; /* [12]  */
        unsigned int    clk_hllc_hilink_rx3_dsb : 1   ; /* [11]  */
        unsigned int    clk_hllc_hilink_rx2_dsb : 1   ; /* [10]  */
        unsigned int    clk_hllc_hilink_rx1_dsb : 1   ; /* [9]  */
        unsigned int    clk_hllc_hilink_rx0_dsb : 1   ; /* [8]  */
        unsigned int    clk_hllc_hilink_tx7_dsb : 1   ; /* [7]  */
        unsigned int    clk_hllc_hilink_tx6_dsb : 1   ; /* [6]  */
        unsigned int    clk_hllc_hilink_tx5_dsb : 1   ; /* [5]  */
        unsigned int    clk_hllc_hilink_tx4_dsb : 1   ; /* [4]  */
        unsigned int    clk_hllc_hilink_tx3_dsb : 1   ; /* [3]  */
        unsigned int    clk_hllc_hilink_tx2_dsb : 1   ; /* [2]  */
        unsigned int    clk_hllc_hilink_tx1_dsb : 1   ; /* [1]  */
        unsigned int    clk_hllc_hilink_tx0_dsb : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_RXTX_CLK_DIS_U;

/* Define the union U_SC_RSA_CLK_EN_U */
/* RSAʱ??ʹ?ܼĴ??? */
/* 0x3A0 */
typedef union tagScRsaClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_rsa_enb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RSA_CLK_EN_U;

/* Define the union U_SC_RSA_CLK_DIS_U */
/* RSAʱ?ӽ?ֹ?Ĵ??? */
/* 0x3A4 */
typedef union tagScRsaClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_rsa_dsb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RSA_CLK_DIS_U;

/* Define the union U_SC_RDE_CLK_EN_U */
/* RDEʱ??ʹ?ܼĴ??? */
/* 0x3A8 */
typedef union tagScRdeClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_rde_enb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RDE_CLK_EN_U;

/* Define the union U_SC_RDE_CLK_DIS_U */
/* RDEʱ?ӽ?ֹ?Ĵ??? */
/* 0x3AC */
typedef union tagScRdeClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_rde_dsb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RDE_CLK_DIS_U;

/* Define the union U_SC_RNG_CLK_EN_U */
/* RNGʱ??ʹ?ܼĴ??? */
/* 0x3B0 */
typedef union tagScRngClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_rng_enb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RNG_CLK_EN_U;

/* Define the union U_SC_RNG_CLK_DIS_U */
/* RNGʱ?ӽ?ֹ?Ĵ??? */
/* 0x3B4 */
typedef union tagScRngClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_rng_dsb           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RNG_CLK_DIS_U;

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

/* Define the union U_SC_HILINK_PCS_RESET_REQ_U */
/* HILINK PCS?���λ???????ƼĴ??? */
/* 0xA58 */
typedef union tagScHilinkPcsResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    hllc_hilink_pcs_lane7_srst_req : 1   ; /* [7]  */
        unsigned int    hllc_hilink_pcs_lane6_srst_req : 1   ; /* [6]  */
        unsigned int    hllc_hilink_pcs_lane5_srst_req : 1   ; /* [5]  */
        unsigned int    hllc_hilink_pcs_lane4_srst_req : 1   ; /* [4]  */
        unsigned int    hllc_hilink_pcs_lane3_srst_req : 1   ; /* [3]  */
        unsigned int    hllc_hilink_pcs_lane2_srst_req : 1   ; /* [2]  */
        unsigned int    hllc_hilink_pcs_lane1_srst_req : 1   ; /* [1]  */
        unsigned int    hllc_hilink_pcs_lane0_srst_req : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK_PCS_RESET_REQ_U;

/* Define the union U_SC_HILINK_PCS_RESET_DREQ_U */
/* HILINK PCS?���λȥ???????ƼĴ??? */
/* 0xA5C */
typedef union tagScHilinkPcsResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    hllc_hilink_pcs_lane7_srst_dreq : 1   ; /* [7]  */
        unsigned int    hllc_hilink_pcs_lane6_srst_dreq : 1   ; /* [6]  */
        unsigned int    hllc_hilink_pcs_lane5_srst_dreq : 1   ; /* [5]  */
        unsigned int    hllc_hilink_pcs_lane4_srst_dreq : 1   ; /* [4]  */
        unsigned int    hllc_hilink_pcs_lane3_srst_dreq : 1   ; /* [3]  */
        unsigned int    hllc_hilink_pcs_lane2_srst_dreq : 1   ; /* [2]  */
        unsigned int    hllc_hilink_pcs_lane1_srst_dreq : 1   ; /* [1]  */
        unsigned int    hllc_hilink_pcs_lane0_srst_dreq : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK_PCS_RESET_DREQ_U;

/* Define the union U_SC_HLLC_RXTX_RESET_REQ_U */
/* hllc rxtx?���λ???????ƼĴ??? */
/* 0xA60 */
typedef union tagScHllcRxtxResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
        unsigned int    hllc_tx7_srst_req     : 1   ; /* [15]  */
        unsigned int    hllc_tx6_srst_req     : 1   ; /* [14]  */
        unsigned int    hllc_tx5_srst_req     : 1   ; /* [13]  */
        unsigned int    hllc_tx4_srst_req     : 1   ; /* [12]  */
        unsigned int    hllc_tx3_srst_req     : 1   ; /* [11]  */
        unsigned int    hllc_tx2_srst_req     : 1   ; /* [10]  */
        unsigned int    hllc_tx1_srst_req     : 1   ; /* [9]  */
        unsigned int    hllc_tx0_srst_req     : 1   ; /* [8]  */
        unsigned int    hllc_rx7_srst_req     : 1   ; /* [7]  */
        unsigned int    hllc_rx6_srst_req     : 1   ; /* [6]  */
        unsigned int    hllc_rx5_srst_req     : 1   ; /* [5]  */
        unsigned int    hllc_rx4_srst_req     : 1   ; /* [4]  */
        unsigned int    hllc_rx3_srst_req     : 1   ; /* [3]  */
        unsigned int    hllc_rx2_srst_req     : 1   ; /* [2]  */
        unsigned int    hllc_rx1_srst_req     : 1   ; /* [1]  */
        unsigned int    hllc_rx0_srst_req     : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_RXTX_RESET_REQ_U;

/* Define the union U_SC_HLLC_RXTX_RESET_DREQ_U */
/* hllc rxtx?���λȥ???????ƼĴ??? */
/* 0xA64 */
typedef union tagScHllcRxtxResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
        unsigned int    hllc_tx7_srst_dreq    : 1   ; /* [15]  */
        unsigned int    hllc_tx6_srst_dreq    : 1   ; /* [14]  */
        unsigned int    hllc_tx5_srst_dreq    : 1   ; /* [13]  */
        unsigned int    hllc_tx4_srst_dreq    : 1   ; /* [12]  */
        unsigned int    hllc_tx3_srst_dreq    : 1   ; /* [11]  */
        unsigned int    hllc_tx2_srst_dreq    : 1   ; /* [10]  */
        unsigned int    hllc_tx1_srst_dreq    : 1   ; /* [9]  */
        unsigned int    hllc_tx0_srst_dreq    : 1   ; /* [8]  */
        unsigned int    hllc_rx7_srst_dreq    : 1   ; /* [7]  */
        unsigned int    hllc_rx6_srst_dreq    : 1   ; /* [6]  */
        unsigned int    hllc_rx5_srst_dreq    : 1   ; /* [5]  */
        unsigned int    hllc_rx4_srst_dreq    : 1   ; /* [4]  */
        unsigned int    hllc_rx3_srst_dreq    : 1   ; /* [3]  */
        unsigned int    hllc_rx2_srst_dreq    : 1   ; /* [2]  */
        unsigned int    hllc_rx1_srst_dreq    : 1   ; /* [1]  */
        unsigned int    hllc_rx0_srst_dreq    : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_RXTX_RESET_DREQ_U;

/* Define the union U_SC_PA_RESET_REQ_U */
/* PA?���λ???????ƼĴ??? */
/* 0xA78 */
typedef union tagScPaResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    pa_srst_req           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PA_RESET_REQ_U;

/* Define the union U_SC_PA_RESET_DREQ_U */
/* PA?���λȥ???????ƼĴ??? */
/* 0xA7C */
typedef union tagScPaResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    pa_srst_dreq          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PA_RESET_DREQ_U;

/* Define the union U_SC_HLLC_RESET_REQ_U */
/* HLLC?���λ???????ƼĴ??? */
/* 0xA80 */
typedef union tagScHllcResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hllc_srst_req         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_RESET_REQ_U;

/* Define the union U_SC_HLLC_RESET_DREQ_U */
/* HLLC?���λȥ???????ƼĴ??? */
/* 0xA84 */
typedef union tagScHllcResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hllc_srst_dreq        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_RESET_DREQ_U;

/* Define the union U_SC_DJTAG_RESET_REQ_U */
/* DJTAG?���λ???????ƼĴ??? */
/* 0xA90 */
typedef union tagScDjtagResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    djtag_srst_req        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_RESET_REQ_U;

/* Define the union U_SC_DJTAG_RESET_DREQ_U */
/* DJTAG?���λȥ???????ƼĴ??? */
/* 0xA94 */
typedef union tagScDjtagResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    djtag_srst_dreq       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_RESET_DREQ_U;

/* Define the union U_SC_RSA_RESET_REQ_U */
/* RSA?���λ???????ƼĴ??? */
/* 0xA98 */
typedef union tagScRsaResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    rsa_srst_req          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RSA_RESET_REQ_U;

/* Define the union U_SC_RSA_RESET_DREQ_U */
/* RSA?���λȥ???????ƼĴ??? */
/* 0xA9C */
typedef union tagScRsaResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    rsa_srst_dreq         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RSA_RESET_DREQ_U;

/* Define the union U_SC_RDE_RESET_REQ_U */
/* RDE?���λ???????ƼĴ??? */
/* 0xAA0 */
typedef union tagScRdeResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    rde_srst_req          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RDE_RESET_REQ_U;

/* Define the union U_SC_RDE_RESET_DREQ_U */
/* RDE?���λȥ???????ƼĴ??? */
/* 0xAA4 */
typedef union tagScRdeResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    rde_srst_dreq         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RDE_RESET_DREQ_U;

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

/* Define the union U_SC_RNG_RESET_REQ_U */
/* RNG?���λ???????ƼĴ??? */
/* 0xAB0 */
typedef union tagScRngResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    rng_srst_req          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RNG_RESET_REQ_U;

/* Define the union U_SC_RNG_RESET_DREQ_U */
/* RNG?���λȥ???????ƼĴ??? */
/* 0xAB4 */
typedef union tagScRngResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    rng_srst_dreq         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RNG_RESET_DREQ_U;

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

/* Define the union U_SC_PCS_LOCAL_RESET_REQ_U */
/* PCS LOCAL?���λ???????ƼĴ??? */
/* 0xAC0 */
typedef union tagScPcsLocalResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    pcs_local_srst_req    : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PCS_LOCAL_RESET_REQ_U;

/* Define the union U_SC_PCS_LOCAL_RESET_DREQ_U */
/* PCS LOCAL?���λȥ???????ƼĴ??? */
/* 0xAC4 */
typedef union tagScPcsLocalResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    pcs_local_srst_dreq   : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PCS_LOCAL_RESET_DREQ_U;

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

/* Define the union U_SC_DISPATCH_REMAP_CTRL_U */
/* subsys??????Remap?Ĵ??? */
/* 0x1200 */
typedef union tagScDispatchRemapCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    sys_remap_vld         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_REMAP_CTRL_U;

/* Define the union U_SC_TSENSOR_CTRL0_U */
/* TSENSOR???ƼĴ???0 */
/* 0x20D0 */
typedef union tagScTsensorCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
        unsigned int    tsensor_ct_sel        : 2   ; /* [9..8]  */
        unsigned int    reserved_1            : 7   ; /* [7..1]  */
        unsigned int    tsensor_temp_en       : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TSENSOR_CTRL0_U;

/* Define the union U_SC_TSENSOR_CTRL1_U */
/* TSENSOR???ƼĴ???1 */
/* 0x20D4 */
typedef union tagScTsensorCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    tsensor_test          : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TSENSOR_CTRL1_U;

/* Define the union U_SC_BOOTROM_CTRL_U */
/* BOOTROM???ƼĴ??? */
/* 0x20F0 */
typedef union tagScBootromCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
        unsigned int    bootrom_trb           : 2   ; /* [5..4]  */
        unsigned int    bootrom_ptsel         : 2   ; /* [3..2]  */
        unsigned int    bootrom_rtsel         : 2   ; /* [1..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_BOOTROM_CTRL_U;

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

/* Define the union U_SC_RSA_ADDR_H_U */
/* RSA??20λ??ַ?????Ĵ??? */
/* 0x2E00 */
typedef union tagScRsaAddrH
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
        unsigned int    rsa_addr_h            : 20  ; /* [19..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RSA_ADDR_H_U;

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

/* Define the union U_SC_RSA_MEM_CTRL_U */
/* rsa mem???ƼĴ??? */
/* 0x3030 */
typedef union tagScRsaMemCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    ctrl_rfs_rsa          : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RSA_MEM_CTRL_U;

/* Define the union U_SC_HLLC_MEM_CTRL_U */
/* hllc mem???ƼĴ??? */
/* 0x3040 */
typedef union tagScHllcMemCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
        unsigned int    ctrl_rft_hllc         : 10  ; /* [9..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_MEM_CTRL_U;

/* Define the union U_SC_PA_MEM_CTRL0_U */
/* pa mem???ƼĴ???0 */
/* 0x3050 */
typedef union tagScPaMemCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    ctrl_rfs_pa           : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PA_MEM_CTRL0_U;

/* Define the union U_SC_PA_MEM_CTRL1_U */
/* pa mem???ƼĴ???1 */
/* 0x3054 */
typedef union tagScPaMemCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
        unsigned int    ctrl_rft_pa           : 10  ; /* [9..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PA_MEM_CTRL1_U;

/* Define the union U_SC_RDE_MEM_CTRL_U */
/* rde mem???ƼĴ??? */
/* 0x3060 */
typedef union tagScRdeMemCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    ctrl_rfs_rde          : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RDE_MEM_CTRL_U;

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

/* Define the union U_SC_PLL_LOCK_ST_U */
/* PLL????״̬?Ĵ??? */
/* 0x5000 */
typedef union tagScPllLockSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
        unsigned int    pll4_lock             : 1   ; /* [4]  */
        unsigned int    pll3_lock             : 1   ; /* [3]  */
        unsigned int    pll2_lock             : 1   ; /* [2]  */
        unsigned int    pll1_lock             : 1   ; /* [1]  */
        unsigned int    pll0_lock             : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLL_LOCK_ST_U;

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

/* Define the union U_SC_PA_CLK_ST_U */
/* PAʱ??״̬?Ĵ??? */
/* 0x532C */
typedef union tagScPaClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_pa_st             : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PA_CLK_ST_U;

/* Define the union U_SC_HLLC_CLK_ST_U */
/* HLLCʱ??״̬?Ĵ??? */
/* 0x5330 */
typedef union tagScHllcClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_hllc_st           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_CLK_ST_U;

/* Define the union U_SC_REF_CLK_ST_U */
/* refʱ??״̬?Ĵ??? */
/* 0x5338 */
typedef union tagScRefClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_ref_st            : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_REF_CLK_ST_U;

/* Define the union U_SC_GPIO_DB_CLK_ST_U */
/* gpio_dbʱ??״̬?Ĵ??? */
/* 0x533C */
typedef union tagScGpioDbClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_gpio_db_st        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_DB_CLK_ST_U;

/* Define the union U_SC_DJTAG_CLK_ST_U */
/* djtagʱ??״̬?Ĵ??? */
/* 0x5340 */
typedef union tagScDjtagClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_djtag_st          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_CLK_ST_U;

/* Define the union U_SC_HLLC_RXTX_CLK_ST_U */
/* hllc rxtxʱ??״̬?Ĵ??? */
/* 0x5348 */
typedef union tagScHllcRxtxClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
        unsigned int    clk_hllc_hilink_rx7_st : 1   ; /* [15]  */
        unsigned int    clk_hllc_hilink_rx6_st : 1   ; /* [14]  */
        unsigned int    clk_hllc_hilink_rx5_st : 1   ; /* [13]  */
        unsigned int    clk_hllc_hilink_rx4_st : 1   ; /* [12]  */
        unsigned int    clk_hllc_hilink_rx3_st : 1   ; /* [11]  */
        unsigned int    clk_hllc_hilink_rx2_st : 1   ; /* [10]  */
        unsigned int    clk_hllc_hilink_rx1_st : 1   ; /* [9]  */
        unsigned int    clk_hllc_hilink_rx0_st : 1   ; /* [8]  */
        unsigned int    clk_hllc_hilink_tx7_st : 1   ; /* [7]  */
        unsigned int    clk_hllc_hilink_tx6_st : 1   ; /* [6]  */
        unsigned int    clk_hllc_hilink_tx5_st : 1   ; /* [5]  */
        unsigned int    clk_hllc_hilink_tx4_st : 1   ; /* [4]  */
        unsigned int    clk_hllc_hilink_tx3_st : 1   ; /* [3]  */
        unsigned int    clk_hllc_hilink_tx2_st : 1   ; /* [2]  */
        unsigned int    clk_hllc_hilink_tx1_st : 1   ; /* [1]  */
        unsigned int    clk_hllc_hilink_tx0_st : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_RXTX_CLK_ST_U;

/* Define the union U_SC_RSA_CLK_ST_U */
/* RSAʱ??״̬?Ĵ??? */
/* 0x5350 */
typedef union tagScRsaClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_rsa_st            : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RSA_CLK_ST_U;

/* Define the union U_SC_RDE_CLK_ST_U */
/* RDEʱ??״̬?Ĵ??? */
/* 0x5354 */
typedef union tagScRdeClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_rde_st            : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RDE_CLK_ST_U;

/* Define the union U_SC_RNG_CLK_ST_U */
/* RNGʱ??״̬?Ĵ??? */
/* 0x5358 */
typedef union tagScRngClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    clk_rng_st            : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RNG_CLK_ST_U;

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

/* Define the union U_SC_HILINK_PCS_RESET_ST_U */
/* HILINK_PCS??λ״̬?Ĵ??? */
/* 0x5A2C */
typedef union tagScHilinkPcsResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
        unsigned int    hllc_hilink_pcs_lane7_srst_st : 1   ; /* [7]  */
        unsigned int    hllc_hilink_pcs_lane6_srst_st : 1   ; /* [6]  */
        unsigned int    hllc_hilink_pcs_lane5_srst_st : 1   ; /* [5]  */
        unsigned int    hllc_hilink_pcs_lane4_srst_st : 1   ; /* [4]  */
        unsigned int    hllc_hilink_pcs_lane3_srst_st : 1   ; /* [3]  */
        unsigned int    hllc_hilink_pcs_lane2_srst_st : 1   ; /* [2]  */
        unsigned int    hllc_hilink_pcs_lane1_srst_st : 1   ; /* [1]  */
        unsigned int    hllc_hilink_pcs_lane0_srst_st : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK_PCS_RESET_ST_U;

/* Define the union U_SC_HLLC_RXTX_RESET_ST_U */
/* hllc rxtx??λ״̬?Ĵ??? */
/* 0x5A30 */
typedef union tagScHllcRxtxResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
        unsigned int    hllc_tx7_srst_st      : 1   ; /* [15]  */
        unsigned int    hllc_tx6_srst_st      : 1   ; /* [14]  */
        unsigned int    hllc_tx5_srst_st      : 1   ; /* [13]  */
        unsigned int    hllc_tx4_srst_st      : 1   ; /* [12]  */
        unsigned int    hllc_tx3_srst_st      : 1   ; /* [11]  */
        unsigned int    hllc_tx2_srst_st      : 1   ; /* [10]  */
        unsigned int    hllc_tx1_srst_st      : 1   ; /* [9]  */
        unsigned int    hllc_tx0_srst_st      : 1   ; /* [8]  */
        unsigned int    hllc_rx7_srst_st      : 1   ; /* [7]  */
        unsigned int    hllc_rx6_srst_st      : 1   ; /* [6]  */
        unsigned int    hllc_rx5_srst_st      : 1   ; /* [5]  */
        unsigned int    hllc_rx4_srst_st      : 1   ; /* [4]  */
        unsigned int    hllc_rx3_srst_st      : 1   ; /* [3]  */
        unsigned int    hllc_rx2_srst_st      : 1   ; /* [2]  */
        unsigned int    hllc_rx1_srst_st      : 1   ; /* [1]  */
        unsigned int    hllc_rx0_srst_st      : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_RXTX_RESET_ST_U;

/* Define the union U_SC_PA_RESET_ST_U */
/* PA??λ״̬?Ĵ??? */
/* 0x5A3C */
typedef union tagScPaResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    pa_srst_st            : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PA_RESET_ST_U;

/* Define the union U_SC_HLLC_RESET_ST_U */
/* HLLC??λ״̬?Ĵ??? */
/* 0x5A40 */
typedef union tagScHllcResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    hllc_srst_st          : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_RESET_ST_U;

/* Define the union U_SC_DJTAG_RESET_ST_U */
/* DJTAG??λ״̬?Ĵ??? */
/* 0x5A48 */
typedef union tagScDjtagResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    djtag_srst_st         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_RESET_ST_U;

/* Define the union U_SC_RSA_RESET_ST_U */
/* RSA??λ״̬?Ĵ??? */
/* 0x5A4C */
typedef union tagScRsaResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    rsa_srst_st           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RSA_RESET_ST_U;

/* Define the union U_SC_RDE_RESET_ST_U */
/* RDE??λ״̬?Ĵ??? */
/* 0x5A50 */
typedef union tagScRdeResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    rde_srst_st           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RDE_RESET_ST_U;

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

/* Define the union U_SC_RNG_RESET_ST_U */
/* RNG??λ״̬?Ĵ??? */
/* 0x5A58 */
typedef union tagScRngResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    rng_srst_st           : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RNG_RESET_ST_U;

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

/* Define the union U_SC_PCS_LOCAL_RESET_ST_U */
/* PCS LOCAL?���λ????״̬?Ĵ??? */
/* 0x5A60 */
typedef union tagScPcsLocalResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    pcs_local_srst_st     : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PCS_LOCAL_RESET_ST_U;

/* Define the union U_SC_TSENSOR_ST_U */
/* TSENSOR״̬?Ĵ??? */
/* 0x6040 */
typedef union tagScTsensorSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 19  ; /* [31..13]  */
        unsigned int    data_ready_tsensor    : 1   ; /* [12]  */
        unsigned int    reserved_1            : 4   ; /* [11..8]  */
        unsigned int    temp_out_tsensor      : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TSENSOR_ST_U;

/* Define the union U_SC_DJTAG_INT_U */
/* DJTAG Master??״̬????ʱ?ж?Դ?Ĵ??? */
/* 0x6600 */
typedef union tagScDjtagInt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    djtag_sta_timeout     : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_INT_U;

/* Define the union U_SC_DBG_AUTH_CTRL_U */
/* ??ȫ?ȼ???Ȩ???ƼĴ?????
??ע?⣺1???˼Ĵ????ռ??????ǰ?ȫ???ʲ??ܳɹ???2??Ĭ?Ͼ??Ǵ򿪵???ģʽ????©??????????????ʱ????ʼ???رյ??Թ??ܣ? */
/* 0x6700 */
typedef union tagScDbgAuthCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
        unsigned int    rsa_secure_cfg        : 1   ; /* [1]  */
        unsigned int    rsa_djtag_sec_acc_en  : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DBG_AUTH_CTRL_U;

/* Define the union U_SC_DJTAG_MSTR_EN_U */
/* SC_DJTAG_MSTR_ENΪDJTAG Masterʹ?ܿ??? */
/* 0x6800 */
typedef union tagScDjtagMstrEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    djtag_mstr_en         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_MSTR_EN_U;

/* Define the union U_SC_DJTAG_MSTR_START_EN_U */
/* SC_DJTAG_MSTR_START_ENΪDJTAG Master????chain��??startʹ?? */
/* 0x6804 */
typedef union tagScDjtagMstrStartEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    djtag_mstr_start_en   : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_MSTR_START_EN_U;

/* Define the union U_SC_DJTAG_SEC_ACC_EN_U */
/* DJTAG???ʸ?ģ???ڰ?ȫ?��??Ĵ????İ?ȫ???ʿ???ʹ?ܡ???ע?⣺1???˼Ĵ????ռ??????ǰ?ȫ???ʲ??ܳɹ????? */
/* 0x6808 */
typedef union tagScDjtagSecAccEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    djtag_sec_acc_en      : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_SEC_ACC_EN_U;

/* Define the union U_SC_DJTAG_DEBUG_MODULE_SEL_U */
/* SC_DJTAG_DEBUG_MODULE_SELΪDJTAG Master???÷???ģ???Ĵ??? */
/* 0x680C */
typedef union tagScDjtagDebugModuleSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
        unsigned int    debug_module_sel      : 6   ; /* [5..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_DEBUG_MODULE_SEL_U;

/* Define the union U_SC_DJTAG_MSTR_WR_U */
/* SC_DJTAG_MSTR_WRΪDJTAG Master?Ķ?д?????ź? */
/* 0x6810 */
typedef union tagScDjtagMstrWr
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    djtag_mstr_wr         : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_MSTR_WR_U;

/* Define the union U_SC_DJTAG_CHAIN_UNIT_CFG_EN_U */
/* SC_DJTAG_CHAIN_UNIT_CFG_ENΪDJTAG Master??chain��?ϵ?Ԫ?ķ???ʹ?? */
/* 0x6814 */
typedef union tagScDjtagChainUnitCfgEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
        unsigned int    chain_unit_cfg_en     : 16  ; /* [15..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_CHAIN_UNIT_CFG_EN_U;

/* Define the union U_SC_DJTAG_MSTR_ADDR_U */
/* SC_DJTAG_MSTR_ADDRΪDJTAG Master???÷???ģ????ƫ?Ƶ?ַ?Ĵ??? */
/* 0x6818 */
typedef union tagScDjtagMstrAddr
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 1   ; /* [31]  */
        unsigned int    djtag_mstr_addr       : 31  ; /* [30..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_MSTR_ADDR_U;

/* Define the union U_SC_TDRE_OP_ADDR_U */
/* SC_TDRE_OP_ADDRΪDJTAG Master????TDREģ????ƫ?Ƶ?ַ?Ĵ????Ͳ??????ͼĴ??? */
/* 0x6824 */
typedef union tagScTdreOpAddr
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 14  ; /* [31..18]  */
        unsigned int    tdre_op_addr          : 18  ; /* [17..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TDRE_OP_ADDR_U;

/* Define the union U_SC_TDRE_REPAIR_EN_U */
/* SC_TDRE_REPAIR_ENΪDJTAG Master??TDRE REPAIRʹ?? */
/* 0x682C */
typedef union tagScTdreRepairEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
        unsigned int    tdre_repair_en        : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TDRE_REPAIR_EN_U;

/* Define the union U_SC_ECO_RSV0_U */
/* ECO ?Ĵ???0 */
/* 0x8000 */
typedef union tagScEcoRsv0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    eco_rsv0              : 31  ; /* [31..1]  */
        unsigned int    djtag_nor_cfg_en      : 1   ; /* [0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ECO_RSV0_U;

/* Define the union U_SC_DJTAG_OP_ST_U */
/* DJTAG????״̬?Ĵ??? */
/* 0xE828 */
typedef union tagScDjtagOpSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
        unsigned int    rdata_changed         : 10  ; /* [25..16]  */
        unsigned int    reserved_1            : 6   ; /* [15..10]  */
        unsigned int    debug_bus_en          : 1   ; /* [9]  */
        unsigned int    djtag_op_done         : 1   ; /* [8]  */
        unsigned int    unit_conflict         : 8   ; /* [7..0]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_OP_ST_U;

#else
/* Define the union U_SC_PLLFCTRL0_U */
/* PLL0???ƼĴ???0?? */
/* 0x0 */
typedef union tagScPllfctrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pll0_refdiv           : 6   ; /* [5..0]  */
        unsigned int    pll0_fbdiv            : 12  ; /* [17..6]  */
        unsigned int    pll0_postdiv1         : 3   ; /* [20..18]  */
        unsigned int    pll0_postdiv2         : 3   ; /* [23..21]  */
        unsigned int    pll0_bypass           : 1   ; /* [24]  */
        unsigned int    pll0_pd               : 1   ; /* [25]  */
        unsigned int    pll0_dsmpd            : 1   ; /* [26]  */
        unsigned int    pll0_dacpd            : 1   ; /* [27]  */
        unsigned int    pll0_fout4phasepd     : 1   ; /* [28]  */
        unsigned int    pll0_foutpostdivpd    : 1   ; /* [29]  */
        unsigned int    pll0_foutvcopd        : 1   ; /* [30]  */
        unsigned int    reserved_0            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL0_U;

/* Define the union U_SC_PLLFCTRL1_U */
/* PLL0???ƼĴ???1?? */
/* 0x4 */
typedef union tagScPllfctrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pll0_frac             : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL1_U;

/* Define the union U_SC_PLLFCTRL2_U */
/* PLL1???ƼĴ???0?? */
/* 0x8 */
typedef union tagScPllfctrl2
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pll1_refdiv           : 6   ; /* [5..0]  */
        unsigned int    pll1_fbdiv            : 12  ; /* [17..6]  */
        unsigned int    pll1_postdiv1         : 3   ; /* [20..18]  */
        unsigned int    pll1_postdiv2         : 3   ; /* [23..21]  */
        unsigned int    pll1_bypass           : 1   ; /* [24]  */
        unsigned int    pll1_pd               : 1   ; /* [25]  */
        unsigned int    pll1_dsmpd            : 1   ; /* [26]  */
        unsigned int    pll1_dacpd            : 1   ; /* [27]  */
        unsigned int    pll1_fout4phasepd     : 1   ; /* [28]  */
        unsigned int    pll1_foutpostdivpd    : 1   ; /* [29]  */
        unsigned int    pll1_foutvcopd        : 1   ; /* [30]  */
        unsigned int    reserved_0            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL2_U;

/* Define the union U_SC_PLLFCTRL3_U */
/* PLL1???ƼĴ???1?? */
/* 0xC */
typedef union tagScPllfctrl3
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pll1_frac             : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL3_U;

/* Define the union U_SC_PLLFCTRL4_U */
/* PLL2???ƼĴ???0?? */
/* 0x10 */
typedef union tagScPllfctrl4
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pll2_refdiv           : 6   ; /* [5..0]  */
        unsigned int    pll2_fbdiv            : 12  ; /* [17..6]  */
        unsigned int    pll2_postdiv1         : 3   ; /* [20..18]  */
        unsigned int    pll2_postdiv2         : 3   ; /* [23..21]  */
        unsigned int    pll2_bypass           : 1   ; /* [24]  */
        unsigned int    pll2_pd               : 1   ; /* [25]  */
        unsigned int    pll2_dsmpd            : 1   ; /* [26]  */
        unsigned int    pll2_dacpd            : 1   ; /* [27]  */
        unsigned int    pll2_fout4phasepd     : 1   ; /* [28]  */
        unsigned int    pll2_foutpostdivpd    : 1   ; /* [29]  */
        unsigned int    pll2_foutvcopd        : 1   ; /* [30]  */
        unsigned int    reserved_0            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL4_U;

/* Define the union U_SC_PLLFCTRL5_U */
/* PLL2???ƼĴ???1?? */
/* 0x14 */
typedef union tagScPllfctrl5
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pll2_frac             : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL5_U;

/* Define the union U_SC_PLLFCTRL6_U */
/* PLL3???ƼĴ???0?? */
/* 0x18 */
typedef union tagScPllfctrl6
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pll3_refdiv           : 6   ; /* [5..0]  */
        unsigned int    pll3_fbdiv            : 12  ; /* [17..6]  */
        unsigned int    pll3_postdiv1         : 3   ; /* [20..18]  */
        unsigned int    pll3_postdiv2         : 3   ; /* [23..21]  */
        unsigned int    pll3_bypass           : 1   ; /* [24]  */
        unsigned int    pll3_pd               : 1   ; /* [25]  */
        unsigned int    pll3_dsmpd            : 1   ; /* [26]  */
        unsigned int    pll3_dacpd            : 1   ; /* [27]  */
        unsigned int    pll3_fout4phasepd     : 1   ; /* [28]  */
        unsigned int    pll3_foutpostdivpd    : 1   ; /* [29]  */
        unsigned int    pll3_foutvcopd        : 1   ; /* [30]  */
        unsigned int    reserved_0            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL6_U;

/* Define the union U_SC_PLLFCTRL7_U */
/* PLL3???ƼĴ???1?? */
/* 0x1C */
typedef union tagScPllfctrl7
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pll3_frac             : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL7_U;

/* Define the union U_SC_PLL_CLK_BYPASS0_U */
/* PLL???ع???ʱ??ѡ???? */
/* 0x20 */
typedef union tagScPllClkBypass0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved_1            : 16  ; /* [15..0]  */
        unsigned int    pll0_peri_mode        : 1   ; /* [16]  */
        unsigned int    pll1_peri_mode        : 1   ; /* [17]  */
        unsigned int    pll2_peri_mode        : 1   ; /* [18]  */
        unsigned int    pll3_peri_mode        : 1   ; /* [19]  */
        unsigned int    pll4_peri_mode        : 1   ; /* [20]  */
        unsigned int    reserved_0            : 11  ; /* [31..21]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLL_CLK_BYPASS0_U;

/* Define the union U_SC_PLLFCTRL8_U */
/* pll4???ƼĴ???0?? */
/* 0x24 */
typedef union tagScPllfctrl8
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pll4_refdiv           : 6   ; /* [5..0]  */
        unsigned int    pll4_fbdiv            : 12  ; /* [17..6]  */
        unsigned int    pll4_postdiv1         : 3   ; /* [20..18]  */
        unsigned int    pll4_postdiv2         : 3   ; /* [23..21]  */
        unsigned int    pll4_bypass           : 1   ; /* [24]  */
        unsigned int    pll4_pd               : 1   ; /* [25]  */
        unsigned int    pll4_dsmpd            : 1   ; /* [26]  */
        unsigned int    pll4_dacpd            : 1   ; /* [27]  */
        unsigned int    pll4_fout4phasepd     : 1   ; /* [28]  */
        unsigned int    pll4_foutpostdivpd    : 1   ; /* [29]  */
        unsigned int    pll4_foutvcopd        : 1   ; /* [30]  */
        unsigned int    reserved_0            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL8_U;

/* Define the union U_SC_PLLFCTRL9_U */
/* pll4???ƼĴ???1?? */
/* 0x28 */
typedef union tagScPllfctrl9
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pll4_frac             : 24  ; /* [23..0]  */
        unsigned int    reserved_0            : 8   ; /* [31..24]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLLFCTRL9_U;

/* Define the union U_SC_PLL_CLK_BYPASS1_U */
/* PLL???ع???ʱ??ѡ???? */
/* 0x2C */
typedef union tagScPllClkBypass1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pll0_bypass_external_n : 1   ; /* [0]  */
        unsigned int    pll1_bypass_external_n : 1   ; /* [1]  */
        unsigned int    pll2_bypass_external_n : 1   ; /* [2]  */
        unsigned int    pll3_bypass_external_n : 1   ; /* [3]  */
        unsigned int    pll4_bypass_external_n : 1   ; /* [4]  */
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLL_CLK_BYPASS1_U;

/* Define the union U_SC_GPIO_DB_CTRL_U */
/* ????gpip dbʱ??ѡ?? */
/* 0x100 */
typedef union tagScGpioDbCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gpio_db_clk_sel       : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_DB_CTRL_U;

/* Define the union U_SC_SFC_CLK_CTRL_U */
/* ????SFCʱ??ѡ?? */
/* 0x104 */
typedef union tagScSfcClkCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sfc_clk_sel           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_SFC_CLK_CTRL_U;

/* Define the union U_SC_ALL_SCAN_CTRL_U */
/* ALL SCAN???ƼĴ??? */
/* 0x150 */
typedef union tagScAllScanCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    all_scan_sys_int      : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ALL_SCAN_CTRL_U;

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

/* Define the union U_SC_PA_CLK_EN_U */
/* PAʱ??ʹ?ܼĴ??? */
/* 0x358 */
typedef union tagScPaClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_pa_enb            : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PA_CLK_EN_U;

/* Define the union U_SC_PA_CLK_DIS_U */
/* PAʱ?ӽ?ֹ?Ĵ??? */
/* 0x35C */
typedef union tagScPaClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_pa_dsb            : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PA_CLK_DIS_U;

/* Define the union U_SC_HLLC_CLK_EN_U */
/* HLLCʱ??ʹ?ܼĴ??? */
/* 0x360 */
typedef union tagScHllcClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_hllc_enb          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_CLK_EN_U;

/* Define the union U_SC_HLLC_CLK_DIS_U */
/* HLLCʱ?ӽ?ֹ?Ĵ??? */
/* 0x364 */
typedef union tagScHllcClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_hllc_dsb          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_CLK_DIS_U;

/* Define the union U_SC_REF_CLK_EN_U */
/* refʱ??ʹ?ܼĴ??? */
/* 0x370 */
typedef union tagScRefClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_ref_enb           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_REF_CLK_EN_U;

/* Define the union U_SC_REF_CLK_DIS_U */
/* refʱ?ӽ?ֹ?Ĵ??? */
/* 0x374 */
typedef union tagScRefClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_ref_dsb           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_REF_CLK_DIS_U;

/* Define the union U_SC_GPIO_DB_CLK_EN_U */
/* gpio_dbʱ??ʹ?ܼĴ??? */
/* 0x378 */
typedef union tagScGpioDbClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_gpio_db_enb       : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_DB_CLK_EN_U;

/* Define the union U_SC_GPIO_DB_CLK_DIS_U */
/* gpio_dbʱ?ӽ?ֹ?Ĵ??? */
/* 0x37C */
typedef union tagScGpioDbClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_gpio_db_dsb       : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_DB_CLK_DIS_U;

/* Define the union U_SC_DJTAG_CLK_EN_U */
/* djtagʱ??ʹ?ܼĴ??? */
/* 0x380 */
typedef union tagScDjtagClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_djtag_enb         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_CLK_EN_U;

/* Define the union U_SC_DJTAG_CLK_DIS_U */
/* djtagʱ?ӽ?ֹ?Ĵ??? */
/* 0x384 */
typedef union tagScDjtagClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_djtag_dsb         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_CLK_DIS_U;

/* Define the union U_SC_HLLC_RXTX_CLK_EN_U */
/* hllc rxtxʱ??ʹ?ܼĴ??? */
/* 0x390 */
typedef union tagScHllcRxtxClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_hllc_hilink_tx0_enb : 1   ; /* [0]  */
        unsigned int    clk_hllc_hilink_tx1_enb : 1   ; /* [1]  */
        unsigned int    clk_hllc_hilink_tx2_enb : 1   ; /* [2]  */
        unsigned int    clk_hllc_hilink_tx3_enb : 1   ; /* [3]  */
        unsigned int    clk_hllc_hilink_tx4_enb : 1   ; /* [4]  */
        unsigned int    clk_hllc_hilink_tx5_enb : 1   ; /* [5]  */
        unsigned int    clk_hllc_hilink_tx6_enb : 1   ; /* [6]  */
        unsigned int    clk_hllc_hilink_tx7_enb : 1   ; /* [7]  */
        unsigned int    clk_hllc_hilink_rx0_enb : 1   ; /* [8]  */
        unsigned int    clk_hllc_hilink_rx1_enb : 1   ; /* [9]  */
        unsigned int    clk_hllc_hilink_rx2_enb : 1   ; /* [10]  */
        unsigned int    clk_hllc_hilink_rx3_enb : 1   ; /* [11]  */
        unsigned int    clk_hllc_hilink_rx4_enb : 1   ; /* [12]  */
        unsigned int    clk_hllc_hilink_rx5_enb : 1   ; /* [13]  */
        unsigned int    clk_hllc_hilink_rx6_enb : 1   ; /* [14]  */
        unsigned int    clk_hllc_hilink_rx7_enb : 1   ; /* [15]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_RXTX_CLK_EN_U;

/* Define the union U_SC_HLLC_RXTX_CLK_DIS_U */
/* hllc rxtxʱ?ӽ?ֹ?Ĵ??? */
/* 0x394 */
typedef union tagScHllcRxtxClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_hllc_hilink_tx0_dsb : 1   ; /* [0]  */
        unsigned int    clk_hllc_hilink_tx1_dsb : 1   ; /* [1]  */
        unsigned int    clk_hllc_hilink_tx2_dsb : 1   ; /* [2]  */
        unsigned int    clk_hllc_hilink_tx3_dsb : 1   ; /* [3]  */
        unsigned int    clk_hllc_hilink_tx4_dsb : 1   ; /* [4]  */
        unsigned int    clk_hllc_hilink_tx5_dsb : 1   ; /* [5]  */
        unsigned int    clk_hllc_hilink_tx6_dsb : 1   ; /* [6]  */
        unsigned int    clk_hllc_hilink_tx7_dsb : 1   ; /* [7]  */
        unsigned int    clk_hllc_hilink_rx0_dsb : 1   ; /* [8]  */
        unsigned int    clk_hllc_hilink_rx1_dsb : 1   ; /* [9]  */
        unsigned int    clk_hllc_hilink_rx2_dsb : 1   ; /* [10]  */
        unsigned int    clk_hllc_hilink_rx3_dsb : 1   ; /* [11]  */
        unsigned int    clk_hllc_hilink_rx4_dsb : 1   ; /* [12]  */
        unsigned int    clk_hllc_hilink_rx5_dsb : 1   ; /* [13]  */
        unsigned int    clk_hllc_hilink_rx6_dsb : 1   ; /* [14]  */
        unsigned int    clk_hllc_hilink_rx7_dsb : 1   ; /* [15]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_RXTX_CLK_DIS_U;

/* Define the union U_SC_RSA_CLK_EN_U */
/* RSAʱ??ʹ?ܼĴ??? */
/* 0x3A0 */
typedef union tagScRsaClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_rsa_enb           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RSA_CLK_EN_U;

/* Define the union U_SC_RSA_CLK_DIS_U */
/* RSAʱ?ӽ?ֹ?Ĵ??? */
/* 0x3A4 */
typedef union tagScRsaClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_rsa_dsb           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RSA_CLK_DIS_U;

/* Define the union U_SC_RDE_CLK_EN_U */
/* RDEʱ??ʹ?ܼĴ??? */
/* 0x3A8 */
typedef union tagScRdeClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_rde_enb           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RDE_CLK_EN_U;

/* Define the union U_SC_RDE_CLK_DIS_U */
/* RDEʱ?ӽ?ֹ?Ĵ??? */
/* 0x3AC */
typedef union tagScRdeClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_rde_dsb           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RDE_CLK_DIS_U;

/* Define the union U_SC_RNG_CLK_EN_U */
/* RNGʱ??ʹ?ܼĴ??? */
/* 0x3B0 */
typedef union tagScRngClkEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_rng_enb           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RNG_CLK_EN_U;

/* Define the union U_SC_RNG_CLK_DIS_U */
/* RNGʱ?ӽ?ֹ?Ĵ??? */
/* 0x3B4 */
typedef union tagScRngClkDis
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_rng_dsb           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RNG_CLK_DIS_U;

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

/* Define the union U_SC_HILINK_PCS_RESET_REQ_U */
/* HILINK PCS?���λ???????ƼĴ??? */
/* 0xA58 */
typedef union tagScHilinkPcsResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hllc_hilink_pcs_lane0_srst_req : 1   ; /* [0]  */
        unsigned int    hllc_hilink_pcs_lane1_srst_req : 1   ; /* [1]  */
        unsigned int    hllc_hilink_pcs_lane2_srst_req : 1   ; /* [2]  */
        unsigned int    hllc_hilink_pcs_lane3_srst_req : 1   ; /* [3]  */
        unsigned int    hllc_hilink_pcs_lane4_srst_req : 1   ; /* [4]  */
        unsigned int    hllc_hilink_pcs_lane5_srst_req : 1   ; /* [5]  */
        unsigned int    hllc_hilink_pcs_lane6_srst_req : 1   ; /* [6]  */
        unsigned int    hllc_hilink_pcs_lane7_srst_req : 1   ; /* [7]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK_PCS_RESET_REQ_U;

/* Define the union U_SC_HILINK_PCS_RESET_DREQ_U */
/* HILINK PCS?���λȥ???????ƼĴ??? */
/* 0xA5C */
typedef union tagScHilinkPcsResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hllc_hilink_pcs_lane0_srst_dreq : 1   ; /* [0]  */
        unsigned int    hllc_hilink_pcs_lane1_srst_dreq : 1   ; /* [1]  */
        unsigned int    hllc_hilink_pcs_lane2_srst_dreq : 1   ; /* [2]  */
        unsigned int    hllc_hilink_pcs_lane3_srst_dreq : 1   ; /* [3]  */
        unsigned int    hllc_hilink_pcs_lane4_srst_dreq : 1   ; /* [4]  */
        unsigned int    hllc_hilink_pcs_lane5_srst_dreq : 1   ; /* [5]  */
        unsigned int    hllc_hilink_pcs_lane6_srst_dreq : 1   ; /* [6]  */
        unsigned int    hllc_hilink_pcs_lane7_srst_dreq : 1   ; /* [7]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK_PCS_RESET_DREQ_U;

/* Define the union U_SC_HLLC_RXTX_RESET_REQ_U */
/* hllc rxtx?���λ???????ƼĴ??? */
/* 0xA60 */
typedef union tagScHllcRxtxResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hllc_rx0_srst_req     : 1   ; /* [0]  */
        unsigned int    hllc_rx1_srst_req     : 1   ; /* [1]  */
        unsigned int    hllc_rx2_srst_req     : 1   ; /* [2]  */
        unsigned int    hllc_rx3_srst_req     : 1   ; /* [3]  */
        unsigned int    hllc_rx4_srst_req     : 1   ; /* [4]  */
        unsigned int    hllc_rx5_srst_req     : 1   ; /* [5]  */
        unsigned int    hllc_rx6_srst_req     : 1   ; /* [6]  */
        unsigned int    hllc_rx7_srst_req     : 1   ; /* [7]  */
        unsigned int    hllc_tx0_srst_req     : 1   ; /* [8]  */
        unsigned int    hllc_tx1_srst_req     : 1   ; /* [9]  */
        unsigned int    hllc_tx2_srst_req     : 1   ; /* [10]  */
        unsigned int    hllc_tx3_srst_req     : 1   ; /* [11]  */
        unsigned int    hllc_tx4_srst_req     : 1   ; /* [12]  */
        unsigned int    hllc_tx5_srst_req     : 1   ; /* [13]  */
        unsigned int    hllc_tx6_srst_req     : 1   ; /* [14]  */
        unsigned int    hllc_tx7_srst_req     : 1   ; /* [15]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_RXTX_RESET_REQ_U;

/* Define the union U_SC_HLLC_RXTX_RESET_DREQ_U */
/* hllc rxtx?���λȥ???????ƼĴ??? */
/* 0xA64 */
typedef union tagScHllcRxtxResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hllc_rx0_srst_dreq    : 1   ; /* [0]  */
        unsigned int    hllc_rx1_srst_dreq    : 1   ; /* [1]  */
        unsigned int    hllc_rx2_srst_dreq    : 1   ; /* [2]  */
        unsigned int    hllc_rx3_srst_dreq    : 1   ; /* [3]  */
        unsigned int    hllc_rx4_srst_dreq    : 1   ; /* [4]  */
        unsigned int    hllc_rx5_srst_dreq    : 1   ; /* [5]  */
        unsigned int    hllc_rx6_srst_dreq    : 1   ; /* [6]  */
        unsigned int    hllc_rx7_srst_dreq    : 1   ; /* [7]  */
        unsigned int    hllc_tx0_srst_dreq    : 1   ; /* [8]  */
        unsigned int    hllc_tx1_srst_dreq    : 1   ; /* [9]  */
        unsigned int    hllc_tx2_srst_dreq    : 1   ; /* [10]  */
        unsigned int    hllc_tx3_srst_dreq    : 1   ; /* [11]  */
        unsigned int    hllc_tx4_srst_dreq    : 1   ; /* [12]  */
        unsigned int    hllc_tx5_srst_dreq    : 1   ; /* [13]  */
        unsigned int    hllc_tx6_srst_dreq    : 1   ; /* [14]  */
        unsigned int    hllc_tx7_srst_dreq    : 1   ; /* [15]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_RXTX_RESET_DREQ_U;

/* Define the union U_SC_PA_RESET_REQ_U */
/* PA?���λ???????ƼĴ??? */
/* 0xA78 */
typedef union tagScPaResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pa_srst_req           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PA_RESET_REQ_U;

/* Define the union U_SC_PA_RESET_DREQ_U */
/* PA?���λȥ???????ƼĴ??? */
/* 0xA7C */
typedef union tagScPaResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pa_srst_dreq          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PA_RESET_DREQ_U;

/* Define the union U_SC_HLLC_RESET_REQ_U */
/* HLLC?���λ???????ƼĴ??? */
/* 0xA80 */
typedef union tagScHllcResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hllc_srst_req         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_RESET_REQ_U;

/* Define the union U_SC_HLLC_RESET_DREQ_U */
/* HLLC?���λȥ???????ƼĴ??? */
/* 0xA84 */
typedef union tagScHllcResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hllc_srst_dreq        : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_RESET_DREQ_U;

/* Define the union U_SC_DJTAG_RESET_REQ_U */
/* DJTAG?���λ???????ƼĴ??? */
/* 0xA90 */
typedef union tagScDjtagResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    djtag_srst_req        : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_RESET_REQ_U;

/* Define the union U_SC_DJTAG_RESET_DREQ_U */
/* DJTAG?���λȥ???????ƼĴ??? */
/* 0xA94 */
typedef union tagScDjtagResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    djtag_srst_dreq       : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_RESET_DREQ_U;

/* Define the union U_SC_RSA_RESET_REQ_U */
/* RSA?���λ???????ƼĴ??? */
/* 0xA98 */
typedef union tagScRsaResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rsa_srst_req          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RSA_RESET_REQ_U;

/* Define the union U_SC_RSA_RESET_DREQ_U */
/* RSA?���λȥ???????ƼĴ??? */
/* 0xA9C */
typedef union tagScRsaResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rsa_srst_dreq         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RSA_RESET_DREQ_U;

/* Define the union U_SC_RDE_RESET_REQ_U */
/* RDE?���λ???????ƼĴ??? */
/* 0xAA0 */
typedef union tagScRdeResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rde_srst_req          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RDE_RESET_REQ_U;

/* Define the union U_SC_RDE_RESET_DREQ_U */
/* RDE?���λȥ???????ƼĴ??? */
/* 0xAA4 */
typedef union tagScRdeResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rde_srst_dreq         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RDE_RESET_DREQ_U;

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

/* Define the union U_SC_RNG_RESET_REQ_U */
/* RNG?���λ???????ƼĴ??? */
/* 0xAB0 */
typedef union tagScRngResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rng_srst_req          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RNG_RESET_REQ_U;

/* Define the union U_SC_RNG_RESET_DREQ_U */
/* RNG?���λȥ???????ƼĴ??? */
/* 0xAB4 */
typedef union tagScRngResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rng_srst_dreq         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RNG_RESET_DREQ_U;

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

/* Define the union U_SC_PCS_LOCAL_RESET_REQ_U */
/* PCS LOCAL?���λ???????ƼĴ??? */
/* 0xAC0 */
typedef union tagScPcsLocalResetReq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pcs_local_srst_req    : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PCS_LOCAL_RESET_REQ_U;

/* Define the union U_SC_PCS_LOCAL_RESET_DREQ_U */
/* PCS LOCAL?���λȥ???????ƼĴ??? */
/* 0xAC4 */
typedef union tagScPcsLocalResetDreq
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pcs_local_srst_dreq   : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PCS_LOCAL_RESET_DREQ_U;

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

/* Define the union U_SC_DISPATCH_REMAP_CTRL_U */
/* subsys??????Remap?Ĵ??? */
/* 0x1200 */
typedef union tagScDispatchRemapCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sys_remap_vld         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DISPATCH_REMAP_CTRL_U;

/* Define the union U_SC_TSENSOR_CTRL0_U */
/* TSENSOR???ƼĴ???0 */
/* 0x20D0 */
typedef union tagScTsensorCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    tsensor_temp_en       : 1   ; /* [0]  */
        unsigned int    reserved_1            : 7   ; /* [7..1]  */
        unsigned int    tsensor_ct_sel        : 2   ; /* [9..8]  */
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TSENSOR_CTRL0_U;

/* Define the union U_SC_TSENSOR_CTRL1_U */
/* TSENSOR???ƼĴ???1 */
/* 0x20D4 */
typedef union tagScTsensorCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    tsensor_test          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TSENSOR_CTRL1_U;

/* Define the union U_SC_BOOTROM_CTRL_U */
/* BOOTROM???ƼĴ??? */
/* 0x20F0 */
typedef union tagScBootromCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    bootrom_rtsel         : 2   ; /* [1..0]  */
        unsigned int    bootrom_ptsel         : 2   ; /* [3..2]  */
        unsigned int    bootrom_trb           : 2   ; /* [5..4]  */
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_BOOTROM_CTRL_U;

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

/* Define the union U_SC_RSA_ADDR_H_U */
/* RSA??20λ??ַ?????Ĵ??? */
/* 0x2E00 */
typedef union tagScRsaAddrH
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rsa_addr_h            : 20  ; /* [19..0]  */
        unsigned int    reserved_0            : 12  ; /* [31..20]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RSA_ADDR_H_U;

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

/* Define the union U_SC_RSA_MEM_CTRL_U */
/* rsa mem???ƼĴ??? */
/* 0x3030 */
typedef union tagScRsaMemCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rfs_rsa          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RSA_MEM_CTRL_U;

/* Define the union U_SC_HLLC_MEM_CTRL_U */
/* hllc mem???ƼĴ??? */
/* 0x3040 */
typedef union tagScHllcMemCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rft_hllc         : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_MEM_CTRL_U;

/* Define the union U_SC_PA_MEM_CTRL0_U */
/* pa mem???ƼĴ???0 */
/* 0x3050 */
typedef union tagScPaMemCtrl0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rfs_pa           : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PA_MEM_CTRL0_U;

/* Define the union U_SC_PA_MEM_CTRL1_U */
/* pa mem???ƼĴ???1 */
/* 0x3054 */
typedef union tagScPaMemCtrl1
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rft_pa           : 10  ; /* [9..0]  */
        unsigned int    reserved_0            : 22  ; /* [31..10]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PA_MEM_CTRL1_U;

/* Define the union U_SC_RDE_MEM_CTRL_U */
/* rde mem???ƼĴ??? */
/* 0x3060 */
typedef union tagScRdeMemCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    ctrl_rfs_rde          : 8   ; /* [7..0]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RDE_MEM_CTRL_U;

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

/* Define the union U_SC_PLL_LOCK_ST_U */
/* PLL????״̬?Ĵ??? */
/* 0x5000 */
typedef union tagScPllLockSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pll0_lock             : 1   ; /* [0]  */
        unsigned int    pll1_lock             : 1   ; /* [1]  */
        unsigned int    pll2_lock             : 1   ; /* [2]  */
        unsigned int    pll3_lock             : 1   ; /* [3]  */
        unsigned int    pll4_lock             : 1   ; /* [4]  */
        unsigned int    reserved_0            : 27  ; /* [31..5]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PLL_LOCK_ST_U;

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

/* Define the union U_SC_PA_CLK_ST_U */
/* PAʱ??״̬?Ĵ??? */
/* 0x532C */
typedef union tagScPaClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_pa_st             : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PA_CLK_ST_U;

/* Define the union U_SC_HLLC_CLK_ST_U */
/* HLLCʱ??״̬?Ĵ??? */
/* 0x5330 */
typedef union tagScHllcClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_hllc_st           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_CLK_ST_U;

/* Define the union U_SC_REF_CLK_ST_U */
/* refʱ??״̬?Ĵ??? */
/* 0x5338 */
typedef union tagScRefClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_ref_st            : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_REF_CLK_ST_U;

/* Define the union U_SC_GPIO_DB_CLK_ST_U */
/* gpio_dbʱ??״̬?Ĵ??? */
/* 0x533C */
typedef union tagScGpioDbClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_gpio_db_st        : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_GPIO_DB_CLK_ST_U;

/* Define the union U_SC_DJTAG_CLK_ST_U */
/* djtagʱ??״̬?Ĵ??? */
/* 0x5340 */
typedef union tagScDjtagClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_djtag_st          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_CLK_ST_U;

/* Define the union U_SC_HLLC_RXTX_CLK_ST_U */
/* hllc rxtxʱ??״̬?Ĵ??? */
/* 0x5348 */
typedef union tagScHllcRxtxClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_hllc_hilink_tx0_st : 1   ; /* [0]  */
        unsigned int    clk_hllc_hilink_tx1_st : 1   ; /* [1]  */
        unsigned int    clk_hllc_hilink_tx2_st : 1   ; /* [2]  */
        unsigned int    clk_hllc_hilink_tx3_st : 1   ; /* [3]  */
        unsigned int    clk_hllc_hilink_tx4_st : 1   ; /* [4]  */
        unsigned int    clk_hllc_hilink_tx5_st : 1   ; /* [5]  */
        unsigned int    clk_hllc_hilink_tx6_st : 1   ; /* [6]  */
        unsigned int    clk_hllc_hilink_tx7_st : 1   ; /* [7]  */
        unsigned int    clk_hllc_hilink_rx0_st : 1   ; /* [8]  */
        unsigned int    clk_hllc_hilink_rx1_st : 1   ; /* [9]  */
        unsigned int    clk_hllc_hilink_rx2_st : 1   ; /* [10]  */
        unsigned int    clk_hllc_hilink_rx3_st : 1   ; /* [11]  */
        unsigned int    clk_hllc_hilink_rx4_st : 1   ; /* [12]  */
        unsigned int    clk_hllc_hilink_rx5_st : 1   ; /* [13]  */
        unsigned int    clk_hllc_hilink_rx6_st : 1   ; /* [14]  */
        unsigned int    clk_hllc_hilink_rx7_st : 1   ; /* [15]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_RXTX_CLK_ST_U;

/* Define the union U_SC_RSA_CLK_ST_U */
/* RSAʱ??״̬?Ĵ??? */
/* 0x5350 */
typedef union tagScRsaClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_rsa_st            : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RSA_CLK_ST_U;

/* Define the union U_SC_RDE_CLK_ST_U */
/* RDEʱ??״̬?Ĵ??? */
/* 0x5354 */
typedef union tagScRdeClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_rde_st            : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RDE_CLK_ST_U;

/* Define the union U_SC_RNG_CLK_ST_U */
/* RNGʱ??״̬?Ĵ??? */
/* 0x5358 */
typedef union tagScRngClkSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    clk_rng_st            : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RNG_CLK_ST_U;

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

/* Define the union U_SC_HILINK_PCS_RESET_ST_U */
/* HILINK_PCS??λ״̬?Ĵ??? */
/* 0x5A2C */
typedef union tagScHilinkPcsResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hllc_hilink_pcs_lane0_srst_st : 1   ; /* [0]  */
        unsigned int    hllc_hilink_pcs_lane1_srst_st : 1   ; /* [1]  */
        unsigned int    hllc_hilink_pcs_lane2_srst_st : 1   ; /* [2]  */
        unsigned int    hllc_hilink_pcs_lane3_srst_st : 1   ; /* [3]  */
        unsigned int    hllc_hilink_pcs_lane4_srst_st : 1   ; /* [4]  */
        unsigned int    hllc_hilink_pcs_lane5_srst_st : 1   ; /* [5]  */
        unsigned int    hllc_hilink_pcs_lane6_srst_st : 1   ; /* [6]  */
        unsigned int    hllc_hilink_pcs_lane7_srst_st : 1   ; /* [7]  */
        unsigned int    reserved_0            : 24  ; /* [31..8]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HILINK_PCS_RESET_ST_U;

/* Define the union U_SC_HLLC_RXTX_RESET_ST_U */
/* hllc rxtx??λ״̬?Ĵ??? */
/* 0x5A30 */
typedef union tagScHllcRxtxResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hllc_rx0_srst_st      : 1   ; /* [0]  */
        unsigned int    hllc_rx1_srst_st      : 1   ; /* [1]  */
        unsigned int    hllc_rx2_srst_st      : 1   ; /* [2]  */
        unsigned int    hllc_rx3_srst_st      : 1   ; /* [3]  */
        unsigned int    hllc_rx4_srst_st      : 1   ; /* [4]  */
        unsigned int    hllc_rx5_srst_st      : 1   ; /* [5]  */
        unsigned int    hllc_rx6_srst_st      : 1   ; /* [6]  */
        unsigned int    hllc_rx7_srst_st      : 1   ; /* [7]  */
        unsigned int    hllc_tx0_srst_st      : 1   ; /* [8]  */
        unsigned int    hllc_tx1_srst_st      : 1   ; /* [9]  */
        unsigned int    hllc_tx2_srst_st      : 1   ; /* [10]  */
        unsigned int    hllc_tx3_srst_st      : 1   ; /* [11]  */
        unsigned int    hllc_tx4_srst_st      : 1   ; /* [12]  */
        unsigned int    hllc_tx5_srst_st      : 1   ; /* [13]  */
        unsigned int    hllc_tx6_srst_st      : 1   ; /* [14]  */
        unsigned int    hllc_tx7_srst_st      : 1   ; /* [15]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_RXTX_RESET_ST_U;

/* Define the union U_SC_PA_RESET_ST_U */
/* PA??λ״̬?Ĵ??? */
/* 0x5A3C */
typedef union tagScPaResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pa_srst_st            : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PA_RESET_ST_U;

/* Define the union U_SC_HLLC_RESET_ST_U */
/* HLLC??λ״̬?Ĵ??? */
/* 0x5A40 */
typedef union tagScHllcResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    hllc_srst_st          : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_HLLC_RESET_ST_U;

/* Define the union U_SC_DJTAG_RESET_ST_U */
/* DJTAG??λ״̬?Ĵ??? */
/* 0x5A48 */
typedef union tagScDjtagResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    djtag_srst_st         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_RESET_ST_U;

/* Define the union U_SC_RSA_RESET_ST_U */
/* RSA??λ״̬?Ĵ??? */
/* 0x5A4C */
typedef union tagScRsaResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rsa_srst_st           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RSA_RESET_ST_U;

/* Define the union U_SC_RDE_RESET_ST_U */
/* RDE??λ״̬?Ĵ??? */
/* 0x5A50 */
typedef union tagScRdeResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rde_srst_st           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RDE_RESET_ST_U;

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

/* Define the union U_SC_RNG_RESET_ST_U */
/* RNG??λ״̬?Ĵ??? */
/* 0x5A58 */
typedef union tagScRngResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rng_srst_st           : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_RNG_RESET_ST_U;

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

/* Define the union U_SC_PCS_LOCAL_RESET_ST_U */
/* PCS LOCAL?���λ????״̬?Ĵ??? */
/* 0x5A60 */
typedef union tagScPcsLocalResetSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pcs_local_srst_st     : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_PCS_LOCAL_RESET_ST_U;

/* Define the union U_SC_TSENSOR_ST_U */
/* TSENSOR״̬?Ĵ??? */
/* 0x6040 */
typedef union tagScTsensorSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    temp_out_tsensor      : 8   ; /* [7..0]  */
        unsigned int    reserved_1            : 4   ; /* [11..8]  */
        unsigned int    data_ready_tsensor    : 1   ; /* [12]  */
        unsigned int    reserved_0            : 19  ; /* [31..13]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TSENSOR_ST_U;

/* Define the union U_SC_DJTAG_INT_U */
/* DJTAG Master??״̬????ʱ?ж?Դ?Ĵ??? */
/* 0x6600 */
typedef union tagScDjtagInt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    djtag_sta_timeout     : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_INT_U;

/* Define the union U_SC_DBG_AUTH_CTRL_U */
/* ??ȫ?ȼ???Ȩ???ƼĴ?????
??ע?⣺1???˼Ĵ????ռ??????ǰ?ȫ???ʲ??ܳɹ????? */
/* 0x6700 */
typedef union tagScDbgAuthCtrl
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rsa_djtag_sec_acc_en  : 1   ; /* [0]  */
        unsigned int    rsa_secure_cfg        : 1   ; /* [1]  */
        unsigned int    reserved_0            : 30  ; /* [31..2]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DBG_AUTH_CTRL_U;

/* Define the union U_SC_DJTAG_MSTR_EN_U */
/* SC_DJTAG_MSTR_ENΪDJTAG Masterʹ?ܿ??? */
/* 0x6800 */
typedef union tagScDjtagMstrEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    djtag_mstr_en         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_MSTR_EN_U;

/* Define the union U_SC_DJTAG_MSTR_START_EN_U */
/* SC_DJTAG_MSTR_START_ENΪDJTAG Master????chain��??startʹ?? */
/* 0x6804 */
typedef union tagScDjtagMstrStartEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    djtag_mstr_start_en   : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_MSTR_START_EN_U;

/* Define the union U_SC_DJTAG_SEC_ACC_EN_U */
/* DJTAG???ʸ?ģ???ڰ?ȫ?��??Ĵ????İ?ȫ???ʿ???ʹ?ܡ???ע?⣺1???˼Ĵ????ռ??????ǰ?ȫ???ʲ??ܳɹ????? */
/* 0x6808 */
typedef union tagScDjtagSecAccEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    djtag_sec_acc_en      : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_SEC_ACC_EN_U;

/* Define the union U_SC_DJTAG_DEBUG_MODULE_SEL_U */
/* SC_DJTAG_DEBUG_MODULE_SELΪDJTAG Master???÷???ģ???Ĵ??? */
/* 0x680C */
typedef union tagScDjtagDebugModuleSel
{
    /* Define the struct bits */
    struct
    {
        unsigned int    debug_module_sel      : 6   ; /* [5..0]  */
        unsigned int    reserved_0            : 26  ; /* [31..6]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_DEBUG_MODULE_SEL_U;

/* Define the union U_SC_DJTAG_MSTR_WR_U */
/* SC_DJTAG_MSTR_WRΪDJTAG Master?Ķ?д?????ź? */
/* 0x6810 */
typedef union tagScDjtagMstrWr
{
    /* Define the struct bits */
    struct
    {
        unsigned int    djtag_mstr_wr         : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_MSTR_WR_U;

/* Define the union U_SC_DJTAG_CHAIN_UNIT_CFG_EN_U */
/* SC_DJTAG_CHAIN_UNIT_CFG_ENΪDJTAG Master??chain��?ϵ?Ԫ?ķ???ʹ?? */
/* 0x6814 */
typedef union tagScDjtagChainUnitCfgEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    chain_unit_cfg_en     : 16  ; /* [15..0]  */
        unsigned int    reserved_0            : 16  ; /* [31..16]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_CHAIN_UNIT_CFG_EN_U;

/* Define the union U_SC_DJTAG_MSTR_ADDR_U */
/* SC_DJTAG_MSTR_ADDRΪDJTAG Master???÷???ģ????ƫ?Ƶ?ַ?Ĵ??? */
/* 0x6818 */
typedef union tagScDjtagMstrAddr
{
    /* Define the struct bits */
    struct
    {
        unsigned int    djtag_mstr_addr       : 31  ; /* [30..0]  */
        unsigned int    reserved_0            : 1   ; /* [31]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_MSTR_ADDR_U;

/* Define the union U_SC_TDRE_OP_ADDR_U */
/* SC_TDRE_OP_ADDRΪDJTAG Master????TDREģ????ƫ?Ƶ?ַ?Ĵ????Ͳ??????ͼĴ??? */
/* 0x6824 */
typedef union tagScTdreOpAddr
{
    /* Define the struct bits */
    struct
    {
        unsigned int    tdre_op_addr          : 18  ; /* [17..0]  */
        unsigned int    reserved_0            : 14  ; /* [31..18]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TDRE_OP_ADDR_U;

/* Define the union U_SC_TDRE_REPAIR_EN_U */
/* SC_TDRE_REPAIR_ENΪDJTAG Master??TDRE REPAIRʹ?? */
/* 0x682C */
typedef union tagScTdreRepairEn
{
    /* Define the struct bits */
    struct
    {
        unsigned int    tdre_repair_en        : 1   ; /* [0]  */
        unsigned int    reserved_0            : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_TDRE_REPAIR_EN_U;

/* Define the union U_SC_ECO_RSV0_U */
/* ECO ?Ĵ???0 */
/* 0x8000 */
typedef union tagScEcoRsv0
{
    /* Define the struct bits */
    struct
    {
        unsigned int    djtag_nor_cfg_en      : 1   ; /* [0]  */
        unsigned int    eco_rsv0              : 31  ; /* [31..1]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_ECO_RSV0_U;

/* Define the union U_SC_DJTAG_OP_ST_U */
/* DJTAG????״̬?Ĵ??? */
/* 0xE828 */
typedef union tagScDjtagOpSt
{
    /* Define the struct bits */
    struct
    {
        unsigned int    unit_conflict         : 8   ; /* [7..0]  */
        unsigned int    djtag_op_done         : 1   ; /* [8]  */
        unsigned int    debug_bus_en          : 1   ; /* [9]  */
        unsigned int    reserved_1            : 6   ; /* [15..10]  */
        unsigned int    rdata_changed         : 10  ; /* [25..16]  */
        unsigned int    reserved_0            : 6   ; /* [31..26]  */
    } bits;

    /* Define an unsigned member */
    unsigned int    u32;

} SC_DJTAG_OP_ST_U;


#endif

#endif // __ALG_SUB_REG_OFFSET_H__
