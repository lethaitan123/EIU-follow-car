/**
 * \brief Component description for DAC
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
#ifndef _WLR089_DAC_COMPONENT_H_
#define _WLR089_DAC_COMPONENT_H_
#define _WLR089_DAC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup WLR089_DAC b'Digital-to-Analog Converter'
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR DAC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define DAC_U2244                      /**< (DAC) Module ID */
#define REV_DAC 0x112                  /**< (DAC) Module revision */

/* -------- DAC_CTRLA : (DAC Offset: 0x00) (R/W 8) Control A -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint8_t  ENABLE:1;                  /**< bit:      1  Enable DAC Controller                    */
    uint8_t  :6;                        /**< bit:   2..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} DAC_CTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_CTRLA_OFFSET                    (0x00)                                        /**<  (DAC_CTRLA) Control A  Offset */
#define DAC_CTRLA_RESETVALUE                _U_(0x00)                                     /**<  (DAC_CTRLA) Control A  Reset Value */

#define DAC_CTRLA_SWRST_Pos                 0                                              /**< (DAC_CTRLA) Software Reset Position */
#define DAC_CTRLA_SWRST_Msk                 (_U_(0x1) << DAC_CTRLA_SWRST_Pos)              /**< (DAC_CTRLA) Software Reset Mask */
#define DAC_CTRLA_SWRST                     DAC_CTRLA_SWRST_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_CTRLA_SWRST_Msk instead */
#define DAC_CTRLA_ENABLE_Pos                1                                              /**< (DAC_CTRLA) Enable DAC Controller Position */
#define DAC_CTRLA_ENABLE_Msk                (_U_(0x1) << DAC_CTRLA_ENABLE_Pos)             /**< (DAC_CTRLA) Enable DAC Controller Mask */
#define DAC_CTRLA_ENABLE                    DAC_CTRLA_ENABLE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_CTRLA_ENABLE_Msk instead */
#define DAC_CTRLA_MASK                      _U_(0x03)                                      /**< \deprecated (DAC_CTRLA) Register MASK  (Use DAC_CTRLA_Msk instead)  */
#define DAC_CTRLA_Msk                       _U_(0x03)                                      /**< (DAC_CTRLA) Register Mask  */


/* -------- DAC_CTRLB : (DAC Offset: 0x01) (R/W 8) Control B -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DIFF:1;                    /**< bit:      0  Differential mode enable                 */
    uint8_t  REFSEL:2;                  /**< bit:   1..2  Reference Selection for DAC0/1           */
    uint8_t  :5;                        /**< bit:   3..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} DAC_CTRLB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_CTRLB_OFFSET                    (0x01)                                        /**<  (DAC_CTRLB) Control B  Offset */
#define DAC_CTRLB_RESETVALUE                _U_(0x00)                                     /**<  (DAC_CTRLB) Control B  Reset Value */

#define DAC_CTRLB_DIFF_Pos                  0                                              /**< (DAC_CTRLB) Differential mode enable Position */
#define DAC_CTRLB_DIFF_Msk                  (_U_(0x1) << DAC_CTRLB_DIFF_Pos)               /**< (DAC_CTRLB) Differential mode enable Mask */
#define DAC_CTRLB_DIFF                      DAC_CTRLB_DIFF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_CTRLB_DIFF_Msk instead */
#define DAC_CTRLB_REFSEL_Pos                1                                              /**< (DAC_CTRLB) Reference Selection for DAC0/1 Position */
#define DAC_CTRLB_REFSEL_Msk                (_U_(0x3) << DAC_CTRLB_REFSEL_Pos)             /**< (DAC_CTRLB) Reference Selection for DAC0/1 Mask */
#define DAC_CTRLB_REFSEL(value)             (DAC_CTRLB_REFSEL_Msk & ((value) << DAC_CTRLB_REFSEL_Pos))
#define   DAC_CTRLB_REFSEL_VREFPU_Val       _U_(0x0)                                       /**< (DAC_CTRLB) External reference unbuffered  */
#define   DAC_CTRLB_REFSEL_VDDANA_Val       _U_(0x1)                                       /**< (DAC_CTRLB) Analog supply  */
#define   DAC_CTRLB_REFSEL_VREFPB_Val       _U_(0x2)                                       /**< (DAC_CTRLB) External reference buffered  */
#define   DAC_CTRLB_REFSEL_INTREF_Val       _U_(0x3)                                       /**< (DAC_CTRLB) Internal bandgap reference  */
#define DAC_CTRLB_REFSEL_VREFPU             (DAC_CTRLB_REFSEL_VREFPU_Val << DAC_CTRLB_REFSEL_Pos)  /**< (DAC_CTRLB) External reference unbuffered Position  */
#define DAC_CTRLB_REFSEL_VDDANA             (DAC_CTRLB_REFSEL_VDDANA_Val << DAC_CTRLB_REFSEL_Pos)  /**< (DAC_CTRLB) Analog supply Position  */
#define DAC_CTRLB_REFSEL_VREFPB             (DAC_CTRLB_REFSEL_VREFPB_Val << DAC_CTRLB_REFSEL_Pos)  /**< (DAC_CTRLB) External reference buffered Position  */
#define DAC_CTRLB_REFSEL_INTREF             (DAC_CTRLB_REFSEL_INTREF_Val << DAC_CTRLB_REFSEL_Pos)  /**< (DAC_CTRLB) Internal bandgap reference Position  */
#define DAC_CTRLB_MASK                      _U_(0x07)                                      /**< \deprecated (DAC_CTRLB) Register MASK  (Use DAC_CTRLB_Msk instead)  */
#define DAC_CTRLB_Msk                       _U_(0x07)                                      /**< (DAC_CTRLB) Register Mask  */


/* -------- DAC_EVCTRL : (DAC Offset: 0x02) (R/W 8) Event Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  STARTEI0:1;                /**< bit:      0  Start Conversion Event Input DAC 0       */
    uint8_t  STARTEI1:1;                /**< bit:      1  Start Conversion Event Input DAC 1       */
    uint8_t  EMPTYEO0:1;                /**< bit:      2  Data Buffer Empty Event Output DAC 0     */
    uint8_t  EMPTYEO1:1;                /**< bit:      3  Data Buffer Empty Event Output DAC 1     */
    uint8_t  INVEI0:1;                  /**< bit:      4  Enable Invertion of DAC 0 input event    */
    uint8_t  INVEI1:1;                  /**< bit:      5  Enable Invertion of DAC 1 input event    */
    uint8_t  :2;                        /**< bit:   6..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint8_t  STARTEI:2;                 /**< bit:   0..1  Start Conversion Event Input DAC x       */
    uint8_t  EMPTYEO:2;                 /**< bit:   2..3  Data Buffer Empty Event Output DAC x     */
    uint8_t  INVEI:2;                   /**< bit:   4..5  Enable Invertion of DAC x input event    */
    uint8_t  :2;                        /**< bit:   6..7 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint8_t  reg;                         /**< Type used for register access */
} DAC_EVCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_EVCTRL_OFFSET                   (0x02)                                        /**<  (DAC_EVCTRL) Event Control  Offset */
#define DAC_EVCTRL_RESETVALUE               _U_(0x00)                                     /**<  (DAC_EVCTRL) Event Control  Reset Value */

