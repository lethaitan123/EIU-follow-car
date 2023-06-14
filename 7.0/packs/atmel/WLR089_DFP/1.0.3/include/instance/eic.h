/**
 * \brief Instance description for EIC
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
#ifndef _WLR089_EIC_INSTANCE_H_
#define _WLR089_EIC_INSTANCE_H_

/* ========== Register definition for EIC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_EIC_CTRLA           (0x40002400) /**< (EIC) Control */
#define REG_EIC_NMICTRL         (0x40002401) /**< (EIC) NMI Control */
#define REG_EIC_NMIFLAG         (0x40002402) /**< (EIC) NMI Interrupt Flag */
#define REG_EIC_SYNCBUSY        (0x40002404) /**< (EIC) Syncbusy register */
#define REG_EIC_EVCTRL          (0x40002408) /**< (EIC) Event Control */
#define REG_EIC_INTENCLR        (0x4000240C) /**< (EIC) Interrupt Enable Clear */
#define REG_EIC_INTENSET        (0x40002410) /**< (EIC) Interrupt Enable Set */
#define REG_EIC_INTFLAG         (0x40002414) /**< (EIC) Interrupt Flag Status and Clear */
#define REG_EIC_ASYNCH          (0x40002418) /**< (EIC) EIC Asynchronous edge Detection Enable */
#define REG_EIC_CONFIG          (0x4000241C) /**< (EIC) Configuration n */
#define REG_EIC_CONFIG0         (0x4000241C) /**< (EIC) Configuration 0 */
#define REG_EIC_CONFIG1         (0x40002420) /**< (EIC) Configuration 1 */

#else

#define REG_EIC_CTRLA           (*(__IO uint8_t*)0x40002400U) /**< (EIC) Control */
#define REG_EIC_NMICTRL         (*(__IO uint8_t*)0x40002401U) /**< (EIC) NMI Control */
#define REG_EIC_NMIFLAG         (*(__IO uint16_t*)0x40002402U) /**< (EIC) NMI Interrupt Flag */
#define REG_EIC_SYNCBUSY        (*(__I  uint32_t*)0x40002404U) /**< (EIC) Syncbusy register */
#define REG_EIC_EVCTRL          (*(__IO uint32_t*)0x40002408U) /**< (EIC) Event Control */
#define REG_EIC_INTENCLR        (*(__IO uint32_t*)0x4000240CU) /**< (EIC) Interrupt Enable Clear */
#define REG_EIC_INTENSET        (*(__IO uint32_t*)0x40002410U) /**< (EIC) Interrupt Enable Set */
#define REG_EIC_INTFLAG         (*(__IO uint32_t*)0x40002414U) /**< (EIC) Interrupt Flag Status and Clear */
#define REG_EIC_ASYNCH          (*(__IO uint32_t*)0x40002418U) /**< (EIC) EIC Asynchronous edge Detection Enable */
#define REG_EIC_CONFIG          (*(__IO uint32_t*)0x4000241CU) /**< (EIC) Configuration n */
#define REG_EIC_CONFIG0         (*(__IO uint32_t*)0x4000241CU) /**< (EIC) Configuration 0 */
#define REG_EIC_CONFIG1         (*(__IO uint32_t*)0x40002420U) /**< (EIC) Configuration 1 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for EIC peripheral ========== */
#define EIC_EXTINT_NUM                           16         
#define EIC_GCLK_ID                              3          
#define EIC_NUMBER_OF_CONFIG_REGS                2          
#define EIC_NUMBER_OF_INTERRUPTS                 16         
#define EIC_INSTANCE_ID                          9          

#endif /* _WLR089_EIC_INSTANCE_ */
