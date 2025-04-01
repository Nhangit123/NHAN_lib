/*
 * gpio.h
 *
 *  Created on: Mar 31, 2025
 *      Author: Nhan
 */
#include "gpio.h"

GPIO_InitTypeDef gpio_init_struct;
GPIO_TypeDef gpiox
gpio_init_struct.Mode = GPIO_OUTPUT_PUSH_PULL;
gpio_init_struct.Pin  =	1;
gpio_init_struct.Speed = GPIO_OUTPUT_SPEED_10MHZ;
gpio_init_struct.Alternate

void gpio_init(GPIO_InitTypeDef *gpio_init_struct,GPIO_TypeDef *gpiox)
{
	if(gpio_init_struct->Pin <= 7) //use register low(0-7)
	{

	}
	else	//use high register
	{

	}
}