#define DAC_EVCTRL_STARTEI0_Pos             0                                              /**< (DAC_EVCTRL) Start Conversion Event Input DAC 0 Position */
#define DAC_EVCTRL_STARTEI0_Msk             (_U_(0x1) << DAC_EVCTRL_STARTEI0_Pos)          /**< (DAC_EVCTRL) Start Conversion Event Input DAC 0 Mask */
#define DAC_EVCTRL_STARTEI0                 DAC_EVCTRL_STARTEI0_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_EVCTRL_STARTEI0_Msk instead */
#define DAC_EVCTRL_STARTEI1_Pos             1                                              /**< (DAC_EVCTRL) Start Conversion Event Input DAC 1 Position */
#define DAC_EVCTRL_STARTEI1_Msk             (_U_(0x1) << DAC_EVCTRL_STARTEI1_Pos)          /**< (DAC_EVCTRL) Start Conversion Event Input DAC 1 Mask */
#define DAC_EVCTRL_STARTEI1                 DAC_EVCTRL_STARTEI1_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_EVCTRL_STARTEI1_Msk instead */
#define DAC_EVCTRL_EMPTYEO0_Pos             2                                              /**< (DAC_EVCTRL) Data Buffer Empty Event Output DAC 0 Position */
#define DAC_EVCTRL_EMPTYEO0_Msk             (_U_(0x1) << DAC_EVCTRL_EMPTYEO0_Pos)          /**< (DAC_EVCTRL) Data Buffer Empty Event Output DAC 0 Mask */
#define DAC_EVCTRL_EMPTYEO0                 DAC_EVCTRL_EMPTYEO0_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_EVCTRL_EMPTYEO0_Msk instead */
#define DAC_EVCTRL_EMPTYEO1_Pos             3                                              /**< (DAC_EVCTRL) Data Buffer Empty Event Output DAC 1 Position */
#define DAC_EVCTRL_EMPTYEO1_Msk             (_U_(0x1) << DAC_EVCTRL_EMPTYEO1_Pos)          /**< (DAC_EVCTRL) Data Buffer Empty Event Output DAC 1 Mask */
#define DAC_EVCTRL_EMPTYEO1                 DAC_EVCTRL_EMPTYEO1_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_EVCTRL_EMPTYEO1_Msk instead */
#define DAC_EVCTRL_INVEI0_Pos               4                                              /**< (DAC_EVCTRL) Enable Invertion of DAC 0 input event Position */
#define DAC_EVCTRL_INVEI0_Msk               (_U_(0x1) << DAC_EVCTRL_INVEI0_Pos)            /**< (DAC_EVCTRL) Enable Invertion of DAC 0 input event Mask */
#define DAC_EVCTRL_INVEI0                   DAC_EVCTRL_INVEI0_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_EVCTRL_INVEI0_Msk instead */
#define DAC_EVCTRL_INVEI1_Pos               5                                              /**< (DAC_EVCTRL) Enable Invertion of DAC 1 input event Position */
#define DAC_EVCTRL_INVEI1_Msk               (_U_(0x1) << DAC_EVCTRL_INVEI1_Pos)            /**< (DAC_EVCTRL) Enable Invertion of DAC 1 input event Mask */
#define DAC_EVCTRL_INVEI1                   DAC_EVCTRL_INVEI1_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_EVCTRL_INVEI1_Msk instead */
#define DAC_EVCTRL_MASK                     _U_(0x3F)                                      /**< \deprecated (DAC_EVCTRL) Register MASK  (Use DAC_EVCTRL_Msk instead)  */
#define DAC_EVCTRL_Msk                      _U_(0x3F)                                      /**< (DAC_EVCTRL) Register Mask  */

#define DAC_EVCTRL_STARTEI_Pos              0                                              /**< (DAC_EVCTRL Position) Start Conversion Event Input DAC x */
#define DAC_EVCTRL_STARTEI_Msk              (_U_(0x3) << DAC_EVCTRL_STARTEI_Pos)           /**< (DAC_EVCTRL Mask) STARTEI */
#define DAC_EVCTRL_STARTEI(value)           (DAC_EVCTRL_STARTEI_Msk & ((value) << DAC_EVCTRL_STARTEI_Pos))  
#define DAC_EVCTRL_EMPTYEO_Pos              2                                              /**< (DAC_EVCTRL Position) Data Buffer Empty Event Output DAC x */
#define DAC_EVCTRL_EMPTYEO_Msk              (_U_(0x3) << DAC_EVCTRL_EMPTYEO_Pos)           /**< (DAC_EVCTRL Mask) EMPTYEO */
#define DAC_EVCTRL_EMPTYEO(value)           (DAC_EVCTRL_EMPTYEO_Msk & ((value) << DAC_EVCTRL_EMPTYEO_Pos))  
#define DAC_EVCTRL_INVEI_Pos                4                                              /**< (DAC_EVCTRL Position) Enable Invertion of DAC x input event */
#define DAC_EVCTRL_INVEI_Msk                (_U_(0x3) << DAC_EVCTRL_INVEI_Pos)             /**< (DAC_EVCTRL Mask) INVEI */
#define DAC_EVCTRL_INVEI(value)             (DAC_EVCTRL_INVEI_Msk & ((value) << DAC_EVCTRL_INVEI_Pos))  

/* -------- DAC_INTENCLR : (DAC Offset: 0x04) (R/W 8) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  UNDERRUN0:1;               /**< bit:      0  Underrun Interrupt Enable for DAC 0      */
    uint8_t  UNDERRUN1:1;               /**< bit:      1  Underrun Interrupt Enable for DAC 1      */
    uint8_t  EMPTY0:1;                  /**< bit:      2  Data Buffer 0 Empty Interrupt Enable     */
    uint8_t  EMPTY1:1;                  /**< bit:      3  Data Buffer 1 Empty Interrupt Enable     */
    uint8_t  :4;                        /**< bit:   4..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint8_t  UNDERRUN:2;                /**< bit:   0..1  Underrun Interrupt Enable for DAC x      */
    uint8_t  EMPTY:2;                   /**< bit:   2..3  Data Buffer x Empty Interrupt Enable     */
    uint8_t  :4;                        /**< bit:   4..7 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint8_t  reg;                         /**< Type used for register access */
} DAC_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_INTENCLR_OFFSET                 (0x04)                                        /**<  (DAC_INTENCLR) Interrupt Enable Clear  Offset */
#define DAC_INTENCLR_RESETVALUE             _U_(0x00)                                     /**<  (DAC_INTENCLR) Interrupt Enable Clear  Reset Value */

