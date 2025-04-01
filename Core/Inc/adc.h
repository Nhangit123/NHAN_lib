/*
 * adc.h
 *
 *  Created on: Mar 31, 2025
 *      Author: Nhan
 */

#ifndef INC_ADC_H_
#define INC_ADC_H_

// 1️⃣8️⃣ ADC Initialization
// Initializes an ADC peripheral with specified parameters.
HAL_StatusTypeDef HAL_ADC_Init(ADC_HandleTypeDef *hadc);

// 1️⃣9️⃣ ADC Start Conversion (Blocking Mode)
// Starts an ADC conversion and waits for completion.
HAL_StatusTypeDef HAL_ADC_PollForConversion(ADC_HandleTypeDef *hadc, uint32_t Timeout);

// 2️⃣0️⃣ ADC Start Conversion (Non-Blocking - Interrupt Mode)
// Starts an ADC conversion using an interrupt.
HAL_StatusTypeDef HAL_ADC_Start_IT(ADC_HandleTypeDef *hadc);

// 2️⃣1️⃣ ADC Get Converted Value
// Retrieves the last ADC conversion result.
uint32_t HAL_ADC_GetValue(ADC_HandleTypeDef *hadc);

// 2️⃣2️⃣ ADC Stop Conversion
// Stops an ongoing ADC conversion.
HAL_StatusTypeDef HAL_ADC_Stop(ADC_HandleTypeDef *hadc);

// 2️⃣3️⃣ ADC Error Callback
// Called when an ADC error occurs.
void HAL_ADC_ErrorCallback(ADC_HandleTypeDef *hadc);

#endif /* INC_ADC_H_ */
