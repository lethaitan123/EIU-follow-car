/**
 * \brief Component description for EVSYS
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
#ifndef _WLR089_EVSYS_COMPONENT_H_
#define _WLR089_EVSYS_COMPONENT_H_
#define _WLR089_EVSYS_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup WLR089_EVSYS b'Event System Interface'
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR EVSYS */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define EVSYS_U2256                      /**< (EVSYS) Module ID */
#define REV_EVSYS 0x101                  /**< (EVSYS) Module revision */

/* -------- EVSYS_CTRLA : (EVSYS Offset: 0x00) (R/W 8) Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} EVSYS_CTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_CTRLA_OFFSET                  (0x00)                                        /**<  (EVSYS_CTRLA) Control  Offset */
#define EVSYS_CTRLA_RESETVALUE              _U_(0x00)                                     /**<  (EVSYS_CTRLA) Control  Reset Value */

#define EVSYS_CTRLA_SWRST_Pos               0                                              /**< (EVSYS_CTRLA) Software Reset Position */
#define EVSYS_CTRLA_SWRST_Msk               (_U_(0x1) << EVSYS_CTRLA_SWRST_Pos)            /**< (EVSYS_CTRLA) Software Reset Mask */
#define EVSYS_CTRLA_SWRST                   EVSYS_CTRLA_SWRST_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CTRLA_SWRST_Msk instead */
#define EVSYS_CTRLA_MASK                    _U_(0x01)                                      /**< \deprecated (EVSYS_CTRLA) Register MASK  (Use EVSYS_CTRLA_Msk instead)  */
#define EVSYS_CTRLA_Msk                     _U_(0x01)                                      /**< (EVSYS_CTRLA) Register Mask  */


/* -------- EVSYS_CHSTATUS : (EVSYS Offset: 0x0c) (R/ 32) Channel Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t USRRDY0:1;                 /**< bit:      0  Channel 0 User Ready                     */
    uint32_t USRRDY1:1;                 /**< bit:      1  Channel 1 User Ready                     */
    uint32_t USRRDY2:1;                 /**< bit:      2  Channel 2 User Ready                     */
    uint32_t USRRDY3:1;                 /**< bit:      3  Channel 3 User Ready                     */
    uint32_t USRRDY4:1;                 /**< bit:      4  Channel 4 User Ready                     */
    uint32_t USRRDY5:1;                 /**< bit:      5  Channel 5 User Ready                     */
    uint32_t USRRDY6:1;                 /**< bit:      6  Channel 6 User Ready                     */
    uint32_t USRRDY7:1;                 /**< bit:      7  Channel 7 User Ready                     */
    uint32_t USRRDY8:1;                 /**< bit:      8  Channel 8 User Ready                     */
    uint32_t USRRDY9:1;                 /**< bit:      9  Channel 9 User Ready                     */
    uint32_t USRRDY10:1;                /**< bit:     10  Channel 10 User Ready                    */
    uint32_t USRRDY11:1;                /**< bit:     11  Channel 11 User Ready                    */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t CHBUSY0:1;                 /**< bit:     16  Channel 0 Busy                           */
    uint32_t CHBUSY1:1;                 /**< bit:     17  Channel 1 Busy                           */
    uint32_t CHBUSY2:1;                 /**< bit:     18  Channel 2 Busy                           */
    uint32_t CHBUSY3:1;                 /**< bit:     19  Channel 3 Busy                           */
    uint32_t CHBUSY4:1;                 /**< bit:     20  Channel 4 Busy                           */
    uint32_t CHBUSY5:1;                 /**< bit:     21  Channel 5 Busy                           */
    uint32_t CHBUSY6:1;                 /**< bit:     22  Channel 6 Busy                           */
    uint32_t CHBUSY7:1;                 /**< bit:     23  Channel 7 Busy                           */
    uint32_t CHBUSY8:1;                 /**< bit:     24  Channel 8 Busy                           */
    uint32_t CHBUSY9:1;                 /**< bit:     25  Channel 9 Busy                           */
    uint32_t CHBUSY10:1;                /**< bit:     26  Channel 10 Busy                          */
    uint32_t CHBUSY11:1;                /**< bit:     27  Channel 11 Busy                          */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t USRRDY:12;                 /**< bit:  0..11  Channel x User Ready                     */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t CHBUSY:12;                 /**< bit: 16..27  Channel xx Busy                          */
    uint32_t :4;                        /**< bit: 28..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} EVSYS_CHSTATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_CHSTATUS_OFFSET               (0x0C)                                        /**<  (EVSYS_CHSTATUS) Channel Status  Offset */
#define EVSYS_CHSTATUS_RESETVALUE           _U_(0x00)                                     /**<  (EVSYS_CHSTATUS) Channel Status  Reset Value */

