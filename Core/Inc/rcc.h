/*
 * rcc.h
 *
 *  Created on: Mar 31, 2025
 *      Author: Nhan
 */

#ifndef INC_RCC_H_
#define INC_RCC_H_

// 1️⃣ RCC System Clock Configuration
// Configures the system clock and initializes the RCC.
HAL_StatusTypeDef HAL_RCC_ClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t FLatency);

// 2️⃣ RCC Oscillator Configuration
// Configures the oscillators used by the system.
HAL_StatusTypeDef HAL_RCC_OscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct);

// 3️⃣ RCC Peripheral Clock Enable
// Enables the clock for a specific peripheral.
void __HAL_RCC_GPIOA_CLK_ENABLE(void);
void __HAL_RCC_I2C1_CLK_ENABLE(void);
void __HAL_RCC_TIM2_CLK_ENABLE(void);

// 4️⃣ RCC Peripheral Clock Disable
// Disables the clock for a specific peripheral.
void __HAL_RCC_GPIOA_CLK_DISABLE(void);
void __HAL_RCC_I2C1_CLK_DISABLE(void);
void __HAL_RCC_TIM2_CLK_DISABLE(void);

#endif /* INC_RCC_H_ */