#define DAC_INTENCLR_UNDERRUN0_Pos          0                                              /**< (DAC_INTENCLR) Underrun Interrupt Enable for DAC 0 Position */
#define DAC_INTENCLR_UNDERRUN0_Msk          (_U_(0x1) << DAC_INTENCLR_UNDERRUN0_Pos)       /**< (DAC_INTENCLR) Underrun Interrupt Enable for DAC 0 Mask */
#define DAC_INTENCLR_UNDERRUN0              DAC_INTENCLR_UNDERRUN0_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_INTENCLR_UNDERRUN0_Msk instead */
#define DAC_INTENCLR_UNDERRUN1_Pos          1                                              /**< (DAC_INTENCLR) Underrun Interrupt Enable for DAC 1 Position */
#define DAC_INTENCLR_UNDERRUN1_Msk          (_U_(0x1) << DAC_INTENCLR_UNDERRUN1_Pos)       /**< (DAC_INTENCLR) Underrun Interrupt Enable for DAC 1 Mask */
#define DAC_INTENCLR_UNDERRUN1              DAC_INTENCLR_UNDERRUN1_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_INTENCLR_UNDERRUN1_Msk instead */
#define DAC_INTENCLR_EMPTY0_Pos             2                                              /**< (DAC_INTENCLR) Data Buffer 0 Empty Interrupt Enable Position */
#define DAC_INTENCLR_EMPTY0_Msk             (_U_(0x1) << DAC_INTENCLR_EMPTY0_Pos)          /**< (DAC_INTENCLR) Data Buffer 0 Empty Interrupt Enable Mask */
#define DAC_INTENCLR_EMPTY0                 DAC_INTENCLR_EMPTY0_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_INTENCLR_EMPTY0_Msk instead */
#define DAC_INTENCLR_EMPTY1_Pos             3                                              /**< (DAC_INTENCLR) Data Buffer 1 Empty Interrupt Enable Position */
#define DAC_INTENCLR_EMPTY1_Msk             (_U_(0x1) << DAC_INTENCLR_EMPTY1_Pos)          /**< (DAC_INTENCLR) Data Buffer 1 Empty Interrupt Enable Mask */
#define DAC_INTENCLR_EMPTY1                 DAC_INTENCLR_EMPTY1_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_INTENCLR_EMPTY1_Msk instead */
#define DAC_INTENCLR_MASK                   _U_(0x0F)                                      /**< \deprecated (DAC_INTENCLR) Register MASK  (Use DAC_INTENCLR_Msk instead)  */
#define DAC_INTENCLR_Msk                    _U_(0x0F)                                      /**< (DAC_INTENCLR) Register Mask  */

#define DAC_INTENCLR_UNDERRUN_Pos           0                                              /**< (DAC_INTENCLR Position) Underrun Interrupt Enable for DAC x */
#define DAC_INTENCLR_UNDERRUN_Msk           (_U_(0x3) << DAC_INTENCLR_UNDERRUN_Pos)        /**< (DAC_INTENCLR Mask) UNDERRUN */
#define DAC_INTENCLR_UNDERRUN(value)        (DAC_INTENCLR_UNDERRUN_Msk & ((value) << DAC_INTENCLR_UNDERRUN_Pos))  
#define DAC_INTENCLR_EMPTY_Pos              2                                              /**< (DAC_INTENCLR Position) Data Buffer x Empty Interrupt Enable */
#define DAC_INTENCLR_EMPTY_Msk              (_U_(0x3) << DAC_INTENCLR_EMPTY_Pos)           /**< (DAC_INTENCLR Mask) EMPTY */
#define DAC_INTENCLR_EMPTY(value)           (DAC_INTENCLR_EMPTY_Msk & ((value) << DAC_INTENCLR_EMPTY_Pos))  

/* -------- DAC_INTENSET : (DAC Offset: 0x05) (R/W 8) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  UNDERRUN0:1;               /**< bit:      0  Underrun Interrupt Enable for DAC 0      */
    uint8_t  UNDERRUN1:1;               /**< bit:      1  Underrun Interrupt Enable for DAC 1      */
    uint8_t  EMPTY0:1;                  /**< bit:      2  Data Buffer 0 Empty Interrupt Enable     */
    uint8_t  EMPTY1:1;                  /**< bit:      3  Data Buffer 1 Empty Interrupt Enable     */
    uint8_t  :4;                        /**< bit:   4..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint8_t  UNDERRUN:2;                /**< bit:   0..1  Underrun Interrupt Enable for DAC x      */
    uint8_t  EMPTY:2;                   /**< bit:   2..3  Data Buffer x Empty Interrupt Enable     */
    uint8_t  :4;                        /**< bit:   4..7 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint8_t  reg;                         /**< Type used for register access */
} DAC_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_INTENSET_OFFSET                 (0x05)                                        /**<  (DAC_INTENSET) Interrupt Enable Set  Offset */
#define DAC_INTENSET_RESETVALUE             _U_(0x00)                                     /**<  (DAC_INTENSET) Interrupt Enable Set  Reset Value */

#define DAC_INTENSET_UNDERRUN0_Pos          0                                              /**< (DAC_INTENSET) Underrun Interrupt Enable for DAC 0 Position */
#define DAC_INTENSET_UNDERRUN0_Msk          (_U_(0x1) << DAC_INTENSET_UNDERRUN0_Pos)       /**< (DAC_INTENSET) Underrun Interrupt Enable for DAC 0 Mask */
#define DAC_INTENSET_UNDERRUN0              DAC_INTENSET_UNDERRUN0_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_INTENSET_UNDERRUN0_Msk instead */
#define DAC_INTENSET_UNDERRUN1_Pos          1                                              /**< (DAC_INTENSET) Underrun Interrupt Enable for DAC 1 Position */
#define DAC_INTENSET_UNDERRUN1_Msk          (_U_(0x1) << DAC_INTENSET_UNDERRUN1_Pos)       /**< (DAC_INTENSET) Underrun Interrupt Enable for DAC 1 Mask */
#define DAC_INTENSET_UNDERRUN1              DAC_INTENSET_UNDERRUN1_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_INTENSET_UNDERRUN1_Msk instead */
#define DAC_INTENSET_EMPTY0_Pos             2                                              /**< (DAC_INTENSET) Data Buffer 0 Empty Interrupt Enable Position */
#define DAC_INTENSET_EMPTY0_Msk             (_U_(0x1) << DAC_INTENSET_EMPTY0_Pos)          /**< (DAC_INTENSET) Data Buffer 0 Empty Interrupt Enable Mask */
#define DAC_INTENSET_EMPTY0                 DAC_INTENSET_EMPTY0_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_INTENSET_EMPTY0_Msk instead */
#define DAC_INTENSET_EMPTY1_Pos             3                                              /**< (DAC_INTENSET) Data Buffer 1 Empty Interrupt Enable Position */
#define DAC_INTENSET_EMPTY1_Msk             (_U_(0x1) << DAC_INTENSET_EMPTY1_Pos)          /**< (DAC_INTENSET) Data Buffer 1 Empty Interrupt Enable Mask */
#define DAC_INTENSET_EMPTY1                 DAC_INTENSET_EMPTY1_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_INTENSET_EMPTY1_Msk instead */
#define DAC_INTENSET_MASK                   _U_(0x0F)                                      /**< \deprecated (DAC_INTENSET) Register MASK  (Use DAC_INTENSET_Msk instead)  */
#define DAC_INTENSET_Msk                    _U_(0x0F)                                      /**< (DAC_INTENSET) Register Mask  */

