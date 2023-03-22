/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
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
extern "C" {
#endif

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "IntCtrl_Ip_Cfg.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PLATFORM_INTCTRL_IP_CFG_VENDOR_ID_C                          43
#define PLATFORM_INTCTRL_IP_CFG_SW_MAJOR_VERSION_C                   2
#define PLATFORM_INTCTRL_IP_CFG_SW_MINOR_VERSION_C                   0
#define PLATFORM_INTCTRL_IP_CFG_SW_PATCH_VERSION_C                   3
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and IntCtrl_Ip_Cfg header file are of the same vendor */
#if (PLATFORM_INTCTRL_IP_CFG_VENDOR_ID_C != PLATFORM_INTCTRL_IP_CFG_VENDOR_ID)
    #error "IntCtrl_Ip_Cfg.c and IntCtrl_Ip_Cfg.h have different vendor ids"
#endif

/* Check if current file and IntCtrl_Ip_Cfg header file are of the same Software version */
#if ((PLATFORM_INTCTRL_IP_CFG_SW_MAJOR_VERSION_C != PLATFORM_INTCTRL_IP_CFG_SW_MAJOR_VERSION) || \
     (PLATFORM_INTCTRL_IP_CFG_SW_MINOR_VERSION_C != PLATFORM_INTCTRL_IP_CFG_SW_MINOR_VERSION) || \
     (PLATFORM_INTCTRL_IP_CFG_SW_PATCH_VERSION_C != PLATFORM_INTCTRL_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of IntCtrl_Ip_Cfg.c and IntCtrl_Ip_Cfg.h are different"
#endif
/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/
#define PLATFORM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"

/* List of configurations for routing interrupts */
static const IntCtrl_Ip_IrqRouteConfigType aIrqRouteConfig[] = {
    {INT0_IRQn, 1U, undefined_handler},
    {INT1_IRQn, 1U, undefined_handler},
    {INT2_IRQn, 1U, undefined_handler},
    {INT3_IRQn, 1U, undefined_handler},
    {DMATCD0_IRQn, 1U, undefined_handler},
    {DMATCD1_IRQn, 1U, undefined_handler},
    {DMATCD2_IRQn, 1U, undefined_handler},
    {DMATCD3_IRQn, 1U, undefined_handler},
    {DMATCD4_IRQn, 1U, undefined_handler},
    {DMATCD5_IRQn, 1U, undefined_handler},
    {DMATCD6_IRQn, 1U, undefined_handler},
    {DMATCD7_IRQn, 1U, undefined_handler},
    {DMATCD8_IRQn, 1U, undefined_handler},
    {DMATCD9_IRQn, 1U, undefined_handler},
    {DMATCD10_IRQn, 1U, undefined_handler},
    {DMATCD11_IRQn, 1U, undefined_handler},
    {DMATCD12_IRQn, 1U, undefined_handler},
    {DMATCD13_IRQn, 1U, undefined_handler},
    {DMATCD14_IRQn, 1U, undefined_handler},
    {DMATCD15_IRQn, 1U, undefined_handler},
    {DMATCD16_IRQn, 1U, undefined_handler},
    {DMATCD17_IRQn, 1U, undefined_handler},
    {DMATCD18_IRQn, 1U, undefined_handler},
    {DMATCD19_IRQn, 1U, undefined_handler},
    {DMATCD20_IRQn, 1U, undefined_handler},
    {DMATCD21_IRQn, 1U, undefined_handler},
    {DMATCD22_IRQn, 1U, undefined_handler},
    {DMATCD23_IRQn, 1U, undefined_handler},
    {DMATCD24_IRQn, 1U, undefined_handler},
    {DMATCD25_IRQn, 1U, undefined_handler},
    {DMATCD26_IRQn, 1U, undefined_handler},
    {DMATCD27_IRQn, 1U, undefined_handler},
    {DMATCD28_IRQn, 1U, undefined_handler},
    {DMATCD29_IRQn, 1U, undefined_handler},
    {DMATCD30_IRQn, 1U, undefined_handler},
    {DMATCD31_IRQn, 1U, undefined_handler},
    {ERM_0_IRQn, 1U, undefined_handler},
    {ERM_1_IRQn, 1U, undefined_handler},
    {MCM_IRQn, 1U, undefined_handler},
    {STM0_IRQn, 1U, undefined_handler},
    {STM1_IRQn, 1U, undefined_handler},
    {SWT0_IRQn, 1U, undefined_handler},
    {CTI0_IRQn, 1U, undefined_handler},
    {FLASH_0_IRQn, 1U, undefined_handler},
    {FLASH_1_IRQn, 1U, undefined_handler},
    {FLASH_2_IRQn, 1U, undefined_handler},
    {RGM_IRQn, 1U, undefined_handler},
    {PMC_IRQn, 1U, undefined_handler},
    {SIUL_0_IRQn, 1U, undefined_handler},
    {SIUL_1_IRQn, 1U, undefined_handler},
    {SIUL_2_IRQn, 1U, undefined_handler},
    {SIUL_3_IRQn, 1U, undefined_handler},
    {EMIOS0_0_IRQn, 1U, undefined_handler},
    {EMIOS0_1_IRQn, 1U, undefined_handler},
    {EMIOS0_2_IRQn, 1U, undefined_handler},
    {EMIOS0_3_IRQn, 1U, undefined_handler},
    {EMIOS0_4_IRQn, 1U, undefined_handler},
    {EMIOS0_5_IRQn, 1U, undefined_handler},
    {EMIOS1_0_IRQn, 1U, undefined_handler},
    {EMIOS1_1_IRQn, 1U, undefined_handler},
    {EMIOS1_2_IRQn, 1U, undefined_handler},
    {EMIOS1_3_IRQn, 1U, undefined_handler},
    {EMIOS1_4_IRQn, 1U, undefined_handler},
    {EMIOS1_5_IRQn, 1U, undefined_handler},
    {EMIOS2_0_IRQn, 1U, undefined_handler},
    {EMIOS2_1_IRQn, 1U, undefined_handler},
    {EMIOS2_2_IRQn, 1U, undefined_handler},
    {EMIOS2_3_IRQn, 1U, undefined_handler},
    {EMIOS2_4_IRQn, 1U, undefined_handler},
    {EMIOS2_5_IRQn, 1U, undefined_handler},
    {WKPU_IRQn, 1U, undefined_handler},
    {CMU0_IRQn, 1U, undefined_handler},
    {CMU1_IRQn, 1U, undefined_handler},
    {CMU2_IRQn, 1U, undefined_handler},
    {BCTU_IRQn, 1U, undefined_handler},
    {LCU0_IRQn, 1U, undefined_handler},
    {LCU1_IRQn, 1U, undefined_handler},
    {PIT0_IRQn, 1U, undefined_handler},
    {PIT1_IRQn, 1U, undefined_handler},
    {PIT2_IRQn, 1U, undefined_handler},
    {RTC_IRQn, 1U, undefined_handler},
    {EMAC_0_IRQn, 1U, undefined_handler},
    {EMAC_1_IRQn, 1U, undefined_handler},
    {EMAC_2_IRQn, 1U, undefined_handler},
    {EMAC_3_IRQn, 1U, undefined_handler},
    {FlexCAN0_0_IRQn, 1U, undefined_handler},
    {FlexCAN0_1_IRQn, 1U, undefined_handler},
    {FlexCAN0_2_IRQn, 1U, undefined_handler},
    {FlexCAN0_3_IRQn, 1U, undefined_handler},
    {FlexCAN1_0_IRQn, 1U, undefined_handler},
    {FlexCAN1_1_IRQn, 1U, undefined_handler},
    {FlexCAN1_2_IRQn, 1U, undefined_handler},
    {FlexCAN2_0_IRQn, 1U, undefined_handler},
    {FlexCAN2_1_IRQn, 1U, undefined_handler},
    {FlexCAN2_2_IRQn, 1U, undefined_handler},
    {FlexCAN3_0_IRQn, 1U, undefined_handler},
    {FlexCAN3_1_IRQn, 1U, undefined_handler},
    {FlexCAN4_0_IRQn, 1U, undefined_handler},
    {FlexCAN4_1_IRQn, 1U, undefined_handler},
    {FlexCAN5_0_IRQn, 1U, undefined_handler},
    {FlexCAN5_1_IRQn, 1U, undefined_handler},
    {FLEXIO_IRQn, 1U, undefined_handler},
    {LPUART0_IRQn, 1U, undefined_handler},
    {LPUART1_IRQn, 1U, undefined_handler},
    {LPUART2_IRQn, 1U, undefined_handler},
    {LPUART3_IRQn, 1U, undefined_handler},
    {LPUART4_IRQn, 1U, undefined_handler},
    {LPUART5_IRQn, 1U, undefined_handler},
    {LPUART6_IRQn, 1U, undefined_handler},
    {LPUART7_IRQn, 1U, undefined_handler},
    {LPUART8_IRQn, 1U, undefined_handler},
    {LPUART9_IRQn, 1U, undefined_handler},
    {LPUART10_IRQn, 1U, undefined_handler},
    {LPUART11_IRQn, 1U, undefined_handler},
    {LPUART12_IRQn, 1U, undefined_handler},
    {LPUART13_IRQn, 1U, undefined_handler},
    {LPUART14_IRQn, 1U, undefined_handler},
    {LPUART15_IRQn, 1U, undefined_handler},
    {LPI2C0_IRQn, 1U, undefined_handler},
    {LPI2C1_IRQn, 1U, undefined_handler},
    {LPSPI0_IRQn, 1U, undefined_handler},
    {LPSPI1_IRQn, 1U, undefined_handler},
    {LPSPI2_IRQn, 1U, undefined_handler},
    {LPSPI3_IRQn, 1U, undefined_handler},
    {LPSPI4_IRQn, 1U, undefined_handler},
    {LPSPI5_IRQn, 1U, undefined_handler},
    {QSPI_IRQn, 1U, undefined_handler},
    {SAI0_IRQn, 1U, undefined_handler},
    {SAI1_IRQn, 1U, undefined_handler},
    {JDC_IRQn, 1U, undefined_handler},
    {ADC0_IRQn, 1U, undefined_handler},
    {ADC1_IRQn, 1U, undefined_handler},
    {ADC2_IRQn, 1U, undefined_handler},
    {LPCMP0_IRQn, 1U, undefined_handler},
    {LPCMP1_IRQn, 1U, undefined_handler},
    {LPCMP2_IRQn, 1U, undefined_handler},
    {FCCU_0_IRQn, 1U, undefined_handler},
    {FCCU_1_IRQn, 1U, undefined_handler},
    {STCU_LBIST_MBIST_IRQn, 1U, undefined_handler},
    {HSE_MU0_TX_IRQn, 1U, undefined_handler},
    {HSE_MU0_RX_IRQn, 1U, undefined_handler},
    {HSE_MU0_ORED_IRQn, 1U, undefined_handler},
    {HSE_MU1_TX_IRQn, 1U, undefined_handler},
    {HSE_MU1_RX_IRQn, 1U, undefined_handler},
    {HSE_MU1_ORED_IRQn, 1U, undefined_handler},
    {SoC_PLL_IRQn, 1U, undefined_handler},
};
/* Configuration structure for interrupt routing */
const IntCtrl_Ip_GlobalRouteConfigType intRouteConfig = {
    146U,
    aIrqRouteConfig
};

#define PLATFORM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"

#ifdef __cplusplus
}
#endif

