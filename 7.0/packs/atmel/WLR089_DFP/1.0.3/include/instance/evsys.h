/**
 * \brief Instance description for EVSYS
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
#ifndef _WLR089_EVSYS_INSTANCE_H_
#define _WLR089_EVSYS_INSTANCE_H_

/* ========== Register definition for EVSYS peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_EVSYS_CTRLA         (0x43000000) /**< (EVSYS) Control */
#define REG_EVSYS_CHSTATUS      (0x4300000C) /**< (EVSYS) Channel Status */
#define REG_EVSYS_INTENCLR      (0x43000010) /**< (EVSYS) Interrupt Enable Clear */
#define REG_EVSYS_INTENSET      (0x43000014) /**< (EVSYS) Interrupt Enable Set */
#define REG_EVSYS_INTFLAG       (0x43000018) /**< (EVSYS) Interrupt Flag Status and Clear */
#define REG_EVSYS_SWEVT         (0x4300001C) /**< (EVSYS) Software Event */
#define REG_EVSYS_CHANNEL       (0x43000020) /**< (EVSYS) Channel n */
#define REG_EVSYS_CHANNEL0      (0x43000020) /**< (EVSYS) Channel 0 */
#define REG_EVSYS_CHANNEL1      (0x43000024) /**< (EVSYS) Channel 1 */
#define REG_EVSYS_CHANNEL2      (0x43000028) /**< (EVSYS) Channel 2 */
#define REG_EVSYS_CHANNEL3      (0x4300002C) /**< (EVSYS) Channel 3 */
#define REG_EVSYS_CHANNEL4      (0x43000030) /**< (EVSYS) Channel 4 */
#define REG_EVSYS_CHANNEL5      (0x43000034) /**< (EVSYS) Channel 5 */
#define REG_EVSYS_CHANNEL6      (0x43000038) /**< (EVSYS) Channel 6 */
#define REG_EVSYS_CHANNEL7      (0x4300003C) /**< (EVSYS) Channel 7 */
#define REG_EVSYS_CHANNEL8      (0x43000040) /**< (EVSYS) Channel 8 */
#define REG_EVSYS_CHANNEL9      (0x43000044) /**< (EVSYS) Channel 9 */
#define REG_EVSYS_CHANNEL10     (0x43000048) /**< (EVSYS) Channel 10 */
#define REG_EVSYS_CHANNEL11     (0x4300004C) /**< (EVSYS) Channel 11 */
#define REG_EVSYS_USER          (0x43000080) /**< (EVSYS) User Multiplexer n */
#define REG_EVSYS_USER0         (0x43000080) /**< (EVSYS) User Multiplexer 0 */
#define REG_EVSYS_USER1         (0x43000084) /**< (EVSYS) User Multiplexer 1 */
#define REG_EVSYS_USER2         (0x43000088) /**< (EVSYS) User Multiplexer 2 */
#define REG_EVSYS_USER3         (0x4300008C) /**< (EVSYS) User Multiplexer 3 */
#define REG_EVSYS_USER4         (0x43000090) /**< (EVSYS) User Multiplexer 4 */
#define REG_EVSYS_USER5         (0x43000094) /**< (EVSYS) User Multiplexer 5 */
#define REG_EVSYS_USER6         (0x43000098) /**< (EVSYS) User Multiplexer 6 */
#define REG_EVSYS_USER7         (0x4300009C) /**< (EVSYS) User Multiplexer 7 */
#define REG_EVSYS_USER8         (0x430000A0) /**< (EVSYS) User Multiplexer 8 */
#define REG_EVSYS_USER9         (0x430000A4) /**< (EVSYS) User Multiplexer 9 */
#define REG_EVSYS_USER10        (0x430000A8) /**< (EVSYS) User Multiplexer 10 */
#define REG_EVSYS_USER11        (0x430000AC) /**< (EVSYS) User Multiplexer 11 */
#define REG_EVSYS_USER12        (0x430000B0) /**< (EVSYS) User Multiplexer 12 */
#define REG_EVSYS_USER13        (0x430000B4) /**< (EVSYS) User Multiplexer 13 */
#define REG_EVSYS_USER14        (0x430000B8) /**< (EVSYS) User Multiplexer 14 */
#define REG_EVSYS_USER15        (0x430000BC) /**< (EVSYS) User Multiplexer 15 */
#define REG_EVSYS_USER16        (0x430000C0) /**< (EVSYS) User Multiplexer 16 */
#define REG_EVSYS_USER17        (0x430000C4) /**< (EVSYS) User Multiplexer 17 */
#define REG_EVSYS_USER18        (0x430000C8) /**< (EVSYS) User Multiplexer 18 */
#define REG_EVSYS_USER19        (0x430000CC) /**< (EVSYS) User Multiplexer 19 */
#define REG_EVSYS_USER20        (0x430000D0) /**< (EVSYS) User Multiplexer 20 */
#define REG_EVSYS_USER21        (0x430000D4) /**< (EVSYS) User Multiplexer 21 */
#define REG_EVSYS_USER22        (0x430000D8) /**< (EVSYS) User Multiplexer 22 */
#define REG_EVSYS_USER23        (0x430000DC) /**< (EVSYS) User Multiplexer 23 */
#define REG_EVSYS_USER24        (0x430000E0) /**< (EVSYS) User Multiplexer 24 */
#define REG_EVSYS_USER25        (0x430000E4) /**< (EVSYS) User Multiplexer 25 */
#define REG_EVSYS_USER26        (0x430000E8) /**< (EVSYS) User Multiplexer 26 */
#define REG_EVSYS_USER27        (0x430000EC) /**< (EVSYS) User Multiplexer 27 */
#define REG_EVSYS_USER28        (0x430000F0) /**< (EVSYS) User Multiplexer 28 */
#define REG_EVSYS_USER29        (0x430000F4) /**< (EVSYS) User Multiplexer 29 */
#define REG_EVSYS_USER30        (0x430000F8) /**< (EVSYS) User Multiplexer 30 */
#define REG_EVSYS_USER31        (0x430000FC) /**< (EVSYS) User Multiplexer 31 */
#define REG_EVSYS_USER32        (0x43000100) /**< (EVSYS) User Multiplexer 32 */
#define REG_EVSYS_USER33        (0x43000104) /**< (EVSYS) User Multiplexer 33 */
#define REG_EVSYS_USER34        (0x43000108) /**< (EVSYS) User Multiplexer 34 */
#define REG_EVSYS_USER35        (0x4300010C) /**< (EVSYS) User Multiplexer 35 */
#define REG_EVSYS_USER36        (0x43000110) /**< (EVSYS) User Multiplexer 36 */
#define REG_EVSYS_USER37        (0x43000114) /**< (EVSYS) User Multiplexer 37 */
#define REG_EVSYS_USER38        (0x43000118) /**< (EVSYS) User Multiplexer 38 */
#define REG_EVSYS_USER39        (0x4300011C) /**< (EVSYS) User Multiplexer 39 */
#define REG_EVSYS_USER40        (0x43000120) /**< (EVSYS) User Multiplexer 40 */
#define REG_EVSYS_USER41        (0x43000124) /**< (EVSYS) User Multiplexer 41 */
#define REG_EVSYS_USER42        (0x43000128) /**< (EVSYS) User Multiplexer 42 */
#define REG_EVSYS_USER43        (0x4300012C) /**< (EVSYS) User Multiplexer 43 */
#define REG_EVSYS_USER44        (0x43000130) /**< (EVSYS) User Multiplexer 44 */