#define DAC_INTENSET_UNDERRUN_Pos           0                                              /**< (DAC_INTENSET Position) Underrun Interrupt Enable for DAC x */
#define DAC_INTENSET_UNDERRUN_Msk           (_U_(0x3) << DAC_INTENSET_UNDERRUN_Pos)        /**< (DAC_INTENSET Mask) UNDERRUN */
#define DAC_INTENSET_UNDERRUN(value)        (DAC_INTENSET_UNDERRUN_Msk & ((value) << DAC_INTENSET_UNDERRUN_Pos))  
#define DAC_INTENSET_EMPTY_Pos              2                                              /**< (DAC_INTENSET Position) Data Buffer x Empty Interrupt Enable */
#define DAC_INTENSET_EMPTY_Msk              (_U_(0x3) << DAC_INTENSET_EMPTY_Pos)           /**< (DAC_INTENSET Mask) EMPTY */
#define DAC_INTENSET_EMPTY(value)           (DAC_INTENSET_EMPTY_Msk & ((value) << DAC_INTENSET_EMPTY_Pos))  

/* -------- DAC_INTFLAG : (DAC Offset: 0x06) (R/W 8) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t UNDERRUN0:1;               /**< bit:      0  DAC 0 Underrun                           */
    __I uint8_t UNDERRUN1:1;               /**< bit:      1  DAC 1 Underrun                           */
    __I uint8_t EMPTY0:1;                  /**< bit:      2  Data Buffer 0 Empty                      */
    __I uint8_t EMPTY1:1;                  /**< bit:      3  Data Buffer 1 Empty                      */
    __I uint8_t :4;                        /**< bit:   4..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    __I uint8_t UNDERRUN:2;                /**< bit:   0..1  DAC x Underrun                           */
    __I uint8_t EMPTY:2;                   /**< bit:   2..3  Data Buffer x Empty                      */
    __I uint8_t :4;                        /**< bit:   4..7 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint8_t  reg;                         /**< Type used for register access */
} DAC_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_INTFLAG_OFFSET                  (0x06)                                        /**<  (DAC_INTFLAG) Interrupt Flag Status and Clear  Offset */
#define DAC_INTFLAG_RESETVALUE              _U_(0x00)                                     /**<  (DAC_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define DAC_INTFLAG_UNDERRUN0_Pos           0                                              /**< (DAC_INTFLAG) DAC 0 Underrun Position */
#define DAC_INTFLAG_UNDERRUN0_Msk           (_U_(0x1) << DAC_INTFLAG_UNDERRUN0_Pos)        /**< (DAC_INTFLAG) DAC 0 Underrun Mask */
#define DAC_INTFLAG_UNDERRUN0               DAC_INTFLAG_UNDERRUN0_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_INTFLAG_UNDERRUN0_Msk instead */
#define DAC_INTFLAG_UNDERRUN1_Pos           1                                              /**< (DAC_INTFLAG) DAC 1 Underrun Position */
#define DAC_INTFLAG_UNDERRUN1_Msk           (_U_(0x1) << DAC_INTFLAG_UNDERRUN1_Pos)        /**< (DAC_INTFLAG) DAC 1 Underrun Mask */
#define DAC_INTFLAG_UNDERRUN1               DAC_INTFLAG_UNDERRUN1_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_INTFLAG_UNDERRUN1_Msk instead */
#define DAC_INTFLAG_EMPTY0_Pos              2                                              /**< (DAC_INTFLAG) Data Buffer 0 Empty Position */
#define DAC_INTFLAG_EMPTY0_Msk              (_U_(0x1) << DAC_INTFLAG_EMPTY0_Pos)           /**< (DAC_INTFLAG) Data Buffer 0 Empty Mask */
#define DAC_INTFLAG_EMPTY0                  DAC_INTFLAG_EMPTY0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_INTFLAG_EMPTY0_Msk instead */
#define DAC_INTFLAG_EMPTY1_Pos              3                                              /**< (DAC_INTFLAG) Data Buffer 1 Empty Position */
#define DAC_INTFLAG_EMPTY1_Msk              (_U_(0x1) << DAC_INTFLAG_EMPTY1_Pos)           /**< (DAC_INTFLAG) Data Buffer 1 Empty Mask */
#define DAC_INTFLAG_EMPTY1                  DAC_INTFLAG_EMPTY1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_INTFLAG_EMPTY1_Msk instead */
#define DAC_INTFLAG_MASK                    _U_(0x0F)                                      /**< \deprecated (DAC_INTFLAG) Register MASK  (Use DAC_INTFLAG_Msk instead)  */
#define DAC_INTFLAG_Msk                     _U_(0x0F)                                      /**< (DAC_INTFLAG) Register Mask  */

#define DAC_INTFLAG_UNDERRUN_Pos            0                                              /**< (DAC_INTFLAG Position) DAC x Underrun */
#define DAC_INTFLAG_UNDERRUN_Msk            (_U_(0x3) << DAC_INTFLAG_UNDERRUN_Pos)         /**< (DAC_INTFLAG Mask) UNDERRUN */
#define DAC_INTFLAG_UNDERRUN(value)         (DAC_INTFLAG_UNDERRUN_Msk & ((value) << DAC_INTFLAG_UNDERRUN_Pos))  
#define DAC_INTFLAG_EMPTY_Pos               2                                              /**< (DAC_INTFLAG Position) Data Buffer x Empty */
#define DAC_INTFLAG_EMPTY_Msk               (_U_(0x3) << DAC_INTFLAG_EMPTY_Pos)            /**< (DAC_INTFLAG Mask) EMPTY */
#define DAC_INTFLAG_EMPTY(value)            (DAC_INTFLAG_EMPTY_Msk & ((value) << DAC_INTFLAG_EMPTY_Pos))  

/* -------- DAC_STATUS : (DAC Offset: 0x07) (R/ 8) Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  READY0:1;                  /**< bit:      0  DAC 0 Startup Ready                      */
    uint8_t  READY1:1;                  /**< bit:      1  DAC 1 Startup Ready                      */
    uint8_t  EOC0:1;                    /**< bit:      2  DAC 0 End of Conversion                  */
    uint8_t  EOC1:1;                    /**< bit:      3  DAC 1 End of Conversion                  */
    uint8_t  :4;                        /**< bit:   4..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint8_t  READY:2;                   /**< bit:   0..1  DAC x Startup Ready                      */
    uint8_t  EOC:2;                     /**< bit:   2..3  DAC x End of Conversion                  */
    uint8_t  :4;                        /**< bit:   4..7 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint8_t  reg;                         /**< Type used for register access */
} DAC_STATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_STATUS_OFFSET                   (0x07)                                        /**<  (DAC_STATUS) Status  Offset */
#define DAC_STATUS_RESETVALUE               _U_(0x00)                                     /**<  (DAC_STATUS) Status  Reset Value */

