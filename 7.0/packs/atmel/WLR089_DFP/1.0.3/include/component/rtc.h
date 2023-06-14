/**
 * \brief Component description for RTC
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
#ifndef _WLR089_RTC_COMPONENT_H_
#define _WLR089_RTC_COMPONENT_H_
#define _WLR089_RTC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup WLR089_RTC b'Real-Time Counter'
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR RTC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define RTC_U2250                      /**< (RTC) Module ID */
#define REV_RTC 0x110                  /**< (RTC) Module revision */

/* -------- RTC_MODE0_CTRLA : (RTC Offset: 0x00) (R/W 16) MODE0 Control A -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint16_t ENABLE:1;                  /**< bit:      1  Enable                                   */
    uint16_t MODE:2;                    /**< bit:   2..3  Operating Mode                           */
    uint16_t :3;                        /**< bit:   4..6  Reserved */
    uint16_t MATCHCLR:1;                /**< bit:      7  Clear on Match                           */
    uint16_t PRESCALER:4;               /**< bit:  8..11  Prescaler                                */
    uint16_t :3;                        /**< bit: 12..14  Reserved */
    uint16_t COUNTSYNC:1;               /**< bit:     15  Count Read Synchronization Enable        */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} RTC_MODE0_CTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE0_CTRLA_OFFSET              (0x00)                                        /**<  (RTC_MODE0_CTRLA) MODE0 Control A  Offset */
#define RTC_MODE0_CTRLA_RESETVALUE          _U_(0x00)                                     /**<  (RTC_MODE0_CTRLA) MODE0 Control A  Reset Value */

#define RTC_MODE0_CTRLA_SWRST_Pos           0                                              /**< (RTC_MODE0_CTRLA) Software Reset Position */
#define RTC_MODE0_CTRLA_SWRST_Msk           (_U_(0x1) << RTC_MODE0_CTRLA_SWRST_Pos)        /**< (RTC_MODE0_CTRLA) Software Reset Mask */
#define RTC_MODE0_CTRLA_SWRST               RTC_MODE0_CTRLA_SWRST_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_CTRLA_SWRST_Msk instead */
#define RTC_MODE0_CTRLA_ENABLE_Pos          1                                              /**< (RTC_MODE0_CTRLA) Enable Position */
#define RTC_MODE0_CTRLA_ENABLE_Msk          (_U_(0x1) << RTC_MODE0_CTRLA_ENABLE_Pos)       /**< (RTC_MODE0_CTRLA) Enable Mask */
#define RTC_MODE0_CTRLA_ENABLE              RTC_MODE0_CTRLA_ENABLE_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_CTRLA_ENABLE_Msk instead */
#define RTC_MODE0_CTRLA_MODE_Pos            2                                              /**< (RTC_MODE0_CTRLA) Operating Mode Position */
#define RTC_MODE0_CTRLA_MODE_Msk            (_U_(0x3) << RTC_MODE0_CTRLA_MODE_Pos)         /**< (RTC_MODE0_CTRLA) Operating Mode Mask */
#define RTC_MODE0_CTRLA_MODE(value)         (RTC_MODE0_CTRLA_MODE_Msk & ((value) << RTC_MODE0_CTRLA_MODE_Pos))
#define   RTC_MODE0_CTRLA_MODE_COUNT32_Val  _U_(0x0)                                       /**< (RTC_MODE0_CTRLA) Mode 0: 32-bit Counter  */
#define   RTC_MODE0_CTRLA_MODE_COUNT16_Val  _U_(0x1)                                       /**< (RTC_MODE0_CTRLA) Mode 1: 16-bit Counter  */
#define   RTC_MODE0_CTRLA_MODE_CLOCK_Val    _U_(0x2)                                       /**< (RTC_MODE0_CTRLA) Mode 2: Clock/Calendar  */
#define RTC_MODE0_CTRLA_MODE_COUNT32        (RTC_MODE0_CTRLA_MODE_COUNT32_Val << RTC_MODE0_CTRLA_MODE_Pos)  /**< (RTC_MODE0_CTRLA) Mode 0: 32-bit Counter Position  */
#define RTC_MODE0_CTRLA_MODE_COUNT16        (RTC_MODE0_CTRLA_MODE_COUNT16_Val << RTC_MODE0_CTRLA_MODE_Pos)  /**< (RTC_MODE0_CTRLA) Mode 1: 16-bit Counter Position  */
#define RTC_MODE0_CTRLA_MODE_CLOCK          (RTC_MODE0_CTRLA_MODE_CLOCK_Val << RTC_MODE0_CTRLA_MODE_Pos)  /**< (RTC_MODE0_CTRLA) Mode 2: Clock/Calendar Position  */
#define RTC_MODE0_CTRLA_MATCHCLR_Pos        7                                              /**< (RTC_MODE0_CTRLA) Clear on Match Position */
#define RTC_MODE0_CTRLA_MATCHCLR_Msk        (_U_(0x1) << RTC_MODE0_CTRLA_MATCHCLR_Pos)     /**< (RTC_MODE0_CTRLA) Clear on Match Mask */
#define RTC_MODE0_CTRLA_MATCHCLR            RTC_MODE0_CTRLA_MATCHCLR_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_CTRLA_MATCHCLR_Msk instead */
#define RTC_MODE0_CTRLA_PRESCALER_Pos       8                                              /**< (RTC_MODE0_CTRLA) Prescaler Position */
#define RTC_MODE0_CTRLA_PRESCALER_Msk       (_U_(0xF) << RTC_MODE0_CTRLA_PRESCALER_Pos)    /**< (RTC_MODE0_CTRLA) Prescaler Mask */
#define RTC_MODE0_CTRLA_PRESCALER(value)    (RTC_MODE0_CTRLA_PRESCALER_Msk & ((value) << RTC_MODE0_CTRLA_PRESCALER_Pos))
#define   RTC_MODE0_CTRLA_PRESCALER_OFF_Val _U_(0x0)                                       /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/1  */
#define   RTC_MODE0_CTRLA_PRESCALER_DIV1_Val _U_(0x1)                                       /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/1  */
#define   RTC_MODE0_CTRLA_PRESCALER_DIV2_Val _U_(0x2)                                       /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/2  */
#define   RTC_MODE0_CTRLA_PRESCALER_DIV4_Val _U_(0x3)                                       /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/4  */
#define   RTC_MODE0_CTRLA_PRESCALER_DIV8_Val _U_(0x4)                                       /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/8  */
#define   RTC_MODE0_CTRLA_PRESCALER_DIV16_Val _U_(0x5)                                       /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/16  */
#define   RTC_MODE0_CTRLA_PRESCALER_DIV32_Val _U_(0x6)                                       /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/32  */
#define   RTC_MODE0_CTRLA_PRESCALER_DIV64_Val _U_(0x7)                                       /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/64  */
#define   RTC_MODE0_CTRLA_PRESCALER_DIV128_Val _U_(0x8)                                       /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/128  */
#define   RTC_MODE0_CTRLA_PRESCALER_DIV256_Val _U_(0x9)                                       /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/256  */
#define   RTC_MODE0_CTRLA_PRESCALER_DIV512_Val _U_(0xA)                                       /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/512  */
#define   RTC_MODE0_CTRLA_PRESCALER_DIV1024_Val _U_(0xB)                                       /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/1024  */
#define RTC_MODE0_CTRLA_PRESCALER_OFF       (RTC_MODE0_CTRLA_PRESCALER_OFF_Val << RTC_MODE0_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/1 Position  */
#define RTC_MODE0_CTRLA_PRESCALER_DIV1      (RTC_MODE0_CTRLA_PRESCALER_DIV1_Val << RTC_MODE0_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/1 Position  */
#define RTC_MODE0_CTRLA_PRESCALER_DIV2      (RTC_MODE0_CTRLA_PRESCALER_DIV2_Val << RTC_MODE0_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/2 Position  */
#define RTC_MODE0_CTRLA_PRESCALER_DIV4      (RTC_MODE0_CTRLA_PRESCALER_DIV4_Val << RTC_MODE0_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/4 Position  */
#define RTC_MODE0_CTRLA_PRESCALER_DIV8      (RTC_MODE0_CTRLA_PRESCALER_DIV8_Val << RTC_MODE0_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/8 Position  */
#define RTC_MODE0_CTRLA_PRESCALER_DIV16     (RTC_MODE0_CTRLA_PRESCALER_DIV16_Val << RTC_MODE0_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/16 Position  */
#define RTC_MODE0_CTRLA_PRESCALER_DIV32     (RTC_MODE0_CTRLA_PRESCALER_DIV32_Val << RTC_MODE0_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/32 Position  */
#define RTC_MODE0_CTRLA_PRESCALER_DIV64     (RTC_MODE0_CTRLA_PRESCALER_DIV64_Val << RTC_MODE0_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/64 Position  */
#define RTC_MODE0_CTRLA_PRESCALER_DIV128    (RTC_MODE0_CTRLA_PRESCALER_DIV128_Val << RTC_MODE0_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/128 Position  */
#define RTC_MODE0_CTRLA_PRESCALER_DIV256    (RTC_MODE0_CTRLA_PRESCALER_DIV256_Val << RTC_MODE0_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/256 Position  */
#define RTC_MODE0_CTRLA_PRESCALER_DIV512    (RTC_MODE0_CTRLA_PRESCALER_DIV512_Val << RTC_MODE0_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/512 Position  */
#define RTC_MODE0_CTRLA_PRESCALER_DIV1024   (RTC_MODE0_CTRLA_PRESCALER_DIV1024_Val << RTC_MODE0_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE0_CTRLA) CLK_RTC_CNT = GCLK_RTC/1024 Position  */
#define RTC_MODE0_CTRLA_COUNTSYNC_Pos       15                                             /**< (RTC_MODE0_CTRLA) Count Read Synchronization Enable Position */
#define RTC_MODE0_CTRLA_COUNTSYNC_Msk       (_U_(0x1) << RTC_MODE0_CTRLA_COUNTSYNC_Pos)    /**< (RTC_MODE0_CTRLA) Count Read Synchronization Enable Mask */
#define RTC_MODE0_CTRLA_COUNTSYNC           RTC_MODE0_CTRLA_COUNTSYNC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_CTRLA_COUNTSYNC_Msk instead */
#define RTC_MODE0_CTRLA_MASK                _U_(0x8F8F)                                    /**< \deprecated (RTC_MODE0_CTRLA) Register MASK  (Use RTC_MODE0_CTRLA_Msk instead)  */
#define RTC_MODE0_CTRLA_Msk                 _U_(0x8F8F)                                    /**< (RTC_MODE0_CTRLA) Register Mask  */


/* -------- RTC_MODE1_CTRLA : (RTC Offset: 0x00) (R/W 16) MODE1 Control A -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint16_t ENABLE:1;                  /**< bit:      1  Enable                                   */
    uint16_t MODE:2;                    /**< bit:   2..3  Operating Mode                           */
    uint16_t :4;                        /**< bit:   4..7  Reserved */
    uint16_t PRESCALER:4;               /**< bit:  8..11  Prescaler                                */
    uint16_t :3;                        /**< bit: 12..14  Reserved */
    uint16_t COUNTSYNC:1;               /**< bit:     15  Count Read Synchronization Enable        */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} RTC_MODE1_CTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE1_CTRLA_OFFSET              (0x00)                                        /**<  (RTC_MODE1_CTRLA) MODE1 Control A  Offset */
#define RTC_MODE1_CTRLA_RESETVALUE          _U_(0x00)                                     /**<  (RTC_MODE1_CTRLA) MODE1 Control A  Reset Value */

#define RTC_MODE1_CTRLA_SWRST_Pos           0                                              /**< (RTC_MODE1_CTRLA) Software Reset Position */
#define RTC_MODE1_CTRLA_SWRST_Msk           (_U_(0x1) << RTC_MODE1_CTRLA_SWRST_Pos)        /**< (RTC_MODE1_CTRLA) Software Reset Mask */
#define RTC_MODE1_CTRLA_SWRST               RTC_MODE1_CTRLA_SWRST_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_CTRLA_SWRST_Msk instead */
#define RTC_MODE1_CTRLA_ENABLE_Pos          1                                              /**< (RTC_MODE1_CTRLA) Enable Position */
#define RTC_MODE1_CTRLA_ENABLE_Msk          (_U_(0x1) << RTC_MODE1_CTRLA_ENABLE_Pos)       /**< (RTC_MODE1_CTRLA) Enable Mask */
#define RTC_MODE1_CTRLA_ENABLE              RTC_MODE1_CTRLA_ENABLE_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_CTRLA_ENABLE_Msk instead */
#define RTC_MODE1_CTRLA_MODE_Pos            2                                              /**< (RTC_MODE1_CTRLA) Operating Mode Position */
#define RTC_MODE1_CTRLA_MODE_Msk            (_U_(0x3) << RTC_MODE1_CTRLA_MODE_Pos)         /**< (RTC_MODE1_CTRLA) Operating Mode Mask */
#define RTC_MODE1_CTRLA_MODE(value)         (RTC_MODE1_CTRLA_MODE_Msk & ((value) << RTC_MODE1_CTRLA_MODE_Pos))
#define   RTC_MODE1_CTRLA_MODE_COUNT32_Val  _U_(0x0)                                       /**< (RTC_MODE1_CTRLA) Mode 0: 32-bit Counter  */
#define   RTC_MODE1_CTRLA_MODE_COUNT16_Val  _U_(0x1)                                       /**< (RTC_MODE1_CTRLA) Mode 1: 16-bit Counter  */
#define   RTC_MODE1_CTRLA_MODE_CLOCK_Val    _U_(0x2)                                       /**< (RTC_MODE1_CTRLA) Mode 2: Clock/Calendar  */
#define RTC_MODE1_CTRLA_MODE_COUNT32        (RTC_MODE1_CTRLA_MODE_COUNT32_Val << RTC_MODE1_CTRLA_MODE_Pos)  /**< (RTC_MODE1_CTRLA) Mode 0: 32-bit Counter Position  */
#define RTC_MODE1_CTRLA_MODE_COUNT16        (RTC_MODE1_CTRLA_MODE_COUNT16_Val << RTC_MODE1_CTRLA_MODE_Pos)  /**< (RTC_MODE1_CTRLA) Mode 1: 16-bit Counter Position  */
#define RTC_MODE1_CTRLA_MODE_CLOCK          (RTC_MODE1_CTRLA_MODE_CLOCK_Val << RTC_MODE1_CTRLA_MODE_Pos)  /**< (RTC_MODE1_CTRLA) Mode 2: Clock/Calendar Position  */
#define RTC_MODE1_CTRLA_PRESCALER_Pos       8                                              /**< (RTC_MODE1_CTRLA) Prescaler Position */
#define RTC_MODE1_CTRLA_PRESCALER_Msk       (_U_(0xF) << RTC_MODE1_CTRLA_PRESCALER_Pos)    /**< (RTC_MODE1_CTRLA) Prescaler Mask */
#define RTC_MODE1_CTRLA_PRESCALER(value)    (RTC_MODE1_CTRLA_PRESCALER_Msk & ((value) << RTC_MODE1_CTRLA_PRESCALER_Pos))
#define   RTC_MODE1_CTRLA_PRESCALER_OFF_Val _U_(0x0)                                       /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/1  */
#define   RTC_MODE1_CTRLA_PRESCALER_DIV1_Val _U_(0x1)                                       /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/1  */
#define   RTC_MODE1_CTRLA_PRESCALER_DIV2_Val _U_(0x2)                                       /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/2  */
#define   RTC_MODE1_CTRLA_PRESCALER_DIV4_Val _U_(0x3)                                       /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/4  */
#define   RTC_MODE1_CTRLA_PRESCALER_DIV8_Val _U_(0x4)                                       /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/8  */
#define   RTC_MODE1_CTRLA_PRESCALER_DIV16_Val _U_(0x5)                                       /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/16  */
#define   RTC_MODE1_CTRLA_PRESCALER_DIV32_Val _U_(0x6)                                       /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/32  */
#define   RTC_MODE1_CTRLA_PRESCALER_DIV64_Val _U_(0x7)                                       /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/64  */
#define   RTC_MODE1_CTRLA_PRESCALER_DIV128_Val _U_(0x8)                                       /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/128  */
#define   RTC_MODE1_CTRLA_PRESCALER_DIV256_Val _U_(0x9)                                       /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/256  */
#define   RTC_MODE1_CTRLA_PRESCALER_DIV512_Val _U_(0xA)                                       /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/512  */
#define   RTC_MODE1_CTRLA_PRESCALER_DIV1024_Val _U_(0xB)                                       /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/1024  */
#define RTC_MODE1_CTRLA_PRESCALER_OFF       (RTC_MODE1_CTRLA_PRESCALER_OFF_Val << RTC_MODE1_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/1 Position  */
#define RTC_MODE1_CTRLA_PRESCALER_DIV1      (RTC_MODE1_CTRLA_PRESCALER_DIV1_Val << RTC_MODE1_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/1 Position  */
#define RTC_MODE1_CTRLA_PRESCALER_DIV2      (RTC_MODE1_CTRLA_PRESCALER_DIV2_Val << RTC_MODE1_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/2 Position  */
#define RTC_MODE1_CTRLA_PRESCALER_DIV4      (RTC_MODE1_CTRLA_PRESCALER_DIV4_Val << RTC_MODE1_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/4 Position  */
#define RTC_MODE1_CTRLA_PRESCALER_DIV8      (RTC_MODE1_CTRLA_PRESCALER_DIV8_Val << RTC_MODE1_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/8 Position  */
#define RTC_MODE1_CTRLA_PRESCALER_DIV16     (RTC_MODE1_CTRLA_PRESCALER_DIV16_Val << RTC_MODE1_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/16 Position  */
#define RTC_MODE1_CTRLA_PRESCALER_DIV32     (RTC_MODE1_CTRLA_PRESCALER_DIV32_Val << RTC_MODE1_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/32 Position  */
#define RTC_MODE1_CTRLA_PRESCALER_DIV64     (RTC_MODE1_CTRLA_PRESCALER_DIV64_Val << RTC_MODE1_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/64 Position  */
#define RTC_MODE1_CTRLA_PRESCALER_DIV128    (RTC_MODE1_CTRLA_PRESCALER_DIV128_Val << RTC_MODE1_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/128 Position  */
#define RTC_MODE1_CTRLA_PRESCALER_DIV256    (RTC_MODE1_CTRLA_PRESCALER_DIV256_Val << RTC_MODE1_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/256 Position  */
#define RTC_MODE1_CTRLA_PRESCALER_DIV512    (RTC_MODE1_CTRLA_PRESCALER_DIV512_Val << RTC_MODE1_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/512 Position  */
#define RTC_MODE1_CTRLA_PRESCALER_DIV1024   (RTC_MODE1_CTRLA_PRESCALER_DIV1024_Val << RTC_MODE1_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE1_CTRLA) CLK_RTC_CNT = GCLK_RTC/1024 Position  */
#define RTC_MODE1_CTRLA_COUNTSYNC_Pos       15                                             /**< (RTC_MODE1_CTRLA) Count Read Synchronization Enable Position */
#define RTC_MODE1_CTRLA_COUNTSYNC_Msk       (_U_(0x1) << RTC_MODE1_CTRLA_COUNTSYNC_Pos)    /**< (RTC_MODE1_CTRLA) Count Read Synchronization Enable Mask */
#define RTC_MODE1_CTRLA_COUNTSYNC           RTC_MODE1_CTRLA_COUNTSYNC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_CTRLA_COUNTSYNC_Msk instead */
#define RTC_MODE1_CTRLA_MASK                _U_(0x8F0F)                                    /**< \deprecated (RTC_MODE1_CTRLA) Register MASK  (Use RTC_MODE1_CTRLA_Msk instead)  */
#define RTC_MODE1_CTRLA_Msk                 _U_(0x8F0F)                                    /**< (RTC_MODE1_CTRLA) Register Mask  */


/* -------- RTC_MODE2_CTRLA : (RTC Offset: 0x00) (R/W 16) MODE2 Control A -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint16_t ENABLE:1;                  /**< bit:      1  Enable                                   */
    uint16_t MODE:2;                    /**< bit:   2..3  Operating Mode                           */
    uint16_t :2;                        /**< bit:   4..5  Reserved */
    uint16_t CLKREP:1;                  /**< bit:      6  Clock Representation                     */
    uint16_t MATCHCLR:1;                /**< bit:      7  Clear on Match                           */
    uint16_t PRESCALER:4;               /**< bit:  8..11  Prescaler                                */
    uint16_t :3;                        /**< bit: 12..14  Reserved */
    uint16_t CLOCKSYNC:1;               /**< bit:     15  Clock Read Synchronization Enable        */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} RTC_MODE2_CTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE2_CTRLA_OFFSET              (0x00)                                        /**<  (RTC_MODE2_CTRLA) MODE2 Control A  Offset */
#define RTC_MODE2_CTRLA_RESETVALUE          _U_(0x00)                                     /**<  (RTC_MODE2_CTRLA) MODE2 Control A  Reset Value */

