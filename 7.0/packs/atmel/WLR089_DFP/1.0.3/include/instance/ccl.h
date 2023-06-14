/**
 * \brief Instance description for CCL
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
#ifndef _WLR089_CCL_INSTANCE_H_
#define _WLR089_CCL_INSTANCE_H_

/* ========== Register definition for CCL peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_CCL_CTRL            (0x43001C00) /**< (CCL) Control */
#define REG_CCL_SEQCTRL         (0x43001C04) /**< (CCL) SEQ Control x */
#define REG_CCL_SEQCTRL0        (0x43001C04) /**< (CCL) SEQ Control x 0 */
#define REG_CCL_SEQCTRL1        (0x43001C05) /**< (CCL) SEQ Control x 1 */
#define REG_CCL_LUTCTRL         (0x43001C08) /**< (CCL) LUT Control x */
#define REG_CCL_LUTCTRL0        (0x43001C08) /**< (CCL) LUT Control x 0 */
#define REG_CCL_LUTCTRL1        (0x43001C0C) /**< (CCL) LUT Control x 1 */
#define REG_CCL_LUTCTRL2        (0x43001C10) /**< (CCL) LUT Control x 2 */
#define REG_CCL_LUTCTRL3        (0x43001C14) /**< (CCL) LUT Control x 3 */

#else

#define REG_CCL_CTRL            (*(__IO uint8_t*)0x43001C00U) /**< (CCL) Control */
#define REG_CCL_SEQCTRL         (*(__IO uint8_t*)0x43001C04U) /**< (CCL) SEQ Control x */
#define REG_CCL_SEQCTRL0        (*(__IO uint8_t*)0x43001C04U) /**< (CCL) SEQ Control x 0 */
#define REG_CCL_SEQCTRL1        (*(__IO uint8_t*)0x43001C05U) /**< (CCL) SEQ Control x 1 */
#define REG_CCL_LUTCTRL         (*(__IO uint32_t*)0x43001C08U) /**< (CCL) LUT Control x */
#define REG_CCL_LUTCTRL0        (*(__IO uint32_t*)0x43001C08U) /**< (CCL) LUT Control x 0 */
#define REG_CCL_LUTCTRL1        (*(__IO uint32_t*)0x43001C0CU) /**< (CCL) LUT Control x 1 */
#define REG_CCL_LUTCTRL2        (*(__IO uint32_t*)0x43001C10U) /**< (CCL) LUT Control x 2 */
#define REG_CCL_LUTCTRL3        (*(__IO uint32_t*)0x43001C14U) /**< (CCL) LUT Control x 3 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for CCL peripheral ========== */
#define CCL_GCLK_ID                              34         /* GCLK index for CCL */
#define CCL_IO_NUM                               12         /* Numer of input pins */
#define CCL_LUT_NUM                              4          /* Number of LUT in a CCL */
#define CCL_SEQ_NUM                              2          /* Number of SEQ in a CCL */
#define CCL_INSTANCE_ID                          103        

#endif /* _WLR089_CCL_INSTANCE_ */