#define DAC_STATUS_READY0_Pos               0                                              /**< (DAC_STATUS) DAC 0 Startup Ready Position */
#define DAC_STATUS_READY0_Msk               (_U_(0x1) << DAC_STATUS_READY0_Pos)            /**< (DAC_STATUS) DAC 0 Startup Ready Mask */
#define DAC_STATUS_READY0                   DAC_STATUS_READY0_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_STATUS_READY0_Msk instead */
#define DAC_STATUS_READY1_Pos               1                                              /**< (DAC_STATUS) DAC 1 Startup Ready Position */
#define DAC_STATUS_READY1_Msk               (_U_(0x1) << DAC_STATUS_READY1_Pos)            /**< (DAC_STATUS) DAC 1 Startup Ready Mask */
#define DAC_STATUS_READY1                   DAC_STATUS_READY1_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_STATUS_READY1_Msk instead */
#define DAC_STATUS_EOC0_Pos                 2                                              /**< (DAC_STATUS) DAC 0 End of Conversion Position */
#define DAC_STATUS_EOC0_Msk                 (_U_(0x1) << DAC_STATUS_EOC0_Pos)              /**< (DAC_STATUS) DAC 0 End of Conversion Mask */
#define DAC_STATUS_EOC0                     DAC_STATUS_EOC0_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_STATUS_EOC0_Msk instead */
#define DAC_STATUS_EOC1_Pos                 3                                              /**< (DAC_STATUS) DAC 1 End of Conversion Position */
#define DAC_STATUS_EOC1_Msk                 (_U_(0x1) << DAC_STATUS_EOC1_Pos)              /**< (DAC_STATUS) DAC 1 End of Conversion Mask */
#define DAC_STATUS_EOC1                     DAC_STATUS_EOC1_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_STATUS_EOC1_Msk instead */
#define DAC_STATUS_MASK                     _U_(0x0F)                                      /**< \deprecated (DAC_STATUS) Register MASK  (Use DAC_STATUS_Msk instead)  */
#define DAC_STATUS_Msk                      _U_(0x0F)                                      /**< (DAC_STATUS) Register Mask  */

#define DAC_STATUS_READY_Pos                0                                              /**< (DAC_STATUS Position) DAC x Startup Ready */
#define DAC_STATUS_READY_Msk                (_U_(0x3) << DAC_STATUS_READY_Pos)             /**< (DAC_STATUS Mask) READY */
#define DAC_STATUS_READY(value)             (DAC_STATUS_READY_Msk & ((value) << DAC_STATUS_READY_Pos))  
#define DAC_STATUS_EOC_Pos                  2                                              /**< (DAC_STATUS Position) DAC x End of Conversion */
#define DAC_STATUS_EOC_Msk                  (_U_(0x3) << DAC_STATUS_EOC_Pos)               /**< (DAC_STATUS Mask) EOC */
#define DAC_STATUS_EOC(value)               (DAC_STATUS_EOC_Msk & ((value) << DAC_STATUS_EOC_Pos))  

/* -------- DAC_SYNCBUSY : (DAC Offset: 0x08) (R/ 32) Synchronization Busy -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint32_t ENABLE:1;                  /**< bit:      1  DAC Enable Status                        */
    uint32_t DATA0:1;                   /**< bit:      2  Data DAC 0                               */
    uint32_t DATA1:1;                   /**< bit:      3  Data DAC 1                               */
    uint32_t DATABUF0:1;                /**< bit:      4  Data Buffer DAC 0                        */
    uint32_t DATABUF1:1;                /**< bit:      5  Data Buffer DAC 1                        */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t DATA:2;                    /**< bit:   2..3  Data DAC x                               */
    uint32_t DATABUF:2;                 /**< bit:   4..5  Data Buffer DAC x                        */
    uint32_t :26;                       /**< bit:  6..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} DAC_SYNCBUSY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_SYNCBUSY_OFFSET                 (0x08)                                        /**<  (DAC_SYNCBUSY) Synchronization Busy  Offset */
#define DAC_SYNCBUSY_RESETVALUE             _U_(0x00)                                     /**<  (DAC_SYNCBUSY) Synchronization Busy  Reset Value */

#define DAC_SYNCBUSY_SWRST_Pos              0                                              /**< (DAC_SYNCBUSY) Software Reset Position */
#define DAC_SYNCBUSY_SWRST_Msk              (_U_(0x1) << DAC_SYNCBUSY_SWRST_Pos)           /**< (DAC_SYNCBUSY) Software Reset Mask */
#define DAC_SYNCBUSY_SWRST                  DAC_SYNCBUSY_SWRST_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_SYNCBUSY_SWRST_Msk instead */
#define DAC_SYNCBUSY_ENABLE_Pos             1                                              /**< (DAC_SYNCBUSY) DAC Enable Status Position */
#define DAC_SYNCBUSY_ENABLE_Msk             (_U_(0x1) << DAC_SYNCBUSY_ENABLE_Pos)          /**< (DAC_SYNCBUSY) DAC Enable Status Mask */
#define DAC_SYNCBUSY_ENABLE                 DAC_SYNCBUSY_ENABLE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_SYNCBUSY_ENABLE_Msk instead */
#define DAC_SYNCBUSY_DATA0_Pos              2                                              /**< (DAC_SYNCBUSY) Data DAC 0 Position */
#define DAC_SYNCBUSY_DATA0_Msk              (_U_(0x1) << DAC_SYNCBUSY_DATA0_Pos)           /**< (DAC_SYNCBUSY) Data DAC 0 Mask */
#define DAC_SYNCBUSY_DATA0                  DAC_SYNCBUSY_DATA0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_SYNCBUSY_DATA0_Msk instead */
#define DAC_SYNCBUSY_DATA1_Pos              3                                              /**< (DAC_SYNCBUSY) Data DAC 1 Position */
#define DAC_SYNCBUSY_DATA1_Msk              (_U_(0x1) << DAC_SYNCBUSY_DATA1_Pos)           /**< (DAC_SYNCBUSY) Data DAC 1 Mask */
#define DAC_SYNCBUSY_DATA1                  DAC_SYNCBUSY_DATA1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_SYNCBUSY_DATA1_Msk instead */
#define DAC_SYNCBUSY_DATABUF0_Pos           4                                              /**< (DAC_SYNCBUSY) Data Buffer DAC 0 Position */
#define DAC_SYNCBUSY_DATABUF0_Msk           (_U_(0x1) << DAC_SYNCBUSY_DATABUF0_Pos)        /**< (DAC_SYNCBUSY) Data Buffer DAC 0 Mask */
#define DAC_SYNCBUSY_DATABUF0               DAC_SYNCBUSY_DATABUF0_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_SYNCBUSY_DATABUF0_Msk instead */
#define DAC_SYNCBUSY_DATABUF1_Pos           5                                              /**< (DAC_SYNCBUSY) Data Buffer DAC 1 Position */
#define DAC_SYNCBUSY_DATABUF1_Msk           (_U_(0x1) << DAC_SYNCBUSY_DATABUF1_Pos)        /**< (DAC_SYNCBUSY) Data Buffer DAC 1 Mask */
#define DAC_SYNCBUSY_DATABUF1               DAC_SYNCBUSY_DATABUF1_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_SYNCBUSY_DATABUF1_Msk instead */
#define DAC_SYNCBUSY_MASK                   _U_(0x3F)                                      /**< \deprecated (DAC_SYNCBUSY) Register MASK  (Use DAC_SYNCBUSY_Msk instead)  */
#define DAC_SYNCBUSY_Msk                    _U_(0x3F)                                      /**< (DAC_SYNCBUSY) Register Mask  */