#define RTC_MODE2_CTRLA_SWRST_Pos           0                                              /**< (RTC_MODE2_CTRLA) Software Reset Position */
#define RTC_MODE2_CTRLA_SWRST_Msk           (_U_(0x1) << RTC_MODE2_CTRLA_SWRST_Pos)        /**< (RTC_MODE2_CTRLA) Software Reset Mask */
#define RTC_MODE2_CTRLA_SWRST               RTC_MODE2_CTRLA_SWRST_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_CTRLA_SWRST_Msk instead */
#define RTC_MODE2_CTRLA_ENABLE_Pos          1                                              /**< (RTC_MODE2_CTRLA) Enable Position */
#define RTC_MODE2_CTRLA_ENABLE_Msk          (_U_(0x1) << RTC_MODE2_CTRLA_ENABLE_Pos)       /**< (RTC_MODE2_CTRLA) Enable Mask */
#define RTC_MODE2_CTRLA_ENABLE              RTC_MODE2_CTRLA_ENABLE_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_CTRLA_ENABLE_Msk instead */
#define RTC_MODE2_CTRLA_MODE_Pos            2                                              /**< (RTC_MODE2_CTRLA) Operating Mode Position */
#define RTC_MODE2_CTRLA_MODE_Msk            (_U_(0x3) << RTC_MODE2_CTRLA_MODE_Pos)         /**< (RTC_MODE2_CTRLA) Operating Mode Mask */
#define RTC_MODE2_CTRLA_MODE(value)         (RTC_MODE2_CTRLA_MODE_Msk & ((value) << RTC_MODE2_CTRLA_MODE_Pos))
#define   RTC_MODE2_CTRLA_MODE_COUNT32_Val  _U_(0x0)                                       /**< (RTC_MODE2_CTRLA) Mode 0: 32-bit Counter  */
#define   RTC_MODE2_CTRLA_MODE_COUNT16_Val  _U_(0x1)                                       /**< (RTC_MODE2_CTRLA) Mode 1: 16-bit Counter  */
#define   RTC_MODE2_CTRLA_MODE_CLOCK_Val    _U_(0x2)                                       /**< (RTC_MODE2_CTRLA) Mode 2: Clock/Calendar  */
#define RTC_MODE2_CTRLA_MODE_COUNT32        (RTC_MODE2_CTRLA_MODE_COUNT32_Val << RTC_MODE2_CTRLA_MODE_Pos)  /**< (RTC_MODE2_CTRLA) Mode 0: 32-bit Counter Position  */
#define RTC_MODE2_CTRLA_MODE_COUNT16        (RTC_MODE2_CTRLA_MODE_COUNT16_Val << RTC_MODE2_CTRLA_MODE_Pos)  /**< (RTC_MODE2_CTRLA) Mode 1: 16-bit Counter Position  */
#define RTC_MODE2_CTRLA_MODE_CLOCK          (RTC_MODE2_CTRLA_MODE_CLOCK_Val << RTC_MODE2_CTRLA_MODE_Pos)  /**< (RTC_MODE2_CTRLA) Mode 2: Clock/Calendar Position  */
#define RTC_MODE2_CTRLA_CLKREP_Pos          6                                              /**< (RTC_MODE2_CTRLA) Clock Representation Position */
#define RTC_MODE2_CTRLA_CLKREP_Msk          (_U_(0x1) << RTC_MODE2_CTRLA_CLKREP_Pos)       /**< (RTC_MODE2_CTRLA) Clock Representation Mask */
#define RTC_MODE2_CTRLA_CLKREP              RTC_MODE2_CTRLA_CLKREP_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_CTRLA_CLKREP_Msk instead */
#define RTC_MODE2_CTRLA_MATCHCLR_Pos        7                                              /**< (RTC_MODE2_CTRLA) Clear on Match Position */
#define RTC_MODE2_CTRLA_MATCHCLR_Msk        (_U_(0x1) << RTC_MODE2_CTRLA_MATCHCLR_Pos)     /**< (RTC_MODE2_CTRLA) Clear on Match Mask */
#define RTC_MODE2_CTRLA_MATCHCLR            RTC_MODE2_CTRLA_MATCHCLR_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_CTRLA_MATCHCLR_Msk instead */
#define RTC_MODE2_CTRLA_PRESCALER_Pos       8                                              /**< (RTC_MODE2_CTRLA) Prescaler Position */
#define RTC_MODE2_CTRLA_PRESCALER_Msk       (_U_(0xF) << RTC_MODE2_CTRLA_PRESCALER_Pos)    /**< (RTC_MODE2_CTRLA) Prescaler Mask */
#define RTC_MODE2_CTRLA_PRESCALER(value)    (RTC_MODE2_CTRLA_PRESCALER_Msk & ((value) << RTC_MODE2_CTRLA_PRESCALER_Pos))
#define   RTC_MODE2_CTRLA_PRESCALER_OFF_Val _U_(0x0)                                       /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/1  */
#define   RTC_MODE2_CTRLA_PRESCALER_DIV1_Val _U_(0x1)                                       /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/1  */
#define   RTC_MODE2_CTRLA_PRESCALER_DIV2_Val _U_(0x2)                                       /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/2  */
#define   RTC_MODE2_CTRLA_PRESCALER_DIV4_Val _U_(0x3)                                       /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/4  */
#define   RTC_MODE2_CTRLA_PRESCALER_DIV8_Val _U_(0x4)                                       /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/8  */
#define   RTC_MODE2_CTRLA_PRESCALER_DIV16_Val _U_(0x5)                                       /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/16  */
#define   RTC_MODE2_CTRLA_PRESCALER_DIV32_Val _U_(0x6)                                       /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/32  */
#define   RTC_MODE2_CTRLA_PRESCALER_DIV64_Val _U_(0x7)                                       /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/64  */
#define   RTC_MODE2_CTRLA_PRESCALER_DIV128_Val _U_(0x8)                                       /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/128  */
#define   RTC_MODE2_CTRLA_PRESCALER_DIV256_Val _U_(0x9)                                       /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/256  */
#define   RTC_MODE2_CTRLA_PRESCALER_DIV512_Val _U_(0xA)                                       /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/512  */
#define   RTC_MODE2_CTRLA_PRESCALER_DIV1024_Val _U_(0xB)                                       /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/1024  */
#define RTC_MODE2_CTRLA_PRESCALER_OFF       (RTC_MODE2_CTRLA_PRESCALER_OFF_Val << RTC_MODE2_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/1 Position  */
#define RTC_MODE2_CTRLA_PRESCALER_DIV1      (RTC_MODE2_CTRLA_PRESCALER_DIV1_Val << RTC_MODE2_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/1 Position  */
#define RTC_MODE2_CTRLA_PRESCALER_DIV2      (RTC_MODE2_CTRLA_PRESCALER_DIV2_Val << RTC_MODE2_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/2 Position  */
#define RTC_MODE2_CTRLA_PRESCALER_DIV4      (RTC_MODE2_CTRLA_PRESCALER_DIV4_Val << RTC_MODE2_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/4 Position  */
#define RTC_MODE2_CTRLA_PRESCALER_DIV8      (RTC_MODE2_CTRLA_PRESCALER_DIV8_Val << RTC_MODE2_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/8 Position  */
#define RTC_MODE2_CTRLA_PRESCALER_DIV16     (RTC_MODE2_CTRLA_PRESCALER_DIV16_Val << RTC_MODE2_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/16 Position  */
#define RTC_MODE2_CTRLA_PRESCALER_DIV32     (RTC_MODE2_CTRLA_PRESCALER_DIV32_Val << RTC_MODE2_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/32 Position  */
#define RTC_MODE2_CTRLA_PRESCALER_DIV64     (RTC_MODE2_CTRLA_PRESCALER_DIV64_Val << RTC_MODE2_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/64 Position  */
#define RTC_MODE2_CTRLA_PRESCALER_DIV128    (RTC_MODE2_CTRLA_PRESCALER_DIV128_Val << RTC_MODE2_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/128 Position  */
#define RTC_MODE2_CTRLA_PRESCALER_DIV256    (RTC_MODE2_CTRLA_PRESCALER_DIV256_Val << RTC_MODE2_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/256 Position  */
#define RTC_MODE2_CTRLA_PRESCALER_DIV512    (RTC_MODE2_CTRLA_PRESCALER_DIV512_Val << RTC_MODE2_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/512 Position  */
#define RTC_MODE2_CTRLA_PRESCALER_DIV1024   (RTC_MODE2_CTRLA_PRESCALER_DIV1024_Val << RTC_MODE2_CTRLA_PRESCALER_Pos)  /**< (RTC_MODE2_CTRLA) CLK_RTC_CNT = GCLK_RTC/1024 Position  */
#define RTC_MODE2_CTRLA_CLOCKSYNC_Pos       15                                             /**< (RTC_MODE2_CTRLA) Clock Read Synchronization Enable Position */
#define RTC_MODE2_CTRLA_CLOCKSYNC_Msk       (_U_(0x1) << RTC_MODE2_CTRLA_CLOCKSYNC_Pos)    /**< (RTC_MODE2_CTRLA) Clock Read Synchronization Enable Mask */
#define RTC_MODE2_CTRLA_CLOCKSYNC           RTC_MODE2_CTRLA_CLOCKSYNC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_CTRLA_CLOCKSYNC_Msk instead */
#define RTC_MODE2_CTRLA_MASK                _U_(0x8FCF)                                    /**< \deprecated (RTC_MODE2_CTRLA) Register MASK  (Use RTC_MODE2_CTRLA_Msk instead)  */
#define RTC_MODE2_CTRLA_Msk                 _U_(0x8FCF)                                    /**< (RTC_MODE2_CTRLA) Register Mask  */


/* -------- RTC_MODE0_EVCTRL : (RTC Offset: 0x04) (R/W 32) MODE0 Event Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PEREO0:1;                  /**< bit:      0  Periodic Interval 0 Event Output Enable  */
    uint32_t PEREO1:1;                  /**< bit:      1  Periodic Interval 1 Event Output Enable  */
    uint32_t PEREO2:1;                  /**< bit:      2  Periodic Interval 2 Event Output Enable  */
    uint32_t PEREO3:1;                  /**< bit:      3  Periodic Interval 3 Event Output Enable  */
    uint32_t PEREO4:1;                  /**< bit:      4  Periodic Interval 4 Event Output Enable  */
    uint32_t PEREO5:1;                  /**< bit:      5  Periodic Interval 5 Event Output Enable  */
    uint32_t PEREO6:1;                  /**< bit:      6  Periodic Interval 6 Event Output Enable  */
    uint32_t PEREO7:1;                  /**< bit:      7  Periodic Interval 7 Event Output Enable  */
    uint32_t CMPEO0:1;                  /**< bit:      8  Compare 0 Event Output Enable            */
    uint32_t :6;                        /**< bit:  9..14  Reserved */
    uint32_t OVFEO:1;                   /**< bit:     15  Overflow Event Output Enable             */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t PEREO:8;                   /**< bit:   0..7  Periodic Interval x Event Output Enable  */
    uint32_t CMPEO:1;                   /**< bit:      8  Compare x Event Output Enable            */
    uint32_t :23;                       /**< bit:  9..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} RTC_MODE0_EVCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE0_EVCTRL_OFFSET             (0x04)                                        /**<  (RTC_MODE0_EVCTRL) MODE0 Event Control  Offset */
#define RTC_MODE0_EVCTRL_RESETVALUE         _U_(0x00)                                     /**<  (RTC_MODE0_EVCTRL) MODE0 Event Control  Reset Value */

#define RTC_MODE0_EVCTRL_PEREO0_Pos         0                                              /**< (RTC_MODE0_EVCTRL) Periodic Interval 0 Event Output Enable Position */
#define RTC_MODE0_EVCTRL_PEREO0_Msk         (_U_(0x1) << RTC_MODE0_EVCTRL_PEREO0_Pos)      /**< (RTC_MODE0_EVCTRL) Periodic Interval 0 Event Output Enable Mask */
#define RTC_MODE0_EVCTRL_PEREO0             RTC_MODE0_EVCTRL_PEREO0_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_EVCTRL_PEREO0_Msk instead */
#define RTC_MODE0_EVCTRL_PEREO1_Pos         1                                              /**< (RTC_MODE0_EVCTRL) Periodic Interval 1 Event Output Enable Position */
#define RTC_MODE0_EVCTRL_PEREO1_Msk         (_U_(0x1) << RTC_MODE0_EVCTRL_PEREO1_Pos)      /**< (RTC_MODE0_EVCTRL) Periodic Interval 1 Event Output Enable Mask */
#define RTC_MODE0_EVCTRL_PEREO1             RTC_MODE0_EVCTRL_PEREO1_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_EVCTRL_PEREO1_Msk instead */
#define RTC_MODE0_EVCTRL_PEREO2_Pos         2                                              /**< (RTC_MODE0_EVCTRL) Periodic Interval 2 Event Output Enable Position */
#define RTC_MODE0_EVCTRL_PEREO2_Msk         (_U_(0x1) << RTC_MODE0_EVCTRL_PEREO2_Pos)      /**< (RTC_MODE0_EVCTRL) Periodic Interval 2 Event Output Enable Mask */
#define RTC_MODE0_EVCTRL_PEREO2             RTC_MODE0_EVCTRL_PEREO2_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_EVCTRL_PEREO2_Msk instead */
#define RTC_MODE0_EVCTRL_PEREO3_Pos         3                                              /**< (RTC_MODE0_EVCTRL) Periodic Interval 3 Event Output Enable Position */
#define RTC_MODE0_EVCTRL_PEREO3_Msk         (_U_(0x1) << RTC_MODE0_EVCTRL_PEREO3_Pos)      /**< (RTC_MODE0_EVCTRL) Periodic Interval 3 Event Output Enable Mask */
#define RTC_MODE0_EVCTRL_PEREO3             RTC_MODE0_EVCTRL_PEREO3_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_EVCTRL_PEREO3_Msk instead */
#define RTC_MODE0_EVCTRL_PEREO4_Pos         4                                              /**< (RTC_MODE0_EVCTRL) Periodic Interval 4 Event Output Enable Position */
#define RTC_MODE0_EVCTRL_PEREO4_Msk         (_U_(0x1) << RTC_MODE0_EVCTRL_PEREO4_Pos)      /**< (RTC_MODE0_EVCTRL) Periodic Interval 4 Event Output Enable Mask */
#define RTC_MODE0_EVCTRL_PEREO4             RTC_MODE0_EVCTRL_PEREO4_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_EVCTRL_PEREO4_Msk instead */
#define RTC_MODE0_EVCTRL_PEREO5_Pos         5                                              /**< (RTC_MODE0_EVCTRL) Periodic Interval 5 Event Output Enable Position */
#define RTC_MODE0_EVCTRL_PEREO5_Msk         (_U_(0x1) << RTC_MODE0_EVCTRL_PEREO5_Pos)      /**< (RTC_MODE0_EVCTRL) Periodic Interval 5 Event Output Enable Mask */
#define RTC_MODE0_EVCTRL_PEREO5             RTC_MODE0_EVCTRL_PEREO5_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_EVCTRL_PEREO5_Msk instead */
#define RTC_MODE0_EVCTRL_PEREO6_Pos         6                                              /**< (RTC_MODE0_EVCTRL) Periodic Interval 6 Event Output Enable Position */
#define RTC_MODE0_EVCTRL_PEREO6_Msk         (_U_(0x1) << RTC_MODE0_EVCTRL_PEREO6_Pos)      /**< (RTC_MODE0_EVCTRL) Periodic Interval 6 Event Output Enable Mask */
#define RTC_MODE0_EVCTRL_PEREO6             RTC_MODE0_EVCTRL_PEREO6_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_EVCTRL_PEREO6_Msk instead */
#define RTC_MODE0_EVCTRL_PEREO7_Pos         7                                              /**< (RTC_MODE0_EVCTRL) Periodic Interval 7 Event Output Enable Position */
#define RTC_MODE0_EVCTRL_PEREO7_Msk         (_U_(0x1) << RTC_MODE0_EVCTRL_PEREO7_Pos)      /**< (RTC_MODE0_EVCTRL) Periodic Interval 7 Event Output Enable Mask */
#define RTC_MODE0_EVCTRL_PEREO7             RTC_MODE0_EVCTRL_PEREO7_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_EVCTRL_PEREO7_Msk instead */
#define RTC_MODE0_EVCTRL_CMPEO0_Pos         8                                              /**< (RTC_MODE0_EVCTRL) Compare 0 Event Output Enable Position */
#define RTC_MODE0_EVCTRL_CMPEO0_Msk         (_U_(0x1) << RTC_MODE0_EVCTRL_CMPEO0_Pos)      /**< (RTC_MODE0_EVCTRL) Compare 0 Event Output Enable Mask */
#define RTC_MODE0_EVCTRL_CMPEO0             RTC_MODE0_EVCTRL_CMPEO0_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_EVCTRL_CMPEO0_Msk instead */
#define RTC_MODE0_EVCTRL_OVFEO_Pos          15                                             /**< (RTC_MODE0_EVCTRL) Overflow Event Output Enable Position */
#define RTC_MODE0_EVCTRL_OVFEO_Msk          (_U_(0x1) << RTC_MODE0_EVCTRL_OVFEO_Pos)       /**< (RTC_MODE0_EVCTRL) Overflow Event Output Enable Mask */
#define RTC_MODE0_EVCTRL_OVFEO              RTC_MODE0_EVCTRL_OVFEO_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_EVCTRL_OVFEO_Msk instead */
#define RTC_MODE0_EVCTRL_MASK               _U_(0x81FF)                                    /**< \deprecated (RTC_MODE0_EVCTRL) Register MASK  (Use RTC_MODE0_EVCTRL_Msk instead)  */
#define RTC_MODE0_EVCTRL_Msk                _U_(0x81FF)                                    /**< (RTC_MODE0_EVCTRL) Register Mask  */

#define RTC_MODE0_EVCTRL_PEREO_Pos          0                                              /**< (RTC_MODE0_EVCTRL Position) Periodic Interval x Event Output Enable */
#define RTC_MODE0_EVCTRL_PEREO_Msk          (_U_(0xFF) << RTC_MODE0_EVCTRL_PEREO_Pos)      /**< (RTC_MODE0_EVCTRL Mask) PEREO */
#define RTC_MODE0_EVCTRL_PEREO(value)       (RTC_MODE0_EVCTRL_PEREO_Msk & ((value) << RTC_MODE0_EVCTRL_PEREO_Pos))  
#define RTC_MODE0_EVCTRL_CMPEO_Pos          8                                              /**< (RTC_MODE0_EVCTRL Position) Compare x Event Output Enable */
#define RTC_MODE0_EVCTRL_CMPEO_Msk          (_U_(0x1) << RTC_MODE0_EVCTRL_CMPEO_Pos)       /**< (RTC_MODE0_EVCTRL Mask) CMPEO */
#define RTC_MODE0_EVCTRL_CMPEO(value)       (RTC_MODE0_EVCTRL_CMPEO_Msk & ((value) << RTC_MODE0_EVCTRL_CMPEO_Pos))  

/* -------- RTC_MODE1_EVCTRL : (RTC Offset: 0x04) (R/W 32) MODE1 Event Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PEREO0:1;                  /**< bit:      0  Periodic Interval 0 Event Output Enable  */
    uint32_t PEREO1:1;                  /**< bit:      1  Periodic Interval 1 Event Output Enable  */
    uint32_t PEREO2:1;                  /**< bit:      2  Periodic Interval 2 Event Output Enable  */
    uint32_t PEREO3:1;                  /**< bit:      3  Periodic Interval 3 Event Output Enable  */
    uint32_t PEREO4:1;                  /**< bit:      4  Periodic Interval 4 Event Output Enable  */
    uint32_t PEREO5:1;                  /**< bit:      5  Periodic Interval 5 Event Output Enable  */
    uint32_t PEREO6:1;                  /**< bit:      6  Periodic Interval 6 Event Output Enable  */
    uint32_t PEREO7:1;                  /**< bit:      7  Periodic Interval 7 Event Output Enable  */
    uint32_t CMPEO0:1;                  /**< bit:      8  Compare 0 Event Output Enable            */
    uint32_t CMPEO1:1;                  /**< bit:      9  Compare 1 Event Output Enable            */
    uint32_t :5;                        /**< bit: 10..14  Reserved */
    uint32_t OVFEO:1;                   /**< bit:     15  Overflow Event Output Enable             */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t PEREO:8;                   /**< bit:   0..7  Periodic Interval x Event Output Enable  */
    uint32_t CMPEO:2;                   /**< bit:   8..9  Compare x Event Output Enable            */
    uint32_t :22;                       /**< bit: 10..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} RTC_MODE1_EVCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE1_EVCTRL_OFFSET             (0x04)                                        /**<  (RTC_MODE1_EVCTRL) MODE1 Event Control  Offset */
#define RTC_MODE1_EVCTRL_RESETVALUE         _U_(0x00)                                     /**<  (RTC_MODE1_EVCTRL) MODE1 Event Control  Reset Value */

#define RTC_MODE1_EVCTRL_PEREO0_Pos         0                                              /**< (RTC_MODE1_EVCTRL) Periodic Interval 0 Event Output Enable Position */
#define RTC_MODE1_EVCTRL_PEREO0_Msk         (_U_(0x1) << RTC_MODE1_EVCTRL_PEREO0_Pos)      /**< (RTC_MODE1_EVCTRL) Periodic Interval 0 Event Output Enable Mask */
#define RTC_MODE1_EVCTRL_PEREO0             RTC_MODE1_EVCTRL_PEREO0_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_EVCTRL_PEREO0_Msk instead */
#define RTC_MODE1_EVCTRL_PEREO1_Pos         1                                              /**< (RTC_MODE1_EVCTRL) Periodic Interval 1 Event Output Enable Position */
#define RTC_MODE1_EVCTRL_PEREO1_Msk         (_U_(0x1) << RTC_MODE1_EVCTRL_PEREO1_Pos)      /**< (RTC_MODE1_EVCTRL) Periodic Interval 1 Event Output Enable Mask */
#define RTC_MODE1_EVCTRL_PEREO1             RTC_MODE1_EVCTRL_PEREO1_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_EVCTRL_PEREO1_Msk instead */
#define RTC_MODE1_EVCTRL_PEREO2_Pos         2                                              /**< (RTC_MODE1_EVCTRL) Periodic Interval 2 Event Output Enable Position */
#define RTC_MODE1_EVCTRL_PEREO2_Msk         (_U_(0x1) << RTC_MODE1_EVCTRL_PEREO2_Pos)      /**< (RTC_MODE1_EVCTRL) Periodic Interval 2 Event Output Enable Mask */
#define RTC_MODE1_EVCTRL_PEREO2             RTC_MODE1_EVCTRL_PEREO2_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_EVCTRL_PEREO2_Msk instead */
#define RTC_MODE1_EVCTRL_PEREO3_Pos         3                                              /**< (RTC_MODE1_EVCTRL) Periodic Interval 3 Event Output Enable Position */
#define RTC_MODE1_EVCTRL_PEREO3_Msk         (_U_(0x1) << RTC_MODE1_EVCTRL_PEREO3_Pos)      /**< (RTC_MODE1_EVCTRL) Periodic Interval 3 Event Output Enable Mask */
#define RTC_MODE1_EVCTRL_PEREO3             RTC_MODE1_EVCTRL_PEREO3_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_EVCTRL_PEREO3_Msk instead */
#define RTC_MODE1_EVCTRL_PEREO4_Pos         4                                              /**< (RTC_MODE1_EVCTRL) Periodic Interval 4 Event Output Enable Position */
#define RTC_MODE1_EVCTRL_PEREO4_Msk         (_U_(0x1) << RTC_MODE1_EVCTRL_PEREO4_Pos)      /**< (RTC_MODE1_EVCTRL) Periodic Interval 4 Event Output Enable Mask */
#define RTC_MODE1_EVCTRL_PEREO4             RTC_MODE1_EVCTRL_PEREO4_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_EVCTRL_PEREO4_Msk instead */
#define RTC_MODE1_EVCTRL_PEREO5_Pos         5                                              /**< (RTC_MODE1_EVCTRL) Periodic Interval 5 Event Output Enable Position */
#define RTC_MODE1_EVCTRL_PEREO5_Msk         (_U_(0x1) << RTC_MODE1_EVCTRL_PEREO5_Pos)      /**< (RTC_MODE1_EVCTRL) Periodic Interval 5 Event Output Enable Mask */
#define RTC_MODE1_EVCTRL_PEREO5             RTC_MODE1_EVCTRL_PEREO5_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_EVCTRL_PEREO5_Msk instead */
#define RTC_MODE1_EVCTRL_PEREO6_Pos         6                                              /**< (RTC_MODE1_EVCTRL) Periodic Interval 6 Event Output Enable Position */
#define RTC_MODE1_EVCTRL_PEREO6_Msk         (_U_(0x1) << RTC_MODE1_EVCTRL_PEREO6_Pos)      /**< (RTC_MODE1_EVCTRL) Periodic Interval 6 Event Output Enable Mask */
#define RTC_MODE1_EVCTRL_PEREO6             RTC_MODE1_EVCTRL_PEREO6_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_EVCTRL_PEREO6_Msk instead */
#define RTC_MODE1_EVCTRL_PEREO7_Pos         7                                              /**< (RTC_MODE1_EVCTRL) Periodic Interval 7 Event Output Enable Position */
#define RTC_MODE1_EVCTRL_PEREO7_Msk         (_U_(0x1) << RTC_MODE1_EVCTRL_PEREO7_Pos)      /**< (RTC_MODE1_EVCTRL) Periodic Interval 7 Event Output Enable Mask */
#define RTC_MODE1_EVCTRL_PEREO7             RTC_MODE1_EVCTRL_PEREO7_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_EVCTRL_PEREO7_Msk instead */
#define RTC_MODE1_EVCTRL_CMPEO0_Pos         8                                              /**< (RTC_MODE1_EVCTRL) Compare 0 Event Output Enable Position */
#define RTC_MODE1_EVCTRL_CMPEO0_Msk         (_U_(0x1) << RTC_MODE1_EVCTRL_CMPEO0_Pos)      /**< (RTC_MODE1_EVCTRL) Compare 0 Event Output Enable Mask */
#define RTC_MODE1_EVCTRL_CMPEO0             RTC_MODE1_EVCTRL_CMPEO0_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_EVCTRL_CMPEO0_Msk instead */
#define RTC_MODE1_EVCTRL_CMPEO1_Pos         9                                              /**< (RTC_MODE1_EVCTRL) Compare 1 Event Output Enable Position */
#define RTC_MODE1_EVCTRL_CMPEO1_Msk         (_U_(0x1) << RTC_MODE1_EVCTRL_CMPEO1_Pos)      /**< (RTC_MODE1_EVCTRL) Compare 1 Event Output Enable Mask */
#define RTC_MODE1_EVCTRL_CMPEO1             RTC_MODE1_EVCTRL_CMPEO1_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_EVCTRL_CMPEO1_Msk instead */
#define RTC_MODE1_EVCTRL_OVFEO_Pos          15                                             /**< (RTC_MODE1_EVCTRL) Overflow Event Output Enable Position */
#define RTC_MODE1_EVCTRL_OVFEO_Msk          (_U_(0x1) << RTC_MODE1_EVCTRL_OVFEO_Pos)       /**< (RTC_MODE1_EVCTRL) Overflow Event Output Enable Mask */
#define RTC_MODE1_EVCTRL_OVFEO              RTC_MODE1_EVCTRL_OVFEO_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_EVCTRL_OVFEO_Msk instead */
#define RTC_MODE1_EVCTRL_MASK               _U_(0x83FF)                                    /**< \deprecated (RTC_MODE1_EVCTRL) Register MASK  (Use RTC_MODE1_EVCTRL_Msk instead)  */
#define RTC_MODE1_EVCTRL_Msk                _U_(0x83FF)                                    /**< (RTC_MODE1_EVCTRL) Register Mask  */

#define RTC_MODE1_EVCTRL_PEREO_Pos          0                                              /**< (RTC_MODE1_EVCTRL Position) Periodic Interval x Event Output Enable */
#define RTC_MODE1_EVCTRL_PEREO_Msk          (_U_(0xFF) << RTC_MODE1_EVCTRL_PEREO_Pos)      /**< (RTC_MODE1_EVCTRL Mask) PEREO */
#define RTC_MODE1_EVCTRL_PEREO(value)       (RTC_MODE1_EVCTRL_PEREO_Msk & ((value) << RTC_MODE1_EVCTRL_PEREO_Pos))  
#define RTC_MODE1_EVCTRL_CMPEO_Pos          8                                              /**< (RTC_MODE1_EVCTRL Position) Compare x Event Output Enable */
#define RTC_MODE1_EVCTRL_CMPEO_Msk          (_U_(0x3) << RTC_MODE1_EVCTRL_CMPEO_Pos)       /**< (RTC_MODE1_EVCTRL Mask) CMPEO */
#define RTC_MODE1_EVCTRL_CMPEO(value)       (RTC_MODE1_EVCTRL_CMPEO_Msk & ((value) << RTC_MODE1_EVCTRL_CMPEO_Pos))  

