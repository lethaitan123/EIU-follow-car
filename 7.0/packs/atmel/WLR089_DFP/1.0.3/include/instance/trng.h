/**
 * \brief Instance description for TRNG
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
#ifndef _WLR089_TRNG_INSTANCE_H_
#define _WLR089_TRNG_INSTANCE_H_

/* ========== Register definition for TRNG peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_TRNG_CTRLA          (0x42003800) /**< (TRNG) Control A */
#define REG_TRNG_EVCTRL         (0x42003804) /**< (TRNG) Event Control */
#define REG_TRNG_INTENCLR       (0x42003808) /**< (TRNG) Interrupt Enable Clear */
#define REG_TRNG_INTENSET       (0x42003809) /**< (TRNG) Interrupt Enable Set */
#define REG_TRNG_INTFLAG        (0x4200380A) /**< (TRNG) Interrupt Flag Status and Clear */
#define REG_TRNG_DATA           (0x42003820) /**< (TRNG) Output Data */

#else

#define REG_TRNG_CTRLA          (*(__IO uint8_t*)0x42003800U) /**< (TRNG) Control A */
#define REG_TRNG_EVCTRL         (*(__IO uint8_t*)0x42003804U) /**< (TRNG) Event Control */
#define REG_TRNG_INTENCLR       (*(__IO uint8_t*)0x42003808U) /**< (TRNG) Interrupt Enable Clear */
#define REG_TRNG_INTENSET       (*(__IO uint8_t*)0x42003809U) /**< (TRNG) Interrupt Enable Set */
#define REG_TRNG_INTFLAG        (*(__IO uint8_t*)0x4200380AU) /**< (TRNG) Interrupt Flag Status and Clear */
#define REG_TRNG_DATA           (*(__I  uint32_t*)0x42003820U) /**< (TRNG) Output Data */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for TRNG peripheral ========== */
#define TRNG_INSTANCE_ID                         78         

#endif /* _WLR089_TRNG_INSTANCE_ */
