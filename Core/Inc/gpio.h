/*
 * gpio.h
 *
 *  Created on: Mar 31, 2025
 *      Author: Nhan
 */

#ifndef INC_GPIO_H_
#define INC_GPIO_H_

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