/* -------- RTC_MODE2_EVCTRL : (RTC Offset: 0x04) (R/W 32) MODE2 Event Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PEREO0:1;                  /**< bit:      0  Periodic Interval 0 Event Output Enable  */
    uint32_t PEREO1:1;                  /**< bit:      1  Periodic Interval 1 Event Output Enable  */
    uint32_t PEREO2:1;                  /**< bit:      2  Periodic Interval 2 Event Output Enable  */
    uint32_t PEREO3:1;                  /**< bit:      3  Periodic Interval 3 Event Output Enable  */
    uint32_t PEREO4:1;                  /**< bit:      4  Periodic Interval 4 Event Output Enable  */
    uint32_t PEREO5:1;                  /**< bit:      5  Periodic Interval 5 Event Output Enable  */
    uint32_t PEREO6:1;                  /**< bit:      6  Periodic Interval 6 Event Output Enable  */
    uint32_t PEREO7:1;                  /**< bit:      7  Periodic Interval 7 Event Output Enable  */
    uint32_t ALARMEO0:1;                /**< bit:      8  Alarm 0 Event Output Enable              */
    uint32_t :6;                        /**< bit:  9..14  Reserved */
    uint32_t OVFEO:1;                   /**< bit:     15  Overflow Event Output Enable             */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t PEREO:8;                   /**< bit:   0..7  Periodic Interval x Event Output Enable  */
    uint32_t ALARMEO:1;                 /**< bit:      8  Alarm x Event Output Enable              */
    uint32_t :23;                       /**< bit:  9..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} RTC_MODE2_EVCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE2_EVCTRL_OFFSET             (0x04)                                        /**<  (RTC_MODE2_EVCTRL) MODE2 Event Control  Offset */
#define RTC_MODE2_EVCTRL_RESETVALUE         _U_(0x00)                                     /**<  (RTC_MODE2_EVCTRL) MODE2 Event Control  Reset Value */

#define RTC_MODE2_EVCTRL_PEREO0_Pos         0                                              /**< (RTC_MODE2_EVCTRL) Periodic Interval 0 Event Output Enable Position */
#define RTC_MODE2_EVCTRL_PEREO0_Msk         (_U_(0x1) << RTC_MODE2_EVCTRL_PEREO0_Pos)      /**< (RTC_MODE2_EVCTRL) Periodic Interval 0 Event Output Enable Mask */
#define RTC_MODE2_EVCTRL_PEREO0             RTC_MODE2_EVCTRL_PEREO0_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_EVCTRL_PEREO0_Msk instead */
#define RTC_MODE2_EVCTRL_PEREO1_Pos         1                                              /**< (RTC_MODE2_EVCTRL) Periodic Interval 1 Event Output Enable Position */
#define RTC_MODE2_EVCTRL_PEREO1_Msk         (_U_(0x1) << RTC_MODE2_EVCTRL_PEREO1_Pos)      /**< (RTC_MODE2_EVCTRL) Periodic Interval 1 Event Output Enable Mask */
#define RTC_MODE2_EVCTRL_PEREO1             RTC_MODE2_EVCTRL_PEREO1_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_EVCTRL_PEREO1_Msk instead */
#define RTC_MODE2_EVCTRL_PEREO2_Pos         2                                              /**< (RTC_MODE2_EVCTRL) Periodic Interval 2 Event Output Enable Position */
#define RTC_MODE2_EVCTRL_PEREO2_Msk         (_U_(0x1) << RTC_MODE2_EVCTRL_PEREO2_Pos)      /**< (RTC_MODE2_EVCTRL) Periodic Interval 2 Event Output Enable Mask */
#define RTC_MODE2_EVCTRL_PEREO2             RTC_MODE2_EVCTRL_PEREO2_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_EVCTRL_PEREO2_Msk instead */
#define RTC_MODE2_EVCTRL_PEREO3_Pos         3                                              /**< (RTC_MODE2_EVCTRL) Periodic Interval 3 Event Output Enable Position */
#define RTC_MODE2_EVCTRL_PEREO3_Msk         (_U_(0x1) << RTC_MODE2_EVCTRL_PEREO3_Pos)      /**< (RTC_MODE2_EVCTRL) Periodic Interval 3 Event Output Enable Mask */
#define RTC_MODE2_EVCTRL_PEREO3             RTC_MODE2_EVCTRL_PEREO3_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_EVCTRL_PEREO3_Msk instead */
#define RTC_MODE2_EVCTRL_PEREO4_Pos         4                                              /**< (RTC_MODE2_EVCTRL) Periodic Interval 4 Event Output Enable Position */
#define RTC_MODE2_EVCTRL_PEREO4_Msk         (_U_(0x1) << RTC_MODE2_EVCTRL_PEREO4_Pos)      /**< (RTC_MODE2_EVCTRL) Periodic Interval 4 Event Output Enable Mask */
#define RTC_MODE2_EVCTRL_PEREO4             RTC_MODE2_EVCTRL_PEREO4_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_EVCTRL_PEREO4_Msk instead */
#define RTC_MODE2_EVCTRL_PEREO5_Pos         5                                              /**< (RTC_MODE2_EVCTRL) Periodic Interval 5 Event Output Enable Position */
#define RTC_MODE2_EVCTRL_PEREO5_Msk         (_U_(0x1) << RTC_MODE2_EVCTRL_PEREO5_Pos)      /**< (RTC_MODE2_EVCTRL) Periodic Interval 5 Event Output Enable Mask */
#define RTC_MODE2_EVCTRL_PEREO5             RTC_MODE2_EVCTRL_PEREO5_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_EVCTRL_PEREO5_Msk instead */
#define RTC_MODE2_EVCTRL_PEREO6_Pos         6                                              /**< (RTC_MODE2_EVCTRL) Periodic Interval 6 Event Output Enable Position */
#define RTC_MODE2_EVCTRL_PEREO6_Msk         (_U_(0x1) << RTC_MODE2_EVCTRL_PEREO6_Pos)      /**< (RTC_MODE2_EVCTRL) Periodic Interval 6 Event Output Enable Mask */
#define RTC_MODE2_EVCTRL_PEREO6             RTC_MODE2_EVCTRL_PEREO6_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_EVCTRL_PEREO6_Msk instead */
#define RTC_MODE2_EVCTRL_PEREO7_Pos         7                                              /**< (RTC_MODE2_EVCTRL) Periodic Interval 7 Event Output Enable Position */
#define RTC_MODE2_EVCTRL_PEREO7_Msk         (_U_(0x1) << RTC_MODE2_EVCTRL_PEREO7_Pos)      /**< (RTC_MODE2_EVCTRL) Periodic Interval 7 Event Output Enable Mask */
#define RTC_MODE2_EVCTRL_PEREO7             RTC_MODE2_EVCTRL_PEREO7_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_EVCTRL_PEREO7_Msk instead */
#define RTC_MODE2_EVCTRL_ALARMEO0_Pos       8                                              /**< (RTC_MODE2_EVCTRL) Alarm 0 Event Output Enable Position */
#define RTC_MODE2_EVCTRL_ALARMEO0_Msk       (_U_(0x1) << RTC_MODE2_EVCTRL_ALARMEO0_Pos)    /**< (RTC_MODE2_EVCTRL) Alarm 0 Event Output Enable Mask */
#define RTC_MODE2_EVCTRL_ALARMEO0           RTC_MODE2_EVCTRL_ALARMEO0_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_EVCTRL_ALARMEO0_Msk instead */
#define RTC_MODE2_EVCTRL_OVFEO_Pos          15                                             /**< (RTC_MODE2_EVCTRL) Overflow Event Output Enable Position */
#define RTC_MODE2_EVCTRL_OVFEO_Msk          (_U_(0x1) << RTC_MODE2_EVCTRL_OVFEO_Pos)       /**< (RTC_MODE2_EVCTRL) Overflow Event Output Enable Mask */
#define RTC_MODE2_EVCTRL_OVFEO              RTC_MODE2_EVCTRL_OVFEO_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_EVCTRL_OVFEO_Msk instead */
#define RTC_MODE2_EVCTRL_MASK               _U_(0x81FF)                                    /**< \deprecated (RTC_MODE2_EVCTRL) Register MASK  (Use RTC_MODE2_EVCTRL_Msk instead)  */
#define RTC_MODE2_EVCTRL_Msk                _U_(0x81FF)                                    /**< (RTC_MODE2_EVCTRL) Register Mask  */

#define RTC_MODE2_EVCTRL_PEREO_Pos          0                                              /**< (RTC_MODE2_EVCTRL Position) Periodic Interval x Event Output Enable */
#define RTC_MODE2_EVCTRL_PEREO_Msk          (_U_(0xFF) << RTC_MODE2_EVCTRL_PEREO_Pos)      /**< (RTC_MODE2_EVCTRL Mask) PEREO */
#define RTC_MODE2_EVCTRL_PEREO(value)       (RTC_MODE2_EVCTRL_PEREO_Msk & ((value) << RTC_MODE2_EVCTRL_PEREO_Pos))  
#define RTC_MODE2_EVCTRL_ALARMEO_Pos        8                                              /**< (RTC_MODE2_EVCTRL Position) Alarm x Event Output Enable */
#define RTC_MODE2_EVCTRL_ALARMEO_Msk        (_U_(0x1) << RTC_MODE2_EVCTRL_ALARMEO_Pos)     /**< (RTC_MODE2_EVCTRL Mask) ALARMEO */
#define RTC_MODE2_EVCTRL_ALARMEO(value)     (RTC_MODE2_EVCTRL_ALARMEO_Msk & ((value) << RTC_MODE2_EVCTRL_ALARMEO_Pos))  

/* -------- RTC_MODE0_INTENCLR : (RTC Offset: 0x08) (R/W 16) MODE0 Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t PER0:1;                    /**< bit:      0  Periodic Interval 0 Interrupt Enable     */
    uint16_t PER1:1;                    /**< bit:      1  Periodic Interval 1 Interrupt Enable     */
    uint16_t PER2:1;                    /**< bit:      2  Periodic Interval 2 Interrupt Enable     */
    uint16_t PER3:1;                    /**< bit:      3  Periodic Interval 3 Interrupt Enable     */
    uint16_t PER4:1;                    /**< bit:      4  Periodic Interval 4 Interrupt Enable     */
    uint16_t PER5:1;                    /**< bit:      5  Periodic Interval 5 Interrupt Enable     */
    uint16_t PER6:1;                    /**< bit:      6  Periodic Interval 6 Interrupt Enable     */
    uint16_t PER7:1;                    /**< bit:      7  Periodic Interval 7 Interrupt Enable     */
    uint16_t CMP0:1;                    /**< bit:      8  Compare 0 Interrupt Enable               */
    uint16_t :6;                        /**< bit:  9..14  Reserved */
    uint16_t OVF:1;                     /**< bit:     15  Overflow Interrupt Enable                */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint16_t PER:8;                     /**< bit:   0..7  Periodic Interval x Interrupt Enable     */
    uint16_t CMP:1;                     /**< bit:      8  Compare x Interrupt Enable               */
    uint16_t :7;                        /**< bit:  9..15 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint16_t reg;                         /**< Type used for register access */
} RTC_MODE0_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE0_INTENCLR_OFFSET           (0x08)                                        /**<  (RTC_MODE0_INTENCLR) MODE0 Interrupt Enable Clear  Offset */
#define RTC_MODE0_INTENCLR_RESETVALUE       _U_(0x00)                                     /**<  (RTC_MODE0_INTENCLR) MODE0 Interrupt Enable Clear  Reset Value */

#define RTC_MODE0_INTENCLR_PER0_Pos         0                                              /**< (RTC_MODE0_INTENCLR) Periodic Interval 0 Interrupt Enable Position */
#define RTC_MODE0_INTENCLR_PER0_Msk         (_U_(0x1) << RTC_MODE0_INTENCLR_PER0_Pos)      /**< (RTC_MODE0_INTENCLR) Periodic Interval 0 Interrupt Enable Mask */
#define RTC_MODE0_INTENCLR_PER0             RTC_MODE0_INTENCLR_PER0_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENCLR_PER0_Msk instead */
#define RTC_MODE0_INTENCLR_PER1_Pos         1                                              /**< (RTC_MODE0_INTENCLR) Periodic Interval 1 Interrupt Enable Position */
#define RTC_MODE0_INTENCLR_PER1_Msk         (_U_(0x1) << RTC_MODE0_INTENCLR_PER1_Pos)      /**< (RTC_MODE0_INTENCLR) Periodic Interval 1 Interrupt Enable Mask */
#define RTC_MODE0_INTENCLR_PER1             RTC_MODE0_INTENCLR_PER1_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENCLR_PER1_Msk instead */
#define RTC_MODE0_INTENCLR_PER2_Pos         2                                              /**< (RTC_MODE0_INTENCLR) Periodic Interval 2 Interrupt Enable Position */
#define RTC_MODE0_INTENCLR_PER2_Msk         (_U_(0x1) << RTC_MODE0_INTENCLR_PER2_Pos)      /**< (RTC_MODE0_INTENCLR) Periodic Interval 2 Interrupt Enable Mask */
#define RTC_MODE0_INTENCLR_PER2             RTC_MODE0_INTENCLR_PER2_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENCLR_PER2_Msk instead */
#define RTC_MODE0_INTENCLR_PER3_Pos         3                                              /**< (RTC_MODE0_INTENCLR) Periodic Interval 3 Interrupt Enable Position */
#define RTC_MODE0_INTENCLR_PER3_Msk         (_U_(0x1) << RTC_MODE0_INTENCLR_PER3_Pos)      /**< (RTC_MODE0_INTENCLR) Periodic Interval 3 Interrupt Enable Mask */
#define RTC_MODE0_INTENCLR_PER3             RTC_MODE0_INTENCLR_PER3_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENCLR_PER3_Msk instead */
#define RTC_MODE0_INTENCLR_PER4_Pos         4                                              /**< (RTC_MODE0_INTENCLR) Periodic Interval 4 Interrupt Enable Position */
#define RTC_MODE0_INTENCLR_PER4_Msk         (_U_(0x1) << RTC_MODE0_INTENCLR_PER4_Pos)      /**< (RTC_MODE0_INTENCLR) Periodic Interval 4 Interrupt Enable Mask */
#define RTC_MODE0_INTENCLR_PER4             RTC_MODE0_INTENCLR_PER4_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENCLR_PER4_Msk instead */
#define RTC_MODE0_INTENCLR_PER5_Pos         5                                              /**< (RTC_MODE0_INTENCLR) Periodic Interval 5 Interrupt Enable Position */
#define RTC_MODE0_INTENCLR_PER5_Msk         (_U_(0x1) << RTC_MODE0_INTENCLR_PER5_Pos)      /**< (RTC_MODE0_INTENCLR) Periodic Interval 5 Interrupt Enable Mask */
#define RTC_MODE0_INTENCLR_PER5             RTC_MODE0_INTENCLR_PER5_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENCLR_PER5_Msk instead */
#define RTC_MODE0_INTENCLR_PER6_Pos         6                                              /**< (RTC_MODE0_INTENCLR) Periodic Interval 6 Interrupt Enable Position */
#define RTC_MODE0_INTENCLR_PER6_Msk         (_U_(0x1) << RTC_MODE0_INTENCLR_PER6_Pos)      /**< (RTC_MODE0_INTENCLR) Periodic Interval 6 Interrupt Enable Mask */
#define RTC_MODE0_INTENCLR_PER6             RTC_MODE0_INTENCLR_PER6_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENCLR_PER6_Msk instead */
#define RTC_MODE0_INTENCLR_PER7_Pos         7                                              /**< (RTC_MODE0_INTENCLR) Periodic Interval 7 Interrupt Enable Position */
#define RTC_MODE0_INTENCLR_PER7_Msk         (_U_(0x1) << RTC_MODE0_INTENCLR_PER7_Pos)      /**< (RTC_MODE0_INTENCLR) Periodic Interval 7 Interrupt Enable Mask */
#define RTC_MODE0_INTENCLR_PER7             RTC_MODE0_INTENCLR_PER7_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENCLR_PER7_Msk instead */
#define RTC_MODE0_INTENCLR_CMP0_Pos         8                                              /**< (RTC_MODE0_INTENCLR) Compare 0 Interrupt Enable Position */
#define RTC_MODE0_INTENCLR_CMP0_Msk         (_U_(0x1) << RTC_MODE0_INTENCLR_CMP0_Pos)      /**< (RTC_MODE0_INTENCLR) Compare 0 Interrupt Enable Mask */
#define RTC_MODE0_INTENCLR_CMP0             RTC_MODE0_INTENCLR_CMP0_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENCLR_CMP0_Msk instead */
#define RTC_MODE0_INTENCLR_OVF_Pos          15                                             /**< (RTC_MODE0_INTENCLR) Overflow Interrupt Enable Position */
#define RTC_MODE0_INTENCLR_OVF_Msk          (_U_(0x1) << RTC_MODE0_INTENCLR_OVF_Pos)       /**< (RTC_MODE0_INTENCLR) Overflow Interrupt Enable Mask */
#define RTC_MODE0_INTENCLR_OVF              RTC_MODE0_INTENCLR_OVF_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENCLR_OVF_Msk instead */
#define RTC_MODE0_INTENCLR_MASK             _U_(0x81FF)                                    /**< \deprecated (RTC_MODE0_INTENCLR) Register MASK  (Use RTC_MODE0_INTENCLR_Msk instead)  */
#define RTC_MODE0_INTENCLR_Msk              _U_(0x81FF)                                    /**< (RTC_MODE0_INTENCLR) Register Mask  */

#define RTC_MODE0_INTENCLR_PER_Pos          0                                              /**< (RTC_MODE0_INTENCLR Position) Periodic Interval x Interrupt Enable */
#define RTC_MODE0_INTENCLR_PER_Msk          (_U_(0xFF) << RTC_MODE0_INTENCLR_PER_Pos)      /**< (RTC_MODE0_INTENCLR Mask) PER */
#define RTC_MODE0_INTENCLR_PER(value)       (RTC_MODE0_INTENCLR_PER_Msk & ((value) << RTC_MODE0_INTENCLR_PER_Pos))  
#define RTC_MODE0_INTENCLR_CMP_Pos          8                                              /**< (RTC_MODE0_INTENCLR Position) Compare x Interrupt Enable */
#define RTC_MODE0_INTENCLR_CMP_Msk          (_U_(0x1) << RTC_MODE0_INTENCLR_CMP_Pos)       /**< (RTC_MODE0_INTENCLR Mask) CMP */
#define RTC_MODE0_INTENCLR_CMP(value)       (RTC_MODE0_INTENCLR_CMP_Msk & ((value) << RTC_MODE0_INTENCLR_CMP_Pos))  

/* -------- RTC_MODE1_INTENCLR : (RTC Offset: 0x08) (R/W 16) MODE1 Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t PER0:1;                    /**< bit:      0  Periodic Interval 0 Interrupt Enable     */
    uint16_t PER1:1;                    /**< bit:      1  Periodic Interval 1 Interrupt Enable     */
    uint16_t PER2:1;                    /**< bit:      2  Periodic Interval 2 Interrupt Enable     */
    uint16_t PER3:1;                    /**< bit:      3  Periodic Interval 3 Interrupt Enable     */
    uint16_t PER4:1;                    /**< bit:      4  Periodic Interval 4 Interrupt Enable     */
    uint16_t PER5:1;                    /**< bit:      5  Periodic Interval 5 Interrupt Enable     */
    uint16_t PER6:1;                    /**< bit:      6  Periodic Interval 6 Interrupt Enable     */
    uint16_t PER7:1;                    /**< bit:      7  Periodic Interval 7 Interrupt Enable     */
    uint16_t CMP0:1;                    /**< bit:      8  Compare 0 Interrupt Enable               */
    uint16_t CMP1:1;                    /**< bit:      9  Compare 1 Interrupt Enable               */
    uint16_t :5;                        /**< bit: 10..14  Reserved */
    uint16_t OVF:1;                     /**< bit:     15  Overflow Interrupt Enable                */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint16_t PER:8;                     /**< bit:   0..7  Periodic Interval x Interrupt Enable     */
    uint16_t CMP:2;                     /**< bit:   8..9  Compare x Interrupt Enable               */
    uint16_t :6;                        /**< bit: 10..15 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint16_t reg;                         /**< Type used for register access */
} RTC_MODE1_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE1_INTENCLR_OFFSET           (0x08)                                        /**<  (RTC_MODE1_INTENCLR) MODE1 Interrupt Enable Clear  Offset */
#define RTC_MODE1_INTENCLR_RESETVALUE       _U_(0x00)                                     /**<  (RTC_MODE1_INTENCLR) MODE1 Interrupt Enable Clear  Reset Value */

#define RTC_MODE1_INTENCLR_PER0_Pos         0                                              /**< (RTC_MODE1_INTENCLR) Periodic Interval 0 Interrupt Enable Position */
#define RTC_MODE1_INTENCLR_PER0_Msk         (_U_(0x1) << RTC_MODE1_INTENCLR_PER0_Pos)      /**< (RTC_MODE1_INTENCLR) Periodic Interval 0 Interrupt Enable Mask */
#define RTC_MODE1_INTENCLR_PER0             RTC_MODE1_INTENCLR_PER0_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENCLR_PER0_Msk instead */
#define RTC_MODE1_INTENCLR_PER1_Pos         1                                              /**< (RTC_MODE1_INTENCLR) Periodic Interval 1 Interrupt Enable Position */
#define RTC_MODE1_INTENCLR_PER1_Msk         (_U_(0x1) << RTC_MODE1_INTENCLR_PER1_Pos)      /**< (RTC_MODE1_INTENCLR) Periodic Interval 1 Interrupt Enable Mask */
#define RTC_MODE1_INTENCLR_PER1             RTC_MODE1_INTENCLR_PER1_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENCLR_PER1_Msk instead */
#define RTC_MODE1_INTENCLR_PER2_Pos         2                                              /**< (RTC_MODE1_INTENCLR) Periodic Interval 2 Interrupt Enable Position */
#define RTC_MODE1_INTENCLR_PER2_Msk         (_U_(0x1) << RTC_MODE1_INTENCLR_PER2_Pos)      /**< (RTC_MODE1_INTENCLR) Periodic Interval 2 Interrupt Enable Mask */
#define RTC_MODE1_INTENCLR_PER2             RTC_MODE1_INTENCLR_PER2_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENCLR_PER2_Msk instead */
#define RTC_MODE1_INTENCLR_PER3_Pos         3                                              /**< (RTC_MODE1_INTENCLR) Periodic Interval 3 Interrupt Enable Position */
#define RTC_MODE1_INTENCLR_PER3_Msk         (_U_(0x1) << RTC_MODE1_INTENCLR_PER3_Pos)      /**< (RTC_MODE1_INTENCLR) Periodic Interval 3 Interrupt Enable Mask */
#define RTC_MODE1_INTENCLR_PER3             RTC_MODE1_INTENCLR_PER3_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENCLR_PER3_Msk instead */
#define RTC_MODE1_INTENCLR_PER4_Pos         4                                              /**< (RTC_MODE1_INTENCLR) Periodic Interval 4 Interrupt Enable Position */
#define RTC_MODE1_INTENCLR_PER4_Msk         (_U_(0x1) << RTC_MODE1_INTENCLR_PER4_Pos)      /**< (RTC_MODE1_INTENCLR) Periodic Interval 4 Interrupt Enable Mask */
#define RTC_MODE1_INTENCLR_PER4             RTC_MODE1_INTENCLR_PER4_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENCLR_PER4_Msk instead */
#define RTC_MODE1_INTENCLR_PER5_Pos         5                                              /**< (RTC_MODE1_INTENCLR) Periodic Interval 5 Interrupt Enable Position */
#define RTC_MODE1_INTENCLR_PER5_Msk         (_U_(0x1) << RTC_MODE1_INTENCLR_PER5_Pos)      /**< (RTC_MODE1_INTENCLR) Periodic Interval 5 Interrupt Enable Mask */
#define RTC_MODE1_INTENCLR_PER5             RTC_MODE1_INTENCLR_PER5_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENCLR_PER5_Msk instead */
#define RTC_MODE1_INTENCLR_PER6_Pos         6                                              /**< (RTC_MODE1_INTENCLR) Periodic Interval 6 Interrupt Enable Position */
#define RTC_MODE1_INTENCLR_PER6_Msk         (_U_(0x1) << RTC_MODE1_INTENCLR_PER6_Pos)      /**< (RTC_MODE1_INTENCLR) Periodic Interval 6 Interrupt Enable Mask */
#define RTC_MODE1_INTENCLR_PER6             RTC_MODE1_INTENCLR_PER6_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENCLR_PER6_Msk instead */
#define RTC_MODE1_INTENCLR_PER7_Pos         7                                              /**< (RTC_MODE1_INTENCLR) Periodic Interval 7 Interrupt Enable Position */
#define RTC_MODE1_INTENCLR_PER7_Msk         (_U_(0x1) << RTC_MODE1_INTENCLR_PER7_Pos)      /**< (RTC_MODE1_INTENCLR) Periodic Interval 7 Interrupt Enable Mask */
#define RTC_MODE1_INTENCLR_PER7             RTC_MODE1_INTENCLR_PER7_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENCLR_PER7_Msk instead */
#define RTC_MODE1_INTENCLR_CMP0_Pos         8                                              /**< (RTC_MODE1_INTENCLR) Compare 0 Interrupt Enable Position */
#define RTC_MODE1_INTENCLR_CMP0_Msk         (_U_(0x1) << RTC_MODE1_INTENCLR_CMP0_Pos)      /**< (RTC_MODE1_INTENCLR) Compare 0 Interrupt Enable Mask */
#define RTC_MODE1_INTENCLR_CMP0             RTC_MODE1_INTENCLR_CMP0_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENCLR_CMP0_Msk instead */
#define RTC_MODE1_INTENCLR_CMP1_Pos         9                                              /**< (RTC_MODE1_INTENCLR) Compare 1 Interrupt Enable Position */
#define RTC_MODE1_INTENCLR_CMP1_Msk         (_U_(0x1) << RTC_MODE1_INTENCLR_CMP1_Pos)      /**< (RTC_MODE1_INTENCLR) Compare 1 Interrupt Enable Mask */
#define RTC_MODE1_INTENCLR_CMP1             RTC_MODE1_INTENCLR_CMP1_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENCLR_CMP1_Msk instead */
#define RTC_MODE1_INTENCLR_OVF_Pos          15                                             /**< (RTC_MODE1_INTENCLR) Overflow Interrupt Enable Position */
#define RTC_MODE1_INTENCLR_OVF_Msk          (_U_(0x1) << RTC_MODE1_INTENCLR_OVF_Pos)       /**< (RTC_MODE1_INTENCLR) Overflow Interrupt Enable Mask */
#define RTC_MODE1_INTENCLR_OVF              RTC_MODE1_INTENCLR_OVF_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENCLR_OVF_Msk instead */
#define RTC_MODE1_INTENCLR_MASK             _U_(0x83FF)                                    /**< \deprecated (RTC_MODE1_INTENCLR) Register MASK  (Use RTC_MODE1_INTENCLR_Msk instead)  */
#define RTC_MODE1_INTENCLR_Msk              _U_(0x83FF)                                    /**< (RTC_MODE1_INTENCLR) Register Mask  */

