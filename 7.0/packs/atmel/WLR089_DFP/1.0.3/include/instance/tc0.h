/**
 * \brief Instance description for TC0
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
#ifndef _WLR089_TC0_INSTANCE_H_
#define _WLR089_TC0_INSTANCE_H_

/* ========== Register definition for TC0 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_TC0_CTRLA           (0x42002000) /**< (TC0) Control A */
#define REG_TC0_CTRLBCLR        (0x42002004) /**< (TC0) Control B Clear */
#define REG_TC0_CTRLBSET        (0x42002005) /**< (TC0) Control B Set */
#define REG_TC0_EVCTRL          (0x42002006) /**< (TC0) Event Control */
#define REG_TC0_INTENCLR        (0x42002008) /**< (TC0) Interrupt Enable Clear */
#define REG_TC0_INTENSET        (0x42002009) /**< (TC0) Interrupt Enable Set */
#define REG_TC0_INTFLAG         (0x4200200A) /**< (TC0) Interrupt Flag Status and Clear */
#define REG_TC0_STATUS          (0x4200200B) /**< (TC0) Status */
#define REG_TC0_WAVE            (0x4200200C) /**< (TC0) Waveform Generation Control */
#define REG_TC0_DRVCTRL         (0x4200200D) /**< (TC0) Control C */
#define REG_TC0_DBGCTRL         (0x4200200F) /**< (TC0) Debug Control */
#define REG_TC0_SYNCBUSY        (0x42002010) /**< (TC0) Synchronization Status */
#define REG_TC0_COUNT8_COUNT    (0x42002014) /**< (TC0) COUNT8 Count */
#define REG_TC0_COUNT8_PER      (0x4200201B) /**< (TC0) COUNT8 Period */
#define REG_TC0_COUNT8_CC       (0x4200201C) /**< (TC0) COUNT8 Compare and Capture */
#define REG_TC0_COUNT8_CC0      (0x4200201C) /**< (TC0) COUNT8 Compare and Capture 0 */
#define REG_TC0_COUNT8_CC1      (0x4200201D) /**< (TC0) COUNT8 Compare and Capture 1 */
#define REG_TC0_COUNT8_PERBUF   (0x4200202F) /**< (TC0) COUNT8 Period Buffer */
#define REG_TC0_COUNT8_CCBUF    (0x42002030) /**< (TC0) COUNT8 Compare and Capture Buffer */
#define REG_TC0_COUNT8_CCBUF0   (0x42002030) /**< (TC0) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC0_COUNT8_CCBUF1   (0x42002031) /**< (TC0) COUNT8 Compare and Capture Buffer 1 */
#define REG_TC0_COUNT16_COUNT   (0x42002014) /**< (TC0) COUNT16 Count */
#define REG_TC0_COUNT16_CC      (0x4200201C) /**< (TC0) COUNT16 Compare and Capture */
#define REG_TC0_COUNT16_CC0     (0x4200201C) /**< (TC0) COUNT16 Compare and Capture 0 */
#define REG_TC0_COUNT16_CC1     (0x4200201E) /**< (TC0) COUNT16 Compare and Capture 1 */
#define REG_TC0_COUNT16_CCBUF   (0x42002030) /**< (TC0) COUNT16 Compare and Capture Buffer */
#define REG_TC0_COUNT16_CCBUF0  (0x42002030) /**< (TC0) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC0_COUNT16_CCBUF1  (0x42002032) /**< (TC0) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC0_COUNT32_COUNT   (0x42002014) /**< (TC0) COUNT32 Count */
#define REG_TC0_COUNT32_CC      (0x4200201C) /**< (TC0) COUNT32 Compare and Capture */
#define REG_TC0_COUNT32_CC0     (0x4200201C) /**< (TC0) COUNT32 Compare and Capture 0 */
#define REG_TC0_COUNT32_CC1     (0x42002020) /**< (TC0) COUNT32 Compare and Capture 1 */
#define REG_TC0_COUNT32_CCBUF   (0x42002030) /**< (TC0) COUNT32 Compare and Capture Buffer */
#define REG_TC0_COUNT32_CCBUF0  (0x42002030) /**< (TC0) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC0_COUNT32_CCBUF1  (0x42002034) /**< (TC0) COUNT32 Compare and Capture Buffer 1 */

#else

