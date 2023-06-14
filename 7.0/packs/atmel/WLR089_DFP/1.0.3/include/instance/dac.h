/**
 * \brief Instance description for DAC
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
#ifndef _WLR089_DAC_INSTANCE_H_
#define _WLR089_DAC_INSTANCE_H_

/* ========== Register definition for DAC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_DAC_CTRLA           (0x42003000) /**< (DAC) Control A */
#define REG_DAC_CTRLB           (0x42003001) /**< (DAC) Control B */
#define REG_DAC_EVCTRL          (0x42003002) /**< (DAC) Event Control */
#define REG_DAC_INTENCLR        (0x42003004) /**< (DAC) Interrupt Enable Clear */
#define REG_DAC_INTENSET        (0x42003005) /**< (DAC) Interrupt Enable Set */
#define REG_DAC_INTFLAG         (0x42003006) /**< (DAC) Interrupt Flag Status and Clear */
#define REG_DAC_STATUS          (0x42003007) /**< (DAC) Status */
#define REG_DAC_SYNCBUSY        (0x42003008) /**< (DAC) Synchronization Busy */
#define REG_DAC_DACCTRL         (0x4200300C) /**< (DAC) DAC n Control */
#define REG_DAC_DACCTRL0        (0x4200300C) /**< (DAC) DAC 0 Control */
#define REG_DAC_DACCTRL1        (0x4200300E) /**< (DAC) DAC 1 Control */
#define REG_DAC_DATA            (0x42003010) /**< (DAC) DAC n Data */
#define REG_DAC_DATA0           (0x42003010) /**< (DAC) DAC 0 Data */
#define REG_DAC_DATA1           (0x42003012) /**< (DAC) DAC 1 Data */
#define REG_DAC_DATABUF         (0x42003014) /**< (DAC) DAC n Data Buffer */
#define REG_DAC_DATABUF0        (0x42003014) /**< (DAC) DAC 0 Data Buffer */
#define REG_DAC_DATABUF1        (0x42003016) /**< (DAC) DAC 1 Data Buffer */
#define REG_DAC_DBGCTRL         (0x42003018) /**< (DAC) Debug Control */

#else

#define REG_DAC_CTRLA           (*(__IO uint8_t*)0x42003000U) /**< (DAC) Control A */
#define REG_DAC_CTRLB           (*(__IO uint8_t*)0x42003001U) /**< (DAC) Control B */
#define REG_DAC_EVCTRL          (*(__IO uint8_t*)0x42003002U) /**< (DAC) Event Control */
#define REG_DAC_INTENCLR        (*(__IO uint8_t*)0x42003004U) /**< (DAC) Interrupt Enable Clear */
#define REG_DAC_INTENSET        (*(__IO uint8_t*)0x42003005U) /**< (DAC) Interrupt Enable Set */
#define REG_DAC_INTFLAG         (*(__IO uint8_t*)0x42003006U) /**< (DAC) Interrupt Flag Status and Clear */
#define REG_DAC_STATUS          (*(__I  uint8_t*)0x42003007U) /**< (DAC) Status */
#define REG_DAC_SYNCBUSY        (*(__I  uint32_t*)0x42003008U) /**< (DAC) Synchronization Busy */
#define REG_DAC_DACCTRL         (*(__IO uint16_t*)0x4200300CU) /**< (DAC) DAC n Control */
#define REG_DAC_DACCTRL0        (*(__IO uint16_t*)0x4200300CU) /**< (DAC) DAC 0 Control */
#define REG_DAC_DACCTRL1        (*(__IO uint16_t*)0x4200300EU) /**< (DAC) DAC 1 Control */
#define REG_DAC_DATA            (*(__O  uint16_t*)0x42003010U) /**< (DAC) DAC n Data */
#define REG_DAC_DATA0           (*(__O  uint16_t*)0x42003010U) /**< (DAC) DAC 0 Data */
#define REG_DAC_DATA1           (*(__O  uint16_t*)0x42003012U) /**< (DAC) DAC 1 Data */
#define REG_DAC_DATABUF         (*(__O  uint16_t*)0x42003014U) /**< (DAC) DAC n Data Buffer */
#define REG_DAC_DATABUF0        (*(__O  uint16_t*)0x42003014U) /**< (DAC) DAC 0 Data Buffer */
#define REG_DAC_DATABUF1        (*(__O  uint16_t*)0x42003016U) /**< (DAC) DAC 1 Data Buffer */
#define REG_DAC_DBGCTRL         (*(__IO uint8_t*)0x42003018U) /**< (DAC) Debug Control */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for DAC peripheral ========== */
#define DAC_DAC_NUM                              2          /* Number of DACs */
#define DAC_DATA_SIZE                            12         /* Number of bits in data */
#define DAC_GCLK_ID                              32         /* Index of Generic Clock */
#define DAC_INSTANCE_ID                          76         

#endif /* _WLR089_DAC_INSTANCE_ */
