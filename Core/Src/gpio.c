/*
 * gpio.h
 *
 *  Created on: Mar 31, 2025
 *      Author: Nhan
 */
#include "gpio.h"


/*to access to struct use pointer gpiox
	this function principle working
	-config register low - input mode
						 - output mode - choose what output
						 	 	 	   - choose what speed
	-config refister high - input mode
						  - output mode - choose what output
						 	 	 	    - choose what speed
 */
void NHAN_GPIO_Init(GPIO_InitTypeDef *gpio_init_struct,GPIO_TypeDef *gpiox)
{
	if(gpio_init_struct->Pin <= 7) //use config register low(0-7)
	{
		if(gpio_init_struct->Speed != -1) //input mode => speed will not be use
		{
			switch(gpio_init_struct->Mode)
			{
			case GPIO_INPUT_ANALOG_MODE:
				gpiox->CRL &= ~(0b0000<<(gpio_init_struct->Pin*4)); //reset bit to 0
				gpiox->CRL |= (GPIO_INPUT_ANALOG_MODE<<(gpio_init_struct->Pin*4));
				break;
			case GPIO_FLOATING_INPUT_MODE:
				gpiox->CRL &= ~(0b0000<<(gpio_init_struct->Pin*4)); //reset bit to 0
				gpiox->CRL |= (GPIO_FLOATING_INPUT_MODE<<(gpio_init_struct->Pin*4));
				break;
			case GPIO_INPUT_PULL_UP_PULL_DOWN:
				gpiox->CRL &= ~(0b0000<<(gpio_init_struct->Pin*4)); //reset bit to 0
				gpiox->CRL |= (GPIO_INPUT_PULL_UP_PULL_DOWN<<(gpio_init_struct->Pin*4));
				break;
			default:
			}
		}
		else	//output and speed will be use
		{

			//choose what output
			switch(gpio_init_struct->Mode)
			{
			case GPIO_OUTPUT_PUSH_PULL:
				gpiox->CRL &= ~(0b00<<(gpio_init_struct->Pin*4)); //reset bits to 0
				gpiox->CRL |= (GPIO_OUTPUT_PUSH_PULL<<(gpio_init_struct->Pin*4));
				break;
			case GPIO_OUTPUT_OPEN_DRAIN:
				gpiox->CRL &= ~(0b00<<(gpio_init_struct->Pin*4)); //reset bits to 0
				gpiox->CRL |= (GPIO_OUTPUT_OPEN_DRAIN<<(gpio_init_struct->Pin*4));
				break;
			case GPIO_ALTERNATE_FUNCTION_OUTPUT_PUSH_PULL:
				gpiox->CRL &= ~(0b00<<(gpio_init_struct->Pin*4)); //reset bits to 0
				gpiox->CRL |= (GPIO_ALTERNATE_FUNCTION_OUTPUT_PUSH_PULL<<(gpio_init_struct->Pin*4));
				break;
			case GPIO_ALTERNATE_FUNCTION_OUTPUT_OPEN_DRAIN:
				gpiox->CRL &= ~(0b00<<(gpio_init_struct->Pin*4)); //reset bits to 0
				gpiox->CRL |= (GPIO_ALTERNATE_FUNCTION_OUTPUT_OPEN_DRAIN<<(gpio_init_struct->Pin*4));
				break;
			default:
			}

			//choose what speed
			switch(gpio_init_struct->Speed)
			{
			case GPIO_OUTPUT_SPEED_10MHZ:
				gpiox->CRL &= ~(0b00<<(gpio_init_struct->Pin*4-2)); //reset bits to 0
				gpiox->CRL |= (GPIO_OUTPUT_SPEED_10MHZ<<(gpio_init_struct->Pin*4-2));
				break;
			case GPIO_OUTPUT_SPEED_2MHZ:
				gpiox->CRL &= ~(0b00<<(gpio_init_struct->Pin*4-2)); //reset bits to 0
				gpiox->CRL |= (GPIO_OUTPUT_SPEED_2MHZ<<(gpio_init_struct->Pin*4-2));
				break;
			case GPIO_OUTPUT_SPEED_50MHZ:
				gpiox->CRL &= ~(0b00<<(gpio_init_struct->Pin*4-2)); //reset bits to 0
				gpiox->CRL |= (GPIO_OUTPUT_SPEED_50MHZ<<(gpio_init_struct->Pin*4-2));
				break;
			default:
			}
		}
	}

	else	//use config high register
	{
		if(gpio_init_struct->Speed != -1) //input mode => speed will not be used
		{
		    switch(gpio_init_struct->Mode)
		    {
		    case GPIO_INPUT_ANALOG_MODE:
		        gpiox->CRH &= ~(0b0000<<(gpio_init_struct->Pin*4)); //reset bit to 0
		        gpiox->CRH |= (GPIO_INPUT_ANALOG_MODE<<(gpio_init_struct->Pin*4));
		        break;
		    case GPIO_FLOATING_INPUT_MODE:
		        gpiox->CRH &= ~(0b0000<<(gpio_init_struct->Pin*4)); //reset bit to 0
		        gpiox->CRH |= (GPIO_FLOATING_INPUT_MODE<<(gpio_init_struct->Pin*4));
		        break;
		    case GPIO_INPUT_PULL_UP_PULL_DOWN:
		        gpiox->CRH &= ~(0b0000<<(gpio_init_struct->Pin*4)); //reset bit to 0
		        gpiox->CRH |= (GPIO_INPUT_PULL_UP_PULL_DOWN<<(gpio_init_struct->Pin*4));
		        break;
		    default:
		    }
		}
		else //output and speed will be used
		{
		    //choose what output
		    switch(gpio_init_struct->Mode)
		    {
		    case GPIO_OUTPUT_PUSH_PULL:
		        gpiox->CRH &= ~(0b00<<(gpio_init_struct->Pin*4)); //reset bits to 0
		        gpiox->CRH |= (GPIO_OUTPUT_PUSH_PULL<<(gpio_init_struct->Pin*4));
		        break;
		    case GPIO_OUTPUT_OPEN_DRAIN:
		        gpiox->CRH &= ~(0b00<<(gpio_init_struct->Pin*4)); //reset bits to 0
		        gpiox->CRH |= (GPIO_OUTPUT_OPEN_DRAIN<<(gpio_init_struct->Pin*4));
		        break;
		    case GPIO_ALTERNATE_FUNCTION_OUTPUT_PUSH_PULL:
		        gpiox->CRH &= ~(0b00<<(gpio_init_struct->Pin*4)); //reset bits to 0
		        gpiox->CRH |= (GPIO_ALTERNATE_FUNCTION_OUTPUT_PUSH_PULL<<(gpio_init_struct->Pin*4));
		        break;
		    case GPIO_ALTERNATE_FUNCTION_OUTPUT_OPEN_DRAIN:
		        gpiox->CRH &= ~(0b00<<(gpio_init_struct->Pin*4)); //reset bits to 0
		        gpiox->CRH |= (GPIO_ALTERNATE_FUNCTION_OUTPUT_OPEN_DRAIN<<(gpio_init_struct->Pin*4));
		        break;
		    default:
		    }

		    //choose what speed
		    switch(gpio_init_struct->Speed)
		    {
		    case GPIO_OUTPUT_SPEED_10MHZ:
		        gpiox->CRH &= ~(0b00<<(gpio_init_struct->Pin*4-2)); //reset bits to 0
		        gpiox->CRH |= (GPIO_OUTPUT_SPEED_10MHZ<<(gpio_init_struct->Pin*4-2));
		        break;
		    case GPIO_OUTPUT_SPEED_2MHZ:
		        gpiox->CRH &= ~(0b00<<(gpio_init_struct->Pin*4-2)); //reset bits to 0
		        gpiox->CRH |= (GPIO_OUTPUT_SPEED_2MHZ<<(gpio_init_struct->Pin*4-2));
		        break;
		    case GPIO_OUTPUT_SPEED_50MHZ:
		        gpiox->CRH &= ~(0b00<<(gpio_init_struct->Pin*4-2)); //reset bits to 0
		        gpiox->CRH |= (GPIO_OUTPUT_SPEED_50MHZ<<(gpio_init_struct->Pin*4-2));
		        break;
		    default:
		    }
		}
	}
}




void NHAN_GPIO_Write(GPIO_TypeDef *gpiox, uint16_t GPIO_Pin, GPIO_Pin_State PinState)
{
	if(PinState == SET)//set mode
	{
		gpiox->BSRR |= (1<<GPIO_Pin);
	}
	else//reset mode
	{
		gpiox->BSRR &= ~( 1 << (GPIO_Pin+16) );
	}
}

