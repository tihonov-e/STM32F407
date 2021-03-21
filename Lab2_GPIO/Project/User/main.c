/**
  ******************************************************************************
  * @file    main.c 
  * @author  Tikhonov E
  * @brief   Main program body
  *
  * @note    Лабораторная работа №2
  *          Мигаем светодиодами на плате Discovery KIT
  ******************************************************************************
*/

/* Includes ------------------------------------------------------------------*/

//CMSIS Cortex-M4 Device Peripheral Access Layer Header File.
#include "stm32f4xx.h" 


/* Private typedef -----------------------------------------------------------*/
//--Объявляем структуру для настройки GPIO
GPIO_InitTypeDef PORT_init_struct;

/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/
uint32_t i=0; //Для задердки

/* Private function prototypes -----------------------------------------------*/
void GPIO_init ();	//GPIO init and settings
void delay (int i);

int main (void) {
	
/*---Init---*/

//init all GPIO	
 GPIO_init ();

/*---End Init---*/

	


  /* Infinite loop */
    while(1)
	{

		//---Управление светодиодами---
	
		//--Включение
		GPIO_SetBits(GPIOD, GPIO_Pin_12);
		GPIO_SetBits(GPIOD, GPIO_Pin_13);
		GPIO_SetBits(GPIOD, GPIO_Pin_14);
		GPIO_SetBits(GPIOD, GPIO_Pin_15);
		
		//Задержка
		delay (3000000);
	
		//--Выключение
		GPIO_ResetBits(GPIOD, GPIO_Pin_12);
		GPIO_ResetBits(GPIOD, GPIO_Pin_13);
		GPIO_ResetBits(GPIOD, GPIO_Pin_14);
		GPIO_ResetBits(GPIOD, GPIO_Pin_15);

		//Задержка
		delay (3000000);
	
	
	}//--while(1)

}//--main
 
/**
* @brief  Функция настройки GPIO
*/
void GPIO_init (void)
{
	//настройка тактирования GPIO
	//PORTD
RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE); 

//--Настройка GPIO
	//GPIO12------------------------------------
	//Настройка
PORT_init_struct.GPIO_Pin = GPIO_Pin_12;
PORT_init_struct.GPIO_Mode = GPIO_Mode_OUT;
PORT_init_struct.GPIO_Speed = GPIO_Speed_2MHz;
PORT_init_struct.GPIO_OType = GPIO_OType_PP;
PORT_init_struct.GPIO_PuPd = GPIO_PuPd_NOPULL;
//--Запись настройки в МК
GPIO_Init(GPIOD, &PORT_init_struct);
//---------------------------------------------
	
	//GPIO13------------------------------------
PORT_init_struct.GPIO_Pin = GPIO_Pin_13;
	//--Запись настройки в МК
GPIO_Init(GPIOD, &PORT_init_struct);
//---------------------------------------------

	//GPIO14-----------------------------------
PORT_init_struct.GPIO_Pin = GPIO_Pin_14;
	//--Запись настройки в МК
GPIO_Init(GPIOD, &PORT_init_struct);
//---------------------------------------------

	//GPIO15-----------------------------------
PORT_init_struct.GPIO_Pin = GPIO_Pin_15;
	//--Запись настройки в МК
GPIO_Init(GPIOD, &PORT_init_struct);
//---------------------------------------------
}; //end GPIO_init




	/**
	* @brief  задержка
	* @note    i в попугаях
*/
void delay (int i)
{
	int t=0;
	for (t=0;t<i;t++) {}
};
	
 
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
	