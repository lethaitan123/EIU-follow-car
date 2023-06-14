/**
 * \brief Component description for GCLK
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
#ifndef _WLR089_GCLK_COMPONENT_H_
#define _WLR089_GCLK_COMPONENT_H_
#define _WLR089_GCLK_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup WLR089_GCLK b'Generic Clock Generator'
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR GCLK */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define GCLK_U2122                      /**< (GCLK) Module ID */
#define REV_GCLK 0x111                  /**< (GCLK) Module revision */

/* -------- GCLK_CTRLA : (GCLK Offset: 0x00) (R/W 8) Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} GCLK_CTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GCLK_CTRLA_OFFSET                   (0x00)                                        /**<  (GCLK_CTRLA) Control  Offset */
#define GCLK_CTRLA_RESETVALUE               _U_(0x00)                                     /**<  (GCLK_CTRLA) Control  Reset Value */

#define GCLK_CTRLA_SWRST_Pos                0                                              /**< (GCLK_CTRLA) Software Reset Position */
#define GCLK_CTRLA_SWRST_Msk                (_U_(0x1) << GCLK_CTRLA_SWRST_Pos)             /**< (GCLK_CTRLA) Software Reset Mask */
#define GCLK_CTRLA_SWRST                    GCLK_CTRLA_SWRST_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_CTRLA_SWRST_Msk instead */
#define GCLK_CTRLA_MASK                     _U_(0x01)                                      /**< \deprecated (GCLK_CTRLA) Register MASK  (Use GCLK_CTRLA_Msk instead)  */
#define GCLK_CTRLA_Msk                      _U_(0x01)                                      /**< (GCLK_CTRLA) Register Mask  */


/* -------- GCLK_SYNCBUSY : (GCLK Offset: 0x04) (R/ 32) Synchronization Busy -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset Synchroniation Busy bit   */
    uint32_t :1;                        /**< bit:      1  Reserved */
    uint32_t GENCTRL0:1;                /**< bit:      2  Generic Clock Generator Control 0 Synchronization Busy bits */
    uint32_t GENCTRL1:1;                /**< bit:      3  Generic Clock Generator Control 1 Synchronization Busy bits */
    uint32_t GENCTRL2:1;                /**< bit:      4  Generic Clock Generator Control 2 Synchronization Busy bits */
    uint32_t GENCTRL3:1;                /**< bit:      5  Generic Clock Generator Control 3 Synchronization Busy bits */
    uint32_t GENCTRL4:1;                /**< bit:      6  Generic Clock Generator Control 4 Synchronization Busy bits */
    uint32_t GENCTRL5:1;                /**< bit:      7  Generic Clock Generator Control 5 Synchronization Busy bits */
    uint32_t GENCTRL6:1;                /**< bit:      8  Generic Clock Generator Control 6 Synchronization Busy bits */
    uint32_t GENCTRL7:1;                /**< bit:      9  Generic Clock Generator Control 7 Synchronization Busy bits */
    uint32_t GENCTRL8:1;                /**< bit:     10  Generic Clock Generator Control 8 Synchronization Busy bits */
    uint32_t :21;                       /**< bit: 11..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t GENCTRL:9;                 /**< bit:  2..10  Generic Clock Generator Control 8 Synchronization Busy bits */
    uint32_t :21;                       /**< bit: 11..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} GCLK_SYNCBUSY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GCLK_SYNCBUSY_OFFSET                (0x04)                                        /**<  (GCLK_SYNCBUSY) Synchronization Busy  Offset */
#define GCLK_SYNCBUSY_RESETVALUE            _U_(0x00)                                     /**<  (GCLK_SYNCBUSY) Synchronization Busy  Reset Value */

