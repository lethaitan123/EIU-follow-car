/**
 * \brief Instance description for TC1
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
#ifndef _WLR089_TC1_INSTANCE_H_
#define _WLR089_TC1_INSTANCE_H_

/* ========== Register definition for TC1 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_TC1_CTRLA           (0x42002400) /**< (TC1) Control A */
#define REG_TC1_CTRLBCLR        (0x42002404) /**< (TC1) Control B Clear */
#define REG_TC1_CTRLBSET        (0x42002405) /**< (TC1) Control B Set */
#define REG_TC1_EVCTRL          (0x42002406) /**< (TC1) Event Control */
#define REG_TC1_INTENCLR        (0x42002408) /**< (TC1) Interrupt Enable Clear */
#define REG_TC1_INTENSET        (0x42002409) /**< (TC1) Interrupt Enable Set */
#define REG_TC1_INTFLAG         (0x4200240A) /**< (TC1) Interrupt Flag Status and Clear */
#define REG_TC1_STATUS          (0x4200240B) /**< (TC1) Status */
#define REG_TC1_WAVE            (0x4200240C) /**< (TC1) Waveform Generation Control */
#define REG_TC1_DRVCTRL         (0x4200240D) /**< (TC1) Control C */
#define REG_TC1_DBGCTRL         (0x4200240F) /**< (TC1) Debug Control */
#define REG_TC1_SYNCBUSY        (0x42002410) /**< (TC1) Synchronization Status */
#define REG_TC1_COUNT8_COUNT    (0x42002414) /**< (TC1) COUNT8 Count */
#define REG_TC1_COUNT8_PER      (0x4200241B) /**< (TC1) COUNT8 Period */
#define REG_TC1_COUNT8_CC       (0x4200241C) /**< (TC1) COUNT8 Compare and Capture */
#define REG_TC1_COUNT8_CC0      (0x4200241C) /**< (TC1) COUNT8 Compare and Capture 0 */
#define REG_TC1_COUNT8_CC1      (0x4200241D) /**< (TC1) COUNT8 Compare and Capture 1 */
#define REG_TC1_COUNT8_PERBUF   (0x4200242F) /**< (TC1) COUNT8 Period Buffer */
#define REG_TC1_COUNT8_CCBUF    (0x42002430) /**< (TC1) COUNT8 Compare and Capture Buffer */
#define REG_TC1_COUNT8_CCBUF0   (0x42002430) /**< (TC1) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC1_COUNT8_CCBUF1   (0x42002431) /**< (TC1) COUNT8 Compare and Capture Buffer 1 */
#define REG_TC1_COUNT16_COUNT   (0x42002414) /**< (TC1) COUNT16 Count */
#define REG_TC1_COUNT16_CC      (0x4200241C) /**< (TC1) COUNT16 Compare and Capture */
#define REG_TC1_COUNT16_CC0     (0x4200241C) /**< (TC1) COUNT16 Compare and Capture 0 */
#define REG_TC1_COUNT16_CC1     (0x4200241E) /**< (TC1) COUNT16 Compare and Capture 1 */
#define REG_TC1_COUNT16_CCBUF   (0x42002430) /**< (TC1) COUNT16 Compare and Capture Buffer */
#define REG_TC1_COUNT16_CCBUF0  (0x42002430) /**< (TC1) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC1_COUNT16_CCBUF1  (0x42002432) /**< (TC1) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC1_COUNT32_COUNT   (0x42002414) /**< (TC1) COUNT32 Count */
#define REG_TC1_COUNT32_CC      (0x4200241C) /**< (TC1) COUNT32 Compare and Capture */
#define REG_TC1_COUNT32_CC0     (0x4200241C) /**< (TC1) COUNT32 Compare and Capture 0 */
#define REG_TC1_COUNT32_CC1     (0x42002420) /**< (TC1) COUNT32 Compare and Capture 1 */
#define REG_TC1_COUNT32_CCBUF   (0x42002430) /**< (TC1) COUNT32 Compare and Capture Buffer */
#define REG_TC1_COUNT32_CCBUF0  (0x42002430) /**< (TC1) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC1_COUNT32_CCBUF1  (0x42002434) /**< (TC1) COUNT32 Compare and Capture Buffer 1 */

#else

