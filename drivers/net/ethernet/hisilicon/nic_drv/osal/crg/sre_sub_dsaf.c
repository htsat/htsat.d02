/******************************************************************************

                  ??Ȩ???? (C), 2011-2021, ??Ϊ???????޹?˾

 ******************************************************************************
  ?? ?? ??   : sre_crs21.c
  ?? ?? ??   : ????
  ??    ??   : z00176027
  ????????   : 2013??10??17??
  ?????޸?   :
  ????????   : P660 ??ϵͳ21 ??λ??ȥ??λ
  ?????б?   :
  ?޸???ʷ   :
  1.??    ??   : 2013??10??17??
    ??    ??   : z00176027
    ?޸?????   : ?????ļ?

******************************************************************************/

#include "sre_sub_dsaf.h"


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
UINT64 sub_dsaf_base_addr = 0;
UINT64 sub_dsaf_pa_addr = 0;

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
inline UINT32 DSAF_SUB_READ_REG(UINT32 pRegBase, UINT32 ulRegIndex)
{
    volatile UINT32 temp;

    temp = ioread32((void __iomem *)(sub_dsaf_base_addr + (pRegBase - DSAF_SUB_BASE) + (ulRegIndex << 2)));

    return temp;
}

#define DSAF_SUB_WRITE_REG(pRegBase, ulRegIndex, ulValue) \
   (iowrite32(ulValue, (void __iomem *)(sub_dsaf_base_addr + (pRegBase - DSAF_SUB_BASE) + (ulRegIndex << 2))))

#else
#define DSAF_SUB_READ_REG(pRegBase, ulRegIndex) \
        OS_READ_REG(pRegBase, ulRegIndex)

#define DSAF_SUB_WRITE_REG(pRegBase, ulRegIndex, ulValue) \
        OS_WRITE_REG(pRegBase, ulRegIndex, ulValue)
#endif

/*
#define HRD_DSAF0_ADDRESS DSAF_SUB_BASE
#define HRD_DSAF1_ADDRESS M3_SUB_BASE
#define HRD_DSAF2_ADDRESS PCIE_SUB_BASE
#define HRD_DSAF3_ADDRESS ALG_SUB_BASE
*/
#define HRD_DSAF0_ADDRESS 0xC0000000
#define HRD_DSAF1_ADDRESS 0xA0000000
#define HRD_DSAF2_ADDRESS 0xB0000000
#define HRD_DSAF3_ADDRESS 0xD0000000

UINT32 HRD_Dsaf_GetAddressByIndex(UINT32 ulDsafIndex)
{
    UINT32 ulAddr = 0;
    switch ( ulDsafIndex )
    {
        case 0 :
            ulAddr = HRD_DSAF0_ADDRESS;
            break;
        case 1 :
            ulAddr = HRD_DSAF1_ADDRESS;
            break;
        case 2 :
            ulAddr = HRD_DSAF2_ADDRESS;
            break;
        case 3 :
            ulAddr = HRD_DSAF3_ADDRESS;
            break;
        default:
            ulAddr = HRD_DSAF0_ADDRESS;
    }

    return ulAddr;
}

