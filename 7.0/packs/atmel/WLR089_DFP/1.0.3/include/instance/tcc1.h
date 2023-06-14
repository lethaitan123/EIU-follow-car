/**
 * \brief Instance description for TCC1
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
#ifndef _WLR089_TCC1_INSTANCE_H_
#define _WLR089_TCC1_INSTANCE_H_

/* ========== Register definition for TCC1 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_TCC1_CTRLA          (0x42001800) /**< (TCC1) Control A */
#define REG_TCC1_CTRLBCLR       (0x42001804) /**< (TCC1) Control B Clear */
#define REG_TCC1_CTRLBSET       (0x42001805) /**< (TCC1) Control B Set */
#define REG_TCC1_SYNCBUSY       (0x42001808) /**< (TCC1) Synchronization Busy */
#define REG_TCC1_FCTRLA         (0x4200180C) /**< (TCC1) Recoverable Fault A Configuration */
#define REG_TCC1_FCTRLB         (0x42001810) /**< (TCC1) Recoverable Fault B Configuration */
#define REG_TCC1_WEXCTRL        (0x42001814) /**< (TCC1) Waveform Extension Configuration */
#define REG_TCC1_DRVCTRL        (0x42001818) /**< (TCC1) Driver Control */
#define REG_TCC1_DBGCTRL        (0x4200181E) /**< (TCC1) Debug Control */
#define REG_TCC1_EVCTRL         (0x42001820) /**< (TCC1) Event Control */
#define REG_TCC1_INTENCLR       (0x42001824) /**< (TCC1) Interrupt Enable Clear */
#define REG_TCC1_INTENSET       (0x42001828) /**< (TCC1) Interrupt Enable Set */
#define REG_TCC1_INTFLAG        (0x4200182C) /**< (TCC1) Interrupt Flag Status and Clear */
#define REG_TCC1_STATUS         (0x42001830) /**< (TCC1) Status */
#define REG_TCC1_COUNT          (0x42001834) /**< (TCC1) Count */
#define REG_TCC1_PATT           (0x42001838) /**< (TCC1) Pattern */
#define REG_TCC1_WAVE           (0x4200183C) /**< (TCC1) Waveform Control */
#define REG_TCC1_PER            (0x42001840) /**< (TCC1) Period */
#define REG_TCC1_CC             (0x42001844) /**< (TCC1) Compare and Capture */
#define REG_TCC1_CC0            (0x42001844) /**< (TCC1) Compare and Capture 0 */
#define REG_TCC1_CC1            (0x42001848) /**< (TCC1) Compare and Capture 1 */
#define REG_TCC1_CC2            (0x4200184C) /**< (TCC1) Compare and Capture 2 */
#define REG_TCC1_CC3            (0x42001850) /**< (TCC1) Compare and Capture 3 */
#define REG_TCC1_PATTBUF        (0x42001864) /**< (TCC1) Pattern Buffer */
#define REG_TCC1_PERBUF         (0x4200186C) /**< (TCC1) Period Buffer */
#define REG_TCC1_CCBUF          (0x42001870) /**< (TCC1) Compare and Capture Buffer */
#define REG_TCC1_CCBUF0         (0x42001870) /**< (TCC1) Compare and Capture Buffer 0 */
#define REG_TCC1_CCBUF1         (0x42001874) /**< (TCC1) Compare and Capture Buffer 1 */
#define REG_TCC1_CCBUF2         (0x42001878) /**< (TCC1) Compare and Capture Buffer 2 */
#define REG_TCC1_CCBUF3         (0x4200187C) /**< (TCC1) Compare and Capture Buffer 3 */

#else

