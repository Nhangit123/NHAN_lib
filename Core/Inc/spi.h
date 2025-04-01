/*
 * spi.h
 *
 *  Created on: Mar 31, 2025
 *      Author: Nhan
 */

#ifndef INC_SPI_H_
#define INC_SPI_H_

// 8️⃣ SPI Initialization
// Initializes an SPI peripheral with specified parameters.
HAL_StatusTypeDef HAL_SPI_Init(SPI_HandleTypeDef *hspi);

// 9️⃣ SPI Transmit Data (Blocking Mode)
// Sends data via SPI and waits for completion.
HAL_StatusTypeDef HAL_SPI_Transmit(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size, uint32_t Timeout);

// 🔟 SPI Receive Data (Blocking Mode)
// Receives data via SPI and waits for completion.
HAL_StatusTypeDef HAL_SPI_Receive(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size, uint32_t Timeout);

// 1️⃣1️⃣ SPI Transmit Data (Non-Blocking - Interrupt Mode)
// Sends data via SPI using an interrupt.
HAL_StatusTypeDef HAL_SPI_Transmit_IT(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);

// 1️⃣2️⃣ SPI Receive Data (Non-Blocking - Interrupt Mode)
// Receives data via SPI using an interrupt.
HAL_StatusTypeDef HAL_SPI_Receive_IT(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);

// 1️⃣3️⃣ SPI Transmit Data (Non-Blocking - DMA Mode)
// Sends data via SPI using DMA.
HAL_StatusTypeDef HAL_SPI_Transmit_DMA(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);

// 1️⃣4️⃣ SPI Receive Data (Non-Blocking - DMA Mode)
// Receives data via SPI using DMA.
HAL_StatusTypeDef HAL_SPI_Receive_DMA(SPI_HandleTypeDef *hspi, uint8_t *pData, uint16_t Size);

#endif /* INC_SPI_H_ */