/*****************************************************************************
?? ?? ??  : HRD_Dsaf_XbarSrst
????????  : Xbar??λ???⸴λ
????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
????????  : ??
?? ?? ֵ  :
???ú???  :
????????  :

?޸???ʷ      :
 1.??    ??   : 2013??10??25??
   ??    ??   : z00176027
   ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_Dsaf_XbarSrst(UINT32 ulDsafIndex,UINT32 ulEn)
{
    SC_XBAR_RESET_REQ_U o_sc_xbar_reset_req;
    SC_XBAR_RESET_DREQ_U o_sc_xbar_reset_dreq;

    UINT32 ulAddr = 0;

    ulAddr = HRD_Dsaf_GetAddressByIndex(ulDsafIndex);

    osal_printf("%d,%s:%x\r\n",__LINE__,__FUNCTION__,ulAddr);
    memset(&o_sc_xbar_reset_req,0,sizeof(SC_XBAR_RESET_REQ_U));
    memset(&o_sc_xbar_reset_dreq,0,sizeof(SC_XBAR_RESET_DREQ_U));

    if(0 == ulEn)
    {
         ulAddr += (DSAF_SUB_SC_XBAR_RESET_REQ_REG - HRD_DSAF0_ADDRESS);
         o_sc_xbar_reset_req.bits.xbar_srst_req = 1;
         DSAF_SUB_WRITE_REG(ulAddr,0,o_sc_xbar_reset_req.u32);
    }
    else
    {
        ulAddr += (DSAF_SUB_SC_XBAR_RESET_DREQ_REG - HRD_DSAF0_ADDRESS);
        o_sc_xbar_reset_dreq.bits.xbar_srst_dreq = 1;
        DSAF_SUB_WRITE_REG(ulAddr,0,o_sc_xbar_reset_dreq.u32);
    }

    return OS_SUCCESS;
}


/*****************************************************************************
?? ?? ??  : HRD_Dsaf_NtSrst
????????  : Nt??λ???⸴λ
????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
????????  : ??
?? ?? ֵ  :
???ú???  :
????????  :

?޸???ʷ      :
 1.??    ??   : 2013??10??25??
   ??    ??   : z00176027
   ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_Dsaf_NtSrst(UINT32 ulDsafIndex,UINT32 ulEn)
{
    SC_NT_RESET_REQ_U o_sc_nt_reset_req;
    SC_NT_RESET_DREQ_U o_sc_nt_reset_dreq;
    UINT32 ulAddr = 0;

    ulAddr = HRD_Dsaf_GetAddressByIndex(ulDsafIndex);

    memset(&o_sc_nt_reset_req,0,sizeof(SC_NT_RESET_REQ_U));
    memset(&o_sc_nt_reset_dreq,0,sizeof(SC_NT_RESET_DREQ_U));

    if(0 == ulEn)
    {
         ulAddr += (DSAF_SUB_SC_NT_RESET_REQ_REG - HRD_DSAF0_ADDRESS);
         o_sc_nt_reset_req.bits.nt_srst_req = 1;
         DSAF_SUB_WRITE_REG(ulAddr,0,o_sc_nt_reset_req.u32);
    }
    else
    {
        ulAddr += (DSAF_SUB_SC_NT_RESET_DREQ_REG - HRD_DSAF0_ADDRESS);
        o_sc_nt_reset_dreq.bits.nt_srst_dreq = 1;
        DSAF_SUB_WRITE_REG(ulAddr,0,o_sc_nt_reset_dreq.u32);
    }

    return OS_SUCCESS;
}


/*****************************************************************************
?? ?? ??  : HRD_Dsaf_XgeSrstByPort
????????  : Xge??λ???⸴λ
????????  : UINT32 ulPort  ulPort   ??ʱû??????port??????д??port??????portȫ??ȥ??λ
            UINT32 ulEn  0:??λ >=1:ȥ??λ
????????  : ??
?? ?? ֵ  :
???ú???  :
????????  :

?޸???ʷ      :
 1.??    ??   : 2013??10??26??
   ??    ??   : z00176027
   ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_Dsaf_XgeSrstByPort(UINT32 ulPort, UINT32 ulEn)
{
    SC_XGE_RESET_REQ_U o_sc_xge_reset_req;
    SC_XGE_RESET_DREQ_U o_sc_xge_reset_dreq;


    memset(&o_sc_xge_reset_req,0,sizeof(SC_XGE_RESET_REQ_U));
    memset(&o_sc_xge_reset_dreq,0,sizeof(SC_XGE_RESET_DREQ_U));

    if(ulPort >= PV660_XGE_NUM)
    {
        return OS_FAIL;
    }


    if(0 == ulEn)
    {
        o_sc_xge_reset_req.bits.xge_cfg_srst_req = 0x1;
        o_sc_xge_reset_req.u32 |= 0x2082082 <<ulPort;
        DSAF_SUB_WRITE_REG(DSAF_SUB_SC_XGE_RESET_REQ_REG,0,o_sc_xge_reset_req.u32);
    }
    else
    {
        o_sc_xge_reset_dreq.bits.xge_cfg_srst_dreq = 0x1;
        o_sc_xge_reset_dreq.u32 |= 0x2082082 <<ulPort;
        DSAF_SUB_WRITE_REG(DSAF_SUB_SC_XGE_RESET_DREQ_REG,0,o_sc_xge_reset_dreq.u32);
    }

    return OS_SUCCESS;
}

/*****************************************************************************
?? ?? ??  : HRD_Dsaf_GeSrst
????????  : ge??λ???⸴λ
????????  : UINT32 ulPort  ulPort ??ʱû??????port??????д??port??????portȫ??ȥ??λ
            UINT32 ulEn  0:??λ >=1:ȥ??λ
????????  : ??
?? ?? ֵ  :
???ú???  :
????????  :

?޸???ʷ      :
 1.??    ??   : 2013??10??26??
   ??    ??   : z00176027
   ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_Dsaf_GeSrstByPort(UINT32 ulPort, UINT32 ulEn)
{
    SC_GE_RESET_REQ0_U o_sc_ge_reset_req0;
    SC_GE_RESET_DREQ0_U o_sc_ge_reset_dreq0;
    SC_GE_RESET_REQ1_U o_sc_ge_reset_req1;
    SC_GE_RESET_DREQ1_U o_sc_ge_reset_dreq1;

    /* for GE6/GE7 needed ppe rest , GE6/GE7 can vld, by lisheng***/
    SC_PPE_RESET_REQ_U o_sc_ppe_reset_req;
    SC_PPE_RESET_DREQ_U o_sc_ppe_reset_dreq;

    if(ulPort >= PV660_GE_NUM)
    {
        return OS_FAIL;
    }

    memset(&o_sc_ge_reset_req0,0,sizeof(SC_GE_RESET_REQ0_U));
    memset(&o_sc_ge_reset_dreq0,0,sizeof(SC_GE_RESET_DREQ0_U));
    memset(&o_sc_ge_reset_req1,0,sizeof(SC_GE_RESET_REQ1_U));
    memset(&o_sc_ge_reset_dreq1,0,sizeof(SC_GE_RESET_DREQ1_U));
    memset(&o_sc_ppe_reset_req,0,sizeof(SC_PPE_RESET_REQ_U));
    memset(&o_sc_ppe_reset_dreq,0,sizeof(SC_PPE_RESET_DREQ_U));

    if(ulPort < 6)
    {
        if(0 == ulEn)
        {
            /* ?ȸ?λfifo */
            o_sc_ge_reset_req1.u32 |= 0x1 <<ulPort;
            DSAF_SUB_WRITE_REG(DSAF_SUB_SC_GE_RESET_REQ1_REG,0,o_sc_ge_reset_req1.u32);

            o_sc_ge_reset_req0.u32 |= 0x1041041 <<ulPort;
            DSAF_SUB_WRITE_REG(DSAF_SUB_SC_GE_RESET_REQ0_REG,0,o_sc_ge_reset_req0.u32);
        }
        else
        {
            /* ?Ƚ⸴λ???? */
            o_sc_ge_reset_dreq0.u32 |= 0x1041041 <<ulPort;
            DSAF_SUB_WRITE_REG(DSAF_SUB_SC_GE_RESET_DREQ0_REG,0,o_sc_ge_reset_dreq0.u32);

            o_sc_ge_reset_dreq1.u32 |= 0x1 <<ulPort;
            DSAF_SUB_WRITE_REG(DSAF_SUB_SC_GE_RESET_DREQ1_REG,0,o_sc_ge_reset_dreq1.u32);
        }
    }
    else
    {
        if(0 == ulEn)
        {
            /* ?ȸ?λfifo */
            o_sc_ge_reset_req1.u32 |= 0x15540 <<(ulPort-6);
            DSAF_SUB_WRITE_REG(DSAF_SUB_SC_GE_RESET_REQ1_REG,0,o_sc_ge_reset_req1.u32);

            //o_sc_ge_reset_req0.u32 |= 0x1041041 <<ulPort;
            //DSAF_SUB_WRITE_REG(DSAF_SUB_SC_GE_RESET_REQ0_REG,0,o_sc_ge_reset_req0.u32);
        }
        else
        {
            /* ?Ƚ⸴λ???? */
            //o_sc_ge_reset_dreq0.u32 |= 0x1041041 <<ulPort;
            //DSAF_SUB_WRITE_REG(DSAF_SUB_SC_GE_RESET_DREQ0_REG,0,o_sc_ge_reset_dreq0.u32);

            o_sc_ge_reset_dreq1.u32 |= 0x15540 <<(ulPort-6);
            DSAF_SUB_WRITE_REG(DSAF_SUB_SC_GE_RESET_DREQ1_REG,0,o_sc_ge_reset_dreq1.u32);
        }

        if(0 == ulEn)
        {
            o_sc_ppe_reset_req.u32 |= (0x100 << (ulPort-6));
            DSAF_SUB_WRITE_REG(DSAF_SUB_SC_PPE_RESET_REQ_REG,0,o_sc_ppe_reset_req.u32);
        }
        else
        {
            o_sc_ppe_reset_dreq.u32 |= (0x100 << (ulPort-6));
            DSAF_SUB_WRITE_REG(DSAF_SUB_SC_PPE_RESET_DREQ_REG,0,o_sc_ppe_reset_dreq.u32);
        }

    }

    return OS_SUCCESS;
}