#define GCLK_SYNCBUSY_SWRST_Pos             0                                              /**< (GCLK_SYNCBUSY) Software Reset Synchroniation Busy bit Position */
#define GCLK_SYNCBUSY_SWRST_Msk             (_U_(0x1) << GCLK_SYNCBUSY_SWRST_Pos)          /**< (GCLK_SYNCBUSY) Software Reset Synchroniation Busy bit Mask */
#define GCLK_SYNCBUSY_SWRST                 GCLK_SYNCBUSY_SWRST_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_SYNCBUSY_SWRST_Msk instead */
#define GCLK_SYNCBUSY_GENCTRL0_Pos          2                                              /**< (GCLK_SYNCBUSY) Generic Clock Generator Control 0 Synchronization Busy bits Position */
#define GCLK_SYNCBUSY_GENCTRL0_Msk          (_U_(0x1) << GCLK_SYNCBUSY_GENCTRL0_Pos)       /**< (GCLK_SYNCBUSY) Generic Clock Generator Control 0 Synchronization Busy bits Mask */
#define GCLK_SYNCBUSY_GENCTRL0              GCLK_SYNCBUSY_GENCTRL0_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_SYNCBUSY_GENCTRL0_Msk instead */
#define   GCLK_SYNCBUSY_GENCTRL0_GCLK0_Val  _U_(0x1)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 0  */
#define   GCLK_SYNCBUSY_GENCTRL0_GCLK1_Val  _U_(0x2)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 1  */
#define   GCLK_SYNCBUSY_GENCTRL0_GCLK2_Val  _U_(0x4)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 2  */
#define   GCLK_SYNCBUSY_GENCTRL0_GCLK3_Val  _U_(0x8)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 3  */
#define   GCLK_SYNCBUSY_GENCTRL0_GCLK4_Val  _U_(0x10)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 4  */
#define   GCLK_SYNCBUSY_GENCTRL0_GCLK5_Val  _U_(0x20)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 5  */
#define   GCLK_SYNCBUSY_GENCTRL0_GCLK6_Val  _U_(0x40)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 6  */
#define   GCLK_SYNCBUSY_GENCTRL0_GCLK7_Val  _U_(0x80)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 7  */
#define   GCLK_SYNCBUSY_GENCTRL0_GCLK8_Val  _U_(0x100)                                     /**< (GCLK_SYNCBUSY) Generic clock generator 8  */
#define GCLK_SYNCBUSY_GENCTRL0_GCLK0        (GCLK_SYNCBUSY_GENCTRL0_GCLK0_Val << GCLK_SYNCBUSY_GENCTRL0_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 0 Position  */
#define GCLK_SYNCBUSY_GENCTRL0_GCLK1        (GCLK_SYNCBUSY_GENCTRL0_GCLK1_Val << GCLK_SYNCBUSY_GENCTRL0_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 1 Position  */
#define GCLK_SYNCBUSY_GENCTRL0_GCLK2        (GCLK_SYNCBUSY_GENCTRL0_GCLK2_Val << GCLK_SYNCBUSY_GENCTRL0_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 2 Position  */
#define GCLK_SYNCBUSY_GENCTRL0_GCLK3        (GCLK_SYNCBUSY_GENCTRL0_GCLK3_Val << GCLK_SYNCBUSY_GENCTRL0_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 3 Position  */
#define GCLK_SYNCBUSY_GENCTRL0_GCLK4        (GCLK_SYNCBUSY_GENCTRL0_GCLK4_Val << GCLK_SYNCBUSY_GENCTRL0_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 4 Position  */
#define GCLK_SYNCBUSY_GENCTRL0_GCLK5        (GCLK_SYNCBUSY_GENCTRL0_GCLK5_Val << GCLK_SYNCBUSY_GENCTRL0_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 5 Position  */
#define GCLK_SYNCBUSY_GENCTRL0_GCLK6        (GCLK_SYNCBUSY_GENCTRL0_GCLK6_Val << GCLK_SYNCBUSY_GENCTRL0_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 6 Position  */
#define GCLK_SYNCBUSY_GENCTRL0_GCLK7        (GCLK_SYNCBUSY_GENCTRL0_GCLK7_Val << GCLK_SYNCBUSY_GENCTRL0_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 7 Position  */
#define GCLK_SYNCBUSY_GENCTRL0_GCLK8        (GCLK_SYNCBUSY_GENCTRL0_GCLK8_Val << GCLK_SYNCBUSY_GENCTRL0_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 8 Position  */
#define GCLK_SYNCBUSY_GENCTRL1_Pos          3                                              /**< (GCLK_SYNCBUSY) Generic Clock Generator Control 1 Synchronization Busy bits Position */
#define GCLK_SYNCBUSY_GENCTRL1_Msk          (_U_(0x1) << GCLK_SYNCBUSY_GENCTRL1_Pos)       /**< (GCLK_SYNCBUSY) Generic Clock Generator Control 1 Synchronization Busy bits Mask */
#define GCLK_SYNCBUSY_GENCTRL1              GCLK_SYNCBUSY_GENCTRL1_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_SYNCBUSY_GENCTRL1_Msk instead */
#define   GCLK_SYNCBUSY_GENCTRL1_GCLK0_Val  _U_(0x1)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 0  */
#define   GCLK_SYNCBUSY_GENCTRL1_GCLK1_Val  _U_(0x2)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 1  */
#define   GCLK_SYNCBUSY_GENCTRL1_GCLK2_Val  _U_(0x4)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 2  */
#define   GCLK_SYNCBUSY_GENCTRL1_GCLK3_Val  _U_(0x8)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 3  */
#define   GCLK_SYNCBUSY_GENCTRL1_GCLK4_Val  _U_(0x10)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 4  */
#define   GCLK_SYNCBUSY_GENCTRL1_GCLK5_Val  _U_(0x20)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 5  */
#define   GCLK_SYNCBUSY_GENCTRL1_GCLK6_Val  _U_(0x40)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 6  */
#define   GCLK_SYNCBUSY_GENCTRL1_GCLK7_Val  _U_(0x80)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 7  */
#define   GCLK_SYNCBUSY_GENCTRL1_GCLK8_Val  _U_(0x100)                                     /**< (GCLK_SYNCBUSY) Generic clock generator 8  */
#define GCLK_SYNCBUSY_GENCTRL1_GCLK0        (GCLK_SYNCBUSY_GENCTRL1_GCLK0_Val << GCLK_SYNCBUSY_GENCTRL1_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 0 Position  */
#define GCLK_SYNCBUSY_GENCTRL1_GCLK1        (GCLK_SYNCBUSY_GENCTRL1_GCLK1_Val << GCLK_SYNCBUSY_GENCTRL1_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 1 Position  */
#define GCLK_SYNCBUSY_GENCTRL1_GCLK2        (GCLK_SYNCBUSY_GENCTRL1_GCLK2_Val << GCLK_SYNCBUSY_GENCTRL1_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 2 Position  */
#define GCLK_SYNCBUSY_GENCTRL1_GCLK3        (GCLK_SYNCBUSY_GENCTRL1_GCLK3_Val << GCLK_SYNCBUSY_GENCTRL1_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 3 Position  */
#define GCLK_SYNCBUSY_GENCTRL1_GCLK4        (GCLK_SYNCBUSY_GENCTRL1_GCLK4_Val << GCLK_SYNCBUSY_GENCTRL1_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 4 Position  */
#define GCLK_SYNCBUSY_GENCTRL1_GCLK5        (GCLK_SYNCBUSY_GENCTRL1_GCLK5_Val << GCLK_SYNCBUSY_GENCTRL1_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 5 Position  */
#define GCLK_SYNCBUSY_GENCTRL1_GCLK6        (GCLK_SYNCBUSY_GENCTRL1_GCLK6_Val << GCLK_SYNCBUSY_GENCTRL1_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 6 Position  */
#define GCLK_SYNCBUSY_GENCTRL1_GCLK7        (GCLK_SYNCBUSY_GENCTRL1_GCLK7_Val << GCLK_SYNCBUSY_GENCTRL1_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 7 Position  */
#define GCLK_SYNCBUSY_GENCTRL1_GCLK8        (GCLK_SYNCBUSY_GENCTRL1_GCLK8_Val << GCLK_SYNCBUSY_GENCTRL1_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 8 Position  */
#define GCLK_SYNCBUSY_GENCTRL2_Pos          4                                              /**< (GCLK_SYNCBUSY) Generic Clock Generator Control 2 Synchronization Busy bits Position */
#define GCLK_SYNCBUSY_GENCTRL2_Msk          (_U_(0x1) << GCLK_SYNCBUSY_GENCTRL2_Pos)       /**< (GCLK_SYNCBUSY) Generic Clock Generator Control 2 Synchronization Busy bits Mask */
#define GCLK_SYNCBUSY_GENCTRL2              GCLK_SYNCBUSY_GENCTRL2_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_SYNCBUSY_GENCTRL2_Msk instead */
#define   GCLK_SYNCBUSY_GENCTRL2_GCLK0_Val  _U_(0x1)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 0  */
#define   GCLK_SYNCBUSY_GENCTRL2_GCLK1_Val  _U_(0x2)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 1  */
#define   GCLK_SYNCBUSY_GENCTRL2_GCLK2_Val  _U_(0x4)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 2  */
#define   GCLK_SYNCBUSY_GENCTRL2_GCLK3_Val  _U_(0x8)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 3  */
#define   GCLK_SYNCBUSY_GENCTRL2_GCLK4_Val  _U_(0x10)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 4  */
#define   GCLK_SYNCBUSY_GENCTRL2_GCLK5_Val  _U_(0x20)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 5  */
#define   GCLK_SYNCBUSY_GENCTRL2_GCLK6_Val  _U_(0x40)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 6  */
#define   GCLK_SYNCBUSY_GENCTRL2_GCLK7_Val  _U_(0x80)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 7  */
#define   GCLK_SYNCBUSY_GENCTRL2_GCLK8_Val  _U_(0x100)                                     /**< (GCLK_SYNCBUSY) Generic clock generator 8  */
#define GCLK_SYNCBUSY_GENCTRL2_GCLK0        (GCLK_SYNCBUSY_GENCTRL2_GCLK0_Val << GCLK_SYNCBUSY_GENCTRL2_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 0 Position  */
#define GCLK_SYNCBUSY_GENCTRL2_GCLK1        (GCLK_SYNCBUSY_GENCTRL2_GCLK1_Val << GCLK_SYNCBUSY_GENCTRL2_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 1 Position  */
#define GCLK_SYNCBUSY_GENCTRL2_GCLK2        (GCLK_SYNCBUSY_GENCTRL2_GCLK2_Val << GCLK_SYNCBUSY_GENCTRL2_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 2 Position  */
#define GCLK_SYNCBUSY_GENCTRL2_GCLK3        (GCLK_SYNCBUSY_GENCTRL2_GCLK3_Val << GCLK_SYNCBUSY_GENCTRL2_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 3 Position  */
#define GCLK_SYNCBUSY_GENCTRL2_GCLK4        (GCLK_SYNCBUSY_GENCTRL2_GCLK4_Val << GCLK_SYNCBUSY_GENCTRL2_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 4 Position  */
#define GCLK_SYNCBUSY_GENCTRL2_GCLK5        (GCLK_SYNCBUSY_GENCTRL2_GCLK5_Val << GCLK_SYNCBUSY_GENCTRL2_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 5 Position  */
#define GCLK_SYNCBUSY_GENCTRL2_GCLK6        (GCLK_SYNCBUSY_GENCTRL2_GCLK6_Val << GCLK_SYNCBUSY_GENCTRL2_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 6 Position  */
#define GCLK_SYNCBUSY_GENCTRL2_GCLK7        (GCLK_SYNCBUSY_GENCTRL2_GCLK7_Val << GCLK_SYNCBUSY_GENCTRL2_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 7 Position  */
#define GCLK_SYNCBUSY_GENCTRL2_GCLK8        (GCLK_SYNCBUSY_GENCTRL2_GCLK8_Val << GCLK_SYNCBUSY_GENCTRL2_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 8 Position  */
#define GCLK_SYNCBUSY_GENCTRL3_Pos          5                                              /**< (GCLK_SYNCBUSY) Generic Clock Generator Control 3 Synchronization Busy bits Position */
#define GCLK_SYNCBUSY_GENCTRL3_Msk          (_U_(0x1) << GCLK_SYNCBUSY_GENCTRL3_Pos)       /**< (GCLK_SYNCBUSY) Generic Clock Generator Control 3 Synchronization Busy bits Mask */
#define GCLK_SYNCBUSY_GENCTRL3              GCLK_SYNCBUSY_GENCTRL3_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_SYNCBUSY_GENCTRL3_Msk instead */
#define   GCLK_SYNCBUSY_GENCTRL3_GCLK0_Val  _U_(0x1)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 0  */
#define   GCLK_SYNCBUSY_GENCTRL3_GCLK1_Val  _U_(0x2)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 1  */
#define   GCLK_SYNCBUSY_GENCTRL3_GCLK2_Val  _U_(0x4)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 2  */
#define   GCLK_SYNCBUSY_GENCTRL3_GCLK3_Val  _U_(0x8)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 3  */
#define   GCLK_SYNCBUSY_GENCTRL3_GCLK4_Val  _U_(0x10)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 4  */
#define   GCLK_SYNCBUSY_GENCTRL3_GCLK5_Val  _U_(0x20)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 5  */
#define   GCLK_SYNCBUSY_GENCTRL3_GCLK6_Val  _U_(0x40)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 6  */
#define   GCLK_SYNCBUSY_GENCTRL3_GCLK7_Val  _U_(0x80)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 7  */
#define   GCLK_SYNCBUSY_GENCTRL3_GCLK8_Val  _U_(0x100)                                     /**< (GCLK_SYNCBUSY) Generic clock generator 8  */
#define GCLK_SYNCBUSY_GENCTRL3_GCLK0        (GCLK_SYNCBUSY_GENCTRL3_GCLK0_Val << GCLK_SYNCBUSY_GENCTRL3_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 0 Position  */
#define GCLK_SYNCBUSY_GENCTRL3_GCLK1        (GCLK_SYNCBUSY_GENCTRL3_GCLK1_Val << GCLK_SYNCBUSY_GENCTRL3_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 1 Position  */
#define GCLK_SYNCBUSY_GENCTRL3_GCLK2        (GCLK_SYNCBUSY_GENCTRL3_GCLK2_Val << GCLK_SYNCBUSY_GENCTRL3_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 2 Position  */
#define GCLK_SYNCBUSY_GENCTRL3_GCLK3        (GCLK_SYNCBUSY_GENCTRL3_GCLK3_Val << GCLK_SYNCBUSY_GENCTRL3_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 3 Position  */
#define GCLK_SYNCBUSY_GENCTRL3_GCLK4        (GCLK_SYNCBUSY_GENCTRL3_GCLK4_Val << GCLK_SYNCBUSY_GENCTRL3_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 4 Position  */
#define GCLK_SYNCBUSY_GENCTRL3_GCLK5        (GCLK_SYNCBUSY_GENCTRL3_GCLK5_Val << GCLK_SYNCBUSY_GENCTRL3_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 5 Position  */
#define GCLK_SYNCBUSY_GENCTRL3_GCLK6        (GCLK_SYNCBUSY_GENCTRL3_GCLK6_Val << GCLK_SYNCBUSY_GENCTRL3_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 6 Position  */
#define GCLK_SYNCBUSY_GENCTRL3_GCLK7        (GCLK_SYNCBUSY_GENCTRL3_GCLK7_Val << GCLK_SYNCBUSY_GENCTRL3_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 7 Position  */
#define GCLK_SYNCBUSY_GENCTRL3_GCLK8        (GCLK_SYNCBUSY_GENCTRL3_GCLK8_Val << GCLK_SYNCBUSY_GENCTRL3_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 8 Position  */
#define GCLK_SYNCBUSY_GENCTRL4_Pos          6                                              /**< (GCLK_SYNCBUSY) Generic Clock Generator Control 4 Synchronization Busy bits Position */
#define GCLK_SYNCBUSY_GENCTRL4_Msk          (_U_(0x1) << GCLK_SYNCBUSY_GENCTRL4_Pos)       /**< (GCLK_SYNCBUSY) Generic Clock Generator Control 4 Synchronization Busy bits Mask */
#define GCLK_SYNCBUSY_GENCTRL4              GCLK_SYNCBUSY_GENCTRL4_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_SYNCBUSY_GENCTRL4_Msk instead */
#define   GCLK_SYNCBUSY_GENCTRL4_GCLK0_Val  _U_(0x1)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 0  */
#define   GCLK_SYNCBUSY_GENCTRL4_GCLK1_Val  _U_(0x2)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 1  */
#define   GCLK_SYNCBUSY_GENCTRL4_GCLK2_Val  _U_(0x4)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 2  */
#define   GCLK_SYNCBUSY_GENCTRL4_GCLK3_Val  _U_(0x8)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 3  */
#define   GCLK_SYNCBUSY_GENCTRL4_GCLK4_Val  _U_(0x10)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 4  */
#define   GCLK_SYNCBUSY_GENCTRL4_GCLK5_Val  _U_(0x20)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 5  */
#define   GCLK_SYNCBUSY_GENCTRL4_GCLK6_Val  _U_(0x40)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 6  */
#define   GCLK_SYNCBUSY_GENCTRL4_GCLK7_Val  _U_(0x80)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 7  */
#define   GCLK_SYNCBUSY_GENCTRL4_GCLK8_Val  _U_(0x100)                                     /**< (GCLK_SYNCBUSY) Generic clock generator 8  */
#define GCLK_SYNCBUSY_GENCTRL4_GCLK0        (GCLK_SYNCBUSY_GENCTRL4_GCLK0_Val << GCLK_SYNCBUSY_GENCTRL4_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 0 Position  */
#define GCLK_SYNCBUSY_GENCTRL4_GCLK1        (GCLK_SYNCBUSY_GENCTRL4_GCLK1_Val << GCLK_SYNCBUSY_GENCTRL4_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 1 Position  */
#define GCLK_SYNCBUSY_GENCTRL4_GCLK2        (GCLK_SYNCBUSY_GENCTRL4_GCLK2_Val << GCLK_SYNCBUSY_GENCTRL4_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 2 Position  */
#define GCLK_SYNCBUSY_GENCTRL4_GCLK3        (GCLK_SYNCBUSY_GENCTRL4_GCLK3_Val << GCLK_SYNCBUSY_GENCTRL4_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 3 Position  */
#define GCLK_SYNCBUSY_GENCTRL4_GCLK4        (GCLK_SYNCBUSY_GENCTRL4_GCLK4_Val << GCLK_SYNCBUSY_GENCTRL4_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 4 Position  */
#define GCLK_SYNCBUSY_GENCTRL4_GCLK5        (GCLK_SYNCBUSY_GENCTRL4_GCLK5_Val << GCLK_SYNCBUSY_GENCTRL4_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 5 Position  */
#define GCLK_SYNCBUSY_GENCTRL4_GCLK6        (GCLK_SYNCBUSY_GENCTRL4_GCLK6_Val << GCLK_SYNCBUSY_GENCTRL4_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 6 Position  */
#define GCLK_SYNCBUSY_GENCTRL4_GCLK7        (GCLK_SYNCBUSY_GENCTRL4_GCLK7_Val << GCLK_SYNCBUSY_GENCTRL4_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 7 Position  */
#define GCLK_SYNCBUSY_GENCTRL4_GCLK8        (GCLK_SYNCBUSY_GENCTRL4_GCLK8_Val << GCLK_SYNCBUSY_GENCTRL4_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 8 Position  */
#define GCLK_SYNCBUSY_GENCTRL5_Pos          7                                              /**< (GCLK_SYNCBUSY) Generic Clock Generator Control 5 Synchronization Busy bits Position */
#define GCLK_SYNCBUSY_GENCTRL5_Msk          (_U_(0x1) << GCLK_SYNCBUSY_GENCTRL5_Pos)       /**< (GCLK_SYNCBUSY) Generic Clock Generator Control 5 Synchronization Busy bits Mask */
#define GCLK_SYNCBUSY_GENCTRL5              GCLK_SYNCBUSY_GENCTRL5_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_SYNCBUSY_GENCTRL5_Msk instead */
#define   GCLK_SYNCBUSY_GENCTRL5_GCLK0_Val  _U_(0x1)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 0  */
#define   GCLK_SYNCBUSY_GENCTRL5_GCLK1_Val  _U_(0x2)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 1  */
#define   GCLK_SYNCBUSY_GENCTRL5_GCLK2_Val  _U_(0x4)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 2  */
#define   GCLK_SYNCBUSY_GENCTRL5_GCLK3_Val  _U_(0x8)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 3  */
#define   GCLK_SYNCBUSY_GENCTRL5_GCLK4_Val  _U_(0x10)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 4  */
#define   GCLK_SYNCBUSY_GENCTRL5_GCLK5_Val  _U_(0x20)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 5  */
#define   GCLK_SYNCBUSY_GENCTRL5_GCLK6_Val  _U_(0x40)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 6  */
#define   GCLK_SYNCBUSY_GENCTRL5_GCLK7_Val  _U_(0x80)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 7  */
#define   GCLK_SYNCBUSY_GENCTRL5_GCLK8_Val  _U_(0x100)                                     /**< (GCLK_SYNCBUSY) Generic clock generator 8  */
#define GCLK_SYNCBUSY_GENCTRL5_GCLK0        (GCLK_SYNCBUSY_GENCTRL5_GCLK0_Val << GCLK_SYNCBUSY_GENCTRL5_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 0 Position  */
#define GCLK_SYNCBUSY_GENCTRL5_GCLK1        (GCLK_SYNCBUSY_GENCTRL5_GCLK1_Val << GCLK_SYNCBUSY_GENCTRL5_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 1 Position  */
#define GCLK_SYNCBUSY_GENCTRL5_GCLK2        (GCLK_SYNCBUSY_GENCTRL5_GCLK2_Val << GCLK_SYNCBUSY_GENCTRL5_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 2 Position  */
#define GCLK_SYNCBUSY_GENCTRL5_GCLK3        (GCLK_SYNCBUSY_GENCTRL5_GCLK3_Val << GCLK_SYNCBUSY_GENCTRL5_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 3 Position  */
#define GCLK_SYNCBUSY_GENCTRL5_GCLK4        (GCLK_SYNCBUSY_GENCTRL5_GCLK4_Val << GCLK_SYNCBUSY_GENCTRL5_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 4 Position  */
#define GCLK_SYNCBUSY_GENCTRL5_GCLK5        (GCLK_SYNCBUSY_GENCTRL5_GCLK5_Val << GCLK_SYNCBUSY_GENCTRL5_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 5 Position  */
#define GCLK_SYNCBUSY_GENCTRL5_GCLK6        (GCLK_SYNCBUSY_GENCTRL5_GCLK6_Val << GCLK_SYNCBUSY_GENCTRL5_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 6 Position  */
#define GCLK_SYNCBUSY_GENCTRL5_GCLK7        (GCLK_SYNCBUSY_GENCTRL5_GCLK7_Val << GCLK_SYNCBUSY_GENCTRL5_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 7 Position  */
#define GCLK_SYNCBUSY_GENCTRL5_GCLK8        (GCLK_SYNCBUSY_GENCTRL5_GCLK8_Val << GCLK_SYNCBUSY_GENCTRL5_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 8 Position  */
#define GCLK_SYNCBUSY_GENCTRL6_Pos          8                                              /**< (GCLK_SYNCBUSY) Generic Clock Generator Control 6 Synchronization Busy bits Position */
#define GCLK_SYNCBUSY_GENCTRL6_Msk          (_U_(0x1) << GCLK_SYNCBUSY_GENCTRL6_Pos)       /**< (GCLK_SYNCBUSY) Generic Clock Generator Control 6 Synchronization Busy bits Mask */
#define GCLK_SYNCBUSY_GENCTRL6              GCLK_SYNCBUSY_GENCTRL6_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_SYNCBUSY_GENCTRL6_Msk instead */
#define   GCLK_SYNCBUSY_GENCTRL6_GCLK0_Val  _U_(0x1)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 0  */
#define   GCLK_SYNCBUSY_GENCTRL6_GCLK1_Val  _U_(0x2)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 1  */
#define   GCLK_SYNCBUSY_GENCTRL6_GCLK2_Val  _U_(0x4)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 2  */
#define   GCLK_SYNCBUSY_GENCTRL6_GCLK3_Val  _U_(0x8)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 3  */
#define   GCLK_SYNCBUSY_GENCTRL6_GCLK4_Val  _U_(0x10)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 4  */
#define   GCLK_SYNCBUSY_GENCTRL6_GCLK5_Val  _U_(0x20)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 5  */
#define   GCLK_SYNCBUSY_GENCTRL6_GCLK6_Val  _U_(0x40)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 6  */
#define   GCLK_SYNCBUSY_GENCTRL6_GCLK7_Val  _U_(0x80)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 7  */
#define   GCLK_SYNCBUSY_GENCTRL6_GCLK8_Val  _U_(0x100)                                     /**< (GCLK_SYNCBUSY) Generic clock generator 8  */
#define GCLK_SYNCBUSY_GENCTRL6_GCLK0        (GCLK_SYNCBUSY_GENCTRL6_GCLK0_Val << GCLK_SYNCBUSY_GENCTRL6_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 0 Position  */
#define GCLK_SYNCBUSY_GENCTRL6_GCLK1        (GCLK_SYNCBUSY_GENCTRL6_GCLK1_Val << GCLK_SYNCBUSY_GENCTRL6_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 1 Position  */
#define GCLK_SYNCBUSY_GENCTRL6_GCLK2        (GCLK_SYNCBUSY_GENCTRL6_GCLK2_Val << GCLK_SYNCBUSY_GENCTRL6_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 2 Position  */
#define GCLK_SYNCBUSY_GENCTRL6_GCLK3        (GCLK_SYNCBUSY_GENCTRL6_GCLK3_Val << GCLK_SYNCBUSY_GENCTRL6_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 3 Position  */
#define GCLK_SYNCBUSY_GENCTRL6_GCLK4        (GCLK_SYNCBUSY_GENCTRL6_GCLK4_Val << GCLK_SYNCBUSY_GENCTRL6_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 4 Position  */
#define GCLK_SYNCBUSY_GENCTRL6_GCLK5        (GCLK_SYNCBUSY_GENCTRL6_GCLK5_Val << GCLK_SYNCBUSY_GENCTRL6_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 5 Position  */
#define GCLK_SYNCBUSY_GENCTRL6_GCLK6        (GCLK_SYNCBUSY_GENCTRL6_GCLK6_Val << GCLK_SYNCBUSY_GENCTRL6_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 6 Position  */
#define GCLK_SYNCBUSY_GENCTRL6_GCLK7        (GCLK_SYNCBUSY_GENCTRL6_GCLK7_Val << GCLK_SYNCBUSY_GENCTRL6_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 7 Position  */
#define GCLK_SYNCBUSY_GENCTRL6_GCLK8        (GCLK_SYNCBUSY_GENCTRL6_GCLK8_Val << GCLK_SYNCBUSY_GENCTRL6_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 8 Position  */
#define GCLK_SYNCBUSY_GENCTRL7_Pos          9                                              /**< (GCLK_SYNCBUSY) Generic Clock Generator Control 7 Synchronization Busy bits Position */
#define GCLK_SYNCBUSY_GENCTRL7_Msk          (_U_(0x1) << GCLK_SYNCBUSY_GENCTRL7_Pos)       /**< (GCLK_SYNCBUSY) Generic Clock Generator Control 7 Synchronization Busy bits Mask */
#define GCLK_SYNCBUSY_GENCTRL7              GCLK_SYNCBUSY_GENCTRL7_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_SYNCBUSY_GENCTRL7_Msk instead */
#define   GCLK_SYNCBUSY_GENCTRL7_GCLK0_Val  _U_(0x1)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 0  */
#define   GCLK_SYNCBUSY_GENCTRL7_GCLK1_Val  _U_(0x2)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 1  */
#define   GCLK_SYNCBUSY_GENCTRL7_GCLK2_Val  _U_(0x4)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 2  */
#define   GCLK_SYNCBUSY_GENCTRL7_GCLK3_Val  _U_(0x8)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 3  */
#define   GCLK_SYNCBUSY_GENCTRL7_GCLK4_Val  _U_(0x10)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 4  */
#define   GCLK_SYNCBUSY_GENCTRL7_GCLK5_Val  _U_(0x20)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 5  */
#define   GCLK_SYNCBUSY_GENCTRL7_GCLK6_Val  _U_(0x40)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 6  */
#define   GCLK_SYNCBUSY_GENCTRL7_GCLK7_Val  _U_(0x80)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 7  */
#define   GCLK_SYNCBUSY_GENCTRL7_GCLK8_Val  _U_(0x100)                                     /**< (GCLK_SYNCBUSY) Generic clock generator 8  */
#define GCLK_SYNCBUSY_GENCTRL7_GCLK0        (GCLK_SYNCBUSY_GENCTRL7_GCLK0_Val << GCLK_SYNCBUSY_GENCTRL7_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 0 Position  */
#define GCLK_SYNCBUSY_GENCTRL7_GCLK1        (GCLK_SYNCBUSY_GENCTRL7_GCLK1_Val << GCLK_SYNCBUSY_GENCTRL7_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 1 Position  */
#define GCLK_SYNCBUSY_GENCTRL7_GCLK2        (GCLK_SYNCBUSY_GENCTRL7_GCLK2_Val << GCLK_SYNCBUSY_GENCTRL7_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 2 Position  */
#define GCLK_SYNCBUSY_GENCTRL7_GCLK3        (GCLK_SYNCBUSY_GENCTRL7_GCLK3_Val << GCLK_SYNCBUSY_GENCTRL7_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 3 Position  */
#define GCLK_SYNCBUSY_GENCTRL7_GCLK4        (GCLK_SYNCBUSY_GENCTRL7_GCLK4_Val << GCLK_SYNCBUSY_GENCTRL7_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 4 Position  */
#define GCLK_SYNCBUSY_GENCTRL7_GCLK5        (GCLK_SYNCBUSY_GENCTRL7_GCLK5_Val << GCLK_SYNCBUSY_GENCTRL7_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 5 Position  */
#define GCLK_SYNCBUSY_GENCTRL7_GCLK6        (GCLK_SYNCBUSY_GENCTRL7_GCLK6_Val << GCLK_SYNCBUSY_GENCTRL7_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 6 Position  */
#define GCLK_SYNCBUSY_GENCTRL7_GCLK7        (GCLK_SYNCBUSY_GENCTRL7_GCLK7_Val << GCLK_SYNCBUSY_GENCTRL7_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 7 Position  */
#define GCLK_SYNCBUSY_GENCTRL7_GCLK8        (GCLK_SYNCBUSY_GENCTRL7_GCLK8_Val << GCLK_SYNCBUSY_GENCTRL7_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 8 Position  */
#define GCLK_SYNCBUSY_GENCTRL8_Pos          10                                             /**< (GCLK_SYNCBUSY) Generic Clock Generator Control 8 Synchronization Busy bits Position */
#define GCLK_SYNCBUSY_GENCTRL8_Msk          (_U_(0x1) << GCLK_SYNCBUSY_GENCTRL8_Pos)       /**< (GCLK_SYNCBUSY) Generic Clock Generator Control 8 Synchronization Busy bits Mask */
#define GCLK_SYNCBUSY_GENCTRL8              GCLK_SYNCBUSY_GENCTRL8_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_SYNCBUSY_GENCTRL8_Msk instead */
#define   GCLK_SYNCBUSY_GENCTRL8_GCLK0_Val  _U_(0x1)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 0  */
#define   GCLK_SYNCBUSY_GENCTRL8_GCLK1_Val  _U_(0x2)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 1  */
#define   GCLK_SYNCBUSY_GENCTRL8_GCLK2_Val  _U_(0x4)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 2  */
#define   GCLK_SYNCBUSY_GENCTRL8_GCLK3_Val  _U_(0x8)                                       /**< (GCLK_SYNCBUSY) Generic clock generator 3  */
#define   GCLK_SYNCBUSY_GENCTRL8_GCLK4_Val  _U_(0x10)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 4  */
#define   GCLK_SYNCBUSY_GENCTRL8_GCLK5_Val  _U_(0x20)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 5  */
#define   GCLK_SYNCBUSY_GENCTRL8_GCLK6_Val  _U_(0x40)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 6  */
#define   GCLK_SYNCBUSY_GENCTRL8_GCLK7_Val  _U_(0x80)                                      /**< (GCLK_SYNCBUSY) Generic clock generator 7  */
#define   GCLK_SYNCBUSY_GENCTRL8_GCLK8_Val  _U_(0x100)                                     /**< (GCLK_SYNCBUSY) Generic clock generator 8  */
#define GCLK_SYNCBUSY_GENCTRL8_GCLK0        (GCLK_SYNCBUSY_GENCTRL8_GCLK0_Val << GCLK_SYNCBUSY_GENCTRL8_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 0 Position  */
#define GCLK_SYNCBUSY_GENCTRL8_GCLK1        (GCLK_SYNCBUSY_GENCTRL8_GCLK1_Val << GCLK_SYNCBUSY_GENCTRL8_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 1 Position  */
#define GCLK_SYNCBUSY_GENCTRL8_GCLK2        (GCLK_SYNCBUSY_GENCTRL8_GCLK2_Val << GCLK_SYNCBUSY_GENCTRL8_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 2 Position  */
#define GCLK_SYNCBUSY_GENCTRL8_GCLK3        (GCLK_SYNCBUSY_GENCTRL8_GCLK3_Val << GCLK_SYNCBUSY_GENCTRL8_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 3 Position  */
#define GCLK_SYNCBUSY_GENCTRL8_GCLK4        (GCLK_SYNCBUSY_GENCTRL8_GCLK4_Val << GCLK_SYNCBUSY_GENCTRL8_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 4 Position  */
#define GCLK_SYNCBUSY_GENCTRL8_GCLK5        (GCLK_SYNCBUSY_GENCTRL8_GCLK5_Val << GCLK_SYNCBUSY_GENCTRL8_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 5 Position  */
#define GCLK_SYNCBUSY_GENCTRL8_GCLK6        (GCLK_SYNCBUSY_GENCTRL8_GCLK6_Val << GCLK_SYNCBUSY_GENCTRL8_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 6 Position  */
#define GCLK_SYNCBUSY_GENCTRL8_GCLK7        (GCLK_SYNCBUSY_GENCTRL8_GCLK7_Val << GCLK_SYNCBUSY_GENCTRL8_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 7 Position  */
#define GCLK_SYNCBUSY_GENCTRL8_GCLK8        (GCLK_SYNCBUSY_GENCTRL8_GCLK8_Val << GCLK_SYNCBUSY_GENCTRL8_Pos)  /**< (GCLK_SYNCBUSY) Generic clock generator 8 Position  */
#define GCLK_SYNCBUSY_MASK                  _U_(0x7FD)                                     /**< \deprecated (GCLK_SYNCBUSY) Register MASK  (Use GCLK_SYNCBUSY_Msk instead)  */
#define GCLK_SYNCBUSY_Msk                   _U_(0x7FD)                                     /**< (GCLK_SYNCBUSY) Register Mask  */

