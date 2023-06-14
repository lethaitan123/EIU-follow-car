/**
 * \brief Instance description for TCC2
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
#ifndef _WLR089_TCC2_INSTANCE_H_
#define _WLR089_TCC2_INSTANCE_H_

/* ========== Register definition for TCC2 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_TCC2_CTRLA          (0x42001C00) /**< (TCC2) Control A */
#define REG_TCC2_CTRLBCLR       (0x42001C04) /**< (TCC2) Control B Clear */
#define REG_TCC2_CTRLBSET       (0x42001C05) /**< (TCC2) Control B Set */
#define REG_TCC2_SYNCBUSY       (0x42001C08) /**< (TCC2) Synchronization Busy */
#define REG_TCC2_FCTRLA         (0x42001C0C) /**< (TCC2) Recoverable Fault A Configuration */
#define REG_TCC2_FCTRLB         (0x42001C10) /**< (TCC2) Recoverable Fault B Configuration */
#define REG_TCC2_WEXCTRL        (0x42001C14) /**< (TCC2) Waveform Extension Configuration */
#define REG_TCC2_DRVCTRL        (0x42001C18) /**< (TCC2) Driver Control */
#define REG_TCC2_DBGCTRL        (0x42001C1E) /**< (TCC2) Debug Control */
#define REG_TCC2_EVCTRL         (0x42001C20) /**< (TCC2) Event Control */
#define REG_TCC2_INTENCLR       (0x42001C24) /**< (TCC2) Interrupt Enable Clear */
#define REG_TCC2_INTENSET       (0x42001C28) /**< (TCC2) Interrupt Enable Set */
#define REG_TCC2_INTFLAG        (0x42001C2C) /**< (TCC2) Interrupt Flag Status and Clear */
#define REG_TCC2_STATUS         (0x42001C30) /**< (TCC2) Status */
#define REG_TCC2_COUNT          (0x42001C34) /**< (TCC2) Count */
#define REG_TCC2_PATT           (0x42001C38) /**< (TCC2) Pattern */
#define REG_TCC2_WAVE           (0x42001C3C) /**< (TCC2) Waveform Control */
#define REG_TCC2_PER            (0x42001C40) /**< (TCC2) Period */
#define REG_TCC2_CC             (0x42001C44) /**< (TCC2) Compare and Capture */
#define REG_TCC2_CC0            (0x42001C44) /**< (TCC2) Compare and Capture 0 */
#define REG_TCC2_CC1            (0x42001C48) /**< (TCC2) Compare and Capture 1 */
#define REG_TCC2_CC2            (0x42001C4C) /**< (TCC2) Compare and Capture 2 */
#define REG_TCC2_CC3            (0x42001C50) /**< (TCC2) Compare and Capture 3 */
#define REG_TCC2_PATTBUF        (0x42001C64) /**< (TCC2) Pattern Buffer */
#define REG_TCC2_PERBUF         (0x42001C6C) /**< (TCC2) Period Buffer */
#define REG_TCC2_CCBUF          (0x42001C70) /**< (TCC2) Compare and Capture Buffer */
#define REG_TCC2_CCBUF0         (0x42001C70) /**< (TCC2) Compare and Capture Buffer 0 */
#define REG_TCC2_CCBUF1         (0x42001C74) /**< (TCC2) Compare and Capture Buffer 1 */
#define REG_TCC2_CCBUF2         (0x42001C78) /**< (TCC2) Compare and Capture Buffer 2 */
#define REG_TCC2_CCBUF3         (0x42001C7C) /**< (TCC2) Compare and Capture Buffer 3 */

#else