#define REG_TCC1_CTRLA          (*(__IO uint32_t*)0x42001800U) /**< (TCC1) Control A */
#define REG_TCC1_CTRLBCLR       (*(__IO uint8_t*)0x42001804U) /**< (TCC1) Control B Clear */
#define REG_TCC1_CTRLBSET       (*(__IO uint8_t*)0x42001805U) /**< (TCC1) Control B Set */
#define REG_TCC1_SYNCBUSY       (*(__I  uint32_t*)0x42001808U) /**< (TCC1) Synchronization Busy */
#define REG_TCC1_FCTRLA         (*(__IO uint32_t*)0x4200180CU) /**< (TCC1) Recoverable Fault A Configuration */
#define REG_TCC1_FCTRLB         (*(__IO uint32_t*)0x42001810U) /**< (TCC1) Recoverable Fault B Configuration */
#define REG_TCC1_WEXCTRL        (*(__IO uint32_t*)0x42001814U) /**< (TCC1) Waveform Extension Configuration */
#define REG_TCC1_DRVCTRL        (*(__IO uint32_t*)0x42001818U) /**< (TCC1) Driver Control */
#define REG_TCC1_DBGCTRL        (*(__IO uint8_t*)0x4200181EU) /**< (TCC1) Debug Control */
#define REG_TCC1_EVCTRL         (*(__IO uint32_t*)0x42001820U) /**< (TCC1) Event Control */
#define REG_TCC1_INTENCLR       (*(__IO uint32_t*)0x42001824U) /**< (TCC1) Interrupt Enable Clear */
#define REG_TCC1_INTENSET       (*(__IO uint32_t*)0x42001828U) /**< (TCC1) Interrupt Enable Set */
#define REG_TCC1_INTFLAG        (*(__IO uint32_t*)0x4200182CU) /**< (TCC1) Interrupt Flag Status and Clear */
#define REG_TCC1_STATUS         (*(__IO uint32_t*)0x42001830U) /**< (TCC1) Status */
#define REG_TCC1_COUNT          (*(__IO uint32_t*)0x42001834U) /**< (TCC1) Count */
#define REG_TCC1_PATT           (*(__IO uint16_t*)0x42001838U) /**< (TCC1) Pattern */
#define REG_TCC1_WAVE           (*(__IO uint32_t*)0x4200183CU) /**< (TCC1) Waveform Control */
#define REG_TCC1_PER            (*(__IO uint32_t*)0x42001840U) /**< (TCC1) Period */
#define REG_TCC1_CC             (*(__IO uint32_t*)0x42001844U) /**< (TCC1) Compare and Capture */
#define REG_TCC1_CC0            (*(__IO uint32_t*)0x42001844U) /**< (TCC1) Compare and Capture 0 */
#define REG_TCC1_CC1            (*(__IO uint32_t*)0x42001848U) /**< (TCC1) Compare and Capture 1 */
#define REG_TCC1_CC2            (*(__IO uint32_t*)0x4200184CU) /**< (TCC1) Compare and Capture 2 */
#define REG_TCC1_CC3            (*(__IO uint32_t*)0x42001850U) /**< (TCC1) Compare and Capture 3 */
#define REG_TCC1_PATTBUF        (*(__IO uint16_t*)0x42001864U) /**< (TCC1) Pattern Buffer */
#define REG_TCC1_PERBUF         (*(__IO uint32_t*)0x4200186CU) /**< (TCC1) Period Buffer */
#define REG_TCC1_CCBUF          (*(__IO uint32_t*)0x42001870U) /**< (TCC1) Compare and Capture Buffer */
#define REG_TCC1_CCBUF0         (*(__IO uint32_t*)0x42001870U) /**< (TCC1) Compare and Capture Buffer 0 */
#define REG_TCC1_CCBUF1         (*(__IO uint32_t*)0x42001874U) /**< (TCC1) Compare and Capture Buffer 1 */
#define REG_TCC1_CCBUF2         (*(__IO uint32_t*)0x42001878U) /**< (TCC1) Compare and Capture Buffer 2 */
#define REG_TCC1_CCBUF3         (*(__IO uint32_t*)0x4200187CU) /**< (TCC1) Compare and Capture Buffer 3 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for TCC1 peripheral ========== */
#define TCC1_CC_NUM                              2          /* Number of Compare/Capture units */
#define TCC1_DITHERING                           1          /* Dithering feature implemented */
#define TCC1_DMAC_ID_OVF                         16         /* DMA overflow/underflow/retrigger trigger */
#define TCC1_DTI                                 0          /* Dead-Time-Insertion feature implemented */
#define TCC1_EXT                                 24         /* Coding of implemented extended features */
#define TCC1_GCLK_ID                             25         /* Index of Generic Clock */
#define TCC1_OTMX                                0          /* Output Matrix feature implemented */
#define TCC1_OW_NUM                              4          /* Number of Output Waveforms */
#define TCC1_PG                                  1          /* Pattern Generation feature implemented */
#define TCC1_SIZE                                24         
#define TCC1_SWAP                                0          /* DTI outputs swap feature implemented */
#define TCC1_TYPE                                2          /* TCC type 0 : NA, 1 : Master, 2 : Slave */
#define TCC1_INSTANCE_ID                         70         

#endif /* _WLR089_TCC1_INSTANCE_ */
