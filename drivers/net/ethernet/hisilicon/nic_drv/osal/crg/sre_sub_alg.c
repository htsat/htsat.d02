/******************************************************************************

                  ??Ȩ???? (C), 2011-2021, ??Ϊ???????޹?˾

 ******************************************************************************
  ?? ?? ??   : sre_alg.c
  ?? ?? ??   : ????
  ??    ??   : z00176027
  ????????   : 2013??10??17??
  ?????޸?   :
  ????????   : P660 ALG ??λ??ȥ??λ
  ?????б?   :
  ?޸???ʷ   :
  1.??    ??   : 2013??10??17??
    ??    ??   : z00176027
    ?޸?????   : ?????ļ?

******************************************************************************/

#include "sre_sub_alg.h"

/*----------------------------------------------*
 * ?ⲿ??��˵??                                 *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ?ⲿ????ԭ??˵??                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ?ڲ?????ԭ??˵??                             *
 *----------------------------------------------*/
UINT32 HRD_Alg_SecBulidSrst(UINT32 ulEn);

/*----------------------------------------------*
 * ȫ?ֱ?��                                     *
 *----------------------------------------------*/
UINT64 sub_alg_base_addr = 0;
UINT64 sub_alg_pa_addr = 0;
/*----------------------------------------------*
 * ģ?鼶??��                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ??��????                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ?궨??                                       *
 *----------------------------------------------*/

/* ????ALG SUB?ļĴ?????д?ӿ? */
#ifdef HRD_OS_LINUX
 inline UINT32 ALG_SUB_READ_REG(UINT32 pRegBase, UINT32 ulRegIndex)
 {
     volatile UINT32 temp;
 
     temp = ioread32((void __iomem *)(sub_alg_base_addr + (pRegBase - ALG_SUB_BASE) + (ulRegIndex << 2)));
 
     return temp;
 }
 
#define ALG_SUB_WRITE_REG(pRegBase, ulRegIndex, ulValue) \
    (iowrite32(ulValue, (void __iomem *)(sub_alg_base_addr + (pRegBase - ALG_SUB_BASE) + (ulRegIndex << 2))))
 
#else
#define ALG_SUB_READ_REG(pRegBase, ulRegIndex) \
    OS_READ_REG(pRegBase, ulRegIndex)

 #define ALG_SUB_WRITE_REG(pRegBase, ulRegIndex, ulValue) \
    OS_WRITE_REG(pRegBase, ulRegIndex, ulValue)

#endif


 