#define EVSYS_CHSTATUS_USRRDY0_Pos          0                                              /**< (EVSYS_CHSTATUS) Channel 0 User Ready Position */
#define EVSYS_CHSTATUS_USRRDY0_Msk          (_U_(0x1) << EVSYS_CHSTATUS_USRRDY0_Pos)       /**< (EVSYS_CHSTATUS) Channel 0 User Ready Mask */
#define EVSYS_CHSTATUS_USRRDY0              EVSYS_CHSTATUS_USRRDY0_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_USRRDY0_Msk instead */
#define EVSYS_CHSTATUS_USRRDY1_Pos          1                                              /**< (EVSYS_CHSTATUS) Channel 1 User Ready Position */
#define EVSYS_CHSTATUS_USRRDY1_Msk          (_U_(0x1) << EVSYS_CHSTATUS_USRRDY1_Pos)       /**< (EVSYS_CHSTATUS) Channel 1 User Ready Mask */
#define EVSYS_CHSTATUS_USRRDY1              EVSYS_CHSTATUS_USRRDY1_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_USRRDY1_Msk instead */
#define EVSYS_CHSTATUS_USRRDY2_Pos          2                                              /**< (EVSYS_CHSTATUS) Channel 2 User Ready Position */
#define EVSYS_CHSTATUS_USRRDY2_Msk          (_U_(0x1) << EVSYS_CHSTATUS_USRRDY2_Pos)       /**< (EVSYS_CHSTATUS) Channel 2 User Ready Mask */
#define EVSYS_CHSTATUS_USRRDY2              EVSYS_CHSTATUS_USRRDY2_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_USRRDY2_Msk instead */
#define EVSYS_CHSTATUS_USRRDY3_Pos          3                                              /**< (EVSYS_CHSTATUS) Channel 3 User Ready Position */
#define EVSYS_CHSTATUS_USRRDY3_Msk          (_U_(0x1) << EVSYS_CHSTATUS_USRRDY3_Pos)       /**< (EVSYS_CHSTATUS) Channel 3 User Ready Mask */
#define EVSYS_CHSTATUS_USRRDY3              EVSYS_CHSTATUS_USRRDY3_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_USRRDY3_Msk instead */
#define EVSYS_CHSTATUS_USRRDY4_Pos          4                                              /**< (EVSYS_CHSTATUS) Channel 4 User Ready Position */
#define EVSYS_CHSTATUS_USRRDY4_Msk          (_U_(0x1) << EVSYS_CHSTATUS_USRRDY4_Pos)       /**< (EVSYS_CHSTATUS) Channel 4 User Ready Mask */
#define EVSYS_CHSTATUS_USRRDY4              EVSYS_CHSTATUS_USRRDY4_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_USRRDY4_Msk instead */
#define EVSYS_CHSTATUS_USRRDY5_Pos          5                                              /**< (EVSYS_CHSTATUS) Channel 5 User Ready Position */
#define EVSYS_CHSTATUS_USRRDY5_Msk          (_U_(0x1) << EVSYS_CHSTATUS_USRRDY5_Pos)       /**< (EVSYS_CHSTATUS) Channel 5 User Ready Mask */
#define EVSYS_CHSTATUS_USRRDY5              EVSYS_CHSTATUS_USRRDY5_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_USRRDY5_Msk instead */
#define EVSYS_CHSTATUS_USRRDY6_Pos          6                                              /**< (EVSYS_CHSTATUS) Channel 6 User Ready Position */
#define EVSYS_CHSTATUS_USRRDY6_Msk          (_U_(0x1) << EVSYS_CHSTATUS_USRRDY6_Pos)       /**< (EVSYS_CHSTATUS) Channel 6 User Ready Mask */
#define EVSYS_CHSTATUS_USRRDY6              EVSYS_CHSTATUS_USRRDY6_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_USRRDY6_Msk instead */
#define EVSYS_CHSTATUS_USRRDY7_Pos          7                                              /**< (EVSYS_CHSTATUS) Channel 7 User Ready Position */
#define EVSYS_CHSTATUS_USRRDY7_Msk          (_U_(0x1) << EVSYS_CHSTATUS_USRRDY7_Pos)       /**< (EVSYS_CHSTATUS) Channel 7 User Ready Mask */
#define EVSYS_CHSTATUS_USRRDY7              EVSYS_CHSTATUS_USRRDY7_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_USRRDY7_Msk instead */
#define EVSYS_CHSTATUS_USRRDY8_Pos          8                                              /**< (EVSYS_CHSTATUS) Channel 8 User Ready Position */
#define EVSYS_CHSTATUS_USRRDY8_Msk          (_U_(0x1) << EVSYS_CHSTATUS_USRRDY8_Pos)       /**< (EVSYS_CHSTATUS) Channel 8 User Ready Mask */
#define EVSYS_CHSTATUS_USRRDY8              EVSYS_CHSTATUS_USRRDY8_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_USRRDY8_Msk instead */
#define EVSYS_CHSTATUS_USRRDY9_Pos          9                                              /**< (EVSYS_CHSTATUS) Channel 9 User Ready Position */
#define EVSYS_CHSTATUS_USRRDY9_Msk          (_U_(0x1) << EVSYS_CHSTATUS_USRRDY9_Pos)       /**< (EVSYS_CHSTATUS) Channel 9 User Ready Mask */
#define EVSYS_CHSTATUS_USRRDY9              EVSYS_CHSTATUS_USRRDY9_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_USRRDY9_Msk instead */
#define EVSYS_CHSTATUS_USRRDY10_Pos         10                                             /**< (EVSYS_CHSTATUS) Channel 10 User Ready Position */
#define EVSYS_CHSTATUS_USRRDY10_Msk         (_U_(0x1) << EVSYS_CHSTATUS_USRRDY10_Pos)      /**< (EVSYS_CHSTATUS) Channel 10 User Ready Mask */
#define EVSYS_CHSTATUS_USRRDY10             EVSYS_CHSTATUS_USRRDY10_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_USRRDY10_Msk instead */
#define EVSYS_CHSTATUS_USRRDY11_Pos         11                                             /**< (EVSYS_CHSTATUS) Channel 11 User Ready Position */
#define EVSYS_CHSTATUS_USRRDY11_Msk         (_U_(0x1) << EVSYS_CHSTATUS_USRRDY11_Pos)      /**< (EVSYS_CHSTATUS) Channel 11 User Ready Mask */
#define EVSYS_CHSTATUS_USRRDY11             EVSYS_CHSTATUS_USRRDY11_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_USRRDY11_Msk instead */
#define EVSYS_CHSTATUS_CHBUSY0_Pos          16                                             /**< (EVSYS_CHSTATUS) Channel 0 Busy Position */
#define EVSYS_CHSTATUS_CHBUSY0_Msk          (_U_(0x1) << EVSYS_CHSTATUS_CHBUSY0_Pos)       /**< (EVSYS_CHSTATUS) Channel 0 Busy Mask */
#define EVSYS_CHSTATUS_CHBUSY0              EVSYS_CHSTATUS_CHBUSY0_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_CHBUSY0_Msk instead */
#define EVSYS_CHSTATUS_CHBUSY1_Pos          17                                             /**< (EVSYS_CHSTATUS) Channel 1 Busy Position */
#define EVSYS_CHSTATUS_CHBUSY1_Msk          (_U_(0x1) << EVSYS_CHSTATUS_CHBUSY1_Pos)       /**< (EVSYS_CHSTATUS) Channel 1 Busy Mask */
#define EVSYS_CHSTATUS_CHBUSY1              EVSYS_CHSTATUS_CHBUSY1_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_CHBUSY1_Msk instead */
#define EVSYS_CHSTATUS_CHBUSY2_Pos          18                                             /**< (EVSYS_CHSTATUS) Channel 2 Busy Position */
#define EVSYS_CHSTATUS_CHBUSY2_Msk          (_U_(0x1) << EVSYS_CHSTATUS_CHBUSY2_Pos)       /**< (EVSYS_CHSTATUS) Channel 2 Busy Mask */
#define EVSYS_CHSTATUS_CHBUSY2              EVSYS_CHSTATUS_CHBUSY2_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_CHBUSY2_Msk instead */
#define EVSYS_CHSTATUS_CHBUSY3_Pos          19                                             /**< (EVSYS_CHSTATUS) Channel 3 Busy Position */
#define EVSYS_CHSTATUS_CHBUSY3_Msk          (_U_(0x1) << EVSYS_CHSTATUS_CHBUSY3_Pos)       /**< (EVSYS_CHSTATUS) Channel 3 Busy Mask */
#define EVSYS_CHSTATUS_CHBUSY3              EVSYS_CHSTATUS_CHBUSY3_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_CHBUSY3_Msk instead */
#define EVSYS_CHSTATUS_CHBUSY4_Pos          20                                             /**< (EVSYS_CHSTATUS) Channel 4 Busy Position */
#define EVSYS_CHSTATUS_CHBUSY4_Msk          (_U_(0x1) << EVSYS_CHSTATUS_CHBUSY4_Pos)       /**< (EVSYS_CHSTATUS) Channel 4 Busy Mask */
#define EVSYS_CHSTATUS_CHBUSY4              EVSYS_CHSTATUS_CHBUSY4_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_CHBUSY4_Msk instead */
#define EVSYS_CHSTATUS_CHBUSY5_Pos          21                                             /**< (EVSYS_CHSTATUS) Channel 5 Busy Position */
#define EVSYS_CHSTATUS_CHBUSY5_Msk          (_U_(0x1) << EVSYS_CHSTATUS_CHBUSY5_Pos)       /**< (EVSYS_CHSTATUS) Channel 5 Busy Mask */
#define EVSYS_CHSTATUS_CHBUSY5              EVSYS_CHSTATUS_CHBUSY5_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_CHBUSY5_Msk instead */
#define EVSYS_CHSTATUS_CHBUSY6_Pos          22                                             /**< (EVSYS_CHSTATUS) Channel 6 Busy Position */
#define EVSYS_CHSTATUS_CHBUSY6_Msk          (_U_(0x1) << EVSYS_CHSTATUS_CHBUSY6_Pos)       /**< (EVSYS_CHSTATUS) Channel 6 Busy Mask */
#define EVSYS_CHSTATUS_CHBUSY6              EVSYS_CHSTATUS_CHBUSY6_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_CHBUSY6_Msk instead */
#define EVSYS_CHSTATUS_CHBUSY7_Pos          23                                             /**< (EVSYS_CHSTATUS) Channel 7 Busy Position */
#define EVSYS_CHSTATUS_CHBUSY7_Msk          (_U_(0x1) << EVSYS_CHSTATUS_CHBUSY7_Pos)       /**< (EVSYS_CHSTATUS) Channel 7 Busy Mask */
#define EVSYS_CHSTATUS_CHBUSY7              EVSYS_CHSTATUS_CHBUSY7_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_CHBUSY7_Msk instead */
#define EVSYS_CHSTATUS_CHBUSY8_Pos          24                                             /**< (EVSYS_CHSTATUS) Channel 8 Busy Position */
#define EVSYS_CHSTATUS_CHBUSY8_Msk          (_U_(0x1) << EVSYS_CHSTATUS_CHBUSY8_Pos)       /**< (EVSYS_CHSTATUS) Channel 8 Busy Mask */
#define EVSYS_CHSTATUS_CHBUSY8              EVSYS_CHSTATUS_CHBUSY8_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_CHBUSY8_Msk instead */
#define EVSYS_CHSTATUS_CHBUSY9_Pos          25                                             /**< (EVSYS_CHSTATUS) Channel 9 Busy Position */
#define EVSYS_CHSTATUS_CHBUSY9_Msk          (_U_(0x1) << EVSYS_CHSTATUS_CHBUSY9_Pos)       /**< (EVSYS_CHSTATUS) Channel 9 Busy Mask */
#define EVSYS_CHSTATUS_CHBUSY9              EVSYS_CHSTATUS_CHBUSY9_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_CHBUSY9_Msk instead */
#define EVSYS_CHSTATUS_CHBUSY10_Pos         26                                             /**< (EVSYS_CHSTATUS) Channel 10 Busy Position */
#define EVSYS_CHSTATUS_CHBUSY10_Msk         (_U_(0x1) << EVSYS_CHSTATUS_CHBUSY10_Pos)      /**< (EVSYS_CHSTATUS) Channel 10 Busy Mask */
#define EVSYS_CHSTATUS_CHBUSY10             EVSYS_CHSTATUS_CHBUSY10_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_CHBUSY10_Msk instead */
#define EVSYS_CHSTATUS_CHBUSY11_Pos         27                                             /**< (EVSYS_CHSTATUS) Channel 11 Busy Position */
#define EVSYS_CHSTATUS_CHBUSY11_Msk         (_U_(0x1) << EVSYS_CHSTATUS_CHBUSY11_Pos)      /**< (EVSYS_CHSTATUS) Channel 11 Busy Mask */
#define EVSYS_CHSTATUS_CHBUSY11             EVSYS_CHSTATUS_CHBUSY11_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHSTATUS_CHBUSY11_Msk instead */
#define EVSYS_CHSTATUS_MASK                 _U_(0xFFF0FFF)                                 /**< \deprecated (EVSYS_CHSTATUS) Register MASK  (Use EVSYS_CHSTATUS_Msk instead)  */
#define EVSYS_CHSTATUS_Msk                  _U_(0xFFF0FFF)                                 /**< (EVSYS_CHSTATUS) Register Mask  */

#define EVSYS_CHSTATUS_USRRDY_Pos           0                                              /**< (EVSYS_CHSTATUS Position) Channel x User Ready */
#define EVSYS_CHSTATUS_USRRDY_Msk           (_U_(0xFFF) << EVSYS_CHSTATUS_USRRDY_Pos)      /**< (EVSYS_CHSTATUS Mask) USRRDY */
#define EVSYS_CHSTATUS_USRRDY(value)        (EVSYS_CHSTATUS_USRRDY_Msk & ((value) << EVSYS_CHSTATUS_USRRDY_Pos))  
#define EVSYS_CHSTATUS_CHBUSY_Pos           16                                             /**< (EVSYS_CHSTATUS Position) Channel xx Busy */
#define EVSYS_CHSTATUS_CHBUSY_Msk           (_U_(0xFFF) << EVSYS_CHSTATUS_CHBUSY_Pos)      /**< (EVSYS_CHSTATUS Mask) CHBUSY */
#define EVSYS_CHSTATUS_CHBUSY(value)        (EVSYS_CHSTATUS_CHBUSY_Msk & ((value) << EVSYS_CHSTATUS_CHBUSY_Pos))  

/* -------- EVSYS_INTENCLR : (EVSYS Offset: 0x10) (R/W 32) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t OVR0:1;                    /**< bit:      0  Channel 0 Overrun Interrupt Enable       */
    uint32_t OVR1:1;                    /**< bit:      1  Channel 1 Overrun Interrupt Enable       */
    uint32_t OVR2:1;                    /**< bit:      2  Channel 2 Overrun Interrupt Enable       */
    uint32_t OVR3:1;                    /**< bit:      3  Channel 3 Overrun Interrupt Enable       */
    uint32_t OVR4:1;                    /**< bit:      4  Channel 4 Overrun Interrupt Enable       */
    uint32_t OVR5:1;                    /**< bit:      5  Channel 5 Overrun Interrupt Enable       */
    uint32_t OVR6:1;                    /**< bit:      6  Channel 6 Overrun Interrupt Enable       */
    uint32_t OVR7:1;                    /**< bit:      7  Channel 7 Overrun Interrupt Enable       */
    uint32_t OVR8:1;                    /**< bit:      8  Channel 8 Overrun Interrupt Enable       */
    uint32_t OVR9:1;                    /**< bit:      9  Channel 9 Overrun Interrupt Enable       */
    uint32_t OVR10:1;                   /**< bit:     10  Channel 10 Overrun Interrupt Enable      */
    uint32_t OVR11:1;                   /**< bit:     11  Channel 11 Overrun Interrupt Enable      */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t EVD0:1;                    /**< bit:     16  Channel 0 Event Detection Interrupt Enable */
    uint32_t EVD1:1;                    /**< bit:     17  Channel 1 Event Detection Interrupt Enable */
    uint32_t EVD2:1;                    /**< bit:     18  Channel 2 Event Detection Interrupt Enable */
    uint32_t EVD3:1;                    /**< bit:     19  Channel 3 Event Detection Interrupt Enable */
    uint32_t EVD4:1;                    /**< bit:     20  Channel 4 Event Detection Interrupt Enable */
    uint32_t EVD5:1;                    /**< bit:     21  Channel 5 Event Detection Interrupt Enable */
    uint32_t EVD6:1;                    /**< bit:     22  Channel 6 Event Detection Interrupt Enable */
    uint32_t EVD7:1;                    /**< bit:     23  Channel 7 Event Detection Interrupt Enable */
    uint32_t EVD8:1;                    /**< bit:     24  Channel 8 Event Detection Interrupt Enable */
    uint32_t EVD9:1;                    /**< bit:     25  Channel 9 Event Detection Interrupt Enable */
    uint32_t EVD10:1;                   /**< bit:     26  Channel 10 Event Detection Interrupt Enable */
    uint32_t EVD11:1;                   /**< bit:     27  Channel 11 Event Detection Interrupt Enable */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t OVR:12;                    /**< bit:  0..11  Channel x Overrun Interrupt Enable       */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t EVD:12;                    /**< bit: 16..27  Channel xx Event Detection Interrupt Enable */
    uint32_t :4;                        /**< bit: 28..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} EVSYS_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_INTENCLR_OFFSET               (0x10)                                        /**<  (EVSYS_INTENCLR) Interrupt Enable Clear  Offset */
