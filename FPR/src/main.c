/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : S32K3XX
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 2.0.2
*   Build Version        : S32K3_RTD_2_0_2_D2211_ASR_REL_4_4_REV_0000_20221129
*
*   (c) Copyright 2020 - 2022 NXP Semiconductors
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
*   @file main.c
*
*   @addtogroup main_module main module documentation
*   @{
*/

/* Including necessary configuration files. */
#include "Mcal.h"

#include "Clock_Ip.h"
#include "IntCtrl_Ip.h"
#include "Lpspi_Ip.h"
#include "Pit_Ip.h"
#include "Siul2_Dio_Ip.h"
#include "Siul2_Port_Ip.h"
#include "Dma_Ip.h"

/* PIT instance used - 0 */
#define PIT_INST_0 0U
/* PIT Channel used - 0 */
#define CH_0 0U
/* PIT time-out period - equivalent to 100ms */
#define PIT_PERIOD 400000

volatile int exit_code = 0;
/* User includes */

/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/

uint8_t read_flag = 0;

int main(void)
{
    /* Write your code here */

	//初始化
    Clock_Ip_Init(&Clock_Ip_aClockConfig[0]);
    Siul2_Port_Ip_Init(NUM_OF_CONFIGURED_PINS0, g_pin_mux_InitConfigArr0);
    Dma_Ip_Init(&Dma_Ip_xDmaInitPB);
    IntCtrl_Ip_Init(&IntCtrlConfig_0);
    IntCtrl_Ip_ConfigIrqRouting(&intRouteConfig);
    Siul2_Port_Ip_Init(NUM_OF_CONFIGURED_PINS0, g_pin_mux_InitConfigArr0);
	Lpspi_Ip_Init(&Lpspi_Ip_PhyUnitConfig_SpiPhyUnit_0_Instance_0_BOARD_InitPeripherals);
	Pit_Ip_Init(PIT_INST_0, &PIT_0_InitConfig_PB);
	Pit_Ip_InitChannel(PIT_INST_0, PIT_0_CH_0);
	Pit_Ip_EnableChannelInterrupt(PIT_INST_0, CH_0);
	Pit_Ip_StartChannel(PIT_INST_0, CH_0, PIT_PERIOD);


    for(;;)
    {
    	if(read_flag > 100)
    	{
    		Siul2_Dio_Ip_TogglePins(PTC_H_HALF, (1<<9U));
    		read_flag = 0;//读取结束
    	}

        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}

void CALL_BACK_PIT(uint8_t channel)
{
	read_flag++;//开始读取
}

/** @} */