/*****************************************************************************
 ?? ?? ??  : HRD_Alg_ItsSrst
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
UINT32 HRD_Alg_ItsSrst(UINT32 ulEn)
{
    SC_ITS_RESET_REQ_U o_sc_its_reset_req;
    SC_ITS_RESET_DREQ_U o_sc_its_reset_dreq;

    memset(&o_sc_its_reset_req,0,sizeof(SC_ITS_RESET_REQ_U));
    memset(&o_sc_its_reset_dreq,0,sizeof(SC_ITS_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_its_reset_req.bits.its_srst_req = 1;
        ALG_SUB_WRITE_REG(ALG_SUB_SC_ITS_RESET_REQ_REG,0,o_sc_its_reset_req.u32);
    }    
    else
    {        
         o_sc_its_reset_dreq.bits.its_srst_dreq = 1;
         ALG_SUB_WRITE_REG(ALG_SUB_SC_ITS_RESET_DREQ_REG,0,o_sc_its_reset_dreq.u32);
    }           

    return OS_SUCCESS;
}

/*****************************************************************************
?? ?? ??  : HRD_Alg_HilinkSrstByLane
????????  : Hilink pcs??λ???⸴λ
????????  : UINT32 ulTimer  Timer
            UINT32 ulEn  0:??λ >=1:ȥ??λ
????????  : ??
?? ?? ֵ  : 
???ú???  : 
????????  : 

?޸???ʷ      :
 1.??    ??   : 2013??10??22??
   ??    ??   : z00176027
   ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_Alg_HilinkSrstByLane(UINT32 ulHllc, UINT32 ulLane, UINT32 ulEn)
{
    SC_HILINK_PCS_RESET_REQ_U o_sc_hilink_pcs_reset_req;
    SC_HILINK_PCS_RESET_DREQ_U o_sc_hilink_pcs_reset_dreq;
   

    memset(&o_sc_hilink_pcs_reset_req,0,sizeof(SC_HILINK_PCS_RESET_REQ_U));
    memset(&o_sc_hilink_pcs_reset_dreq,0,sizeof(SC_HILINK_PCS_RESET_DREQ_U));

    if(ulHllc >= PV660_HLLC_NUM)
    {
        return OS_FAIL;
    }

    if(ulLane >= PV660_PCS_LANE_NUM)
    {
        return OS_FAIL;
    }


    if(0 == ulEn)
    {
        o_sc_hilink_pcs_reset_req.u32 |= ((ulHllc << PV660_PCS_LANE_NUM) | (1 << ulLane));
        ALG_SUB_WRITE_REG(ALG_SUB_SC_HILINK_PCS_RESET_REQ_REG,0,o_sc_hilink_pcs_reset_req.u32);
    }
    else
    {   
        o_sc_hilink_pcs_reset_dreq.u32 |= ((ulHllc << PV660_PCS_LANE_NUM) | (1 << ulLane));
        ALG_SUB_WRITE_REG(ALG_SUB_SC_HILINK_PCS_RESET_REQ_REG,0,o_sc_hilink_pcs_reset_dreq.u32);
    }           

    return OS_SUCCESS;
}


/*****************************************************************************
?? ?? ??  : HRD_Alg_HllcRxTxSrstByChannel
????????  : Hllc ???ͽ??ո?λ???⸴λ
????????  : UINT32 ulTimer  Timer
            UINT32 ulEn  0:??λ >=1:ȥ??λ
????????  : ??
?? ?? ֵ  : 
???ú???  : 
????????  : 

?޸???ʷ      :
 1.??    ??   : 2013??10??22??
   ??    ??   : z00176027
   ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_Alg_HllcRxTxSrstByChannel(UINT32 ulHllc, UINT32 ulChannel, UINT32 ulEn)
{
    SC_HLLC_RXTX_RESET_REQ_U o_sc_hllc_rxtx_reset_req;
    SC_HLLC_RXTX_RESET_DREQ_U o_sc_hllc_rxtx_reset_dreq;
   
    if(ulChannel >= PV660_HLLC_CHANNEL_NUM)
    {
        return OS_FAIL;
    }
   
    memset(&o_sc_hllc_rxtx_reset_req,0,sizeof(SC_HLLC_RXTX_RESET_REQ_U));
    memset(&o_sc_hllc_rxtx_reset_dreq,0,sizeof(SC_HLLC_RXTX_RESET_DREQ_U));
    
    if(0 == ulEn)
    {
        o_sc_hllc_rxtx_reset_req.u32 |= (1 << ulChannel); /* rx */
        ALG_SUB_WRITE_REG(ALG_SUB_SC_HLLC_RXTX_RESET_REQ_REG,0,o_sc_hllc_rxtx_reset_req.u32);
    }    
    else
    {   
        o_sc_hllc_rxtx_reset_dreq.u32 |= (1 << ulChannel); /* rx */
        ALG_SUB_WRITE_REG(ALG_SUB_SC_HLLC_RXTX_RESET_DREQ_REG,0,o_sc_hllc_rxtx_reset_dreq.u32);
    }
    
    return OS_SUCCESS;
}