#define EVSYS_INTENCLR_RESETVALUE           _U_(0x00)                                     /**<  (EVSYS_INTENCLR) Interrupt Enable Clear  Reset Value */

#define EVSYS_INTENCLR_OVR0_Pos             0                                              /**< (EVSYS_INTENCLR) Channel 0 Overrun Interrupt Enable Position */
#define EVSYS_INTENCLR_OVR0_Msk             (_U_(0x1) << EVSYS_INTENCLR_OVR0_Pos)          /**< (EVSYS_INTENCLR) Channel 0 Overrun Interrupt Enable Mask */
#define EVSYS_INTENCLR_OVR0                 EVSYS_INTENCLR_OVR0_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_OVR0_Msk instead */
#define EVSYS_INTENCLR_OVR1_Pos             1                                              /**< (EVSYS_INTENCLR) Channel 1 Overrun Interrupt Enable Position */
#define EVSYS_INTENCLR_OVR1_Msk             (_U_(0x1) << EVSYS_INTENCLR_OVR1_Pos)          /**< (EVSYS_INTENCLR) Channel 1 Overrun Interrupt Enable Mask */
#define EVSYS_INTENCLR_OVR1                 EVSYS_INTENCLR_OVR1_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_OVR1_Msk instead */
#define EVSYS_INTENCLR_OVR2_Pos             2                                              /**< (EVSYS_INTENCLR) Channel 2 Overrun Interrupt Enable Position */
#define EVSYS_INTENCLR_OVR2_Msk             (_U_(0x1) << EVSYS_INTENCLR_OVR2_Pos)          /**< (EVSYS_INTENCLR) Channel 2 Overrun Interrupt Enable Mask */
#define EVSYS_INTENCLR_OVR2                 EVSYS_INTENCLR_OVR2_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_OVR2_Msk instead */
#define EVSYS_INTENCLR_OVR3_Pos             3                                              /**< (EVSYS_INTENCLR) Channel 3 Overrun Interrupt Enable Position */
#define EVSYS_INTENCLR_OVR3_Msk             (_U_(0x1) << EVSYS_INTENCLR_OVR3_Pos)          /**< (EVSYS_INTENCLR) Channel 3 Overrun Interrupt Enable Mask */
#define EVSYS_INTENCLR_OVR3                 EVSYS_INTENCLR_OVR3_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_OVR3_Msk instead */
#define EVSYS_INTENCLR_OVR4_Pos             4                                              /**< (EVSYS_INTENCLR) Channel 4 Overrun Interrupt Enable Position */
#define EVSYS_INTENCLR_OVR4_Msk             (_U_(0x1) << EVSYS_INTENCLR_OVR4_Pos)          /**< (EVSYS_INTENCLR) Channel 4 Overrun Interrupt Enable Mask */
#define EVSYS_INTENCLR_OVR4                 EVSYS_INTENCLR_OVR4_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_OVR4_Msk instead */
#define EVSYS_INTENCLR_OVR5_Pos             5                                              /**< (EVSYS_INTENCLR) Channel 5 Overrun Interrupt Enable Position */
#define EVSYS_INTENCLR_OVR5_Msk             (_U_(0x1) << EVSYS_INTENCLR_OVR5_Pos)          /**< (EVSYS_INTENCLR) Channel 5 Overrun Interrupt Enable Mask */
#define EVSYS_INTENCLR_OVR5                 EVSYS_INTENCLR_OVR5_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_OVR5_Msk instead */
#define EVSYS_INTENCLR_OVR6_Pos             6                                              /**< (EVSYS_INTENCLR) Channel 6 Overrun Interrupt Enable Position */
#define EVSYS_INTENCLR_OVR6_Msk             (_U_(0x1) << EVSYS_INTENCLR_OVR6_Pos)          /**< (EVSYS_INTENCLR) Channel 6 Overrun Interrupt Enable Mask */
#define EVSYS_INTENCLR_OVR6                 EVSYS_INTENCLR_OVR6_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_OVR6_Msk instead */
#define EVSYS_INTENCLR_OVR7_Pos             7                                              /**< (EVSYS_INTENCLR) Channel 7 Overrun Interrupt Enable Position */
#define EVSYS_INTENCLR_OVR7_Msk             (_U_(0x1) << EVSYS_INTENCLR_OVR7_Pos)          /**< (EVSYS_INTENCLR) Channel 7 Overrun Interrupt Enable Mask */
#define EVSYS_INTENCLR_OVR7                 EVSYS_INTENCLR_OVR7_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_OVR7_Msk instead */
#define EVSYS_INTENCLR_OVR8_Pos             8                                              /**< (EVSYS_INTENCLR) Channel 8 Overrun Interrupt Enable Position */
#define EVSYS_INTENCLR_OVR8_Msk             (_U_(0x1) << EVSYS_INTENCLR_OVR8_Pos)          /**< (EVSYS_INTENCLR) Channel 8 Overrun Interrupt Enable Mask */
#define EVSYS_INTENCLR_OVR8                 EVSYS_INTENCLR_OVR8_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_OVR8_Msk instead */
#define EVSYS_INTENCLR_OVR9_Pos             9                                              /**< (EVSYS_INTENCLR) Channel 9 Overrun Interrupt Enable Position */
#define EVSYS_INTENCLR_OVR9_Msk             (_U_(0x1) << EVSYS_INTENCLR_OVR9_Pos)          /**< (EVSYS_INTENCLR) Channel 9 Overrun Interrupt Enable Mask */
#define EVSYS_INTENCLR_OVR9                 EVSYS_INTENCLR_OVR9_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_OVR9_Msk instead */
#define EVSYS_INTENCLR_OVR10_Pos            10                                             /**< (EVSYS_INTENCLR) Channel 10 Overrun Interrupt Enable Position */
#define EVSYS_INTENCLR_OVR10_Msk            (_U_(0x1) << EVSYS_INTENCLR_OVR10_Pos)         /**< (EVSYS_INTENCLR) Channel 10 Overrun Interrupt Enable Mask */
#define EVSYS_INTENCLR_OVR10                EVSYS_INTENCLR_OVR10_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_OVR10_Msk instead */
#define EVSYS_INTENCLR_OVR11_Pos            11                                             /**< (EVSYS_INTENCLR) Channel 11 Overrun Interrupt Enable Position */
#define EVSYS_INTENCLR_OVR11_Msk            (_U_(0x1) << EVSYS_INTENCLR_OVR11_Pos)         /**< (EVSYS_INTENCLR) Channel 11 Overrun Interrupt Enable Mask */
#define EVSYS_INTENCLR_OVR11                EVSYS_INTENCLR_OVR11_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_OVR11_Msk instead */
#define EVSYS_INTENCLR_EVD0_Pos             16                                             /**< (EVSYS_INTENCLR) Channel 0 Event Detection Interrupt Enable Position */
#define EVSYS_INTENCLR_EVD0_Msk             (_U_(0x1) << EVSYS_INTENCLR_EVD0_Pos)          /**< (EVSYS_INTENCLR) Channel 0 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENCLR_EVD0                 EVSYS_INTENCLR_EVD0_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_EVD0_Msk instead */
#define EVSYS_INTENCLR_EVD1_Pos             17                                             /**< (EVSYS_INTENCLR) Channel 1 Event Detection Interrupt Enable Position */
#define EVSYS_INTENCLR_EVD1_Msk             (_U_(0x1) << EVSYS_INTENCLR_EVD1_Pos)          /**< (EVSYS_INTENCLR) Channel 1 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENCLR_EVD1                 EVSYS_INTENCLR_EVD1_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_EVD1_Msk instead */
#define EVSYS_INTENCLR_EVD2_Pos             18                                             /**< (EVSYS_INTENCLR) Channel 2 Event Detection Interrupt Enable Position */
#define EVSYS_INTENCLR_EVD2_Msk             (_U_(0x1) << EVSYS_INTENCLR_EVD2_Pos)          /**< (EVSYS_INTENCLR) Channel 2 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENCLR_EVD2                 EVSYS_INTENCLR_EVD2_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_EVD2_Msk instead */
#define EVSYS_INTENCLR_EVD3_Pos             19                                             /**< (EVSYS_INTENCLR) Channel 3 Event Detection Interrupt Enable Position */
#define EVSYS_INTENCLR_EVD3_Msk             (_U_(0x1) << EVSYS_INTENCLR_EVD3_Pos)          /**< (EVSYS_INTENCLR) Channel 3 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENCLR_EVD3                 EVSYS_INTENCLR_EVD3_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_EVD3_Msk instead */
#define EVSYS_INTENCLR_EVD4_Pos             20                                             /**< (EVSYS_INTENCLR) Channel 4 Event Detection Interrupt Enable Position */
#define EVSYS_INTENCLR_EVD4_Msk             (_U_(0x1) << EVSYS_INTENCLR_EVD4_Pos)          /**< (EVSYS_INTENCLR) Channel 4 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENCLR_EVD4                 EVSYS_INTENCLR_EVD4_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_EVD4_Msk instead */
#define EVSYS_INTENCLR_EVD5_Pos             21                                             /**< (EVSYS_INTENCLR) Channel 5 Event Detection Interrupt Enable Position */
#define EVSYS_INTENCLR_EVD5_Msk             (_U_(0x1) << EVSYS_INTENCLR_EVD5_Pos)          /**< (EVSYS_INTENCLR) Channel 5 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENCLR_EVD5                 EVSYS_INTENCLR_EVD5_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_EVD5_Msk instead */
#define EVSYS_INTENCLR_EVD6_Pos             22                                             /**< (EVSYS_INTENCLR) Channel 6 Event Detection Interrupt Enable Position */
#define EVSYS_INTENCLR_EVD6_Msk             (_U_(0x1) << EVSYS_INTENCLR_EVD6_Pos)          /**< (EVSYS_INTENCLR) Channel 6 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENCLR_EVD6                 EVSYS_INTENCLR_EVD6_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_EVD6_Msk instead */
#define EVSYS_INTENCLR_EVD7_Pos             23                                             /**< (EVSYS_INTENCLR) Channel 7 Event Detection Interrupt Enable Position */
#define EVSYS_INTENCLR_EVD7_Msk             (_U_(0x1) << EVSYS_INTENCLR_EVD7_Pos)          /**< (EVSYS_INTENCLR) Channel 7 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENCLR_EVD7                 EVSYS_INTENCLR_EVD7_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_EVD7_Msk instead */
#define EVSYS_INTENCLR_EVD8_Pos             24                                             /**< (EVSYS_INTENCLR) Channel 8 Event Detection Interrupt Enable Position */
#define EVSYS_INTENCLR_EVD8_Msk             (_U_(0x1) << EVSYS_INTENCLR_EVD8_Pos)          /**< (EVSYS_INTENCLR) Channel 8 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENCLR_EVD8                 EVSYS_INTENCLR_EVD8_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_EVD8_Msk instead */
#define EVSYS_INTENCLR_EVD9_Pos             25                                             /**< (EVSYS_INTENCLR) Channel 9 Event Detection Interrupt Enable Position */
#define EVSYS_INTENCLR_EVD9_Msk             (_U_(0x1) << EVSYS_INTENCLR_EVD9_Pos)          /**< (EVSYS_INTENCLR) Channel 9 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENCLR_EVD9                 EVSYS_INTENCLR_EVD9_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_EVD9_Msk instead */
#define EVSYS_INTENCLR_EVD10_Pos            26                                             /**< (EVSYS_INTENCLR) Channel 10 Event Detection Interrupt Enable Position */
#define EVSYS_INTENCLR_EVD10_Msk            (_U_(0x1) << EVSYS_INTENCLR_EVD10_Pos)         /**< (EVSYS_INTENCLR) Channel 10 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENCLR_EVD10                EVSYS_INTENCLR_EVD10_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_EVD10_Msk instead */
#define EVSYS_INTENCLR_EVD11_Pos            27                                             /**< (EVSYS_INTENCLR) Channel 11 Event Detection Interrupt Enable Position */
#define EVSYS_INTENCLR_EVD11_Msk            (_U_(0x1) << EVSYS_INTENCLR_EVD11_Pos)         /**< (EVSYS_INTENCLR) Channel 11 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENCLR_EVD11                EVSYS_INTENCLR_EVD11_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENCLR_EVD11_Msk instead */
#define EVSYS_INTENCLR_MASK                 _U_(0xFFF0FFF)                                 /**< \deprecated (EVSYS_INTENCLR) Register MASK  (Use EVSYS_INTENCLR_Msk instead)  */
#define EVSYS_INTENCLR_Msk                  _U_(0xFFF0FFF)                                 /**< (EVSYS_INTENCLR) Register Mask  */

