/*
 * timer.h
 *
 *  Created on: Mar 31, 2025
 *      Author: Nhan
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

// 1️⃣5️⃣ Timer Base Initialization
// Initializes a timer for general-purpose use.
HAL_StatusTypeDef HAL_TIM_Base_Init(TIM_HandleTypeDef *htim);

// 1️⃣6️⃣ Timer Start
// Starts the timer.
HAL_StatusTypeDef HAL_TIM_Base_Start(TIM_HandleTypeDef *htim);

// 1️⃣7️⃣ Timer Stop
// Stops the timer.
HAL_StatusTypeDef HAL_TIM_Base_Stop(TIM_HandleTypeDef *htim);

#endif /* INC_TIMER_H_ */
