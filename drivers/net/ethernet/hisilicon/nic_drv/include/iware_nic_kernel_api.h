
#ifndef _IWARE_NIC_KERNEL_API_H
#define _IWARE_NIC_KERNEL_API_H

#include <linux/module.h>
#include <linux/types.h>
#include <linux/netdevice.h>

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */


/*****************************************************************************
 函 数 名  : nic_clean_stats
 功能描述  : 返回的各个统计项是将软硬件统计汇总后的结果。本接口先查询相应的统计，
 	     再将统计清除。
 输入参数  : struct net_device *dev: 网络设备指针。
 输出参数  : struct rtnl_link_stats64 *stats：查询到的统计信息，如果传NULL则不返
             	回统计结果。
 返 回 值  : 0为成功，非0为错误码
*****************************************************************************/
extern int nic_clean_stats(struct net_device *netdev, struct rtnl_link_stats64 *stats);


/*****************************************************************************
 函 数 名  : nic_set_stats
 功能描述  : 修改网口统计，产品有实时检测统计值是否正常的功能，此接口提供注入特
 	     定统计值，使产品能够对实时测试统计值的功能进行特定测试。
 输入参数  : struct net_device *dev: 网络设备指针。
 	     struct rtnl_link_stats64 *storage：要注入的统计信息
 输出参数  : 无
 返 回 值  : 0为成功，非0为错误码
*****************************************************************************/
extern int nic_set_stats(struct net_device *netdev, struct rtnl_link_stats64 *storage);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif
