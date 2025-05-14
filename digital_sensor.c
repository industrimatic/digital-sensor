#include "digital_sensor.h"

void Hongwai_Sensor_Init(void)
{	
	GPIO_InitTypeDef  GPIO_InitStructure;

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
 
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3; //传感器对应引脚PA1
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(GPIOA, &GPIO_InitStructure);	 
} 
