/**
 * \brief Instance description for TC4
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
#ifndef _WLR089_TC4_INSTANCE_H_
#define _WLR089_TC4_INSTANCE_H_

/* ========== Register definition for TC4 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_TC4_CTRLA           (0x43000800) /**< (TC4) Control A */
#define REG_TC4_CTRLBCLR        (0x43000804) /**< (TC4) Control B Clear */
#define REG_TC4_CTRLBSET        (0x43000805) /**< (TC4) Control B Set */
#define REG_TC4_EVCTRL          (0x43000806) /**< (TC4) Event Control */
#define REG_TC4_INTENCLR        (0x43000808) /**< (TC4) Interrupt Enable Clear */
#define REG_TC4_INTENSET        (0x43000809) /**< (TC4) Interrupt Enable Set */
#define REG_TC4_INTFLAG         (0x4300080A) /**< (TC4) Interrupt Flag Status and Clear */
#define REG_TC4_STATUS          (0x4300080B) /**< (TC4) Status */
#define REG_TC4_WAVE            (0x4300080C) /**< (TC4) Waveform Generation Control */
#define REG_TC4_DRVCTRL         (0x4300080D) /**< (TC4) Control C */
#define REG_TC4_DBGCTRL         (0x4300080F) /**< (TC4) Debug Control */
#define REG_TC4_SYNCBUSY        (0x43000810) /**< (TC4) Synchronization Status */
#define REG_TC4_COUNT8_COUNT    (0x43000814) /**< (TC4) COUNT8 Count */
#define REG_TC4_COUNT8_PER      (0x4300081B) /**< (TC4) COUNT8 Period */
#define REG_TC4_COUNT8_CC       (0x4300081C) /**< (TC4) COUNT8 Compare and Capture */
#define REG_TC4_COUNT8_CC0      (0x4300081C) /**< (TC4) COUNT8 Compare and Capture 0 */
#define REG_TC4_COUNT8_CC1      (0x4300081D) /**< (TC4) COUNT8 Compare and Capture 1 */
#define REG_TC4_COUNT8_PERBUF   (0x4300082F) /**< (TC4) COUNT8 Period Buffer */
#define REG_TC4_COUNT8_CCBUF    (0x43000830) /**< (TC4) COUNT8 Compare and Capture Buffer */
#define REG_TC4_COUNT8_CCBUF0   (0x43000830) /**< (TC4) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC4_COUNT8_CCBUF1   (0x43000831) /**< (TC4) COUNT8 Compare and Capture Buffer 1 */
#define REG_TC4_COUNT16_COUNT   (0x43000814) /**< (TC4) COUNT16 Count */
#define REG_TC4_COUNT16_CC      (0x4300081C) /**< (TC4) COUNT16 Compare and Capture */
#define REG_TC4_COUNT16_CC0     (0x4300081C) /**< (TC4) COUNT16 Compare and Capture 0 */
#define REG_TC4_COUNT16_CC1     (0x4300081E) /**< (TC4) COUNT16 Compare and Capture 1 */
#define REG_TC4_COUNT16_CCBUF   (0x43000830) /**< (TC4) COUNT16 Compare and Capture Buffer */
#define REG_TC4_COUNT16_CCBUF0  (0x43000830) /**< (TC4) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC4_COUNT16_CCBUF1  (0x43000832) /**< (TC4) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC4_COUNT32_COUNT   (0x43000814) /**< (TC4) COUNT32 Count */
#define REG_TC4_COUNT32_CC      (0x4300081C) /**< (TC4) COUNT32 Compare and Capture */
#define REG_TC4_COUNT32_CC0     (0x4300081C) /**< (TC4) COUNT32 Compare and Capture 0 */
#define REG_TC4_COUNT32_CC1     (0x43000820) /**< (TC4) COUNT32 Compare and Capture 1 */
#define REG_TC4_COUNT32_CCBUF   (0x43000830) /**< (TC4) COUNT32 Compare and Capture Buffer */
#define REG_TC4_COUNT32_CCBUF0  (0x43000830) /**< (TC4) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC4_COUNT32_CCBUF1  (0x43000834) /**< (TC4) COUNT32 Compare and Capture Buffer 1 */

#else

