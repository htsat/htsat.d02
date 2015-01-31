/******************************************************************************

                  ??Ȩ???? (C), 2011-2021, ??Ϊ???????޹?˾

 ******************************************************************************
  ?? ?? ??   : sre_crs20.c
  ?? ?? ??   : ????
  ??    ??   : z00176027
  ????????   : 2013??10??17??
  ?????޸?   :
  ????????   : P660 ??ϵͳ20 ??λ??ȥ??λ
  ?????б?   :
  ?޸???ʷ   :
  1.??    ??   : 2013??10??17??
    ??    ??   : z00176027
    ?޸?????   : ?????ļ?

******************************************************************************/

#include "sre_sub_m3.h"


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
UINT64 sub_m3_base_addr = 0;
UINT64 sub_m3_pa_addr = 0;


/*----------------------------------------------*
 * ģ?鼶??��                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ??��????                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ?궨??                                       *
 *----------------------------------------------*/
       /* ????Dsaf SUB?ļĴ?????д?ӿ? */
#ifdef HRD_OS_LINUX
 inline UINT32 M3_SUB_READ_REG(UINT32 pRegBase, UINT32 ulRegIndex)
 {
     volatile UINT32 temp;

     temp = ioread32((void __iomem *)(sub_m3_base_addr + (pRegBase - M3_SUB_BASE) + (ulRegIndex << 2)));

     return temp;
 }

#define M3_SUB_WRITE_REG(pRegBase, ulRegIndex, ulValue) \
    (iowrite32(ulValue, (void __iomem *)(sub_m3_base_addr + (pRegBase - M3_SUB_BASE) + (ulRegIndex << 2))))

#else
#define M3_SUB_READ_REG(pRegBase, ulRegIndex) \
           OS_READ_REG(pRegBase, ulRegIndex)

#define M3_SUB_WRITE_REG(pRegBase, ulRegIndex, ulValue) \
           OS_WRITE_REG(pRegBase, ulRegIndex, ulValue)

#endif






