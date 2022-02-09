/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BUTTON_Pin GPIO_PIN_13
#define BUTTON_GPIO_Port GPIOC
#define Dip_2_Pin GPIO_PIN_2
#define Dip_2_GPIO_Port GPIOA
#define C_4_Pin GPIO_PIN_6
#define C_4_GPIO_Port GPIOA
#define DP_5_Pin GPIO_PIN_7
#define DP_5_GPIO_Port GPIOA
#define Dip_1_Pin GPIO_PIN_13
#define Dip_1_GPIO_Port GPIOB
#define B_6_Pin GPIO_PIN_14
#define B_6_GPIO_Port GPIOB
#define A_7_Pin GPIO_PIN_8
#define A_7_GPIO_Port GPIOA
#define D_2_Pin GPIO_PIN_9
#define D_2_GPIO_Port GPIOA
#define E_1_Pin GPIO_PIN_7
#define E_1_GPIO_Port GPIOC
#define Dip_3_Pin GPIO_PIN_8
#define Dip_3_GPIO_Port GPIOD
#define Dip_4_Pin GPIO_PIN_9
#define Dip_4_GPIO_Port GPIOD
#define F_9_Pin GPIO_PIN_4
#define F_9_GPIO_Port GPIOB
#define G_10_Pin GPIO_PIN_5
#define G_10_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