#define RTC_MODE1_INTENCLR_PER_Pos          0                                              /**< (RTC_MODE1_INTENCLR Position) Periodic Interval x Interrupt Enable */
#define RTC_MODE1_INTENCLR_PER_Msk          (_U_(0xFF) << RTC_MODE1_INTENCLR_PER_Pos)      /**< (RTC_MODE1_INTENCLR Mask) PER */
#define RTC_MODE1_INTENCLR_PER(value)       (RTC_MODE1_INTENCLR_PER_Msk & ((value) << RTC_MODE1_INTENCLR_PER_Pos))  
#define RTC_MODE1_INTENCLR_CMP_Pos          8                                              /**< (RTC_MODE1_INTENCLR Position) Compare x Interrupt Enable */
#define RTC_MODE1_INTENCLR_CMP_Msk          (_U_(0x3) << RTC_MODE1_INTENCLR_CMP_Pos)       /**< (RTC_MODE1_INTENCLR Mask) CMP */
#define RTC_MODE1_INTENCLR_CMP(value)       (RTC_MODE1_INTENCLR_CMP_Msk & ((value) << RTC_MODE1_INTENCLR_CMP_Pos))  

/* -------- RTC_MODE2_INTENCLR : (RTC Offset: 0x08) (R/W 16) MODE2 Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t PER0:1;                    /**< bit:      0  Periodic Interval 0 Interrupt Enable     */
    uint16_t PER1:1;                    /**< bit:      1  Periodic Interval 1 Interrupt Enable     */
    uint16_t PER2:1;                    /**< bit:      2  Periodic Interval 2 Interrupt Enable     */
    uint16_t PER3:1;                    /**< bit:      3  Periodic Interval 3 Interrupt Enable     */
    uint16_t PER4:1;                    /**< bit:      4  Periodic Interval 4 Interrupt Enable     */
    uint16_t PER5:1;                    /**< bit:      5  Periodic Interval 5 Interrupt Enable     */
    uint16_t PER6:1;                    /**< bit:      6  Periodic Interval 6 Interrupt Enable     */
    uint16_t PER7:1;                    /**< bit:      7  Periodic Interval 7 Interrupt Enable     */
    uint16_t ALARM0:1;                  /**< bit:      8  Alarm 0 Interrupt Enable                 */
    uint16_t :6;                        /**< bit:  9..14  Reserved */
    uint16_t OVF:1;                     /**< bit:     15  Overflow Interrupt Enable                */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint16_t PER:8;                     /**< bit:   0..7  Periodic Interval x Interrupt Enable     */
    uint16_t ALARM:1;                   /**< bit:      8  Alarm x Interrupt Enable                 */
    uint16_t :7;                        /**< bit:  9..15 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint16_t reg;                         /**< Type used for register access */
} RTC_MODE2_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE2_INTENCLR_OFFSET           (0x08)                                        /**<  (RTC_MODE2_INTENCLR) MODE2 Interrupt Enable Clear  Offset */
#define RTC_MODE2_INTENCLR_RESETVALUE       _U_(0x00)                                     /**<  (RTC_MODE2_INTENCLR) MODE2 Interrupt Enable Clear  Reset Value */

#define RTC_MODE2_INTENCLR_PER0_Pos         0                                              /**< (RTC_MODE2_INTENCLR) Periodic Interval 0 Interrupt Enable Position */
#define RTC_MODE2_INTENCLR_PER0_Msk         (_U_(0x1) << RTC_MODE2_INTENCLR_PER0_Pos)      /**< (RTC_MODE2_INTENCLR) Periodic Interval 0 Interrupt Enable Mask */
#define RTC_MODE2_INTENCLR_PER0             RTC_MODE2_INTENCLR_PER0_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENCLR_PER0_Msk instead */
#define RTC_MODE2_INTENCLR_PER1_Pos         1                                              /**< (RTC_MODE2_INTENCLR) Periodic Interval 1 Interrupt Enable Position */
#define RTC_MODE2_INTENCLR_PER1_Msk         (_U_(0x1) << RTC_MODE2_INTENCLR_PER1_Pos)      /**< (RTC_MODE2_INTENCLR) Periodic Interval 1 Interrupt Enable Mask */
#define RTC_MODE2_INTENCLR_PER1             RTC_MODE2_INTENCLR_PER1_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENCLR_PER1_Msk instead */
#define RTC_MODE2_INTENCLR_PER2_Pos         2                                              /**< (RTC_MODE2_INTENCLR) Periodic Interval 2 Interrupt Enable Position */
#define RTC_MODE2_INTENCLR_PER2_Msk         (_U_(0x1) << RTC_MODE2_INTENCLR_PER2_Pos)      /**< (RTC_MODE2_INTENCLR) Periodic Interval 2 Interrupt Enable Mask */
#define RTC_MODE2_INTENCLR_PER2             RTC_MODE2_INTENCLR_PER2_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENCLR_PER2_Msk instead */
#define RTC_MODE2_INTENCLR_PER3_Pos         3                                              /**< (RTC_MODE2_INTENCLR) Periodic Interval 3 Interrupt Enable Position */
#define RTC_MODE2_INTENCLR_PER3_Msk         (_U_(0x1) << RTC_MODE2_INTENCLR_PER3_Pos)      /**< (RTC_MODE2_INTENCLR) Periodic Interval 3 Interrupt Enable Mask */
#define RTC_MODE2_INTENCLR_PER3             RTC_MODE2_INTENCLR_PER3_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENCLR_PER3_Msk instead */
#define RTC_MODE2_INTENCLR_PER4_Pos         4                                              /**< (RTC_MODE2_INTENCLR) Periodic Interval 4 Interrupt Enable Position */
#define RTC_MODE2_INTENCLR_PER4_Msk         (_U_(0x1) << RTC_MODE2_INTENCLR_PER4_Pos)      /**< (RTC_MODE2_INTENCLR) Periodic Interval 4 Interrupt Enable Mask */
#define RTC_MODE2_INTENCLR_PER4             RTC_MODE2_INTENCLR_PER4_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENCLR_PER4_Msk instead */
#define RTC_MODE2_INTENCLR_PER5_Pos         5                                              /**< (RTC_MODE2_INTENCLR) Periodic Interval 5 Interrupt Enable Position */
#define RTC_MODE2_INTENCLR_PER5_Msk         (_U_(0x1) << RTC_MODE2_INTENCLR_PER5_Pos)      /**< (RTC_MODE2_INTENCLR) Periodic Interval 5 Interrupt Enable Mask */
#define RTC_MODE2_INTENCLR_PER5             RTC_MODE2_INTENCLR_PER5_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENCLR_PER5_Msk instead */
#define RTC_MODE2_INTENCLR_PER6_Pos         6                                              /**< (RTC_MODE2_INTENCLR) Periodic Interval 6 Interrupt Enable Position */
#define RTC_MODE2_INTENCLR_PER6_Msk         (_U_(0x1) << RTC_MODE2_INTENCLR_PER6_Pos)      /**< (RTC_MODE2_INTENCLR) Periodic Interval 6 Interrupt Enable Mask */
#define RTC_MODE2_INTENCLR_PER6             RTC_MODE2_INTENCLR_PER6_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENCLR_PER6_Msk instead */
#define RTC_MODE2_INTENCLR_PER7_Pos         7                                              /**< (RTC_MODE2_INTENCLR) Periodic Interval 7 Interrupt Enable Position */
#define RTC_MODE2_INTENCLR_PER7_Msk         (_U_(0x1) << RTC_MODE2_INTENCLR_PER7_Pos)      /**< (RTC_MODE2_INTENCLR) Periodic Interval 7 Interrupt Enable Mask */
#define RTC_MODE2_INTENCLR_PER7             RTC_MODE2_INTENCLR_PER7_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENCLR_PER7_Msk instead */
#define RTC_MODE2_INTENCLR_ALARM0_Pos       8                                              /**< (RTC_MODE2_INTENCLR) Alarm 0 Interrupt Enable Position */
#define RTC_MODE2_INTENCLR_ALARM0_Msk       (_U_(0x1) << RTC_MODE2_INTENCLR_ALARM0_Pos)    /**< (RTC_MODE2_INTENCLR) Alarm 0 Interrupt Enable Mask */
#define RTC_MODE2_INTENCLR_ALARM0           RTC_MODE2_INTENCLR_ALARM0_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENCLR_ALARM0_Msk instead */
#define RTC_MODE2_INTENCLR_OVF_Pos          15                                             /**< (RTC_MODE2_INTENCLR) Overflow Interrupt Enable Position */
#define RTC_MODE2_INTENCLR_OVF_Msk          (_U_(0x1) << RTC_MODE2_INTENCLR_OVF_Pos)       /**< (RTC_MODE2_INTENCLR) Overflow Interrupt Enable Mask */
#define RTC_MODE2_INTENCLR_OVF              RTC_MODE2_INTENCLR_OVF_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENCLR_OVF_Msk instead */
#define RTC_MODE2_INTENCLR_MASK             _U_(0x81FF)                                    /**< \deprecated (RTC_MODE2_INTENCLR) Register MASK  (Use RTC_MODE2_INTENCLR_Msk instead)  */
#define RTC_MODE2_INTENCLR_Msk              _U_(0x81FF)                                    /**< (RTC_MODE2_INTENCLR) Register Mask  */

#define RTC_MODE2_INTENCLR_PER_Pos          0                                              /**< (RTC_MODE2_INTENCLR Position) Periodic Interval x Interrupt Enable */
#define RTC_MODE2_INTENCLR_PER_Msk          (_U_(0xFF) << RTC_MODE2_INTENCLR_PER_Pos)      /**< (RTC_MODE2_INTENCLR Mask) PER */
#define RTC_MODE2_INTENCLR_PER(value)       (RTC_MODE2_INTENCLR_PER_Msk & ((value) << RTC_MODE2_INTENCLR_PER_Pos))  
#define RTC_MODE2_INTENCLR_ALARM_Pos        8                                              /**< (RTC_MODE2_INTENCLR Position) Alarm x Interrupt Enable */
#define RTC_MODE2_INTENCLR_ALARM_Msk        (_U_(0x1) << RTC_MODE2_INTENCLR_ALARM_Pos)     /**< (RTC_MODE2_INTENCLR Mask) ALARM */
#define RTC_MODE2_INTENCLR_ALARM(value)     (RTC_MODE2_INTENCLR_ALARM_Msk & ((value) << RTC_MODE2_INTENCLR_ALARM_Pos))  

/* -------- RTC_MODE0_INTENSET : (RTC Offset: 0x0a) (R/W 16) MODE0 Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t PER0:1;                    /**< bit:      0  Periodic Interval 0 Interrupt Enable     */
    uint16_t PER1:1;                    /**< bit:      1  Periodic Interval 1 Interrupt Enable     */
    uint16_t PER2:1;                    /**< bit:      2  Periodic Interval 2 Interrupt Enable     */
    uint16_t PER3:1;                    /**< bit:      3  Periodic Interval 3 Interrupt Enable     */
    uint16_t PER4:1;                    /**< bit:      4  Periodic Interval 4 Interrupt Enable     */
    uint16_t PER5:1;                    /**< bit:      5  Periodic Interval 5 Interrupt Enable     */
    uint16_t PER6:1;                    /**< bit:      6  Periodic Interval 6 Interrupt Enable     */
    uint16_t PER7:1;                    /**< bit:      7  Periodic Interval 7 Interrupt Enable     */
    uint16_t CMP0:1;                    /**< bit:      8  Compare 0 Interrupt Enable               */
    uint16_t :6;                        /**< bit:  9..14  Reserved */
    uint16_t OVF:1;                     /**< bit:     15  Overflow Interrupt Enable                */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint16_t PER:8;                     /**< bit:   0..7  Periodic Interval x Interrupt Enable     */
    uint16_t CMP:1;                     /**< bit:      8  Compare x Interrupt Enable               */
    uint16_t :7;                        /**< bit:  9..15 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint16_t reg;                         /**< Type used for register access */
} RTC_MODE0_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE0_INTENSET_OFFSET           (0x0A)                                        /**<  (RTC_MODE0_INTENSET) MODE0 Interrupt Enable Set  Offset */
#define RTC_MODE0_INTENSET_RESETVALUE       _U_(0x00)                                     /**<  (RTC_MODE0_INTENSET) MODE0 Interrupt Enable Set  Reset Value */

#define RTC_MODE0_INTENSET_PER0_Pos         0                                              /**< (RTC_MODE0_INTENSET) Periodic Interval 0 Interrupt Enable Position */
#define RTC_MODE0_INTENSET_PER0_Msk         (_U_(0x1) << RTC_MODE0_INTENSET_PER0_Pos)      /**< (RTC_MODE0_INTENSET) Periodic Interval 0 Interrupt Enable Mask */
#define RTC_MODE0_INTENSET_PER0             RTC_MODE0_INTENSET_PER0_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENSET_PER0_Msk instead */
#define RTC_MODE0_INTENSET_PER1_Pos         1                                              /**< (RTC_MODE0_INTENSET) Periodic Interval 1 Interrupt Enable Position */
#define RTC_MODE0_INTENSET_PER1_Msk         (_U_(0x1) << RTC_MODE0_INTENSET_PER1_Pos)      /**< (RTC_MODE0_INTENSET) Periodic Interval 1 Interrupt Enable Mask */
#define RTC_MODE0_INTENSET_PER1             RTC_MODE0_INTENSET_PER1_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENSET_PER1_Msk instead */
#define RTC_MODE0_INTENSET_PER2_Pos         2                                              /**< (RTC_MODE0_INTENSET) Periodic Interval 2 Interrupt Enable Position */
#define RTC_MODE0_INTENSET_PER2_Msk         (_U_(0x1) << RTC_MODE0_INTENSET_PER2_Pos)      /**< (RTC_MODE0_INTENSET) Periodic Interval 2 Interrupt Enable Mask */
#define RTC_MODE0_INTENSET_PER2             RTC_MODE0_INTENSET_PER2_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENSET_PER2_Msk instead */
#define RTC_MODE0_INTENSET_PER3_Pos         3                                              /**< (RTC_MODE0_INTENSET) Periodic Interval 3 Interrupt Enable Position */
#define RTC_MODE0_INTENSET_PER3_Msk         (_U_(0x1) << RTC_MODE0_INTENSET_PER3_Pos)      /**< (RTC_MODE0_INTENSET) Periodic Interval 3 Interrupt Enable Mask */
#define RTC_MODE0_INTENSET_PER3             RTC_MODE0_INTENSET_PER3_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENSET_PER3_Msk instead */
#define RTC_MODE0_INTENSET_PER4_Pos         4                                              /**< (RTC_MODE0_INTENSET) Periodic Interval 4 Interrupt Enable Position */
#define RTC_MODE0_INTENSET_PER4_Msk         (_U_(0x1) << RTC_MODE0_INTENSET_PER4_Pos)      /**< (RTC_MODE0_INTENSET) Periodic Interval 4 Interrupt Enable Mask */
#define RTC_MODE0_INTENSET_PER4             RTC_MODE0_INTENSET_PER4_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENSET_PER4_Msk instead */
#define RTC_MODE0_INTENSET_PER5_Pos         5                                              /**< (RTC_MODE0_INTENSET) Periodic Interval 5 Interrupt Enable Position */
#define RTC_MODE0_INTENSET_PER5_Msk         (_U_(0x1) << RTC_MODE0_INTENSET_PER5_Pos)      /**< (RTC_MODE0_INTENSET) Periodic Interval 5 Interrupt Enable Mask */
#define RTC_MODE0_INTENSET_PER5             RTC_MODE0_INTENSET_PER5_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENSET_PER5_Msk instead */
#define RTC_MODE0_INTENSET_PER6_Pos         6                                              /**< (RTC_MODE0_INTENSET) Periodic Interval 6 Interrupt Enable Position */
#define RTC_MODE0_INTENSET_PER6_Msk         (_U_(0x1) << RTC_MODE0_INTENSET_PER6_Pos)      /**< (RTC_MODE0_INTENSET) Periodic Interval 6 Interrupt Enable Mask */
#define RTC_MODE0_INTENSET_PER6             RTC_MODE0_INTENSET_PER6_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENSET_PER6_Msk instead */
#define RTC_MODE0_INTENSET_PER7_Pos         7                                              /**< (RTC_MODE0_INTENSET) Periodic Interval 7 Interrupt Enable Position */
#define RTC_MODE0_INTENSET_PER7_Msk         (_U_(0x1) << RTC_MODE0_INTENSET_PER7_Pos)      /**< (RTC_MODE0_INTENSET) Periodic Interval 7 Interrupt Enable Mask */
#define RTC_MODE0_INTENSET_PER7             RTC_MODE0_INTENSET_PER7_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENSET_PER7_Msk instead */
#define RTC_MODE0_INTENSET_CMP0_Pos         8                                              /**< (RTC_MODE0_INTENSET) Compare 0 Interrupt Enable Position */
#define RTC_MODE0_INTENSET_CMP0_Msk         (_U_(0x1) << RTC_MODE0_INTENSET_CMP0_Pos)      /**< (RTC_MODE0_INTENSET) Compare 0 Interrupt Enable Mask */
#define RTC_MODE0_INTENSET_CMP0             RTC_MODE0_INTENSET_CMP0_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENSET_CMP0_Msk instead */
#define RTC_MODE0_INTENSET_OVF_Pos          15                                             /**< (RTC_MODE0_INTENSET) Overflow Interrupt Enable Position */
#define RTC_MODE0_INTENSET_OVF_Msk          (_U_(0x1) << RTC_MODE0_INTENSET_OVF_Pos)       /**< (RTC_MODE0_INTENSET) Overflow Interrupt Enable Mask */
#define RTC_MODE0_INTENSET_OVF              RTC_MODE0_INTENSET_OVF_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTENSET_OVF_Msk instead */
#define RTC_MODE0_INTENSET_MASK             _U_(0x81FF)                                    /**< \deprecated (RTC_MODE0_INTENSET) Register MASK  (Use RTC_MODE0_INTENSET_Msk instead)  */
#define RTC_MODE0_INTENSET_Msk              _U_(0x81FF)                                    /**< (RTC_MODE0_INTENSET) Register Mask  */

#define RTC_MODE0_INTENSET_PER_Pos          0                                              /**< (RTC_MODE0_INTENSET Position) Periodic Interval x Interrupt Enable */
#define RTC_MODE0_INTENSET_PER_Msk          (_U_(0xFF) << RTC_MODE0_INTENSET_PER_Pos)      /**< (RTC_MODE0_INTENSET Mask) PER */
#define RTC_MODE0_INTENSET_PER(value)       (RTC_MODE0_INTENSET_PER_Msk & ((value) << RTC_MODE0_INTENSET_PER_Pos))  
#define RTC_MODE0_INTENSET_CMP_Pos          8                                              /**< (RTC_MODE0_INTENSET Position) Compare x Interrupt Enable */
#define RTC_MODE0_INTENSET_CMP_Msk          (_U_(0x1) << RTC_MODE0_INTENSET_CMP_Pos)       /**< (RTC_MODE0_INTENSET Mask) CMP */
#define RTC_MODE0_INTENSET_CMP(value)       (RTC_MODE0_INTENSET_CMP_Msk & ((value) << RTC_MODE0_INTENSET_CMP_Pos))  

/* -------- RTC_MODE1_INTENSET : (RTC Offset: 0x0a) (R/W 16) MODE1 Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t PER0:1;                    /**< bit:      0  Periodic Interval 0 Interrupt Enable     */
    uint16_t PER1:1;                    /**< bit:      1  Periodic Interval 1 Interrupt Enable     */
    uint16_t PER2:1;                    /**< bit:      2  Periodic Interval 2 Interrupt Enable     */
    uint16_t PER3:1;                    /**< bit:      3  Periodic Interval 3 Interrupt Enable     */
    uint16_t PER4:1;                    /**< bit:      4  Periodic Interval 4 Interrupt Enable     */
    uint16_t PER5:1;                    /**< bit:      5  Periodic Interval 5 Interrupt Enable     */
    uint16_t PER6:1;                    /**< bit:      6  Periodic Interval 6 Interrupt Enable     */
    uint16_t PER7:1;                    /**< bit:      7  Periodic Interval 7 Interrupt Enable     */
    uint16_t CMP0:1;                    /**< bit:      8  Compare 0 Interrupt Enable               */
    uint16_t CMP1:1;                    /**< bit:      9  Compare 1 Interrupt Enable               */
    uint16_t :5;                        /**< bit: 10..14  Reserved */
    uint16_t OVF:1;                     /**< bit:     15  Overflow Interrupt Enable                */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint16_t PER:8;                     /**< bit:   0..7  Periodic Interval x Interrupt Enable     */
    uint16_t CMP:2;                     /**< bit:   8..9  Compare x Interrupt Enable               */
    uint16_t :6;                        /**< bit: 10..15 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint16_t reg;                         /**< Type used for register access */
} RTC_MODE1_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE1_INTENSET_OFFSET           (0x0A)                                        /**<  (RTC_MODE1_INTENSET) MODE1 Interrupt Enable Set  Offset */
#define RTC_MODE1_INTENSET_RESETVALUE       _U_(0x00)                                     /**<  (RTC_MODE1_INTENSET) MODE1 Interrupt Enable Set  Reset Value */