/*****************************************************************************
?? ?? ??  : HRD_Dsaf_PpeSrst
????????  : Ppe??λ???⸴λ
????????  : UINT32 ulPort  ulPort
            UINT32 ulEn  0:??λ >=1:ȥ??λ
????????  : ??
?? ?? ֵ  :
???ú???  :
????????  :

?޸???ʷ      :
 1.??    ??   : 2013??10??26??
   ??    ??   : z00176027
   ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_Dsaf_PpeSrstByPort(UINT32 ulPort,UINT32 ulEn)
{
    SC_PPE_RESET_REQ_U o_sc_ppe_reset_req;
    SC_PPE_RESET_DREQ_U o_sc_ppe_reset_dreq;


    if(ulPort >= PV660_XGE_NUM)
    {
        return OS_FAIL;
    }

    memset(&o_sc_ppe_reset_req,0,sizeof(SC_PPE_RESET_REQ_U));
    memset(&o_sc_ppe_reset_dreq,0,sizeof(SC_PPE_RESET_DREQ_U));


    if(0 == ulEn)
    {
        o_sc_ppe_reset_req.u32 |= (1 << ulPort);
        DSAF_SUB_WRITE_REG(DSAF_SUB_SC_PPE_RESET_REQ_REG,0,o_sc_ppe_reset_req.u32);
    }
    else
    {
        o_sc_ppe_reset_dreq.u32 |= (1 << ulPort);
        DSAF_SUB_WRITE_REG(DSAF_SUB_SC_PPE_RESET_DREQ_REG,0,o_sc_ppe_reset_dreq.u32);
    }

    return OS_SUCCESS;
}


/*****************************************************************************
?? ?? ??  : HRD_Dsaf_RoceSrst
????????  : Roce??λ???⸴λ
????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
????????  : ??
?? ?? ֵ  :
???ú???  :
????????  :

?޸???ʷ      :
 1.??    ??   : 2013??10??25??
   ??    ??   : z00176027
   ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_Dsaf_RoceSrst(UINT32 ulEn)
{
    SC_ROCEE_RESET_REQ_U o_sc_roce_reset_req;
    SC_ROCEE_RESET_DREQ_U o_sc_roce_reset_dreq;

    memset(&o_sc_roce_reset_req,0,sizeof(SC_ROCEE_RESET_REQ_U));
    memset(&o_sc_roce_reset_dreq,0,sizeof(SC_ROCEE_RESET_DREQ_U));

    if(0 == ulEn)
    {
         o_sc_roce_reset_req.bits.rocee_srst_req = 1;
         DSAF_SUB_WRITE_REG(DSAF_SUB_SC_ROCEE_RESET_REQ_REG,0,o_sc_roce_reset_req.u32);
    }
    else
    {
        o_sc_roce_reset_dreq.bits.rocee_srst_dreq = 1;
        DSAF_SUB_WRITE_REG(DSAF_SUB_SC_ROCEE_RESET_DREQ_REG,0,o_sc_roce_reset_dreq.u32);
    }

    return OS_SUCCESS;
}

/*****************************************************************************
?? ?? ??  : HRD_Dsaf_CpuSrst
????????  : Dsaf M3 CPU??λ???⸴λ
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
UINT32 HRD_Dsaf_CpuSrst(UINT32 ulEn)
{
    SC_CPU_RESET_REQ_U o_sc_cpu_reset_req;
    SC_CPU_RESET_DREQ_U o_sc_cpu_reset_dreq;

    memset(&o_sc_cpu_reset_req,0,sizeof(SC_CPU_RESET_REQ_U));
    memset(&o_sc_cpu_reset_dreq,0,sizeof(SC_CPU_RESET_DREQ_U));

    if(0 == ulEn)
    {
         o_sc_cpu_reset_req.bits.cpu_srst_req = 1;
         DSAF_SUB_WRITE_REG(DSAF_SUB_SC_CPU_RESET_REQ_REG,0,o_sc_cpu_reset_req.u32);
    }
    else
    {
          o_sc_cpu_reset_dreq.bits.cpu_srst_dreq = 1;
          DSAF_SUB_WRITE_REG(DSAF_SUB_SC_CPU_RESET_DREQ_REG,0,o_sc_cpu_reset_dreq.u32);
    }

    return OS_SUCCESS;
}

/*****************************************************************************
?? ?? ??  : HRD_Dsaf_SasSrst
????????  : Dsaf Sas??λ???⸴λ
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
UINT32 HRD_Dsaf_SasSrst(UINT32 ulEn)
{
    SC_SAS_RESET_REQ_U o_sc_sas_reset_req;
    SC_SAS_RESET_DREQ_U o_sc_sas_reset_dreq;

    memset(&o_sc_sas_reset_req,0,sizeof(SC_SAS_RESET_REQ_U));
    memset(&o_sc_sas_reset_dreq,0,sizeof(SC_SAS_RESET_DREQ_U));

    if(0 == ulEn)
    {
         o_sc_sas_reset_req.u32 |= 0x7ffff;
         DSAF_SUB_WRITE_REG(DSAF_SUB_SC_SAS_RESET_REQ_REG,0,o_sc_sas_reset_req.u32);
    }
    else
    {
          o_sc_sas_reset_dreq.u32 |= 0x7ffff;
          DSAF_SUB_WRITE_REG(DSAF_SUB_SC_SAS_RESET_DREQ_REG,0,o_sc_sas_reset_dreq.u32);
    }

    return OS_SUCCESS;
}


/*****************************************************************************
?? ?? ??  : HRD_Dsaf_SllcSrstByChannel
????????  : Dsaf sllc??λ???⸴λ
????????  : UINT32 ulChannel  ulChannel
            UINT32 ulEn  0:??λ >=1:ȥ??λ
????????  : ??
?? ?? ֵ  :
???ú???  :
????????  :

?޸???ʷ      :
 1.??    ??   : 2013??10??26??
   ??    ??   : z00176027
   ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_Dsaf_SllcSrstByChannel(UINT32 ulChannel,UINT32 ulEn)
{
    SC_SLLC_TSVRX_RESET_REQ_U o_sc_sllc_tsvrx_reset_req;
    SC_SLLC_TSVRX_RESET_DREQ_U o_sc_sllc_tsvrx_reset_dreq;

    if(ulChannel >= PV660_DSAF_SLLC_NUM)
    {
        return OS_FAIL;
    }

    memset(&o_sc_sllc_tsvrx_reset_req,0,sizeof(SC_SLLC_TSVRX_RESET_REQ_U));
    memset(&o_sc_sllc_tsvrx_reset_dreq,0,sizeof(SC_SLLC_TSVRX_RESET_DREQ_U));


    if(0 == ulEn)
    {
        o_sc_sllc_tsvrx_reset_req.u32 |= ulChannel;
        DSAF_SUB_WRITE_REG(DSAF_SUB_SC_SLLC_TSVRX_RESET_REQ_REG,0,o_sc_sllc_tsvrx_reset_req.u32);
    }
    else
    {
        o_sc_sllc_tsvrx_reset_dreq.u32 |= ulChannel;
        DSAF_SUB_WRITE_REG(DSAF_SUB_SC_SLLC_TSVRX_RESET_DREQ_REG,0,o_sc_sllc_tsvrx_reset_dreq.u32);
    }

    return OS_SUCCESS;
}


/*****************************************************************************
?? ?? ??  : HRD_Dsaf_ItsSrst
????????  : Its??λ???⸴λ
????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
????????  : ??
?? ?? ֵ  :
???ú???  :
????????  :

?޸???ʷ      :
 1.??    ??   : 2013??10??25??
   ??    ??   : z00176027
   ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_Dsaf_ItsSrst(UINT32 ulEn)
{
    SC_ITS_RESET_REQ_U o_sc_its_reset_req;
    SC_ITS_RESET_DREQ_U o_sc_its_reset_dreq;

    memset(&o_sc_its_reset_req,0,sizeof(SC_ITS_RESET_REQ_U));
    memset(&o_sc_its_reset_dreq,0,sizeof(SC_ITS_RESET_DREQ_U));

    if(0 == ulEn)
    {
         o_sc_its_reset_req.bits.its_srst_req = 1;
         DSAF_SUB_WRITE_REG(DSAF_SUB_SC_ITS_RESET_REQ_REG,0,o_sc_its_reset_req.u32);
    }
    else
    {
        o_sc_its_reset_dreq.bits.its_srst_dreq = 1;
        DSAF_SUB_WRITE_REG(DSAF_SUB_SC_ITS_RESET_DREQ_REG,0,o_sc_its_reset_dreq.u32);
    }

    return OS_SUCCESS;
}


/*****************************************************************************
?? ?? ??  : HRD_Dsaf_SramSrst
????????  : DSAFM3 Sram??λ???⸴λ
????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
????????  : ??
?? ?? ֵ  :
???ú???  :
????????  :

?޸???ʷ      :
 1.??    ??   : 2013??10??25??
   ??    ??   : z00176027
   ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_Dsaf_SramSrst(UINT32 ulEn)
{
    SC_SRAM_RESET_REQ_U o_sc_sram_reset_req;
    SC_SRAM_RESET_DREQ_U o_sc_sram_reset_dreq;

    memset(&o_sc_sram_reset_req,0,sizeof(SC_SRAM_RESET_REQ_U));
    memset(&o_sc_sram_reset_dreq,0,sizeof(SC_SRAM_RESET_DREQ_U));

    if(0 == ulEn)
    {
         o_sc_sram_reset_req.bits.sram_srst_req = 1;
         DSAF_SUB_WRITE_REG(DSAF_SUB_SC_SRAM_RESET_REQ_REG,0,o_sc_sram_reset_req.u32);
    }
    else
    {
        o_sc_sram_reset_dreq.bits.sram_srst_dreq = 1;
        DSAF_SUB_WRITE_REG(DSAF_SUB_SC_SRAM_RESET_DREQ_REG,0,o_sc_sram_reset_dreq.u32);
    }

    return OS_SUCCESS;
}


/*****************************************************************************
?? ?? ??  : HRD_Dsaf_PpeComSrst
????????  : PPE??????λ???⸴λ
????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
????????  : ??
?? ?? ֵ  :
???ú???  :
????????  :

?޸???ʷ      :
 1.??    ??   : 2013??10??25??
   ??    ??   : z00176027
   ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_Dsaf_PpeComSrst(UINT32 ulCommId, UINT32 ulEn)
{

    /**ҵ?? ppe comm Ϊ 0*/
    if(ulCommId < 1)
    {
        SC_RCB_PPE_COM_RESET_REQ_U o_sc_ppe_com_reset_req;
        SC_RCB_PPE_COM_RESET_DREQ_U o_sc_ppe_com_reset_dreq;

        memset(&o_sc_ppe_com_reset_req,0,sizeof(SC_RCB_PPE_COM_RESET_REQ_U));
        memset(&o_sc_ppe_com_reset_dreq,0,sizeof(SC_RCB_PPE_COM_RESET_DREQ_U));

        if(0 == ulEn)
        {
             o_sc_ppe_com_reset_req.bits.rcb_ppe_com_srst_req = 1;
             DSAF_SUB_WRITE_REG(DSAF_SUB_SC_RCB_PPE_COM_RESET_REQ_REG,0,o_sc_ppe_com_reset_req.u32);
        }
        else
        {
            o_sc_ppe_com_reset_dreq.bits.rcb_ppe_com_srst_dreq = 1;
            DSAF_SUB_WRITE_REG(DSAF_SUB_SC_RCB_PPE_COM_RESET_DREQ_REG,0,o_sc_ppe_com_reset_dreq.u32);
        }
    }
    /**????ppe comm ????Ϊ 1 2*/
    else
    {
        SC_PPE_RESET_REQ_U o_sc_ppe_reset_req;
        SC_PPE_RESET_DREQ_U o_sc_ppe_reset_dreq;

        memset(&o_sc_ppe_reset_req,0,sizeof(SC_PPE_RESET_REQ_U));
        memset(&o_sc_ppe_reset_dreq,0,sizeof(SC_PPE_RESET_DREQ_U));

        if(0 == ulEn)
        {
            o_sc_ppe_reset_req.u32 |= (0x100 << (ulCommId - 1));
            DSAF_SUB_WRITE_REG(DSAF_SUB_SC_PPE_RESET_REQ_REG,0,o_sc_ppe_reset_req.u32);
        }
        else
        {
            o_sc_ppe_reset_dreq.u32 |= (0x100 << (ulCommId - 1));
            DSAF_SUB_WRITE_REG(DSAF_SUB_SC_PPE_RESET_DREQ_REG,0,o_sc_ppe_reset_dreq.u32);
        }
    }

    return OS_SUCCESS;
}


