/**
 * @file BSP_HAL.h
 * @ingroup LOW_LEVEL_API
 *
 * @version 1.0.1
 * @date Apr 6, 2011
 * @author Stefano Oliveri
 * @note Module: Board Support Packacge (BSP)
 *
 * @brief It is part of <b>Board Support Package (BSP)</b> module. Board support package.
 *
 * @details This file provides the hardware definitions for the boards used.
 */

/*
 * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
 * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
 * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
 * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
 * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
 * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
 *
 * THIS SOURCE CODE IS PROTECTED BY A LICENSE.
 * FOR MORE INFORMATION PLEASE CAREFULLY READ THE LICENSE AGREEMENT FILE LOCATED
 * IN THE ROOT DIRECTORY OF THIS FIRMWARE PACKAGE.
 *
 * <h2><center>&copy; COPYRIGHT 2011 Stefano Oliveri</center></h2>
 */

#ifndef BSP_HAL_H_
#define BSP_HAL_H_

//#include "stm32f10x.h"
#include "stm32_eval.h"
#include "syserror.h"

// FMC peripheral mapping
//************************
#define FSMC_GPIO_RCC	(RCC_APB2Periph_GPIOD | RCC_APB2Periph_GPIOE | RCC_APB2Periph_GPIOF | RCC_APB2Periph_GPIOG)

#define FSMC_DATA0_GPIO_PORT	GPIOD
#define FSMC_DATA0_GPIO_PIN	GPIO_Pin_14

#define FSMC_DATA1_GPIO_PORT	GPIOD
#define FSMC_DATA1_GPIO_PIN	GPIO_Pin_15

#define FSMC_DATA2_GPIO_PORT	GPIOD
#define FSMC_DATA2_GPIO_PIN	GPIO_Pin_0

#define FSMC_DATA3_GPIO_PORT	GPIOD
#define FSMC_DATA3_GPIO_PIN	GPIO_Pin_1

#define FSMC_DATA4_GPIO_PORT	GPIOE
#define FSMC_DATA4_GPIO_PIN	GPIO_Pin_7

#define FSMC_DATA5_GPIO_PORT	GPIOE
#define FSMC_DATA5_GPIO_PIN	GPIO_Pin_8

#define FSMC_DATA6_GPIO_PORT	GPIOE
#define FSMC_DATA6_GPIO_PIN	GPIO_Pin_9

#define FSMC_DATA7_GPIO_PORT	GPIOE
#define FSMC_DATA7_GPIO_PIN	GPIO_Pin_10

#define FSMC_DATA8_GPIO_PORT	GPIOE
#define FSMC_DATA8_GPIO_PIN	GPIO_Pin_11

#define FSMC_DATA9_GPIO_PORT	GPIOE
#define FSMC_DATA9_GPIO_PIN	GPIO_Pin_12

#define FSMC_DATA10_GPIO_PORT	GPIOE
#define FSMC_DATA10_GPIO_PIN	GPIO_Pin_13

#define FSMC_DATA11_GPIO_PORT	GPIOE
#define FSMC_DATA11_GPIO_PIN	GPIO_Pin_14

#define FSMC_DATA12_GPIO_PORT	GPIOE
#define FSMC_DATA12_GPIO_PIN	GPIO_Pin_15

#define FSMC_DATA13_GPIO_PORT	GPIOD
#define FSMC_DATA13_GPIO_PIN	GPIO_Pin_8

#define FSMC_DATA14_GPIO_PORT	GPIOD
#define FSMC_DATA14_GPIO_PIN	GPIO_Pin_9

#define FSMC_DATA15_GPIO_PORT	GPIOD
#define FSMC_DATA15_GPIO_PIN	GPIO_Pin_10


#define FSMC_ADDR0_GPIO_PORT	GPIOF
#define FSMC_ADDR0_GPIO_PIN	GPIO_Pin_0

#define FSMC_ADDR1_GPIO_PORT	GPIOF
#define FSMC_ADDR1_GPIO_PIN	GPIO_Pin_1

#define FSMC_ADDR2_GPIO_PORT	GPIOF
#define FSMC_ADDR2_GPIO_PIN	GPIO_Pin_2

#define FSMC_ADDR3_GPIO_PORT	GPIOF
#define FSMC_ADDR3_GPIO_PIN	GPIO_Pin_3