/*****************************************************************************
 ?? ?? ??  : HRD_M3_WdgSrst
 ????????  : Wdg??λ???⸴λ
 ????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
 ????????  : ??
 ?? ?? ֵ  :
 ???ú???  :
 ????????  :

 ?޸???ʷ      :
  1.??    ??   : 2013??10??24??
    ??    ??   : z00176027
    ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_M3_WdgSrst(UINT32 ulEn)
{
    SC_WDG_RESET_REQ_U o_sc_wdg_reset_req;
    SC_WDG_RESET_DREQ_U o_sc_wdg_reset_dreq;

    memset(&o_sc_wdg_reset_req,0,sizeof(SC_WDG_RESET_REQ_U));
    memset(&o_sc_wdg_reset_dreq,0,sizeof(SC_WDG_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_wdg_reset_req.bits.wdg_srst_req = 1;
        M3_SUB_WRITE_REG(M3_SUB_SC_WDG_RESET_REQ_REG,0,o_sc_wdg_reset_req.u32);
    }
    else
    {
         o_sc_wdg_reset_dreq.bits.wdg_srst_dreq = 1;
         M3_SUB_WRITE_REG(M3_SUB_SC_WDG_RESET_DREQ_REG,0,o_sc_wdg_reset_dreq.u32);
    }

    return OS_SUCCESS;
}

/*****************************************************************************
 ?? ?? ??  : HRD_M3_TimerSrst
 ????????  : Timer??λ???⸴λ
 ????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
 ????????  : ??
 ?? ?? ֵ  :
 ???ú???  :
 ????????  :

 ?޸???ʷ      :
  1.??    ??   : 2013??10??24??
    ??    ??   : z00176027
    ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_M3_TimerSrst(UINT32 ulEn)
{
    SC_TIMER_RESET_REQ_U o_sc_timer_reset_req;
    SC_TIMER_RESET_DREQ_U o_sc_timer_reset_dreq;

    memset(&o_sc_timer_reset_req,0,sizeof(SC_TIMER_RESET_REQ_U));
    memset(&o_sc_timer_reset_dreq,0,sizeof(SC_TIMER_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_timer_reset_req.bits.timer_srst_req = 1;
        M3_SUB_WRITE_REG(M3_SUB_SC_TIMER_RESET_REQ_REG,0,o_sc_timer_reset_req.u32);
    }
    else
    {
         o_sc_timer_reset_dreq.bits.timer_srst_dreq = 1;
         M3_SUB_WRITE_REG(M3_SUB_SC_TIMER_RESET_DREQ_REG,0,o_sc_timer_reset_dreq.u32);
    }

    return OS_SUCCESS;
}

/*****************************************************************************
 ?? ?? ??  : HRD_M3_UartSrst
 ????????  : M3 uart??λ???⸴λ
 ????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
 ????????  : ??
 ?? ?? ֵ  :
 ???ú???  :
 ????????  :

 ?޸???ʷ      :
  1.??    ??   : 2013??10??24??
    ??    ??   : z00176027
    ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_M3_UartSrstByPort(UINT32 ulPort,UINT32 ulEn)
{
    SC_UART_RESET_REQ_U o_sc_uart_reset_req;
    SC_UART_RESET_DREQ_U o_sc_uart_reset_dreq;

    if(ulPort >= PV660_M3_UART_NUM)
    {
        return OS_FAIL;
    }

    memset(&o_sc_uart_reset_req,0,sizeof(SC_UART_RESET_REQ_U));
    memset(&o_sc_uart_reset_dreq,0,sizeof(SC_UART_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_uart_reset_req.u32 |= (1 << ulPort);
        M3_SUB_WRITE_REG(M3_SUB_SC_UART_RESET_REQ_REG,0,o_sc_uart_reset_req.u32);
    }
    else
    {
         o_sc_uart_reset_dreq.u32 |= (1 << ulPort);
         M3_SUB_WRITE_REG(M3_SUB_SC_UART_RESET_DREQ_REG,0,o_sc_uart_reset_dreq.u32);
    }

    return OS_SUCCESS;
}

/*****************************************************************************
 ?? ?? ??  : HRD_M3_ItsSrst
 ????????  : Its??λ???⸴λ
 ????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
 ????????  : ??
 ?? ?? ֵ  :
 ???ú???  :
 ????????  :

 ?޸???ʷ      :
  1.??    ??   : 2013??10??22??
    ??    ??   : z00176027
    ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_M3_ItsSrst(UINT32 ulEn)
{
    SC_ITS_RESET_REQ_U o_sc_its_reset_req;
    SC_ITS_RESET_DREQ_U o_sc_its_reset_dreq;

    memset(&o_sc_its_reset_req,0,sizeof(SC_ITS_RESET_REQ_U));
    memset(&o_sc_its_reset_dreq,0,sizeof(SC_ITS_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_its_reset_req.bits.its_srst_req = 1;
        M3_SUB_WRITE_REG(M3_SUB_SC_ITS_RESET_REQ_REG,0,o_sc_its_reset_req.u32);
    }
    else
    {
         o_sc_its_reset_dreq.bits.its_srst_dreq = 1;
         M3_SUB_WRITE_REG(M3_SUB_SC_ITS_RESET_DREQ_REG,0,o_sc_its_reset_dreq.u32);
    }

    return OS_SUCCESS;
}

/*****************************************************************************
 ?? ?? ??  : HRD_M3_IpcmSrst
 ????????  : Its??λ???⸴λ
 ????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
 ????????  : ??
 ?? ?? ֵ  :
 ???ú???  :
 ????????  :

 ?޸???ʷ      :
  1.??    ??   : 2013??10??22??
    ??    ??   : z00176027
    ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_M3_IpcmSrst(UINT32 ulEn)
{
    SC_IPCM_RESET_REQ_U o_sc_ipcm_reset_req;
    SC_IPCM_RESET_DREQ_U o_sc_ipcm_reset_dreq;

    memset(&o_sc_ipcm_reset_req,0,sizeof(SC_IPCM_RESET_REQ_U));
    memset(&o_sc_ipcm_reset_dreq,0,sizeof(SC_IPCM_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_ipcm_reset_req.bits.ipcm_srst_req = 1;
        M3_SUB_WRITE_REG(M3_SUB_SC_IPCM_RESET_REQ_REG,0,o_sc_ipcm_reset_req.u32);
    }
    else
    {
         o_sc_ipcm_reset_dreq.bits.ipcm_srst_dreq = 1;
         M3_SUB_WRITE_REG(M3_SUB_SC_IPCM_RESET_DREQ_REG,0,o_sc_ipcm_reset_dreq.u32);
    }

    return OS_SUCCESS;
}


/*****************************************************************************
 ?? ?? ??  : HRD_M3_SramSrst
 ????????  : M3 Sram??λ???⸴λ
 ????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
 ????????  : ??
 ?? ?? ֵ  :
 ???ú???  :
 ????????  :

 ?޸???ʷ      :
  1.??    ??   : 2013??10??22??
    ??    ??   : z00176027
    ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_M3_SramSrst(UINT32 ulEn)
{
    SC_SRAM_RESET_REQ_U o_sc_sram_reset_req;
    SC_SRAM_RESET_DREQ_U o_sc_sram_reset_dreq;

    memset(&o_sc_sram_reset_req,0,sizeof(SC_SRAM_RESET_REQ_U));
    memset(&o_sc_sram_reset_dreq,0,sizeof(SC_SRAM_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_sram_reset_req.bits.sram_srst_req = 1;
        M3_SUB_WRITE_REG(M3_SUB_SC_SRAM_RESET_REQ_REG,0,o_sc_sram_reset_req.u32);
    }
    else
    {
         o_sc_sram_reset_dreq.bits.sram_srst_dreq = 1;
         M3_SUB_WRITE_REG(M3_SUB_SC_SRAM_RESET_DREQ_REG,0,o_sc_sram_reset_dreq.u32);
    }

    return OS_SUCCESS;
}


/*****************************************************************************
 ?? ?? ??  : HRD_M3_SfcSrstByPort
 ????????  : M3 SFC??λ???⸴λ
 ????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
 ????????  : ??
 ?? ?? ֵ  :
 ???ú???  :
 ????????  :

 ?޸???ʷ      :
  1.??    ??   : 2013??10??24??
    ??    ??   : z00176027
    ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_M3_SfcSrstByPort(UINT32 ulPort,UINT32 ulEn)
{
    SC_SFC_RESET_REQ_U o_sc_sfc_reset_req;
    SC_SFC_RESET_DREQ_U o_sc_sfc_reset_dreq;

    if(ulPort >= PV660_M3_SFC_NUM)
    {
        return OS_FAIL;
    }

    memset(&o_sc_sfc_reset_req,0,sizeof(SC_SFC_RESET_REQ_U));
    memset(&o_sc_sfc_reset_dreq,0,sizeof(SC_SFC_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_sfc_reset_req.u32 |= (1 << ulPort);
        M3_SUB_WRITE_REG(M3_SUB_SC_SFC_RESET_REQ_REG,0,o_sc_sfc_reset_req.u32);
    }
    else
    {
         o_sc_sfc_reset_dreq.u32 |= (1 << ulPort);
         M3_SUB_WRITE_REG(M3_SUB_SC_SFC_RESET_DREQ_REG,0,o_sc_sfc_reset_dreq.u32);
    }

    return OS_SUCCESS;
}


/*****************************************************************************
 ?? ?? ??  : HRD_M3_I2cmSrst
 ????????  : I2cm??λ???⸴λ
 ????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
 ????????  : ??
 ?? ?? ֵ  :
 ???ú???  :
 ????????  :

 ?޸???ʷ      :
  1.??    ??   : 2013??10??22??
    ??    ??   : z00176027
    ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_M3_I2cmSrst(UINT32 ulEn)
{
    SC_I2CM_RESET_REQ_U o_sc_i2cm_reset_req;
    SC_I2CM_RESET_DREQ_U o_sc_i2cm_reset_dreq;

    memset(&o_sc_i2cm_reset_req,0,sizeof(SC_I2CM_RESET_REQ_U));
    memset(&o_sc_i2cm_reset_dreq,0,sizeof(SC_I2CM_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_i2cm_reset_req.bits.i2c_m_srst_req = 1;
        M3_SUB_WRITE_REG(M3_SUB_SC_I2CM_RESET_REQ_REG,0,o_sc_i2cm_reset_req.u32);
    }
    else
    {
         o_sc_i2cm_reset_dreq.bits.i2c_m_srst_dreq = 1;
         M3_SUB_WRITE_REG(M3_SUB_SC_I2CM_RESET_DREQ_REG,0,o_sc_i2cm_reset_dreq.u32);
    }

    return OS_SUCCESS;
}

/*****************************************************************************
 ?? ?? ??  : HRD_M3_I2cSrstByNum
 ????????  : I2cm??λ???⸴λ
 ????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
 ????????  : ??
 ?? ?? ֵ  :
 ???ú???  :
 ????????  :

 ?޸???ʷ      :
  1.??    ??   : 2013??10??22??
    ??    ??   : z00176027
    ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_M3_I2cSrstByNum(UINT32 ulNum, UINT32 ulEn)
{
    SC_I2C_RESET_REQ_U o_sc_i2c_reset_req;
    SC_I2C_RESET_DREQ_U o_sc_i2c_reset_dreq;

    if(ulNum > PV660_M3_I2C_NUM)
    {
        return OS_FAIL;
    }

    memset(&o_sc_i2c_reset_req,0,sizeof(SC_I2C_RESET_REQ_U));
    memset(&o_sc_i2c_reset_dreq,0,sizeof(SC_I2C_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_i2c_reset_req.u32 |= (1 << ulNum);
        M3_SUB_WRITE_REG(M3_SUB_SC_I2C_RESET_REQ_REG,0,o_sc_i2c_reset_req.u32);
    }
    else
    {
         o_sc_i2c_reset_dreq.u32 |= (1 << ulNum);
         M3_SUB_WRITE_REG(M3_SUB_SC_I2C_RESET_DREQ_REG,0,o_sc_i2c_reset_dreq.u32);
    }

    return OS_SUCCESS;
}


/*****************************************************************************
 ?? ?? ??  : HRD_M3_GpioSrst
 ????????  : M3 GPIO??λ???⸴λ
 ????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
 ????????  : ??
 ?? ?? ֵ  :
 ???ú???  :
 ????????  :

 ?޸???ʷ      :
  1.??    ??   : 2013??10??24??
    ??    ??   : z00176027
    ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_M3_GpioSrstByPort(UINT32 ulPort,UINT32 ulEn)
{
    SC_GPIO_RESET_REQ_U o_sc_gpio_reset_req;
    SC_GPIO_RESET_DREQ_U o_sc_gpio_reset_dreq;

    if(ulPort >= PV660_M3_IO_NUM)
    {
        return OS_FAIL;
    }

    memset(&o_sc_gpio_reset_req,0,sizeof(SC_GPIO_RESET_REQ_U));
    memset(&o_sc_gpio_reset_dreq,0,sizeof(SC_GPIO_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_gpio_reset_req.u32 |= (1 << ulPort);
        M3_SUB_WRITE_REG(M3_SUB_SC_GPIO_RESET_REQ_REG,0,o_sc_gpio_reset_req.u32);
    }
    else
    {
         o_sc_gpio_reset_dreq.u32 |= (1 << ulPort);
         M3_SUB_WRITE_REG(M3_SUB_SC_GPIO_RESET_DREQ_REG,0,o_sc_gpio_reset_dreq.u32);
    }

    return OS_SUCCESS;
}

/*****************************************************************************
?? ?? ??  : HRD_M3_CpuSrst
????????  : M3 CPU??λ???⸴λ
????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
????????  : ??
?? ?? ֵ  :
???ú???  :
????????  :

?޸???ʷ      :
 1.??    ??   : 2013??10??22??
   ??    ??   : z00176027
   ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_M3_CpuSrst(UINT32 ulEn)
{
    SC_CPU_RESET_REQ_U o_sc_cpu_reset_req;
    SC_CPU_RESET_DREQ_U o_sc_cpu_reset_dreq;

    memset(&o_sc_cpu_reset_req,0,sizeof(SC_CPU_RESET_REQ_U));
    memset(&o_sc_cpu_reset_dreq,0,sizeof(SC_CPU_RESET_DREQ_U));

    if(0 == ulEn)
    {
         o_sc_cpu_reset_req.bits.cpu_srst_req = 1;
         M3_SUB_WRITE_REG(M3_SUB_SC_CPU_RESET_REQ_REG,0,o_sc_cpu_reset_req.u32);
    }
    else
    {
          o_sc_cpu_reset_dreq.bits.cpu_srst_dreq = 1;
          M3_SUB_WRITE_REG(M3_SUB_SC_CPU_RESET_DREQ_REG,0,o_sc_cpu_reset_dreq.u32);
    }

    return OS_SUCCESS;
}


/*****************************************************************************
 ?? ?? ??  : HRD_M3_UsbSrst
 ????????  : M3 USB??λ???⸴λ
 ????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
 ????????  : ??
 ?? ?? ֵ  :
 ???ú???  :
 ????????  :

 ?޸???ʷ      :
  1.??    ??   : 2013??10??24??
    ??    ??   : z00176027
    ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_M3_UsbSrstByPort(UINT32 ulPort,UINT32 ulEn)
{
    SC_USB_RESET_REQ_U o_sc_usb_reset_req;
    SC_USB_RESET_DREQ_U o_sc_usb_reset_dreq;

    if(ulPort >= PV660_M3_USB_NUM)
    {
        return OS_FAIL;
    }

    memset(&o_sc_usb_reset_req,0,sizeof(SC_USB_RESET_REQ_U));
    memset(&o_sc_usb_reset_dreq,0,sizeof(SC_USB_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_usb_reset_req.u32 |= (1 << ulPort);
        M3_SUB_WRITE_REG(M3_SUB_SC_GPIO_RESET_REQ_REG,0,o_sc_usb_reset_req.u32);
    }
    else
    {
         o_sc_usb_reset_dreq.u32 |= (1 << ulPort);
         M3_SUB_WRITE_REG(M3_SUB_SC_GPIO_RESET_DREQ_REG,0,o_sc_usb_reset_dreq.u32);
    }

    return OS_SUCCESS;
}



/*****************************************************************************
 ?? ?? ??  : HRD_M3_SpiSrst
 ????????  : M3 SPI??λ???⸴λ
 ????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
 ????????  : ??
 ?? ?? ֵ  :
 ???ú???  :
 ????????  :

 ?޸???ʷ      :
  1.??    ??   : 2013??10??22??
    ??    ??   : z00176027
    ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_M3_SpiSrst(UINT32 ulEn)
{
    SC_SPI_RESET_REQ_U o_sc_spi_reset_req;
    SC_SPI_RESET_DREQ_U o_sc_spi_reset_dreq;

    memset(&o_sc_spi_reset_req,0,sizeof(SC_SPI_RESET_REQ_U));
    memset(&o_sc_spi_reset_dreq,0,sizeof(SC_SPI_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_spi_reset_req.bits.spi_srst_req = 1;
        M3_SUB_WRITE_REG(M3_SUB_SC_SPI_RESET_REQ_REG,0,o_sc_spi_reset_req.u32);
    }
    else
    {
         o_sc_spi_reset_dreq.bits.spi_srst_dreq = 1;
         M3_SUB_WRITE_REG(M3_SUB_SC_SPI_RESET_DREQ_REG,0,o_sc_spi_reset_dreq.u32);
    }

    return OS_SUCCESS;
}


/*****************************************************************************
 ?? ?? ??  : HRD_M3_SecSrst
 ????????  : M3 SEC??λ???⸴λ
 ????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
 ????????  : ??
 ?? ?? ֵ  :
 ???ú???  :
 ????????  :

 ?޸???ʷ      :
  1.??    ??   : 2013??10??22??
    ??    ??   : z00176027
    ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_M3_SecSrst(UINT32 ulEn)
{
    SC_SEC_RESET_REQ_U o_sc_sec_reset_req;
    SC_SEC_RESET_DREQ_U o_sc_sec_reset_dreq;

    memset(&o_sc_sec_reset_req,0,sizeof(SC_SEC_RESET_REQ_U));
    memset(&o_sc_sec_reset_dreq,0,sizeof(SC_SEC_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_sec_reset_req.bits.sec_srst_req = 1;
        M3_SUB_WRITE_REG(M3_SUB_SC_SEC_RESET_REQ_REG,0,o_sc_sec_reset_req.u32);
    }
    else
    {
         o_sc_sec_reset_dreq.bits.sec_srst_dreq = 1;
         M3_SUB_WRITE_REG(M3_SUB_SC_SEC_RESET_DREQ_REG,0,o_sc_sec_reset_dreq.u32);
    }

    return OS_SUCCESS;
}



/*****************************************************************************
 ?? ?? ??  : HRD_M3_SecBuildSrst
 ????????  : M3 SecBuild??λ???⸴λ
 ????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
 ????????  : ??
 ?? ?? ֵ  :
 ???ú???  :
 ????????  :

 ?޸???ʷ      :
  1.??    ??   : 2013??10??22??
    ??    ??   : z00176027
    ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_M3_SecBuildSrst(UINT32 ulEn)
{
    SC_SEC_BUILD_RESET_REQ_U o_sc_sec_build_reset_req;
    SC_SEC_BUILD_RESET_DREQ_U o_sc_sec_build_reset_dreq;

    memset(&o_sc_sec_build_reset_req,0,sizeof(SC_SEC_BUILD_RESET_REQ_U));
    memset(&o_sc_sec_build_reset_dreq,0,sizeof(SC_SEC_BUILD_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_sec_build_reset_req.u32 |= 0x1FFFFF;
        M3_SUB_WRITE_REG(M3_SUB_SC_SEC_RESET_REQ_REG,0,o_sc_sec_build_reset_req.u32);
    }
    else
    {
         o_sc_sec_build_reset_dreq.u32 |= 0x1FFFFF;
         M3_SUB_WRITE_REG(M3_SUB_SC_SEC_RESET_DREQ_REG,0,o_sc_sec_build_reset_dreq.u32);
    }

    return OS_SUCCESS;
}


#ifdef HRD_OS_SRE
extern UINT32 SRE_UartWriteData(UINT8 ucByte);

void HRD_M3_SecureInit(void)
{
    UINT64 m3_subctrl_regbase =  M3_SUB_BASE;    //B109
    UINT32 ulCpuId = HRD_GetCpuId();

    if ( 0 != ulCpuId )
    {
        return;
    }

    SRE_UartWriteData('R');
    SRE_UartWriteData('e');
    SRE_UartWriteData('s');
    SRE_UartWriteData('e');
    SRE_UartWriteData('t');
    SRE_UartWriteData('l');
    SRE_UartWriteData('p');
    SRE_UartWriteData('m');
    SRE_UartWriteData('e');
    SRE_UartWriteData('!');

    /* ??λM3??ʹ?????븴λ״̬ */
    HRD_WRITE_WORD(0xffffffff,(void *)(m3_subctrl_regbase+0xa50));


    /* ????M3 remap??SRAM?ĵ?ַ */
    HRD_WRITE_WORD(0xa4,(void *)(m3_subctrl_regbase+0x2198));   /* A4??SPI FLASH??ַ??EMU??M3??ʹ??SPI FLASH?����????? */


    /* ????M3 remap??SPI FLASH?ĵ?ַ */
    HRD_WRITE_WORD(0xa2,(void *)(m3_subctrl_regbase+0x2194));   /* A2??SRAM??ַ??EMU??M3??SPI FLASH?����?ʵ??????remap????SRAM */


    /* ????M3 remap???ƣ?????Ϊ?ǰ?ȫ?����???SPI FLASH???? */
    /*HRD_WRITE_WORD(0x0,(void *)(m3_subctrl_regbase+0x2098));  */


    /* ????M3 remap??BOOTROM?ĵ?ַ */
    /*HRD_WRITE_WORD(0xd1,(void *)(m3_subctrl_regbase+0x209c));  */


    /* ????M3 ???븴λ????ִ?м??????????? */
    /*HRD_WRITE_WORD(0x1,(void *)(m3_subctrl_regbase+0x20b4));  */


    /* ?⸴λM3??ʹ?????????? */
    HRD_WRITE_WORD(0xffffffff,(void *)(m3_subctrl_regbase+0xa54));

    return;
}
#endif