/*****************************************************************************
 ?? ?? ??  : HRD_Alg_PaSrst
 ????????  : PA??λ???⸴λ
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
UINT32 HRD_Alg_PaSrst(UINT32 ulEn)
{
    SC_PA_RESET_REQ_U o_sc_pa_reset_req;
    SC_PA_RESET_DREQ_U o_sc_pa_reset_dreq;

    memset(&o_sc_pa_reset_req,0,sizeof(SC_PA_RESET_REQ_U));
    memset(&o_sc_pa_reset_dreq,0,sizeof(SC_PA_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_pa_reset_req.bits.pa_srst_req = 1;
        ALG_SUB_WRITE_REG(ALG_SUB_SC_PA_RESET_REQ_REG,0,o_sc_pa_reset_req.u32);
    }    
    else
    {        
         o_sc_pa_reset_dreq.bits.pa_srst_dreq = 1;
         ALG_SUB_WRITE_REG(ALG_SUB_SC_PA_RESET_DREQ_REG,0,o_sc_pa_reset_dreq.u32);
    }           

    return OS_SUCCESS;
}

/*****************************************************************************
?? ?? ??  : HRD_Alg_HllcSrst
????????  : hllc??λ???⸴λ
????????  : UINT32 ulTimer  Timer
            UINT32 ulEn  0:??λ >=1:ȥ??λ
????????  : ??
?? ?? ֵ  : 
???ú???  : 
????????  : 

?޸???ʷ      :
 1.??    ??   : 2013??10??22??
   ??    ??   : z00176027
   ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_Alg_HllcSrstByHllc(UINT32 ulHllc,  UINT32 ulEn)
{
    SC_HLLC_RESET_REQ_U o_sc_hllc_reset_req;
    SC_HLLC_RESET_DREQ_U o_sc_hllc_reset_dreq;
    UINT32 ulRet = OS_SUCCESS;
    UINT32 ulChannel;
   

    memset(&o_sc_hllc_reset_req,0,sizeof(SC_HLLC_RESET_REQ_U));
    memset(&o_sc_hllc_reset_dreq,0,sizeof(SC_HLLC_RESET_DREQ_U));

    if(ulHllc > PV660_HLLC_NUM)
    {
        return OS_FAIL;
    }

    if(0 == ulEn)
    {
        o_sc_hllc_reset_req.u32 |= (1 << ulHllc);
        ALG_SUB_WRITE_REG(ALG_SUB_SC_HLLC_RESET_REQ_REG,0,o_sc_hllc_reset_req.u32);
    }    
    else
    {   
        o_sc_hllc_reset_dreq.u32 |= (1 << ulHllc);
        ALG_SUB_WRITE_REG(ALG_SUB_SC_HLLC_RESET_REQ_REG,0,o_sc_hllc_reset_dreq.u32);
    }

    for(ulChannel = 0; ulChannel < PV660_HLLC_CHANNEL_NUM; ulChannel++)
    {
        ulRet = HRD_Alg_HllcRxTxSrstByChannel(ulHllc,ulChannel,ulEn);
        if(ulRet != OS_SUCCESS)
        {
            return ulRet;
        }    
        
    }

    return OS_SUCCESS;
}

/*****************************************************************************
 ?? ?? ??  : HRD_Alg_DjtagSrst
 ????????  : Djtag??λ???⸴λ
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
UINT32 HRD_Alg_DjtagSrst(UINT32 ulEn)
{
    SC_DJTAG_RESET_REQ_U o_sc_djtag_reset_req;
    SC_DJTAG_RESET_DREQ_U o_sc_djtag_reset_dreq;

    memset(&o_sc_djtag_reset_req,0,sizeof(SC_DJTAG_RESET_REQ_U));
    memset(&o_sc_djtag_reset_dreq,0,sizeof(SC_DJTAG_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_djtag_reset_req.bits.djtag_srst_req = 1;
        ALG_SUB_WRITE_REG(ALG_SUB_SC_DJTAG_RESET_REQ_REG,0,o_sc_djtag_reset_req.u32);
    }    
    else
    {        
         o_sc_djtag_reset_dreq.bits.djtag_srst_dreq = 1;
         ALG_SUB_WRITE_REG(ALG_SUB_SC_DJTAG_RESET_DREQ_REG,0,o_sc_djtag_reset_dreq.u32);
    }           

    return OS_SUCCESS;
}


/*****************************************************************************
 ?? ?? ??  : HRD_Alg_RsaSrst
 ????????  : RSA??λ???⸴λ
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
UINT32 HRD_Alg_RsaSrst(UINT32 ulEn)
{
    SC_RSA_RESET_REQ_U o_sc_rsa_reset_req;
    SC_RSA_RESET_DREQ_U o_sc_rsa_reset_dreq;

    memset(&o_sc_rsa_reset_req,0,sizeof(SC_RSA_RESET_REQ_U));
    memset(&o_sc_rsa_reset_dreq,0,sizeof(SC_RSA_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_rsa_reset_req.bits.rsa_srst_req = 1;
        ALG_SUB_WRITE_REG(ALG_SUB_SC_RSA_RESET_REQ_REG,0,o_sc_rsa_reset_req.u32);
    }    
    else
    {        
         o_sc_rsa_reset_dreq.bits.rsa_srst_dreq = 1;
         ALG_SUB_WRITE_REG(ALG_SUB_SC_RSA_RESET_DREQ_REG,0,o_sc_rsa_reset_dreq.u32);
    }           

    return OS_SUCCESS;
}

/*****************************************************************************
 ?? ?? ??  : HRD_Alg_RdeSrst
 ????????  : Rde??λ???⸴λ
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
UINT32 HRD_Alg_RdeSrst(UINT32 ulEn)
{
    SC_RDE_RESET_REQ_U o_sc_rde_reset_req;
    SC_RDE_RESET_DREQ_U o_sc_rde_reset_dreq;

    memset(&o_sc_rde_reset_req,0,sizeof(SC_RDE_RESET_REQ_U));
    memset(&o_sc_rde_reset_dreq,0,sizeof(SC_RDE_RESET_DREQ_U));

    if(0 == ulEn)
    {
        o_sc_rde_reset_req.bits.rde_srst_req = 1;
        ALG_SUB_WRITE_REG(ALG_SUB_SC_RDE_RESET_REQ_REG,0,o_sc_rde_reset_req.u32);
    }    
    else
    {        
         o_sc_rde_reset_dreq.bits.rde_srst_dreq = 1;
         ALG_SUB_WRITE_REG(ALG_SUB_SC_RDE_RESET_DREQ_REG,0,o_sc_rde_reset_dreq.u32);
    }           

    return OS_SUCCESS;
}



/*****************************************************************************
 ?? ?? ??  : HRD_Alg_SecSrst
 ????????  : Sec??λ???⸴λ
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
UINT32 HRD_Alg_SecSrst(UINT32 ulEn)
{
    SC_SEC_RESET_REQ_U o_sc_sec_reset_req;
    SC_SEC_RESET_DREQ_U o_sc_sec_reset_dreq;

    memset(&o_sc_sec_reset_req,0,sizeof(SC_SEC_RESET_REQ_U));
    memset(&o_sc_sec_reset_dreq,0,sizeof(SC_SEC_RESET_DREQ_U));

    if(0 == ulEn)
    {
        HRD_Alg_SecBulidSrst(ulEn);        
        o_sc_sec_reset_req.bits.sec_srst_req = 1;
        ALG_SUB_WRITE_REG(ALG_SUB_SC_SEC_RESET_REQ_REG,0,o_sc_sec_reset_req.u32);
    }    
    else
    {        
         o_sc_sec_reset_dreq.bits.sec_srst_dreq = 1;
         ALG_SUB_WRITE_REG(ALG_SUB_SC_SEC_RESET_DREQ_REG,0,o_sc_sec_reset_dreq.u32);         
         HRD_Alg_SecBulidSrst(ulEn);
    }              

    return OS_SUCCESS;
}

/*****************************************************************************
 ?? ?? ??  : HRD_Alg_RngSrst
 ????????  : Rng??λ???⸴λ
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
UINT32 HRD_Alg_RngSrst(UINT32 ulEn)
{
    SC_RNG_RESET_REQ_U o_sc_rng_reset_req;
    SC_RNG_RESET_DREQ_U o_sc_rng_reset_dreq;

    memset(&o_sc_rng_reset_req,0,sizeof(SC_RNG_RESET_REQ_U));
    memset(&o_sc_rng_reset_dreq,0,sizeof(SC_RNG_RESET_DREQ_U));

    if(0 == ulEn)
    {
        
        o_sc_rng_reset_req.bits.rng_srst_req = 1;
        ALG_SUB_WRITE_REG(ALG_SUB_SC_RNG_RESET_REQ_REG,0,o_sc_rng_reset_req.u32);
    }    
    else
    {        
         o_sc_rng_reset_dreq.bits.rng_srst_dreq = 1;
         ALG_SUB_WRITE_REG(ALG_SUB_SC_RNG_RESET_DREQ_REG,0,o_sc_rng_reset_dreq.u32);

         
    }           

    return OS_SUCCESS;
}


/*****************************************************************************
 ?? ?? ??  : HRD_Alg_SecBulidSrst
 ????????  : Sec Build??λ???⸴λ
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
UINT32 HRD_Alg_SecBulidSrst(UINT32 ulEn)
{
    SC_SEC_BUILD_RESET_REQ_U o_sc_sec_build_reset_req;
    SC_SEC_BUILD_RESET_DREQ_U o_sc_sec_build_reset_dreq;   

    memset(&o_sc_sec_build_reset_req,0,sizeof(SC_SEC_BUILD_RESET_REQ_U));
    memset(&o_sc_sec_build_reset_dreq,0,sizeof(SC_SEC_BUILD_RESET_DREQ_U));   

    if(0 == ulEn)
    {
        o_sc_sec_build_reset_req.u32 |= 0x1fffff;
        ALG_SUB_WRITE_REG(ALG_SUB_SC_SEC_BUILD_RESET_REQ_REG,0,o_sc_sec_build_reset_req.u32);
    }    
    else
    {   
        o_sc_sec_build_reset_dreq.u32 |= 0x1fffff;
        ALG_SUB_WRITE_REG(ALG_SUB_SC_SEC_BUILD_RESET_DREQ_REG,0,o_sc_sec_build_reset_dreq.u32);
    }           

    return OS_SUCCESS;
}

/*****************************************************************************
 ?? ?? ??  : HRD_Alg_PcsLocalSrst
 ????????  : Pcs Local??λ???⸴λ
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
UINT32 HRD_Alg_PcsLocalSrst(UINT32 ulEn)
{
    SC_PCS_LOCAL_RESET_REQ_U o_sc_pcs_reset_req;
    SC_PCS_LOCAL_RESET_DREQ_U o_sc_pcs_reset_dreq;   

    memset(&o_sc_pcs_reset_req,0,sizeof(SC_PCS_LOCAL_RESET_REQ_U));
    memset(&o_sc_pcs_reset_dreq,0,sizeof(SC_PCS_LOCAL_RESET_DREQ_U));   

    if(0 == ulEn)
    {
        o_sc_pcs_reset_req.bits.pcs_local_srst_req = 1;
        ALG_SUB_WRITE_REG(ALG_SUB_SC_PCS_LOCAL_RESET_REQ_REG,0,o_sc_pcs_reset_req.u32);
    }    
    else
    {   
        o_sc_pcs_reset_dreq.bits.pcs_local_srst_dreq |= 1;
        ALG_SUB_WRITE_REG(ALG_SUB_SC_PCS_LOCAL_RESET_DREQ_REG,0,o_sc_pcs_reset_dreq.u32);
    }           

    return OS_SUCCESS;
}


#ifdef HRD_OS_LINUX
/*****************************************************************************
 ?? ?? ??  : HRD_SubAlgInit
 ????????  : SUB ALG CRG linux??ʼ??
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
UINT32 HRD_SubAlgInit(void)
{
    sub_alg_pa_addr = ALG_SUB_BASE;
    
    /* SUB ALG????io?ڴ? */
    if (!request_mem_region(sub_alg_pa_addr, ALG_SUB_BASE_SIZE, "SUB ALG Reg"))
    {
        
        printk("SUB ALG region busy\n");       

        return OS_ERROR;
    }

    sub_alg_base_addr = (UINT64)ioremap(sub_alg_pa_addr, ALG_SUB_BASE_SIZE);
    if (!sub_alg_base_addr)
    {
        release_mem_region(sub_alg_pa_addr, ALG_SUB_BASE_SIZE);        
        printk("could not ioremap SUB ALG registers\n");        

        return OS_ERROR;
    }
    
    return OS_SUCCESS;
}


