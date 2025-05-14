#include "delay.h" 
#include "usart.h"
#include "digital_sensor.h"

int main(void)
{
	u8 flag;
	delay_init(168);
	uart_init(115200);
	Hongwai_Sensor_Init();
	while(1)
	{	
		delay_ms(1000);
		flag = GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_3);
		printf("flag:%d\n", flag);
	}
}