/*****************************************************************************
?? ?? ??  : HRD_Dsaf_TimerSrst
????????  : Timer??λ???⸴λ
????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
????????  : ??
?? ?? ֵ  :
???ú???  :
????????  :

?޸???ʷ      :
 1.??    ??   : 2013??10??25??
   ??    ??   : z00176027
   ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_Dsaf_TimerSrst(UINT32 ulEn)
{
    SC_TIMER_RESET_REQ_U o_sc_timer_reset_req;
    SC_TIMER_RESET_DREQ_U o_sc_timer_reset_dreq;

    memset(&o_sc_timer_reset_req,0,sizeof(SC_TIMER_RESET_REQ_U));
    memset(&o_sc_timer_reset_dreq,0,sizeof(SC_TIMER_RESET_DREQ_U));

    if(0 == ulEn)
    {
         o_sc_timer_reset_req.bits.timer_srst_req = 1;
         DSAF_SUB_WRITE_REG(DSAF_SUB_SC_TIMER_RESET_REQ_REG,0,o_sc_timer_reset_req.u32);
    }
    else
    {
        o_sc_timer_reset_dreq.bits.timer_srst_dreq = 1;
        DSAF_SUB_WRITE_REG(DSAF_SUB_SC_TIMER_RESET_DREQ_REG,0,o_sc_timer_reset_dreq.u32);
    }

    return OS_SUCCESS;
}


/*****************************************************************************
?? ?? ??  : HRD_Dsaf_Sll1cSrst
????????  : Sllc1??λ???⸴λ
????????  : UINT32 ulEn  0:??λ >=1:ȥ??λ
????????  : ??
?? ?? ֵ  :
???ú???  :
????????  :

?޸???ʷ      :
 1.??    ??   : 2013??10??25??
   ??    ??   : z00176027
   ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_Dsaf_Sllc1Srst(UINT32 ulEn)
{
    SC_SLLC_RESET_REQ_U o_sc_sllc1_reset_req;
    SC_SLLC_RESET_DREQ_U o_sc_sllc1_reset_dreq;

    memset(&o_sc_sllc1_reset_req,0,sizeof(SC_SLLC_RESET_REQ_U));
    memset(&o_sc_sllc1_reset_dreq,0,sizeof(SC_SLLC_RESET_DREQ_U));

    if(0 == ulEn)
    {
         o_sc_sllc1_reset_req.bits.sllc_srst_req = 1;
         DSAF_SUB_WRITE_REG(DSAF_SUB_SC_SLLC_RESET_REQ_REG,0,o_sc_sllc1_reset_req.u32);
    }
    else
    {
        o_sc_sllc1_reset_dreq.bits.sllc_srst_dreq = 1;
        DSAF_SUB_WRITE_REG(DSAF_SUB_SC_SLLC_RESET_DREQ_REG,0,o_sc_sllc1_reset_dreq.u32);
    }

    return OS_SUCCESS;
}

/*****************************************************************************
 ?? ?? ??  : HRD_Dsaf_IntMuxSet
 ????????  : ?ж?ѡ?????͵?ITS????M3
 ????????  : UINT32 ulValue
 ????????  : ??
 ?? ?? ֵ  : UINT32
 ???ú???  :
 ????????  :

 ?޸???ʷ      :
  1.??    ??   : 2014??4??23??
    ??    ??   : yww
    ?޸?????   : ?????ɺ???

*****************************************************************************/
UINT32 HRD_Dsaf_IntMuxSet(UINT32 ulValue)
{
    DSAF_SUB_WRITE_REG(DSAF_SUB_SC_ITS_M3_INT_MUX_SEL_REG,0,(ulValue & 0x1F));
    return OS_SUCCESS;
}

