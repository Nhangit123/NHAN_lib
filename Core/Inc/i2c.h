/*
 * i2c.h
 *
 *  Created on: Mar 31, 2025
 *      Author: Nhan
 */

#ifndef INC_I2C_H_
#define INC_I2C_H_

// 1️⃣ I2C Initialization
// Initializes an I2C peripheral with specified parameters.
HAL_StatusTypeDef HAL_I2C_Init(I2C_HandleTypeDef *hi2c);

// 2️⃣ I2C Transmit Data (Blocking Mode)
// Sends data via I2C and waits for completion.
HAL_StatusTypeDef HAL_I2C_Master_Transmit(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t Timeout);

// 3️⃣ I2C Receive Data (Blocking Mode)
// Receives data via I2C and waits for completion.
HAL_StatusTypeDef HAL_I2C_Master_Receive(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size, uint32_t Timeout);

// 4️⃣ I2C Transmit Data (Non-Blocking - Interrupt Mode)
// Sends data via I2C using an interrupt.
HAL_StatusTypeDef HAL_I2C_Master_Transmit_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);

// 5️⃣ I2C Receive Data (Non-Blocking - Interrupt Mode)
// Receives data via I2C using an interrupt.
HAL_StatusTypeDef HAL_I2C_Master_Receive_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);

// 6️⃣ I2C Transmit Data (Non-Blocking - DMA Mode)
// Sends data via I2C using DMA.
HAL_StatusTypeDef HAL_I2C_Master_Transmit_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);

// 7️⃣ I2C Receive Data (Non-Blocking - DMA Mode)
// Receives data via I2C using DMA.
HAL_StatusTypeDef HAL_I2C_Master_Receive_DMA(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size);

// 8️⃣ I2C Abort Transmission
// Stops an ongoing I2C transmission.
HAL_StatusTypeDef HAL_I2C_Master_Abort_IT(I2C_HandleTypeDef *hi2c, uint16_t DevAddress);

// 9️⃣ I2C Interrupt Handler
// Handles I2C interrupts and calls appropriate callback functions.
void HAL_I2C_IRQHandler(I2C_HandleTypeDef *hi2c);

// 🔟 I2C Transmission Complete Callback
// Called automatically when I2C transmission is complete (used in IT/DMA mode).
void HAL_I2C_MasterTxCpltCallback(I2C_HandleTypeDef *hi2c);

// 1️⃣1️⃣ I2C Reception Complete Callback
// Called automatically when I2C reception is complete (used in IT/DMA mode).
void HAL_I2C_MasterRxCpltCallback(I2C_HandleTypeDef *hi2c);

// 1️⃣2️⃣ I2C Error Callback
// Called when an I2C error occurs (bus error, arbitration lost, etc.).
void HAL_I2C_ErrorCallback(I2C_HandleTypeDef *hi2c);


#endif /* INC_I2C_H_ */
