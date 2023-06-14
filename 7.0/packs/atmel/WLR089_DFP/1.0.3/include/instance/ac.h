/**
 * \brief Instance description for AC
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
#ifndef _WLR089_AC_INSTANCE_H_
#define _WLR089_AC_INSTANCE_H_

/* ========== Register definition for AC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_AC_CTRLA            (0x43001000) /**< (AC) Control A */
#define REG_AC_CTRLB            (0x43001001) /**< (AC) Control B */
#define REG_AC_EVCTRL           (0x43001002) /**< (AC) Event Control */
#define REG_AC_INTENCLR         (0x43001004) /**< (AC) Interrupt Enable Clear */
#define REG_AC_INTENSET         (0x43001005) /**< (AC) Interrupt Enable Set */
#define REG_AC_INTFLAG          (0x43001006) /**< (AC) Interrupt Flag Status and Clear */
#define REG_AC_STATUSA          (0x43001007) /**< (AC) Status A */
#define REG_AC_STATUSB          (0x43001008) /**< (AC) Status B */
#define REG_AC_DBGCTRL          (0x43001009) /**< (AC) Debug Control */
#define REG_AC_WINCTRL          (0x4300100A) /**< (AC) Window Control */
#define REG_AC_SCALER           (0x4300100C) /**< (AC) Scaler n */
#define REG_AC_SCALER0          (0x4300100C) /**< (AC) Scaler 0 */
#define REG_AC_SCALER1          (0x4300100D) /**< (AC) Scaler 1 */
#define REG_AC_COMPCTRL         (0x43001010) /**< (AC) Comparator Control n */
#define REG_AC_COMPCTRL0        (0x43001010) /**< (AC) Comparator Control 0 */
#define REG_AC_COMPCTRL1        (0x43001014) /**< (AC) Comparator Control 1 */
#define REG_AC_SYNCBUSY         (0x43001020) /**< (AC) Synchronization Busy */

#else

#define REG_AC_CTRLA            (*(__IO uint8_t*)0x43001000U) /**< (AC) Control A */
#define REG_AC_CTRLB            (*(__O  uint8_t*)0x43001001U) /**< (AC) Control B */
#define REG_AC_EVCTRL           (*(__IO uint16_t*)0x43001002U) /**< (AC) Event Control */
#define REG_AC_INTENCLR         (*(__IO uint8_t*)0x43001004U) /**< (AC) Interrupt Enable Clear */
#define REG_AC_INTENSET         (*(__IO uint8_t*)0x43001005U) /**< (AC) Interrupt Enable Set */
#define REG_AC_INTFLAG          (*(__IO uint8_t*)0x43001006U) /**< (AC) Interrupt Flag Status and Clear */
#define REG_AC_STATUSA          (*(__I  uint8_t*)0x43001007U) /**< (AC) Status A */
#define REG_AC_STATUSB          (*(__I  uint8_t*)0x43001008U) /**< (AC) Status B */
#define REG_AC_DBGCTRL          (*(__IO uint8_t*)0x43001009U) /**< (AC) Debug Control */
#define REG_AC_WINCTRL          (*(__IO uint8_t*)0x4300100AU) /**< (AC) Window Control */
#define REG_AC_SCALER           (*(__IO uint8_t*)0x4300100CU) /**< (AC) Scaler n */
#define REG_AC_SCALER0          (*(__IO uint8_t*)0x4300100CU) /**< (AC) Scaler 0 */
#define REG_AC_SCALER1          (*(__IO uint8_t*)0x4300100DU) /**< (AC) Scaler 1 */
#define REG_AC_COMPCTRL         (*(__IO uint32_t*)0x43001010U) /**< (AC) Comparator Control n */
#define REG_AC_COMPCTRL0        (*(__IO uint32_t*)0x43001010U) /**< (AC) Comparator Control 0 */
#define REG_AC_COMPCTRL1        (*(__IO uint32_t*)0x43001014U) /**< (AC) Comparator Control 1 */
#define REG_AC_SYNCBUSY         (*(__I  uint32_t*)0x43001020U) /**< (AC) Synchronization Busy */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for AC peripheral ========== */
#define AC_GCLK_ID                               31         /* Index of Generic Clock */
#define AC_NUM_CMP                               2          /* Number of comparators */
#define AC_PAIRS                                 1          /* Number of pairs of comparators */
#define AC_INSTANCE_ID                           100        

#endif /* _WLR089_AC_INSTANCE_ */
