/**
 * \brief Instance description for RSTC
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
#ifndef _WLR089_RSTC_INSTANCE_H_
#define _WLR089_RSTC_INSTANCE_H_

/* ========== Register definition for RSTC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_RSTC_RCAUSE         (0x40000800) /**< (RSTC) Reset Cause */
#define REG_RSTC_BKUPEXIT       (0x40000802) /**< (RSTC) Backup Exit Source */
#define REG_RSTC_WKDBCONF       (0x40000804) /**< (RSTC) Wakeup Debounce Configuration */
#define REG_RSTC_WKPOL          (0x40000808) /**< (RSTC) Wakeup Polarity */
#define REG_RSTC_WKEN           (0x4000080C) /**< (RSTC) Wakeup Enable */
#define REG_RSTC_WKCAUSE        (0x40000810) /**< (RSTC) Wakeup Cause */

#else

#define REG_RSTC_RCAUSE         (*(__I  uint8_t*)0x40000800U) /**< (RSTC) Reset Cause */
#define REG_RSTC_BKUPEXIT       (*(__I  uint8_t*)0x40000802U) /**< (RSTC) Backup Exit Source */
#define REG_RSTC_WKDBCONF       (*(__IO uint8_t*)0x40000804U) /**< (RSTC) Wakeup Debounce Configuration */
#define REG_RSTC_WKPOL          (*(__IO uint16_t*)0x40000808U) /**< (RSTC) Wakeup Polarity */
#define REG_RSTC_WKEN           (*(__IO uint16_t*)0x4000080CU) /**< (RSTC) Wakeup Enable */
#define REG_RSTC_WKCAUSE        (*(__IO uint16_t*)0x40000810U) /**< (RSTC) Wakeup Cause */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for RSTC peripheral ========== */
#define RSTC_NUMBER_OF_EXTWAKE                   8          /* number of external wakeup line */
#define RSTC_INSTANCE_ID                         2          

#endif /* _WLR089_RSTC_INSTANCE_ */
