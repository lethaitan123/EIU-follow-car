/**
 * \brief Instance description for MCLK
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
#ifndef _WLR089_MCLK_INSTANCE_H_
#define _WLR089_MCLK_INSTANCE_H_

/* ========== Register definition for MCLK peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_MCLK_CTRLA          (0x40000400) /**< (MCLK) Control A */
#define REG_MCLK_INTENCLR       (0x40000401) /**< (MCLK) Interrupt Enable Clear */
#define REG_MCLK_INTENSET       (0x40000402) /**< (MCLK) Interrupt Enable Set */
#define REG_MCLK_INTFLAG        (0x40000403) /**< (MCLK) Interrupt Flag Status and Clear */
#define REG_MCLK_CPUDIV         (0x40000404) /**< (MCLK) CPU Clock Division */
#define REG_MCLK_LPDIV          (0x40000405) /**< (MCLK) Low-Power Clock Division */
#define REG_MCLK_BUPDIV         (0x40000406) /**< (MCLK) Backup Clock Division */
#define REG_MCLK_AHBMASK        (0x40000410) /**< (MCLK) AHB Mask */
#define REG_MCLK_APBAMASK       (0x40000414) /**< (MCLK) APBA Mask */
#define REG_MCLK_APBBMASK       (0x40000418) /**< (MCLK) APBB Mask */
#define REG_MCLK_APBCMASK       (0x4000041C) /**< (MCLK) APBC Mask */
#define REG_MCLK_APBDMASK       (0x40000420) /**< (MCLK) APBD Mask */
#define REG_MCLK_APBEMASK       (0x40000424) /**< (MCLK) APBE Mask */

#else

#define REG_MCLK_CTRLA          (*(__IO uint8_t*)0x40000400U) /**< (MCLK) Control A */
#define REG_MCLK_INTENCLR       (*(__IO uint8_t*)0x40000401U) /**< (MCLK) Interrupt Enable Clear */
#define REG_MCLK_INTENSET       (*(__IO uint8_t*)0x40000402U) /**< (MCLK) Interrupt Enable Set */
#define REG_MCLK_INTFLAG        (*(__IO uint8_t*)0x40000403U) /**< (MCLK) Interrupt Flag Status and Clear */
#define REG_MCLK_CPUDIV         (*(__IO uint8_t*)0x40000404U) /**< (MCLK) CPU Clock Division */
#define REG_MCLK_LPDIV          (*(__IO uint8_t*)0x40000405U) /**< (MCLK) Low-Power Clock Division */
#define REG_MCLK_BUPDIV         (*(__IO uint8_t*)0x40000406U) /**< (MCLK) Backup Clock Division */
#define REG_MCLK_AHBMASK        (*(__IO uint32_t*)0x40000410U) /**< (MCLK) AHB Mask */
#define REG_MCLK_APBAMASK       (*(__IO uint32_t*)0x40000414U) /**< (MCLK) APBA Mask */
#define REG_MCLK_APBBMASK       (*(__IO uint32_t*)0x40000418U) /**< (MCLK) APBB Mask */
#define REG_MCLK_APBCMASK       (*(__IO uint32_t*)0x4000041CU) /**< (MCLK) APBC Mask */
#define REG_MCLK_APBDMASK       (*(__IO uint32_t*)0x40000420U) /**< (MCLK) APBD Mask */
#define REG_MCLK_APBEMASK       (*(__IO uint32_t*)0x40000424U) /**< (MCLK) APBE Mask */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for MCLK peripheral ========== */
#define MCLK_CTRLA_MCSEL_GCLK                    1          
#define MCLK_CTRLA_MCSEL_OSC8M                   0          
#define MCLK_MCLK_CLK_APB_NUM                    5          
#define MCLK_SYSTEM_CLOCK                        4000000    /* System Clock Frequency at Reset */
#define MCLK_INSTANCE_ID                         1          

#endif /* _WLR089_MCLK_INSTANCE_ */