#define GCLK_SYNCBUSY_GENCTRL_Pos           2                                              /**< (GCLK_SYNCBUSY Position) Generic Clock Generator Control 8 Synchronization Busy bits */
#define GCLK_SYNCBUSY_GENCTRL_Msk           (_U_(0x1FF) << GCLK_SYNCBUSY_GENCTRL_Pos)      /**< (GCLK_SYNCBUSY Mask) GENCTRL */
#define GCLK_SYNCBUSY_GENCTRL(value)        (GCLK_SYNCBUSY_GENCTRL_Msk & ((value) << GCLK_SYNCBUSY_GENCTRL_Pos))  

/* -------- GCLK_GENCTRL : (GCLK Offset: 0x20) (R/W 32) Generic Clock Generator Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SRC:4;                     /**< bit:   0..3  Source Select                            */
    uint32_t :4;                        /**< bit:   4..7  Reserved */
    uint32_t GENEN:1;                   /**< bit:      8  Generic Clock Generator Enable           */
    uint32_t IDC:1;                     /**< bit:      9  Improve Duty Cycle                       */
    uint32_t OOV:1;                     /**< bit:     10  Output Off Value                         */
    uint32_t OE:1;                      /**< bit:     11  Output Enable                            */
    uint32_t DIVSEL:1;                  /**< bit:     12  Divide Selection                         */
    uint32_t RUNSTDBY:1;                /**< bit:     13  Run in Standby                           */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t DIV:16;                    /**< bit: 16..31  Division Factor                          */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} GCLK_GENCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GCLK_GENCTRL_OFFSET                 (0x20)                                        /**<  (GCLK_GENCTRL) Generic Clock Generator Control  Offset */
