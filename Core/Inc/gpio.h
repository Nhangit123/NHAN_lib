/*
 * gpio.h
 *
 *  Created on: Mar 31, 2025
 *      Author: Nhan
 */

#ifndef INC_GPIO_H_
#define INC_GPIO_H_

#include "stdio.h"
#include "stdint.h"

//define base register address of GPIOx(from A to G)
#define GPIOA_BASE_ADDR 0x40010800
#define GPIOB_BASE_ADDR 0x40010C00
#define GPIOC_BASE_ADDR 0x40011000
#define GPIOD_BASE_ADDR 0x40011400
#define GPIOE_BASE_ADDR 0x40011800

//define gpio mode
#define GPIO_INPUT_ANALOG_MODE 0b0000;
#define GPIO_FLOATING_INPUT_MODE 0b0100;
#define GPIO_INPUT_PULL_UP_PULL_DOWN 0b1000;
#define GPIO_OUTPUT_PUSH_PULL 0b0000;
#define GPIO_OUTPUT_OPEN-DRAIN 0b01;
#define GPIO_ALTERNATE_FUNCTION_OUTPUT_PUSH_PULL 0b10;
#define GPIO_ALTERNATE_FUNCTION_OUTPUT_OPEN-DRAIN 0b11;
#define GPIO_OUTPUT_SPEED_10MHZ 0b01;
#define GPIO_OUTPUT_SPEED_2MHZ 0b10;
#define GPIO_OUTPUT_SPEED_50MHZ 0b11;



typedef struct {
	uint32_t CRL;	//offset 0x00	configuration low
	uint32_t CRH;	//offset 0x04	configuration high
	uint32_t IDR;	//offset 0x08	input data register
	uint32_t ODR;	//offset 0x0C	output data register
	uint32_t BSRR;	//offset 0x10	bit set/reset register
	uint32_t BRR;	//offset 0x14	bit reset register
	uint32_t LCKR;	//offset 0x18	configuration lock register
}GPIO_TypeDef;

//page 172 reference manual
typedef struct
{
  uint32_t Pin;       // which pin (0-15)
  uint32_t Mode;      // choose gpio mode
  uint32_t Speed;     // speed for output
  uint32_t Alternate; // alternate function
}GPIO_InitTypeDef;


#define GPIOA ((GPIO_TypeDef *) GPIOA_BASE_ADDR)
#define GPIOB ((GPIO_TypeDef *) GPIOB_BASE_ADDR)
#define GPIOC ((GPIO_TypeDef *) GPIOC_BASE_ADDR)
#define GPIOD ((GPIO_TypeDef *) GPIOD_BASE_ADDR)
#define GPIOE ((GPIO_TypeDef *) GPIOE_BASE_ADDR)


// 1️⃣ GPIO Initialization
// Configures a GPIO pin as input, output, or alternate function.
void GPIO_Init(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, uint32_t Mode, uint32_t Pull, uint32_t Speed);

// 2️⃣ Write to GPIO (Set/Reset a Pin)
// Sets or clears a GPIO pin (High/Low).
void GPIO_Write(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState);

// 3️⃣ Read GPIO Pin State
// Reads the current state of a GPIO pin (High or Low).
GPIO_PinState GPIO_Read(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);

// 4️⃣ Toggle GPIO Pin
// Changes the state of a GPIO pin from High → Low or Low → High.
void GPIO_Toggle(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);

// 5️⃣ Configure External Interrupt on GPIO
// Configures a GPIO pin to trigger an interrupt on rising, falling, or both edges.
void GPIO_Config_Interrupt(uint16_t GPIO_Pin, uint32_t Trigger);

// 6️⃣ Interrupt Callback Function
// Called automatically when a GPIO interrupt occurs.
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);



#endif /* INC_GPIO_H_ */