#define EVSYS_INTENCLR_OVR_Pos              0                                              /**< (EVSYS_INTENCLR Position) Channel x Overrun Interrupt Enable */
#define EVSYS_INTENCLR_OVR_Msk              (_U_(0xFFF) << EVSYS_INTENCLR_OVR_Pos)         /**< (EVSYS_INTENCLR Mask) OVR */
#define EVSYS_INTENCLR_OVR(value)           (EVSYS_INTENCLR_OVR_Msk & ((value) << EVSYS_INTENCLR_OVR_Pos))  
#define EVSYS_INTENCLR_EVD_Pos              16                                             /**< (EVSYS_INTENCLR Position) Channel xx Event Detection Interrupt Enable */
#define EVSYS_INTENCLR_EVD_Msk              (_U_(0xFFF) << EVSYS_INTENCLR_EVD_Pos)         /**< (EVSYS_INTENCLR Mask) EVD */
#define EVSYS_INTENCLR_EVD(value)           (EVSYS_INTENCLR_EVD_Msk & ((value) << EVSYS_INTENCLR_EVD_Pos))  

/* -------- EVSYS_INTENSET : (EVSYS Offset: 0x14) (R/W 32) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t OVR0:1;                    /**< bit:      0  Channel 0 Overrun Interrupt Enable       */
    uint32_t OVR1:1;                    /**< bit:      1  Channel 1 Overrun Interrupt Enable       */
    uint32_t OVR2:1;                    /**< bit:      2  Channel 2 Overrun Interrupt Enable       */
    uint32_t OVR3:1;                    /**< bit:      3  Channel 3 Overrun Interrupt Enable       */
    uint32_t OVR4:1;                    /**< bit:      4  Channel 4 Overrun Interrupt Enable       */
    uint32_t OVR5:1;                    /**< bit:      5  Channel 5 Overrun Interrupt Enable       */
    uint32_t OVR6:1;                    /**< bit:      6  Channel 6 Overrun Interrupt Enable       */
    uint32_t OVR7:1;                    /**< bit:      7  Channel 7 Overrun Interrupt Enable       */
    uint32_t OVR8:1;                    /**< bit:      8  Channel 8 Overrun Interrupt Enable       */
    uint32_t OVR9:1;                    /**< bit:      9  Channel 9 Overrun Interrupt Enable       */
    uint32_t OVR10:1;                   /**< bit:     10  Channel 10 Overrun Interrupt Enable      */
    uint32_t OVR11:1;                   /**< bit:     11  Channel 11 Overrun Interrupt Enable      */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t EVD0:1;                    /**< bit:     16  Channel 0 Event Detection Interrupt Enable */
    uint32_t EVD1:1;                    /**< bit:     17  Channel 1 Event Detection Interrupt Enable */
    uint32_t EVD2:1;                    /**< bit:     18  Channel 2 Event Detection Interrupt Enable */
    uint32_t EVD3:1;                    /**< bit:     19  Channel 3 Event Detection Interrupt Enable */
    uint32_t EVD4:1;                    /**< bit:     20  Channel 4 Event Detection Interrupt Enable */
    uint32_t EVD5:1;                    /**< bit:     21  Channel 5 Event Detection Interrupt Enable */
    uint32_t EVD6:1;                    /**< bit:     22  Channel 6 Event Detection Interrupt Enable */
    uint32_t EVD7:1;                    /**< bit:     23  Channel 7 Event Detection Interrupt Enable */
    uint32_t EVD8:1;                    /**< bit:     24  Channel 8 Event Detection Interrupt Enable */
    uint32_t EVD9:1;                    /**< bit:     25  Channel 9 Event Detection Interrupt Enable */
    uint32_t EVD10:1;                   /**< bit:     26  Channel 10 Event Detection Interrupt Enable */
    uint32_t EVD11:1;                   /**< bit:     27  Channel 11 Event Detection Interrupt Enable */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t OVR:12;                    /**< bit:  0..11  Channel x Overrun Interrupt Enable       */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t EVD:12;                    /**< bit: 16..27  Channel xx Event Detection Interrupt Enable */
    uint32_t :4;                        /**< bit: 28..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} EVSYS_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_INTENSET_OFFSET               (0x14)                                        /**<  (EVSYS_INTENSET) Interrupt Enable Set  Offset */
#define EVSYS_INTENSET_RESETVALUE           _U_(0x00)                                     /**<  (EVSYS_INTENSET) Interrupt Enable Set  Reset Value */