#define GCLK_GENCTRL_RESETVALUE             _U_(0x00)                                     /**<  (GCLK_GENCTRL) Generic Clock Generator Control  Reset Value */

#define GCLK_GENCTRL_SRC_Pos                0                                              /**< (GCLK_GENCTRL) Source Select Position */
#define GCLK_GENCTRL_SRC_Msk                (_U_(0xF) << GCLK_GENCTRL_SRC_Pos)             /**< (GCLK_GENCTRL) Source Select Mask */
#define GCLK_GENCTRL_SRC(value)             (GCLK_GENCTRL_SRC_Msk & ((value) << GCLK_GENCTRL_SRC_Pos))
#define   GCLK_GENCTRL_SRC_XOSC_Val         _U_(0x0)                                       /**< (GCLK_GENCTRL) XOSC oscillator output  */
#define   GCLK_GENCTRL_SRC_GCLKIN_Val       _U_(0x1)                                       /**< (GCLK_GENCTRL) Generator input pad  */
#define   GCLK_GENCTRL_SRC_GCLKGEN1_Val     _U_(0x2)                                       /**< (GCLK_GENCTRL) Generic clock generator 1 output  */
#define   GCLK_GENCTRL_SRC_OSCULP32K_Val    _U_(0x3)                                       /**< (GCLK_GENCTRL) OSCULP32K oscillator output  */
#define   GCLK_GENCTRL_SRC_OSC32K_Val       _U_(0x4)                                       /**< (GCLK_GENCTRL) OSC32K oscillator output  */
#define   GCLK_GENCTRL_SRC_XOSC32K_Val      _U_(0x5)                                       /**< (GCLK_GENCTRL) XOSC32K oscillator output  */
#define   GCLK_GENCTRL_SRC_OSC16M_Val       _U_(0x6)                                       /**< (GCLK_GENCTRL) OSC16M oscillator output  */
#define   GCLK_GENCTRL_SRC_DFLL48M_Val      _U_(0x7)                                       /**< (GCLK_GENCTRL) DFLL48M output  */
#define   GCLK_GENCTRL_SRC_DPLL96M_Val      _U_(0x8)                                       /**< (GCLK_GENCTRL) DPLL96M output  */
#define GCLK_GENCTRL_SRC_XOSC               (GCLK_GENCTRL_SRC_XOSC_Val << GCLK_GENCTRL_SRC_Pos)  /**< (GCLK_GENCTRL) XOSC oscillator output Position  */
#define GCLK_GENCTRL_SRC_GCLKIN             (GCLK_GENCTRL_SRC_GCLKIN_Val << GCLK_GENCTRL_SRC_Pos)  /**< (GCLK_GENCTRL) Generator input pad Position  */
#define GCLK_GENCTRL_SRC_GCLKGEN1           (GCLK_GENCTRL_SRC_GCLKGEN1_Val << GCLK_GENCTRL_SRC_Pos)  /**< (GCLK_GENCTRL) Generic clock generator 1 output Position  */
#define GCLK_GENCTRL_SRC_OSCULP32K          (GCLK_GENCTRL_SRC_OSCULP32K_Val << GCLK_GENCTRL_SRC_Pos)  /**< (GCLK_GENCTRL) OSCULP32K oscillator output Position  */
#define GCLK_GENCTRL_SRC_OSC32K             (GCLK_GENCTRL_SRC_OSC32K_Val << GCLK_GENCTRL_SRC_Pos)  /**< (GCLK_GENCTRL) OSC32K oscillator output Position  */
#define GCLK_GENCTRL_SRC_XOSC32K            (GCLK_GENCTRL_SRC_XOSC32K_Val << GCLK_GENCTRL_SRC_Pos)  /**< (GCLK_GENCTRL) XOSC32K oscillator output Position  */
#define GCLK_GENCTRL_SRC_OSC16M             (GCLK_GENCTRL_SRC_OSC16M_Val << GCLK_GENCTRL_SRC_Pos)  /**< (GCLK_GENCTRL) OSC16M oscillator output Position  */
#define GCLK_GENCTRL_SRC_DFLL48M            (GCLK_GENCTRL_SRC_DFLL48M_Val << GCLK_GENCTRL_SRC_Pos)  /**< (GCLK_GENCTRL) DFLL48M output Position  */
#define GCLK_GENCTRL_SRC_DPLL96M            (GCLK_GENCTRL_SRC_DPLL96M_Val << GCLK_GENCTRL_SRC_Pos)  /**< (GCLK_GENCTRL) DPLL96M output Position  */
#define GCLK_GENCTRL_GENEN_Pos              8                                              /**< (GCLK_GENCTRL) Generic Clock Generator Enable Position */
#define GCLK_GENCTRL_GENEN_Msk              (_U_(0x1) << GCLK_GENCTRL_GENEN_Pos)           /**< (GCLK_GENCTRL) Generic Clock Generator Enable Mask */
#define GCLK_GENCTRL_GENEN                  GCLK_GENCTRL_GENEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_GENCTRL_GENEN_Msk instead */
#define GCLK_GENCTRL_IDC_Pos                9                                              /**< (GCLK_GENCTRL) Improve Duty Cycle Position */
#define GCLK_GENCTRL_IDC_Msk                (_U_(0x1) << GCLK_GENCTRL_IDC_Pos)             /**< (GCLK_GENCTRL) Improve Duty Cycle Mask */
#define GCLK_GENCTRL_IDC                    GCLK_GENCTRL_IDC_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_GENCTRL_IDC_Msk instead */
#define GCLK_GENCTRL_OOV_Pos                10                                             /**< (GCLK_GENCTRL) Output Off Value Position */
#define GCLK_GENCTRL_OOV_Msk                (_U_(0x1) << GCLK_GENCTRL_OOV_Pos)             /**< (GCLK_GENCTRL) Output Off Value Mask */
#define GCLK_GENCTRL_OOV                    GCLK_GENCTRL_OOV_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_GENCTRL_OOV_Msk instead */
#define GCLK_GENCTRL_OE_Pos                 11                                             /**< (GCLK_GENCTRL) Output Enable Position */
#define GCLK_GENCTRL_OE_Msk                 (_U_(0x1) << GCLK_GENCTRL_OE_Pos)              /**< (GCLK_GENCTRL) Output Enable Mask */
#define GCLK_GENCTRL_OE                     GCLK_GENCTRL_OE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_GENCTRL_OE_Msk instead */
#define GCLK_GENCTRL_DIVSEL_Pos             12                                             /**< (GCLK_GENCTRL) Divide Selection Position */
#define GCLK_GENCTRL_DIVSEL_Msk             (_U_(0x1) << GCLK_GENCTRL_DIVSEL_Pos)          /**< (GCLK_GENCTRL) Divide Selection Mask */
#define GCLK_GENCTRL_DIVSEL                 GCLK_GENCTRL_DIVSEL_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_GENCTRL_DIVSEL_Msk instead */
#define   GCLK_GENCTRL_DIVSEL_DIV1_Val      _U_(0x0)                                       /**< (GCLK_GENCTRL) Divide input directly by divider factor  */
#define   GCLK_GENCTRL_DIVSEL_DIV2_Val      _U_(0x1)                                       /**< (GCLK_GENCTRL) Divide input by 2^(divider factor+ 1)  */
#define GCLK_GENCTRL_DIVSEL_DIV1            (GCLK_GENCTRL_DIVSEL_DIV1_Val << GCLK_GENCTRL_DIVSEL_Pos)  /**< (GCLK_GENCTRL) Divide input directly by divider factor Position  */
#define GCLK_GENCTRL_DIVSEL_DIV2            (GCLK_GENCTRL_DIVSEL_DIV2_Val << GCLK_GENCTRL_DIVSEL_Pos)  /**< (GCLK_GENCTRL) Divide input by 2^(divider factor+ 1) Position  */
#define GCLK_GENCTRL_RUNSTDBY_Pos           13                                             /**< (GCLK_GENCTRL) Run in Standby Position */
#define GCLK_GENCTRL_RUNSTDBY_Msk           (_U_(0x1) << GCLK_GENCTRL_RUNSTDBY_Pos)        /**< (GCLK_GENCTRL) Run in Standby Mask */
#define GCLK_GENCTRL_RUNSTDBY               GCLK_GENCTRL_RUNSTDBY_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_GENCTRL_RUNSTDBY_Msk instead */
#define GCLK_GENCTRL_DIV_Pos                16                                             /**< (GCLK_GENCTRL) Division Factor Position */
#define GCLK_GENCTRL_DIV_Msk                (_U_(0xFFFF) << GCLK_GENCTRL_DIV_Pos)          /**< (GCLK_GENCTRL) Division Factor Mask */
#define GCLK_GENCTRL_DIV(value)             (GCLK_GENCTRL_DIV_Msk & ((value) << GCLK_GENCTRL_DIV_Pos))
#define GCLK_GENCTRL_MASK                   _U_(0xFFFF3F0F)                                /**< \deprecated (GCLK_GENCTRL) Register MASK  (Use GCLK_GENCTRL_Msk instead)  */
#define GCLK_GENCTRL_Msk                    _U_(0xFFFF3F0F)                                /**< (GCLK_GENCTRL) Register Mask  */