#define DAC_SYNCBUSY_DATA_Pos               2                                              /**< (DAC_SYNCBUSY Position) Data DAC x */
#define DAC_SYNCBUSY_DATA_Msk               (_U_(0x3) << DAC_SYNCBUSY_DATA_Pos)            /**< (DAC_SYNCBUSY Mask) DATA */
#define DAC_SYNCBUSY_DATA(value)            (DAC_SYNCBUSY_DATA_Msk & ((value) << DAC_SYNCBUSY_DATA_Pos))  
#define DAC_SYNCBUSY_DATABUF_Pos            4                                              /**< (DAC_SYNCBUSY Position) Data Buffer DAC x */
#define DAC_SYNCBUSY_DATABUF_Msk            (_U_(0x3) << DAC_SYNCBUSY_DATABUF_Pos)         /**< (DAC_SYNCBUSY Mask) DATABUF */
#define DAC_SYNCBUSY_DATABUF(value)         (DAC_SYNCBUSY_DATABUF_Msk & ((value) << DAC_SYNCBUSY_DATABUF_Pos))  

/* -------- DAC_DACCTRL : (DAC Offset: 0x0c) (R/W 16) DAC n Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t LEFTADJ:1;                 /**< bit:      0  Left Adjusted Data                       */
    uint16_t ENABLE:1;                  /**< bit:      1  Enable DAC0                              */
    uint16_t CCTRL:2;                   /**< bit:   2..3  Current Control                          */
    uint16_t :2;                        /**< bit:   4..5  Reserved */
    uint16_t RUNSTDBY:1;                /**< bit:      6  Run in Standby                           */
    uint16_t DITHER:1;                  /**< bit:      7  Dithering Mode                           */
    uint16_t REFRESH:4;                 /**< bit:  8..11  Refresh period                           */
    uint16_t :4;                        /**< bit: 12..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} DAC_DACCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_DACCTRL_OFFSET                  (0x0C)                                        /**<  (DAC_DACCTRL) DAC n Control  Offset */
#define DAC_DACCTRL_RESETVALUE              _U_(0x00)                                     /**<  (DAC_DACCTRL) DAC n Control  Reset Value */

