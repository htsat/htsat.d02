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

#ifndef _MC_BASE_API_H
#define _MC_BASE_API_H


#include "hrd_mod_common_api.h"

/*----------------------------------------------*
 * ?ⲿ??��˵??                                 *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ?ⲿ????ԭ??˵??                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ?궨??                                       *
 *----------------------------------------------*/
#define MCSS_MOD_NAME               "unibsp"

/* number of bare mcss devices */


#define MCSS_MAX_CORE_NUM       16UL
#define MCSS_MAX_VCPU_NUM       32UL
#define MCSS_MAX_GRP_NUM        40UL



#define MCSS_MAX_VMID_NUM       8UL

#define MCSS_CACHE_LINE_SIZE    64UL

#pragma pack(4)
typedef struct tagMcssKernelStat  /* ???ṹ??һ??Ҫ???û?̬??Ӧ */
{
    /* ?ؼ???Ϣ???? */
    UINT64 ullOpenDevCnt[MCSS_DEVS_NUM];    /**<  ?????����???  */
    UINT64 ullCloseDevCnt[MCSS_DEVS_NUM];   /**<  ???̹رռ???  */
    UINT64 ullSendSemCnt[MCSS_DEVS_NUM];    /**<  ?????źż???  */
    UINT64 ullPouSentCnt[64];               /**<  POU???ͼ???   */

    /* ???????????? */
    UINT64 ullRecvPktOk;                    /**<  ???ձ??ĳɹ???  */
    UINT64 ullGeCnt;                        /**<  ????ΪGE????    */
    UINT64 ullHdcpCnt;                      /**<  ????ΪHDCP????  */
    UINT64 ullSendToGroupCnt;               /**<  ????ΪSendToGroup????  */

    /* ???????? */
    UINT64 ullRecvPktErr;                   /**<  ???ձ???ʧ????  */
    UINT64 ullPoePacketNull;                /**<  ????Ϊ?ռ???    */
    UINT64 ullEnRingFailCnt;                /**<  ??ringʧ?ܼ???  */
    UINT64 ullFreeBuffErr;                  /**<  ???ձ????ͷ??ڴ????? */
}MCSS_KERNEL_STAT_S;
#pragma pack()

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

#endif /*_MC_BASE_API_H*/