#else

#define REG_EVSYS_CTRLA         (*(__IO uint8_t*)0x43000000U) /**< (EVSYS) Control */
#define REG_EVSYS_CHSTATUS      (*(__I  uint32_t*)0x4300000CU) /**< (EVSYS) Channel Status */
#define REG_EVSYS_INTENCLR      (*(__IO uint32_t*)0x43000010U) /**< (EVSYS) Interrupt Enable Clear */
#define REG_EVSYS_INTENSET      (*(__IO uint32_t*)0x43000014U) /**< (EVSYS) Interrupt Enable Set */
#define REG_EVSYS_INTFLAG       (*(__IO uint32_t*)0x43000018U) /**< (EVSYS) Interrupt Flag Status and Clear */
#define REG_EVSYS_SWEVT         (*(__O  uint32_t*)0x4300001CU) /**< (EVSYS) Software Event */
#define REG_EVSYS_CHANNEL       (*(__IO uint32_t*)0x43000020U) /**< (EVSYS) Channel n */
#define REG_EVSYS_CHANNEL0      (*(__IO uint32_t*)0x43000020U) /**< (EVSYS) Channel 0 */
#define REG_EVSYS_CHANNEL1      (*(__IO uint32_t*)0x43000024U) /**< (EVSYS) Channel 1 */
#define REG_EVSYS_CHANNEL2      (*(__IO uint32_t*)0x43000028U) /**< (EVSYS) Channel 2 */
#define REG_EVSYS_CHANNEL3      (*(__IO uint32_t*)0x4300002CU) /**< (EVSYS) Channel 3 */
#define REG_EVSYS_CHANNEL4      (*(__IO uint32_t*)0x43000030U) /**< (EVSYS) Channel 4 */
#define REG_EVSYS_CHANNEL5      (*(__IO uint32_t*)0x43000034U) /**< (EVSYS) Channel 5 */
#define REG_EVSYS_CHANNEL6      (*(__IO uint32_t*)0x43000038U) /**< (EVSYS) Channel 6 */
#define REG_EVSYS_CHANNEL7      (*(__IO uint32_t*)0x4300003CU) /**< (EVSYS) Channel 7 */
#define REG_EVSYS_CHANNEL8      (*(__IO uint32_t*)0x43000040U) /**< (EVSYS) Channel 8 */
#define REG_EVSYS_CHANNEL9      (*(__IO uint32_t*)0x43000044U) /**< (EVSYS) Channel 9 */
#define REG_EVSYS_CHANNEL10     (*(__IO uint32_t*)0x43000048U) /**< (EVSYS) Channel 10 */
#define REG_EVSYS_CHANNEL11     (*(__IO uint32_t*)0x4300004CU) /**< (EVSYS) Channel 11 */
#define REG_EVSYS_USER          (*(__IO uint32_t*)0x43000080U) /**< (EVSYS) User Multiplexer n */
#define REG_EVSYS_USER0         (*(__IO uint32_t*)0x43000080U) /**< (EVSYS) User Multiplexer 0 */
#define REG_EVSYS_USER1         (*(__IO uint32_t*)0x43000084U) /**< (EVSYS) User Multiplexer 1 */
#define REG_EVSYS_USER2         (*(__IO uint32_t*)0x43000088U) /**< (EVSYS) User Multiplexer 2 */
#define REG_EVSYS_USER3         (*(__IO uint32_t*)0x4300008CU) /**< (EVSYS) User Multiplexer 3 */
#define REG_EVSYS_USER4         (*(__IO uint32_t*)0x43000090U) /**< (EVSYS) User Multiplexer 4 */
#define REG_EVSYS_USER5         (*(__IO uint32_t*)0x43000094U) /**< (EVSYS) User Multiplexer 5 */
#define REG_EVSYS_USER6         (*(__IO uint32_t*)0x43000098U) /**< (EVSYS) User Multiplexer 6 */
#define REG_EVSYS_USER7         (*(__IO uint32_t*)0x4300009CU) /**< (EVSYS) User Multiplexer 7 */
#define REG_EVSYS_USER8         (*(__IO uint32_t*)0x430000A0U) /**< (EVSYS) User Multiplexer 8 */
#define REG_EVSYS_USER9         (*(__IO uint32_t*)0x430000A4U) /**< (EVSYS) User Multiplexer 9 */
#define REG_EVSYS_USER10        (*(__IO uint32_t*)0x430000A8U) /**< (EVSYS) User Multiplexer 10 */
#define REG_EVSYS_USER11        (*(__IO uint32_t*)0x430000ACU) /**< (EVSYS) User Multiplexer 11 */
#define REG_EVSYS_USER12        (*(__IO uint32_t*)0x430000B0U) /**< (EVSYS) User Multiplexer 12 */
#define REG_EVSYS_USER13        (*(__IO uint32_t*)0x430000B4U) /**< (EVSYS) User Multiplexer 13 */
#define REG_EVSYS_USER14        (*(__IO uint32_t*)0x430000B8U) /**< (EVSYS) User Multiplexer 14 */
#define REG_EVSYS_USER15        (*(__IO uint32_t*)0x430000BCU) /**< (EVSYS) User Multiplexer 15 */
#define REG_EVSYS_USER16        (*(__IO uint32_t*)0x430000C0U) /**< (EVSYS) User Multiplexer 16 */
#define REG_EVSYS_USER17        (*(__IO uint32_t*)0x430000C4U) /**< (EVSYS) User Multiplexer 17 */
#define REG_EVSYS_USER18        (*(__IO uint32_t*)0x430000C8U) /**< (EVSYS) User Multiplexer 18 */
#define REG_EVSYS_USER19        (*(__IO uint32_t*)0x430000CCU) /**< (EVSYS) User Multiplexer 19 */
#define REG_EVSYS_USER20        (*(__IO uint32_t*)0x430000D0U) /**< (EVSYS) User Multiplexer 20 */
#define REG_EVSYS_USER21        (*(__IO uint32_t*)0x430000D4U) /**< (EVSYS) User Multiplexer 21 */
#define REG_EVSYS_USER22        (*(__IO uint32_t*)0x430000D8U) /**< (EVSYS) User Multiplexer 22 */
#define REG_EVSYS_USER23        (*(__IO uint32_t*)0x430000DCU) /**< (EVSYS) User Multiplexer 23 */
#define REG_EVSYS_USER24        (*(__IO uint32_t*)0x430000E0U) /**< (EVSYS) User Multiplexer 24 */
#define REG_EVSYS_USER25        (*(__IO uint32_t*)0x430000E4U) /**< (EVSYS) User Multiplexer 25 */
#define REG_EVSYS_USER26        (*(__IO uint32_t*)0x430000E8U) /**< (EVSYS) User Multiplexer 26 */
#define REG_EVSYS_USER27        (*(__IO uint32_t*)0x430000ECU) /**< (EVSYS) User Multiplexer 27 */
#define REG_EVSYS_USER28        (*(__IO uint32_t*)0x430000F0U) /**< (EVSYS) User Multiplexer 28 */
#define REG_EVSYS_USER29        (*(__IO uint32_t*)0x430000F4U) /**< (EVSYS) User Multiplexer 29 */
#define REG_EVSYS_USER30        (*(__IO uint32_t*)0x430000F8U) /**< (EVSYS) User Multiplexer 30 */
#define REG_EVSYS_USER31        (*(__IO uint32_t*)0x430000FCU) /**< (EVSYS) User Multiplexer 31 */
#define REG_EVSYS_USER32        (*(__IO uint32_t*)0x43000100U) /**< (EVSYS) User Multiplexer 32 */
#define REG_EVSYS_USER33        (*(__IO uint32_t*)0x43000104U) /**< (EVSYS) User Multiplexer 33 */
#define REG_EVSYS_USER34        (*(__IO uint32_t*)0x43000108U) /**< (EVSYS) User Multiplexer 34 */
#define REG_EVSYS_USER35        (*(__IO uint32_t*)0x4300010CU) /**< (EVSYS) User Multiplexer 35 */
#define REG_EVSYS_USER36        (*(__IO uint32_t*)0x43000110U) /**< (EVSYS) User Multiplexer 36 */
#define REG_EVSYS_USER37        (*(__IO uint32_t*)0x43000114U) /**< (EVSYS) User Multiplexer 37 */
#define REG_EVSYS_USER38        (*(__IO uint32_t*)0x43000118U) /**< (EVSYS) User Multiplexer 38 */
#define REG_EVSYS_USER39        (*(__IO uint32_t*)0x4300011CU) /**< (EVSYS) User Multiplexer 39 */
#define REG_EVSYS_USER40        (*(__IO uint32_t*)0x43000120U) /**< (EVSYS) User Multiplexer 40 */
#define REG_EVSYS_USER41        (*(__IO uint32_t*)0x43000124U) /**< (EVSYS) User Multiplexer 41 */
#define REG_EVSYS_USER42        (*(__IO uint32_t*)0x43000128U) /**< (EVSYS) User Multiplexer 42 */
#define REG_EVSYS_USER43        (*(__IO uint32_t*)0x4300012CU) /**< (EVSYS) User Multiplexer 43 */
#define REG_EVSYS_USER44        (*(__IO uint32_t*)0x43000130U) /**< (EVSYS) User Multiplexer 44 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for EVSYS peripheral ========== */
#define EVSYS_CHANNELS                           12         /* Number of Channels */
#define EVSYS_CHANNELS_BITS                      4          /* Number of bits to select Channel */
#define EVSYS_CHANNELS_MSB                       11         /* Number of Channels - 1 */
#define EVSYS_EXTEVT_NUM                         0          /* Number of External Event Generators */
#define EVSYS_GCLK_ID_0                          5          /* Index of Generic Clock 0 */
#define EVSYS_GCLK_ID_1                          6          /* Index of Generic Clock 1 */
#define EVSYS_GCLK_ID_2                          7          /* Index of Generic Clock 2 */
#define EVSYS_GCLK_ID_3                          8          /* Index of Generic Clock 3 */
#define EVSYS_GCLK_ID_4                          9          /* Index of Generic Clock 4 */
#define EVSYS_GCLK_ID_5                          10         /* Index of Generic Clock 5 */
#define EVSYS_GCLK_ID_6                          11         /* Index of Generic Clock 6 */
#define EVSYS_GCLK_ID_7                          12         /* Index of Generic Clock 7 */
#define EVSYS_GCLK_ID_8                          13         /* Index of Generic Clock 8 */
#define EVSYS_GCLK_ID_9                          14         /* Index of Generic Clock 9 */
#define EVSYS_GCLK_ID_10                         15         /* Index of Generic Clock 10 */
#define EVSYS_GCLK_ID_11                         16         /* Index of Generic Clock 11 */
#define EVSYS_GENERATORS                         83         /* Total Number of Event Generators */
#define EVSYS_GENERATORS_BITS                    7          /* Number of bits to select Event Generator */
#define EVSYS_USERS                              45         /* Total Number of Event Users */
#define EVSYS_USERS_BITS                         6          /* Number of bits to select Event User */
#define EVSYS_INSTANCE_ID                        96         

#endif /* _WLR089_EVSYS_INSTANCE_ */