#define REG_TC0_CTRLA           (*(__IO uint32_t*)0x42002000U) /**< (TC0) Control A */
#define REG_TC0_CTRLBCLR        (*(__IO uint8_t*)0x42002004U) /**< (TC0) Control B Clear */
#define REG_TC0_CTRLBSET        (*(__IO uint8_t*)0x42002005U) /**< (TC0) Control B Set */
#define REG_TC0_EVCTRL          (*(__IO uint16_t*)0x42002006U) /**< (TC0) Event Control */
#define REG_TC0_INTENCLR        (*(__IO uint8_t*)0x42002008U) /**< (TC0) Interrupt Enable Clear */
#define REG_TC0_INTENSET        (*(__IO uint8_t*)0x42002009U) /**< (TC0) Interrupt Enable Set */
#define REG_TC0_INTFLAG         (*(__IO uint8_t*)0x4200200AU) /**< (TC0) Interrupt Flag Status and Clear */
#define REG_TC0_STATUS          (*(__IO uint8_t*)0x4200200BU) /**< (TC0) Status */
#define REG_TC0_WAVE            (*(__IO uint8_t*)0x4200200CU) /**< (TC0) Waveform Generation Control */
#define REG_TC0_DRVCTRL         (*(__IO uint8_t*)0x4200200DU) /**< (TC0) Control C */
#define REG_TC0_DBGCTRL         (*(__IO uint8_t*)0x4200200FU) /**< (TC0) Debug Control */
#define REG_TC0_SYNCBUSY        (*(__I  uint32_t*)0x42002010U) /**< (TC0) Synchronization Status */
#define REG_TC0_COUNT8_COUNT    (*(__IO uint8_t*)0x42002014U) /**< (TC0) COUNT8 Count */
#define REG_TC0_COUNT8_PER      (*(__IO uint8_t*)0x4200201BU) /**< (TC0) COUNT8 Period */
#define REG_TC0_COUNT8_CC       (*(__IO uint8_t*)0x4200201CU) /**< (TC0) COUNT8 Compare and Capture */
#define REG_TC0_COUNT8_CC0      (*(__IO uint8_t*)0x4200201CU) /**< (TC0) COUNT8 Compare and Capture 0 */
#define REG_TC0_COUNT8_CC1      (*(__IO uint8_t*)0x4200201DU) /**< (TC0) COUNT8 Compare and Capture 1 */
#define REG_TC0_COUNT8_PERBUF   (*(__IO uint8_t*)0x4200202FU) /**< (TC0) COUNT8 Period Buffer */
#define REG_TC0_COUNT8_CCBUF    (*(__IO uint8_t*)0x42002030U) /**< (TC0) COUNT8 Compare and Capture Buffer */
#define REG_TC0_COUNT8_CCBUF0   (*(__IO uint8_t*)0x42002030U) /**< (TC0) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC0_COUNT8_CCBUF1   (*(__IO uint8_t*)0x42002031U) /**< (TC0) COUNT8 Compare and Capture Buffer 1 */
#define REG_TC0_COUNT16_COUNT   (*(__IO uint16_t*)0x42002014U) /**< (TC0) COUNT16 Count */
#define REG_TC0_COUNT16_CC      (*(__IO uint16_t*)0x4200201CU) /**< (TC0) COUNT16 Compare and Capture */
#define REG_TC0_COUNT16_CC0     (*(__IO uint16_t*)0x4200201CU) /**< (TC0) COUNT16 Compare and Capture 0 */
#define REG_TC0_COUNT16_CC1     (*(__IO uint16_t*)0x4200201EU) /**< (TC0) COUNT16 Compare and Capture 1 */
#define REG_TC0_COUNT16_CCBUF   (*(__IO uint16_t*)0x42002030U) /**< (TC0) COUNT16 Compare and Capture Buffer */
#define REG_TC0_COUNT16_CCBUF0  (*(__IO uint16_t*)0x42002030U) /**< (TC0) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC0_COUNT16_CCBUF1  (*(__IO uint16_t*)0x42002032U) /**< (TC0) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC0_COUNT32_COUNT   (*(__IO uint32_t*)0x42002014U) /**< (TC0) COUNT32 Count */
#define REG_TC0_COUNT32_CC      (*(__IO uint32_t*)0x4200201CU) /**< (TC0) COUNT32 Compare and Capture */
#define REG_TC0_COUNT32_CC0     (*(__IO uint32_t*)0x4200201CU) /**< (TC0) COUNT32 Compare and Capture 0 */
#define REG_TC0_COUNT32_CC1     (*(__IO uint32_t*)0x42002020U) /**< (TC0) COUNT32 Compare and Capture 1 */
#define REG_TC0_COUNT32_CCBUF   (*(__IO uint32_t*)0x42002030U) /**< (TC0) COUNT32 Compare and Capture Buffer */
#define REG_TC0_COUNT32_CCBUF0  (*(__IO uint32_t*)0x42002030U) /**< (TC0) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC0_COUNT32_CCBUF1  (*(__IO uint32_t*)0x42002034U) /**< (TC0) COUNT32 Compare and Capture Buffer 1 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for TC0 peripheral ========== */
#define TC0_CC_NUM                               2          
#define TC0_DMAC_ID_OVF                          22         /* Indexes of DMA Overflow trigger */
#define TC0_EXT                                  0          
#define TC0_GCLK_ID                              27         
#define TC0_MASTER_SLAVE_MODE                    1          /* TC type 0 : NA, 1 : Master, 2 : Slave */
#define TC0_OW_NUM                               2          
#define TC0_INSTANCE_ID                          72         

#endif /* _WLR089_TC0_INSTANCE_ */
