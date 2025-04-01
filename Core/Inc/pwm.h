/*
 * pwm.h
 *
 *  Created on: Mar 31, 2025
 *      Author: Nhan
 */

#ifndef INC_PWM_H_
#define INC_PWM_H_

// 5️⃣ PWM Initialization
// Configures a timer for PWM generation.
HAL_StatusTypeDef HAL_TIM_PWM_Init(TIM_HandleTypeDef *htim);

// 6️⃣ PWM Start
// Starts PWM signal generation on a specific channel.
HAL_StatusTypeDef HAL_TIM_PWM_Start(TIM_HandleTypeDef *htim, uint32_t Channel);

// 7️⃣ PWM Stop
// Stops PWM signal generation on a specific channel.
HAL_StatusTypeDef HAL_TIM_PWM_Stop(TIM_HandleTypeDef *htim, uint32_t Channel);

#endif /* INC_PWM_H_ */
