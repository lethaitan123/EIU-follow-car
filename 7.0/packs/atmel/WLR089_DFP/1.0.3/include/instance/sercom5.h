/**
 * \brief Instance description for SERCOM5
 *
 * Copyright (c) 2020 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2020-08-03T15:54:56Z */
#ifndef _WLR089_SERCOM5_INSTANCE_H_
#define _WLR089_SERCOM5_INSTANCE_H_

/* ========== Register definition for SERCOM5 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_SERCOM5_I2CM_CTRLA  (0x43000400) /**< (SERCOM5) I2CM Control A */
#define REG_SERCOM5_I2CM_CTRLB  (0x43000404) /**< (SERCOM5) I2CM Control B */
#define REG_SERCOM5_I2CM_BAUD   (0x4300040C) /**< (SERCOM5) I2CM Baud Rate */
#define REG_SERCOM5_I2CM_INTENCLR (0x43000414) /**< (SERCOM5) I2CM Interrupt Enable Clear */
#define REG_SERCOM5_I2CM_INTENSET (0x43000416) /**< (SERCOM5) I2CM Interrupt Enable Set */
#define REG_SERCOM5_I2CM_INTFLAG (0x43000418) /**< (SERCOM5) I2CM Interrupt Flag Status and Clear */
#define REG_SERCOM5_I2CM_STATUS (0x4300041A) /**< (SERCOM5) I2CM Status */
#define REG_SERCOM5_I2CM_SYNCBUSY (0x4300041C) /**< (SERCOM5) I2CM Synchronization Busy */
#define REG_SERCOM5_I2CM_ADDR   (0x43000424) /**< (SERCOM5) I2CM Address */
#define REG_SERCOM5_I2CM_DATA   (0x43000428) /**< (SERCOM5) I2CM Data */
#define REG_SERCOM5_I2CM_DBGCTRL (0x43000430) /**< (SERCOM5) I2CM Debug Control */
#define REG_SERCOM5_I2CS_CTRLA  (0x43000400) /**< (SERCOM5) I2CS Control A */
#define REG_SERCOM5_I2CS_CTRLB  (0x43000404) /**< (SERCOM5) I2CS Control B */
#define REG_SERCOM5_I2CS_INTENCLR (0x43000414) /**< (SERCOM5) I2CS Interrupt Enable Clear */
#define REG_SERCOM5_I2CS_INTENSET (0x43000416) /**< (SERCOM5) I2CS Interrupt Enable Set */
#define REG_SERCOM5_I2CS_INTFLAG (0x43000418) /**< (SERCOM5) I2CS Interrupt Flag Status and Clear */
#define REG_SERCOM5_I2CS_STATUS (0x4300041A) /**< (SERCOM5) I2CS Status */
#define REG_SERCOM5_I2CS_SYNCBUSY (0x4300041C) /**< (SERCOM5) I2CS Synchronization Busy */
#define REG_SERCOM5_I2CS_ADDR   (0x43000424) /**< (SERCOM5) I2CS Address */
#define REG_SERCOM5_I2CS_DATA   (0x43000428) /**< (SERCOM5) I2CS Data */
#define REG_SERCOM5_SPIS_CTRLA  (0x43000400) /**< (SERCOM5) SPIS Control A */
#define REG_SERCOM5_SPIS_CTRLB  (0x43000404) /**< (SERCOM5) SPIS Control B */
#define REG_SERCOM5_SPIS_BAUD   (0x4300040C) /**< (SERCOM5) SPIS Baud Rate */
#define REG_SERCOM5_SPIS_INTENCLR (0x43000414) /**< (SERCOM5) SPIS Interrupt Enable Clear */
#define REG_SERCOM5_SPIS_INTENSET (0x43000416) /**< (SERCOM5) SPIS Interrupt Enable Set */
#define REG_SERCOM5_SPIS_INTFLAG (0x43000418) /**< (SERCOM5) SPIS Interrupt Flag Status and Clear */
#define REG_SERCOM5_SPIS_STATUS (0x4300041A) /**< (SERCOM5) SPIS Status */
#define REG_SERCOM5_SPIS_SYNCBUSY (0x4300041C) /**< (SERCOM5) SPIS Synchronization Busy */
#define REG_SERCOM5_SPIS_ADDR   (0x43000424) /**< (SERCOM5) SPIS Address */
#define REG_SERCOM5_SPIS_DATA   (0x43000428) /**< (SERCOM5) SPIS Data */
#define REG_SERCOM5_SPIS_DBGCTRL (0x43000430) /**< (SERCOM5) SPIS Debug Control */
#define REG_SERCOM5_SPIM_CTRLA  (0x43000400) /**< (SERCOM5) SPIM Control A */
#define REG_SERCOM5_SPIM_CTRLB  (0x43000404) /**< (SERCOM5) SPIM Control B */
#define REG_SERCOM5_SPIM_BAUD   (0x4300040C) /**< (SERCOM5) SPIM Baud Rate */
#define REG_SERCOM5_SPIM_INTENCLR (0x43000414) /**< (SERCOM5) SPIM Interrupt Enable Clear */
#define REG_SERCOM5_SPIM_INTENSET (0x43000416) /**< (SERCOM5) SPIM Interrupt Enable Set */
#define REG_SERCOM5_SPIM_INTFLAG (0x43000418) /**< (SERCOM5) SPIM Interrupt Flag Status and Clear */
#define REG_SERCOM5_SPIM_STATUS (0x4300041A) /**< (SERCOM5) SPIM Status */
#define REG_SERCOM5_SPIM_SYNCBUSY (0x4300041C) /**< (SERCOM5) SPIM Synchronization Busy */
#define REG_SERCOM5_SPIM_ADDR   (0x43000424) /**< (SERCOM5) SPIM Address */
#define REG_SERCOM5_SPIM_DATA   (0x43000428) /**< (SERCOM5) SPIM Data */
#define REG_SERCOM5_SPIM_DBGCTRL (0x43000430) /**< (SERCOM5) SPIM Debug Control */
#define REG_SERCOM5_USART_EXT_CTRLA (0x43000400) /**< (SERCOM5) USART_EXT Control A */
#define REG_SERCOM5_USART_EXT_CTRLB (0x43000404) /**< (SERCOM5) USART_EXT Control B */
#define REG_SERCOM5_USART_EXT_BAUD (0x4300040C) /**< (SERCOM5) USART_EXT Baud Rate */
#define REG_SERCOM5_USART_EXT_RXPL (0x4300040E) /**< (SERCOM5) USART_EXT Receive Pulse Length */
#define REG_SERCOM5_USART_EXT_INTENCLR (0x43000414) /**< (SERCOM5) USART_EXT Interrupt Enable Clear */
#define REG_SERCOM5_USART_EXT_INTENSET (0x43000416) /**< (SERCOM5) USART_EXT Interrupt Enable Set */
#define REG_SERCOM5_USART_EXT_INTFLAG (0x43000418) /**< (SERCOM5) USART_EXT Interrupt Flag Status and Clear */
#define REG_SERCOM5_USART_EXT_STATUS (0x4300041A) /**< (SERCOM5) USART_EXT Status */
#define REG_SERCOM5_USART_EXT_SYNCBUSY (0x4300041C) /**< (SERCOM5) USART_EXT Synchronization Busy */
#define REG_SERCOM5_USART_EXT_DATA (0x43000428) /**< (SERCOM5) USART_EXT Data */
#define REG_SERCOM5_USART_EXT_DBGCTRL (0x43000430) /**< (SERCOM5) USART_EXT Debug Control */
#define REG_SERCOM5_USART_INT_CTRLA (0x43000400) /**< (SERCOM5) USART_INT Control A */
#define REG_SERCOM5_USART_INT_CTRLB (0x43000404) /**< (SERCOM5) USART_INT Control B */
#define REG_SERCOM5_USART_INT_BAUD (0x4300040C) /**< (SERCOM5) USART_INT Baud Rate */
#define REG_SERCOM5_USART_INT_RXPL (0x4300040E) /**< (SERCOM5) USART_INT Receive Pulse Length */
#define REG_SERCOM5_USART_INT_INTENCLR (0x43000414) /**< (SERCOM5) USART_INT Interrupt Enable Clear */
#define REG_SERCOM5_USART_INT_INTENSET (0x43000416) /**< (SERCOM5) USART_INT Interrupt Enable Set */
#define REG_SERCOM5_USART_INT_INTFLAG (0x43000418) /**< (SERCOM5) USART_INT Interrupt Flag Status and Clear */
#define REG_SERCOM5_USART_INT_STATUS (0x4300041A) /**< (SERCOM5) USART_INT Status */
#define REG_SERCOM5_USART_INT_SYNCBUSY (0x4300041C) /**< (SERCOM5) USART_INT Synchronization Busy */
#define REG_SERCOM5_USART_INT_DATA (0x43000428) /**< (SERCOM5) USART_INT Data */
#define REG_SERCOM5_USART_INT_DBGCTRL (0x43000430) /**< (SERCOM5) USART_INT Debug Control */

