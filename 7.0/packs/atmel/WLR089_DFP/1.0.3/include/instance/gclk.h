/**
 * \brief Instance description for GCLK
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
#ifndef _WLR089_GCLK_INSTANCE_H_
#define _WLR089_GCLK_INSTANCE_H_

/* ========== Register definition for GCLK peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_GCLK_CTRLA          (0x40001800) /**< (GCLK) Control */
#define REG_GCLK_SYNCBUSY       (0x40001804) /**< (GCLK) Synchronization Busy */
#define REG_GCLK_GENCTRL        (0x40001820) /**< (GCLK) Generic Clock Generator Control */
#define REG_GCLK_GENCTRL0       (0x40001820) /**< (GCLK) Generic Clock Generator Control 0 */
#define REG_GCLK_GENCTRL1       (0x40001824) /**< (GCLK) Generic Clock Generator Control 1 */
#define REG_GCLK_GENCTRL2       (0x40001828) /**< (GCLK) Generic Clock Generator Control 2 */
#define REG_GCLK_GENCTRL3       (0x4000182C) /**< (GCLK) Generic Clock Generator Control 3 */
#define REG_GCLK_GENCTRL4       (0x40001830) /**< (GCLK) Generic Clock Generator Control 4 */
#define REG_GCLK_GENCTRL5       (0x40001834) /**< (GCLK) Generic Clock Generator Control 5 */
#define REG_GCLK_GENCTRL6       (0x40001838) /**< (GCLK) Generic Clock Generator Control 6 */
#define REG_GCLK_GENCTRL7       (0x4000183C) /**< (GCLK) Generic Clock Generator Control 7 */
#define REG_GCLK_GENCTRL8       (0x40001840) /**< (GCLK) Generic Clock Generator Control 8 */
#define REG_GCLK_PCHCTRL        (0x40001880) /**< (GCLK) Peripheral Clock Control */
#define REG_GCLK_PCHCTRL0       (0x40001880) /**< (GCLK) Peripheral Clock Control 0 */
#define REG_GCLK_PCHCTRL1       (0x40001884) /**< (GCLK) Peripheral Clock Control 1 */
#define REG_GCLK_PCHCTRL2       (0x40001888) /**< (GCLK) Peripheral Clock Control 2 */
#define REG_GCLK_PCHCTRL3       (0x4000188C) /**< (GCLK) Peripheral Clock Control 3 */
#define REG_GCLK_PCHCTRL4       (0x40001890) /**< (GCLK) Peripheral Clock Control 4 */
#define REG_GCLK_PCHCTRL5       (0x40001894) /**< (GCLK) Peripheral Clock Control 5 */
#define REG_GCLK_PCHCTRL6       (0x40001898) /**< (GCLK) Peripheral Clock Control 6 */
#define REG_GCLK_PCHCTRL7       (0x4000189C) /**< (GCLK) Peripheral Clock Control 7 */
#define REG_GCLK_PCHCTRL8       (0x400018A0) /**< (GCLK) Peripheral Clock Control 8 */
#define REG_GCLK_PCHCTRL9       (0x400018A4) /**< (GCLK) Peripheral Clock Control 9 */
#define REG_GCLK_PCHCTRL10      (0x400018A8) /**< (GCLK) Peripheral Clock Control 10 */
#define REG_GCLK_PCHCTRL11      (0x400018AC) /**< (GCLK) Peripheral Clock Control 11 */
#define REG_GCLK_PCHCTRL12      (0x400018B0) /**< (GCLK) Peripheral Clock Control 12 */
#define REG_GCLK_PCHCTRL13      (0x400018B4) /**< (GCLK) Peripheral Clock Control 13 */
#define REG_GCLK_PCHCTRL14      (0x400018B8) /**< (GCLK) Peripheral Clock Control 14 */
#define REG_GCLK_PCHCTRL15      (0x400018BC) /**< (GCLK) Peripheral Clock Control 15 */
#define REG_GCLK_PCHCTRL16      (0x400018C0) /**< (GCLK) Peripheral Clock Control 16 */
#define REG_GCLK_PCHCTRL17      (0x400018C4) /**< (GCLK) Peripheral Clock Control 17 */
#define REG_GCLK_PCHCTRL18      (0x400018C8) /**< (GCLK) Peripheral Clock Control 18 */
#define REG_GCLK_PCHCTRL19      (0x400018CC) /**< (GCLK) Peripheral Clock Control 19 */
#define REG_GCLK_PCHCTRL20      (0x400018D0) /**< (GCLK) Peripheral Clock Control 20 */
#define REG_GCLK_PCHCTRL21      (0x400018D4) /**< (GCLK) Peripheral Clock Control 21 */
#define REG_GCLK_PCHCTRL22      (0x400018D8) /**< (GCLK) Peripheral Clock Control 22 */
#define REG_GCLK_PCHCTRL23      (0x400018DC) /**< (GCLK) Peripheral Clock Control 23 */
#define REG_GCLK_PCHCTRL24      (0x400018E0) /**< (GCLK) Peripheral Clock Control 24 */
#define REG_GCLK_PCHCTRL25      (0x400018E4) /**< (GCLK) Peripheral Clock Control 25 */
#define REG_GCLK_PCHCTRL26      (0x400018E8) /**< (GCLK) Peripheral Clock Control 26 */
#define REG_GCLK_PCHCTRL27      (0x400018EC) /**< (GCLK) Peripheral Clock Control 27 */
#define REG_GCLK_PCHCTRL28      (0x400018F0) /**< (GCLK) Peripheral Clock Control 28 */
#define REG_GCLK_PCHCTRL29      (0x400018F4) /**< (GCLK) Peripheral Clock Control 29 */
#define REG_GCLK_PCHCTRL30      (0x400018F8) /**< (GCLK) Peripheral Clock Control 30 */
#define REG_GCLK_PCHCTRL31      (0x400018FC) /**< (GCLK) Peripheral Clock Control 31 */
#define REG_GCLK_PCHCTRL32      (0x40001900) /**< (GCLK) Peripheral Clock Control 32 */
#define REG_GCLK_PCHCTRL33      (0x40001904) /**< (GCLK) Peripheral Clock Control 33 */
#define REG_GCLK_PCHCTRL34      (0x40001908) /**< (GCLK) Peripheral Clock Control 34 */
#define REG_GCLK_PCHCTRL35      (0x4000190C) /**< (GCLK) Peripheral Clock Control 35 */

