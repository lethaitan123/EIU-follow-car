/**
 * \brief Instance description for TC2
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
#ifndef _WLR089_TC2_INSTANCE_H_
#define _WLR089_TC2_INSTANCE_H_

/* ========== Register definition for TC2 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_TC2_CTRLA           (0x42002800) /**< (TC2) Control A */
#define REG_TC2_CTRLBCLR        (0x42002804) /**< (TC2) Control B Clear */
#define REG_TC2_CTRLBSET        (0x42002805) /**< (TC2) Control B Set */
#define REG_TC2_EVCTRL          (0x42002806) /**< (TC2) Event Control */
#define REG_TC2_INTENCLR        (0x42002808) /**< (TC2) Interrupt Enable Clear */
#define REG_TC2_INTENSET        (0x42002809) /**< (TC2) Interrupt Enable Set */
#define REG_TC2_INTFLAG         (0x4200280A) /**< (TC2) Interrupt Flag Status and Clear */
#define REG_TC2_STATUS          (0x4200280B) /**< (TC2) Status */
#define REG_TC2_WAVE            (0x4200280C) /**< (TC2) Waveform Generation Control */
#define REG_TC2_DRVCTRL         (0x4200280D) /**< (TC2) Control C */
#define REG_TC2_DBGCTRL         (0x4200280F) /**< (TC2) Debug Control */
#define REG_TC2_SYNCBUSY        (0x42002810) /**< (TC2) Synchronization Status */
#define REG_TC2_COUNT8_COUNT    (0x42002814) /**< (TC2) COUNT8 Count */
#define REG_TC2_COUNT8_PER      (0x4200281B) /**< (TC2) COUNT8 Period */
#define REG_TC2_COUNT8_CC       (0x4200281C) /**< (TC2) COUNT8 Compare and Capture */
#define REG_TC2_COUNT8_CC0      (0x4200281C) /**< (TC2) COUNT8 Compare and Capture 0 */
#define REG_TC2_COUNT8_CC1      (0x4200281D) /**< (TC2) COUNT8 Compare and Capture 1 */
#define REG_TC2_COUNT8_PERBUF   (0x4200282F) /**< (TC2) COUNT8 Period Buffer */
#define REG_TC2_COUNT8_CCBUF    (0x42002830) /**< (TC2) COUNT8 Compare and Capture Buffer */
#define REG_TC2_COUNT8_CCBUF0   (0x42002830) /**< (TC2) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC2_COUNT8_CCBUF1   (0x42002831) /**< (TC2) COUNT8 Compare and Capture Buffer 1 */
#define REG_TC2_COUNT16_COUNT   (0x42002814) /**< (TC2) COUNT16 Count */
#define REG_TC2_COUNT16_CC      (0x4200281C) /**< (TC2) COUNT16 Compare and Capture */
#define REG_TC2_COUNT16_CC0     (0x4200281C) /**< (TC2) COUNT16 Compare and Capture 0 */
#define REG_TC2_COUNT16_CC1     (0x4200281E) /**< (TC2) COUNT16 Compare and Capture 1 */
#define REG_TC2_COUNT16_CCBUF   (0x42002830) /**< (TC2) COUNT16 Compare and Capture Buffer */
#define REG_TC2_COUNT16_CCBUF0  (0x42002830) /**< (TC2) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC2_COUNT16_CCBUF1  (0x42002832) /**< (TC2) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC2_COUNT32_COUNT   (0x42002814) /**< (TC2) COUNT32 Count */
#define REG_TC2_COUNT32_CC      (0x4200281C) /**< (TC2) COUNT32 Compare and Capture */
#define REG_TC2_COUNT32_CC0     (0x4200281C) /**< (TC2) COUNT32 Compare and Capture 0 */
#define REG_TC2_COUNT32_CC1     (0x42002820) /**< (TC2) COUNT32 Compare and Capture 1 */
#define REG_TC2_COUNT32_CCBUF   (0x42002830) /**< (TC2) COUNT32 Compare and Capture Buffer */
#define REG_TC2_COUNT32_CCBUF0  (0x42002830) /**< (TC2) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC2_COUNT32_CCBUF1  (0x42002834) /**< (TC2) COUNT32 Compare and Capture Buffer 1 */

#else

