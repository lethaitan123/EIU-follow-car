/**
 * \brief Instance description for TC3
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
#ifndef _WLR089_TC3_INSTANCE_H_
#define _WLR089_TC3_INSTANCE_H_

/* ========== Register definition for TC3 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_TC3_CTRLA           (0x42002C00) /**< (TC3) Control A */
#define REG_TC3_CTRLBCLR        (0x42002C04) /**< (TC3) Control B Clear */
#define REG_TC3_CTRLBSET        (0x42002C05) /**< (TC3) Control B Set */
#define REG_TC3_EVCTRL          (0x42002C06) /**< (TC3) Event Control */
#define REG_TC3_INTENCLR        (0x42002C08) /**< (TC3) Interrupt Enable Clear */
#define REG_TC3_INTENSET        (0x42002C09) /**< (TC3) Interrupt Enable Set */
#define REG_TC3_INTFLAG         (0x42002C0A) /**< (TC3) Interrupt Flag Status and Clear */
#define REG_TC3_STATUS          (0x42002C0B) /**< (TC3) Status */
#define REG_TC3_WAVE            (0x42002C0C) /**< (TC3) Waveform Generation Control */
#define REG_TC3_DRVCTRL         (0x42002C0D) /**< (TC3) Control C */
#define REG_TC3_DBGCTRL         (0x42002C0F) /**< (TC3) Debug Control */
#define REG_TC3_SYNCBUSY        (0x42002C10) /**< (TC3) Synchronization Status */
#define REG_TC3_COUNT8_COUNT    (0x42002C14) /**< (TC3) COUNT8 Count */
#define REG_TC3_COUNT8_PER      (0x42002C1B) /**< (TC3) COUNT8 Period */
#define REG_TC3_COUNT8_CC       (0x42002C1C) /**< (TC3) COUNT8 Compare and Capture */
#define REG_TC3_COUNT8_CC0      (0x42002C1C) /**< (TC3) COUNT8 Compare and Capture 0 */
#define REG_TC3_COUNT8_CC1      (0x42002C1D) /**< (TC3) COUNT8 Compare and Capture 1 */
#define REG_TC3_COUNT8_PERBUF   (0x42002C2F) /**< (TC3) COUNT8 Period Buffer */
#define REG_TC3_COUNT8_CCBUF    (0x42002C30) /**< (TC3) COUNT8 Compare and Capture Buffer */
#define REG_TC3_COUNT8_CCBUF0   (0x42002C30) /**< (TC3) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC3_COUNT8_CCBUF1   (0x42002C31) /**< (TC3) COUNT8 Compare and Capture Buffer 1 */
#define REG_TC3_COUNT16_COUNT   (0x42002C14) /**< (TC3) COUNT16 Count */
#define REG_TC3_COUNT16_CC      (0x42002C1C) /**< (TC3) COUNT16 Compare and Capture */
#define REG_TC3_COUNT16_CC0     (0x42002C1C) /**< (TC3) COUNT16 Compare and Capture 0 */
#define REG_TC3_COUNT16_CC1     (0x42002C1E) /**< (TC3) COUNT16 Compare and Capture 1 */
#define REG_TC3_COUNT16_CCBUF   (0x42002C30) /**< (TC3) COUNT16 Compare and Capture Buffer */
#define REG_TC3_COUNT16_CCBUF0  (0x42002C30) /**< (TC3) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC3_COUNT16_CCBUF1  (0x42002C32) /**< (TC3) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC3_COUNT32_COUNT   (0x42002C14) /**< (TC3) COUNT32 Count */
#define REG_TC3_COUNT32_CC      (0x42002C1C) /**< (TC3) COUNT32 Compare and Capture */
#define REG_TC3_COUNT32_CC0     (0x42002C1C) /**< (TC3) COUNT32 Compare and Capture 0 */
#define REG_TC3_COUNT32_CC1     (0x42002C20) /**< (TC3) COUNT32 Compare and Capture 1 */
#define REG_TC3_COUNT32_CCBUF   (0x42002C30) /**< (TC3) COUNT32 Compare and Capture Buffer */
#define REG_TC3_COUNT32_CCBUF0  (0x42002C30) /**< (TC3) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC3_COUNT32_CCBUF1  (0x42002C34) /**< (TC3) COUNT32 Compare and Capture Buffer 1 */

#else