#define RTC_MODE1_INTENSET_PER0_Pos         0                                              /**< (RTC_MODE1_INTENSET) Periodic Interval 0 Interrupt Enable Position */
#define RTC_MODE1_INTENSET_PER0_Msk         (_U_(0x1) << RTC_MODE1_INTENSET_PER0_Pos)      /**< (RTC_MODE1_INTENSET) Periodic Interval 0 Interrupt Enable Mask */
#define RTC_MODE1_INTENSET_PER0             RTC_MODE1_INTENSET_PER0_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENSET_PER0_Msk instead */
#define RTC_MODE1_INTENSET_PER1_Pos         1                                              /**< (RTC_MODE1_INTENSET) Periodic Interval 1 Interrupt Enable Position */
#define RTC_MODE1_INTENSET_PER1_Msk         (_U_(0x1) << RTC_MODE1_INTENSET_PER1_Pos)      /**< (RTC_MODE1_INTENSET) Periodic Interval 1 Interrupt Enable Mask */
#define RTC_MODE1_INTENSET_PER1             RTC_MODE1_INTENSET_PER1_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENSET_PER1_Msk instead */
#define RTC_MODE1_INTENSET_PER2_Pos         2                                              /**< (RTC_MODE1_INTENSET) Periodic Interval 2 Interrupt Enable Position */
#define RTC_MODE1_INTENSET_PER2_Msk         (_U_(0x1) << RTC_MODE1_INTENSET_PER2_Pos)      /**< (RTC_MODE1_INTENSET) Periodic Interval 2 Interrupt Enable Mask */
#define RTC_MODE1_INTENSET_PER2             RTC_MODE1_INTENSET_PER2_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENSET_PER2_Msk instead */
#define RTC_MODE1_INTENSET_PER3_Pos         3                                              /**< (RTC_MODE1_INTENSET) Periodic Interval 3 Interrupt Enable Position */
#define RTC_MODE1_INTENSET_PER3_Msk         (_U_(0x1) << RTC_MODE1_INTENSET_PER3_Pos)      /**< (RTC_MODE1_INTENSET) Periodic Interval 3 Interrupt Enable Mask */
#define RTC_MODE1_INTENSET_PER3             RTC_MODE1_INTENSET_PER3_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENSET_PER3_Msk instead */
#define RTC_MODE1_INTENSET_PER4_Pos         4                                              /**< (RTC_MODE1_INTENSET) Periodic Interval 4 Interrupt Enable Position */
#define RTC_MODE1_INTENSET_PER4_Msk         (_U_(0x1) << RTC_MODE1_INTENSET_PER4_Pos)      /**< (RTC_MODE1_INTENSET) Periodic Interval 4 Interrupt Enable Mask */
#define RTC_MODE1_INTENSET_PER4             RTC_MODE1_INTENSET_PER4_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENSET_PER4_Msk instead */
#define RTC_MODE1_INTENSET_PER5_Pos         5                                              /**< (RTC_MODE1_INTENSET) Periodic Interval 5 Interrupt Enable Position */
#define RTC_MODE1_INTENSET_PER5_Msk         (_U_(0x1) << RTC_MODE1_INTENSET_PER5_Pos)      /**< (RTC_MODE1_INTENSET) Periodic Interval 5 Interrupt Enable Mask */
#define RTC_MODE1_INTENSET_PER5             RTC_MODE1_INTENSET_PER5_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENSET_PER5_Msk instead */
#define RTC_MODE1_INTENSET_PER6_Pos         6                                              /**< (RTC_MODE1_INTENSET) Periodic Interval 6 Interrupt Enable Position */
#define RTC_MODE1_INTENSET_PER6_Msk         (_U_(0x1) << RTC_MODE1_INTENSET_PER6_Pos)      /**< (RTC_MODE1_INTENSET) Periodic Interval 6 Interrupt Enable Mask */
#define RTC_MODE1_INTENSET_PER6             RTC_MODE1_INTENSET_PER6_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENSET_PER6_Msk instead */
#define RTC_MODE1_INTENSET_PER7_Pos         7                                              /**< (RTC_MODE1_INTENSET) Periodic Interval 7 Interrupt Enable Position */
#define RTC_MODE1_INTENSET_PER7_Msk         (_U_(0x1) << RTC_MODE1_INTENSET_PER7_Pos)      /**< (RTC_MODE1_INTENSET) Periodic Interval 7 Interrupt Enable Mask */
#define RTC_MODE1_INTENSET_PER7             RTC_MODE1_INTENSET_PER7_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENSET_PER7_Msk instead */
#define RTC_MODE1_INTENSET_CMP0_Pos         8                                              /**< (RTC_MODE1_INTENSET) Compare 0 Interrupt Enable Position */
#define RTC_MODE1_INTENSET_CMP0_Msk         (_U_(0x1) << RTC_MODE1_INTENSET_CMP0_Pos)      /**< (RTC_MODE1_INTENSET) Compare 0 Interrupt Enable Mask */
#define RTC_MODE1_INTENSET_CMP0             RTC_MODE1_INTENSET_CMP0_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENSET_CMP0_Msk instead */
#define RTC_MODE1_INTENSET_CMP1_Pos         9                                              /**< (RTC_MODE1_INTENSET) Compare 1 Interrupt Enable Position */
#define RTC_MODE1_INTENSET_CMP1_Msk         (_U_(0x1) << RTC_MODE1_INTENSET_CMP1_Pos)      /**< (RTC_MODE1_INTENSET) Compare 1 Interrupt Enable Mask */
#define RTC_MODE1_INTENSET_CMP1             RTC_MODE1_INTENSET_CMP1_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENSET_CMP1_Msk instead */
#define RTC_MODE1_INTENSET_OVF_Pos          15                                             /**< (RTC_MODE1_INTENSET) Overflow Interrupt Enable Position */
#define RTC_MODE1_INTENSET_OVF_Msk          (_U_(0x1) << RTC_MODE1_INTENSET_OVF_Pos)       /**< (RTC_MODE1_INTENSET) Overflow Interrupt Enable Mask */
#define RTC_MODE1_INTENSET_OVF              RTC_MODE1_INTENSET_OVF_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTENSET_OVF_Msk instead */
#define RTC_MODE1_INTENSET_MASK             _U_(0x83FF)                                    /**< \deprecated (RTC_MODE1_INTENSET) Register MASK  (Use RTC_MODE1_INTENSET_Msk instead)  */
#define RTC_MODE1_INTENSET_Msk              _U_(0x83FF)                                    /**< (RTC_MODE1_INTENSET) Register Mask  */

#define RTC_MODE1_INTENSET_PER_Pos          0                                              /**< (RTC_MODE1_INTENSET Position) Periodic Interval x Interrupt Enable */
#define RTC_MODE1_INTENSET_PER_Msk          (_U_(0xFF) << RTC_MODE1_INTENSET_PER_Pos)      /**< (RTC_MODE1_INTENSET Mask) PER */
#define RTC_MODE1_INTENSET_PER(value)       (RTC_MODE1_INTENSET_PER_Msk & ((value) << RTC_MODE1_INTENSET_PER_Pos))  
#define RTC_MODE1_INTENSET_CMP_Pos          8                                              /**< (RTC_MODE1_INTENSET Position) Compare x Interrupt Enable */
#define RTC_MODE1_INTENSET_CMP_Msk          (_U_(0x3) << RTC_MODE1_INTENSET_CMP_Pos)       /**< (RTC_MODE1_INTENSET Mask) CMP */
#define RTC_MODE1_INTENSET_CMP(value)       (RTC_MODE1_INTENSET_CMP_Msk & ((value) << RTC_MODE1_INTENSET_CMP_Pos))  

/* -------- RTC_MODE2_INTENSET : (RTC Offset: 0x0a) (R/W 16) MODE2 Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t PER0:1;                    /**< bit:      0  Periodic Interval 0 Enable               */
    uint16_t PER1:1;                    /**< bit:      1  Periodic Interval 1 Enable               */
    uint16_t PER2:1;                    /**< bit:      2  Periodic Interval 2 Enable               */
    uint16_t PER3:1;                    /**< bit:      3  Periodic Interval 3 Enable               */
    uint16_t PER4:1;                    /**< bit:      4  Periodic Interval 4 Enable               */
    uint16_t PER5:1;                    /**< bit:      5  Periodic Interval 5 Enable               */
    uint16_t PER6:1;                    /**< bit:      6  Periodic Interval 6 Enable               */
    uint16_t PER7:1;                    /**< bit:      7  Periodic Interval 7 Enable               */
    uint16_t ALARM0:1;                  /**< bit:      8  Alarm 0 Interrupt Enable                 */
    uint16_t :6;                        /**< bit:  9..14  Reserved */
    uint16_t OVF:1;                     /**< bit:     15  Overflow Interrupt Enable                */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint16_t PER:8;                     /**< bit:   0..7  Periodic Interval x Enable               */
    uint16_t ALARM:1;                   /**< bit:      8  Alarm x Interrupt Enable                 */
    uint16_t :7;                        /**< bit:  9..15 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint16_t reg;                         /**< Type used for register access */
} RTC_MODE2_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE2_INTENSET_OFFSET           (0x0A)                                        /**<  (RTC_MODE2_INTENSET) MODE2 Interrupt Enable Set  Offset */
#define RTC_MODE2_INTENSET_RESETVALUE       _U_(0x00)                                     /**<  (RTC_MODE2_INTENSET) MODE2 Interrupt Enable Set  Reset Value */

#define RTC_MODE2_INTENSET_PER0_Pos         0                                              /**< (RTC_MODE2_INTENSET) Periodic Interval 0 Enable Position */
#define RTC_MODE2_INTENSET_PER0_Msk         (_U_(0x1) << RTC_MODE2_INTENSET_PER0_Pos)      /**< (RTC_MODE2_INTENSET) Periodic Interval 0 Enable Mask */
#define RTC_MODE2_INTENSET_PER0             RTC_MODE2_INTENSET_PER0_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENSET_PER0_Msk instead */
#define RTC_MODE2_INTENSET_PER1_Pos         1                                              /**< (RTC_MODE2_INTENSET) Periodic Interval 1 Enable Position */
#define RTC_MODE2_INTENSET_PER1_Msk         (_U_(0x1) << RTC_MODE2_INTENSET_PER1_Pos)      /**< (RTC_MODE2_INTENSET) Periodic Interval 1 Enable Mask */
#define RTC_MODE2_INTENSET_PER1             RTC_MODE2_INTENSET_PER1_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENSET_PER1_Msk instead */
#define RTC_MODE2_INTENSET_PER2_Pos         2                                              /**< (RTC_MODE2_INTENSET) Periodic Interval 2 Enable Position */
#define RTC_MODE2_INTENSET_PER2_Msk         (_U_(0x1) << RTC_MODE2_INTENSET_PER2_Pos)      /**< (RTC_MODE2_INTENSET) Periodic Interval 2 Enable Mask */
#define RTC_MODE2_INTENSET_PER2             RTC_MODE2_INTENSET_PER2_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENSET_PER2_Msk instead */
#define RTC_MODE2_INTENSET_PER3_Pos         3                                              /**< (RTC_MODE2_INTENSET) Periodic Interval 3 Enable Position */
#define RTC_MODE2_INTENSET_PER3_Msk         (_U_(0x1) << RTC_MODE2_INTENSET_PER3_Pos)      /**< (RTC_MODE2_INTENSET) Periodic Interval 3 Enable Mask */
#define RTC_MODE2_INTENSET_PER3             RTC_MODE2_INTENSET_PER3_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENSET_PER3_Msk instead */
#define RTC_MODE2_INTENSET_PER4_Pos         4                                              /**< (RTC_MODE2_INTENSET) Periodic Interval 4 Enable Position */
#define RTC_MODE2_INTENSET_PER4_Msk         (_U_(0x1) << RTC_MODE2_INTENSET_PER4_Pos)      /**< (RTC_MODE2_INTENSET) Periodic Interval 4 Enable Mask */
#define RTC_MODE2_INTENSET_PER4             RTC_MODE2_INTENSET_PER4_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENSET_PER4_Msk instead */
#define RTC_MODE2_INTENSET_PER5_Pos         5                                              /**< (RTC_MODE2_INTENSET) Periodic Interval 5 Enable Position */
#define RTC_MODE2_INTENSET_PER5_Msk         (_U_(0x1) << RTC_MODE2_INTENSET_PER5_Pos)      /**< (RTC_MODE2_INTENSET) Periodic Interval 5 Enable Mask */
#define RTC_MODE2_INTENSET_PER5             RTC_MODE2_INTENSET_PER5_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENSET_PER5_Msk instead */
#define RTC_MODE2_INTENSET_PER6_Pos         6                                              /**< (RTC_MODE2_INTENSET) Periodic Interval 6 Enable Position */
#define RTC_MODE2_INTENSET_PER6_Msk         (_U_(0x1) << RTC_MODE2_INTENSET_PER6_Pos)      /**< (RTC_MODE2_INTENSET) Periodic Interval 6 Enable Mask */
#define RTC_MODE2_INTENSET_PER6             RTC_MODE2_INTENSET_PER6_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENSET_PER6_Msk instead */
#define RTC_MODE2_INTENSET_PER7_Pos         7                                              /**< (RTC_MODE2_INTENSET) Periodic Interval 7 Enable Position */
#define RTC_MODE2_INTENSET_PER7_Msk         (_U_(0x1) << RTC_MODE2_INTENSET_PER7_Pos)      /**< (RTC_MODE2_INTENSET) Periodic Interval 7 Enable Mask */
#define RTC_MODE2_INTENSET_PER7             RTC_MODE2_INTENSET_PER7_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENSET_PER7_Msk instead */
#define RTC_MODE2_INTENSET_ALARM0_Pos       8                                              /**< (RTC_MODE2_INTENSET) Alarm 0 Interrupt Enable Position */
#define RTC_MODE2_INTENSET_ALARM0_Msk       (_U_(0x1) << RTC_MODE2_INTENSET_ALARM0_Pos)    /**< (RTC_MODE2_INTENSET) Alarm 0 Interrupt Enable Mask */
#define RTC_MODE2_INTENSET_ALARM0           RTC_MODE2_INTENSET_ALARM0_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENSET_ALARM0_Msk instead */
#define RTC_MODE2_INTENSET_OVF_Pos          15                                             /**< (RTC_MODE2_INTENSET) Overflow Interrupt Enable Position */
#define RTC_MODE2_INTENSET_OVF_Msk          (_U_(0x1) << RTC_MODE2_INTENSET_OVF_Pos)       /**< (RTC_MODE2_INTENSET) Overflow Interrupt Enable Mask */
#define RTC_MODE2_INTENSET_OVF              RTC_MODE2_INTENSET_OVF_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTENSET_OVF_Msk instead */
#define RTC_MODE2_INTENSET_MASK             _U_(0x81FF)                                    /**< \deprecated (RTC_MODE2_INTENSET) Register MASK  (Use RTC_MODE2_INTENSET_Msk instead)  */
#define RTC_MODE2_INTENSET_Msk              _U_(0x81FF)                                    /**< (RTC_MODE2_INTENSET) Register Mask  */

#define RTC_MODE2_INTENSET_PER_Pos          0                                              /**< (RTC_MODE2_INTENSET Position) Periodic Interval x Enable */
#define RTC_MODE2_INTENSET_PER_Msk          (_U_(0xFF) << RTC_MODE2_INTENSET_PER_Pos)      /**< (RTC_MODE2_INTENSET Mask) PER */
#define RTC_MODE2_INTENSET_PER(value)       (RTC_MODE2_INTENSET_PER_Msk & ((value) << RTC_MODE2_INTENSET_PER_Pos))  
#define RTC_MODE2_INTENSET_ALARM_Pos        8                                              /**< (RTC_MODE2_INTENSET Position) Alarm x Interrupt Enable */
#define RTC_MODE2_INTENSET_ALARM_Msk        (_U_(0x1) << RTC_MODE2_INTENSET_ALARM_Pos)     /**< (RTC_MODE2_INTENSET Mask) ALARM */
#define RTC_MODE2_INTENSET_ALARM(value)     (RTC_MODE2_INTENSET_ALARM_Msk & ((value) << RTC_MODE2_INTENSET_ALARM_Pos))  

/* -------- RTC_MODE0_INTFLAG : (RTC Offset: 0x0c) (R/W 16) MODE0 Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint16_t PER0:1;                    /**< bit:      0  Periodic Interval 0                      */
    __I uint16_t PER1:1;                    /**< bit:      1  Periodic Interval 1                      */
    __I uint16_t PER2:1;                    /**< bit:      2  Periodic Interval 2                      */
    __I uint16_t PER3:1;                    /**< bit:      3  Periodic Interval 3                      */
    __I uint16_t PER4:1;                    /**< bit:      4  Periodic Interval 4                      */
    __I uint16_t PER5:1;                    /**< bit:      5  Periodic Interval 5                      */
    __I uint16_t PER6:1;                    /**< bit:      6  Periodic Interval 6                      */
    __I uint16_t PER7:1;                    /**< bit:      7  Periodic Interval 7                      */
    __I uint16_t CMP0:1;                    /**< bit:      8  Compare 0                                */
    __I uint16_t :6;                        /**< bit:  9..14  Reserved */
    __I uint16_t OVF:1;                     /**< bit:     15  Overflow                                 */
  } bit;                                /**< Structure used for bit  access */
  struct {
    __I uint16_t PER:8;                     /**< bit:   0..7  Periodic Interval x                      */
    __I uint16_t CMP:1;                     /**< bit:      8  Compare x                                */
    __I uint16_t :7;                        /**< bit:  9..15 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint16_t reg;                         /**< Type used for register access */
} RTC_MODE0_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE0_INTFLAG_OFFSET            (0x0C)                                        /**<  (RTC_MODE0_INTFLAG) MODE0 Interrupt Flag Status and Clear  Offset */
#define RTC_MODE0_INTFLAG_RESETVALUE        _U_(0x00)                                     /**<  (RTC_MODE0_INTFLAG) MODE0 Interrupt Flag Status and Clear  Reset Value */

#define RTC_MODE0_INTFLAG_PER0_Pos          0                                              /**< (RTC_MODE0_INTFLAG) Periodic Interval 0 Position */
#define RTC_MODE0_INTFLAG_PER0_Msk          (_U_(0x1) << RTC_MODE0_INTFLAG_PER0_Pos)       /**< (RTC_MODE0_INTFLAG) Periodic Interval 0 Mask */
#define RTC_MODE0_INTFLAG_PER0              RTC_MODE0_INTFLAG_PER0_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTFLAG_PER0_Msk instead */
#define RTC_MODE0_INTFLAG_PER1_Pos          1                                              /**< (RTC_MODE0_INTFLAG) Periodic Interval 1 Position */
#define RTC_MODE0_INTFLAG_PER1_Msk          (_U_(0x1) << RTC_MODE0_INTFLAG_PER1_Pos)       /**< (RTC_MODE0_INTFLAG) Periodic Interval 1 Mask */
#define RTC_MODE0_INTFLAG_PER1              RTC_MODE0_INTFLAG_PER1_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTFLAG_PER1_Msk instead */
#define RTC_MODE0_INTFLAG_PER2_Pos          2                                              /**< (RTC_MODE0_INTFLAG) Periodic Interval 2 Position */
#define RTC_MODE0_INTFLAG_PER2_Msk          (_U_(0x1) << RTC_MODE0_INTFLAG_PER2_Pos)       /**< (RTC_MODE0_INTFLAG) Periodic Interval 2 Mask */
#define RTC_MODE0_INTFLAG_PER2              RTC_MODE0_INTFLAG_PER2_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTFLAG_PER2_Msk instead */
#define RTC_MODE0_INTFLAG_PER3_Pos          3                                              /**< (RTC_MODE0_INTFLAG) Periodic Interval 3 Position */
#define RTC_MODE0_INTFLAG_PER3_Msk          (_U_(0x1) << RTC_MODE0_INTFLAG_PER3_Pos)       /**< (RTC_MODE0_INTFLAG) Periodic Interval 3 Mask */
#define RTC_MODE0_INTFLAG_PER3              RTC_MODE0_INTFLAG_PER3_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTFLAG_PER3_Msk instead */
#define RTC_MODE0_INTFLAG_PER4_Pos          4                                              /**< (RTC_MODE0_INTFLAG) Periodic Interval 4 Position */
#define RTC_MODE0_INTFLAG_PER4_Msk          (_U_(0x1) << RTC_MODE0_INTFLAG_PER4_Pos)       /**< (RTC_MODE0_INTFLAG) Periodic Interval 4 Mask */
#define RTC_MODE0_INTFLAG_PER4              RTC_MODE0_INTFLAG_PER4_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTFLAG_PER4_Msk instead */
#define RTC_MODE0_INTFLAG_PER5_Pos          5                                              /**< (RTC_MODE0_INTFLAG) Periodic Interval 5 Position */
#define RTC_MODE0_INTFLAG_PER5_Msk          (_U_(0x1) << RTC_MODE0_INTFLAG_PER5_Pos)       /**< (RTC_MODE0_INTFLAG) Periodic Interval 5 Mask */
#define RTC_MODE0_INTFLAG_PER5              RTC_MODE0_INTFLAG_PER5_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTFLAG_PER5_Msk instead */
#define RTC_MODE0_INTFLAG_PER6_Pos          6                                              /**< (RTC_MODE0_INTFLAG) Periodic Interval 6 Position */
#define RTC_MODE0_INTFLAG_PER6_Msk          (_U_(0x1) << RTC_MODE0_INTFLAG_PER6_Pos)       /**< (RTC_MODE0_INTFLAG) Periodic Interval 6 Mask */
#define RTC_MODE0_INTFLAG_PER6              RTC_MODE0_INTFLAG_PER6_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTFLAG_PER6_Msk instead */
#define RTC_MODE0_INTFLAG_PER7_Pos          7                                              /**< (RTC_MODE0_INTFLAG) Periodic Interval 7 Position */
#define RTC_MODE0_INTFLAG_PER7_Msk          (_U_(0x1) << RTC_MODE0_INTFLAG_PER7_Pos)       /**< (RTC_MODE0_INTFLAG) Periodic Interval 7 Mask */
#define RTC_MODE0_INTFLAG_PER7              RTC_MODE0_INTFLAG_PER7_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTFLAG_PER7_Msk instead */
#define RTC_MODE0_INTFLAG_CMP0_Pos          8                                              /**< (RTC_MODE0_INTFLAG) Compare 0 Position */
#define RTC_MODE0_INTFLAG_CMP0_Msk          (_U_(0x1) << RTC_MODE0_INTFLAG_CMP0_Pos)       /**< (RTC_MODE0_INTFLAG) Compare 0 Mask */
#define RTC_MODE0_INTFLAG_CMP0              RTC_MODE0_INTFLAG_CMP0_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTFLAG_CMP0_Msk instead */
#define RTC_MODE0_INTFLAG_OVF_Pos           15                                             /**< (RTC_MODE0_INTFLAG) Overflow Position */
#define RTC_MODE0_INTFLAG_OVF_Msk           (_U_(0x1) << RTC_MODE0_INTFLAG_OVF_Pos)        /**< (RTC_MODE0_INTFLAG) Overflow Mask */
#define RTC_MODE0_INTFLAG_OVF               RTC_MODE0_INTFLAG_OVF_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_INTFLAG_OVF_Msk instead */
#define RTC_MODE0_INTFLAG_MASK              _U_(0x81FF)                                    /**< \deprecated (RTC_MODE0_INTFLAG) Register MASK  (Use RTC_MODE0_INTFLAG_Msk instead)  */
#define RTC_MODE0_INTFLAG_Msk               _U_(0x81FF)                                    /**< (RTC_MODE0_INTFLAG) Register Mask  */

#define RTC_MODE0_INTFLAG_PER_Pos           0                                              /**< (RTC_MODE0_INTFLAG Position) Periodic Interval x */
#define RTC_MODE0_INTFLAG_PER_Msk           (_U_(0xFF) << RTC_MODE0_INTFLAG_PER_Pos)       /**< (RTC_MODE0_INTFLAG Mask) PER */
#define RTC_MODE0_INTFLAG_PER(value)        (RTC_MODE0_INTFLAG_PER_Msk & ((value) << RTC_MODE0_INTFLAG_PER_Pos))  
#define RTC_MODE0_INTFLAG_CMP_Pos           8                                              /**< (RTC_MODE0_INTFLAG Position) Compare x */
#define RTC_MODE0_INTFLAG_CMP_Msk           (_U_(0x1) << RTC_MODE0_INTFLAG_CMP_Pos)        /**< (RTC_MODE0_INTFLAG Mask) CMP */
#define RTC_MODE0_INTFLAG_CMP(value)        (RTC_MODE0_INTFLAG_CMP_Msk & ((value) << RTC_MODE0_INTFLAG_CMP_Pos))  

/* -------- RTC_MODE1_INTFLAG : (RTC Offset: 0x0c) (R/W 16) MODE1 Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint16_t PER0:1;                    /**< bit:      0  Periodic Interval 0                      */
    __I uint16_t PER1:1;                    /**< bit:      1  Periodic Interval 1                      */
    __I uint16_t PER2:1;                    /**< bit:      2  Periodic Interval 2                      */
    __I uint16_t PER3:1;                    /**< bit:      3  Periodic Interval 3                      */
    __I uint16_t PER4:1;                    /**< bit:      4  Periodic Interval 4                      */
    __I uint16_t PER5:1;                    /**< bit:      5  Periodic Interval 5                      */
    __I uint16_t PER6:1;                    /**< bit:      6  Periodic Interval 6                      */
    __I uint16_t PER7:1;                    /**< bit:      7  Periodic Interval 7                      */
    __I uint16_t CMP0:1;                    /**< bit:      8  Compare 0                                */
    __I uint16_t CMP1:1;                    /**< bit:      9  Compare 1                                */
    __I uint16_t :5;                        /**< bit: 10..14  Reserved */
    __I uint16_t OVF:1;                     /**< bit:     15  Overflow                                 */
  } bit;                                /**< Structure used for bit  access */
  struct {
    __I uint16_t PER:8;                     /**< bit:   0..7  Periodic Interval x                      */
    __I uint16_t CMP:2;                     /**< bit:   8..9  Compare x                                */
    __I uint16_t :6;                        /**< bit: 10..15 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint16_t reg;                         /**< Type used for register access */
} RTC_MODE1_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE1_INTFLAG_OFFSET            (0x0C)                                        /**<  (RTC_MODE1_INTFLAG) MODE1 Interrupt Flag Status and Clear  Offset */
#define RTC_MODE1_INTFLAG_RESETVALUE        _U_(0x00)                                     /**<  (RTC_MODE1_INTFLAG) MODE1 Interrupt Flag Status and Clear  Reset Value */

