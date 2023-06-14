/**
 * \brief Instance description for PM
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
#ifndef _WLR089_PM_INSTANCE_H_
#define _WLR089_PM_INSTANCE_H_

/* ========== Register definition for PM peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_PM_CTRLA            (0x40000000) /**< (PM) Control A */
#define REG_PM_SLEEPCFG         (0x40000001) /**< (PM) Sleep Configuration */
#define REG_PM_PLCFG            (0x40000002) /**< (PM) Performance Level Configuration */
#define REG_PM_INTENCLR         (0x40000004) /**< (PM) Interrupt Enable Clear */
#define REG_PM_INTENSET         (0x40000005) /**< (PM) Interrupt Enable Set */
#define REG_PM_INTFLAG          (0x40000006) /**< (PM) Interrupt Flag Status and Clear */
#define REG_PM_STDBYCFG         (0x40000008) /**< (PM) Standby Configuration */
#define REG_PM_PWSAKDLY         (0x4000000C) /**< (PM) Power Switch Acknowledge Delay */

#else

#define REG_PM_CTRLA            (*(__IO uint8_t*)0x40000000U) /**< (PM) Control A */
#define REG_PM_SLEEPCFG         (*(__IO uint8_t*)0x40000001U) /**< (PM) Sleep Configuration */
#define REG_PM_PLCFG            (*(__IO uint8_t*)0x40000002U) /**< (PM) Performance Level Configuration */
#define REG_PM_INTENCLR         (*(__IO uint8_t*)0x40000004U) /**< (PM) Interrupt Enable Clear */
#define REG_PM_INTENSET         (*(__IO uint8_t*)0x40000005U) /**< (PM) Interrupt Enable Set */
#define REG_PM_INTFLAG          (*(__IO uint8_t*)0x40000006U) /**< (PM) Interrupt Flag Status and Clear */
#define REG_PM_STDBYCFG         (*(__IO uint16_t*)0x40000008U) /**< (PM) Standby Configuration */
#define REG_PM_PWSAKDLY         (*(__IO uint8_t*)0x4000000CU) /**< (PM) Power Switch Acknowledge Delay */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for PM peripheral ========== */
#define PM_PD_NUM                                3          /* Number of switchable Power Domain */
#define PM_INSTANCE_ID                           0          

#endif /* _WLR089_PM_INSTANCE_ */
