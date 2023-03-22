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
/**
*   @file       Clock_Ip_Pll.c
*   @version    2.0.3
*
*   @brief   CLOCK driver implementations.
*   @details CLOCK driver implementations.
*
*   @addtogroup CLOCK_DRIVER Clock Ip Driver
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Clock_Ip_Private.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_PLL_VENDOR_ID_C                      43
#define CLOCK_IP_PLL_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_PLL_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_PLL_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_PLL_SW_MAJOR_VERSION_C               2
#define CLOCK_IP_PLL_SW_MINOR_VERSION_C               0
#define CLOCK_IP_PLL_SW_PATCH_VERSION_C               3

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_Pll.c file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_PLL_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_Pll.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Clock_Ip_Pll.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_PLL_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PLL_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_PLL_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_Pll.c and Clock_Ip_Private.h are different"
#endif

/* Check if Clock_Ip_Pll.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_PLL_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_PLL_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_PLL_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_Pll.c and Clock_Ip_Private.h are different"
#endif

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/
/* Clock start section code */
#define MCU_START_SEC_CODE

#include "Mcu_MemMap.h"

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


static void Clock_Ip_CallbackPllEmpty(Clock_Ip_PllConfigType const* Config);
static Clock_Ip_PllStatusReturnType Clock_Ip_CallbackPllEmptyComplete(Clock_Ip_NameType PllName);
static void Clock_Ip_CallbackPllEmptyDisable(Clock_Ip_NameType PllName);

#ifdef CLOCK_IP_PLL_RDIV_MFI_MFN_ODIV2_SDMEN_SSCGBYP_SPREADCTL_STEPNO_STEPSIZE
static void Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_PllConfigType const* Config);
static void Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_PllConfigType const* Config);
static Clock_Ip_PllStatusReturnType Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_NameType PllName);
static void Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_PllConfigType const* Config);
#endif


/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/

#define MCU_START_SEC_CODE
/* Clock start section code */

#include "Mcu_MemMap.h"


static void Clock_Ip_CallbackPllEmpty(Clock_Ip_PllConfigType const* Config)
{
    (void)Config;
    /* No implementation */
}
static Clock_Ip_PllStatusReturnType Clock_Ip_CallbackPllEmptyComplete(Clock_Ip_NameType PllName)
{
    (void)PllName;
    /* No implementation */
    return STATUS_PLL_NOT_ENABLED;
}
static void Clock_Ip_CallbackPllEmptyDisable(Clock_Ip_NameType PllName)
{
    (void)PllName;
    /* No implementation */
}


/* Pll with frequency modulation and VCO clock post divider for driving the PHI output clocks */
#ifdef CLOCK_IP_PLL_RDIV_MFI_MFN_ODIV2_SDMEN_SSCGBYP_SPREADCTL_STEPNO_STEPSIZE
static void Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_PllConfigType const* Config)
{
    uint32 Instance = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_MODULE_INSTANCE];

    /* Power down PLL */
    Clock_Ip_pxPll[Instance]->PLLCR |= PLL_PLLCR_PLLPD_MASK;
}
static void Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_PllConfigType const* Config)
{
    uint32 Instance = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_MODULE_INSTANCE];
    uint32 Value;

    if (Config->Enable != 0U)
    {
        /* Configure PLL: predivider and multiplier */
        Value = Clock_Ip_pxPll[Instance]->PLLDV;
        Value &= ~(PLL_PLLDV_RDIV_MASK | PLL_PLLDV_MFI_MASK);
        Value |= (uint32) (PLL_PLLDV_RDIV(Config->Predivider) |
                          PLL_PLLDV_MFI(Config->MulFactorDiv));
        Clock_Ip_pxPll[Instance]->PLLDV = Value;

        /* Set numerator fractional loop divider and sigma delta modulation */
        Value = Clock_Ip_pxPll[Instance]->PLLFD;
        Value &= ~(PLL_PLLFD_MFN_MASK | PLL_PLLFD_SDMEN_MASK);
        Value |=  PLL_PLLFD_MFN(Config->NumeratorFracLoopDiv);
        Value |= PLL_PLLFD_SDMEN(Config->SigmaDelta);
        Clock_Ip_pxPll[Instance]->PLLFD = Value;

        /* Configure modulation */
        Value = (uint32) (PLL_PLLFM_SSCGBYP((Config->ModulationFrequency != 0U) ? 0UL : 1UL)  |
                            PLL_PLLFM_SPREADCTL(Config->ModulationType)                |
                            PLL_PLLFM_STEPNO(Config->IncrementStep)                    |
                            PLL_PLLFM_STEPSIZE(Config->ModulationPeriod));
        Clock_Ip_pxPll[Instance]->PLLFM = Value;

        /* Send command to enable PLL device. */
        Clock_Ip_pxPll[Instance]->PLLCR &= ~PLL_PLLCR_PLLPD_MASK;
    }
}