#define REG_TC1_CTRLA           (*(__IO uint32_t*)0x42002400U) /**< (TC1) Control A */
#define REG_TC1_CTRLBCLR        (*(__IO uint8_t*)0x42002404U) /**< (TC1) Control B Clear */
#define REG_TC1_CTRLBSET        (*(__IO uint8_t*)0x42002405U) /**< (TC1) Control B Set */
#define REG_TC1_EVCTRL          (*(__IO uint16_t*)0x42002406U) /**< (TC1) Event Control */
#define REG_TC1_INTENCLR        (*(__IO uint8_t*)0x42002408U) /**< (TC1) Interrupt Enable Clear */
#define REG_TC1_INTENSET        (*(__IO uint8_t*)0x42002409U) /**< (TC1) Interrupt Enable Set */
#define REG_TC1_INTFLAG         (*(__IO uint8_t*)0x4200240AU) /**< (TC1) Interrupt Flag Status and Clear */
#define REG_TC1_STATUS          (*(__IO uint8_t*)0x4200240BU) /**< (TC1) Status */
#define REG_TC1_WAVE            (*(__IO uint8_t*)0x4200240CU) /**< (TC1) Waveform Generation Control */
#define REG_TC1_DRVCTRL         (*(__IO uint8_t*)0x4200240DU) /**< (TC1) Control C */
#define REG_TC1_DBGCTRL         (*(__IO uint8_t*)0x4200240FU) /**< (TC1) Debug Control */
#define REG_TC1_SYNCBUSY        (*(__I  uint32_t*)0x42002410U) /**< (TC1) Synchronization Status */
#define REG_TC1_COUNT8_COUNT    (*(__IO uint8_t*)0x42002414U) /**< (TC1) COUNT8 Count */
#define REG_TC1_COUNT8_PER      (*(__IO uint8_t*)0x4200241BU) /**< (TC1) COUNT8 Period */
#define REG_TC1_COUNT8_CC       (*(__IO uint8_t*)0x4200241CU) /**< (TC1) COUNT8 Compare and Capture */
#define REG_TC1_COUNT8_CC0      (*(__IO uint8_t*)0x4200241CU) /**< (TC1) COUNT8 Compare and Capture 0 */
#define REG_TC1_COUNT8_CC1      (*(__IO uint8_t*)0x4200241DU) /**< (TC1) COUNT8 Compare and Capture 1 */
#define REG_TC1_COUNT8_PERBUF   (*(__IO uint8_t*)0x4200242FU) /**< (TC1) COUNT8 Period Buffer */
#define REG_TC1_COUNT8_CCBUF    (*(__IO uint8_t*)0x42002430U) /**< (TC1) COUNT8 Compare and Capture Buffer */
#define REG_TC1_COUNT8_CCBUF0   (*(__IO uint8_t*)0x42002430U) /**< (TC1) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC1_COUNT8_CCBUF1   (*(__IO uint8_t*)0x42002431U) /**< (TC1) COUNT8 Compare and Capture Buffer 1 */
#define REG_TC1_COUNT16_COUNT   (*(__IO uint16_t*)0x42002414U) /**< (TC1) COUNT16 Count */
#define REG_TC1_COUNT16_CC      (*(__IO uint16_t*)0x4200241CU) /**< (TC1) COUNT16 Compare and Capture */
#define REG_TC1_COUNT16_CC0     (*(__IO uint16_t*)0x4200241CU) /**< (TC1) COUNT16 Compare and Capture 0 */
#define REG_TC1_COUNT16_CC1     (*(__IO uint16_t*)0x4200241EU) /**< (TC1) COUNT16 Compare and Capture 1 */
#define REG_TC1_COUNT16_CCBUF   (*(__IO uint16_t*)0x42002430U) /**< (TC1) COUNT16 Compare and Capture Buffer */
#define REG_TC1_COUNT16_CCBUF0  (*(__IO uint16_t*)0x42002430U) /**< (TC1) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC1_COUNT16_CCBUF1  (*(__IO uint16_t*)0x42002432U) /**< (TC1) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC1_COUNT32_COUNT   (*(__IO uint32_t*)0x42002414U) /**< (TC1) COUNT32 Count */
#define REG_TC1_COUNT32_CC      (*(__IO uint32_t*)0x4200241CU) /**< (TC1) COUNT32 Compare and Capture */
#define REG_TC1_COUNT32_CC0     (*(__IO uint32_t*)0x4200241CU) /**< (TC1) COUNT32 Compare and Capture 0 */
#define REG_TC1_COUNT32_CC1     (*(__IO uint32_t*)0x42002420U) /**< (TC1) COUNT32 Compare and Capture 1 */
#define REG_TC1_COUNT32_CCBUF   (*(__IO uint32_t*)0x42002430U) /**< (TC1) COUNT32 Compare and Capture Buffer */
#define REG_TC1_COUNT32_CCBUF0  (*(__IO uint32_t*)0x42002430U) /**< (TC1) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC1_COUNT32_CCBUF1  (*(__IO uint32_t*)0x42002434U) /**< (TC1) COUNT32 Compare and Capture Buffer 1 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for TC1 peripheral ========== */
#define TC1_CC_NUM                               2          
#define TC1_DMAC_ID_OVF                          25         /* Indexes of DMA Overflow trigger */
#define TC1_EXT                                  0          
#define TC1_GCLK_ID                              27         
#define TC1_MASTER_SLAVE_MODE                    2          /* TC type 0 : NA, 1 : Master, 2 : Slave */
#define TC1_OW_NUM                               2          
#define TC1_INSTANCE_ID                          73         

#endif /* _WLR089_TC1_INSTANCE_ */