/* -------- GCLK_PCHCTRL : (GCLK Offset: 0x80) (R/W 32) Peripheral Clock Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t GEN:4;                     /**< bit:   0..3  Generic Clock Generator                  */
    uint32_t :2;                        /**< bit:   4..5  Reserved */
    uint32_t CHEN:1;                    /**< bit:      6  Channel Enable                           */
    uint32_t WRTLOCK:1;                 /**< bit:      7  Write Lock                               */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} GCLK_PCHCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GCLK_PCHCTRL_OFFSET                 (0x80)                                        /**<  (GCLK_PCHCTRL) Peripheral Clock Control  Offset */
#define GCLK_PCHCTRL_RESETVALUE             _U_(0x00)                                     /**<  (GCLK_PCHCTRL) Peripheral Clock Control  Reset Value */

#define GCLK_PCHCTRL_GEN_Pos                0                                              /**< (GCLK_PCHCTRL) Generic Clock Generator Position */
#define GCLK_PCHCTRL_GEN_Msk                (_U_(0xF) << GCLK_PCHCTRL_GEN_Pos)             /**< (GCLK_PCHCTRL) Generic Clock Generator Mask */
#define GCLK_PCHCTRL_GEN(value)             (GCLK_PCHCTRL_GEN_Msk & ((value) << GCLK_PCHCTRL_GEN_Pos))
#define   GCLK_PCHCTRL_GEN_GCLK0_Val        _U_(0x0)                                       /**< (GCLK_PCHCTRL) Generic clock generator 0  */
#define   GCLK_PCHCTRL_GEN_GCLK1_Val        _U_(0x1)                                       /**< (GCLK_PCHCTRL) Generic clock generator 1  */
#define   GCLK_PCHCTRL_GEN_GCLK2_Val        _U_(0x2)                                       /**< (GCLK_PCHCTRL) Generic clock generator 2  */
#define   GCLK_PCHCTRL_GEN_GCLK3_Val        _U_(0x3)                                       /**< (GCLK_PCHCTRL) Generic clock generator 3  */
#define   GCLK_PCHCTRL_GEN_GCLK4_Val        _U_(0x4)                                       /**< (GCLK_PCHCTRL) Generic clock generator 4  */
#define   GCLK_PCHCTRL_GEN_GCLK5_Val        _U_(0x5)                                       /**< (GCLK_PCHCTRL) Generic clock generator 5  */
#define   GCLK_PCHCTRL_GEN_GCLK6_Val        _U_(0x6)                                       /**< (GCLK_PCHCTRL) Generic clock generator 6  */
#define   GCLK_PCHCTRL_GEN_GCLK7_Val        _U_(0x7)                                       /**< (GCLK_PCHCTRL) Generic clock generator 7  */
#define   GCLK_PCHCTRL_GEN_GCLK8_Val        _U_(0x8)                                       /**< (GCLK_PCHCTRL) Generic clock generator 8  */
#define GCLK_PCHCTRL_GEN_GCLK0              (GCLK_PCHCTRL_GEN_GCLK0_Val << GCLK_PCHCTRL_GEN_Pos)  /**< (GCLK_PCHCTRL) Generic clock generator 0 Position  */
#define GCLK_PCHCTRL_GEN_GCLK1              (GCLK_PCHCTRL_GEN_GCLK1_Val << GCLK_PCHCTRL_GEN_Pos)  /**< (GCLK_PCHCTRL) Generic clock generator 1 Position  */
#define GCLK_PCHCTRL_GEN_GCLK2              (GCLK_PCHCTRL_GEN_GCLK2_Val << GCLK_PCHCTRL_GEN_Pos)  /**< (GCLK_PCHCTRL) Generic clock generator 2 Position  */
#define GCLK_PCHCTRL_GEN_GCLK3              (GCLK_PCHCTRL_GEN_GCLK3_Val << GCLK_PCHCTRL_GEN_Pos)  /**< (GCLK_PCHCTRL) Generic clock generator 3 Position  */
#define GCLK_PCHCTRL_GEN_GCLK4              (GCLK_PCHCTRL_GEN_GCLK4_Val << GCLK_PCHCTRL_GEN_Pos)  /**< (GCLK_PCHCTRL) Generic clock generator 4 Position  */
#define GCLK_PCHCTRL_GEN_GCLK5              (GCLK_PCHCTRL_GEN_GCLK5_Val << GCLK_PCHCTRL_GEN_Pos)  /**< (GCLK_PCHCTRL) Generic clock generator 5 Position  */
#define GCLK_PCHCTRL_GEN_GCLK6              (GCLK_PCHCTRL_GEN_GCLK6_Val << GCLK_PCHCTRL_GEN_Pos)  /**< (GCLK_PCHCTRL) Generic clock generator 6 Position  */
#define GCLK_PCHCTRL_GEN_GCLK7              (GCLK_PCHCTRL_GEN_GCLK7_Val << GCLK_PCHCTRL_GEN_Pos)  /**< (GCLK_PCHCTRL) Generic clock generator 7 Position  */
#define GCLK_PCHCTRL_GEN_GCLK8              (GCLK_PCHCTRL_GEN_GCLK8_Val << GCLK_PCHCTRL_GEN_Pos)  /**< (GCLK_PCHCTRL) Generic clock generator 8 Position  */
#define GCLK_PCHCTRL_CHEN_Pos               6                                              /**< (GCLK_PCHCTRL) Channel Enable Position */
#define GCLK_PCHCTRL_CHEN_Msk               (_U_(0x1) << GCLK_PCHCTRL_CHEN_Pos)            /**< (GCLK_PCHCTRL) Channel Enable Mask */
#define GCLK_PCHCTRL_CHEN                   GCLK_PCHCTRL_CHEN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_PCHCTRL_CHEN_Msk instead */
#define GCLK_PCHCTRL_WRTLOCK_Pos            7                                              /**< (GCLK_PCHCTRL) Write Lock Position */
#define GCLK_PCHCTRL_WRTLOCK_Msk            (_U_(0x1) << GCLK_PCHCTRL_WRTLOCK_Pos)         /**< (GCLK_PCHCTRL) Write Lock Mask */
#define GCLK_PCHCTRL_WRTLOCK                GCLK_PCHCTRL_WRTLOCK_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use GCLK_PCHCTRL_WRTLOCK_Msk instead */
#define GCLK_PCHCTRL_MASK                   _U_(0xCF)                                      /**< \deprecated (GCLK_PCHCTRL) Register MASK  (Use GCLK_PCHCTRL_Msk instead)  */
#define GCLK_PCHCTRL_Msk                    _U_(0xCF)                                      /**< (GCLK_PCHCTRL) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief GCLK hardware registers */
typedef struct {  /* Generic Clock Generator */
  __IO uint8_t CTRLA;          /**< (GCLK Offset: 0x00) Control */
  __I  uint8_t                        Reserved1[3];
  __I  uint32_t SYNCBUSY;       /**< (GCLK Offset: 0x04) Synchronization Busy */
  __I  uint8_t                        Reserved2[24];
  __IO uint32_t GENCTRL[9];     /**< (GCLK Offset: 0x20) Generic Clock Generator Control */
  __I  uint8_t                        Reserved3[60];
  __IO uint32_t PCHCTRL[36];    /**< (GCLK Offset: 0x80) Peripheral Clock Control */
} Gclk;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief GCLK hardware registers */
typedef struct {  /* Generic Clock Generator */
  __IO GCLK_CTRLA_Type                CTRLA;          /**< Offset: 0x00 (R/W   8) Control */
  __I  uint8_t                        Reserved1[3];
  __I  GCLK_SYNCBUSY_Type             SYNCBUSY;       /**< Offset: 0x04 (R/   32) Synchronization Busy */
  __I  uint8_t                        Reserved2[24];
  __IO GCLK_GENCTRL_Type              GENCTRL[9];     /**< Offset: 0x20 (R/W  32) Generic Clock Generator Control */
  __I  uint8_t                        Reserved3[60];
  __IO GCLK_PCHCTRL_Type              PCHCTRL[36];    /**< Offset: 0x80 (R/W  32) Peripheral Clock Control */
} Gclk;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  b'end of Generic Clock Generator' */

#endif /* _WLR089_GCLK_COMPONENT_H_ */