#define EVSYS_INTENSET_OVR0_Pos             0                                              /**< (EVSYS_INTENSET) Channel 0 Overrun Interrupt Enable Position */
#define EVSYS_INTENSET_OVR0_Msk             (_U_(0x1) << EVSYS_INTENSET_OVR0_Pos)          /**< (EVSYS_INTENSET) Channel 0 Overrun Interrupt Enable Mask */
#define EVSYS_INTENSET_OVR0                 EVSYS_INTENSET_OVR0_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_OVR0_Msk instead */
#define EVSYS_INTENSET_OVR1_Pos             1                                              /**< (EVSYS_INTENSET) Channel 1 Overrun Interrupt Enable Position */
#define EVSYS_INTENSET_OVR1_Msk             (_U_(0x1) << EVSYS_INTENSET_OVR1_Pos)          /**< (EVSYS_INTENSET) Channel 1 Overrun Interrupt Enable Mask */
#define EVSYS_INTENSET_OVR1                 EVSYS_INTENSET_OVR1_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_OVR1_Msk instead */
#define EVSYS_INTENSET_OVR2_Pos             2                                              /**< (EVSYS_INTENSET) Channel 2 Overrun Interrupt Enable Position */
#define EVSYS_INTENSET_OVR2_Msk             (_U_(0x1) << EVSYS_INTENSET_OVR2_Pos)          /**< (EVSYS_INTENSET) Channel 2 Overrun Interrupt Enable Mask */
#define EVSYS_INTENSET_OVR2                 EVSYS_INTENSET_OVR2_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_OVR2_Msk instead */
#define EVSYS_INTENSET_OVR3_Pos             3                                              /**< (EVSYS_INTENSET) Channel 3 Overrun Interrupt Enable Position */
#define EVSYS_INTENSET_OVR3_Msk             (_U_(0x1) << EVSYS_INTENSET_OVR3_Pos)          /**< (EVSYS_INTENSET) Channel 3 Overrun Interrupt Enable Mask */
#define EVSYS_INTENSET_OVR3                 EVSYS_INTENSET_OVR3_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_OVR3_Msk instead */
#define EVSYS_INTENSET_OVR4_Pos             4                                              /**< (EVSYS_INTENSET) Channel 4 Overrun Interrupt Enable Position */
#define EVSYS_INTENSET_OVR4_Msk             (_U_(0x1) << EVSYS_INTENSET_OVR4_Pos)          /**< (EVSYS_INTENSET) Channel 4 Overrun Interrupt Enable Mask */
#define EVSYS_INTENSET_OVR4                 EVSYS_INTENSET_OVR4_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_OVR4_Msk instead */
#define EVSYS_INTENSET_OVR5_Pos             5                                              /**< (EVSYS_INTENSET) Channel 5 Overrun Interrupt Enable Position */
#define EVSYS_INTENSET_OVR5_Msk             (_U_(0x1) << EVSYS_INTENSET_OVR5_Pos)          /**< (EVSYS_INTENSET) Channel 5 Overrun Interrupt Enable Mask */
#define EVSYS_INTENSET_OVR5                 EVSYS_INTENSET_OVR5_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_OVR5_Msk instead */
#define EVSYS_INTENSET_OVR6_Pos             6                                              /**< (EVSYS_INTENSET) Channel 6 Overrun Interrupt Enable Position */
#define EVSYS_INTENSET_OVR6_Msk             (_U_(0x1) << EVSYS_INTENSET_OVR6_Pos)          /**< (EVSYS_INTENSET) Channel 6 Overrun Interrupt Enable Mask */
#define EVSYS_INTENSET_OVR6                 EVSYS_INTENSET_OVR6_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_OVR6_Msk instead */
#define EVSYS_INTENSET_OVR7_Pos             7                                              /**< (EVSYS_INTENSET) Channel 7 Overrun Interrupt Enable Position */
#define EVSYS_INTENSET_OVR7_Msk             (_U_(0x1) << EVSYS_INTENSET_OVR7_Pos)          /**< (EVSYS_INTENSET) Channel 7 Overrun Interrupt Enable Mask */
#define EVSYS_INTENSET_OVR7                 EVSYS_INTENSET_OVR7_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_OVR7_Msk instead */
#define EVSYS_INTENSET_OVR8_Pos             8                                              /**< (EVSYS_INTENSET) Channel 8 Overrun Interrupt Enable Position */
#define EVSYS_INTENSET_OVR8_Msk             (_U_(0x1) << EVSYS_INTENSET_OVR8_Pos)          /**< (EVSYS_INTENSET) Channel 8 Overrun Interrupt Enable Mask */
#define EVSYS_INTENSET_OVR8                 EVSYS_INTENSET_OVR8_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_OVR8_Msk instead */
#define EVSYS_INTENSET_OVR9_Pos             9                                              /**< (EVSYS_INTENSET) Channel 9 Overrun Interrupt Enable Position */
#define EVSYS_INTENSET_OVR9_Msk             (_U_(0x1) << EVSYS_INTENSET_OVR9_Pos)          /**< (EVSYS_INTENSET) Channel 9 Overrun Interrupt Enable Mask */
#define EVSYS_INTENSET_OVR9                 EVSYS_INTENSET_OVR9_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_OVR9_Msk instead */
#define EVSYS_INTENSET_OVR10_Pos            10                                             /**< (EVSYS_INTENSET) Channel 10 Overrun Interrupt Enable Position */
#define EVSYS_INTENSET_OVR10_Msk            (_U_(0x1) << EVSYS_INTENSET_OVR10_Pos)         /**< (EVSYS_INTENSET) Channel 10 Overrun Interrupt Enable Mask */
#define EVSYS_INTENSET_OVR10                EVSYS_INTENSET_OVR10_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_OVR10_Msk instead */
#define EVSYS_INTENSET_OVR11_Pos            11                                             /**< (EVSYS_INTENSET) Channel 11 Overrun Interrupt Enable Position */
#define EVSYS_INTENSET_OVR11_Msk            (_U_(0x1) << EVSYS_INTENSET_OVR11_Pos)         /**< (EVSYS_INTENSET) Channel 11 Overrun Interrupt Enable Mask */
#define EVSYS_INTENSET_OVR11                EVSYS_INTENSET_OVR11_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_OVR11_Msk instead */
#define EVSYS_INTENSET_EVD0_Pos             16                                             /**< (EVSYS_INTENSET) Channel 0 Event Detection Interrupt Enable Position */
#define EVSYS_INTENSET_EVD0_Msk             (_U_(0x1) << EVSYS_INTENSET_EVD0_Pos)          /**< (EVSYS_INTENSET) Channel 0 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENSET_EVD0                 EVSYS_INTENSET_EVD0_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_EVD0_Msk instead */
#define EVSYS_INTENSET_EVD1_Pos             17                                             /**< (EVSYS_INTENSET) Channel 1 Event Detection Interrupt Enable Position */
#define EVSYS_INTENSET_EVD1_Msk             (_U_(0x1) << EVSYS_INTENSET_EVD1_Pos)          /**< (EVSYS_INTENSET) Channel 1 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENSET_EVD1                 EVSYS_INTENSET_EVD1_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_EVD1_Msk instead */
#define EVSYS_INTENSET_EVD2_Pos             18                                             /**< (EVSYS_INTENSET) Channel 2 Event Detection Interrupt Enable Position */
#define EVSYS_INTENSET_EVD2_Msk             (_U_(0x1) << EVSYS_INTENSET_EVD2_Pos)          /**< (EVSYS_INTENSET) Channel 2 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENSET_EVD2                 EVSYS_INTENSET_EVD2_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_EVD2_Msk instead */
#define EVSYS_INTENSET_EVD3_Pos             19                                             /**< (EVSYS_INTENSET) Channel 3 Event Detection Interrupt Enable Position */
#define EVSYS_INTENSET_EVD3_Msk             (_U_(0x1) << EVSYS_INTENSET_EVD3_Pos)          /**< (EVSYS_INTENSET) Channel 3 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENSET_EVD3                 EVSYS_INTENSET_EVD3_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_EVD3_Msk instead */
#define EVSYS_INTENSET_EVD4_Pos             20                                             /**< (EVSYS_INTENSET) Channel 4 Event Detection Interrupt Enable Position */
#define EVSYS_INTENSET_EVD4_Msk             (_U_(0x1) << EVSYS_INTENSET_EVD4_Pos)          /**< (EVSYS_INTENSET) Channel 4 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENSET_EVD4                 EVSYS_INTENSET_EVD4_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_EVD4_Msk instead */
#define EVSYS_INTENSET_EVD5_Pos             21                                             /**< (EVSYS_INTENSET) Channel 5 Event Detection Interrupt Enable Position */
#define EVSYS_INTENSET_EVD5_Msk             (_U_(0x1) << EVSYS_INTENSET_EVD5_Pos)          /**< (EVSYS_INTENSET) Channel 5 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENSET_EVD5                 EVSYS_INTENSET_EVD5_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_EVD5_Msk instead */
#define EVSYS_INTENSET_EVD6_Pos             22                                             /**< (EVSYS_INTENSET) Channel 6 Event Detection Interrupt Enable Position */
#define EVSYS_INTENSET_EVD6_Msk             (_U_(0x1) << EVSYS_INTENSET_EVD6_Pos)          /**< (EVSYS_INTENSET) Channel 6 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENSET_EVD6                 EVSYS_INTENSET_EVD6_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_EVD6_Msk instead */
#define EVSYS_INTENSET_EVD7_Pos             23                                             /**< (EVSYS_INTENSET) Channel 7 Event Detection Interrupt Enable Position */
#define EVSYS_INTENSET_EVD7_Msk             (_U_(0x1) << EVSYS_INTENSET_EVD7_Pos)          /**< (EVSYS_INTENSET) Channel 7 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENSET_EVD7                 EVSYS_INTENSET_EVD7_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_EVD7_Msk instead */
#define EVSYS_INTENSET_EVD8_Pos             24                                             /**< (EVSYS_INTENSET) Channel 8 Event Detection Interrupt Enable Position */
#define EVSYS_INTENSET_EVD8_Msk             (_U_(0x1) << EVSYS_INTENSET_EVD8_Pos)          /**< (EVSYS_INTENSET) Channel 8 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENSET_EVD8                 EVSYS_INTENSET_EVD8_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_EVD8_Msk instead */
#define EVSYS_INTENSET_EVD9_Pos             25                                             /**< (EVSYS_INTENSET) Channel 9 Event Detection Interrupt Enable Position */
#define EVSYS_INTENSET_EVD9_Msk             (_U_(0x1) << EVSYS_INTENSET_EVD9_Pos)          /**< (EVSYS_INTENSET) Channel 9 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENSET_EVD9                 EVSYS_INTENSET_EVD9_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_EVD9_Msk instead */
#define EVSYS_INTENSET_EVD10_Pos            26                                             /**< (EVSYS_INTENSET) Channel 10 Event Detection Interrupt Enable Position */
#define EVSYS_INTENSET_EVD10_Msk            (_U_(0x1) << EVSYS_INTENSET_EVD10_Pos)         /**< (EVSYS_INTENSET) Channel 10 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENSET_EVD10                EVSYS_INTENSET_EVD10_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_EVD10_Msk instead */
#define EVSYS_INTENSET_EVD11_Pos            27                                             /**< (EVSYS_INTENSET) Channel 11 Event Detection Interrupt Enable Position */
#define EVSYS_INTENSET_EVD11_Msk            (_U_(0x1) << EVSYS_INTENSET_EVD11_Pos)         /**< (EVSYS_INTENSET) Channel 11 Event Detection Interrupt Enable Mask */
#define EVSYS_INTENSET_EVD11                EVSYS_INTENSET_EVD11_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTENSET_EVD11_Msk instead */
#define EVSYS_INTENSET_MASK                 _U_(0xFFF0FFF)                                 /**< \deprecated (EVSYS_INTENSET) Register MASK  (Use EVSYS_INTENSET_Msk instead)  */
#define EVSYS_INTENSET_Msk                  _U_(0xFFF0FFF)                                 /**< (EVSYS_INTENSET) Register Mask  */

#define EVSYS_INTENSET_OVR_Pos              0                                              /**< (EVSYS_INTENSET Position) Channel x Overrun Interrupt Enable */
#define EVSYS_INTENSET_OVR_Msk              (_U_(0xFFF) << EVSYS_INTENSET_OVR_Pos)         /**< (EVSYS_INTENSET Mask) OVR */
#define EVSYS_INTENSET_OVR(value)           (EVSYS_INTENSET_OVR_Msk & ((value) << EVSYS_INTENSET_OVR_Pos))  
#define EVSYS_INTENSET_EVD_Pos              16                                             /**< (EVSYS_INTENSET Position) Channel xx Event Detection Interrupt Enable */
#define EVSYS_INTENSET_EVD_Msk              (_U_(0xFFF) << EVSYS_INTENSET_EVD_Pos)         /**< (EVSYS_INTENSET Mask) EVD */
#define EVSYS_INTENSET_EVD(value)           (EVSYS_INTENSET_EVD_Msk & ((value) << EVSYS_INTENSET_EVD_Pos))  

/* -------- EVSYS_INTFLAG : (EVSYS Offset: 0x18) (R/W 32) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t OVR0:1;                    /**< bit:      0  Channel 0 Overrun                        */
    __I uint32_t OVR1:1;                    /**< bit:      1  Channel 1 Overrun                        */
    __I uint32_t OVR2:1;                    /**< bit:      2  Channel 2 Overrun                        */
    __I uint32_t OVR3:1;                    /**< bit:      3  Channel 3 Overrun                        */
    __I uint32_t OVR4:1;                    /**< bit:      4  Channel 4 Overrun                        */
    __I uint32_t OVR5:1;                    /**< bit:      5  Channel 5 Overrun                        */
    __I uint32_t OVR6:1;                    /**< bit:      6  Channel 6 Overrun                        */
    __I uint32_t OVR7:1;                    /**< bit:      7  Channel 7 Overrun                        */
    __I uint32_t OVR8:1;                    /**< bit:      8  Channel 8 Overrun                        */
    __I uint32_t OVR9:1;                    /**< bit:      9  Channel 9 Overrun                        */
    __I uint32_t OVR10:1;                   /**< bit:     10  Channel 10 Overrun                       */
    __I uint32_t OVR11:1;                   /**< bit:     11  Channel 11 Overrun                       */
    __I uint32_t :4;                        /**< bit: 12..15  Reserved */
    __I uint32_t EVD0:1;                    /**< bit:     16  Channel 0 Event Detection                */
    __I uint32_t EVD1:1;                    /**< bit:     17  Channel 1 Event Detection                */
    __I uint32_t EVD2:1;                    /**< bit:     18  Channel 2 Event Detection                */
    __I uint32_t EVD3:1;                    /**< bit:     19  Channel 3 Event Detection                */
    __I uint32_t EVD4:1;                    /**< bit:     20  Channel 4 Event Detection                */
    __I uint32_t EVD5:1;                    /**< bit:     21  Channel 5 Event Detection                */
    __I uint32_t EVD6:1;                    /**< bit:     22  Channel 6 Event Detection                */
    __I uint32_t EVD7:1;                    /**< bit:     23  Channel 7 Event Detection                */
    __I uint32_t EVD8:1;                    /**< bit:     24  Channel 8 Event Detection                */
    __I uint32_t EVD9:1;                    /**< bit:     25  Channel 9 Event Detection                */
    __I uint32_t EVD10:1;                   /**< bit:     26  Channel 10 Event Detection               */
    __I uint32_t EVD11:1;                   /**< bit:     27  Channel 11 Event Detection               */
    __I uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    __I uint32_t OVR:12;                    /**< bit:  0..11  Channel x Overrun                        */
    __I uint32_t :4;                        /**< bit: 12..15  Reserved */
    __I uint32_t EVD:12;                    /**< bit: 16..27  Channel xx Event Detection               */
    __I uint32_t :4;                        /**< bit: 28..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} EVSYS_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_INTFLAG_OFFSET                (0x18)                                        /**<  (EVSYS_INTFLAG) Interrupt Flag Status and Clear  Offset */
