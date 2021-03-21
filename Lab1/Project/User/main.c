/**
  ******************************************************************************
  * @file    main.c 
  * @author  Tikhonov E
  * @brief   Main program body
  *
  * @note    Лабораторная работа №1
  *          Настройка тактовой частоты МК
  ******************************************************************************
*/

/* Includes ------------------------------------------------------------------*/

//CMSIS Cortex-M4 Device Peripheral Access Layer Header File.
#include "stm32f4xx.h"

int main () {
    while(1){}
 }
 
 
 
 /* MCU Configuration ------------------------------------------------------------------*/

 /**
  * @brief  The target STM32 device (stm32f4xx.h)
  *					STM32F40_41xxx          
 */
 
 /**
  * @brief  System Clock Configuration (system_stm32f4xx.c)
  *         The system Clock is configured as follow : 
  *            System Clock source            = PLL (HSE)
  *            SYSCLK(Hz)                     = 168000000
  *            HCLK(Hz)                       = 168000000
  *            AHB Prescaler                  = 1
  *            APB1 Prescaler                 = 4
  *            APB2 Prescaler                 = 2
  *            HSE Frequency(Hz)              = 8000000
  *            PLL_M                          = 8
  *            PLL_N                          = 336
  *            PLL_P                          = 2
  *            PLL_Q                          = 7
  *            VDD(V)                         = 3.3
  *            Main regulator output voltage  = Scale1 mode
  *            Flash Latency(WS)              = 5
  * @param  None
  * @retval None
  */
