/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : DMA,CACHE,TRGMUX,LCU,EMIOS,FLEXIO
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 2.0.3
*   Build Version        : S32K3_RTD_2_0_3_D2302_ASR_REL_4_4_REV_0000_20230217
*
*   (c) Copyright 2020 - 2023 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

/* Prevention from multiple including the same header */
#ifndef DMA_IP_CFG_DEVICES_H_
#define DMA_IP_CFG_DEVICES_H_

/**
*   @file    Dma_Ip_Cfg_Devices.h
*
*   @version 2.0.3
*
*   @brief   AUTOSAR Mcl - Dma Ip Cfg Devices header file.
*   @details
*
*   @addtogroup DMA_IP_DRIVER DMA IP Driver
*   @{
*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Dma_Ip_Cfg_DeviceRegistersV3.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define DMA_IP_CFG_DEVICES_VENDOR_ID                       43
#define DMA_IP_CFG_DEVICES_AR_RELEASE_MAJOR_VERSION        4
#define DMA_IP_CFG_DEVICES_AR_RELEASE_MINOR_VERSION        4
#define DMA_IP_CFG_DEVICES_AR_RELEASE_REVISION_VERSION     0
#define DMA_IP_CFG_DEVICES_SW_MAJOR_VERSION                2
#define DMA_IP_CFG_DEVICES_SW_MINOR_VERSION                0
#define DMA_IP_CFG_DEVICES_SW_PATCH_VERSION                3

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if header file and Dma_Ip_Cfg_DeviceRegistersV3.h file are of the same vendor */
#if (DMA_IP_CFG_DEVICES_VENDOR_ID != DMA_IP_CFG_DEVICEREGISTERSV3_VENDOR_ID)
    #error "Dma_Ip_Devices.h and Dma_Ip_Cfg_DeviceRegistersV3.h have different vendor ids"
#endif

/* Check if header file and Dma_Ip_Cfg_DeviceRegistersV3.h file are of the same Autosar version */
#if ((DMA_IP_CFG_DEVICES_AR_RELEASE_MAJOR_VERSION != DMA_IP_CFG_DEVICEREGISTERSV3_AR_RELEASE_MAJOR_VERSION) || \
     (DMA_IP_CFG_DEVICES_AR_RELEASE_MINOR_VERSION != DMA_IP_CFG_DEVICEREGISTERSV3_AR_RELEASE_MINOR_VERSION) || \
     (DMA_IP_CFG_DEVICES_AR_RELEASE_REVISION_VERSION != DMA_IP_CFG_DEVICEREGISTERSV3_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Dma_Ip_Devices.h and Dma_Ip_Cfg_DeviceRegistersV3.h are different"
#endif

/* Check if header file and Dma_Ip_Cfg_DeviceRegistersV3.h file are of the same Software version */
#if ((DMA_IP_CFG_DEVICES_SW_MAJOR_VERSION != DMA_IP_CFG_DEVICEREGISTERSV3_SW_MAJOR_VERSION) || \
     (DMA_IP_CFG_DEVICES_SW_MINOR_VERSION != DMA_IP_CFG_DEVICEREGISTERSV3_SW_MINOR_VERSION) || \
     (DMA_IP_CFG_DEVICES_SW_PATCH_VERSION != DMA_IP_CFG_DEVICEREGISTERSV3_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Dma_Ip_Devices.h and Dma_Ip_Cfg_DeviceRegistersV3.h are different"
#endif

#ifdef __cplusplus
}
#endif

/** @} */

#endif  /* #ifndef DMA_IP_CFG_DEVICES_H_ */

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/

