/*******************************************************************************

  Copyright(c) 2014 - 2019 Huawei Corporation.

  This program is free software; you can redistribute it and/or modify it
  under the terms and conditions of the GNU General Public License,
  version 2, as published by the Free Software Foundation.

  This program is distributed in the hope it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
  more details.

  You should have received a copy of the GNU General Public License along with
  this program; if not, write to the Free Software Foundation, Inc.,
  51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.

  The full GNU General Public License is included in this distribution in
  the file called "COPYING".

  Contact Information:TBD

*******************************************************************************/

#ifndef _UNIBSP_MOD_H
#define _UNIBSP_MOD_H

#include <linux/cdev.h>
#include <linux/device.h>


#include "hrd_base_api.h"
#include "hrd_mod_api.h"


/*----------------------------------------------*
 * ?ⲿ??��˵??                                 *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ?ⲿ????ԭ??˵??                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ?궨??                                       *
 *----------------------------------------------*/

#define MCSS_DEVS_EACH_MAX_MAC_NUM  3

typedef struct tagMcssDev2
{
    struct cdev      stChrDev;
    struct device   *pstDev;
    struct semaphore stSem;
}MCSS_S;

#pragma pack(4)
typedef struct tagMcssDev
{
    UINT32            uwIndex;   /* ?豸???? */
    UINT32            uwPid;     /* ????ID */
    UINT32            uwRingID;  /* ?豸??Ӧ??RingID */
    UINT32            uwChnFlg;  /* ͨ???Ƿ????? */
    UINT32            uwPktFlg;
    UINT32            uwSemFlg;  /* ?豸ռ???ź?��???? */
    atomic_t          stOpenFlg; /* ?豸?򿪱??? */
    wait_queue_head_t stQueue;
    UINT32            uwTxPort;  /* ???Ͷ˿ں? */
    struct cdev       stChrDev;
    struct device    *pstDev;
}MCSS_DEV_S;

typedef struct tagMcssDevMacInfo
{
    UINT32              uwNum;  /* ÿ??PID?????õ?MAC???? */
    UINT32              uwPid;  /* ????ID */
    MCSS_TYPE_MAC_S     stMac[MCSS_DEVS_EACH_MAX_MAC_NUM]; /* ÿ??pid??Ӧ????MAC??ַ */
}MCSS_DEV_MAC_INFO_S;

typedef struct tagMcssDevInfo
{
    UINT32              uwFixedMac2Pid;
    UINT32              uwInstanseFlg;
    spinlock_t          stLock;
    struct mutex        stMutex;
    struct timer_list   stTimer;
    UINT32              auwRingDeadId[32];
    MCSS_DEV_MAC_INFO_S stMacInfo[MCSS_MAX_INSTANCE_NUM];
}MCSS_DEV_INFO_S;


typedef struct tagBspCmd
{
    char   acCmd[0x100];
    UINT64 ulArg1;
    UINT64 ulArg2;
    UINT64 ulArg3;
    UINT64 ulArg4;
    UINT64 ulArg5;
    UINT64 ulArg6;
    UINT64 ulArg7;
    UINT64 ulArg8;
    UINT64 ulArg9;
    UINT64 ulArg10;
    UINT64 ulArg11;
    UINT64 ulArg12;
    UINT64 ulArg13;
    UINT64 ulArg14;
    UINT64 ulArg15;
} BSP_CMD_S;
#pragma pack()

/*----------------------------------------------*
 * ?ڲ?????ԭ??˵??                             *
 *----------------------------------------------*/
INT32  MC_Init(void);
INT32  MC_CommInitVm(void);
UINT32 MC_MmuAssign(UINT64 *puwVirtAddr, UINT64 udwPhyAddr, UINT32 uwSize,
                    UINT32 uwPriority, char *acName);
UINT32 MC_MmuVA2PA(UINT64 ulVirtAddr, UINT64 *pudlPhyAddr);
UINT32 MC_MmuPA2VA(UINT64 udlPhyAddr, UINT64 *pulVirtAddr);
UINT32 MC_IrqSetTarget(UINT32 ulIrq, UINT32 ulCore);
void   MC_DumpMem(UINT8 *pucAddr, UINT32 uwSize);
UINT32 MC_MmuIsMapped(UINT64 uwVirtAddr, UINT32 uwLen);
UINT32 MC_MmuShow(void);
UINT32 SRE_GetCoreID(void);

/*----------------------------------------------*
 * ȫ?ֱ?��                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ģ?鼶??��                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ??��????                                     *
 *----------------------------------------------*/

#endif /*_UNIBSP_MOD_H*/