#else

#define REG_SERCOM5_I2CM_CTRLA  (*(__IO uint32_t*)0x43000400U) /**< (SERCOM5) I2CM Control A */
#define REG_SERCOM5_I2CM_CTRLB  (*(__IO uint32_t*)0x43000404U) /**< (SERCOM5) I2CM Control B */
#define REG_SERCOM5_I2CM_BAUD   (*(__IO uint32_t*)0x4300040CU) /**< (SERCOM5) I2CM Baud Rate */
#define REG_SERCOM5_I2CM_INTENCLR (*(__IO uint8_t*)0x43000414U) /**< (SERCOM5) I2CM Interrupt Enable Clear */
#define REG_SERCOM5_I2CM_INTENSET (*(__IO uint8_t*)0x43000416U) /**< (SERCOM5) I2CM Interrupt Enable Set */
#define REG_SERCOM5_I2CM_INTFLAG (*(__IO uint8_t*)0x43000418U) /**< (SERCOM5) I2CM Interrupt Flag Status and Clear */
#define REG_SERCOM5_I2CM_STATUS (*(__IO uint16_t*)0x4300041AU) /**< (SERCOM5) I2CM Status */
#define REG_SERCOM5_I2CM_SYNCBUSY (*(__I  uint32_t*)0x4300041CU) /**< (SERCOM5) I2CM Synchronization Busy */
#define REG_SERCOM5_I2CM_ADDR   (*(__IO uint32_t*)0x43000424U) /**< (SERCOM5) I2CM Address */
#define REG_SERCOM5_I2CM_DATA   (*(__IO uint8_t*)0x43000428U) /**< (SERCOM5) I2CM Data */
#define REG_SERCOM5_I2CM_DBGCTRL (*(__IO uint8_t*)0x43000430U) /**< (SERCOM5) I2CM Debug Control */
#define REG_SERCOM5_I2CS_CTRLA  (*(__IO uint32_t*)0x43000400U) /**< (SERCOM5) I2CS Control A */
#define REG_SERCOM5_I2CS_CTRLB  (*(__IO uint32_t*)0x43000404U) /**< (SERCOM5) I2CS Control B */
#define REG_SERCOM5_I2CS_INTENCLR (*(__IO uint8_t*)0x43000414U) /**< (SERCOM5) I2CS Interrupt Enable Clear */
#define REG_SERCOM5_I2CS_INTENSET (*(__IO uint8_t*)0x43000416U) /**< (SERCOM5) I2CS Interrupt Enable Set */
#define REG_SERCOM5_I2CS_INTFLAG (*(__IO uint8_t*)0x43000418U) /**< (SERCOM5) I2CS Interrupt Flag Status and Clear */
#define REG_SERCOM5_I2CS_STATUS (*(__IO uint16_t*)0x4300041AU) /**< (SERCOM5) I2CS Status */
#define REG_SERCOM5_I2CS_SYNCBUSY (*(__I  uint32_t*)0x4300041CU) /**< (SERCOM5) I2CS Synchronization Busy */
#define REG_SERCOM5_I2CS_ADDR   (*(__IO uint32_t*)0x43000424U) /**< (SERCOM5) I2CS Address */
#define REG_SERCOM5_I2CS_DATA   (*(__IO uint8_t*)0x43000428U) /**< (SERCOM5) I2CS Data */
#define REG_SERCOM5_SPIS_CTRLA  (*(__IO uint32_t*)0x43000400U) /**< (SERCOM5) SPIS Control A */
#define REG_SERCOM5_SPIS_CTRLB  (*(__IO uint32_t*)0x43000404U) /**< (SERCOM5) SPIS Control B */
#define REG_SERCOM5_SPIS_BAUD   (*(__IO uint8_t*)0x4300040CU) /**< (SERCOM5) SPIS Baud Rate */
#define REG_SERCOM5_SPIS_INTENCLR (*(__IO uint8_t*)0x43000414U) /**< (SERCOM5) SPIS Interrupt Enable Clear */
#define REG_SERCOM5_SPIS_INTENSET (*(__IO uint8_t*)0x43000416U) /**< (SERCOM5) SPIS Interrupt Enable Set */
#define REG_SERCOM5_SPIS_INTFLAG (*(__IO uint8_t*)0x43000418U) /**< (SERCOM5) SPIS Interrupt Flag Status and Clear */
#define REG_SERCOM5_SPIS_STATUS (*(__IO uint16_t*)0x4300041AU) /**< (SERCOM5) SPIS Status */
#define REG_SERCOM5_SPIS_SYNCBUSY (*(__I  uint32_t*)0x4300041CU) /**< (SERCOM5) SPIS Synchronization Busy */
#define REG_SERCOM5_SPIS_ADDR   (*(__IO uint32_t*)0x43000424U) /**< (SERCOM5) SPIS Address */
#define REG_SERCOM5_SPIS_DATA   (*(__IO uint32_t*)0x43000428U) /**< (SERCOM5) SPIS Data */
#define REG_SERCOM5_SPIS_DBGCTRL (*(__IO uint8_t*)0x43000430U) /**< (SERCOM5) SPIS Debug Control */
#define REG_SERCOM5_SPIM_CTRLA  (*(__IO uint32_t*)0x43000400U) /**< (SERCOM5) SPIM Control A */
#define REG_SERCOM5_SPIM_CTRLB  (*(__IO uint32_t*)0x43000404U) /**< (SERCOM5) SPIM Control B */
#define REG_SERCOM5_SPIM_BAUD   (*(__IO uint8_t*)0x4300040CU) /**< (SERCOM5) SPIM Baud Rate */
#define REG_SERCOM5_SPIM_INTENCLR (*(__IO uint8_t*)0x43000414U) /**< (SERCOM5) SPIM Interrupt Enable Clear */
#define REG_SERCOM5_SPIM_INTENSET (*(__IO uint8_t*)0x43000416U) /**< (SERCOM5) SPIM Interrupt Enable Set */
#define REG_SERCOM5_SPIM_INTFLAG (*(__IO uint8_t*)0x43000418U) /**< (SERCOM5) SPIM Interrupt Flag Status and Clear */
#define REG_SERCOM5_SPIM_STATUS (*(__IO uint16_t*)0x4300041AU) /**< (SERCOM5) SPIM Status */
#define REG_SERCOM5_SPIM_SYNCBUSY (*(__I  uint32_t*)0x4300041CU) /**< (SERCOM5) SPIM Synchronization Busy */
#define REG_SERCOM5_SPIM_ADDR   (*(__IO uint32_t*)0x43000424U) /**< (SERCOM5) SPIM Address */
#define REG_SERCOM5_SPIM_DATA   (*(__IO uint32_t*)0x43000428U) /**< (SERCOM5) SPIM Data */
#define REG_SERCOM5_SPIM_DBGCTRL (*(__IO uint8_t*)0x43000430U) /**< (SERCOM5) SPIM Debug Control */
#define REG_SERCOM5_USART_EXT_CTRLA (*(__IO uint32_t*)0x43000400U) /**< (SERCOM5) USART_EXT Control A */
#define REG_SERCOM5_USART_EXT_CTRLB (*(__IO uint32_t*)0x43000404U) /**< (SERCOM5) USART_EXT Control B */
#define REG_SERCOM5_USART_EXT_BAUD (*(__IO uint16_t*)0x4300040CU) /**< (SERCOM5) USART_EXT Baud Rate */
#define REG_SERCOM5_USART_EXT_RXPL (*(__IO uint8_t*)0x4300040EU) /**< (SERCOM5) USART_EXT Receive Pulse Length */
#define REG_SERCOM5_USART_EXT_INTENCLR (*(__IO uint8_t*)0x43000414U) /**< (SERCOM5) USART_EXT Interrupt Enable Clear */
#define REG_SERCOM5_USART_EXT_INTENSET (*(__IO uint8_t*)0x43000416U) /**< (SERCOM5) USART_EXT Interrupt Enable Set */
#define REG_SERCOM5_USART_EXT_INTFLAG (*(__IO uint8_t*)0x43000418U) /**< (SERCOM5) USART_EXT Interrupt Flag Status and Clear */
#define REG_SERCOM5_USART_EXT_STATUS (*(__IO uint16_t*)0x4300041AU) /**< (SERCOM5) USART_EXT Status */
#define REG_SERCOM5_USART_EXT_SYNCBUSY (*(__I  uint32_t*)0x4300041CU) /**< (SERCOM5) USART_EXT Synchronization Busy */
#define REG_SERCOM5_USART_EXT_DATA (*(__IO uint16_t*)0x43000428U) /**< (SERCOM5) USART_EXT Data */
#define REG_SERCOM5_USART_EXT_DBGCTRL (*(__IO uint8_t*)0x43000430U) /**< (SERCOM5) USART_EXT Debug Control */
#define REG_SERCOM5_USART_INT_CTRLA (*(__IO uint32_t*)0x43000400U) /**< (SERCOM5) USART_INT Control A */
#define REG_SERCOM5_USART_INT_CTRLB (*(__IO uint32_t*)0x43000404U) /**< (SERCOM5) USART_INT Control B */
#define REG_SERCOM5_USART_INT_BAUD (*(__IO uint16_t*)0x4300040CU) /**< (SERCOM5) USART_INT Baud Rate */
#define REG_SERCOM5_USART_INT_RXPL (*(__IO uint8_t*)0x4300040EU) /**< (SERCOM5) USART_INT Receive Pulse Length */
#define REG_SERCOM5_USART_INT_INTENCLR (*(__IO uint8_t*)0x43000414U) /**< (SERCOM5) USART_INT Interrupt Enable Clear */
#define REG_SERCOM5_USART_INT_INTENSET (*(__IO uint8_t*)0x43000416U) /**< (SERCOM5) USART_INT Interrupt Enable Set */
#define REG_SERCOM5_USART_INT_INTFLAG (*(__IO uint8_t*)0x43000418U) /**< (SERCOM5) USART_INT Interrupt Flag Status and Clear */
#define REG_SERCOM5_USART_INT_STATUS (*(__IO uint16_t*)0x4300041AU) /**< (SERCOM5) USART_INT Status */
#define REG_SERCOM5_USART_INT_SYNCBUSY (*(__I  uint32_t*)0x4300041CU) /**< (SERCOM5) USART_INT Synchronization Busy */
#define REG_SERCOM5_USART_INT_DATA (*(__IO uint16_t*)0x43000428U) /**< (SERCOM5) USART_INT Data */
#define REG_SERCOM5_USART_INT_DBGCTRL (*(__IO uint8_t*)0x43000430U) /**< (SERCOM5) USART_INT Debug Control */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for SERCOM5 peripheral ========== */
#define SERCOM5_GCLK_ID_CORE                     24         
#define SERCOM5_GCLK_ID_SLOW                     23         
#define SERCOM5_INT_MSB                          3          
#define SERCOM5_PMSB                             3          
#define SERCOM5_INSTANCE_ID                      97         

#endif /* _WLR089_SERCOM5_INSTANCE_ */