/*****************************************************************************
 ?? ?? ??  : HRD_SubAlgInit
 ????????  : SUB ALG CRG ?˳?
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
void HRD_SubAlgExit(void)
{
    /* ?ͷ?ALG??Դ */
    if (sub_alg_base_addr > 0)
    {
        release_mem_region(sub_alg_pa_addr, ALG_SUB_BASE_SIZE);
        iounmap((void *)sub_alg_base_addr);
    }

}


EXPORT_SYMBOL(HRD_Alg_HilinkSrstByLane);
EXPORT_SYMBOL(HRD_Alg_HllcSrstByHllc);
EXPORT_SYMBOL(HRD_Alg_ItsSrst);
EXPORT_SYMBOL(HRD_Alg_SecSrst);
EXPORT_SYMBOL(HRD_Alg_RdeSrst);
EXPORT_SYMBOL(HRD_Alg_PaSrst);
EXPORT_SYMBOL(HRD_Alg_DjtagSrst);
EXPORT_SYMBOL(HRD_Alg_RsaSrst);
EXPORT_SYMBOL(HRD_Alg_RngSrst);
EXPORT_SYMBOL(HRD_Alg_SecBulidSrst);
EXPORT_SYMBOL(HRD_Alg_PcsLocalSrst);


#endif