#define RTC_MODE1_INTFLAG_PER0_Pos          0                                              /**< (RTC_MODE1_INTFLAG) Periodic Interval 0 Position */
#define RTC_MODE1_INTFLAG_PER0_Msk          (_U_(0x1) << RTC_MODE1_INTFLAG_PER0_Pos)       /**< (RTC_MODE1_INTFLAG) Periodic Interval 0 Mask */
#define RTC_MODE1_INTFLAG_PER0              RTC_MODE1_INTFLAG_PER0_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTFLAG_PER0_Msk instead */
#define RTC_MODE1_INTFLAG_PER1_Pos          1                                              /**< (RTC_MODE1_INTFLAG) Periodic Interval 1 Position */
#define RTC_MODE1_INTFLAG_PER1_Msk          (_U_(0x1) << RTC_MODE1_INTFLAG_PER1_Pos)       /**< (RTC_MODE1_INTFLAG) Periodic Interval 1 Mask */
#define RTC_MODE1_INTFLAG_PER1              RTC_MODE1_INTFLAG_PER1_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTFLAG_PER1_Msk instead */
#define RTC_MODE1_INTFLAG_PER2_Pos          2                                              /**< (RTC_MODE1_INTFLAG) Periodic Interval 2 Position */
#define RTC_MODE1_INTFLAG_PER2_Msk          (_U_(0x1) << RTC_MODE1_INTFLAG_PER2_Pos)       /**< (RTC_MODE1_INTFLAG) Periodic Interval 2 Mask */
#define RTC_MODE1_INTFLAG_PER2              RTC_MODE1_INTFLAG_PER2_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTFLAG_PER2_Msk instead */
#define RTC_MODE1_INTFLAG_PER3_Pos          3                                              /**< (RTC_MODE1_INTFLAG) Periodic Interval 3 Position */
#define RTC_MODE1_INTFLAG_PER3_Msk          (_U_(0x1) << RTC_MODE1_INTFLAG_PER3_Pos)       /**< (RTC_MODE1_INTFLAG) Periodic Interval 3 Mask */
#define RTC_MODE1_INTFLAG_PER3              RTC_MODE1_INTFLAG_PER3_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTFLAG_PER3_Msk instead */
#define RTC_MODE1_INTFLAG_PER4_Pos          4                                              /**< (RTC_MODE1_INTFLAG) Periodic Interval 4 Position */
#define RTC_MODE1_INTFLAG_PER4_Msk          (_U_(0x1) << RTC_MODE1_INTFLAG_PER4_Pos)       /**< (RTC_MODE1_INTFLAG) Periodic Interval 4 Mask */
#define RTC_MODE1_INTFLAG_PER4              RTC_MODE1_INTFLAG_PER4_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTFLAG_PER4_Msk instead */
#define RTC_MODE1_INTFLAG_PER5_Pos          5                                              /**< (RTC_MODE1_INTFLAG) Periodic Interval 5 Position */
#define RTC_MODE1_INTFLAG_PER5_Msk          (_U_(0x1) << RTC_MODE1_INTFLAG_PER5_Pos)       /**< (RTC_MODE1_INTFLAG) Periodic Interval 5 Mask */
#define RTC_MODE1_INTFLAG_PER5              RTC_MODE1_INTFLAG_PER5_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTFLAG_PER5_Msk instead */
#define RTC_MODE1_INTFLAG_PER6_Pos          6                                              /**< (RTC_MODE1_INTFLAG) Periodic Interval 6 Position */
#define RTC_MODE1_INTFLAG_PER6_Msk          (_U_(0x1) << RTC_MODE1_INTFLAG_PER6_Pos)       /**< (RTC_MODE1_INTFLAG) Periodic Interval 6 Mask */
#define RTC_MODE1_INTFLAG_PER6              RTC_MODE1_INTFLAG_PER6_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTFLAG_PER6_Msk instead */
#define RTC_MODE1_INTFLAG_PER7_Pos          7                                              /**< (RTC_MODE1_INTFLAG) Periodic Interval 7 Position */
#define RTC_MODE1_INTFLAG_PER7_Msk          (_U_(0x1) << RTC_MODE1_INTFLAG_PER7_Pos)       /**< (RTC_MODE1_INTFLAG) Periodic Interval 7 Mask */
#define RTC_MODE1_INTFLAG_PER7              RTC_MODE1_INTFLAG_PER7_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTFLAG_PER7_Msk instead */
#define RTC_MODE1_INTFLAG_CMP0_Pos          8                                              /**< (RTC_MODE1_INTFLAG) Compare 0 Position */
#define RTC_MODE1_INTFLAG_CMP0_Msk          (_U_(0x1) << RTC_MODE1_INTFLAG_CMP0_Pos)       /**< (RTC_MODE1_INTFLAG) Compare 0 Mask */
#define RTC_MODE1_INTFLAG_CMP0              RTC_MODE1_INTFLAG_CMP0_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTFLAG_CMP0_Msk instead */
#define RTC_MODE1_INTFLAG_CMP1_Pos          9                                              /**< (RTC_MODE1_INTFLAG) Compare 1 Position */
#define RTC_MODE1_INTFLAG_CMP1_Msk          (_U_(0x1) << RTC_MODE1_INTFLAG_CMP1_Pos)       /**< (RTC_MODE1_INTFLAG) Compare 1 Mask */
#define RTC_MODE1_INTFLAG_CMP1              RTC_MODE1_INTFLAG_CMP1_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTFLAG_CMP1_Msk instead */
#define RTC_MODE1_INTFLAG_OVF_Pos           15                                             /**< (RTC_MODE1_INTFLAG) Overflow Position */
#define RTC_MODE1_INTFLAG_OVF_Msk           (_U_(0x1) << RTC_MODE1_INTFLAG_OVF_Pos)        /**< (RTC_MODE1_INTFLAG) Overflow Mask */
#define RTC_MODE1_INTFLAG_OVF               RTC_MODE1_INTFLAG_OVF_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_INTFLAG_OVF_Msk instead */
#define RTC_MODE1_INTFLAG_MASK              _U_(0x83FF)                                    /**< \deprecated (RTC_MODE1_INTFLAG) Register MASK  (Use RTC_MODE1_INTFLAG_Msk instead)  */
#define RTC_MODE1_INTFLAG_Msk               _U_(0x83FF)                                    /**< (RTC_MODE1_INTFLAG) Register Mask  */

#define RTC_MODE1_INTFLAG_PER_Pos           0                                              /**< (RTC_MODE1_INTFLAG Position) Periodic Interval x */
#define RTC_MODE1_INTFLAG_PER_Msk           (_U_(0xFF) << RTC_MODE1_INTFLAG_PER_Pos)       /**< (RTC_MODE1_INTFLAG Mask) PER */
#define RTC_MODE1_INTFLAG_PER(value)        (RTC_MODE1_INTFLAG_PER_Msk & ((value) << RTC_MODE1_INTFLAG_PER_Pos))  
#define RTC_MODE1_INTFLAG_CMP_Pos           8                                              /**< (RTC_MODE1_INTFLAG Position) Compare x */
#define RTC_MODE1_INTFLAG_CMP_Msk           (_U_(0x3) << RTC_MODE1_INTFLAG_CMP_Pos)        /**< (RTC_MODE1_INTFLAG Mask) CMP */
#define RTC_MODE1_INTFLAG_CMP(value)        (RTC_MODE1_INTFLAG_CMP_Msk & ((value) << RTC_MODE1_INTFLAG_CMP_Pos))  

/* -------- RTC_MODE2_INTFLAG : (RTC Offset: 0x0c) (R/W 16) MODE2 Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint16_t PER0:1;                    /**< bit:      0  Periodic Interval 0                      */
    __I uint16_t PER1:1;                    /**< bit:      1  Periodic Interval 1                      */
    __I uint16_t PER2:1;                    /**< bit:      2  Periodic Interval 2                      */
    __I uint16_t PER3:1;                    /**< bit:      3  Periodic Interval 3                      */
    __I uint16_t PER4:1;                    /**< bit:      4  Periodic Interval 4                      */
    __I uint16_t PER5:1;                    /**< bit:      5  Periodic Interval 5                      */
    __I uint16_t PER6:1;                    /**< bit:      6  Periodic Interval 6                      */
    __I uint16_t PER7:1;                    /**< bit:      7  Periodic Interval 7                      */
    __I uint16_t ALARM0:1;                  /**< bit:      8  Alarm 0                                  */
    __I uint16_t :6;                        /**< bit:  9..14  Reserved */
    __I uint16_t OVF:1;                     /**< bit:     15  Overflow                                 */
  } bit;                                /**< Structure used for bit  access */
  struct {
    __I uint16_t PER:8;                     /**< bit:   0..7  Periodic Interval x                      */
    __I uint16_t ALARM:1;                   /**< bit:      8  Alarm x                                  */
    __I uint16_t :7;                        /**< bit:  9..15 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint16_t reg;                         /**< Type used for register access */
} RTC_MODE2_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE2_INTFLAG_OFFSET            (0x0C)                                        /**<  (RTC_MODE2_INTFLAG) MODE2 Interrupt Flag Status and Clear  Offset */
#define RTC_MODE2_INTFLAG_RESETVALUE        _U_(0x00)                                     /**<  (RTC_MODE2_INTFLAG) MODE2 Interrupt Flag Status and Clear  Reset Value */

#define RTC_MODE2_INTFLAG_PER0_Pos          0                                              /**< (RTC_MODE2_INTFLAG) Periodic Interval 0 Position */
#define RTC_MODE2_INTFLAG_PER0_Msk          (_U_(0x1) << RTC_MODE2_INTFLAG_PER0_Pos)       /**< (RTC_MODE2_INTFLAG) Periodic Interval 0 Mask */
#define RTC_MODE2_INTFLAG_PER0              RTC_MODE2_INTFLAG_PER0_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTFLAG_PER0_Msk instead */
#define RTC_MODE2_INTFLAG_PER1_Pos          1                                              /**< (RTC_MODE2_INTFLAG) Periodic Interval 1 Position */
#define RTC_MODE2_INTFLAG_PER1_Msk          (_U_(0x1) << RTC_MODE2_INTFLAG_PER1_Pos)       /**< (RTC_MODE2_INTFLAG) Periodic Interval 1 Mask */
#define RTC_MODE2_INTFLAG_PER1              RTC_MODE2_INTFLAG_PER1_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTFLAG_PER1_Msk instead */
#define RTC_MODE2_INTFLAG_PER2_Pos          2                                              /**< (RTC_MODE2_INTFLAG) Periodic Interval 2 Position */
#define RTC_MODE2_INTFLAG_PER2_Msk          (_U_(0x1) << RTC_MODE2_INTFLAG_PER2_Pos)       /**< (RTC_MODE2_INTFLAG) Periodic Interval 2 Mask */
#define RTC_MODE2_INTFLAG_PER2              RTC_MODE2_INTFLAG_PER2_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTFLAG_PER2_Msk instead */
#define RTC_MODE2_INTFLAG_PER3_Pos          3                                              /**< (RTC_MODE2_INTFLAG) Periodic Interval 3 Position */
#define RTC_MODE2_INTFLAG_PER3_Msk          (_U_(0x1) << RTC_MODE2_INTFLAG_PER3_Pos)       /**< (RTC_MODE2_INTFLAG) Periodic Interval 3 Mask */
#define RTC_MODE2_INTFLAG_PER3              RTC_MODE2_INTFLAG_PER3_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTFLAG_PER3_Msk instead */
#define RTC_MODE2_INTFLAG_PER4_Pos          4                                              /**< (RTC_MODE2_INTFLAG) Periodic Interval 4 Position */
#define RTC_MODE2_INTFLAG_PER4_Msk          (_U_(0x1) << RTC_MODE2_INTFLAG_PER4_Pos)       /**< (RTC_MODE2_INTFLAG) Periodic Interval 4 Mask */
#define RTC_MODE2_INTFLAG_PER4              RTC_MODE2_INTFLAG_PER4_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTFLAG_PER4_Msk instead */
#define RTC_MODE2_INTFLAG_PER5_Pos          5                                              /**< (RTC_MODE2_INTFLAG) Periodic Interval 5 Position */
#define RTC_MODE2_INTFLAG_PER5_Msk          (_U_(0x1) << RTC_MODE2_INTFLAG_PER5_Pos)       /**< (RTC_MODE2_INTFLAG) Periodic Interval 5 Mask */
#define RTC_MODE2_INTFLAG_PER5              RTC_MODE2_INTFLAG_PER5_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTFLAG_PER5_Msk instead */
#define RTC_MODE2_INTFLAG_PER6_Pos          6                                              /**< (RTC_MODE2_INTFLAG) Periodic Interval 6 Position */
#define RTC_MODE2_INTFLAG_PER6_Msk          (_U_(0x1) << RTC_MODE2_INTFLAG_PER6_Pos)       /**< (RTC_MODE2_INTFLAG) Periodic Interval 6 Mask */
#define RTC_MODE2_INTFLAG_PER6              RTC_MODE2_INTFLAG_PER6_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTFLAG_PER6_Msk instead */
#define RTC_MODE2_INTFLAG_PER7_Pos          7                                              /**< (RTC_MODE2_INTFLAG) Periodic Interval 7 Position */
#define RTC_MODE2_INTFLAG_PER7_Msk          (_U_(0x1) << RTC_MODE2_INTFLAG_PER7_Pos)       /**< (RTC_MODE2_INTFLAG) Periodic Interval 7 Mask */
#define RTC_MODE2_INTFLAG_PER7              RTC_MODE2_INTFLAG_PER7_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTFLAG_PER7_Msk instead */
#define RTC_MODE2_INTFLAG_ALARM0_Pos        8                                              /**< (RTC_MODE2_INTFLAG) Alarm 0 Position */
#define RTC_MODE2_INTFLAG_ALARM0_Msk        (_U_(0x1) << RTC_MODE2_INTFLAG_ALARM0_Pos)     /**< (RTC_MODE2_INTFLAG) Alarm 0 Mask */
#define RTC_MODE2_INTFLAG_ALARM0            RTC_MODE2_INTFLAG_ALARM0_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTFLAG_ALARM0_Msk instead */
#define RTC_MODE2_INTFLAG_OVF_Pos           15                                             /**< (RTC_MODE2_INTFLAG) Overflow Position */
#define RTC_MODE2_INTFLAG_OVF_Msk           (_U_(0x1) << RTC_MODE2_INTFLAG_OVF_Pos)        /**< (RTC_MODE2_INTFLAG) Overflow Mask */
#define RTC_MODE2_INTFLAG_OVF               RTC_MODE2_INTFLAG_OVF_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_INTFLAG_OVF_Msk instead */
#define RTC_MODE2_INTFLAG_MASK              _U_(0x81FF)                                    /**< \deprecated (RTC_MODE2_INTFLAG) Register MASK  (Use RTC_MODE2_INTFLAG_Msk instead)  */
#define RTC_MODE2_INTFLAG_Msk               _U_(0x81FF)                                    /**< (RTC_MODE2_INTFLAG) Register Mask  */

#define RTC_MODE2_INTFLAG_PER_Pos           0                                              /**< (RTC_MODE2_INTFLAG Position) Periodic Interval x */
#define RTC_MODE2_INTFLAG_PER_Msk           (_U_(0xFF) << RTC_MODE2_INTFLAG_PER_Pos)       /**< (RTC_MODE2_INTFLAG Mask) PER */
#define RTC_MODE2_INTFLAG_PER(value)        (RTC_MODE2_INTFLAG_PER_Msk & ((value) << RTC_MODE2_INTFLAG_PER_Pos))  
#define RTC_MODE2_INTFLAG_ALARM_Pos         8                                              /**< (RTC_MODE2_INTFLAG Position) Alarm x */
#define RTC_MODE2_INTFLAG_ALARM_Msk         (_U_(0x1) << RTC_MODE2_INTFLAG_ALARM_Pos)      /**< (RTC_MODE2_INTFLAG Mask) ALARM */
#define RTC_MODE2_INTFLAG_ALARM(value)      (RTC_MODE2_INTFLAG_ALARM_Msk & ((value) << RTC_MODE2_INTFLAG_ALARM_Pos))  

/* -------- RTC_DBGCTRL : (RTC Offset: 0x0e) (R/W 8) Debug Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DBGRUN:1;                  /**< bit:      0  Run During Debug                         */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} RTC_DBGCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_DBGCTRL_OFFSET                  (0x0E)                                        /**<  (RTC_DBGCTRL) Debug Control  Offset */
#define RTC_DBGCTRL_RESETVALUE              _U_(0x00)                                     /**<  (RTC_DBGCTRL) Debug Control  Reset Value */

#define RTC_DBGCTRL_DBGRUN_Pos              0                                              /**< (RTC_DBGCTRL) Run During Debug Position */
#define RTC_DBGCTRL_DBGRUN_Msk              (_U_(0x1) << RTC_DBGCTRL_DBGRUN_Pos)           /**< (RTC_DBGCTRL) Run During Debug Mask */
#define RTC_DBGCTRL_DBGRUN                  RTC_DBGCTRL_DBGRUN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_DBGCTRL_DBGRUN_Msk instead */
#define RTC_DBGCTRL_MASK                    _U_(0x01)                                      /**< \deprecated (RTC_DBGCTRL) Register MASK  (Use RTC_DBGCTRL_Msk instead)  */
#define RTC_DBGCTRL_Msk                     _U_(0x01)                                      /**< (RTC_DBGCTRL) Register Mask  */


/* -------- RTC_MODE0_SYNCBUSY : (RTC Offset: 0x10) (R/ 32) MODE0 Synchronization Busy Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset Busy                      */
    uint32_t ENABLE:1;                  /**< bit:      1  Enable Bit Busy                          */
    uint32_t FREQCORR:1;                /**< bit:      2  FREQCORR Register Busy                   */
    uint32_t COUNT:1;                   /**< bit:      3  COUNT Register Busy                      */
    uint32_t :1;                        /**< bit:      4  Reserved */
    uint32_t COMP0:1;                   /**< bit:      5  COMP 0 Register Busy                     */
    uint32_t :9;                        /**< bit:  6..14  Reserved */
    uint32_t COUNTSYNC:1;               /**< bit:     15  Count Read Synchronization Enable Bit Busy */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :5;                        /**< bit:   0..4  Reserved */
    uint32_t COMP:1;                    /**< bit:      5  COMP x Register Busy                     */
    uint32_t :26;                       /**< bit:  6..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} RTC_MODE0_SYNCBUSY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE0_SYNCBUSY_OFFSET           (0x10)                                        /**<  (RTC_MODE0_SYNCBUSY) MODE0 Synchronization Busy Status  Offset */
#define RTC_MODE0_SYNCBUSY_RESETVALUE       _U_(0x00)                                     /**<  (RTC_MODE0_SYNCBUSY) MODE0 Synchronization Busy Status  Reset Value */

#define RTC_MODE0_SYNCBUSY_SWRST_Pos        0                                              /**< (RTC_MODE0_SYNCBUSY) Software Reset Busy Position */
#define RTC_MODE0_SYNCBUSY_SWRST_Msk        (_U_(0x1) << RTC_MODE0_SYNCBUSY_SWRST_Pos)     /**< (RTC_MODE0_SYNCBUSY) Software Reset Busy Mask */
#define RTC_MODE0_SYNCBUSY_SWRST            RTC_MODE0_SYNCBUSY_SWRST_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_SYNCBUSY_SWRST_Msk instead */
#define RTC_MODE0_SYNCBUSY_ENABLE_Pos       1                                              /**< (RTC_MODE0_SYNCBUSY) Enable Bit Busy Position */
#define RTC_MODE0_SYNCBUSY_ENABLE_Msk       (_U_(0x1) << RTC_MODE0_SYNCBUSY_ENABLE_Pos)    /**< (RTC_MODE0_SYNCBUSY) Enable Bit Busy Mask */
#define RTC_MODE0_SYNCBUSY_ENABLE           RTC_MODE0_SYNCBUSY_ENABLE_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_SYNCBUSY_ENABLE_Msk instead */
#define RTC_MODE0_SYNCBUSY_FREQCORR_Pos     2                                              /**< (RTC_MODE0_SYNCBUSY) FREQCORR Register Busy Position */
#define RTC_MODE0_SYNCBUSY_FREQCORR_Msk     (_U_(0x1) << RTC_MODE0_SYNCBUSY_FREQCORR_Pos)  /**< (RTC_MODE0_SYNCBUSY) FREQCORR Register Busy Mask */
#define RTC_MODE0_SYNCBUSY_FREQCORR         RTC_MODE0_SYNCBUSY_FREQCORR_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_SYNCBUSY_FREQCORR_Msk instead */
#define RTC_MODE0_SYNCBUSY_COUNT_Pos        3                                              /**< (RTC_MODE0_SYNCBUSY) COUNT Register Busy Position */
#define RTC_MODE0_SYNCBUSY_COUNT_Msk        (_U_(0x1) << RTC_MODE0_SYNCBUSY_COUNT_Pos)     /**< (RTC_MODE0_SYNCBUSY) COUNT Register Busy Mask */
#define RTC_MODE0_SYNCBUSY_COUNT            RTC_MODE0_SYNCBUSY_COUNT_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_SYNCBUSY_COUNT_Msk instead */
#define RTC_MODE0_SYNCBUSY_COMP0_Pos        5                                              /**< (RTC_MODE0_SYNCBUSY) COMP 0 Register Busy Position */
#define RTC_MODE0_SYNCBUSY_COMP0_Msk        (_U_(0x1) << RTC_MODE0_SYNCBUSY_COMP0_Pos)     /**< (RTC_MODE0_SYNCBUSY) COMP 0 Register Busy Mask */
#define RTC_MODE0_SYNCBUSY_COMP0            RTC_MODE0_SYNCBUSY_COMP0_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_SYNCBUSY_COMP0_Msk instead */
#define RTC_MODE0_SYNCBUSY_COUNTSYNC_Pos    15                                             /**< (RTC_MODE0_SYNCBUSY) Count Read Synchronization Enable Bit Busy Position */
#define RTC_MODE0_SYNCBUSY_COUNTSYNC_Msk    (_U_(0x1) << RTC_MODE0_SYNCBUSY_COUNTSYNC_Pos)  /**< (RTC_MODE0_SYNCBUSY) Count Read Synchronization Enable Bit Busy Mask */
#define RTC_MODE0_SYNCBUSY_COUNTSYNC        RTC_MODE0_SYNCBUSY_COUNTSYNC_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE0_SYNCBUSY_COUNTSYNC_Msk instead */
#define RTC_MODE0_SYNCBUSY_MASK             _U_(0x802F)                                    /**< \deprecated (RTC_MODE0_SYNCBUSY) Register MASK  (Use RTC_MODE0_SYNCBUSY_Msk instead)  */
#define RTC_MODE0_SYNCBUSY_Msk              _U_(0x802F)                                    /**< (RTC_MODE0_SYNCBUSY) Register Mask  */

#define RTC_MODE0_SYNCBUSY_COMP_Pos         5                                              /**< (RTC_MODE0_SYNCBUSY Position) COMP x Register Busy */
#define RTC_MODE0_SYNCBUSY_COMP_Msk         (_U_(0x1) << RTC_MODE0_SYNCBUSY_COMP_Pos)      /**< (RTC_MODE0_SYNCBUSY Mask) COMP */
#define RTC_MODE0_SYNCBUSY_COMP(value)      (RTC_MODE0_SYNCBUSY_COMP_Msk & ((value) << RTC_MODE0_SYNCBUSY_COMP_Pos))  

/* -------- RTC_MODE1_SYNCBUSY : (RTC Offset: 0x10) (R/ 32) MODE1 Synchronization Busy Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset Bit Busy                  */
    uint32_t ENABLE:1;                  /**< bit:      1  Enable Bit Busy                          */
    uint32_t FREQCORR:1;                /**< bit:      2  FREQCORR Register Busy                   */
    uint32_t COUNT:1;                   /**< bit:      3  COUNT Register Busy                      */
    uint32_t PER:1;                     /**< bit:      4  PER Register Busy                        */
    uint32_t COMP0:1;                   /**< bit:      5  COMP 0 Register Busy                     */
    uint32_t COMP1:1;                   /**< bit:      6  COMP 1 Register Busy                     */
    uint32_t :8;                        /**< bit:  7..14  Reserved */
    uint32_t COUNTSYNC:1;               /**< bit:     15  Count Read Synchronization Enable Bit Busy */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :5;                        /**< bit:   0..4  Reserved */
    uint32_t COMP:2;                    /**< bit:   5..6  COMP x Register Busy                     */
    uint32_t :25;                       /**< bit:  7..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} RTC_MODE1_SYNCBUSY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE1_SYNCBUSY_OFFSET           (0x10)                                        /**<  (RTC_MODE1_SYNCBUSY) MODE1 Synchronization Busy Status  Offset */
#define RTC_MODE1_SYNCBUSY_RESETVALUE       _U_(0x00)                                     /**<  (RTC_MODE1_SYNCBUSY) MODE1 Synchronization Busy Status  Reset Value */