#define REG_TCC2_CTRLA          (*(__IO uint32_t*)0x42001C00U) /**< (TCC2) Control A */
#define REG_TCC2_CTRLBCLR       (*(__IO uint8_t*)0x42001C04U) /**< (TCC2) Control B Clear */
#define REG_TCC2_CTRLBSET       (*(__IO uint8_t*)0x42001C05U) /**< (TCC2) Control B Set */
#define REG_TCC2_SYNCBUSY       (*(__I  uint32_t*)0x42001C08U) /**< (TCC2) Synchronization Busy */
#define REG_TCC2_FCTRLA         (*(__IO uint32_t*)0x42001C0CU) /**< (TCC2) Recoverable Fault A Configuration */
#define REG_TCC2_FCTRLB         (*(__IO uint32_t*)0x42001C10U) /**< (TCC2) Recoverable Fault B Configuration */
#define REG_TCC2_WEXCTRL        (*(__IO uint32_t*)0x42001C14U) /**< (TCC2) Waveform Extension Configuration */
#define REG_TCC2_DRVCTRL        (*(__IO uint32_t*)0x42001C18U) /**< (TCC2) Driver Control */
#define REG_TCC2_DBGCTRL        (*(__IO uint8_t*)0x42001C1EU) /**< (TCC2) Debug Control */
#define REG_TCC2_EVCTRL         (*(__IO uint32_t*)0x42001C20U) /**< (TCC2) Event Control */
#define REG_TCC2_INTENCLR       (*(__IO uint32_t*)0x42001C24U) /**< (TCC2) Interrupt Enable Clear */
#define REG_TCC2_INTENSET       (*(__IO uint32_t*)0x42001C28U) /**< (TCC2) Interrupt Enable Set */
#define REG_TCC2_INTFLAG        (*(__IO uint32_t*)0x42001C2CU) /**< (TCC2) Interrupt Flag Status and Clear */
#define REG_TCC2_STATUS         (*(__IO uint32_t*)0x42001C30U) /**< (TCC2) Status */
#define REG_TCC2_COUNT          (*(__IO uint32_t*)0x42001C34U) /**< (TCC2) Count */
#define REG_TCC2_PATT           (*(__IO uint16_t*)0x42001C38U) /**< (TCC2) Pattern */
#define REG_TCC2_WAVE           (*(__IO uint32_t*)0x42001C3CU) /**< (TCC2) Waveform Control */
#define REG_TCC2_PER            (*(__IO uint32_t*)0x42001C40U) /**< (TCC2) Period */
#define REG_TCC2_CC             (*(__IO uint32_t*)0x42001C44U) /**< (TCC2) Compare and Capture */
#define REG_TCC2_CC0            (*(__IO uint32_t*)0x42001C44U) /**< (TCC2) Compare and Capture 0 */
#define REG_TCC2_CC1            (*(__IO uint32_t*)0x42001C48U) /**< (TCC2) Compare and Capture 1 */
#define REG_TCC2_CC2            (*(__IO uint32_t*)0x42001C4CU) /**< (TCC2) Compare and Capture 2 */
#define REG_TCC2_CC3            (*(__IO uint32_t*)0x42001C50U) /**< (TCC2) Compare and Capture 3 */
#define REG_TCC2_PATTBUF        (*(__IO uint16_t*)0x42001C64U) /**< (TCC2) Pattern Buffer */
#define REG_TCC2_PERBUF         (*(__IO uint32_t*)0x42001C6CU) /**< (TCC2) Period Buffer */
#define REG_TCC2_CCBUF          (*(__IO uint32_t*)0x42001C70U) /**< (TCC2) Compare and Capture Buffer */
#define REG_TCC2_CCBUF0         (*(__IO uint32_t*)0x42001C70U) /**< (TCC2) Compare and Capture Buffer 0 */
#define REG_TCC2_CCBUF1         (*(__IO uint32_t*)0x42001C74U) /**< (TCC2) Compare and Capture Buffer 1 */
#define REG_TCC2_CCBUF2         (*(__IO uint32_t*)0x42001C78U) /**< (TCC2) Compare and Capture Buffer 2 */
#define REG_TCC2_CCBUF3         (*(__IO uint32_t*)0x42001C7CU) /**< (TCC2) Compare and Capture Buffer 3 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for TCC2 peripheral ========== */
#define TCC2_CC_NUM                              2          /* Number of Compare/Capture units */
#define TCC2_DITHERING                           0          /* Dithering feature implemented */
#define TCC2_DMAC_ID_OVF                         19         /* DMA overflow/underflow/retrigger trigger */
#define TCC2_DTI                                 0          /* Dead-Time-Insertion feature implemented */
#define TCC2_EXT                                 0          /* Coding of implemented extended features */
#define TCC2_GCLK_ID                             26         /* Index of Generic Clock */
#define TCC2_OTMX                                0          /* Output Matrix feature implemented */
#define TCC2_OW_NUM                              2          /* Number of Output Waveforms */
#define TCC2_PG                                  0          /* Pattern Generation feature implemented */
#define TCC2_SIZE                                16         
#define TCC2_SWAP                                0          /* DTI outputs swap feature implemented */
#define TCC2_TYPE                                0          /* TCC type 0 : NA, 1 : Master, 2 : Slave */
#define TCC2_INSTANCE_ID                         71         

#endif /* _WLR089_TCC2_INSTANCE_ */
