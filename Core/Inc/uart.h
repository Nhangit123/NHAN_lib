/*
 * uart.h
 *
 *  Created on: Mar 31, 2025
 *      Author: Nhan
 */

#ifndef INC_UART_H_
#define INC_UART_H_


// 1️⃣ UART Initialization
// Initializes a UART peripheral with specified parameters.
HAL_StatusTypeDef HAL_UART_Init(UART_HandleTypeDef *huart);

// 2️⃣ UART Deinitialization
// Deinitializes a UART peripheral and resets its state.
HAL_StatusTypeDef HAL_UART_DeInit(UART_HandleTypeDef *huart);

// 3️⃣ UART MSP Initialization
// Low-level hardware initialization for UART (clock, GPIO, etc.).
void HAL_UART_MspInit(UART_HandleTypeDef *huart);

// 4️⃣ UART MSP Deinitialization
// Low-level hardware deinitialization for UART.
void HAL_UART_MspDeInit(UART_HandleTypeDef *huart);

// 5️⃣ UART Transmit Data (Blocking Mode)
// Sends data via UART and waits for completion.
HAL_StatusTypeDef HAL_UART_Transmit(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint32_t Timeout);

// 6️⃣ UART Receive Data (Blocking Mode)
// Receives data via UART and waits for completion.
HAL_StatusTypeDef HAL_UART_Receive(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint32_t Timeout);

// 7️⃣ UART Transmit Data (Non-Blocking - Interrupt Mode)
// Sends data via UART using an interrupt.
HAL_StatusTypeDef HAL_UART_Transmit_IT(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);

// 8️⃣ UART Receive Data (Non-Blocking - Interrupt Mode)
// Receives data via UART using an interrupt.
HAL_StatusTypeDef HAL_UART_Receive_IT(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);

// 9️⃣ UART Transmit Data (Non-Blocking - DMA Mode)
// Sends data via UART using DMA.
HAL_StatusTypeDef HAL_UART_Transmit_DMA(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);

// 🔟 UART Receive Data (Non-Blocking - DMA Mode)
// Receives data via UART using DMA.
HAL_StatusTypeDef HAL_UART_Receive_DMA(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size);

// 1️⃣1️⃣ UART Abort Transmission
// Stops an ongoing UART transmission.
HAL_StatusTypeDef HAL_UART_Abort(UART_HandleTypeDef *huart);

// 1️⃣2️⃣ UART Abort Transmission (Interrupt Mode)
// Stops an ongoing UART transmission using an interrupt.
HAL_StatusTypeDef HAL_UART_Abort_IT(UART_HandleTypeDef *huart);

// 1️⃣3️⃣ UART Interrupt Handler
// Handles UART interrupts and calls appropriate callback functions.
void HAL_UART_IRQHandler(UART_HandleTypeDef *huart);

// 1️⃣4️⃣ UART Transmission Complete Callback
// Called automatically when UART transmission is complete (used in IT/DMA mode).
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart);

// 1️⃣5️⃣ UART Reception Complete Callback
// Called automatically when UART reception is complete (used in IT/DMA mode).
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);

// 1️⃣6️⃣ UART Transmission Half Complete Callback
// Called when half of the data is transmitted (used in DMA mode).
void HAL_UART_TxHalfCpltCallback(UART_HandleTypeDef *huart);

// 1️⃣7️⃣ UART Reception Half Complete Callback
// Called when half of the data is received (used in DMA mode).
void HAL_UART_RxHalfCpltCallback(UART_HandleTypeDef *huart);

// 1️⃣8️⃣ UART Error Callback
// Called when a UART error occurs (framing, noise, parity, etc.).
void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart);

// 1️⃣9️⃣ UART Abort Complete Callback
// Called when a UART abort operation is complete.
void HAL_UART_AbortCpltCallback(UART_HandleTypeDef *huart);

// 2️⃣0️⃣ UART Get Error Code
// Returns the UART error code.
uint32_t HAL_UART_GetError(UART_HandleTypeDef *huart);




#endif /* INC_UART_H_ */