#define FSMC_ADDR4_GPIO_PORT	GPIOF
#define FSMC_ADDR4_GPIO_PIN	GPIO_Pin_4

#define FSMC_ADDR5_GPIO_PORT	GPIOF
#define FSMC_ADDR5_GPIO_PIN	GPIO_Pin_5

#define FSMC_ADDR6_GPIO_PORT	GPIOF
#define FSMC_ADDR6_GPIO_PIN	GPIO_Pin_12

#define FSMC_ADDR7_GPIO_PORT	GPIOF
#define FSMC_ADDR7_GPIO_PIN	GPIO_Pin_13

#define FSMC_ADDR8_GPIO_PORT	GPIOF
#define FSMC_ADDR8_GPIO_PIN	GPIO_Pin_14

#define FSMC_ADDR9_GPIO_PORT	GPIOF
#define FSMC_ADDR9_GPIO_PIN	GPIO_Pin_15

#define FSMC_ADDR10_GPIO_PORT	GPIOG
#define FSMC_ADDR10_GPIO_PIN	GPIO_Pin_0

#define FSMC_ADDR11_GPIO_PORT	GPIOG
#define FSMC_ADDR11_GPIO_PIN	GPIO_Pin_1

#define FSMC_ADDR12_GPIO_PORT	GPIOG
#define FSMC_ADDR12_GPIO_PIN	GPIO_Pin_2

#define FSMC_ADDR13_GPIO_PORT	GPIOG
#define FSMC_ADDR13_GPIO_PIN	GPIO_Pin_3

#define FSMC_ADDR14_GPIO_PORT	GPIOG
#define FSMC_ADDR14_GPIO_PIN	GPIO_Pin_4

#define FSMC_ADDR15_GPIO_PORT	GPIOG
#define FSMC_ADDR15_GPIO_PIN	GPIO_Pin_5

#define FSMC_ADDR16_GPIO_PORT	GPIOD
#define FSMC_ADDR16_GPIO_PIN	GPIO_Pin_11

#define FSMC_ADDR17_GPIO_PORT	GPIOD
#define FSMC_ADDR17_GPIO_PIN	GPIO_Pin_12

#define FSMC_ADDR18_GPIO_PORT	GPIOD
#define FSMC_ADDR18_GPIO_PIN	GPIO_Pin_13

#define FSMC_ADDR19_GPIO_PORT	GPIOE
#define FSMC_ADDR19_GPIO_PIN	GPIO_Pin_3

#define FSMC_ADDR20_GPIO_PORT	GPIOE
#define FSMC_ADDR20_GPIO_PIN	GPIO_Pin_4

#define FSMC_ADDR21_GPIO_PORT	GPIOE
#define FSMC_ADDR21_GPIO_PIN	GPIO_Pin_5

#define FSMC_ADDR22_GPIO_PORT	GPIOE
#define FSMC_ADDR22_GPIO_PIN	GPIO_Pin_6

#define FSMC_ADDR23_GPIO_PORT	GPIOE
#define FSMC_ADDR23_GPIO_PIN	GPIO_Pin_2

//NOE
#define FSMC_NOE_GPIO_PORT	GPIOD
#define FSMC_NOE_GPIO_PIN	GPIO_Pin_4

//NWE
#define FSMC_NWE_GPIO_PORT	GPIOD
#define FSMC_NWE_GPIO_PIN	GPIO_Pin_5

//NE1
#define FSMC_NE1_GPIO_PORT	GPIOD
#define FSMC_NE1_GPIO_PIN	GPIO_Pin_7

//NE2
#define FSMC_NE2_GPIO_PORT	GPIOG
#define FSMC_NE2_GPIO_PIN	GPIO_Pin_9

//NE2
#define FSMC_NE3_GPIO_PORT	GPIOG
#define FSMC_NE3_GPIO_PIN	GPIO_Pin_10

//NWAIT
#define FSMC_NWAIT_GPIO_PORT	GPIOD
#define FSMC_NWAIT_GPIO_PIN	GPIO_Pin_6

//NBL0
#define FSMC_NBL0_GPIO_PORT	GPIOE
#define FSMC_NBL0_GPIO_PIN	GPIO_Pin_0

//NBL1
#define FSMC_NBL1_GPIO_PORT	GPIOE
#define FSMC_NBL1_GPIO_PIN	GPIO_Pin_1


#endif /* BSP_HAL_H_ */
