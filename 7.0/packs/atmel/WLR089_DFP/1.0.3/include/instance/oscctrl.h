/**
 * \brief Instance description for OSCCTRL
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
#ifndef _WLR089_OSCCTRL_INSTANCE_H_
#define _WLR089_OSCCTRL_INSTANCE_H_

/* ========== Register definition for OSCCTRL peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_OSCCTRL_INTENCLR    (0x40000C00) /**< (OSCCTRL) Interrupt Enable Clear */
#define REG_OSCCTRL_INTENSET    (0x40000C04) /**< (OSCCTRL) Interrupt Enable Set */
#define REG_OSCCTRL_INTFLAG     (0x40000C08) /**< (OSCCTRL) Interrupt Flag Status and Clear */
#define REG_OSCCTRL_STATUS      (0x40000C0C) /**< (OSCCTRL) Power and Clocks Status */
#define REG_OSCCTRL_XOSCCTRL    (0x40000C10) /**< (OSCCTRL) External Multipurpose Crystal Oscillator (XOSC) Control */
#define REG_OSCCTRL_OSC16MCTRL  (0x40000C14) /**< (OSCCTRL) 16MHz Internal Oscillator (OSC16M) Control */
#define REG_OSCCTRL_DFLLCTRL    (0x40000C18) /**< (OSCCTRL) DFLL48M Control */
#define REG_OSCCTRL_DFLLVAL     (0x40000C1C) /**< (OSCCTRL) DFLL48M Value */
#define REG_OSCCTRL_DFLLMUL     (0x40000C20) /**< (OSCCTRL) DFLL48M Multiplier */
#define REG_OSCCTRL_DFLLSYNC    (0x40000C24) /**< (OSCCTRL) DFLL48M Synchronization */
#define REG_OSCCTRL_DPLLCTRLA   (0x40000C28) /**< (OSCCTRL) DPLL Control */
#define REG_OSCCTRL_DPLLRATIO   (0x40000C2C) /**< (OSCCTRL) DPLL Ratio Control */
#define REG_OSCCTRL_DPLLCTRLB   (0x40000C30) /**< (OSCCTRL) Digital Core Configuration */
#define REG_OSCCTRL_DPLLPRESC   (0x40000C34) /**< (OSCCTRL) DPLL Prescaler */
#define REG_OSCCTRL_DPLLSYNCBUSY (0x40000C38) /**< (OSCCTRL) DPLL Synchronization Busy */
#define REG_OSCCTRL_DPLLSTATUS  (0x40000C3C) /**< (OSCCTRL) DPLL Status */

#else

#define REG_OSCCTRL_INTENCLR    (*(__IO uint32_t*)0x40000C00U) /**< (OSCCTRL) Interrupt Enable Clear */
#define REG_OSCCTRL_INTENSET    (*(__IO uint32_t*)0x40000C04U) /**< (OSCCTRL) Interrupt Enable Set */
#define REG_OSCCTRL_INTFLAG     (*(__IO uint32_t*)0x40000C08U) /**< (OSCCTRL) Interrupt Flag Status and Clear */
#define REG_OSCCTRL_STATUS      (*(__I  uint32_t*)0x40000C0CU) /**< (OSCCTRL) Power and Clocks Status */
#define REG_OSCCTRL_XOSCCTRL    (*(__IO uint16_t*)0x40000C10U) /**< (OSCCTRL) External Multipurpose Crystal Oscillator (XOSC) Control */
#define REG_OSCCTRL_OSC16MCTRL  (*(__IO uint8_t*)0x40000C14U) /**< (OSCCTRL) 16MHz Internal Oscillator (OSC16M) Control */
#define REG_OSCCTRL_DFLLCTRL    (*(__IO uint16_t*)0x40000C18U) /**< (OSCCTRL) DFLL48M Control */
#define REG_OSCCTRL_DFLLVAL     (*(__IO uint32_t*)0x40000C1CU) /**< (OSCCTRL) DFLL48M Value */
#define REG_OSCCTRL_DFLLMUL     (*(__IO uint32_t*)0x40000C20U) /**< (OSCCTRL) DFLL48M Multiplier */
#define REG_OSCCTRL_DFLLSYNC    (*(__IO uint8_t*)0x40000C24U) /**< (OSCCTRL) DFLL48M Synchronization */
#define REG_OSCCTRL_DPLLCTRLA   (*(__IO uint8_t*)0x40000C28U) /**< (OSCCTRL) DPLL Control */
#define REG_OSCCTRL_DPLLRATIO   (*(__IO uint32_t*)0x40000C2CU) /**< (OSCCTRL) DPLL Ratio Control */
#define REG_OSCCTRL_DPLLCTRLB   (*(__IO uint32_t*)0x40000C30U) /**< (OSCCTRL) Digital Core Configuration */
#define REG_OSCCTRL_DPLLPRESC   (*(__IO uint8_t*)0x40000C34U) /**< (OSCCTRL) DPLL Prescaler */
#define REG_OSCCTRL_DPLLSYNCBUSY (*(__I  uint8_t*)0x40000C38U) /**< (OSCCTRL) DPLL Synchronization Busy */
#define REG_OSCCTRL_DPLLSTATUS  (*(__I  uint8_t*)0x40000C3CU) /**< (OSCCTRL) DPLL Status */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for OSCCTRL peripheral ========== */
#define OSCCTRL_DFLL48M_COARSE_MSB               5          
#define OSCCTRL_DFLL48M_FINE_MSB                 9          
#define OSCCTRL_GCLK_ID_DFLL48                   0          /* Index of Generic Clock for DFLL48 */
#define OSCCTRL_GCLK_ID_FDPLL                    1          /* Index of Generic Clock for DPLL */
#define OSCCTRL_GCLK_ID_FDPLL32K                 2          /* Index of Generic Clock for DPLL 32K */
#define OSCCTRL_DFLL48M_VERSION                  0x320      
#define OSCCTRL_FDPLL_VERSION                    0x200      
#define OSCCTRL_OSC16M_VERSION                   0x100      
#define OSCCTRL_XOSC_VERSION                     0x120      
#define OSCCTRL_INSTANCE_ID                      3          

#endif /* _WLR089_OSCCTRL_INSTANCE_ */