#define REG_TC2_CTRLA           (*(__IO uint32_t*)0x42002800U) /**< (TC2) Control A */
#define REG_TC2_CTRLBCLR        (*(__IO uint8_t*)0x42002804U) /**< (TC2) Control B Clear */
#define REG_TC2_CTRLBSET        (*(__IO uint8_t*)0x42002805U) /**< (TC2) Control B Set */
#define REG_TC2_EVCTRL          (*(__IO uint16_t*)0x42002806U) /**< (TC2) Event Control */
#define REG_TC2_INTENCLR        (*(__IO uint8_t*)0x42002808U) /**< (TC2) Interrupt Enable Clear */
#define REG_TC2_INTENSET        (*(__IO uint8_t*)0x42002809U) /**< (TC2) Interrupt Enable Set */
#define REG_TC2_INTFLAG         (*(__IO uint8_t*)0x4200280AU) /**< (TC2) Interrupt Flag Status and Clear */
#define REG_TC2_STATUS          (*(__IO uint8_t*)0x4200280BU) /**< (TC2) Status */
#define REG_TC2_WAVE            (*(__IO uint8_t*)0x4200280CU) /**< (TC2) Waveform Generation Control */
#define REG_TC2_DRVCTRL         (*(__IO uint8_t*)0x4200280DU) /**< (TC2) Control C */
#define REG_TC2_DBGCTRL         (*(__IO uint8_t*)0x4200280FU) /**< (TC2) Debug Control */
#define REG_TC2_SYNCBUSY        (*(__I  uint32_t*)0x42002810U) /**< (TC2) Synchronization Status */
#define REG_TC2_COUNT8_COUNT    (*(__IO uint8_t*)0x42002814U) /**< (TC2) COUNT8 Count */
#define REG_TC2_COUNT8_PER      (*(__IO uint8_t*)0x4200281BU) /**< (TC2) COUNT8 Period */
#define REG_TC2_COUNT8_CC       (*(__IO uint8_t*)0x4200281CU) /**< (TC2) COUNT8 Compare and Capture */
#define REG_TC2_COUNT8_CC0      (*(__IO uint8_t*)0x4200281CU) /**< (TC2) COUNT8 Compare and Capture 0 */
#define REG_TC2_COUNT8_CC1      (*(__IO uint8_t*)0x4200281DU) /**< (TC2) COUNT8 Compare and Capture 1 */
#define REG_TC2_COUNT8_PERBUF   (*(__IO uint8_t*)0x4200282FU) /**< (TC2) COUNT8 Period Buffer */
#define REG_TC2_COUNT8_CCBUF    (*(__IO uint8_t*)0x42002830U) /**< (TC2) COUNT8 Compare and Capture Buffer */
#define REG_TC2_COUNT8_CCBUF0   (*(__IO uint8_t*)0x42002830U) /**< (TC2) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC2_COUNT8_CCBUF1   (*(__IO uint8_t*)0x42002831U) /**< (TC2) COUNT8 Compare and Capture Buffer 1 */
#define REG_TC2_COUNT16_COUNT   (*(__IO uint16_t*)0x42002814U) /**< (TC2) COUNT16 Count */
#define REG_TC2_COUNT16_CC      (*(__IO uint16_t*)0x4200281CU) /**< (TC2) COUNT16 Compare and Capture */
#define REG_TC2_COUNT16_CC0     (*(__IO uint16_t*)0x4200281CU) /**< (TC2) COUNT16 Compare and Capture 0 */
#define REG_TC2_COUNT16_CC1     (*(__IO uint16_t*)0x4200281EU) /**< (TC2) COUNT16 Compare and Capture 1 */
#define REG_TC2_COUNT16_CCBUF   (*(__IO uint16_t*)0x42002830U) /**< (TC2) COUNT16 Compare and Capture Buffer */
#define REG_TC2_COUNT16_CCBUF0  (*(__IO uint16_t*)0x42002830U) /**< (TC2) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC2_COUNT16_CCBUF1  (*(__IO uint16_t*)0x42002832U) /**< (TC2) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC2_COUNT32_COUNT   (*(__IO uint32_t*)0x42002814U) /**< (TC2) COUNT32 Count */
#define REG_TC2_COUNT32_CC      (*(__IO uint32_t*)0x4200281CU) /**< (TC2) COUNT32 Compare and Capture */
#define REG_TC2_COUNT32_CC0     (*(__IO uint32_t*)0x4200281CU) /**< (TC2) COUNT32 Compare and Capture 0 */
#define REG_TC2_COUNT32_CC1     (*(__IO uint32_t*)0x42002820U) /**< (TC2) COUNT32 Compare and Capture 1 */
#define REG_TC2_COUNT32_CCBUF   (*(__IO uint32_t*)0x42002830U) /**< (TC2) COUNT32 Compare and Capture Buffer */
#define REG_TC2_COUNT32_CCBUF0  (*(__IO uint32_t*)0x42002830U) /**< (TC2) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC2_COUNT32_CCBUF1  (*(__IO uint32_t*)0x42002834U) /**< (TC2) COUNT32 Compare and Capture Buffer 1 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for TC2 peripheral ========== */
#define TC2_CC_NUM                               2          
#define TC2_DMAC_ID_OVF                          28         /* Indexes of DMA Overflow trigger */
#define TC2_EXT                                  0          
#define TC2_GCLK_ID                              28         
#define TC2_MASTER_SLAVE_MODE                    1          /* TC type 0 : NA, 1 : Master, 2 : Slave */
#define TC2_OW_NUM                               2          
#define TC2_INSTANCE_ID                          74         

#endif /* _WLR089_TC2_INSTANCE_ */