#define EVSYS_INTFLAG_RESETVALUE            _U_(0x00)                                     /**<  (EVSYS_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define EVSYS_INTFLAG_OVR0_Pos              0                                              /**< (EVSYS_INTFLAG) Channel 0 Overrun Position */
#define EVSYS_INTFLAG_OVR0_Msk              (_U_(0x1) << EVSYS_INTFLAG_OVR0_Pos)           /**< (EVSYS_INTFLAG) Channel 0 Overrun Mask */
#define EVSYS_INTFLAG_OVR0                  EVSYS_INTFLAG_OVR0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_OVR0_Msk instead */
#define EVSYS_INTFLAG_OVR1_Pos              1                                              /**< (EVSYS_INTFLAG) Channel 1 Overrun Position */
#define EVSYS_INTFLAG_OVR1_Msk              (_U_(0x1) << EVSYS_INTFLAG_OVR1_Pos)           /**< (EVSYS_INTFLAG) Channel 1 Overrun Mask */
#define EVSYS_INTFLAG_OVR1                  EVSYS_INTFLAG_OVR1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_OVR1_Msk instead */
#define EVSYS_INTFLAG_OVR2_Pos              2                                              /**< (EVSYS_INTFLAG) Channel 2 Overrun Position */
#define EVSYS_INTFLAG_OVR2_Msk              (_U_(0x1) << EVSYS_INTFLAG_OVR2_Pos)           /**< (EVSYS_INTFLAG) Channel 2 Overrun Mask */
#define EVSYS_INTFLAG_OVR2                  EVSYS_INTFLAG_OVR2_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_OVR2_Msk instead */
#define EVSYS_INTFLAG_OVR3_Pos              3                                              /**< (EVSYS_INTFLAG) Channel 3 Overrun Position */
#define EVSYS_INTFLAG_OVR3_Msk              (_U_(0x1) << EVSYS_INTFLAG_OVR3_Pos)           /**< (EVSYS_INTFLAG) Channel 3 Overrun Mask */
#define EVSYS_INTFLAG_OVR3                  EVSYS_INTFLAG_OVR3_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_OVR3_Msk instead */
#define EVSYS_INTFLAG_OVR4_Pos              4                                              /**< (EVSYS_INTFLAG) Channel 4 Overrun Position */
#define EVSYS_INTFLAG_OVR4_Msk              (_U_(0x1) << EVSYS_INTFLAG_OVR4_Pos)           /**< (EVSYS_INTFLAG) Channel 4 Overrun Mask */
#define EVSYS_INTFLAG_OVR4                  EVSYS_INTFLAG_OVR4_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_OVR4_Msk instead */
#define EVSYS_INTFLAG_OVR5_Pos              5                                              /**< (EVSYS_INTFLAG) Channel 5 Overrun Position */
#define EVSYS_INTFLAG_OVR5_Msk              (_U_(0x1) << EVSYS_INTFLAG_OVR5_Pos)           /**< (EVSYS_INTFLAG) Channel 5 Overrun Mask */
#define EVSYS_INTFLAG_OVR5                  EVSYS_INTFLAG_OVR5_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_OVR5_Msk instead */
#define EVSYS_INTFLAG_OVR6_Pos              6                                              /**< (EVSYS_INTFLAG) Channel 6 Overrun Position */
#define EVSYS_INTFLAG_OVR6_Msk              (_U_(0x1) << EVSYS_INTFLAG_OVR6_Pos)           /**< (EVSYS_INTFLAG) Channel 6 Overrun Mask */
#define EVSYS_INTFLAG_OVR6                  EVSYS_INTFLAG_OVR6_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_OVR6_Msk instead */
#define EVSYS_INTFLAG_OVR7_Pos              7                                              /**< (EVSYS_INTFLAG) Channel 7 Overrun Position */
#define EVSYS_INTFLAG_OVR7_Msk              (_U_(0x1) << EVSYS_INTFLAG_OVR7_Pos)           /**< (EVSYS_INTFLAG) Channel 7 Overrun Mask */
#define EVSYS_INTFLAG_OVR7                  EVSYS_INTFLAG_OVR7_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_OVR7_Msk instead */
#define EVSYS_INTFLAG_OVR8_Pos              8                                              /**< (EVSYS_INTFLAG) Channel 8 Overrun Position */
#define EVSYS_INTFLAG_OVR8_Msk              (_U_(0x1) << EVSYS_INTFLAG_OVR8_Pos)           /**< (EVSYS_INTFLAG) Channel 8 Overrun Mask */
#define EVSYS_INTFLAG_OVR8                  EVSYS_INTFLAG_OVR8_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_OVR8_Msk instead */
#define EVSYS_INTFLAG_OVR9_Pos              9                                              /**< (EVSYS_INTFLAG) Channel 9 Overrun Position */
#define EVSYS_INTFLAG_OVR9_Msk              (_U_(0x1) << EVSYS_INTFLAG_OVR9_Pos)           /**< (EVSYS_INTFLAG) Channel 9 Overrun Mask */
#define EVSYS_INTFLAG_OVR9                  EVSYS_INTFLAG_OVR9_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_OVR9_Msk instead */
#define EVSYS_INTFLAG_OVR10_Pos             10                                             /**< (EVSYS_INTFLAG) Channel 10 Overrun Position */
#define EVSYS_INTFLAG_OVR10_Msk             (_U_(0x1) << EVSYS_INTFLAG_OVR10_Pos)          /**< (EVSYS_INTFLAG) Channel 10 Overrun Mask */
#define EVSYS_INTFLAG_OVR10                 EVSYS_INTFLAG_OVR10_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_OVR10_Msk instead */
#define EVSYS_INTFLAG_OVR11_Pos             11                                             /**< (EVSYS_INTFLAG) Channel 11 Overrun Position */
#define EVSYS_INTFLAG_OVR11_Msk             (_U_(0x1) << EVSYS_INTFLAG_OVR11_Pos)          /**< (EVSYS_INTFLAG) Channel 11 Overrun Mask */
#define EVSYS_INTFLAG_OVR11                 EVSYS_INTFLAG_OVR11_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_OVR11_Msk instead */
#define EVSYS_INTFLAG_EVD0_Pos              16                                             /**< (EVSYS_INTFLAG) Channel 0 Event Detection Position */
#define EVSYS_INTFLAG_EVD0_Msk              (_U_(0x1) << EVSYS_INTFLAG_EVD0_Pos)           /**< (EVSYS_INTFLAG) Channel 0 Event Detection Mask */
#define EVSYS_INTFLAG_EVD0                  EVSYS_INTFLAG_EVD0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_EVD0_Msk instead */
#define EVSYS_INTFLAG_EVD1_Pos              17                                             /**< (EVSYS_INTFLAG) Channel 1 Event Detection Position */
#define EVSYS_INTFLAG_EVD1_Msk              (_U_(0x1) << EVSYS_INTFLAG_EVD1_Pos)           /**< (EVSYS_INTFLAG) Channel 1 Event Detection Mask */
#define EVSYS_INTFLAG_EVD1                  EVSYS_INTFLAG_EVD1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_EVD1_Msk instead */
#define EVSYS_INTFLAG_EVD2_Pos              18                                             /**< (EVSYS_INTFLAG) Channel 2 Event Detection Position */
#define EVSYS_INTFLAG_EVD2_Msk              (_U_(0x1) << EVSYS_INTFLAG_EVD2_Pos)           /**< (EVSYS_INTFLAG) Channel 2 Event Detection Mask */
#define EVSYS_INTFLAG_EVD2                  EVSYS_INTFLAG_EVD2_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_EVD2_Msk instead */
#define EVSYS_INTFLAG_EVD3_Pos              19                                             /**< (EVSYS_INTFLAG) Channel 3 Event Detection Position */
#define EVSYS_INTFLAG_EVD3_Msk              (_U_(0x1) << EVSYS_INTFLAG_EVD3_Pos)           /**< (EVSYS_INTFLAG) Channel 3 Event Detection Mask */
#define EVSYS_INTFLAG_EVD3                  EVSYS_INTFLAG_EVD3_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_EVD3_Msk instead */
#define EVSYS_INTFLAG_EVD4_Pos              20                                             /**< (EVSYS_INTFLAG) Channel 4 Event Detection Position */
#define EVSYS_INTFLAG_EVD4_Msk              (_U_(0x1) << EVSYS_INTFLAG_EVD4_Pos)           /**< (EVSYS_INTFLAG) Channel 4 Event Detection Mask */
#define EVSYS_INTFLAG_EVD4                  EVSYS_INTFLAG_EVD4_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_EVD4_Msk instead */
#define EVSYS_INTFLAG_EVD5_Pos              21                                             /**< (EVSYS_INTFLAG) Channel 5 Event Detection Position */
#define EVSYS_INTFLAG_EVD5_Msk              (_U_(0x1) << EVSYS_INTFLAG_EVD5_Pos)           /**< (EVSYS_INTFLAG) Channel 5 Event Detection Mask */
#define EVSYS_INTFLAG_EVD5                  EVSYS_INTFLAG_EVD5_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_EVD5_Msk instead */
#define EVSYS_INTFLAG_EVD6_Pos              22                                             /**< (EVSYS_INTFLAG) Channel 6 Event Detection Position */
#define EVSYS_INTFLAG_EVD6_Msk              (_U_(0x1) << EVSYS_INTFLAG_EVD6_Pos)           /**< (EVSYS_INTFLAG) Channel 6 Event Detection Mask */
#define EVSYS_INTFLAG_EVD6                  EVSYS_INTFLAG_EVD6_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_EVD6_Msk instead */
#define EVSYS_INTFLAG_EVD7_Pos              23                                             /**< (EVSYS_INTFLAG) Channel 7 Event Detection Position */
#define EVSYS_INTFLAG_EVD7_Msk              (_U_(0x1) << EVSYS_INTFLAG_EVD7_Pos)           /**< (EVSYS_INTFLAG) Channel 7 Event Detection Mask */
#define EVSYS_INTFLAG_EVD7                  EVSYS_INTFLAG_EVD7_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_EVD7_Msk instead */
#define EVSYS_INTFLAG_EVD8_Pos              24                                             /**< (EVSYS_INTFLAG) Channel 8 Event Detection Position */
#define EVSYS_INTFLAG_EVD8_Msk              (_U_(0x1) << EVSYS_INTFLAG_EVD8_Pos)           /**< (EVSYS_INTFLAG) Channel 8 Event Detection Mask */
#define EVSYS_INTFLAG_EVD8                  EVSYS_INTFLAG_EVD8_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_EVD8_Msk instead */
#define EVSYS_INTFLAG_EVD9_Pos              25                                             /**< (EVSYS_INTFLAG) Channel 9 Event Detection Position */
#define EVSYS_INTFLAG_EVD9_Msk              (_U_(0x1) << EVSYS_INTFLAG_EVD9_Pos)           /**< (EVSYS_INTFLAG) Channel 9 Event Detection Mask */
#define EVSYS_INTFLAG_EVD9                  EVSYS_INTFLAG_EVD9_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_EVD9_Msk instead */
#define EVSYS_INTFLAG_EVD10_Pos             26                                             /**< (EVSYS_INTFLAG) Channel 10 Event Detection Position */
#define EVSYS_INTFLAG_EVD10_Msk             (_U_(0x1) << EVSYS_INTFLAG_EVD10_Pos)          /**< (EVSYS_INTFLAG) Channel 10 Event Detection Mask */
#define EVSYS_INTFLAG_EVD10                 EVSYS_INTFLAG_EVD10_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_EVD10_Msk instead */
#define EVSYS_INTFLAG_EVD11_Pos             27                                             /**< (EVSYS_INTFLAG) Channel 11 Event Detection Position */
#define EVSYS_INTFLAG_EVD11_Msk             (_U_(0x1) << EVSYS_INTFLAG_EVD11_Pos)          /**< (EVSYS_INTFLAG) Channel 11 Event Detection Mask */
#define EVSYS_INTFLAG_EVD11                 EVSYS_INTFLAG_EVD11_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_INTFLAG_EVD11_Msk instead */
#define EVSYS_INTFLAG_MASK                  _U_(0xFFF0FFF)                                 /**< \deprecated (EVSYS_INTFLAG) Register MASK  (Use EVSYS_INTFLAG_Msk instead)  */
#define EVSYS_INTFLAG_Msk                   _U_(0xFFF0FFF)                                 /**< (EVSYS_INTFLAG) Register Mask  */