#define DAC_DACCTRL_LEFTADJ_Pos             0                                              /**< (DAC_DACCTRL) Left Adjusted Data Position */
#define DAC_DACCTRL_LEFTADJ_Msk             (_U_(0x1) << DAC_DACCTRL_LEFTADJ_Pos)          /**< (DAC_DACCTRL) Left Adjusted Data Mask */
#define DAC_DACCTRL_LEFTADJ                 DAC_DACCTRL_LEFTADJ_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_DACCTRL_LEFTADJ_Msk instead */
#define DAC_DACCTRL_ENABLE_Pos              1                                              /**< (DAC_DACCTRL) Enable DAC0 Position */
#define DAC_DACCTRL_ENABLE_Msk              (_U_(0x1) << DAC_DACCTRL_ENABLE_Pos)           /**< (DAC_DACCTRL) Enable DAC0 Mask */
#define DAC_DACCTRL_ENABLE                  DAC_DACCTRL_ENABLE_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_DACCTRL_ENABLE_Msk instead */
#define DAC_DACCTRL_CCTRL_Pos               2                                              /**< (DAC_DACCTRL) Current Control Position */
#define DAC_DACCTRL_CCTRL_Msk               (_U_(0x3) << DAC_DACCTRL_CCTRL_Pos)            /**< (DAC_DACCTRL) Current Control Mask */
#define DAC_DACCTRL_CCTRL(value)            (DAC_DACCTRL_CCTRL_Msk & ((value) << DAC_DACCTRL_CCTRL_Pos))
#define   DAC_DACCTRL_CCTRL_CC100K_Val      _U_(0x0)                                       /**< (DAC_DACCTRL) GCLK_DAC <= 1.2MHz (100kSPS)  */
#define   DAC_DACCTRL_CCTRL_CC1M_Val        _U_(0x1)                                       /**< (DAC_DACCTRL) 1.2MHz < GCLK_DAC <= 6MHz (500kSPS)  */
#define   DAC_DACCTRL_CCTRL_CC12M_Val       _U_(0x2)                                       /**< (DAC_DACCTRL) 6MHz < GCLK_DAC <=12MHz (1MSPS)  */
#define DAC_DACCTRL_CCTRL_CC100K            (DAC_DACCTRL_CCTRL_CC100K_Val << DAC_DACCTRL_CCTRL_Pos)  /**< (DAC_DACCTRL) GCLK_DAC <= 1.2MHz (100kSPS) Position  */
#define DAC_DACCTRL_CCTRL_CC1M              (DAC_DACCTRL_CCTRL_CC1M_Val << DAC_DACCTRL_CCTRL_Pos)  /**< (DAC_DACCTRL) 1.2MHz < GCLK_DAC <= 6MHz (500kSPS) Position  */
#define DAC_DACCTRL_CCTRL_CC12M             (DAC_DACCTRL_CCTRL_CC12M_Val << DAC_DACCTRL_CCTRL_Pos)  /**< (DAC_DACCTRL) 6MHz < GCLK_DAC <=12MHz (1MSPS) Position  */
#define DAC_DACCTRL_RUNSTDBY_Pos            6                                              /**< (DAC_DACCTRL) Run in Standby Position */
#define DAC_DACCTRL_RUNSTDBY_Msk            (_U_(0x1) << DAC_DACCTRL_RUNSTDBY_Pos)         /**< (DAC_DACCTRL) Run in Standby Mask */
#define DAC_DACCTRL_RUNSTDBY                DAC_DACCTRL_RUNSTDBY_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_DACCTRL_RUNSTDBY_Msk instead */
#define DAC_DACCTRL_DITHER_Pos              7                                              /**< (DAC_DACCTRL) Dithering Mode Position */
#define DAC_DACCTRL_DITHER_Msk              (_U_(0x1) << DAC_DACCTRL_DITHER_Pos)           /**< (DAC_DACCTRL) Dithering Mode Mask */
#define DAC_DACCTRL_DITHER                  DAC_DACCTRL_DITHER_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_DACCTRL_DITHER_Msk instead */
#define DAC_DACCTRL_REFRESH_Pos             8                                              /**< (DAC_DACCTRL) Refresh period Position */
#define DAC_DACCTRL_REFRESH_Msk             (_U_(0xF) << DAC_DACCTRL_REFRESH_Pos)          /**< (DAC_DACCTRL) Refresh period Mask */
#define DAC_DACCTRL_REFRESH(value)          (DAC_DACCTRL_REFRESH_Msk & ((value) << DAC_DACCTRL_REFRESH_Pos))
#define   DAC_DACCTRL_REFRESH_REFRESH_0_Val _U_(0x0)                                       /**< (DAC_DACCTRL) Do not Refresh  */
#define   DAC_DACCTRL_REFRESH_REFRESH_2_Val _U_(0x2)                                       /**< (DAC_DACCTRL) Refresh every 60US  */
#define   DAC_DACCTRL_REFRESH_REFRESH_3_Val _U_(0x3)                                       /**< (DAC_DACCTRL) Refresh every 90US  */
#define   DAC_DACCTRL_REFRESH_REFRESH_4_Val _U_(0x4)                                       /**< (DAC_DACCTRL) Refresh every 120US  */
#define   DAC_DACCTRL_REFRESH_REFRESH_5_Val _U_(0x5)                                       /**< (DAC_DACCTRL) Refresh every 150US  */
#define   DAC_DACCTRL_REFRESH_REFRESH_6_Val _U_(0x6)                                       /**< (DAC_DACCTRL) Refresh every 180US  */
#define   DAC_DACCTRL_REFRESH_REFRESH_7_Val _U_(0x7)                                       /**< (DAC_DACCTRL) Refresh every 210US  */
#define   DAC_DACCTRL_REFRESH_REFRESH_8_Val _U_(0x8)                                       /**< (DAC_DACCTRL) Refresh every 240US  */
#define   DAC_DACCTRL_REFRESH_REFRESH_9_Val _U_(0x9)                                       /**< (DAC_DACCTRL) Refresh every 270US  */
#define   DAC_DACCTRL_REFRESH_REFRESH_10_Val _U_(0xA)                                       /**< (DAC_DACCTRL) Refresh every 300US  */
#define   DAC_DACCTRL_REFRESH_REFRESH_11_Val _U_(0xB)                                       /**< (DAC_DACCTRL) Refresh every 330US  */
#define   DAC_DACCTRL_REFRESH_REFRESH_12_Val _U_(0xC)                                       /**< (DAC_DACCTRL) Refresh every 360US  */
#define   DAC_DACCTRL_REFRESH_REFRESH_13_Val _U_(0xD)                                       /**< (DAC_DACCTRL) Refresh every 390US  */
#define   DAC_DACCTRL_REFRESH_REFRESH_14_Val _U_(0xE)                                       /**< (DAC_DACCTRL) Refresh every 420US  */
#define   DAC_DACCTRL_REFRESH_REFRESH_15_Val _U_(0xF)                                       /**< (DAC_DACCTRL) Refresh every 450US  */
#define DAC_DACCTRL_REFRESH_REFRESH_0       (DAC_DACCTRL_REFRESH_REFRESH_0_Val << DAC_DACCTRL_REFRESH_Pos)  /**< (DAC_DACCTRL) Do not Refresh Position  */
#define DAC_DACCTRL_REFRESH_REFRESH_2       (DAC_DACCTRL_REFRESH_REFRESH_2_Val << DAC_DACCTRL_REFRESH_Pos)  /**< (DAC_DACCTRL) Refresh every 60US Position  */
#define DAC_DACCTRL_REFRESH_REFRESH_3       (DAC_DACCTRL_REFRESH_REFRESH_3_Val << DAC_DACCTRL_REFRESH_Pos)  /**< (DAC_DACCTRL) Refresh every 90US Position  */
#define DAC_DACCTRL_REFRESH_REFRESH_4       (DAC_DACCTRL_REFRESH_REFRESH_4_Val << DAC_DACCTRL_REFRESH_Pos)  /**< (DAC_DACCTRL) Refresh every 120US Position  */
#define DAC_DACCTRL_REFRESH_REFRESH_5       (DAC_DACCTRL_REFRESH_REFRESH_5_Val << DAC_DACCTRL_REFRESH_Pos)  /**< (DAC_DACCTRL) Refresh every 150US Position  */
#define DAC_DACCTRL_REFRESH_REFRESH_6       (DAC_DACCTRL_REFRESH_REFRESH_6_Val << DAC_DACCTRL_REFRESH_Pos)  /**< (DAC_DACCTRL) Refresh every 180US Position  */
#define DAC_DACCTRL_REFRESH_REFRESH_7       (DAC_DACCTRL_REFRESH_REFRESH_7_Val << DAC_DACCTRL_REFRESH_Pos)  /**< (DAC_DACCTRL) Refresh every 210US Position  */
#define DAC_DACCTRL_REFRESH_REFRESH_8       (DAC_DACCTRL_REFRESH_REFRESH_8_Val << DAC_DACCTRL_REFRESH_Pos)  /**< (DAC_DACCTRL) Refresh every 240US Position  */
#define DAC_DACCTRL_REFRESH_REFRESH_9       (DAC_DACCTRL_REFRESH_REFRESH_9_Val << DAC_DACCTRL_REFRESH_Pos)  /**< (DAC_DACCTRL) Refresh every 270US Position  */
#define DAC_DACCTRL_REFRESH_REFRESH_10      (DAC_DACCTRL_REFRESH_REFRESH_10_Val << DAC_DACCTRL_REFRESH_Pos)  /**< (DAC_DACCTRL) Refresh every 300US Position  */
#define DAC_DACCTRL_REFRESH_REFRESH_11      (DAC_DACCTRL_REFRESH_REFRESH_11_Val << DAC_DACCTRL_REFRESH_Pos)  /**< (DAC_DACCTRL) Refresh every 330US Position  */
#define DAC_DACCTRL_REFRESH_REFRESH_12      (DAC_DACCTRL_REFRESH_REFRESH_12_Val << DAC_DACCTRL_REFRESH_Pos)  /**< (DAC_DACCTRL) Refresh every 360US Position  */
#define DAC_DACCTRL_REFRESH_REFRESH_13      (DAC_DACCTRL_REFRESH_REFRESH_13_Val << DAC_DACCTRL_REFRESH_Pos)  /**< (DAC_DACCTRL) Refresh every 390US Position  */
#define DAC_DACCTRL_REFRESH_REFRESH_14      (DAC_DACCTRL_REFRESH_REFRESH_14_Val << DAC_DACCTRL_REFRESH_Pos)  /**< (DAC_DACCTRL) Refresh every 420US Position  */
#define DAC_DACCTRL_REFRESH_REFRESH_15      (DAC_DACCTRL_REFRESH_REFRESH_15_Val << DAC_DACCTRL_REFRESH_Pos)  /**< (DAC_DACCTRL) Refresh every 450US Position  */
#define DAC_DACCTRL_MASK                    _U_(0xFCF)                                     /**< \deprecated (DAC_DACCTRL) Register MASK  (Use DAC_DACCTRL_Msk instead)  */
#define DAC_DACCTRL_Msk                     _U_(0xFCF)                                     /**< (DAC_DACCTRL) Register Mask  */