#define REG_TC3_CTRLA           (*(__IO uint32_t*)0x42002C00U) /**< (TC3) Control A */
#define REG_TC3_CTRLBCLR        (*(__IO uint8_t*)0x42002C04U) /**< (TC3) Control B Clear */
#define REG_TC3_CTRLBSET        (*(__IO uint8_t*)0x42002C05U) /**< (TC3) Control B Set */
#define REG_TC3_EVCTRL          (*(__IO uint16_t*)0x42002C06U) /**< (TC3) Event Control */
#define REG_TC3_INTENCLR        (*(__IO uint8_t*)0x42002C08U) /**< (TC3) Interrupt Enable Clear */
#define REG_TC3_INTENSET        (*(__IO uint8_t*)0x42002C09U) /**< (TC3) Interrupt Enable Set */
#define REG_TC3_INTFLAG         (*(__IO uint8_t*)0x42002C0AU) /**< (TC3) Interrupt Flag Status and Clear */
#define REG_TC3_STATUS          (*(__IO uint8_t*)0x42002C0BU) /**< (TC3) Status */
#define REG_TC3_WAVE            (*(__IO uint8_t*)0x42002C0CU) /**< (TC3) Waveform Generation Control */
#define REG_TC3_DRVCTRL         (*(__IO uint8_t*)0x42002C0DU) /**< (TC3) Control C */
#define REG_TC3_DBGCTRL         (*(__IO uint8_t*)0x42002C0FU) /**< (TC3) Debug Control */
#define REG_TC3_SYNCBUSY        (*(__I  uint32_t*)0x42002C10U) /**< (TC3) Synchronization Status */
#define REG_TC3_COUNT8_COUNT    (*(__IO uint8_t*)0x42002C14U) /**< (TC3) COUNT8 Count */
#define REG_TC3_COUNT8_PER      (*(__IO uint8_t*)0x42002C1BU) /**< (TC3) COUNT8 Period */
#define REG_TC3_COUNT8_CC       (*(__IO uint8_t*)0x42002C1CU) /**< (TC3) COUNT8 Compare and Capture */
#define REG_TC3_COUNT8_CC0      (*(__IO uint8_t*)0x42002C1CU) /**< (TC3) COUNT8 Compare and Capture 0 */
#define REG_TC3_COUNT8_CC1      (*(__IO uint8_t*)0x42002C1DU) /**< (TC3) COUNT8 Compare and Capture 1 */
#define REG_TC3_COUNT8_PERBUF   (*(__IO uint8_t*)0x42002C2FU) /**< (TC3) COUNT8 Period Buffer */
#define REG_TC3_COUNT8_CCBUF    (*(__IO uint8_t*)0x42002C30U) /**< (TC3) COUNT8 Compare and Capture Buffer */
#define REG_TC3_COUNT8_CCBUF0   (*(__IO uint8_t*)0x42002C30U) /**< (TC3) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC3_COUNT8_CCBUF1   (*(__IO uint8_t*)0x42002C31U) /**< (TC3) COUNT8 Compare and Capture Buffer 1 */
#define REG_TC3_COUNT16_COUNT   (*(__IO uint16_t*)0x42002C14U) /**< (TC3) COUNT16 Count */
#define REG_TC3_COUNT16_CC      (*(__IO uint16_t*)0x42002C1CU) /**< (TC3) COUNT16 Compare and Capture */
#define REG_TC3_COUNT16_CC0     (*(__IO uint16_t*)0x42002C1CU) /**< (TC3) COUNT16 Compare and Capture 0 */
#define REG_TC3_COUNT16_CC1     (*(__IO uint16_t*)0x42002C1EU) /**< (TC3) COUNT16 Compare and Capture 1 */
#define REG_TC3_COUNT16_CCBUF   (*(__IO uint16_t*)0x42002C30U) /**< (TC3) COUNT16 Compare and Capture Buffer */
#define REG_TC3_COUNT16_CCBUF0  (*(__IO uint16_t*)0x42002C30U) /**< (TC3) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC3_COUNT16_CCBUF1  (*(__IO uint16_t*)0x42002C32U) /**< (TC3) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC3_COUNT32_COUNT   (*(__IO uint32_t*)0x42002C14U) /**< (TC3) COUNT32 Count */
#define REG_TC3_COUNT32_CC      (*(__IO uint32_t*)0x42002C1CU) /**< (TC3) COUNT32 Compare and Capture */
#define REG_TC3_COUNT32_CC0     (*(__IO uint32_t*)0x42002C1CU) /**< (TC3) COUNT32 Compare and Capture 0 */
#define REG_TC3_COUNT32_CC1     (*(__IO uint32_t*)0x42002C20U) /**< (TC3) COUNT32 Compare and Capture 1 */
#define REG_TC3_COUNT32_CCBUF   (*(__IO uint32_t*)0x42002C30U) /**< (TC3) COUNT32 Compare and Capture Buffer */
#define REG_TC3_COUNT32_CCBUF0  (*(__IO uint32_t*)0x42002C30U) /**< (TC3) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC3_COUNT32_CCBUF1  (*(__IO uint32_t*)0x42002C34U) /**< (TC3) COUNT32 Compare and Capture Buffer 1 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for TC3 peripheral ========== */
#define TC3_CC_NUM                               2          
#define TC3_DMAC_ID_OVF                          31         /* Indexes of DMA Overflow trigger */
#define TC3_EXT                                  0          
#define TC3_GCLK_ID                              28         
#define TC3_MASTER_SLAVE_MODE                    2          /* TC type 0 : NA, 1 : Master, 2 : Slave */
#define TC3_OW_NUM                               2          
#define TC3_INSTANCE_ID                          75         

#endif /* _WLR089_TC3_INSTANCE_ */