static Clock_Ip_PllStatusReturnType Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_NameType PllName)
{
    Clock_Ip_PllStatusReturnType PllStatus = STATUS_PLL_LOCKED;

    boolean TimeoutOccurred = FALSE;
    uint32 StartTime;
    uint32 ElapsedTime;
    uint32 TimeoutTicks;
    uint32 PllLockStatus;
    uint32 Instance = Clock_Ip_au8ClockFeatures[PllName][CLOCK_IP_MODULE_INSTANCE];

    if (0U == (Clock_Ip_pxPll[Instance]->PLLCR & PLL_PLLCR_PLLPD_MASK))
    {
        Clock_Ip_StartTimeout(&StartTime, &ElapsedTime, &TimeoutTicks, CLOCK_IP_TIMEOUT_VALUE_US);
        /* Wait until this pll is locked */
        do
        {
            PllLockStatus = ((Clock_Ip_pxPll[Instance]->PLLSR & PLL_PLLSR_LOCK_MASK) >> PLL_PLLSR_LOCK_SHIFT);
            TimeoutOccurred = Clock_Ip_TimeoutExpired(&StartTime, &ElapsedTime, TimeoutTicks);
        }
        while ((0U == PllLockStatus) && (FALSE == TimeoutOccurred));

        if (TRUE == TimeoutOccurred)
        {
            PllStatus = STATUS_PLL_UNLOCKED;
        }
    }
    else
    {
        PllStatus = STATUS_PLL_NOT_ENABLED;
    }
    return PllStatus;
}
static void Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize(Clock_Ip_PllConfigType const* Config)
{
    uint32 Instance = Clock_Ip_au8ClockFeatures[Config->Name][CLOCK_IP_MODULE_INSTANCE];

    /* Configure PLL. */
    if (1U == Config->Enable)
    {
        /* Send command to enable PLL device. */
        Clock_Ip_pxPll[Instance]->PLLCR &= ~PLL_PLLCR_PLLPD_MASK;
    }
}
#endif

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/




/* Clock stop section code */
#define MCU_STOP_SEC_CODE

#include "Mcu_MemMap.h"

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/
/* Clock start constant section data */
#define MCU_START_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"
const Clock_Ip_PllCallbackType Clock_Ip_axPllCallbacks[CLOCK_IP_PLL_CALLBACKS_COUNT] =
{
    {
        Clock_Ip_CallbackPllEmpty,            /* Reset */
        Clock_Ip_CallbackPllEmpty,            /* Set */
        Clock_Ip_CallbackPllEmptyComplete,    /* Complete */
        Clock_Ip_CallbackPllEmpty,            /* Enable */
        Clock_Ip_CallbackPllEmptyDisable,     /* Disable */
    },
    /* Pll with frequency modulation and VCO clock post divider for driving the PHI output clocks */
#ifdef CLOCK_IP_PLL_RDIV_MFI_MFN_ODIV2_SDMEN_SSCGBYP_SPREADCTL_STEPNO_STEPSIZE
    {
        Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize,              /* Reset */
        Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize,                /* Set */
        Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize,           /* Complete */
        Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize,             /* Enable */
        Clock_Ip_CallbackPllEmptyDisable,                                                 /* Disable */
    },
#endif
};


/* Clock stop constant section data */
#define MCU_STOP_SEC_CONST_UNSPECIFIED

#include "Mcu_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

