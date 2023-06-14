/**
 * \brief Instance description for MTB
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
#ifndef _WLR089_MTB_INSTANCE_H_
#define _WLR089_MTB_INSTANCE_H_

/* ========== Register definition for MTB peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_MTB_POSITION        (0x41006000) /**< (MTB) MTB Position */
#define REG_MTB_MASTER          (0x41006004) /**< (MTB) MTB Master */
#define REG_MTB_FLOW            (0x41006008) /**< (MTB) MTB Flow */
#define REG_MTB_BASE            (0x4100600C) /**< (MTB) MTB Base */
#define REG_MTB_ITCTRL          (0x41006F00) /**< (MTB) MTB Integration Mode Control */
#define REG_MTB_CLAIMSET        (0x41006FA0) /**< (MTB) MTB Claim Set */
#define REG_MTB_CLAIMCLR        (0x41006FA4) /**< (MTB) MTB Claim Clear */
#define REG_MTB_LOCKACCESS      (0x41006FB0) /**< (MTB) MTB Lock Access */
#define REG_MTB_LOCKSTATUS      (0x41006FB4) /**< (MTB) MTB Lock Status */
#define REG_MTB_AUTHSTATUS      (0x41006FB8) /**< (MTB) MTB Authentication Status */
#define REG_MTB_DEVARCH         (0x41006FBC) /**< (MTB) MTB Device Architecture */
#define REG_MTB_DEVID           (0x41006FC8) /**< (MTB) MTB Device Configuration */
#define REG_MTB_DEVTYPE         (0x41006FCC) /**< (MTB) MTB Device Type */
#define REG_MTB_PID4            (0x41006FD0) /**< (MTB) Peripheral Identification 4 */
#define REG_MTB_PID5            (0x41006FD4) /**< (MTB) Peripheral Identification 5 */
#define REG_MTB_PID6            (0x41006FD8) /**< (MTB) Peripheral Identification 6 */
#define REG_MTB_PID7            (0x41006FDC) /**< (MTB) Peripheral Identification 7 */
#define REG_MTB_PID0            (0x41006FE0) /**< (MTB) Peripheral Identification 0 */
#define REG_MTB_PID1            (0x41006FE4) /**< (MTB) Peripheral Identification 1 */
#define REG_MTB_PID2            (0x41006FE8) /**< (MTB) Peripheral Identification 2 */
#define REG_MTB_PID3            (0x41006FEC) /**< (MTB) Peripheral Identification 3 */
#define REG_MTB_CID0            (0x41006FF0) /**< (MTB) Component Identification 0 */
#define REG_MTB_CID1            (0x41006FF4) /**< (MTB) Component Identification 1 */
#define REG_MTB_CID2            (0x41006FF8) /**< (MTB) Component Identification 2 */
#define REG_MTB_CID3            (0x41006FFC) /**< (MTB) Component Identification 3 */

#else

#define REG_MTB_POSITION        (*(__IO uint32_t*)0x41006000U) /**< (MTB) MTB Position */
#define REG_MTB_MASTER          (*(__IO uint32_t*)0x41006004U) /**< (MTB) MTB Master */
#define REG_MTB_FLOW            (*(__IO uint32_t*)0x41006008U) /**< (MTB) MTB Flow */
#define REG_MTB_BASE            (*(__I  uint32_t*)0x4100600CU) /**< (MTB) MTB Base */
#define REG_MTB_ITCTRL          (*(__IO uint32_t*)0x41006F00U) /**< (MTB) MTB Integration Mode Control */
#define REG_MTB_CLAIMSET        (*(__IO uint32_t*)0x41006FA0U) /**< (MTB) MTB Claim Set */
#define REG_MTB_CLAIMCLR        (*(__IO uint32_t*)0x41006FA4U) /**< (MTB) MTB Claim Clear */
#define REG_MTB_LOCKACCESS      (*(__IO uint32_t*)0x41006FB0U) /**< (MTB) MTB Lock Access */
#define REG_MTB_LOCKSTATUS      (*(__I  uint32_t*)0x41006FB4U) /**< (MTB) MTB Lock Status */
#define REG_MTB_AUTHSTATUS      (*(__I  uint32_t*)0x41006FB8U) /**< (MTB) MTB Authentication Status */
#define REG_MTB_DEVARCH         (*(__I  uint32_t*)0x41006FBCU) /**< (MTB) MTB Device Architecture */
#define REG_MTB_DEVID           (*(__I  uint32_t*)0x41006FC8U) /**< (MTB) MTB Device Configuration */
#define REG_MTB_DEVTYPE         (*(__I  uint32_t*)0x41006FCCU) /**< (MTB) MTB Device Type */
#define REG_MTB_PID4            (*(__I  uint32_t*)0x41006FD0U) /**< (MTB) Peripheral Identification 4 */
#define REG_MTB_PID5            (*(__I  uint32_t*)0x41006FD4U) /**< (MTB) Peripheral Identification 5 */
#define REG_MTB_PID6            (*(__I  uint32_t*)0x41006FD8U) /**< (MTB) Peripheral Identification 6 */
#define REG_MTB_PID7            (*(__I  uint32_t*)0x41006FDCU) /**< (MTB) Peripheral Identification 7 */
#define REG_MTB_PID0            (*(__I  uint32_t*)0x41006FE0U) /**< (MTB) Peripheral Identification 0 */
#define REG_MTB_PID1            (*(__I  uint32_t*)0x41006FE4U) /**< (MTB) Peripheral Identification 1 */
#define REG_MTB_PID2            (*(__I  uint32_t*)0x41006FE8U) /**< (MTB) Peripheral Identification 2 */
#define REG_MTB_PID3            (*(__I  uint32_t*)0x41006FECU) /**< (MTB) Peripheral Identification 3 */
#define REG_MTB_CID0            (*(__I  uint32_t*)0x41006FF0U) /**< (MTB) Component Identification 0 */
#define REG_MTB_CID1            (*(__I  uint32_t*)0x41006FF4U) /**< (MTB) Component Identification 1 */
#define REG_MTB_CID2            (*(__I  uint32_t*)0x41006FF8U) /**< (MTB) Component Identification 2 */
#define REG_MTB_CID3            (*(__I  uint32_t*)0x41006FFCU) /**< (MTB) Component Identification 3 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for MTB peripheral ========== */
#define MTB_INSTANCE_ID                          35         

#endif /* _WLR089_MTB_INSTANCE_ */