#define EVSYS_INTFLAG_OVR_Pos               0                                              /**< (EVSYS_INTFLAG Position) Channel x Overrun */
#define EVSYS_INTFLAG_OVR_Msk               (_U_(0xFFF) << EVSYS_INTFLAG_OVR_Pos)          /**< (EVSYS_INTFLAG Mask) OVR */
#define EVSYS_INTFLAG_OVR(value)            (EVSYS_INTFLAG_OVR_Msk & ((value) << EVSYS_INTFLAG_OVR_Pos))  
#define EVSYS_INTFLAG_EVD_Pos               16                                             /**< (EVSYS_INTFLAG Position) Channel xx Event Detection */
#define EVSYS_INTFLAG_EVD_Msk               (_U_(0xFFF) << EVSYS_INTFLAG_EVD_Pos)          /**< (EVSYS_INTFLAG Mask) EVD */
#define EVSYS_INTFLAG_EVD(value)            (EVSYS_INTFLAG_EVD_Msk & ((value) << EVSYS_INTFLAG_EVD_Pos))  

/* -------- EVSYS_SWEVT : (EVSYS Offset: 0x1c) (/W 32) Software Event -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHANNEL0:1;                /**< bit:      0  Channel 0 Software Selection             */
    uint32_t CHANNEL1:1;                /**< bit:      1  Channel 1 Software Selection             */
    uint32_t CHANNEL2:1;                /**< bit:      2  Channel 2 Software Selection             */
    uint32_t CHANNEL3:1;                /**< bit:      3  Channel 3 Software Selection             */
    uint32_t CHANNEL4:1;                /**< bit:      4  Channel 4 Software Selection             */
    uint32_t CHANNEL5:1;                /**< bit:      5  Channel 5 Software Selection             */
    uint32_t CHANNEL6:1;                /**< bit:      6  Channel 6 Software Selection             */
    uint32_t CHANNEL7:1;                /**< bit:      7  Channel 7 Software Selection             */
    uint32_t CHANNEL8:1;                /**< bit:      8  Channel 8 Software Selection             */
    uint32_t CHANNEL9:1;                /**< bit:      9  Channel 9 Software Selection             */
    uint32_t CHANNEL10:1;               /**< bit:     10  Channel 10 Software Selection            */
    uint32_t CHANNEL11:1;               /**< bit:     11  Channel 11 Software Selection            */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t CHANNEL:12;                /**< bit:  0..11  Channel xx Software Selection            */
    uint32_t :20;                       /**< bit: 12..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} EVSYS_SWEVT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_SWEVT_OFFSET                  (0x1C)                                        /**<  (EVSYS_SWEVT) Software Event  Offset */
#define EVSYS_SWEVT_RESETVALUE              _U_(0x00)                                     /**<  (EVSYS_SWEVT) Software Event  Reset Value */

#define EVSYS_SWEVT_CHANNEL0_Pos            0                                              /**< (EVSYS_SWEVT) Channel 0 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL0_Msk            (_U_(0x1) << EVSYS_SWEVT_CHANNEL0_Pos)         /**< (EVSYS_SWEVT) Channel 0 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL0                EVSYS_SWEVT_CHANNEL0_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_SWEVT_CHANNEL0_Msk instead */
#define EVSYS_SWEVT_CHANNEL1_Pos            1                                              /**< (EVSYS_SWEVT) Channel 1 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL1_Msk            (_U_(0x1) << EVSYS_SWEVT_CHANNEL1_Pos)         /**< (EVSYS_SWEVT) Channel 1 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL1                EVSYS_SWEVT_CHANNEL1_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_SWEVT_CHANNEL1_Msk instead */
#define EVSYS_SWEVT_CHANNEL2_Pos            2                                              /**< (EVSYS_SWEVT) Channel 2 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL2_Msk            (_U_(0x1) << EVSYS_SWEVT_CHANNEL2_Pos)         /**< (EVSYS_SWEVT) Channel 2 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL2                EVSYS_SWEVT_CHANNEL2_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_SWEVT_CHANNEL2_Msk instead */
#define EVSYS_SWEVT_CHANNEL3_Pos            3                                              /**< (EVSYS_SWEVT) Channel 3 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL3_Msk            (_U_(0x1) << EVSYS_SWEVT_CHANNEL3_Pos)         /**< (EVSYS_SWEVT) Channel 3 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL3                EVSYS_SWEVT_CHANNEL3_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_SWEVT_CHANNEL3_Msk instead */
#define EVSYS_SWEVT_CHANNEL4_Pos            4                                              /**< (EVSYS_SWEVT) Channel 4 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL4_Msk            (_U_(0x1) << EVSYS_SWEVT_CHANNEL4_Pos)         /**< (EVSYS_SWEVT) Channel 4 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL4                EVSYS_SWEVT_CHANNEL4_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_SWEVT_CHANNEL4_Msk instead */
#define EVSYS_SWEVT_CHANNEL5_Pos            5                                              /**< (EVSYS_SWEVT) Channel 5 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL5_Msk            (_U_(0x1) << EVSYS_SWEVT_CHANNEL5_Pos)         /**< (EVSYS_SWEVT) Channel 5 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL5                EVSYS_SWEVT_CHANNEL5_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_SWEVT_CHANNEL5_Msk instead */
#define EVSYS_SWEVT_CHANNEL6_Pos            6                                              /**< (EVSYS_SWEVT) Channel 6 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL6_Msk            (_U_(0x1) << EVSYS_SWEVT_CHANNEL6_Pos)         /**< (EVSYS_SWEVT) Channel 6 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL6                EVSYS_SWEVT_CHANNEL6_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_SWEVT_CHANNEL6_Msk instead */
#define EVSYS_SWEVT_CHANNEL7_Pos            7                                              /**< (EVSYS_SWEVT) Channel 7 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL7_Msk            (_U_(0x1) << EVSYS_SWEVT_CHANNEL7_Pos)         /**< (EVSYS_SWEVT) Channel 7 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL7                EVSYS_SWEVT_CHANNEL7_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_SWEVT_CHANNEL7_Msk instead */
#define EVSYS_SWEVT_CHANNEL8_Pos            8                                              /**< (EVSYS_SWEVT) Channel 8 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL8_Msk            (_U_(0x1) << EVSYS_SWEVT_CHANNEL8_Pos)         /**< (EVSYS_SWEVT) Channel 8 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL8                EVSYS_SWEVT_CHANNEL8_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_SWEVT_CHANNEL8_Msk instead */
#define EVSYS_SWEVT_CHANNEL9_Pos            9                                              /**< (EVSYS_SWEVT) Channel 9 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL9_Msk            (_U_(0x1) << EVSYS_SWEVT_CHANNEL9_Pos)         /**< (EVSYS_SWEVT) Channel 9 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL9                EVSYS_SWEVT_CHANNEL9_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_SWEVT_CHANNEL9_Msk instead */
#define EVSYS_SWEVT_CHANNEL10_Pos           10                                             /**< (EVSYS_SWEVT) Channel 10 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL10_Msk           (_U_(0x1) << EVSYS_SWEVT_CHANNEL10_Pos)        /**< (EVSYS_SWEVT) Channel 10 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL10               EVSYS_SWEVT_CHANNEL10_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_SWEVT_CHANNEL10_Msk instead */
#define EVSYS_SWEVT_CHANNEL11_Pos           11                                             /**< (EVSYS_SWEVT) Channel 11 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL11_Msk           (_U_(0x1) << EVSYS_SWEVT_CHANNEL11_Pos)        /**< (EVSYS_SWEVT) Channel 11 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL11               EVSYS_SWEVT_CHANNEL11_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_SWEVT_CHANNEL11_Msk instead */
#define EVSYS_SWEVT_MASK                    _U_(0xFFF)                                     /**< \deprecated (EVSYS_SWEVT) Register MASK  (Use EVSYS_SWEVT_Msk instead)  */
#define EVSYS_SWEVT_Msk                     _U_(0xFFF)                                     /**< (EVSYS_SWEVT) Register Mask  */

#define EVSYS_SWEVT_CHANNEL_Pos             0                                              /**< (EVSYS_SWEVT Position) Channel xx Software Selection */
#define EVSYS_SWEVT_CHANNEL_Msk             (_U_(0xFFF) << EVSYS_SWEVT_CHANNEL_Pos)        /**< (EVSYS_SWEVT Mask) CHANNEL */
#define EVSYS_SWEVT_CHANNEL(value)          (EVSYS_SWEVT_CHANNEL_Msk & ((value) << EVSYS_SWEVT_CHANNEL_Pos))  