#define RTC_MODE1_SYNCBUSY_SWRST_Pos        0                                              /**< (RTC_MODE1_SYNCBUSY) Software Reset Bit Busy Position */
#define RTC_MODE1_SYNCBUSY_SWRST_Msk        (_U_(0x1) << RTC_MODE1_SYNCBUSY_SWRST_Pos)     /**< (RTC_MODE1_SYNCBUSY) Software Reset Bit Busy Mask */
#define RTC_MODE1_SYNCBUSY_SWRST            RTC_MODE1_SYNCBUSY_SWRST_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_SYNCBUSY_SWRST_Msk instead */
#define RTC_MODE1_SYNCBUSY_ENABLE_Pos       1                                              /**< (RTC_MODE1_SYNCBUSY) Enable Bit Busy Position */
#define RTC_MODE1_SYNCBUSY_ENABLE_Msk       (_U_(0x1) << RTC_MODE1_SYNCBUSY_ENABLE_Pos)    /**< (RTC_MODE1_SYNCBUSY) Enable Bit Busy Mask */
#define RTC_MODE1_SYNCBUSY_ENABLE           RTC_MODE1_SYNCBUSY_ENABLE_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_SYNCBUSY_ENABLE_Msk instead */
#define RTC_MODE1_SYNCBUSY_FREQCORR_Pos     2                                              /**< (RTC_MODE1_SYNCBUSY) FREQCORR Register Busy Position */
#define RTC_MODE1_SYNCBUSY_FREQCORR_Msk     (_U_(0x1) << RTC_MODE1_SYNCBUSY_FREQCORR_Pos)  /**< (RTC_MODE1_SYNCBUSY) FREQCORR Register Busy Mask */
#define RTC_MODE1_SYNCBUSY_FREQCORR         RTC_MODE1_SYNCBUSY_FREQCORR_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_SYNCBUSY_FREQCORR_Msk instead */
#define RTC_MODE1_SYNCBUSY_COUNT_Pos        3                                              /**< (RTC_MODE1_SYNCBUSY) COUNT Register Busy Position */
#define RTC_MODE1_SYNCBUSY_COUNT_Msk        (_U_(0x1) << RTC_MODE1_SYNCBUSY_COUNT_Pos)     /**< (RTC_MODE1_SYNCBUSY) COUNT Register Busy Mask */
#define RTC_MODE1_SYNCBUSY_COUNT            RTC_MODE1_SYNCBUSY_COUNT_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_SYNCBUSY_COUNT_Msk instead */
#define RTC_MODE1_SYNCBUSY_PER_Pos          4                                              /**< (RTC_MODE1_SYNCBUSY) PER Register Busy Position */
#define RTC_MODE1_SYNCBUSY_PER_Msk          (_U_(0x1) << RTC_MODE1_SYNCBUSY_PER_Pos)       /**< (RTC_MODE1_SYNCBUSY) PER Register Busy Mask */
#define RTC_MODE1_SYNCBUSY_PER              RTC_MODE1_SYNCBUSY_PER_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_SYNCBUSY_PER_Msk instead */
#define RTC_MODE1_SYNCBUSY_COMP0_Pos        5                                              /**< (RTC_MODE1_SYNCBUSY) COMP 0 Register Busy Position */
#define RTC_MODE1_SYNCBUSY_COMP0_Msk        (_U_(0x1) << RTC_MODE1_SYNCBUSY_COMP0_Pos)     /**< (RTC_MODE1_SYNCBUSY) COMP 0 Register Busy Mask */
#define RTC_MODE1_SYNCBUSY_COMP0            RTC_MODE1_SYNCBUSY_COMP0_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_SYNCBUSY_COMP0_Msk instead */
#define RTC_MODE1_SYNCBUSY_COMP1_Pos        6                                              /**< (RTC_MODE1_SYNCBUSY) COMP 1 Register Busy Position */
#define RTC_MODE1_SYNCBUSY_COMP1_Msk        (_U_(0x1) << RTC_MODE1_SYNCBUSY_COMP1_Pos)     /**< (RTC_MODE1_SYNCBUSY) COMP 1 Register Busy Mask */
#define RTC_MODE1_SYNCBUSY_COMP1            RTC_MODE1_SYNCBUSY_COMP1_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_SYNCBUSY_COMP1_Msk instead */
#define RTC_MODE1_SYNCBUSY_COUNTSYNC_Pos    15                                             /**< (RTC_MODE1_SYNCBUSY) Count Read Synchronization Enable Bit Busy Position */
#define RTC_MODE1_SYNCBUSY_COUNTSYNC_Msk    (_U_(0x1) << RTC_MODE1_SYNCBUSY_COUNTSYNC_Pos)  /**< (RTC_MODE1_SYNCBUSY) Count Read Synchronization Enable Bit Busy Mask */
#define RTC_MODE1_SYNCBUSY_COUNTSYNC        RTC_MODE1_SYNCBUSY_COUNTSYNC_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE1_SYNCBUSY_COUNTSYNC_Msk instead */
#define RTC_MODE1_SYNCBUSY_MASK             _U_(0x807F)                                    /**< \deprecated (RTC_MODE1_SYNCBUSY) Register MASK  (Use RTC_MODE1_SYNCBUSY_Msk instead)  */
#define RTC_MODE1_SYNCBUSY_Msk              _U_(0x807F)                                    /**< (RTC_MODE1_SYNCBUSY) Register Mask  */

#define RTC_MODE1_SYNCBUSY_COMP_Pos         5                                              /**< (RTC_MODE1_SYNCBUSY Position) COMP x Register Busy */
#define RTC_MODE1_SYNCBUSY_COMP_Msk         (_U_(0x3) << RTC_MODE1_SYNCBUSY_COMP_Pos)      /**< (RTC_MODE1_SYNCBUSY Mask) COMP */
#define RTC_MODE1_SYNCBUSY_COMP(value)      (RTC_MODE1_SYNCBUSY_COMP_Msk & ((value) << RTC_MODE1_SYNCBUSY_COMP_Pos))  

/* -------- RTC_MODE2_SYNCBUSY : (RTC Offset: 0x10) (R/ 32) MODE2 Synchronization Busy Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset Bit Busy                  */
    uint32_t ENABLE:1;                  /**< bit:      1  Enable Bit Busy                          */
    uint32_t FREQCORR:1;                /**< bit:      2  FREQCORR Register Busy                   */
    uint32_t CLOCK:1;                   /**< bit:      3  CLOCK Register Busy                      */
    uint32_t :1;                        /**< bit:      4  Reserved */
    uint32_t ALARM0:1;                  /**< bit:      5  ALARM 0 Register Busy                    */
    uint32_t :5;                        /**< bit:  6..10  Reserved */
    uint32_t MASK0:1;                   /**< bit:     11  MASK 0 Register Busy                     */
    uint32_t :3;                        /**< bit: 12..14  Reserved */
    uint32_t CLOCKSYNC:1;               /**< bit:     15  Clock Read Synchronization Enable Bit Busy */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :5;                        /**< bit:   0..4  Reserved */
    uint32_t ALARM:1;                   /**< bit:      5  ALARM x Register Busy                    */
    uint32_t :5;                        /**< bit:  6..10  Reserved */
    uint32_t MASK:1;                    /**< bit:     11  MASK x Register Busy                     */
    uint32_t :20;                       /**< bit: 12..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} RTC_MODE2_SYNCBUSY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE2_SYNCBUSY_OFFSET           (0x10)                                        /**<  (RTC_MODE2_SYNCBUSY) MODE2 Synchronization Busy Status  Offset */
#define RTC_MODE2_SYNCBUSY_RESETVALUE       _U_(0x00)                                     /**<  (RTC_MODE2_SYNCBUSY) MODE2 Synchronization Busy Status  Reset Value */

#define RTC_MODE2_SYNCBUSY_SWRST_Pos        0                                              /**< (RTC_MODE2_SYNCBUSY) Software Reset Bit Busy Position */
#define RTC_MODE2_SYNCBUSY_SWRST_Msk        (_U_(0x1) << RTC_MODE2_SYNCBUSY_SWRST_Pos)     /**< (RTC_MODE2_SYNCBUSY) Software Reset Bit Busy Mask */
#define RTC_MODE2_SYNCBUSY_SWRST            RTC_MODE2_SYNCBUSY_SWRST_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_SYNCBUSY_SWRST_Msk instead */
#define RTC_MODE2_SYNCBUSY_ENABLE_Pos       1                                              /**< (RTC_MODE2_SYNCBUSY) Enable Bit Busy Position */
#define RTC_MODE2_SYNCBUSY_ENABLE_Msk       (_U_(0x1) << RTC_MODE2_SYNCBUSY_ENABLE_Pos)    /**< (RTC_MODE2_SYNCBUSY) Enable Bit Busy Mask */
#define RTC_MODE2_SYNCBUSY_ENABLE           RTC_MODE2_SYNCBUSY_ENABLE_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_SYNCBUSY_ENABLE_Msk instead */
#define RTC_MODE2_SYNCBUSY_FREQCORR_Pos     2                                              /**< (RTC_MODE2_SYNCBUSY) FREQCORR Register Busy Position */
#define RTC_MODE2_SYNCBUSY_FREQCORR_Msk     (_U_(0x1) << RTC_MODE2_SYNCBUSY_FREQCORR_Pos)  /**< (RTC_MODE2_SYNCBUSY) FREQCORR Register Busy Mask */
#define RTC_MODE2_SYNCBUSY_FREQCORR         RTC_MODE2_SYNCBUSY_FREQCORR_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_SYNCBUSY_FREQCORR_Msk instead */
#define RTC_MODE2_SYNCBUSY_CLOCK_Pos        3                                              /**< (RTC_MODE2_SYNCBUSY) CLOCK Register Busy Position */
#define RTC_MODE2_SYNCBUSY_CLOCK_Msk        (_U_(0x1) << RTC_MODE2_SYNCBUSY_CLOCK_Pos)     /**< (RTC_MODE2_SYNCBUSY) CLOCK Register Busy Mask */
#define RTC_MODE2_SYNCBUSY_CLOCK            RTC_MODE2_SYNCBUSY_CLOCK_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_SYNCBUSY_CLOCK_Msk instead */
#define RTC_MODE2_SYNCBUSY_ALARM0_Pos       5                                              /**< (RTC_MODE2_SYNCBUSY) ALARM 0 Register Busy Position */
#define RTC_MODE2_SYNCBUSY_ALARM0_Msk       (_U_(0x1) << RTC_MODE2_SYNCBUSY_ALARM0_Pos)    /**< (RTC_MODE2_SYNCBUSY) ALARM 0 Register Busy Mask */
#define RTC_MODE2_SYNCBUSY_ALARM0           RTC_MODE2_SYNCBUSY_ALARM0_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_SYNCBUSY_ALARM0_Msk instead */
#define RTC_MODE2_SYNCBUSY_MASK0_Pos        11                                             /**< (RTC_MODE2_SYNCBUSY) MASK 0 Register Busy Position */
#define RTC_MODE2_SYNCBUSY_MASK0_Msk        (_U_(0x1) << RTC_MODE2_SYNCBUSY_MASK0_Pos)     /**< (RTC_MODE2_SYNCBUSY) MASK 0 Register Busy Mask */
#define RTC_MODE2_SYNCBUSY_MASK0            RTC_MODE2_SYNCBUSY_MASK0_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_SYNCBUSY_MASK0_Msk instead */
#define RTC_MODE2_SYNCBUSY_CLOCKSYNC_Pos    15                                             /**< (RTC_MODE2_SYNCBUSY) Clock Read Synchronization Enable Bit Busy Position */
#define RTC_MODE2_SYNCBUSY_CLOCKSYNC_Msk    (_U_(0x1) << RTC_MODE2_SYNCBUSY_CLOCKSYNC_Pos)  /**< (RTC_MODE2_SYNCBUSY) Clock Read Synchronization Enable Bit Busy Mask */
#define RTC_MODE2_SYNCBUSY_CLOCKSYNC        RTC_MODE2_SYNCBUSY_CLOCKSYNC_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_MODE2_SYNCBUSY_CLOCKSYNC_Msk instead */
#define RTC_MODE2_SYNCBUSY_Msk              _U_(0x882F)                                    /**< (RTC_MODE2_SYNCBUSY) Register Mask  */

#define RTC_MODE2_SYNCBUSY_ALARM_Pos        5                                              /**< (RTC_MODE2_SYNCBUSY Position) ALARM x Register Busy */
#define RTC_MODE2_SYNCBUSY_ALARM_Msk        (_U_(0x1) << RTC_MODE2_SYNCBUSY_ALARM_Pos)     /**< (RTC_MODE2_SYNCBUSY Mask) ALARM */
#define RTC_MODE2_SYNCBUSY_ALARM(value)     (RTC_MODE2_SYNCBUSY_ALARM_Msk & ((value) << RTC_MODE2_SYNCBUSY_ALARM_Pos))  
#define RTC_MODE2_SYNCBUSY_MASK_Pos         11                                             /**< (RTC_MODE2_SYNCBUSY Position) MASK x Register Busy */
#define RTC_MODE2_SYNCBUSY_MASK_Msk         (_U_(0x1) << RTC_MODE2_SYNCBUSY_MASK_Pos)      /**< (RTC_MODE2_SYNCBUSY Mask) MASK */
#define RTC_MODE2_SYNCBUSY_MASK(value)      (RTC_MODE2_SYNCBUSY_MASK_Msk & ((value) << RTC_MODE2_SYNCBUSY_MASK_Pos))  

/* -------- RTC_FREQCORR : (RTC Offset: 0x14) (R/W 8) Frequency Correction -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  VALUE:7;                   /**< bit:   0..6  Correction Value                         */
    uint8_t  SIGN:1;                    /**< bit:      7  Correction Sign                          */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} RTC_FREQCORR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_FREQCORR_OFFSET                 (0x14)                                        /**<  (RTC_FREQCORR) Frequency Correction  Offset */
#define RTC_FREQCORR_RESETVALUE             _U_(0x00)                                     /**<  (RTC_FREQCORR) Frequency Correction  Reset Value */

#define RTC_FREQCORR_VALUE_Pos              0                                              /**< (RTC_FREQCORR) Correction Value Position */
#define RTC_FREQCORR_VALUE_Msk              (_U_(0x7F) << RTC_FREQCORR_VALUE_Pos)          /**< (RTC_FREQCORR) Correction Value Mask */
#define RTC_FREQCORR_VALUE(value)           (RTC_FREQCORR_VALUE_Msk & ((value) << RTC_FREQCORR_VALUE_Pos))
#define RTC_FREQCORR_SIGN_Pos               7                                              /**< (RTC_FREQCORR) Correction Sign Position */
#define RTC_FREQCORR_SIGN_Msk               (_U_(0x1) << RTC_FREQCORR_SIGN_Pos)            /**< (RTC_FREQCORR) Correction Sign Mask */
#define RTC_FREQCORR_SIGN                   RTC_FREQCORR_SIGN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use RTC_FREQCORR_SIGN_Msk instead */
#define RTC_FREQCORR_MASK                   _U_(0xFF)                                      /**< \deprecated (RTC_FREQCORR) Register MASK  (Use RTC_FREQCORR_Msk instead)  */
#define RTC_FREQCORR_Msk                    _U_(0xFF)                                      /**< (RTC_FREQCORR) Register Mask  */


/* -------- RTC_MODE0_COUNT : (RTC Offset: 0x18) (R/W 32) MODE0 Counter Value -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t COUNT:32;                  /**< bit:  0..31  Counter Value                            */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} RTC_MODE0_COUNT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE0_COUNT_OFFSET              (0x18)                                        /**<  (RTC_MODE0_COUNT) MODE0 Counter Value  Offset */
#define RTC_MODE0_COUNT_RESETVALUE          _U_(0x00)                                     /**<  (RTC_MODE0_COUNT) MODE0 Counter Value  Reset Value */

#define RTC_MODE0_COUNT_COUNT_Pos           0                                              /**< (RTC_MODE0_COUNT) Counter Value Position */
#define RTC_MODE0_COUNT_COUNT_Msk           (_U_(0xFFFFFFFF) << RTC_MODE0_COUNT_COUNT_Pos)  /**< (RTC_MODE0_COUNT) Counter Value Mask */
#define RTC_MODE0_COUNT_COUNT(value)        (RTC_MODE0_COUNT_COUNT_Msk & ((value) << RTC_MODE0_COUNT_COUNT_Pos))
#define RTC_MODE0_COUNT_MASK                _U_(0xFFFFFFFF)                                /**< \deprecated (RTC_MODE0_COUNT) Register MASK  (Use RTC_MODE0_COUNT_Msk instead)  */
#define RTC_MODE0_COUNT_Msk                 _U_(0xFFFFFFFF)                                /**< (RTC_MODE0_COUNT) Register Mask  */


/* -------- RTC_MODE1_COUNT : (RTC Offset: 0x18) (R/W 16) MODE1 Counter Value -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t COUNT:16;                  /**< bit:  0..15  Counter Value                            */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} RTC_MODE1_COUNT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE1_COUNT_OFFSET              (0x18)                                        /**<  (RTC_MODE1_COUNT) MODE1 Counter Value  Offset */
#define RTC_MODE1_COUNT_RESETVALUE          _U_(0x00)                                     /**<  (RTC_MODE1_COUNT) MODE1 Counter Value  Reset Value */

#define RTC_MODE1_COUNT_COUNT_Pos           0                                              /**< (RTC_MODE1_COUNT) Counter Value Position */
#define RTC_MODE1_COUNT_COUNT_Msk           (_U_(0xFFFF) << RTC_MODE1_COUNT_COUNT_Pos)     /**< (RTC_MODE1_COUNT) Counter Value Mask */
#define RTC_MODE1_COUNT_COUNT(value)        (RTC_MODE1_COUNT_COUNT_Msk & ((value) << RTC_MODE1_COUNT_COUNT_Pos))
#define RTC_MODE1_COUNT_MASK                _U_(0xFFFF)                                    /**< \deprecated (RTC_MODE1_COUNT) Register MASK  (Use RTC_MODE1_COUNT_Msk instead)  */
#define RTC_MODE1_COUNT_Msk                 _U_(0xFFFF)                                    /**< (RTC_MODE1_COUNT) Register Mask  */


/* -------- RTC_MODE2_CLOCK : (RTC Offset: 0x18) (R/W 32) MODE2 Clock Value -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SECOND:6;                  /**< bit:   0..5  Second                                   */
    uint32_t MINUTE:6;                  /**< bit:  6..11  Minute                                   */
    uint32_t HOUR:5;                    /**< bit: 12..16  Hour                                     */
    uint32_t DAY:5;                     /**< bit: 17..21  Day                                      */
    uint32_t MONTH:4;                   /**< bit: 22..25  Month                                    */
    uint32_t YEAR:6;                    /**< bit: 26..31  Year                                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} RTC_MODE2_CLOCK_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE2_CLOCK_OFFSET              (0x18)                                        /**<  (RTC_MODE2_CLOCK) MODE2 Clock Value  Offset */
#define RTC_MODE2_CLOCK_RESETVALUE          _U_(0x00)                                     /**<  (RTC_MODE2_CLOCK) MODE2 Clock Value  Reset Value */

#define RTC_MODE2_CLOCK_SECOND_Pos          0                                              /**< (RTC_MODE2_CLOCK) Second Position */
#define RTC_MODE2_CLOCK_SECOND_Msk          (_U_(0x3F) << RTC_MODE2_CLOCK_SECOND_Pos)      /**< (RTC_MODE2_CLOCK) Second Mask */
#define RTC_MODE2_CLOCK_SECOND(value)       (RTC_MODE2_CLOCK_SECOND_Msk & ((value) << RTC_MODE2_CLOCK_SECOND_Pos))
#define RTC_MODE2_CLOCK_MINUTE_Pos          6                                              /**< (RTC_MODE2_CLOCK) Minute Position */
#define RTC_MODE2_CLOCK_MINUTE_Msk          (_U_(0x3F) << RTC_MODE2_CLOCK_MINUTE_Pos)      /**< (RTC_MODE2_CLOCK) Minute Mask */
#define RTC_MODE2_CLOCK_MINUTE(value)       (RTC_MODE2_CLOCK_MINUTE_Msk & ((value) << RTC_MODE2_CLOCK_MINUTE_Pos))
#define RTC_MODE2_CLOCK_HOUR_Pos            12                                             /**< (RTC_MODE2_CLOCK) Hour Position */
#define RTC_MODE2_CLOCK_HOUR_Msk            (_U_(0x1F) << RTC_MODE2_CLOCK_HOUR_Pos)        /**< (RTC_MODE2_CLOCK) Hour Mask */
#define RTC_MODE2_CLOCK_HOUR(value)         (RTC_MODE2_CLOCK_HOUR_Msk & ((value) << RTC_MODE2_CLOCK_HOUR_Pos))
#define   RTC_MODE2_CLOCK_HOUR_AM_Val       _U_(0x0)                                       /**< (RTC_MODE2_CLOCK) AM when CLKREP in 12-hour  */
#define   RTC_MODE2_CLOCK_HOUR_PM_Val       _U_(0x10)                                      /**< (RTC_MODE2_CLOCK) PM when CLKREP in 12-hour  */
#define RTC_MODE2_CLOCK_HOUR_AM             (RTC_MODE2_CLOCK_HOUR_AM_Val << RTC_MODE2_CLOCK_HOUR_Pos)  /**< (RTC_MODE2_CLOCK) AM when CLKREP in 12-hour Position  */
#define RTC_MODE2_CLOCK_HOUR_PM             (RTC_MODE2_CLOCK_HOUR_PM_Val << RTC_MODE2_CLOCK_HOUR_Pos)  /**< (RTC_MODE2_CLOCK) PM when CLKREP in 12-hour Position  */
#define RTC_MODE2_CLOCK_DAY_Pos             17                                             /**< (RTC_MODE2_CLOCK) Day Position */
#define RTC_MODE2_CLOCK_DAY_Msk             (_U_(0x1F) << RTC_MODE2_CLOCK_DAY_Pos)         /**< (RTC_MODE2_CLOCK) Day Mask */
#define RTC_MODE2_CLOCK_DAY(value)          (RTC_MODE2_CLOCK_DAY_Msk & ((value) << RTC_MODE2_CLOCK_DAY_Pos))
#define RTC_MODE2_CLOCK_MONTH_Pos           22                                             /**< (RTC_MODE2_CLOCK) Month Position */
#define RTC_MODE2_CLOCK_MONTH_Msk           (_U_(0xF) << RTC_MODE2_CLOCK_MONTH_Pos)        /**< (RTC_MODE2_CLOCK) Month Mask */
#define RTC_MODE2_CLOCK_MONTH(value)        (RTC_MODE2_CLOCK_MONTH_Msk & ((value) << RTC_MODE2_CLOCK_MONTH_Pos))
#define RTC_MODE2_CLOCK_YEAR_Pos            26                                             /**< (RTC_MODE2_CLOCK) Year Position */
#define RTC_MODE2_CLOCK_YEAR_Msk            (_U_(0x3F) << RTC_MODE2_CLOCK_YEAR_Pos)        /**< (RTC_MODE2_CLOCK) Year Mask */
#define RTC_MODE2_CLOCK_YEAR(value)         (RTC_MODE2_CLOCK_YEAR_Msk & ((value) << RTC_MODE2_CLOCK_YEAR_Pos))
#define RTC_MODE2_CLOCK_MASK                _U_(0xFFFFFFFF)                                /**< \deprecated (RTC_MODE2_CLOCK) Register MASK  (Use RTC_MODE2_CLOCK_Msk instead)  */
#define RTC_MODE2_CLOCK_Msk                 _U_(0xFFFFFFFF)                                /**< (RTC_MODE2_CLOCK) Register Mask  */


/* -------- RTC_MODE1_PER : (RTC Offset: 0x1c) (R/W 16) MODE1 Counter Period -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t PER:16;                    /**< bit:  0..15  Counter Period                           */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} RTC_MODE1_PER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE1_PER_OFFSET                (0x1C)                                        /**<  (RTC_MODE1_PER) MODE1 Counter Period  Offset */
#define RTC_MODE1_PER_RESETVALUE            _U_(0x00)                                     /**<  (RTC_MODE1_PER) MODE1 Counter Period  Reset Value */

#define RTC_MODE1_PER_PER_Pos               0                                              /**< (RTC_MODE1_PER) Counter Period Position */
#define RTC_MODE1_PER_PER_Msk               (_U_(0xFFFF) << RTC_MODE1_PER_PER_Pos)         /**< (RTC_MODE1_PER) Counter Period Mask */
#define RTC_MODE1_PER_PER(value)            (RTC_MODE1_PER_PER_Msk & ((value) << RTC_MODE1_PER_PER_Pos))
#define RTC_MODE1_PER_MASK                  _U_(0xFFFF)                                    /**< \deprecated (RTC_MODE1_PER) Register MASK  (Use RTC_MODE1_PER_Msk instead)  */
#define RTC_MODE1_PER_Msk                   _U_(0xFFFF)                                    /**< (RTC_MODE1_PER) Register Mask  */


/* -------- RTC_MODE0_COMP : (RTC Offset: 0x20) (R/W 32) MODE0 Compare n Value -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t COMP:32;                   /**< bit:  0..31  Compare Value                            */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} RTC_MODE0_COMP_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE0_COMP_OFFSET               (0x20)                                        /**<  (RTC_MODE0_COMP) MODE0 Compare n Value  Offset */
#define RTC_MODE0_COMP_RESETVALUE           _U_(0x00)                                     /**<  (RTC_MODE0_COMP) MODE0 Compare n Value  Reset Value */