#ifdef HRD_OS_LINUX
/*****************************************************************************
 ?? ?? ??  : HRD_SubM3Init
 ????????  : SUB M3 CRG linux??ʼ??
 ????????  : void
 ????????  : ??
 ?? ?? ֵ  :
 ???ú???  :
 ????????  :

 ?޸???ʷ      :
  1.??    ??   : 2013??11??21??
    ??    ??   : z00176027
    ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_SubM3Init(void)
{
    sub_m3_pa_addr = M3_SUB_BASE;

    /* SUB ALG????io?ڴ? */
    if (!request_mem_region(sub_m3_pa_addr, M3_SUB_BASE_SIZE, "SUB M3 Reg"))
    {

        printk("SUB M3 region busy\n");

        return OS_ERROR;
    }

    sub_m3_base_addr = (UINT64)ioremap(sub_m3_pa_addr, M3_SUB_BASE_SIZE);
    if (!sub_m3_base_addr)
    {
        release_mem_region(sub_m3_pa_addr, M3_SUB_BASE_SIZE);
        printk("could not ioremap SUB M3 registers\n");

        return OS_ERROR;
    }

    return OS_SUCCESS;
}


/*****************************************************************************
 ?? ?? ??  : HRD_SubM3Exit
 ????????  : SUB M3 CRG ?˳?
 ????????  : void
 ????????  : ??
 ?? ?? ֵ  :
 ???ú???  :
 ????????  :

 ?޸???ʷ      :
  1.??    ??   : 2013??11??21??
    ??    ??   : z00176027
    ?޸?????   : ?????ɺ???

*****************************************************************************/
void HRD_SubM3Exit(void)
{
    /* ?ͷ?SubM3??Դ */
    if (sub_m3_base_addr > 0)
    {
        release_mem_region(sub_m3_pa_addr, M3_SUB_BASE_SIZE);
        iounmap((void *)sub_m3_base_addr);
    }

}

EXPORT_SYMBOL(HRD_M3_WdgSrst);
EXPORT_SYMBOL(HRD_M3_TimerSrst);
EXPORT_SYMBOL(HRD_M3_UartSrstByPort);
EXPORT_SYMBOL(HRD_M3_IpcmSrst);
EXPORT_SYMBOL(HRD_M3_SramSrst);
EXPORT_SYMBOL(HRD_M3_SfcSrstByPort);
EXPORT_SYMBOL(HRD_M3_I2cmSrst);
EXPORT_SYMBOL(HRD_M3_I2cSrstByNum);
EXPORT_SYMBOL(HRD_M3_GpioSrstByPort);
EXPORT_SYMBOL(HRD_M3_CpuSrst);
EXPORT_SYMBOL(HRD_M3_UsbSrstByPort);
EXPORT_SYMBOL(HRD_M3_SpiSrst);
EXPORT_SYMBOL(HRD_M3_SecSrst);
EXPORT_SYMBOL(HRD_M3_SecBuildSrst);


#endif