#ifdef HRD_OS_LINUX
/*****************************************************************************
 ?? ?? ??  : HRD_SubDsafInit
 ????????  : SUB DSAF CRG linux??ʼ??
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
UINT32 HRD_SubDsafInit(void)
{
    sub_dsaf_pa_addr = DSAF_SUB_BASE;

    /* SUB ALG????io?ڴ? */
    if (!request_mem_region(sub_dsaf_pa_addr, DSAF_SUB_BASE_SIZE, "SUB DSAF Reg"))
    {

        printk("SUB DSA region busy\n");

        return OS_ERROR;
    }

    sub_dsaf_base_addr = (UINT64)ioremap(sub_dsaf_pa_addr, DSAF_SUB_BASE_SIZE);
    if (!sub_dsaf_base_addr)
    {
        release_mem_region(sub_dsaf_pa_addr, DSAF_SUB_BASE_SIZE);
        printk("could not ioremap SUB DSA registers\n");

        return OS_ERROR;
    }

    return OS_SUCCESS;
}


/*****************************************************************************
 ?? ?? ??  : HRD_SubAlgExit
 ????????  : SUB DSAF CRG ?˳?
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
void HRD_SubDsafExit(void)
{
    /* ?ͷ?SUB dsaf ??Դ */
    if (sub_dsaf_base_addr > 0)
    {
        release_mem_region(sub_dsaf_pa_addr, DSAF_SUB_BASE_SIZE);
        iounmap((void *)sub_dsaf_base_addr);
    }

}

UINT64 HRD_SubDsafGetBase(void)
{
	return sub_dsaf_base_addr;
}

EXPORT_SYMBOL(HRD_Dsaf_SllcSrstByChannel);
EXPORT_SYMBOL(HRD_Dsaf_GeSrstByPort);
EXPORT_SYMBOL(HRD_Dsaf_XgeSrstByPort);
EXPORT_SYMBOL(HRD_Dsaf_PpeSrstByPort);
EXPORT_SYMBOL(HRD_Dsaf_XbarSrst);
EXPORT_SYMBOL(HRD_Dsaf_NtSrst);
EXPORT_SYMBOL(HRD_Dsaf_CpuSrst);
EXPORT_SYMBOL(HRD_Dsaf_RoceSrst);
EXPORT_SYMBOL(HRD_SubDsafGetBase);
EXPORT_SYMBOL(HRD_Dsaf_PpeComSrst);

#endif