#define REG_TC4_CTRLA           (*(__IO uint32_t*)0x43000800U) /**< (TC4) Control A */
#define REG_TC4_CTRLBCLR        (*(__IO uint8_t*)0x43000804U) /**< (TC4) Control B Clear */
#define REG_TC4_CTRLBSET        (*(__IO uint8_t*)0x43000805U) /**< (TC4) Control B Set */
#define REG_TC4_EVCTRL          (*(__IO uint16_t*)0x43000806U) /**< (TC4) Event Control */
#define REG_TC4_INTENCLR        (*(__IO uint8_t*)0x43000808U) /**< (TC4) Interrupt Enable Clear */
#define REG_TC4_INTENSET        (*(__IO uint8_t*)0x43000809U) /**< (TC4) Interrupt Enable Set */
#define REG_TC4_INTFLAG         (*(__IO uint8_t*)0x4300080AU) /**< (TC4) Interrupt Flag Status and Clear */
#define REG_TC4_STATUS          (*(__IO uint8_t*)0x4300080BU) /**< (TC4) Status */
#define REG_TC4_WAVE            (*(__IO uint8_t*)0x4300080CU) /**< (TC4) Waveform Generation Control */
#define REG_TC4_DRVCTRL         (*(__IO uint8_t*)0x4300080DU) /**< (TC4) Control C */
#define REG_TC4_DBGCTRL         (*(__IO uint8_t*)0x4300080FU) /**< (TC4) Debug Control */
#define REG_TC4_SYNCBUSY        (*(__I  uint32_t*)0x43000810U) /**< (TC4) Synchronization Status */
#define REG_TC4_COUNT8_COUNT    (*(__IO uint8_t*)0x43000814U) /**< (TC4) COUNT8 Count */
#define REG_TC4_COUNT8_PER      (*(__IO uint8_t*)0x4300081BU) /**< (TC4) COUNT8 Period */
#define REG_TC4_COUNT8_CC       (*(__IO uint8_t*)0x4300081CU) /**< (TC4) COUNT8 Compare and Capture */
#define REG_TC4_COUNT8_CC0      (*(__IO uint8_t*)0x4300081CU) /**< (TC4) COUNT8 Compare and Capture 0 */
#define REG_TC4_COUNT8_CC1      (*(__IO uint8_t*)0x4300081DU) /**< (TC4) COUNT8 Compare and Capture 1 */
#define REG_TC4_COUNT8_PERBUF   (*(__IO uint8_t*)0x4300082FU) /**< (TC4) COUNT8 Period Buffer */
#define REG_TC4_COUNT8_CCBUF    (*(__IO uint8_t*)0x43000830U) /**< (TC4) COUNT8 Compare and Capture Buffer */
#define REG_TC4_COUNT8_CCBUF0   (*(__IO uint8_t*)0x43000830U) /**< (TC4) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC4_COUNT8_CCBUF1   (*(__IO uint8_t*)0x43000831U) /**< (TC4) COUNT8 Compare and Capture Buffer 1 */
#define REG_TC4_COUNT16_COUNT   (*(__IO uint16_t*)0x43000814U) /**< (TC4) COUNT16 Count */
#define REG_TC4_COUNT16_CC      (*(__IO uint16_t*)0x4300081CU) /**< (TC4) COUNT16 Compare and Capture */
#define REG_TC4_COUNT16_CC0     (*(__IO uint16_t*)0x4300081CU) /**< (TC4) COUNT16 Compare and Capture 0 */
#define REG_TC4_COUNT16_CC1     (*(__IO uint16_t*)0x4300081EU) /**< (TC4) COUNT16 Compare and Capture 1 */
#define REG_TC4_COUNT16_CCBUF   (*(__IO uint16_t*)0x43000830U) /**< (TC4) COUNT16 Compare and Capture Buffer */
#define REG_TC4_COUNT16_CCBUF0  (*(__IO uint16_t*)0x43000830U) /**< (TC4) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC4_COUNT16_CCBUF1  (*(__IO uint16_t*)0x43000832U) /**< (TC4) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC4_COUNT32_COUNT   (*(__IO uint32_t*)0x43000814U) /**< (TC4) COUNT32 Count */
#define REG_TC4_COUNT32_CC      (*(__IO uint32_t*)0x4300081CU) /**< (TC4) COUNT32 Compare and Capture */
#define REG_TC4_COUNT32_CC0     (*(__IO uint32_t*)0x4300081CU) /**< (TC4) COUNT32 Compare and Capture 0 */
#define REG_TC4_COUNT32_CC1     (*(__IO uint32_t*)0x43000820U) /**< (TC4) COUNT32 Compare and Capture 1 */
#define REG_TC4_COUNT32_CCBUF   (*(__IO uint32_t*)0x43000830U) /**< (TC4) COUNT32 Compare and Capture Buffer */
#define REG_TC4_COUNT32_CCBUF0  (*(__IO uint32_t*)0x43000830U) /**< (TC4) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC4_COUNT32_CCBUF1  (*(__IO uint32_t*)0x43000834U) /**< (TC4) COUNT32 Compare and Capture Buffer 1 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for TC4 peripheral ========== */
#define TC4_CC_NUM                               2          
#define TC4_DMAC_ID_OVF                          34         /* Indexes of DMA Overflow trigger */
#define TC4_EXT                                  0          
#define TC4_GCLK_ID                              29         
#define TC4_MASTER_SLAVE_MODE                    0          /* TC type 0 : NA, 1 : Master, 2 : Slave */
#define TC4_OW_NUM                               2          
#define TC4_INSTANCE_ID                          98         

#endif /* _WLR089_TC4_INSTANCE_ */
