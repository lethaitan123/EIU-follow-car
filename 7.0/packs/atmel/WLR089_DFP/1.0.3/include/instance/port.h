/**
 * \brief Instance description for PORT
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
#ifndef _WLR089_PORT_INSTANCE_H_
#define _WLR089_PORT_INSTANCE_H_

/* ========== Register definition for PORT peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_PORT_DIR0           (0x40002800) /**< (PORT) Data Direction 0 */
#define REG_PORT_DIRCLR0        (0x40002804) /**< (PORT) Data Direction Clear 0 */
#define REG_PORT_DIRSET0        (0x40002808) /**< (PORT) Data Direction Set 0 */
#define REG_PORT_DIRTGL0        (0x4000280C) /**< (PORT) Data Direction Toggle 0 */
#define REG_PORT_OUT0           (0x40002810) /**< (PORT) Data Output Value 0 */
#define REG_PORT_OUTCLR0        (0x40002814) /**< (PORT) Data Output Value Clear 0 */
#define REG_PORT_OUTSET0        (0x40002818) /**< (PORT) Data Output Value Set 0 */
#define REG_PORT_OUTTGL0        (0x4000281C) /**< (PORT) Data Output Value Toggle 0 */
#define REG_PORT_IN0            (0x40002820) /**< (PORT) Data Input Value 0 */
#define REG_PORT_CTRL0          (0x40002824) /**< (PORT) Control 0 */
#define REG_PORT_WRCONFIG0      (0x40002828) /**< (PORT) Write Configuration 0 */
#define REG_PORT_EVCTRL0        (0x4000282C) /**< (PORT) Event Input Control 0 */
#define REG_PORT_PMUX0          (0x40002830) /**< (PORT) Peripheral Multiplexing 0 */
#define REG_PORT_PINCFG0        (0x40002840) /**< (PORT) Pin Configuration 0 */
#define REG_PORT_DIR1           (0x40002880) /**< (PORT) Data Direction 1 */
#define REG_PORT_DIRCLR1        (0x40002884) /**< (PORT) Data Direction Clear 1 */
#define REG_PORT_DIRSET1        (0x40002888) /**< (PORT) Data Direction Set 1 */
#define REG_PORT_DIRTGL1        (0x4000288C) /**< (PORT) Data Direction Toggle 1 */
#define REG_PORT_OUT1           (0x40002890) /**< (PORT) Data Output Value 1 */
#define REG_PORT_OUTCLR1        (0x40002894) /**< (PORT) Data Output Value Clear 1 */
#define REG_PORT_OUTSET1        (0x40002898) /**< (PORT) Data Output Value Set 1 */
#define REG_PORT_OUTTGL1        (0x4000289C) /**< (PORT) Data Output Value Toggle 1 */
#define REG_PORT_IN1            (0x400028A0) /**< (PORT) Data Input Value 1 */
#define REG_PORT_CTRL1          (0x400028A4) /**< (PORT) Control 1 */
#define REG_PORT_WRCONFIG1      (0x400028A8) /**< (PORT) Write Configuration 1 */
#define REG_PORT_EVCTRL1        (0x400028AC) /**< (PORT) Event Input Control 1 */
#define REG_PORT_PMUX1          (0x400028B0) /**< (PORT) Peripheral Multiplexing 1 */
#define REG_PORT_PINCFG1        (0x400028C0) /**< (PORT) Pin Configuration 1 */
#define REG_PORT_DIR2           (0x40002900) /**< (PORT) Data Direction 2 */
#define REG_PORT_DIRCLR2        (0x40002904) /**< (PORT) Data Direction Clear 2 */
#define REG_PORT_DIRSET2        (0x40002908) /**< (PORT) Data Direction Set 2 */
#define REG_PORT_DIRTGL2        (0x4000290C) /**< (PORT) Data Direction Toggle 2 */
#define REG_PORT_OUT2           (0x40002910) /**< (PORT) Data Output Value 2 */
#define REG_PORT_OUTCLR2        (0x40002914) /**< (PORT) Data Output Value Clear 2 */
#define REG_PORT_OUTSET2        (0x40002918) /**< (PORT) Data Output Value Set 2 */
#define REG_PORT_OUTTGL2        (0x4000291C) /**< (PORT) Data Output Value Toggle 2 */
#define REG_PORT_IN2            (0x40002920) /**< (PORT) Data Input Value 2 */
#define REG_PORT_CTRL2          (0x40002924) /**< (PORT) Control 2 */
#define REG_PORT_WRCONFIG2      (0x40002928) /**< (PORT) Write Configuration 2 */
#define REG_PORT_EVCTRL2        (0x4000292C) /**< (PORT) Event Input Control 2 */
#define REG_PORT_PMUX2          (0x40002930) /**< (PORT) Peripheral Multiplexing 2 */
#define REG_PORT_PINCFG2        (0x40002940) /**< (PORT) Pin Configuration 2 */

#else