#else

#define REG_GCLK_CTRLA          (*(__IO uint8_t*)0x40001800U) /**< (GCLK) Control */
#define REG_GCLK_SYNCBUSY       (*(__I  uint32_t*)0x40001804U) /**< (GCLK) Synchronization Busy */
#define REG_GCLK_GENCTRL        (*(__IO uint32_t*)0x40001820U) /**< (GCLK) Generic Clock Generator Control */
#define REG_GCLK_GENCTRL0       (*(__IO uint32_t*)0x40001820U) /**< (GCLK) Generic Clock Generator Control 0 */
#define REG_GCLK_GENCTRL1       (*(__IO uint32_t*)0x40001824U) /**< (GCLK) Generic Clock Generator Control 1 */
#define REG_GCLK_GENCTRL2       (*(__IO uint32_t*)0x40001828U) /**< (GCLK) Generic Clock Generator Control 2 */
#define REG_GCLK_GENCTRL3       (*(__IO uint32_t*)0x4000182CU) /**< (GCLK) Generic Clock Generator Control 3 */
#define REG_GCLK_GENCTRL4       (*(__IO uint32_t*)0x40001830U) /**< (GCLK) Generic Clock Generator Control 4 */
#define REG_GCLK_GENCTRL5       (*(__IO uint32_t*)0x40001834U) /**< (GCLK) Generic Clock Generator Control 5 */
#define REG_GCLK_GENCTRL6       (*(__IO uint32_t*)0x40001838U) /**< (GCLK) Generic Clock Generator Control 6 */
#define REG_GCLK_GENCTRL7       (*(__IO uint32_t*)0x4000183CU) /**< (GCLK) Generic Clock Generator Control 7 */
#define REG_GCLK_GENCTRL8       (*(__IO uint32_t*)0x40001840U) /**< (GCLK) Generic Clock Generator Control 8 */
#define REG_GCLK_PCHCTRL        (*(__IO uint32_t*)0x40001880U) /**< (GCLK) Peripheral Clock Control */
#define REG_GCLK_PCHCTRL0       (*(__IO uint32_t*)0x40001880U) /**< (GCLK) Peripheral Clock Control 0 */
#define REG_GCLK_PCHCTRL1       (*(__IO uint32_t*)0x40001884U) /**< (GCLK) Peripheral Clock Control 1 */
#define REG_GCLK_PCHCTRL2       (*(__IO uint32_t*)0x40001888U) /**< (GCLK) Peripheral Clock Control 2 */
#define REG_GCLK_PCHCTRL3       (*(__IO uint32_t*)0x4000188CU) /**< (GCLK) Peripheral Clock Control 3 */
#define REG_GCLK_PCHCTRL4       (*(__IO uint32_t*)0x40001890U) /**< (GCLK) Peripheral Clock Control 4 */
#define REG_GCLK_PCHCTRL5       (*(__IO uint32_t*)0x40001894U) /**< (GCLK) Peripheral Clock Control 5 */
#define REG_GCLK_PCHCTRL6       (*(__IO uint32_t*)0x40001898U) /**< (GCLK) Peripheral Clock Control 6 */
#define REG_GCLK_PCHCTRL7       (*(__IO uint32_t*)0x4000189CU) /**< (GCLK) Peripheral Clock Control 7 */
#define REG_GCLK_PCHCTRL8       (*(__IO uint32_t*)0x400018A0U) /**< (GCLK) Peripheral Clock Control 8 */
#define REG_GCLK_PCHCTRL9       (*(__IO uint32_t*)0x400018A4U) /**< (GCLK) Peripheral Clock Control 9 */
#define REG_GCLK_PCHCTRL10      (*(__IO uint32_t*)0x400018A8U) /**< (GCLK) Peripheral Clock Control 10 */
#define REG_GCLK_PCHCTRL11      (*(__IO uint32_t*)0x400018ACU) /**< (GCLK) Peripheral Clock Control 11 */
#define REG_GCLK_PCHCTRL12      (*(__IO uint32_t*)0x400018B0U) /**< (GCLK) Peripheral Clock Control 12 */
#define REG_GCLK_PCHCTRL13      (*(__IO uint32_t*)0x400018B4U) /**< (GCLK) Peripheral Clock Control 13 */
#define REG_GCLK_PCHCTRL14      (*(__IO uint32_t*)0x400018B8U) /**< (GCLK) Peripheral Clock Control 14 */
#define REG_GCLK_PCHCTRL15      (*(__IO uint32_t*)0x400018BCU) /**< (GCLK) Peripheral Clock Control 15 */
#define REG_GCLK_PCHCTRL16      (*(__IO uint32_t*)0x400018C0U) /**< (GCLK) Peripheral Clock Control 16 */
#define REG_GCLK_PCHCTRL17      (*(__IO uint32_t*)0x400018C4U) /**< (GCLK) Peripheral Clock Control 17 */
#define REG_GCLK_PCHCTRL18      (*(__IO uint32_t*)0x400018C8U) /**< (GCLK) Peripheral Clock Control 18 */
#define REG_GCLK_PCHCTRL19      (*(__IO uint32_t*)0x400018CCU) /**< (GCLK) Peripheral Clock Control 19 */
#define REG_GCLK_PCHCTRL20      (*(__IO uint32_t*)0x400018D0U) /**< (GCLK) Peripheral Clock Control 20 */
#define REG_GCLK_PCHCTRL21      (*(__IO uint32_t*)0x400018D4U) /**< (GCLK) Peripheral Clock Control 21 */
#define REG_GCLK_PCHCTRL22      (*(__IO uint32_t*)0x400018D8U) /**< (GCLK) Peripheral Clock Control 22 */
#define REG_GCLK_PCHCTRL23      (*(__IO uint32_t*)0x400018DCU) /**< (GCLK) Peripheral Clock Control 23 */
#define REG_GCLK_PCHCTRL24      (*(__IO uint32_t*)0x400018E0U) /**< (GCLK) Peripheral Clock Control 24 */
#define REG_GCLK_PCHCTRL25      (*(__IO uint32_t*)0x400018E4U) /**< (GCLK) Peripheral Clock Control 25 */
#define REG_GCLK_PCHCTRL26      (*(__IO uint32_t*)0x400018E8U) /**< (GCLK) Peripheral Clock Control 26 */
#define REG_GCLK_PCHCTRL27      (*(__IO uint32_t*)0x400018ECU) /**< (GCLK) Peripheral Clock Control 27 */
#define REG_GCLK_PCHCTRL28      (*(__IO uint32_t*)0x400018F0U) /**< (GCLK) Peripheral Clock Control 28 */
#define REG_GCLK_PCHCTRL29      (*(__IO uint32_t*)0x400018F4U) /**< (GCLK) Peripheral Clock Control 29 */
#define REG_GCLK_PCHCTRL30      (*(__IO uint32_t*)0x400018F8U) /**< (GCLK) Peripheral Clock Control 30 */
#define REG_GCLK_PCHCTRL31      (*(__IO uint32_t*)0x400018FCU) /**< (GCLK) Peripheral Clock Control 31 */
#define REG_GCLK_PCHCTRL32      (*(__IO uint32_t*)0x40001900U) /**< (GCLK) Peripheral Clock Control 32 */
#define REG_GCLK_PCHCTRL33      (*(__IO uint32_t*)0x40001904U) /**< (GCLK) Peripheral Clock Control 33 */
#define REG_GCLK_PCHCTRL34      (*(__IO uint32_t*)0x40001908U) /**< (GCLK) Peripheral Clock Control 34 */
#define REG_GCLK_PCHCTRL35      (*(__IO uint32_t*)0x4000190CU) /**< (GCLK) Peripheral Clock Control 35 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for GCLK peripheral ========== */
#define GCLK_GENDIV_BITS                         16         
#define GCLK_GEN_BITS                            4          
#define GCLK_GEN_NUM                             9          /* Number of Generic Clock Generators */
#define GCLK_GEN_NUM_MSB                         8          /* Number of Generic Clock Generators - 1 */
#define GCLK_GEN_SOURCE_NUM_MSB                  8          /* Number of Generic Clock Sources - 1 */
#define GCLK_NUM                                 36         /* Number of Generic Clock Users */
#define GCLK_SOURCE_BITS                         4          
#define GCLK_SOURCE_DFLL48M                      7          
#define GCLK_SOURCE_DPLL96M                      8          
#define GCLK_SOURCE_GCLKGEN1                     2          
#define GCLK_SOURCE_GCLKIN                       1          
#define GCLK_SOURCE_NUM                          9          /* Number of Generic Clock Sources */
#define GCLK_SOURCE_OSCULP32K                    3          
#define GCLK_SOURCE_OSC16M                       6          
#define GCLK_SOURCE_OSC32K                       4          
#define GCLK_SOURCE_XOSC                         0          
#define GCLK_SOURCE_XOSC32K                      5          
#define GCLK_INSTANCE_ID                         6          

#endif /* _WLR089_GCLK_INSTANCE_ */
