/**
 * \brief Instance description for ADC
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
#ifndef _WLR089_ADC_INSTANCE_H_
#define _WLR089_ADC_INSTANCE_H_

/* ========== Register definition for ADC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_ADC_CTRLA           (0x43000C00) /**< (ADC) Control A */
#define REG_ADC_CTRLB           (0x43000C01) /**< (ADC) Control B */
#define REG_ADC_REFCTRL         (0x43000C02) /**< (ADC) Reference Control */
#define REG_ADC_EVCTRL          (0x43000C03) /**< (ADC) Event Control */
#define REG_ADC_INTENCLR        (0x43000C04) /**< (ADC) Interrupt Enable Clear */
#define REG_ADC_INTENSET        (0x43000C05) /**< (ADC) Interrupt Enable Set */
#define REG_ADC_INTFLAG         (0x43000C06) /**< (ADC) Interrupt Flag Status and Clear */
#define REG_ADC_SEQSTATUS       (0x43000C07) /**< (ADC) Sequence Status */
#define REG_ADC_INPUTCTRL       (0x43000C08) /**< (ADC) Input Control */
#define REG_ADC_CTRLC           (0x43000C0A) /**< (ADC) Control C */
#define REG_ADC_AVGCTRL         (0x43000C0C) /**< (ADC) Average Control */
#define REG_ADC_SAMPCTRL        (0x43000C0D) /**< (ADC) Sample Time Control */
#define REG_ADC_WINLT           (0x43000C0E) /**< (ADC) Window Monitor Lower Threshold */
#define REG_ADC_WINUT           (0x43000C10) /**< (ADC) Window Monitor Upper Threshold */
#define REG_ADC_GAINCORR        (0x43000C12) /**< (ADC) Gain Correction */
#define REG_ADC_OFFSETCORR      (0x43000C14) /**< (ADC) Offset Correction */
#define REG_ADC_SWTRIG          (0x43000C18) /**< (ADC) Software Trigger */
#define REG_ADC_DBGCTRL         (0x43000C1C) /**< (ADC) Debug Control */
#define REG_ADC_SYNCBUSY        (0x43000C20) /**< (ADC) Synchronization Busy */
#define REG_ADC_RESULT          (0x43000C24) /**< (ADC) Result */
#define REG_ADC_SEQCTRL         (0x43000C28) /**< (ADC) Sequence Control */
#define REG_ADC_CALIB           (0x43000C2C) /**< (ADC) Calibration */

#else

#define REG_ADC_CTRLA           (*(__IO uint8_t*)0x43000C00U) /**< (ADC) Control A */
#define REG_ADC_CTRLB           (*(__IO uint8_t*)0x43000C01U) /**< (ADC) Control B */
#define REG_ADC_REFCTRL         (*(__IO uint8_t*)0x43000C02U) /**< (ADC) Reference Control */
#define REG_ADC_EVCTRL          (*(__IO uint8_t*)0x43000C03U) /**< (ADC) Event Control */
#define REG_ADC_INTENCLR        (*(__IO uint8_t*)0x43000C04U) /**< (ADC) Interrupt Enable Clear */
#define REG_ADC_INTENSET        (*(__IO uint8_t*)0x43000C05U) /**< (ADC) Interrupt Enable Set */
#define REG_ADC_INTFLAG         (*(__IO uint8_t*)0x43000C06U) /**< (ADC) Interrupt Flag Status and Clear */
#define REG_ADC_SEQSTATUS       (*(__I  uint8_t*)0x43000C07U) /**< (ADC) Sequence Status */
#define REG_ADC_INPUTCTRL       (*(__IO uint16_t*)0x43000C08U) /**< (ADC) Input Control */
#define REG_ADC_CTRLC           (*(__IO uint16_t*)0x43000C0AU) /**< (ADC) Control C */
#define REG_ADC_AVGCTRL         (*(__IO uint8_t*)0x43000C0CU) /**< (ADC) Average Control */
#define REG_ADC_SAMPCTRL        (*(__IO uint8_t*)0x43000C0DU) /**< (ADC) Sample Time Control */
#define REG_ADC_WINLT           (*(__IO uint16_t*)0x43000C0EU) /**< (ADC) Window Monitor Lower Threshold */
#define REG_ADC_WINUT           (*(__IO uint16_t*)0x43000C10U) /**< (ADC) Window Monitor Upper Threshold */
#define REG_ADC_GAINCORR        (*(__IO uint16_t*)0x43000C12U) /**< (ADC) Gain Correction */
#define REG_ADC_OFFSETCORR      (*(__IO uint16_t*)0x43000C14U) /**< (ADC) Offset Correction */
#define REG_ADC_SWTRIG          (*(__IO uint8_t*)0x43000C18U) /**< (ADC) Software Trigger */
#define REG_ADC_DBGCTRL         (*(__IO uint8_t*)0x43000C1CU) /**< (ADC) Debug Control */
#define REG_ADC_SYNCBUSY        (*(__I  uint16_t*)0x43000C20U) /**< (ADC) Synchronization Busy */
#define REG_ADC_RESULT          (*(__I  uint16_t*)0x43000C24U) /**< (ADC) Result */
#define REG_ADC_SEQCTRL         (*(__IO uint32_t*)0x43000C28U) /**< (ADC) Sequence Control */
#define REG_ADC_CALIB           (*(__IO uint16_t*)0x43000C2CU) /**< (ADC) Calibration */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for ADC peripheral ========== */
#define ADC_DMAC_ID_RESRDY                       37         /* index of DMA RESRDY trigger */
#define ADC_EXTCHANNEL_MSB                       19         /* Number of external channels */
#define ADC_GCLK_ID                              30         /* index of Generic Clock */
#define ADC_RESULT_BITS                          16         /* Size of RESULT.RESULT bitfield */
#define ADC_RESULT_MSB                           15         /* Size of Result */
#define ADC_INSTANCE_ID                          99         
#define ADC_LOAD_CALIB                           1          /* CALIB register to be loaded from NVM */

#endif /* _WLR089_ADC_INSTANCE_ */