#define REG_PORT_DIR0           (*(__IO uint32_t*)0x40002800U) /**< (PORT) Data Direction 0 */
#define REG_PORT_DIRCLR0        (*(__IO uint32_t*)0x40002804U) /**< (PORT) Data Direction Clear 0 */
#define REG_PORT_DIRSET0        (*(__IO uint32_t*)0x40002808U) /**< (PORT) Data Direction Set 0 */
#define REG_PORT_DIRTGL0        (*(__IO uint32_t*)0x4000280CU) /**< (PORT) Data Direction Toggle 0 */
#define REG_PORT_OUT0           (*(__IO uint32_t*)0x40002810U) /**< (PORT) Data Output Value 0 */
#define REG_PORT_OUTCLR0        (*(__IO uint32_t*)0x40002814U) /**< (PORT) Data Output Value Clear 0 */
#define REG_PORT_OUTSET0        (*(__IO uint32_t*)0x40002818U) /**< (PORT) Data Output Value Set 0 */
#define REG_PORT_OUTTGL0        (*(__IO uint32_t*)0x4000281CU) /**< (PORT) Data Output Value Toggle 0 */
#define REG_PORT_IN0            (*(__I  uint32_t*)0x40002820U) /**< (PORT) Data Input Value 0 */
#define REG_PORT_CTRL0          (*(__IO uint32_t*)0x40002824U) /**< (PORT) Control 0 */
#define REG_PORT_WRCONFIG0      (*(__O  uint32_t*)0x40002828U) /**< (PORT) Write Configuration 0 */
#define REG_PORT_EVCTRL0        (*(__IO uint32_t*)0x4000282CU) /**< (PORT) Event Input Control 0 */
#define REG_PORT_PMUX0          (*(__IO uint8_t*)0x40002830U) /**< (PORT) Peripheral Multiplexing 0 */
#define REG_PORT_PINCFG0        (*(__IO uint8_t*)0x40002840U) /**< (PORT) Pin Configuration 0 */
#define REG_PORT_DIR1           (*(__IO uint32_t*)0x40002880U) /**< (PORT) Data Direction 1 */
#define REG_PORT_DIRCLR1        (*(__IO uint32_t*)0x40002884U) /**< (PORT) Data Direction Clear 1 */
#define REG_PORT_DIRSET1        (*(__IO uint32_t*)0x40002888U) /**< (PORT) Data Direction Set 1 */
#define REG_PORT_DIRTGL1        (*(__IO uint32_t*)0x4000288CU) /**< (PORT) Data Direction Toggle 1 */
#define REG_PORT_OUT1           (*(__IO uint32_t*)0x40002890U) /**< (PORT) Data Output Value 1 */
#define REG_PORT_OUTCLR1        (*(__IO uint32_t*)0x40002894U) /**< (PORT) Data Output Value Clear 1 */
#define REG_PORT_OUTSET1        (*(__IO uint32_t*)0x40002898U) /**< (PORT) Data Output Value Set 1 */
#define REG_PORT_OUTTGL1        (*(__IO uint32_t*)0x4000289CU) /**< (PORT) Data Output Value Toggle 1 */
#define REG_PORT_IN1            (*(__I  uint32_t*)0x400028A0U) /**< (PORT) Data Input Value 1 */
#define REG_PORT_CTRL1          (*(__IO uint32_t*)0x400028A4U) /**< (PORT) Control 1 */
#define REG_PORT_WRCONFIG1      (*(__O  uint32_t*)0x400028A8U) /**< (PORT) Write Configuration 1 */
#define REG_PORT_EVCTRL1        (*(__IO uint32_t*)0x400028ACU) /**< (PORT) Event Input Control 1 */
#define REG_PORT_PMUX1          (*(__IO uint8_t*)0x400028B0U) /**< (PORT) Peripheral Multiplexing 1 */
#define REG_PORT_PINCFG1        (*(__IO uint8_t*)0x400028C0U) /**< (PORT) Pin Configuration 1 */
#define REG_PORT_DIR2           (*(__IO uint32_t*)0x40002900U) /**< (PORT) Data Direction 2 */
#define REG_PORT_DIRCLR2        (*(__IO uint32_t*)0x40002904U) /**< (PORT) Data Direction Clear 2 */
#define REG_PORT_DIRSET2        (*(__IO uint32_t*)0x40002908U) /**< (PORT) Data Direction Set 2 */
#define REG_PORT_DIRTGL2        (*(__IO uint32_t*)0x4000290CU) /**< (PORT) Data Direction Toggle 2 */
#define REG_PORT_OUT2           (*(__IO uint32_t*)0x40002910U) /**< (PORT) Data Output Value 2 */
#define REG_PORT_OUTCLR2        (*(__IO uint32_t*)0x40002914U) /**< (PORT) Data Output Value Clear 2 */
#define REG_PORT_OUTSET2        (*(__IO uint32_t*)0x40002918U) /**< (PORT) Data Output Value Set 2 */
#define REG_PORT_OUTTGL2        (*(__IO uint32_t*)0x4000291CU) /**< (PORT) Data Output Value Toggle 2 */
#define REG_PORT_IN2            (*(__I  uint32_t*)0x40002920U) /**< (PORT) Data Input Value 2 */
#define REG_PORT_CTRL2          (*(__IO uint32_t*)0x40002924U) /**< (PORT) Control 2 */
#define REG_PORT_WRCONFIG2      (*(__O  uint32_t*)0x40002928U) /**< (PORT) Write Configuration 2 */
#define REG_PORT_EVCTRL2        (*(__IO uint32_t*)0x4000292CU) /**< (PORT) Event Input Control 2 */
#define REG_PORT_PMUX2          (*(__IO uint8_t*)0x40002930U) /**< (PORT) Peripheral Multiplexing 2 */
#define REG_PORT_PINCFG2        (*(__IO uint8_t*)0x40002940U) /**< (PORT) Pin Configuration 2 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for PORT peripheral ========== */
#define PORT_BITS                                84         
#define PORT_DRVSTR                              1          /* DRVSTR supported? */
#define PORT_EV_NUM                              4          
#define PORT_GROUPS                              3          
#define PORT_ODRAIN                              0          /* ODRAIN supported? */
#define PORT_SLEWLIM                             0          /* SLEWLIM supported? */
#define PORT_INSTANCE_ID                         10         

#endif /* _WLR089_PORT_INSTANCE_ */
