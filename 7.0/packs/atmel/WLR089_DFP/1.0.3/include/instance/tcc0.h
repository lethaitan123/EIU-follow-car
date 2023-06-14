/**
 * \brief Instance description for TCC0
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
#ifndef _WLR089_TCC0_INSTANCE_H_
#define _WLR089_TCC0_INSTANCE_H_

/* ========== Register definition for TCC0 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_TCC0_CTRLA          (0x42001400) /**< (TCC0) Control A */
#define REG_TCC0_CTRLBCLR       (0x42001404) /**< (TCC0) Control B Clear */
#define REG_TCC0_CTRLBSET       (0x42001405) /**< (TCC0) Control B Set */
#define REG_TCC0_SYNCBUSY       (0x42001408) /**< (TCC0) Synchronization Busy */
#define REG_TCC0_FCTRLA         (0x4200140C) /**< (TCC0) Recoverable Fault A Configuration */
#define REG_TCC0_FCTRLB         (0x42001410) /**< (TCC0) Recoverable Fault B Configuration */
#define REG_TCC0_WEXCTRL        (0x42001414) /**< (TCC0) Waveform Extension Configuration */
#define REG_TCC0_DRVCTRL        (0x42001418) /**< (TCC0) Driver Control */
#define REG_TCC0_DBGCTRL        (0x4200141E) /**< (TCC0) Debug Control */
#define REG_TCC0_EVCTRL         (0x42001420) /**< (TCC0) Event Control */
#define REG_TCC0_INTENCLR       (0x42001424) /**< (TCC0) Interrupt Enable Clear */
#define REG_TCC0_INTENSET       (0x42001428) /**< (TCC0) Interrupt Enable Set */
#define REG_TCC0_INTFLAG        (0x4200142C) /**< (TCC0) Interrupt Flag Status and Clear */
#define REG_TCC0_STATUS         (0x42001430) /**< (TCC0) Status */
#define REG_TCC0_COUNT          (0x42001434) /**< (TCC0) Count */
#define REG_TCC0_PATT           (0x42001438) /**< (TCC0) Pattern */
#define REG_TCC0_WAVE           (0x4200143C) /**< (TCC0) Waveform Control */
#define REG_TCC0_PER            (0x42001440) /**< (TCC0) Period */
#define REG_TCC0_CC             (0x42001444) /**< (TCC0) Compare and Capture */
#define REG_TCC0_CC0            (0x42001444) /**< (TCC0) Compare and Capture 0 */
#define REG_TCC0_CC1            (0x42001448) /**< (TCC0) Compare and Capture 1 */
#define REG_TCC0_CC2            (0x4200144C) /**< (TCC0) Compare and Capture 2 */
#define REG_TCC0_CC3            (0x42001450) /**< (TCC0) Compare and Capture 3 */
#define REG_TCC0_PATTBUF        (0x42001464) /**< (TCC0) Pattern Buffer */
#define REG_TCC0_PERBUF         (0x4200146C) /**< (TCC0) Period Buffer */
#define REG_TCC0_CCBUF          (0x42001470) /**< (TCC0) Compare and Capture Buffer */
#define REG_TCC0_CCBUF0         (0x42001470) /**< (TCC0) Compare and Capture Buffer 0 */
#define REG_TCC0_CCBUF1         (0x42001474) /**< (TCC0) Compare and Capture Buffer 1 */
#define REG_TCC0_CCBUF2         (0x42001478) /**< (TCC0) Compare and Capture Buffer 2 */
#define REG_TCC0_CCBUF3         (0x4200147C) /**< (TCC0) Compare and Capture Buffer 3 */

#else

