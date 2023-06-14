/**
 * \brief Instance description for OSC32KCTRL
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
#ifndef _WLR089_OSC32KCTRL_INSTANCE_H_
#define _WLR089_OSC32KCTRL_INSTANCE_H_

/* ========== Register definition for OSC32KCTRL peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_OSC32KCTRL_INTENCLR (0x40001000) /**< (OSC32KCTRL) Interrupt Enable Clear */
#define REG_OSC32KCTRL_INTENSET (0x40001004) /**< (OSC32KCTRL) Interrupt Enable Set */
#define REG_OSC32KCTRL_INTFLAG  (0x40001008) /**< (OSC32KCTRL) Interrupt Flag Status and Clear */
#define REG_OSC32KCTRL_STATUS   (0x4000100C) /**< (OSC32KCTRL) Power and Clocks Status */
#define REG_OSC32KCTRL_RTCCTRL  (0x40001010) /**< (OSC32KCTRL) Clock selection */
#define REG_OSC32KCTRL_XOSC32K  (0x40001014) /**< (OSC32KCTRL) 32kHz External Crystal Oscillator (XOSC32K) Control */
#define REG_OSC32KCTRL_OSC32K   (0x40001018) /**< (OSC32KCTRL) 32kHz Internal Oscillator (OSC32K) Control */
#define REG_OSC32KCTRL_OSCULP32K (0x4000101C) /**< (OSC32KCTRL) 32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control */

#else

#define REG_OSC32KCTRL_INTENCLR (*(__IO uint32_t*)0x40001000U) /**< (OSC32KCTRL) Interrupt Enable Clear */
#define REG_OSC32KCTRL_INTENSET (*(__IO uint32_t*)0x40001004U) /**< (OSC32KCTRL) Interrupt Enable Set */
#define REG_OSC32KCTRL_INTFLAG  (*(__IO uint32_t*)0x40001008U) /**< (OSC32KCTRL) Interrupt Flag Status and Clear */
#define REG_OSC32KCTRL_STATUS   (*(__I  uint32_t*)0x4000100CU) /**< (OSC32KCTRL) Power and Clocks Status */
#define REG_OSC32KCTRL_RTCCTRL  (*(__IO uint32_t*)0x40001010U) /**< (OSC32KCTRL) Clock selection */
#define REG_OSC32KCTRL_XOSC32K  (*(__IO uint32_t*)0x40001014U) /**< (OSC32KCTRL) 32kHz External Crystal Oscillator (XOSC32K) Control */
#define REG_OSC32KCTRL_OSC32K   (*(__IO uint32_t*)0x40001018U) /**< (OSC32KCTRL) 32kHz Internal Oscillator (OSC32K) Control */
#define REG_OSC32KCTRL_OSCULP32K (*(__IO uint32_t*)0x4000101CU) /**< (OSC32KCTRL) 32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for OSC32KCTRL peripheral ========== */
#define OSC32KCTRL_OSC32K_COARSE_CALIB_MSB       6          
#define OSC32KCTRL_INSTANCE_ID                   4          

#endif /* _WLR089_OSC32KCTRL_INSTANCE_ */
