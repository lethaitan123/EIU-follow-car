/**
 * \brief Instance description for SUPC
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
#ifndef _WLR089_SUPC_INSTANCE_H_
#define _WLR089_SUPC_INSTANCE_H_

/* ========== Register definition for SUPC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_SUPC_INTENCLR       (0x40001400) /**< (SUPC) Interrupt Enable Clear */
#define REG_SUPC_INTENSET       (0x40001404) /**< (SUPC) Interrupt Enable Set */
#define REG_SUPC_INTFLAG        (0x40001408) /**< (SUPC) Interrupt Flag Status and Clear */
#define REG_SUPC_STATUS         (0x4000140C) /**< (SUPC) Power and Clocks Status */
#define REG_SUPC_BOD33          (0x40001410) /**< (SUPC) BOD33 Control */
#define REG_SUPC_BOD12          (0x40001414) /**< (SUPC) BOD12 Control */
#define REG_SUPC_VREG           (0x40001418) /**< (SUPC) VREG Control */
#define REG_SUPC_VREF           (0x4000141C) /**< (SUPC) VREF Control */
#define REG_SUPC_BBPS           (0x40001420) /**< (SUPC) Battery Backup Power Switch */
#define REG_SUPC_BKOUT          (0x40001424) /**< (SUPC) Backup Output Control */
#define REG_SUPC_BKIN           (0x40001428) /**< (SUPC) Backup Input Control */

#else

#define REG_SUPC_INTENCLR       (*(__IO uint32_t*)0x40001400U) /**< (SUPC) Interrupt Enable Clear */
#define REG_SUPC_INTENSET       (*(__IO uint32_t*)0x40001404U) /**< (SUPC) Interrupt Enable Set */
#define REG_SUPC_INTFLAG        (*(__IO uint32_t*)0x40001408U) /**< (SUPC) Interrupt Flag Status and Clear */
#define REG_SUPC_STATUS         (*(__I  uint32_t*)0x4000140CU) /**< (SUPC) Power and Clocks Status */
#define REG_SUPC_BOD33          (*(__IO uint32_t*)0x40001410U) /**< (SUPC) BOD33 Control */
#define REG_SUPC_BOD12          (*(__IO uint32_t*)0x40001414U) /**< (SUPC) BOD12 Control */
#define REG_SUPC_VREG           (*(__IO uint32_t*)0x40001418U) /**< (SUPC) VREG Control */
#define REG_SUPC_VREF           (*(__IO uint32_t*)0x4000141CU) /**< (SUPC) VREF Control */
#define REG_SUPC_BBPS           (*(__IO uint32_t*)0x40001420U) /**< (SUPC) Battery Backup Power Switch */
#define REG_SUPC_BKOUT          (*(__IO uint32_t*)0x40001424U) /**< (SUPC) Backup Output Control */
#define REG_SUPC_BKIN           (*(__I  uint32_t*)0x40001428U) /**< (SUPC) Backup Input Control */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for SUPC peripheral ========== */
#define SUPC_BOD12_CALIB_MSB                     5          
#define SUPC_BOD33_CALIB_MSB                     5          
#define SUPC_SUPC_OUT_NUM_MSB                    1          /* MSB of backup output pad Number */
#define SUPC_INSTANCE_ID                         5          
#define SUPC_HAS_BOD33_REG_NAME                  1          /* Name of BOD register is BOD33 */

#endif /* _WLR089_SUPC_INSTANCE_ */