#define RTC_MODE0_COMP_COMP_Pos             0                                              /**< (RTC_MODE0_COMP) Compare Value Position */
#define RTC_MODE0_COMP_COMP_Msk             (_U_(0xFFFFFFFF) << RTC_MODE0_COMP_COMP_Pos)   /**< (RTC_MODE0_COMP) Compare Value Mask */
#define RTC_MODE0_COMP_COMP(value)          (RTC_MODE0_COMP_COMP_Msk & ((value) << RTC_MODE0_COMP_COMP_Pos))
#define RTC_MODE0_COMP_MASK                 _U_(0xFFFFFFFF)                                /**< \deprecated (RTC_MODE0_COMP) Register MASK  (Use RTC_MODE0_COMP_Msk instead)  */
#define RTC_MODE0_COMP_Msk                  _U_(0xFFFFFFFF)                                /**< (RTC_MODE0_COMP) Register Mask  */


/* -------- RTC_MODE1_COMP : (RTC Offset: 0x20) (R/W 16) MODE1 Compare n Value -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t COMP:16;                   /**< bit:  0..15  Compare Value                            */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} RTC_MODE1_COMP_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE1_COMP_OFFSET               (0x20)                                        /**<  (RTC_MODE1_COMP) MODE1 Compare n Value  Offset */
#define RTC_MODE1_COMP_RESETVALUE           _U_(0x00)                                     /**<  (RTC_MODE1_COMP) MODE1 Compare n Value  Reset Value */

#define RTC_MODE1_COMP_COMP_Pos             0                                              /**< (RTC_MODE1_COMP) Compare Value Position */
#define RTC_MODE1_COMP_COMP_Msk             (_U_(0xFFFF) << RTC_MODE1_COMP_COMP_Pos)       /**< (RTC_MODE1_COMP) Compare Value Mask */
#define RTC_MODE1_COMP_COMP(value)          (RTC_MODE1_COMP_COMP_Msk & ((value) << RTC_MODE1_COMP_COMP_Pos))
#define RTC_MODE1_COMP_MASK                 _U_(0xFFFF)                                    /**< \deprecated (RTC_MODE1_COMP) Register MASK  (Use RTC_MODE1_COMP_Msk instead)  */
#define RTC_MODE1_COMP_Msk                  _U_(0xFFFF)                                    /**< (RTC_MODE1_COMP) Register Mask  */


/* -------- RTC_GP : (RTC Offset: 0x40) (R/W 32) General Purpose -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t GP:32;                     /**< bit:  0..31  General Purpose                          */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} RTC_GP_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_GP_OFFSET                       (0x40)                                        /**<  (RTC_GP) General Purpose  Offset */
#define RTC_GP_RESETVALUE                   _U_(0x00)                                     /**<  (RTC_GP) General Purpose  Reset Value */

#define RTC_GP_GP_Pos                       0                                              /**< (RTC_GP) General Purpose Position */
#define RTC_GP_GP_Msk                       (_U_(0xFFFFFFFF) << RTC_GP_GP_Pos)             /**< (RTC_GP) General Purpose Mask */
#define RTC_GP_GP(value)                    (RTC_GP_GP_Msk & ((value) << RTC_GP_GP_Pos)) 
#define RTC_GP_MASK                         _U_(0xFFFFFFFF)                                /**< \deprecated (RTC_GP) Register MASK  (Use RTC_GP_Msk instead)  */
#define RTC_GP_Msk                          _U_(0xFFFFFFFF)                                /**< (RTC_GP) Register Mask  */


/* -------- RTC_MODE2_ALARM : (RTC Offset: 0x20) (R/W 32) MODE2_ALARM Alarm n Value -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SECOND:6;                  /**< bit:   0..5  Second                                   */
    uint32_t MINUTE:6;                  /**< bit:  6..11  Minute                                   */
    uint32_t HOUR:5;                    /**< bit: 12..16  Hour                                     */
    uint32_t DAY:5;                     /**< bit: 17..21  Day                                      */
    uint32_t MONTH:4;                   /**< bit: 22..25  Month                                    */
    uint32_t YEAR:6;                    /**< bit: 26..31  Year                                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} RTC_MODE2_ALARM_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE2_ALARM_OFFSET              (0x20)                                        /**<  (RTC_MODE2_ALARM) MODE2_ALARM Alarm n Value  Offset */
#define RTC_MODE2_ALARM_RESETVALUE          _U_(0x00)                                     /**<  (RTC_MODE2_ALARM) MODE2_ALARM Alarm n Value  Reset Value */

#define RTC_MODE2_ALARM_SECOND_Pos          0                                              /**< (RTC_MODE2_ALARM) Second Position */
#define RTC_MODE2_ALARM_SECOND_Msk          (_U_(0x3F) << RTC_MODE2_ALARM_SECOND_Pos)      /**< (RTC_MODE2_ALARM) Second Mask */
#define RTC_MODE2_ALARM_SECOND(value)       (RTC_MODE2_ALARM_SECOND_Msk & ((value) << RTC_MODE2_ALARM_SECOND_Pos))
#define RTC_MODE2_ALARM_MINUTE_Pos          6                                              /**< (RTC_MODE2_ALARM) Minute Position */
#define RTC_MODE2_ALARM_MINUTE_Msk          (_U_(0x3F) << RTC_MODE2_ALARM_MINUTE_Pos)      /**< (RTC_MODE2_ALARM) Minute Mask */
#define RTC_MODE2_ALARM_MINUTE(value)       (RTC_MODE2_ALARM_MINUTE_Msk & ((value) << RTC_MODE2_ALARM_MINUTE_Pos))
#define RTC_MODE2_ALARM_HOUR_Pos            12                                             /**< (RTC_MODE2_ALARM) Hour Position */
#define RTC_MODE2_ALARM_HOUR_Msk            (_U_(0x1F) << RTC_MODE2_ALARM_HOUR_Pos)        /**< (RTC_MODE2_ALARM) Hour Mask */
#define RTC_MODE2_ALARM_HOUR(value)         (RTC_MODE2_ALARM_HOUR_Msk & ((value) << RTC_MODE2_ALARM_HOUR_Pos))
#define   RTC_MODE2_ALARM_HOUR_AM_Val       _U_(0x0)                                       /**< (RTC_MODE2_ALARM) Morning hour  */
#define   RTC_MODE2_ALARM_HOUR_PM_Val       _U_(0x10)                                      /**< (RTC_MODE2_ALARM) Afternoon hour  */
#define RTC_MODE2_ALARM_HOUR_AM             (RTC_MODE2_ALARM_HOUR_AM_Val << RTC_MODE2_ALARM_HOUR_Pos)  /**< (RTC_MODE2_ALARM) Morning hour Position  */
#define RTC_MODE2_ALARM_HOUR_PM             (RTC_MODE2_ALARM_HOUR_PM_Val << RTC_MODE2_ALARM_HOUR_Pos)  /**< (RTC_MODE2_ALARM) Afternoon hour Position  */
#define RTC_MODE2_ALARM_DAY_Pos             17                                             /**< (RTC_MODE2_ALARM) Day Position */
#define RTC_MODE2_ALARM_DAY_Msk             (_U_(0x1F) << RTC_MODE2_ALARM_DAY_Pos)         /**< (RTC_MODE2_ALARM) Day Mask */
#define RTC_MODE2_ALARM_DAY(value)          (RTC_MODE2_ALARM_DAY_Msk & ((value) << RTC_MODE2_ALARM_DAY_Pos))
#define RTC_MODE2_ALARM_MONTH_Pos           22                                             /**< (RTC_MODE2_ALARM) Month Position */
#define RTC_MODE2_ALARM_MONTH_Msk           (_U_(0xF) << RTC_MODE2_ALARM_MONTH_Pos)        /**< (RTC_MODE2_ALARM) Month Mask */
#define RTC_MODE2_ALARM_MONTH(value)        (RTC_MODE2_ALARM_MONTH_Msk & ((value) << RTC_MODE2_ALARM_MONTH_Pos))
#define RTC_MODE2_ALARM_YEAR_Pos            26                                             /**< (RTC_MODE2_ALARM) Year Position */
#define RTC_MODE2_ALARM_YEAR_Msk            (_U_(0x3F) << RTC_MODE2_ALARM_YEAR_Pos)        /**< (RTC_MODE2_ALARM) Year Mask */
#define RTC_MODE2_ALARM_YEAR(value)         (RTC_MODE2_ALARM_YEAR_Msk & ((value) << RTC_MODE2_ALARM_YEAR_Pos))
#define RTC_MODE2_ALARM_MASK                _U_(0xFFFFFFFF)                                /**< \deprecated (RTC_MODE2_ALARM) Register MASK  (Use RTC_MODE2_ALARM_Msk instead)  */
#define RTC_MODE2_ALARM_Msk                 _U_(0xFFFFFFFF)                                /**< (RTC_MODE2_ALARM) Register Mask  */


/* -------- RTC_MODE2_MASK : (RTC Offset: 0x24) (R/W 8) MODE2_ALARM Alarm n Mask -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  SEL:3;                     /**< bit:   0..2  Alarm Mask Selection                     */
    uint8_t  :5;                        /**< bit:   3..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} RTC_MODE2_MASK_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RTC_MODE2_MASK_OFFSET               (0x24)                                        /**<  (RTC_MODE2_MASK) MODE2_ALARM Alarm n Mask  Offset */
#define RTC_MODE2_MASK_RESETVALUE           _U_(0x00)                                     /**<  (RTC_MODE2_MASK) MODE2_ALARM Alarm n Mask  Reset Value */

#define RTC_MODE2_MASK_SEL_Pos              0                                              /**< (RTC_MODE2_MASK) Alarm Mask Selection Position */
#define RTC_MODE2_MASK_SEL_Msk              (_U_(0x7) << RTC_MODE2_MASK_SEL_Pos)           /**< (RTC_MODE2_MASK) Alarm Mask Selection Mask */
#define RTC_MODE2_MASK_SEL(value)           (RTC_MODE2_MASK_SEL_Msk & ((value) << RTC_MODE2_MASK_SEL_Pos))
#define   RTC_MODE2_MASK_SEL_OFF_Val        _U_(0x0)                                       /**< (RTC_MODE2_MASK) Alarm Disabled  */
#define   RTC_MODE2_MASK_SEL_SS_Val         _U_(0x1)                                       /**< (RTC_MODE2_MASK) Match seconds only  */
#define   RTC_MODE2_MASK_SEL_MMSS_Val       _U_(0x2)                                       /**< (RTC_MODE2_MASK) Match seconds and minutes only  */
#define   RTC_MODE2_MASK_SEL_HHMMSS_Val     _U_(0x3)                                       /**< (RTC_MODE2_MASK) Match seconds, minutes, and hours only  */
#define   RTC_MODE2_MASK_SEL_DDHHMMSS_Val   _U_(0x4)                                       /**< (RTC_MODE2_MASK) Match seconds, minutes, hours, and days only  */
#define   RTC_MODE2_MASK_SEL_MMDDHHMMSS_Val _U_(0x5)                                       /**< (RTC_MODE2_MASK) Match seconds, minutes, hours, days, and months only  */
#define   RTC_MODE2_MASK_SEL_YYMMDDHHMMSS_Val _U_(0x6)                                       /**< (RTC_MODE2_MASK) Match seconds, minutes, hours, days, months, and years  */
#define RTC_MODE2_MASK_SEL_OFF              (RTC_MODE2_MASK_SEL_OFF_Val << RTC_MODE2_MASK_SEL_Pos)  /**< (RTC_MODE2_MASK) Alarm Disabled Position  */
#define RTC_MODE2_MASK_SEL_SS               (RTC_MODE2_MASK_SEL_SS_Val << RTC_MODE2_MASK_SEL_Pos)  /**< (RTC_MODE2_MASK) Match seconds only Position  */
#define RTC_MODE2_MASK_SEL_MMSS             (RTC_MODE2_MASK_SEL_MMSS_Val << RTC_MODE2_MASK_SEL_Pos)  /**< (RTC_MODE2_MASK) Match seconds and minutes only Position  */
#define RTC_MODE2_MASK_SEL_HHMMSS           (RTC_MODE2_MASK_SEL_HHMMSS_Val << RTC_MODE2_MASK_SEL_Pos)  /**< (RTC_MODE2_MASK) Match seconds, minutes, and hours only Position  */
#define RTC_MODE2_MASK_SEL_DDHHMMSS         (RTC_MODE2_MASK_SEL_DDHHMMSS_Val << RTC_MODE2_MASK_SEL_Pos)  /**< (RTC_MODE2_MASK) Match seconds, minutes, hours, and days only Position  */
#define RTC_MODE2_MASK_SEL_MMDDHHMMSS       (RTC_MODE2_MASK_SEL_MMDDHHMMSS_Val << RTC_MODE2_MASK_SEL_Pos)  /**< (RTC_MODE2_MASK) Match seconds, minutes, hours, days, and months only Position  */
#define RTC_MODE2_MASK_SEL_YYMMDDHHMMSS     (RTC_MODE2_MASK_SEL_YYMMDDHHMMSS_Val << RTC_MODE2_MASK_SEL_Pos)  /**< (RTC_MODE2_MASK) Match seconds, minutes, hours, days, months, and years Position  */
#define RTC_MODE2_MASK_MASK                 _U_(0x07)                                      /**< \deprecated (RTC_MODE2_MASK) Register MASK  (Use RTC_MODE2_MASK_Msk instead)  */
#define RTC_MODE2_MASK_Msk                  _U_(0x07)                                      /**< (RTC_MODE2_MASK) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief RTC hardware registers */
typedef struct {  /* Real-Time Counter */
  __IO uint16_t CTRLA;          /**< (RTC Offset: 0x00) MODE0 Control A */
  __I  uint8_t                        Reserved1[2];
  __IO uint32_t EVCTRL;         /**< (RTC Offset: 0x04) MODE0 Event Control */
  __IO uint16_t INTENCLR;       /**< (RTC Offset: 0x08) MODE0 Interrupt Enable Clear */
  __IO uint16_t INTENSET;       /**< (RTC Offset: 0x0A) MODE0 Interrupt Enable Set */
  __IO uint16_t INTFLAG;        /**< (RTC Offset: 0x0C) MODE0 Interrupt Flag Status and Clear */
  __IO uint8_t DBGCTRL;        /**< (RTC Offset: 0x0E) Debug Control */
  __I  uint8_t                        Reserved2[1];
  __I  uint32_t SYNCBUSY;       /**< (RTC Offset: 0x10) MODE0 Synchronization Busy Status */
  __IO uint8_t FREQCORR;       /**< (RTC Offset: 0x14) Frequency Correction */
  __I  uint8_t                        Reserved3[3];
  __IO uint32_t COUNT;          /**< (RTC Offset: 0x18) MODE0 Counter Value */
  __I  uint8_t                        Reserved4[4];
  __IO uint32_t COMP;           /**< (RTC Offset: 0x20) MODE0 Compare n Value */
  __I  uint8_t                        Reserved5[28];
  __IO uint32_t GP[2];          /**< (RTC Offset: 0x40) General Purpose */
} RtcMode0;

/** \brief RTC hardware registers */
typedef struct {  /* Real-Time Counter */
  __IO uint16_t CTRLA;          /**< (RTC Offset: 0x00) MODE1 Control A */
  __I  uint8_t                        Reserved1[2];
  __IO uint32_t EVCTRL;         /**< (RTC Offset: 0x04) MODE1 Event Control */
  __IO uint16_t INTENCLR;       /**< (RTC Offset: 0x08) MODE1 Interrupt Enable Clear */
  __IO uint16_t INTENSET;       /**< (RTC Offset: 0x0A) MODE1 Interrupt Enable Set */
  __IO uint16_t INTFLAG;        /**< (RTC Offset: 0x0C) MODE1 Interrupt Flag Status and Clear */
  __IO uint8_t DBGCTRL;        /**< (RTC Offset: 0x0E) Debug Control */
  __I  uint8_t                        Reserved2[1];
  __I  uint32_t SYNCBUSY;       /**< (RTC Offset: 0x10) MODE1 Synchronization Busy Status */
  __IO uint8_t FREQCORR;       /**< (RTC Offset: 0x14) Frequency Correction */
  __I  uint8_t                        Reserved3[3];
  __IO uint16_t COUNT;          /**< (RTC Offset: 0x18) MODE1 Counter Value */
  __I  uint8_t                        Reserved4[2];
  __IO uint16_t PER;            /**< (RTC Offset: 0x1C) MODE1 Counter Period */
  __I  uint8_t                        Reserved5[2];
  __IO uint16_t COMP[2];        /**< (RTC Offset: 0x20) MODE1 Compare n Value */
  __I  uint8_t                        Reserved6[28];
  __IO uint32_t GP[2];          /**< (RTC Offset: 0x40) General Purpose */
} RtcMode1;

/** \brief RTC hardware registers */
typedef struct {  /* Real-Time Counter */
  __IO uint16_t CTRLA;          /**< (RTC Offset: 0x00) MODE2 Control A */
  __I  uint8_t                        Reserved1[2];
  __IO uint32_t EVCTRL;         /**< (RTC Offset: 0x04) MODE2 Event Control */
  __IO uint16_t INTENCLR;       /**< (RTC Offset: 0x08) MODE2 Interrupt Enable Clear */
  __IO uint16_t INTENSET;       /**< (RTC Offset: 0x0A) MODE2 Interrupt Enable Set */
  __IO uint16_t INTFLAG;        /**< (RTC Offset: 0x0C) MODE2 Interrupt Flag Status and Clear */
  __IO uint8_t DBGCTRL;        /**< (RTC Offset: 0x0E) Debug Control */
  __I  uint8_t                        Reserved2[1];
  __I  uint32_t SYNCBUSY;       /**< (RTC Offset: 0x10) MODE2 Synchronization Busy Status */
  __IO uint8_t FREQCORR;       /**< (RTC Offset: 0x14) Frequency Correction */
  __I  uint8_t                        Reserved3[3];
  __IO uint32_t CLOCK;          /**< (RTC Offset: 0x18) MODE2 Clock Value */
  __I  uint8_t                        Reserved4[4];
  __IO uint32_t ALARM;          /**< (RTC Offset: 0x20) MODE2_ALARM Alarm n Value */
  __IO uint8_t MASK;           /**< (RTC Offset: 0x24) MODE2_ALARM Alarm n Mask */
  __I  uint8_t                        Reserved5[27];
  __IO uint32_t GP[2];          /**< (RTC Offset: 0x40) General Purpose */
} RtcMode2;

/** \brief RTC hardware registers */
typedef union {  /* Real-Time Counter */
       RtcMode0                       MODE0;          /**< 32-bit Counter with Single 32-bit Compare */
       RtcMode1                       MODE1;          /**< 16-bit Counter with Two 16-bit Compares */
       RtcMode2                       MODE2;          /**< Clock/Calendar with Alarm */
} Rtc;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief RTC hardware registers */
typedef struct {  /* Real-Time Counter */
  __IO RTC_MODE0_CTRLA_Type           CTRLA;          /**< Offset: 0x00 (R/W  16) MODE0 Control A */
  __I  uint8_t                        Reserved1[2];
  __IO RTC_MODE0_EVCTRL_Type          EVCTRL;         /**< Offset: 0x04 (R/W  32) MODE0 Event Control */
  __IO RTC_MODE0_INTENCLR_Type        INTENCLR;       /**< Offset: 0x08 (R/W  16) MODE0 Interrupt Enable Clear */
  __IO RTC_MODE0_INTENSET_Type        INTENSET;       /**< Offset: 0x0A (R/W  16) MODE0 Interrupt Enable Set */
  __IO RTC_MODE0_INTFLAG_Type         INTFLAG;        /**< Offset: 0x0C (R/W  16) MODE0 Interrupt Flag Status and Clear */
  __IO RTC_DBGCTRL_Type               DBGCTRL;        /**< Offset: 0x0E (R/W   8) Debug Control */
  __I  uint8_t                        Reserved2[1];
  __I  RTC_MODE0_SYNCBUSY_Type        SYNCBUSY;       /**< Offset: 0x10 (R/   32) MODE0 Synchronization Busy Status */
  __IO RTC_FREQCORR_Type              FREQCORR;       /**< Offset: 0x14 (R/W   8) Frequency Correction */
  __I  uint8_t                        Reserved3[3];
  __IO RTC_MODE0_COUNT_Type           COUNT;          /**< Offset: 0x18 (R/W  32) MODE0 Counter Value */
  __I  uint8_t                        Reserved4[4];
  __IO RTC_MODE0_COMP_Type            COMP;           /**< Offset: 0x20 (R/W  32) MODE0 Compare n Value */
  __I  uint8_t                        Reserved5[28];
  __IO RTC_GP_Type                    GP[2];          /**< Offset: 0x40 (R/W  32) General Purpose */
} RtcMode0;

/** \brief RTC hardware registers */
typedef struct {  /* Real-Time Counter */
  __IO RTC_MODE1_CTRLA_Type           CTRLA;          /**< Offset: 0x00 (R/W  16) MODE1 Control A */
  __I  uint8_t                        Reserved1[2];
  __IO RTC_MODE1_EVCTRL_Type          EVCTRL;         /**< Offset: 0x04 (R/W  32) MODE1 Event Control */
  __IO RTC_MODE1_INTENCLR_Type        INTENCLR;       /**< Offset: 0x08 (R/W  16) MODE1 Interrupt Enable Clear */
  __IO RTC_MODE1_INTENSET_Type        INTENSET;       /**< Offset: 0x0A (R/W  16) MODE1 Interrupt Enable Set */
  __IO RTC_MODE1_INTFLAG_Type         INTFLAG;        /**< Offset: 0x0C (R/W  16) MODE1 Interrupt Flag Status and Clear */
  __IO RTC_DBGCTRL_Type               DBGCTRL;        /**< Offset: 0x0E (R/W   8) Debug Control */
  __I  uint8_t                        Reserved2[1];
  __I  RTC_MODE1_SYNCBUSY_Type        SYNCBUSY;       /**< Offset: 0x10 (R/   32) MODE1 Synchronization Busy Status */
  __IO RTC_FREQCORR_Type              FREQCORR;       /**< Offset: 0x14 (R/W   8) Frequency Correction */
  __I  uint8_t                        Reserved3[3];
  __IO RTC_MODE1_COUNT_Type           COUNT;          /**< Offset: 0x18 (R/W  16) MODE1 Counter Value */
  __I  uint8_t                        Reserved4[2];
  __IO RTC_MODE1_PER_Type             PER;            /**< Offset: 0x1C (R/W  16) MODE1 Counter Period */
  __I  uint8_t                        Reserved5[2];
  __IO RTC_MODE1_COMP_Type            COMP[2];        /**< Offset: 0x20 (R/W  16) MODE1 Compare n Value */
  __I  uint8_t                        Reserved6[28];
  __IO RTC_GP_Type                    GP[2];          /**< Offset: 0x40 (R/W  32) General Purpose */
} RtcMode1;

/** \brief RTC hardware registers */
typedef struct {  /* Real-Time Counter */
  __IO RTC_MODE2_CTRLA_Type           CTRLA;          /**< Offset: 0x00 (R/W  16) MODE2 Control A */
  __I  uint8_t                        Reserved1[2];
  __IO RTC_MODE2_EVCTRL_Type          EVCTRL;         /**< Offset: 0x04 (R/W  32) MODE2 Event Control */
  __IO RTC_MODE2_INTENCLR_Type        INTENCLR;       /**< Offset: 0x08 (R/W  16) MODE2 Interrupt Enable Clear */
  __IO RTC_MODE2_INTENSET_Type        INTENSET;       /**< Offset: 0x0A (R/W  16) MODE2 Interrupt Enable Set */
  __IO RTC_MODE2_INTFLAG_Type         INTFLAG;        /**< Offset: 0x0C (R/W  16) MODE2 Interrupt Flag Status and Clear */
  __IO RTC_DBGCTRL_Type               DBGCTRL;        /**< Offset: 0x0E (R/W   8) Debug Control */
  __I  uint8_t                        Reserved2[1];
  __I  RTC_MODE2_SYNCBUSY_Type        SYNCBUSY;       /**< Offset: 0x10 (R/   32) MODE2 Synchronization Busy Status */
  __IO RTC_FREQCORR_Type              FREQCORR;       /**< Offset: 0x14 (R/W   8) Frequency Correction */
  __I  uint8_t                        Reserved3[3];
  __IO RTC_MODE2_CLOCK_Type           CLOCK;          /**< Offset: 0x18 (R/W  32) MODE2 Clock Value */
  __I  uint8_t                        Reserved4[4];
  __IO RTC_MODE2_ALARM_Type           ALARM;          /**< Offset: 0x20 (R/W  32) MODE2_ALARM Alarm n Value */
  __IO RTC_MODE2_MASK_Type            MASK;           /**< Offset: 0x24 (R/W   8) MODE2_ALARM Alarm n Mask */
  __I  uint8_t                        Reserved5[27];
  __IO RTC_GP_Type                    GP[2];          /**< Offset: 0x40 (R/W  32) General Purpose */
} RtcMode2;

/** \brief RTC hardware registers */
typedef union {  /* Real-Time Counter */
       RtcMode0                       MODE0;          /**< 32-bit Counter with Single 32-bit Compare */
       RtcMode1                       MODE1;          /**< 16-bit Counter with Two 16-bit Compares */
       RtcMode2                       MODE2;          /**< Clock/Calendar with Alarm */
} Rtc;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  b'end of Real-Time Counter' */

#endif /* _WLR089_RTC_COMPONENT_H_ */
