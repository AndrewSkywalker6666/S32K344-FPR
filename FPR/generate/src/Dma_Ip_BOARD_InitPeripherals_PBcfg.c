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

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Dma_Ip_Cfg.h"

/*==================================================================================================
*                                    SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define DMA_IP_BOARD_INITPERIPHERALS_PBCFG_MODULE_ID_C                     255
#define DMA_IP_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C                     43
#define DMA_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C      4
#define DMA_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C      4
#define DMA_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C   0
#define DMA_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C              2
#define DMA_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C              0
#define DMA_IP_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C              3

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Dma_Ip_BOARD_InitPeripherals_PBcfg.c file and Dma_Ip_Cfg.h file are of the same vendor */
#if (DMA_IP_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID_C != DMA_IP_CFG_VENDOR_ID)
    #error "Dma_Ip_BOARD_InitPeripherals_PBcfg.c and Dma_Ip_Cfg.h have different vendor ids"
#endif

/* Check if Dma_Ip_BOARD_InitPeripherals_PBcfg.c file and Dma_Ip_Cfg.h file are of the same Autosar version */
#if ((DMA_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (DMA_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION_C != DMA_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (DMA_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION_C != DMA_IP_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Dma_Ip_BOARD_InitPeripherals_PBcfg.c and Dma_Ip_Cfg.h are different"
#endif

/* Check if Dma_Ip_BOARD_InitPeripherals_PBcfg.c file and Dma_Ip_Cfg.h file are of the same Software version */
#if ((DMA_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION_C != DMA_IP_CFG_SW_MAJOR_VERSION) || \
     (DMA_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION_C != DMA_IP_CFG_SW_MINOR_VERSION) || \
     (DMA_IP_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION_C != DMA_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Dma_Ip_BOARD_InitPeripherals_PBcfg.c and Dma_Ip_Cfg.h are different"
#endif


/*==================================================================================================
*                                        LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#define MCL_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"


/* DMA Logic Instance Configuration */
const Dma_Ip_LogicInstanceConfigType LogicInstance0ConfigPB =
{
	{
		/* uint32 logicInstId; */ DMA_LOGIC_INST_0,
		/* uint8 hwVersId;     */ DMA_IP_HARDWARE_VERSION_3,
		/* uint8 hwInst;       */ DMA_IP_HW_INST_0,
	},
	/* boolean EnDebug; */                 (boolean)FALSE,
	/* boolean EnRoundRobin; */            (boolean)FALSE,
	/* boolean EnHaltAfterError; */        (boolean)FALSE,
	/* boolean EnChLinking; */             (boolean)FALSE,
	/* boolean EnGlMasterIdReplication; */ (boolean)FALSE,
};

/* DMA Logic Instance Configuration Array */
const Dma_Ip_LogicInstanceConfigType * const Dma_Ip_paxLogicInstanceConfigArrayPB[DMA_IP_NOF_CFG_LOGIC_INSTANCES] =
{
		&LogicInstance0ConfigPB,
};


#define MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"


#define MCL_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"


/* DMA Logic Channel Configurations */

#define MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#define MCL_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"


#define MCL_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#define MCL_START_SEC_VAR_INIT_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#define MCL_STOP_SEC_VAR_INIT_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#define MCL_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

const Dma_Ip_LogicChannelConfigType LogicChannel0ConfigPB = 
{
		{
				/* uint32 LogicChId; */               DMA_LOGIC_CH_0,
				/* uint8 HwVersId; */                 DMA_IP_HARDWARE_VERSION_3,
				/* uint8 HwInst; */                   DMA_IP_HW_INST_0,
				/* uint8 HwChId; */                   0U,
				/* Dma_Ip_Callback IntCallback; */    NULL_PTR,
				/* Dma_Ip_Callback ErrIntCallback; */ NULL_PTR,
		}, /* Dma_Ip_LogicChannelIdType */
		NULL_PTR,
		NULL_PTR,
		NULL_PTR,
};

const Dma_Ip_LogicChannelConfigType * const Dma_Ip_paxLogicChannelConfigArrayPB[DMA_IP_NOF_CFG_LOGIC_CHANNELS] =
{
		&LogicChannel0ConfigPB,
};

#define MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#define MCL_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/* DMA Hardware Channel 0 */
Dma_Ip_HwChannelStateType HwChannel0StatePB;

#define MCL_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#define MCL_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/* DMA Hardware Channel State and DMA Logic Channel Configuration Array */
Dma_Ip_HwChannelStateType * Dma_Ip_paxHwChannelStateArrayPB[DMA_IP_NOF_CFG_LOGIC_CHANNELS] =
{
		&HwChannel0StatePB,
};

#define MCL_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

#define MCL_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"

/* DMA Initialization Structure */
const Dma_Ip_InitType Dma_Ip_xDmaInitPB = 
{
		/* Dma_Ip_HwChannelStateType ** HwChStateArray; */                            &Dma_Ip_paxHwChannelStateArrayPB[0U],         /* Static */
		/* const Dma_Ip_LogicChannelConfigType * const LogicChConfigArray;   */       &Dma_Ip_xLogicChannelResetConfig,           /* Static */
		/* const Dma_Ip_LogicChannelConfigType * const * LogicChConfigArray; */       &Dma_Ip_paxLogicChannelConfigArrayPB[0U],     /* Static */
		/* const Dma_Ip_LogicInstanceConfigType * const LogicInstConfigArray;   */    &Dma_Ip_xLogicInstanceResetConfig,          /* Static */
		/* const Dma_Ip_LogicInstanceConfigType * const  * LogicInstConfigArray; */   &Dma_Ip_paxLogicInstanceConfigArrayPB[0U],    /* Static */
};

#define MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Mcl_Dma_h_REF_1 MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents of a header file being included more than once. */
#include "Mcl_MemMap.h"


#ifdef __cplusplus
}
#endif

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/