/* -------- EVSYS_CHANNEL : (EVSYS Offset: 0x20) (R/W 32) Channel n -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EVGEN:7;                   /**< bit:   0..6  Event Generator Selection                */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t PATH:2;                    /**< bit:   8..9  Path Selection                           */
    uint32_t EDGSEL:2;                  /**< bit: 10..11  Edge Detection Selection                 */
    uint32_t :2;                        /**< bit: 12..13  Reserved */
    uint32_t RUNSTDBY:1;                /**< bit:     14  Run in standby                           */
    uint32_t ONDEMAND:1;                /**< bit:     15  Generic Clock On Demand                  */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} EVSYS_CHANNEL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_CHANNEL_OFFSET                (0x20)                                        /**<  (EVSYS_CHANNEL) Channel n  Offset */
#define EVSYS_CHANNEL_RESETVALUE            _U_(0x8000)                                   /**<  (EVSYS_CHANNEL) Channel n  Reset Value */

#define EVSYS_CHANNEL_EVGEN_Pos             0                                              /**< (EVSYS_CHANNEL) Event Generator Selection Position */
#define EVSYS_CHANNEL_EVGEN_Msk             (_U_(0x7F) << EVSYS_CHANNEL_EVGEN_Pos)         /**< (EVSYS_CHANNEL) Event Generator Selection Mask */
#define EVSYS_CHANNEL_EVGEN(value)          (EVSYS_CHANNEL_EVGEN_Msk & ((value) << EVSYS_CHANNEL_EVGEN_Pos))
#define EVSYS_CHANNEL_PATH_Pos              8                                              /**< (EVSYS_CHANNEL) Path Selection Position */
#define EVSYS_CHANNEL_PATH_Msk              (_U_(0x3) << EVSYS_CHANNEL_PATH_Pos)           /**< (EVSYS_CHANNEL) Path Selection Mask */
#define EVSYS_CHANNEL_PATH(value)           (EVSYS_CHANNEL_PATH_Msk & ((value) << EVSYS_CHANNEL_PATH_Pos))
#define   EVSYS_CHANNEL_PATH_SYNCHRONOUS_Val _U_(0x0)                                       /**< (EVSYS_CHANNEL) Synchronous path  */
#define   EVSYS_CHANNEL_PATH_RESYNCHRONIZED_Val _U_(0x1)                                       /**< (EVSYS_CHANNEL) Resynchronized path  */
#define   EVSYS_CHANNEL_PATH_ASYNCHRONOUS_Val _U_(0x2)                                       /**< (EVSYS_CHANNEL) Asynchronous path  */
#define EVSYS_CHANNEL_PATH_SYNCHRONOUS      (EVSYS_CHANNEL_PATH_SYNCHRONOUS_Val << EVSYS_CHANNEL_PATH_Pos)  /**< (EVSYS_CHANNEL) Synchronous path Position  */
#define EVSYS_CHANNEL_PATH_RESYNCHRONIZED   (EVSYS_CHANNEL_PATH_RESYNCHRONIZED_Val << EVSYS_CHANNEL_PATH_Pos)  /**< (EVSYS_CHANNEL) Resynchronized path Position  */
#define EVSYS_CHANNEL_PATH_ASYNCHRONOUS     (EVSYS_CHANNEL_PATH_ASYNCHRONOUS_Val << EVSYS_CHANNEL_PATH_Pos)  /**< (EVSYS_CHANNEL) Asynchronous path Position  */
#define EVSYS_CHANNEL_EDGSEL_Pos            10                                             /**< (EVSYS_CHANNEL) Edge Detection Selection Position */
#define EVSYS_CHANNEL_EDGSEL_Msk            (_U_(0x3) << EVSYS_CHANNEL_EDGSEL_Pos)         /**< (EVSYS_CHANNEL) Edge Detection Selection Mask */
#define EVSYS_CHANNEL_EDGSEL(value)         (EVSYS_CHANNEL_EDGSEL_Msk & ((value) << EVSYS_CHANNEL_EDGSEL_Pos))
#define   EVSYS_CHANNEL_EDGSEL_NO_EVT_OUTPUT_Val _U_(0x0)                                       /**< (EVSYS_CHANNEL) No event output when using the resynchronized or synchronous path  */
#define   EVSYS_CHANNEL_EDGSEL_RISING_EDGE_Val _U_(0x1)                                       /**< (EVSYS_CHANNEL) Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path  */
#define   EVSYS_CHANNEL_EDGSEL_FALLING_EDGE_Val _U_(0x2)                                       /**< (EVSYS_CHANNEL) Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path  */
#define   EVSYS_CHANNEL_EDGSEL_BOTH_EDGES_Val _U_(0x3)                                       /**< (EVSYS_CHANNEL) Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path  */
#define EVSYS_CHANNEL_EDGSEL_NO_EVT_OUTPUT  (EVSYS_CHANNEL_EDGSEL_NO_EVT_OUTPUT_Val << EVSYS_CHANNEL_EDGSEL_Pos)  /**< (EVSYS_CHANNEL) No event output when using the resynchronized or synchronous path Position  */
#define EVSYS_CHANNEL_EDGSEL_RISING_EDGE    (EVSYS_CHANNEL_EDGSEL_RISING_EDGE_Val << EVSYS_CHANNEL_EDGSEL_Pos)  /**< (EVSYS_CHANNEL) Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path Position  */
#define EVSYS_CHANNEL_EDGSEL_FALLING_EDGE   (EVSYS_CHANNEL_EDGSEL_FALLING_EDGE_Val << EVSYS_CHANNEL_EDGSEL_Pos)  /**< (EVSYS_CHANNEL) Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path Position  */
#define EVSYS_CHANNEL_EDGSEL_BOTH_EDGES     (EVSYS_CHANNEL_EDGSEL_BOTH_EDGES_Val << EVSYS_CHANNEL_EDGSEL_Pos)  /**< (EVSYS_CHANNEL) Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path Position  */
#define EVSYS_CHANNEL_RUNSTDBY_Pos          14                                             /**< (EVSYS_CHANNEL) Run in standby Position */
#define EVSYS_CHANNEL_RUNSTDBY_Msk          (_U_(0x1) << EVSYS_CHANNEL_RUNSTDBY_Pos)       /**< (EVSYS_CHANNEL) Run in standby Mask */
#define EVSYS_CHANNEL_RUNSTDBY              EVSYS_CHANNEL_RUNSTDBY_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHANNEL_RUNSTDBY_Msk instead */
#define EVSYS_CHANNEL_ONDEMAND_Pos          15                                             /**< (EVSYS_CHANNEL) Generic Clock On Demand Position */
#define EVSYS_CHANNEL_ONDEMAND_Msk          (_U_(0x1) << EVSYS_CHANNEL_ONDEMAND_Pos)       /**< (EVSYS_CHANNEL) Generic Clock On Demand Mask */
#define EVSYS_CHANNEL_ONDEMAND              EVSYS_CHANNEL_ONDEMAND_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use EVSYS_CHANNEL_ONDEMAND_Msk instead */
#define EVSYS_CHANNEL_MASK                  _U_(0xCF7F)                                    /**< \deprecated (EVSYS_CHANNEL) Register MASK  (Use EVSYS_CHANNEL_Msk instead)  */
#define EVSYS_CHANNEL_Msk                   _U_(0xCF7F)                                    /**< (EVSYS_CHANNEL) Register Mask  */


/* -------- EVSYS_USER : (EVSYS Offset: 0x80) (R/W 32) User Multiplexer n -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHANNEL:5;                 /**< bit:   0..4  Channel Event Selection                  */
    uint32_t :27;                       /**< bit:  5..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} EVSYS_USER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_USER_OFFSET                   (0x80)                                        /**<  (EVSYS_USER) User Multiplexer n  Offset */
#define EVSYS_USER_RESETVALUE               _U_(0x00)                                     /**<  (EVSYS_USER) User Multiplexer n  Reset Value */

#define EVSYS_USER_CHANNEL_Pos              0                                              /**< (EVSYS_USER) Channel Event Selection Position */
#define EVSYS_USER_CHANNEL_Msk              (_U_(0x1F) << EVSYS_USER_CHANNEL_Pos)          /**< (EVSYS_USER) Channel Event Selection Mask */
#define EVSYS_USER_CHANNEL(value)           (EVSYS_USER_CHANNEL_Msk & ((value) << EVSYS_USER_CHANNEL_Pos))
#define EVSYS_USER_MASK                     _U_(0x1F)                                      /**< \deprecated (EVSYS_USER) Register MASK  (Use EVSYS_USER_Msk instead)  */
#define EVSYS_USER_Msk                      _U_(0x1F)                                      /**< (EVSYS_USER) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief EVSYS hardware registers */
typedef struct {  /* Event System Interface */
  __IO uint8_t CTRLA;          /**< (EVSYS Offset: 0x00) Control */
  __I  uint8_t                        Reserved1[11];
  __I  uint32_t CHSTATUS;       /**< (EVSYS Offset: 0x0C) Channel Status */
  __IO uint32_t INTENCLR;       /**< (EVSYS Offset: 0x10) Interrupt Enable Clear */
  __IO uint32_t INTENSET;       /**< (EVSYS Offset: 0x14) Interrupt Enable Set */
  __IO uint32_t INTFLAG;        /**< (EVSYS Offset: 0x18) Interrupt Flag Status and Clear */
  __O  uint32_t SWEVT;          /**< (EVSYS Offset: 0x1C) Software Event */
  __IO uint32_t CHANNEL[12];    /**< (EVSYS Offset: 0x20) Channel n */
  __I  uint8_t                        Reserved2[48];
  __IO uint32_t USER[45];       /**< (EVSYS Offset: 0x80) User Multiplexer n */
} Evsys;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief EVSYS hardware registers */
typedef struct {  /* Event System Interface */
  __IO EVSYS_CTRLA_Type               CTRLA;          /**< Offset: 0x00 (R/W   8) Control */
  __I  uint8_t                        Reserved1[11];
  __I  EVSYS_CHSTATUS_Type            CHSTATUS;       /**< Offset: 0x0C (R/   32) Channel Status */
  __IO EVSYS_INTENCLR_Type            INTENCLR;       /**< Offset: 0x10 (R/W  32) Interrupt Enable Clear */
  __IO EVSYS_INTENSET_Type            INTENSET;       /**< Offset: 0x14 (R/W  32) Interrupt Enable Set */
  __IO EVSYS_INTFLAG_Type             INTFLAG;        /**< Offset: 0x18 (R/W  32) Interrupt Flag Status and Clear */
  __O  EVSYS_SWEVT_Type               SWEVT;          /**< Offset: 0x1C ( /W  32) Software Event */
  __IO EVSYS_CHANNEL_Type             CHANNEL[12];    /**< Offset: 0x20 (R/W  32) Channel n */
  __I  uint8_t                        Reserved2[48];
  __IO EVSYS_USER_Type                USER[45];       /**< Offset: 0x80 (R/W  32) User Multiplexer n */
} Evsys;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  b'end of Event System Interface' */

#endif /* _WLR089_EVSYS_COMPONENT_H_ */
