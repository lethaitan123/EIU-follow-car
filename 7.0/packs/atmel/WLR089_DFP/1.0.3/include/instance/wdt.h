/**
 * \brief Instance description for WDT
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
#ifndef _WLR089_WDT_INSTANCE_H_
#define _WLR089_WDT_INSTANCE_H_

/* ========== Register definition for WDT peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_WDT_CTRLA           (0x40001C00) /**< (WDT) Control */
#define REG_WDT_CONFIG          (0x40001C01) /**< (WDT) Configuration */
#define REG_WDT_EWCTRL          (0x40001C02) /**< (WDT) Early Warning Interrupt Control */
#define REG_WDT_INTENCLR        (0x40001C04) /**< (WDT) Interrupt Enable Clear */
#define REG_WDT_INTENSET        (0x40001C05) /**< (WDT) Interrupt Enable Set */
#define REG_WDT_INTFLAG         (0x40001C06) /**< (WDT) Interrupt Flag Status and Clear */
#define REG_WDT_SYNCBUSY        (0x40001C08) /**< (WDT) Synchronization Busy */
#define REG_WDT_CLEAR           (0x40001C0C) /**< (WDT) Clear */

#else

#define REG_WDT_CTRLA           (*(__IO uint8_t*)0x40001C00U) /**< (WDT) Control */
#define REG_WDT_CONFIG          (*(__IO uint8_t*)0x40001C01U) /**< (WDT) Configuration */
#define REG_WDT_EWCTRL          (*(__IO uint8_t*)0x40001C02U) /**< (WDT) Early Warning Interrupt Control */
#define REG_WDT_INTENCLR        (*(__IO uint8_t*)0x40001C04U) /**< (WDT) Interrupt Enable Clear */
#define REG_WDT_INTENSET        (*(__IO uint8_t*)0x40001C05U) /**< (WDT) Interrupt Enable Set */
#define REG_WDT_INTFLAG         (*(__IO uint8_t*)0x40001C06U) /**< (WDT) Interrupt Flag Status and Clear */
#define REG_WDT_SYNCBUSY        (*(__I  uint32_t*)0x40001C08U) /**< (WDT) Synchronization Busy */
#define REG_WDT_CLEAR           (*(__O  uint8_t*)0x40001C0CU) /**< (WDT) Clear */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for WDT peripheral ========== */
#define WDT_INSTANCE_ID                          7          

#endif /* _WLR089_WDT_INSTANCE_ */