#define REG_TCC0_CTRLA          (*(__IO uint32_t*)0x42001400U) /**< (TCC0) Control A */
#define REG_TCC0_CTRLBCLR       (*(__IO uint8_t*)0x42001404U) /**< (TCC0) Control B Clear */
#define REG_TCC0_CTRLBSET       (*(__IO uint8_t*)0x42001405U) /**< (TCC0) Control B Set */
#define REG_TCC0_SYNCBUSY       (*(__I  uint32_t*)0x42001408U) /**< (TCC0) Synchronization Busy */
#define REG_TCC0_FCTRLA         (*(__IO uint32_t*)0x4200140CU) /**< (TCC0) Recoverable Fault A Configuration */
#define REG_TCC0_FCTRLB         (*(__IO uint32_t*)0x42001410U) /**< (TCC0) Recoverable Fault B Configuration */
#define REG_TCC0_WEXCTRL        (*(__IO uint32_t*)0x42001414U) /**< (TCC0) Waveform Extension Configuration */
#define REG_TCC0_DRVCTRL        (*(__IO uint32_t*)0x42001418U) /**< (TCC0) Driver Control */
#define REG_TCC0_DBGCTRL        (*(__IO uint8_t*)0x4200141EU) /**< (TCC0) Debug Control */
#define REG_TCC0_EVCTRL         (*(__IO uint32_t*)0x42001420U) /**< (TCC0) Event Control */
#define REG_TCC0_INTENCLR       (*(__IO uint32_t*)0x42001424U) /**< (TCC0) Interrupt Enable Clear */
#define REG_TCC0_INTENSET       (*(__IO uint32_t*)0x42001428U) /**< (TCC0) Interrupt Enable Set */
#define REG_TCC0_INTFLAG        (*(__IO uint32_t*)0x4200142CU) /**< (TCC0) Interrupt Flag Status and Clear */
#define REG_TCC0_STATUS         (*(__IO uint32_t*)0x42001430U) /**< (TCC0) Status */
#define REG_TCC0_COUNT          (*(__IO uint32_t*)0x42001434U) /**< (TCC0) Count */
#define REG_TCC0_PATT           (*(__IO uint16_t*)0x42001438U) /**< (TCC0) Pattern */
#define REG_TCC0_WAVE           (*(__IO uint32_t*)0x4200143CU) /**< (TCC0) Waveform Control */
#define REG_TCC0_PER            (*(__IO uint32_t*)0x42001440U) /**< (TCC0) Period */
#define REG_TCC0_CC             (*(__IO uint32_t*)0x42001444U) /**< (TCC0) Compare and Capture */
#define REG_TCC0_CC0            (*(__IO uint32_t*)0x42001444U) /**< (TCC0) Compare and Capture 0 */
#define REG_TCC0_CC1            (*(__IO uint32_t*)0x42001448U) /**< (TCC0) Compare and Capture 1 */
#define REG_TCC0_CC2            (*(__IO uint32_t*)0x4200144CU) /**< (TCC0) Compare and Capture 2 */
#define REG_TCC0_CC3            (*(__IO uint32_t*)0x42001450U) /**< (TCC0) Compare and Capture 3 */
#define REG_TCC0_PATTBUF        (*(__IO uint16_t*)0x42001464U) /**< (TCC0) Pattern Buffer */
#define REG_TCC0_PERBUF         (*(__IO uint32_t*)0x4200146CU) /**< (TCC0) Period Buffer */
#define REG_TCC0_CCBUF          (*(__IO uint32_t*)0x42001470U) /**< (TCC0) Compare and Capture Buffer */
#define REG_TCC0_CCBUF0         (*(__IO uint32_t*)0x42001470U) /**< (TCC0) Compare and Capture Buffer 0 */
#define REG_TCC0_CCBUF1         (*(__IO uint32_t*)0x42001474U) /**< (TCC0) Compare and Capture Buffer 1 */
#define REG_TCC0_CCBUF2         (*(__IO uint32_t*)0x42001478U) /**< (TCC0) Compare and Capture Buffer 2 */
#define REG_TCC0_CCBUF3         (*(__IO uint32_t*)0x4200147CU) /**< (TCC0) Compare and Capture Buffer 3 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for TCC0 peripheral ========== */
#define TCC0_CC_NUM                              4          /* Number of Compare/Capture units */
#define TCC0_DITHERING                           1          /* Dithering feature implemented */
#define TCC0_DMAC_ID_OVF                         11         /* DMA overflow/underflow/retrigger trigger */
#define TCC0_DTI                                 1          /* Dead-Time-Insertion feature implemented */
#define TCC0_EXT                                 31         /* Coding of implemented extended features */
#define TCC0_GCLK_ID                             25         /* Index of Generic Clock */
#define TCC0_OTMX                                1          /* Output Matrix feature implemented */
#define TCC0_OW_NUM                              8          /* Number of Output Waveforms */
#define TCC0_PG                                  1          /* Pattern Generation feature implemented */
#define TCC0_SIZE                                24         
#define TCC0_SWAP                                1          /* DTI outputs swap feature implemented */
#define TCC0_TYPE                                1          /* TCC type 0 : NA, 1 : Master, 2 : Slave */
#define TCC0_INSTANCE_ID                         69         

#endif /* _WLR089_TCC0_INSTANCE_ */