/* -------- DAC_DATA : (DAC Offset: 0x10) (/W 16) DAC n Data -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t DATA:16;                   /**< bit:  0..15  DAC0 Data                                */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} DAC_DATA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_DATA_OFFSET                     (0x10)                                        /**<  (DAC_DATA) DAC n Data  Offset */
#define DAC_DATA_RESETVALUE                 _U_(0x00)                                     /**<  (DAC_DATA) DAC n Data  Reset Value */

#define DAC_DATA_DATA_Pos                   0                                              /**< (DAC_DATA) DAC0 Data Position */
#define DAC_DATA_DATA_Msk                   (_U_(0xFFFF) << DAC_DATA_DATA_Pos)             /**< (DAC_DATA) DAC0 Data Mask */
#define DAC_DATA_DATA(value)                (DAC_DATA_DATA_Msk & ((value) << DAC_DATA_DATA_Pos))
#define DAC_DATA_MASK                       _U_(0xFFFF)                                    /**< \deprecated (DAC_DATA) Register MASK  (Use DAC_DATA_Msk instead)  */
#define DAC_DATA_Msk                        _U_(0xFFFF)                                    /**< (DAC_DATA) Register Mask  */


/* -------- DAC_DATABUF : (DAC Offset: 0x14) (/W 16) DAC n Data Buffer -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t DATABUF:16;                /**< bit:  0..15  DAC0 Data Buffer                         */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} DAC_DATABUF_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_DATABUF_OFFSET                  (0x14)                                        /**<  (DAC_DATABUF) DAC n Data Buffer  Offset */
#define DAC_DATABUF_RESETVALUE              _U_(0x00)                                     /**<  (DAC_DATABUF) DAC n Data Buffer  Reset Value */

#define DAC_DATABUF_DATABUF_Pos             0                                              /**< (DAC_DATABUF) DAC0 Data Buffer Position */
#define DAC_DATABUF_DATABUF_Msk             (_U_(0xFFFF) << DAC_DATABUF_DATABUF_Pos)       /**< (DAC_DATABUF) DAC0 Data Buffer Mask */
#define DAC_DATABUF_DATABUF(value)          (DAC_DATABUF_DATABUF_Msk & ((value) << DAC_DATABUF_DATABUF_Pos))
#define DAC_DATABUF_MASK                    _U_(0xFFFF)                                    /**< \deprecated (DAC_DATABUF) Register MASK  (Use DAC_DATABUF_Msk instead)  */
#define DAC_DATABUF_Msk                     _U_(0xFFFF)                                    /**< (DAC_DATABUF) Register Mask  */


/* -------- DAC_DBGCTRL : (DAC Offset: 0x18) (R/W 8) Debug Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DBGRUN:1;                  /**< bit:      0  Debug Run                                */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} DAC_DBGCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DAC_DBGCTRL_OFFSET                  (0x18)                                        /**<  (DAC_DBGCTRL) Debug Control  Offset */
#define DAC_DBGCTRL_RESETVALUE              _U_(0x00)                                     /**<  (DAC_DBGCTRL) Debug Control  Reset Value */

#define DAC_DBGCTRL_DBGRUN_Pos              0                                              /**< (DAC_DBGCTRL) Debug Run Position */
#define DAC_DBGCTRL_DBGRUN_Msk              (_U_(0x1) << DAC_DBGCTRL_DBGRUN_Pos)           /**< (DAC_DBGCTRL) Debug Run Mask */
#define DAC_DBGCTRL_DBGRUN                  DAC_DBGCTRL_DBGRUN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use DAC_DBGCTRL_DBGRUN_Msk instead */
#define DAC_DBGCTRL_MASK                    _U_(0x01)                                      /**< \deprecated (DAC_DBGCTRL) Register MASK  (Use DAC_DBGCTRL_Msk instead)  */
#define DAC_DBGCTRL_Msk                     _U_(0x01)                                      /**< (DAC_DBGCTRL) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief DAC hardware registers */
typedef struct {  /* Digital-to-Analog Converter */
  __IO uint8_t CTRLA;          /**< (DAC Offset: 0x00) Control A */
  __IO uint8_t CTRLB;          /**< (DAC Offset: 0x01) Control B */
  __IO uint8_t EVCTRL;         /**< (DAC Offset: 0x02) Event Control */
  __I  uint8_t                        Reserved1[1];
  __IO uint8_t INTENCLR;       /**< (DAC Offset: 0x04) Interrupt Enable Clear */
  __IO uint8_t INTENSET;       /**< (DAC Offset: 0x05) Interrupt Enable Set */
  __IO uint8_t INTFLAG;        /**< (DAC Offset: 0x06) Interrupt Flag Status and Clear */
  __I  uint8_t STATUS;         /**< (DAC Offset: 0x07) Status */
  __I  uint32_t SYNCBUSY;       /**< (DAC Offset: 0x08) Synchronization Busy */
  __IO uint16_t DACCTRL[2];     /**< (DAC Offset: 0x0C) DAC n Control */
  __O  uint16_t DATA[2];        /**< (DAC Offset: 0x10) DAC n Data */
  __O  uint16_t DATABUF[2];     /**< (DAC Offset: 0x14) DAC n Data Buffer */
  __IO uint8_t DBGCTRL;        /**< (DAC Offset: 0x18) Debug Control */
} Dac;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief DAC hardware registers */
typedef struct {  /* Digital-to-Analog Converter */
  __IO DAC_CTRLA_Type                 CTRLA;          /**< Offset: 0x00 (R/W   8) Control A */
  __IO DAC_CTRLB_Type                 CTRLB;          /**< Offset: 0x01 (R/W   8) Control B */
  __IO DAC_EVCTRL_Type                EVCTRL;         /**< Offset: 0x02 (R/W   8) Event Control */
  __I  uint8_t                        Reserved1[1];
  __IO DAC_INTENCLR_Type              INTENCLR;       /**< Offset: 0x04 (R/W   8) Interrupt Enable Clear */
  __IO DAC_INTENSET_Type              INTENSET;       /**< Offset: 0x05 (R/W   8) Interrupt Enable Set */
  __IO DAC_INTFLAG_Type               INTFLAG;        /**< Offset: 0x06 (R/W   8) Interrupt Flag Status and Clear */
  __I  DAC_STATUS_Type                STATUS;         /**< Offset: 0x07 (R/    8) Status */
  __I  DAC_SYNCBUSY_Type              SYNCBUSY;       /**< Offset: 0x08 (R/   32) Synchronization Busy */
  __IO DAC_DACCTRL_Type               DACCTRL[2];     /**< Offset: 0x0C (R/W  16) DAC n Control */
  __O  DAC_DATA_Type                  DATA[2];        /**< Offset: 0x10 ( /W  16) DAC n Data */
  __O  DAC_DATABUF_Type               DATABUF[2];     /**< Offset: 0x14 ( /W  16) DAC n Data Buffer */
  __IO DAC_DBGCTRL_Type               DBGCTRL;        /**< Offset: 0x18 (R/W   8) Debug Control */
} Dac;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  b'end of Digital-to-Analog Converter' */

#endif /* _WLR089_DAC_COMPONENT_H_ */
