/**
 * \brief Instance description for PAC
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
#ifndef _WLR089_PAC_INSTANCE_H_
#define _WLR089_PAC_INSTANCE_H_

/* ========== Register definition for PAC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_PAC_WRCTRL          (0x44000000) /**< (PAC) Write control */
#define REG_PAC_EVCTRL          (0x44000004) /**< (PAC) Event control */
#define REG_PAC_INTENCLR        (0x44000008) /**< (PAC) Interrupt enable clear */
#define REG_PAC_INTENSET        (0x44000009) /**< (PAC) Interrupt enable set */
#define REG_PAC_INTFLAGAHB      (0x44000010) /**< (PAC) Bridge interrupt flag status */
#define REG_PAC_INTFLAGA        (0x44000014) /**< (PAC) Peripheral interrupt flag status - Bridge A */
#define REG_PAC_INTFLAGB        (0x44000018) /**< (PAC) Peripheral interrupt flag status - Bridge B */
#define REG_PAC_INTFLAGC        (0x4400001C) /**< (PAC) Peripheral interrupt flag status - Bridge C */
#define REG_PAC_INTFLAGD        (0x44000020) /**< (PAC) Peripheral interrupt flag status - Bridge D */
#define REG_PAC_INTFLAGE        (0x44000024) /**< (PAC) Peripheral interrupt flag status - Bridge E */
#define REG_PAC_STATUSA         (0x44000034) /**< (PAC) Peripheral write protection status - Bridge A */
#define REG_PAC_STATUSB         (0x44000038) /**< (PAC) Peripheral write protection status - Bridge B */
#define REG_PAC_STATUSC         (0x4400003C) /**< (PAC) Peripheral write protection status - Bridge C */
#define REG_PAC_STATUSD         (0x44000040) /**< (PAC) Peripheral write protection status - Bridge D */
#define REG_PAC_STATUSE         (0x44000044) /**< (PAC) Peripheral write protection status - Bridge E */

#else

#define REG_PAC_WRCTRL          (*(__IO uint32_t*)0x44000000U) /**< (PAC) Write control */
#define REG_PAC_EVCTRL          (*(__IO uint8_t*)0x44000004U) /**< (PAC) Event control */
#define REG_PAC_INTENCLR        (*(__IO uint8_t*)0x44000008U) /**< (PAC) Interrupt enable clear */
#define REG_PAC_INTENSET        (*(__IO uint8_t*)0x44000009U) /**< (PAC) Interrupt enable set */
#define REG_PAC_INTFLAGAHB      (*(__IO uint32_t*)0x44000010U) /**< (PAC) Bridge interrupt flag status */
#define REG_PAC_INTFLAGA        (*(__IO uint32_t*)0x44000014U) /**< (PAC) Peripheral interrupt flag status - Bridge A */
#define REG_PAC_INTFLAGB        (*(__IO uint32_t*)0x44000018U) /**< (PAC) Peripheral interrupt flag status - Bridge B */
#define REG_PAC_INTFLAGC        (*(__IO uint32_t*)0x4400001CU) /**< (PAC) Peripheral interrupt flag status - Bridge C */
#define REG_PAC_INTFLAGD        (*(__IO uint32_t*)0x44000020U) /**< (PAC) Peripheral interrupt flag status - Bridge D */
#define REG_PAC_INTFLAGE        (*(__IO uint32_t*)0x44000024U) /**< (PAC) Peripheral interrupt flag status - Bridge E */
#define REG_PAC_STATUSA         (*(__I  uint32_t*)0x44000034U) /**< (PAC) Peripheral write protection status - Bridge A */
#define REG_PAC_STATUSB         (*(__I  uint32_t*)0x44000038U) /**< (PAC) Peripheral write protection status - Bridge B */
#define REG_PAC_STATUSC         (*(__I  uint32_t*)0x4400003CU) /**< (PAC) Peripheral write protection status - Bridge C */
#define REG_PAC_STATUSD         (*(__I  uint32_t*)0x44000040U) /**< (PAC) Peripheral write protection status - Bridge D */
#define REG_PAC_STATUSE         (*(__I  uint32_t*)0x44000044U) /**< (PAC) Peripheral write protection status - Bridge E */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for PAC peripheral ========== */
#define PAC_HPB_NUM                              5          /* Number of bridges AHB/APB */
#define PAC_INTFLAG_NUM                          6          /* Number of intflag registers */
#define PAC_INSTANCE_ID                          128        

#endif /* _WLR089_PAC_INSTANCE_ */
