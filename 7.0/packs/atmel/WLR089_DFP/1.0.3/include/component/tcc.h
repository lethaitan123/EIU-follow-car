/**
 * \brief Component description for TCC
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
#ifndef _WLR089_TCC_COMPONENT_H_
#define _WLR089_TCC_COMPONENT_H_
#define _WLR089_TCC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup WLR089_TCC b'Timer Counter Control'
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR TCC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define TCC_U2213                      /**< (TCC) Module ID */
#define REV_TCC 0x300                  /**< (TCC) Module revision */

/* -------- TCC_CTRLA : (TCC Offset: 0x00) (R/W 32) Control A -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint32_t ENABLE:1;                  /**< bit:      1  Enable                                   */
    uint32_t :3;                        /**< bit:   2..4  Reserved */
    uint32_t RESOLUTION:2;              /**< bit:   5..6  Enhanced Resolution                      */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t PRESCALER:3;               /**< bit:  8..10  Prescaler                                */
    uint32_t RUNSTDBY:1;                /**< bit:     11  Run in Standby                           */
    uint32_t PRESCSYNC:2;               /**< bit: 12..13  Prescaler and Counter Synchronization Selection */
    uint32_t ALOCK:1;                   /**< bit:     14  Auto Lock                                */
    uint32_t MSYNC:1;                   /**< bit:     15  Master Synchronization (only for TCC Slave Instance) */
    uint32_t :7;                        /**< bit: 16..22  Reserved */
    uint32_t DMAOS:1;                   /**< bit:     23  DMA One-shot Trigger Mode                */
    uint32_t CPTEN0:1;                  /**< bit:     24  Capture Channel 0 Enable                 */
    uint32_t CPTEN1:1;                  /**< bit:     25  Capture Channel 1 Enable                 */
    uint32_t CPTEN2:1;                  /**< bit:     26  Capture Channel 2 Enable                 */
    uint32_t CPTEN3:1;                  /**< bit:     27  Capture Channel 3 Enable                 */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :24;                       /**< bit:  0..23  Reserved */
    uint32_t CPTEN:4;                   /**< bit: 24..27  Capture Channel 3 Enable                 */
    uint32_t :4;                        /**< bit: 28..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} TCC_CTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_CTRLA_OFFSET                    (0x00)                                        /**<  (TCC_CTRLA) Control A  Offset */
#define TCC_CTRLA_RESETVALUE                _U_(0x00)                                     /**<  (TCC_CTRLA) Control A  Reset Value */

#define TCC_CTRLA_SWRST_Pos                 0                                              /**< (TCC_CTRLA) Software Reset Position */
#define TCC_CTRLA_SWRST_Msk                 (_U_(0x1) << TCC_CTRLA_SWRST_Pos)              /**< (TCC_CTRLA) Software Reset Mask */
#define TCC_CTRLA_SWRST                     TCC_CTRLA_SWRST_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_CTRLA_SWRST_Msk instead */
#define TCC_CTRLA_ENABLE_Pos                1                                              /**< (TCC_CTRLA) Enable Position */
#define TCC_CTRLA_ENABLE_Msk                (_U_(0x1) << TCC_CTRLA_ENABLE_Pos)             /**< (TCC_CTRLA) Enable Mask */
#define TCC_CTRLA_ENABLE                    TCC_CTRLA_ENABLE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_CTRLA_ENABLE_Msk instead */
#define TCC_CTRLA_RESOLUTION_Pos            5                                              /**< (TCC_CTRLA) Enhanced Resolution Position */
#define TCC_CTRLA_RESOLUTION_Msk            (_U_(0x3) << TCC_CTRLA_RESOLUTION_Pos)         /**< (TCC_CTRLA) Enhanced Resolution Mask */
#define TCC_CTRLA_RESOLUTION(value)         (TCC_CTRLA_RESOLUTION_Msk & ((value) << TCC_CTRLA_RESOLUTION_Pos))
#define   TCC_CTRLA_RESOLUTION_NONE_Val     _U_(0x0)                                       /**< (TCC_CTRLA) Dithering is disabled  */
#define   TCC_CTRLA_RESOLUTION_DITH4_Val    _U_(0x1)                                       /**< (TCC_CTRLA) Dithering is done every 16 PWM frames  */
#define   TCC_CTRLA_RESOLUTION_DITH5_Val    _U_(0x2)                                       /**< (TCC_CTRLA) Dithering is done every 32 PWM frames  */
#define   TCC_CTRLA_RESOLUTION_DITH6_Val    _U_(0x3)                                       /**< (TCC_CTRLA) Dithering is done every 64 PWM frames  */
#define TCC_CTRLA_RESOLUTION_NONE           (TCC_CTRLA_RESOLUTION_NONE_Val << TCC_CTRLA_RESOLUTION_Pos)  /**< (TCC_CTRLA) Dithering is disabled Position  */
#define TCC_CTRLA_RESOLUTION_DITH4          (TCC_CTRLA_RESOLUTION_DITH4_Val << TCC_CTRLA_RESOLUTION_Pos)  /**< (TCC_CTRLA) Dithering is done every 16 PWM frames Position  */
#define TCC_CTRLA_RESOLUTION_DITH5          (TCC_CTRLA_RESOLUTION_DITH5_Val << TCC_CTRLA_RESOLUTION_Pos)  /**< (TCC_CTRLA) Dithering is done every 32 PWM frames Position  */
#define TCC_CTRLA_RESOLUTION_DITH6          (TCC_CTRLA_RESOLUTION_DITH6_Val << TCC_CTRLA_RESOLUTION_Pos)  /**< (TCC_CTRLA) Dithering is done every 64 PWM frames Position  */
#define TCC_CTRLA_PRESCALER_Pos             8                                              /**< (TCC_CTRLA) Prescaler Position */
#define TCC_CTRLA_PRESCALER_Msk             (_U_(0x7) << TCC_CTRLA_PRESCALER_Pos)          /**< (TCC_CTRLA) Prescaler Mask */
#define TCC_CTRLA_PRESCALER(value)          (TCC_CTRLA_PRESCALER_Msk & ((value) << TCC_CTRLA_PRESCALER_Pos))
#define   TCC_CTRLA_PRESCALER_DIV1_Val      _U_(0x0)                                       /**< (TCC_CTRLA) No division  */
#define   TCC_CTRLA_PRESCALER_DIV2_Val      _U_(0x1)                                       /**< (TCC_CTRLA) Divide by 2  */
#define   TCC_CTRLA_PRESCALER_DIV4_Val      _U_(0x2)                                       /**< (TCC_CTRLA) Divide by 4  */
#define   TCC_CTRLA_PRESCALER_DIV8_Val      _U_(0x3)                                       /**< (TCC_CTRLA) Divide by 8  */
#define   TCC_CTRLA_PRESCALER_DIV16_Val     _U_(0x4)                                       /**< (TCC_CTRLA) Divide by 16  */
#define   TCC_CTRLA_PRESCALER_DIV64_Val     _U_(0x5)                                       /**< (TCC_CTRLA) Divide by 64  */
#define   TCC_CTRLA_PRESCALER_DIV256_Val    _U_(0x6)                                       /**< (TCC_CTRLA) Divide by 256  */
#define   TCC_CTRLA_PRESCALER_DIV1024_Val   _U_(0x7)                                       /**< (TCC_CTRLA) Divide by 1024  */
#define TCC_CTRLA_PRESCALER_DIV1            (TCC_CTRLA_PRESCALER_DIV1_Val << TCC_CTRLA_PRESCALER_Pos)  /**< (TCC_CTRLA) No division Position  */
#define TCC_CTRLA_PRESCALER_DIV2            (TCC_CTRLA_PRESCALER_DIV2_Val << TCC_CTRLA_PRESCALER_Pos)  /**< (TCC_CTRLA) Divide by 2 Position  */
#define TCC_CTRLA_PRESCALER_DIV4            (TCC_CTRLA_PRESCALER_DIV4_Val << TCC_CTRLA_PRESCALER_Pos)  /**< (TCC_CTRLA) Divide by 4 Position  */
#define TCC_CTRLA_PRESCALER_DIV8            (TCC_CTRLA_PRESCALER_DIV8_Val << TCC_CTRLA_PRESCALER_Pos)  /**< (TCC_CTRLA) Divide by 8 Position  */
#define TCC_CTRLA_PRESCALER_DIV16           (TCC_CTRLA_PRESCALER_DIV16_Val << TCC_CTRLA_PRESCALER_Pos)  /**< (TCC_CTRLA) Divide by 16 Position  */
#define TCC_CTRLA_PRESCALER_DIV64           (TCC_CTRLA_PRESCALER_DIV64_Val << TCC_CTRLA_PRESCALER_Pos)  /**< (TCC_CTRLA) Divide by 64 Position  */
#define TCC_CTRLA_PRESCALER_DIV256          (TCC_CTRLA_PRESCALER_DIV256_Val << TCC_CTRLA_PRESCALER_Pos)  /**< (TCC_CTRLA) Divide by 256 Position  */
#define TCC_CTRLA_PRESCALER_DIV1024         (TCC_CTRLA_PRESCALER_DIV1024_Val << TCC_CTRLA_PRESCALER_Pos)  /**< (TCC_CTRLA) Divide by 1024 Position  */
#define TCC_CTRLA_RUNSTDBY_Pos              11                                             /**< (TCC_CTRLA) Run in Standby Position */
#define TCC_CTRLA_RUNSTDBY_Msk              (_U_(0x1) << TCC_CTRLA_RUNSTDBY_Pos)           /**< (TCC_CTRLA) Run in Standby Mask */
#define TCC_CTRLA_RUNSTDBY                  TCC_CTRLA_RUNSTDBY_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_CTRLA_RUNSTDBY_Msk instead */
#define TCC_CTRLA_PRESCSYNC_Pos             12                                             /**< (TCC_CTRLA) Prescaler and Counter Synchronization Selection Position */
#define TCC_CTRLA_PRESCSYNC_Msk             (_U_(0x3) << TCC_CTRLA_PRESCSYNC_Pos)          /**< (TCC_CTRLA) Prescaler and Counter Synchronization Selection Mask */
#define TCC_CTRLA_PRESCSYNC(value)          (TCC_CTRLA_PRESCSYNC_Msk & ((value) << TCC_CTRLA_PRESCSYNC_Pos))
#define   TCC_CTRLA_PRESCSYNC_GCLK_Val      _U_(0x0)                                       /**< (TCC_CTRLA) Reload or reset counter on next GCLK  */
#define   TCC_CTRLA_PRESCSYNC_PRESC_Val     _U_(0x1)                                       /**< (TCC_CTRLA) Reload or reset counter on next prescaler clock  */
#define   TCC_CTRLA_PRESCSYNC_RESYNC_Val    _U_(0x2)                                       /**< (TCC_CTRLA) Reload or reset counter on next GCLK and reset prescaler counter  */
#define TCC_CTRLA_PRESCSYNC_GCLK            (TCC_CTRLA_PRESCSYNC_GCLK_Val << TCC_CTRLA_PRESCSYNC_Pos)  /**< (TCC_CTRLA) Reload or reset counter on next GCLK Position  */
#define TCC_CTRLA_PRESCSYNC_PRESC           (TCC_CTRLA_PRESCSYNC_PRESC_Val << TCC_CTRLA_PRESCSYNC_Pos)  /**< (TCC_CTRLA) Reload or reset counter on next prescaler clock Position  */
#define TCC_CTRLA_PRESCSYNC_RESYNC          (TCC_CTRLA_PRESCSYNC_RESYNC_Val << TCC_CTRLA_PRESCSYNC_Pos)  /**< (TCC_CTRLA) Reload or reset counter on next GCLK and reset prescaler counter Position  */
#define TCC_CTRLA_ALOCK_Pos                 14                                             /**< (TCC_CTRLA) Auto Lock Position */
#define TCC_CTRLA_ALOCK_Msk                 (_U_(0x1) << TCC_CTRLA_ALOCK_Pos)              /**< (TCC_CTRLA) Auto Lock Mask */
#define TCC_CTRLA_ALOCK                     TCC_CTRLA_ALOCK_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_CTRLA_ALOCK_Msk instead */
#define TCC_CTRLA_MSYNC_Pos                 15                                             /**< (TCC_CTRLA) Master Synchronization (only for TCC Slave Instance) Position */
#define TCC_CTRLA_MSYNC_Msk                 (_U_(0x1) << TCC_CTRLA_MSYNC_Pos)              /**< (TCC_CTRLA) Master Synchronization (only for TCC Slave Instance) Mask */
#define TCC_CTRLA_MSYNC                     TCC_CTRLA_MSYNC_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_CTRLA_MSYNC_Msk instead */
#define TCC_CTRLA_DMAOS_Pos                 23                                             /**< (TCC_CTRLA) DMA One-shot Trigger Mode Position */
#define TCC_CTRLA_DMAOS_Msk                 (_U_(0x1) << TCC_CTRLA_DMAOS_Pos)              /**< (TCC_CTRLA) DMA One-shot Trigger Mode Mask */
#define TCC_CTRLA_DMAOS                     TCC_CTRLA_DMAOS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_CTRLA_DMAOS_Msk instead */
#define TCC_CTRLA_CPTEN0_Pos                24                                             /**< (TCC_CTRLA) Capture Channel 0 Enable Position */
#define TCC_CTRLA_CPTEN0_Msk                (_U_(0x1) << TCC_CTRLA_CPTEN0_Pos)             /**< (TCC_CTRLA) Capture Channel 0 Enable Mask */
#define TCC_CTRLA_CPTEN0                    TCC_CTRLA_CPTEN0_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_CTRLA_CPTEN0_Msk instead */
#define TCC_CTRLA_CPTEN1_Pos                25                                             /**< (TCC_CTRLA) Capture Channel 1 Enable Position */
#define TCC_CTRLA_CPTEN1_Msk                (_U_(0x1) << TCC_CTRLA_CPTEN1_Pos)             /**< (TCC_CTRLA) Capture Channel 1 Enable Mask */
#define TCC_CTRLA_CPTEN1                    TCC_CTRLA_CPTEN1_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_CTRLA_CPTEN1_Msk instead */
#define TCC_CTRLA_CPTEN2_Pos                26                                             /**< (TCC_CTRLA) Capture Channel 2 Enable Position */
#define TCC_CTRLA_CPTEN2_Msk                (_U_(0x1) << TCC_CTRLA_CPTEN2_Pos)             /**< (TCC_CTRLA) Capture Channel 2 Enable Mask */
#define TCC_CTRLA_CPTEN2                    TCC_CTRLA_CPTEN2_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_CTRLA_CPTEN2_Msk instead */
#define TCC_CTRLA_CPTEN3_Pos                27                                             /**< (TCC_CTRLA) Capture Channel 3 Enable Position */
#define TCC_CTRLA_CPTEN3_Msk                (_U_(0x1) << TCC_CTRLA_CPTEN3_Pos)             /**< (TCC_CTRLA) Capture Channel 3 Enable Mask */
#define TCC_CTRLA_CPTEN3                    TCC_CTRLA_CPTEN3_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_CTRLA_CPTEN3_Msk instead */
#define TCC_CTRLA_MASK                      _U_(0xF80FF63)                                 /**< \deprecated (TCC_CTRLA) Register MASK  (Use TCC_CTRLA_Msk instead)  */
#define TCC_CTRLA_Msk                       _U_(0xF80FF63)                                 /**< (TCC_CTRLA) Register Mask  */

#define TCC_CTRLA_CPTEN_Pos                 24                                             /**< (TCC_CTRLA Position) Capture Channel 3 Enable */
#define TCC_CTRLA_CPTEN_Msk                 (_U_(0xF) << TCC_CTRLA_CPTEN_Pos)              /**< (TCC_CTRLA Mask) CPTEN */
#define TCC_CTRLA_CPTEN(value)              (TCC_CTRLA_CPTEN_Msk & ((value) << TCC_CTRLA_CPTEN_Pos))  

/* -------- TCC_CTRLBCLR : (TCC Offset: 0x04) (R/W 8) Control B Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DIR:1;                     /**< bit:      0  Counter Direction                        */
    uint8_t  LUPD:1;                    /**< bit:      1  Lock Update                              */
    uint8_t  ONESHOT:1;                 /**< bit:      2  One-Shot                                 */
    uint8_t  IDXCMD:2;                  /**< bit:   3..4  Ramp Index Command                       */
    uint8_t  CMD:3;                     /**< bit:   5..7  TCC Command                              */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} TCC_CTRLBCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_CTRLBCLR_OFFSET                 (0x04)                                        /**<  (TCC_CTRLBCLR) Control B Clear  Offset */
#define TCC_CTRLBCLR_RESETVALUE             _U_(0x00)                                     /**<  (TCC_CTRLBCLR) Control B Clear  Reset Value */

#define TCC_CTRLBCLR_DIR_Pos                0                                              /**< (TCC_CTRLBCLR) Counter Direction Position */
#define TCC_CTRLBCLR_DIR_Msk                (_U_(0x1) << TCC_CTRLBCLR_DIR_Pos)             /**< (TCC_CTRLBCLR) Counter Direction Mask */
#define TCC_CTRLBCLR_DIR                    TCC_CTRLBCLR_DIR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_CTRLBCLR_DIR_Msk instead */
#define TCC_CTRLBCLR_LUPD_Pos               1                                              /**< (TCC_CTRLBCLR) Lock Update Position */
#define TCC_CTRLBCLR_LUPD_Msk               (_U_(0x1) << TCC_CTRLBCLR_LUPD_Pos)            /**< (TCC_CTRLBCLR) Lock Update Mask */
#define TCC_CTRLBCLR_LUPD                   TCC_CTRLBCLR_LUPD_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_CTRLBCLR_LUPD_Msk instead */
#define TCC_CTRLBCLR_ONESHOT_Pos            2                                              /**< (TCC_CTRLBCLR) One-Shot Position */
#define TCC_CTRLBCLR_ONESHOT_Msk            (_U_(0x1) << TCC_CTRLBCLR_ONESHOT_Pos)         /**< (TCC_CTRLBCLR) One-Shot Mask */
#define TCC_CTRLBCLR_ONESHOT                TCC_CTRLBCLR_ONESHOT_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_CTRLBCLR_ONESHOT_Msk instead */
#define TCC_CTRLBCLR_IDXCMD_Pos             3                                              /**< (TCC_CTRLBCLR) Ramp Index Command Position */
#define TCC_CTRLBCLR_IDXCMD_Msk             (_U_(0x3) << TCC_CTRLBCLR_IDXCMD_Pos)          /**< (TCC_CTRLBCLR) Ramp Index Command Mask */
#define TCC_CTRLBCLR_IDXCMD(value)          (TCC_CTRLBCLR_IDXCMD_Msk & ((value) << TCC_CTRLBCLR_IDXCMD_Pos))
#define   TCC_CTRLBCLR_IDXCMD_DISABLE_Val   _U_(0x0)                                       /**< (TCC_CTRLBCLR) Command disabled: Index toggles between cycles A and B  */
#define   TCC_CTRLBCLR_IDXCMD_SET_Val       _U_(0x1)                                       /**< (TCC_CTRLBCLR) Set index: cycle B will be forced in the next cycle  */
#define   TCC_CTRLBCLR_IDXCMD_CLEAR_Val     _U_(0x2)                                       /**< (TCC_CTRLBCLR) Clear index: cycle A will be forced in the next cycle  */
#define   TCC_CTRLBCLR_IDXCMD_HOLD_Val      _U_(0x3)                                       /**< (TCC_CTRLBCLR) Hold index: the next cycle will be the same as the current cycle  */
#define TCC_CTRLBCLR_IDXCMD_DISABLE         (TCC_CTRLBCLR_IDXCMD_DISABLE_Val << TCC_CTRLBCLR_IDXCMD_Pos)  /**< (TCC_CTRLBCLR) Command disabled: Index toggles between cycles A and B Position  */
#define TCC_CTRLBCLR_IDXCMD_SET             (TCC_CTRLBCLR_IDXCMD_SET_Val << TCC_CTRLBCLR_IDXCMD_Pos)  /**< (TCC_CTRLBCLR) Set index: cycle B will be forced in the next cycle Position  */
#define TCC_CTRLBCLR_IDXCMD_CLEAR           (TCC_CTRLBCLR_IDXCMD_CLEAR_Val << TCC_CTRLBCLR_IDXCMD_Pos)  /**< (TCC_CTRLBCLR) Clear index: cycle A will be forced in the next cycle Position  */
#define TCC_CTRLBCLR_IDXCMD_HOLD            (TCC_CTRLBCLR_IDXCMD_HOLD_Val << TCC_CTRLBCLR_IDXCMD_Pos)  /**< (TCC_CTRLBCLR) Hold index: the next cycle will be the same as the current cycle Position  */
#define TCC_CTRLBCLR_CMD_Pos                5                                              /**< (TCC_CTRLBCLR) TCC Command Position */
#define TCC_CTRLBCLR_CMD_Msk                (_U_(0x7) << TCC_CTRLBCLR_CMD_Pos)             /**< (TCC_CTRLBCLR) TCC Command Mask */
#define TCC_CTRLBCLR_CMD(value)             (TCC_CTRLBCLR_CMD_Msk & ((value) << TCC_CTRLBCLR_CMD_Pos))
#define   TCC_CTRLBCLR_CMD_NONE_Val         _U_(0x0)                                       /**< (TCC_CTRLBCLR) No action  */
#define   TCC_CTRLBCLR_CMD_RETRIGGER_Val    _U_(0x1)                                       /**< (TCC_CTRLBCLR) Clear start, restart or retrigger  */
#define   TCC_CTRLBCLR_CMD_STOP_Val         _U_(0x2)                                       /**< (TCC_CTRLBCLR) Force stop  */
#define   TCC_CTRLBCLR_CMD_UPDATE_Val       _U_(0x3)                                       /**< (TCC_CTRLBCLR) Force update or double buffered registers  */
#define   TCC_CTRLBCLR_CMD_READSYNC_Val     _U_(0x4)                                       /**< (TCC_CTRLBCLR) Force COUNT read synchronization  */
#define   TCC_CTRLBCLR_CMD_DMAOS_Val        _U_(0x5)                                       /**< (TCC_CTRLBCLR) One-shot DMA trigger  */
#define TCC_CTRLBCLR_CMD_NONE               (TCC_CTRLBCLR_CMD_NONE_Val << TCC_CTRLBCLR_CMD_Pos)  /**< (TCC_CTRLBCLR) No action Position  */
#define TCC_CTRLBCLR_CMD_RETRIGGER          (TCC_CTRLBCLR_CMD_RETRIGGER_Val << TCC_CTRLBCLR_CMD_Pos)  /**< (TCC_CTRLBCLR) Clear start, restart or retrigger Position  */
#define TCC_CTRLBCLR_CMD_STOP               (TCC_CTRLBCLR_CMD_STOP_Val << TCC_CTRLBCLR_CMD_Pos)  /**< (TCC_CTRLBCLR) Force stop Position  */
#define TCC_CTRLBCLR_CMD_UPDATE             (TCC_CTRLBCLR_CMD_UPDATE_Val << TCC_CTRLBCLR_CMD_Pos)  /**< (TCC_CTRLBCLR) Force update or double buffered registers Position  */
#define TCC_CTRLBCLR_CMD_READSYNC           (TCC_CTRLBCLR_CMD_READSYNC_Val << TCC_CTRLBCLR_CMD_Pos)  /**< (TCC_CTRLBCLR) Force COUNT read synchronization Position  */
#define TCC_CTRLBCLR_CMD_DMAOS              (TCC_CTRLBCLR_CMD_DMAOS_Val << TCC_CTRLBCLR_CMD_Pos)  /**< (TCC_CTRLBCLR) One-shot DMA trigger Position  */
#define TCC_CTRLBCLR_MASK                   _U_(0xFF)                                      /**< \deprecated (TCC_CTRLBCLR) Register MASK  (Use TCC_CTRLBCLR_Msk instead)  */
#define TCC_CTRLBCLR_Msk                    _U_(0xFF)                                      /**< (TCC_CTRLBCLR) Register Mask  */


/* -------- TCC_CTRLBSET : (TCC Offset: 0x05) (R/W 8) Control B Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DIR:1;                     /**< bit:      0  Counter Direction                        */
    uint8_t  LUPD:1;                    /**< bit:      1  Lock Update                              */
    uint8_t  ONESHOT:1;                 /**< bit:      2  One-Shot                                 */
    uint8_t  IDXCMD:2;                  /**< bit:   3..4  Ramp Index Command                       */
    uint8_t  CMD:3;                     /**< bit:   5..7  TCC Command                              */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} TCC_CTRLBSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_CTRLBSET_OFFSET                 (0x05)                                        /**<  (TCC_CTRLBSET) Control B Set  Offset */
#define TCC_CTRLBSET_RESETVALUE             _U_(0x00)                                     /**<  (TCC_CTRLBSET) Control B Set  Reset Value */

#define TCC_CTRLBSET_DIR_Pos                0                                              /**< (TCC_CTRLBSET) Counter Direction Position */
#define TCC_CTRLBSET_DIR_Msk                (_U_(0x1) << TCC_CTRLBSET_DIR_Pos)             /**< (TCC_CTRLBSET) Counter Direction Mask */
#define TCC_CTRLBSET_DIR                    TCC_CTRLBSET_DIR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_CTRLBSET_DIR_Msk instead */
#define TCC_CTRLBSET_LUPD_Pos               1                                              /**< (TCC_CTRLBSET) Lock Update Position */
#define TCC_CTRLBSET_LUPD_Msk               (_U_(0x1) << TCC_CTRLBSET_LUPD_Pos)            /**< (TCC_CTRLBSET) Lock Update Mask */
#define TCC_CTRLBSET_LUPD                   TCC_CTRLBSET_LUPD_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_CTRLBSET_LUPD_Msk instead */
#define TCC_CTRLBSET_ONESHOT_Pos            2                                              /**< (TCC_CTRLBSET) One-Shot Position */
#define TCC_CTRLBSET_ONESHOT_Msk            (_U_(0x1) << TCC_CTRLBSET_ONESHOT_Pos)         /**< (TCC_CTRLBSET) One-Shot Mask */
#define TCC_CTRLBSET_ONESHOT                TCC_CTRLBSET_ONESHOT_Msk                       /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_CTRLBSET_ONESHOT_Msk instead */
#define TCC_CTRLBSET_IDXCMD_Pos             3                                              /**< (TCC_CTRLBSET) Ramp Index Command Position */
#define TCC_CTRLBSET_IDXCMD_Msk             (_U_(0x3) << TCC_CTRLBSET_IDXCMD_Pos)          /**< (TCC_CTRLBSET) Ramp Index Command Mask */
#define TCC_CTRLBSET_IDXCMD(value)          (TCC_CTRLBSET_IDXCMD_Msk & ((value) << TCC_CTRLBSET_IDXCMD_Pos))
#define   TCC_CTRLBSET_IDXCMD_DISABLE_Val   _U_(0x0)                                       /**< (TCC_CTRLBSET) Command disabled: Index toggles between cycles A and B  */
#define   TCC_CTRLBSET_IDXCMD_SET_Val       _U_(0x1)                                       /**< (TCC_CTRLBSET) Set index: cycle B will be forced in the next cycle  */
#define   TCC_CTRLBSET_IDXCMD_CLEAR_Val     _U_(0x2)                                       /**< (TCC_CTRLBSET) Clear index: cycle A will be forced in the next cycle  */
#define   TCC_CTRLBSET_IDXCMD_HOLD_Val      _U_(0x3)                                       /**< (TCC_CTRLBSET) Hold index: the next cycle will be the same as the current cycle  */
#define TCC_CTRLBSET_IDXCMD_DISABLE         (TCC_CTRLBSET_IDXCMD_DISABLE_Val << TCC_CTRLBSET_IDXCMD_Pos)  /**< (TCC_CTRLBSET) Command disabled: Index toggles between cycles A and B Position  */
#define TCC_CTRLBSET_IDXCMD_SET             (TCC_CTRLBSET_IDXCMD_SET_Val << TCC_CTRLBSET_IDXCMD_Pos)  /**< (TCC_CTRLBSET) Set index: cycle B will be forced in the next cycle Position  */
#define TCC_CTRLBSET_IDXCMD_CLEAR           (TCC_CTRLBSET_IDXCMD_CLEAR_Val << TCC_CTRLBSET_IDXCMD_Pos)  /**< (TCC_CTRLBSET) Clear index: cycle A will be forced in the next cycle Position  */
#define TCC_CTRLBSET_IDXCMD_HOLD            (TCC_CTRLBSET_IDXCMD_HOLD_Val << TCC_CTRLBSET_IDXCMD_Pos)  /**< (TCC_CTRLBSET) Hold index: the next cycle will be the same as the current cycle Position  */
#define TCC_CTRLBSET_CMD_Pos                5                                              /**< (TCC_CTRLBSET) TCC Command Position */
#define TCC_CTRLBSET_CMD_Msk                (_U_(0x7) << TCC_CTRLBSET_CMD_Pos)             /**< (TCC_CTRLBSET) TCC Command Mask */
#define TCC_CTRLBSET_CMD(value)             (TCC_CTRLBSET_CMD_Msk & ((value) << TCC_CTRLBSET_CMD_Pos))
#define   TCC_CTRLBSET_CMD_NONE_Val         _U_(0x0)                                       /**< (TCC_CTRLBSET) No action  */
#define   TCC_CTRLBSET_CMD_RETRIGGER_Val    _U_(0x1)                                       /**< (TCC_CTRLBSET) Clear start, restart or retrigger  */
#define   TCC_CTRLBSET_CMD_STOP_Val         _U_(0x2)                                       /**< (TCC_CTRLBSET) Force stop  */
#define   TCC_CTRLBSET_CMD_UPDATE_Val       _U_(0x3)                                       /**< (TCC_CTRLBSET) Force update or double buffered registers  */
#define   TCC_CTRLBSET_CMD_READSYNC_Val     _U_(0x4)                                       /**< (TCC_CTRLBSET) Force COUNT read synchronization  */
#define   TCC_CTRLBSET_CMD_DMAOS_Val        _U_(0x5)                                       /**< (TCC_CTRLBSET) One-shot DMA trigger  */
#define TCC_CTRLBSET_CMD_NONE               (TCC_CTRLBSET_CMD_NONE_Val << TCC_CTRLBSET_CMD_Pos)  /**< (TCC_CTRLBSET) No action Position  */
#define TCC_CTRLBSET_CMD_RETRIGGER          (TCC_CTRLBSET_CMD_RETRIGGER_Val << TCC_CTRLBSET_CMD_Pos)  /**< (TCC_CTRLBSET) Clear start, restart or retrigger Position  */
#define TCC_CTRLBSET_CMD_STOP               (TCC_CTRLBSET_CMD_STOP_Val << TCC_CTRLBSET_CMD_Pos)  /**< (TCC_CTRLBSET) Force stop Position  */
#define TCC_CTRLBSET_CMD_UPDATE             (TCC_CTRLBSET_CMD_UPDATE_Val << TCC_CTRLBSET_CMD_Pos)  /**< (TCC_CTRLBSET) Force update or double buffered registers Position  */
#define TCC_CTRLBSET_CMD_READSYNC           (TCC_CTRLBSET_CMD_READSYNC_Val << TCC_CTRLBSET_CMD_Pos)  /**< (TCC_CTRLBSET) Force COUNT read synchronization Position  */
#define TCC_CTRLBSET_CMD_DMAOS              (TCC_CTRLBSET_CMD_DMAOS_Val << TCC_CTRLBSET_CMD_Pos)  /**< (TCC_CTRLBSET) One-shot DMA trigger Position  */
#define TCC_CTRLBSET_MASK                   _U_(0xFF)                                      /**< \deprecated (TCC_CTRLBSET) Register MASK  (Use TCC_CTRLBSET_Msk instead)  */
#define TCC_CTRLBSET_Msk                    _U_(0xFF)                                      /**< (TCC_CTRLBSET) Register Mask  */


/* -------- TCC_SYNCBUSY : (TCC Offset: 0x08) (R/ 32) Synchronization Busy -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Swrst Busy                               */
    uint32_t ENABLE:1;                  /**< bit:      1  Enable Busy                              */
    uint32_t CTRLB:1;                   /**< bit:      2  Ctrlb Busy                               */
    uint32_t STATUS:1;                  /**< bit:      3  Status Busy                              */
    uint32_t COUNT:1;                   /**< bit:      4  Count Busy                               */
    uint32_t PATT:1;                    /**< bit:      5  Pattern Busy                             */
    uint32_t WAVE:1;                    /**< bit:      6  Wave Busy                                */
    uint32_t PER:1;                     /**< bit:      7  Period Busy                              */
    uint32_t CC0:1;                     /**< bit:      8  Compare Channel 0 Busy                   */
    uint32_t CC1:1;                     /**< bit:      9  Compare Channel 1 Busy                   */
    uint32_t CC2:1;                     /**< bit:     10  Compare Channel 2 Busy                   */
    uint32_t CC3:1;                     /**< bit:     11  Compare Channel 3 Busy                   */
    uint32_t :20;                       /**< bit: 12..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t CC:4;                      /**< bit:  8..11  Compare Channel 3 Busy                   */
    uint32_t :20;                       /**< bit: 12..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} TCC_SYNCBUSY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_SYNCBUSY_OFFSET                 (0x08)                                        /**<  (TCC_SYNCBUSY) Synchronization Busy  Offset */
#define TCC_SYNCBUSY_RESETVALUE             _U_(0x00)                                     /**<  (TCC_SYNCBUSY) Synchronization Busy  Reset Value */

#define TCC_SYNCBUSY_SWRST_Pos              0                                              /**< (TCC_SYNCBUSY) Swrst Busy Position */
#define TCC_SYNCBUSY_SWRST_Msk              (_U_(0x1) << TCC_SYNCBUSY_SWRST_Pos)           /**< (TCC_SYNCBUSY) Swrst Busy Mask */
#define TCC_SYNCBUSY_SWRST                  TCC_SYNCBUSY_SWRST_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_SYNCBUSY_SWRST_Msk instead */
#define TCC_SYNCBUSY_ENABLE_Pos             1                                              /**< (TCC_SYNCBUSY) Enable Busy Position */
#define TCC_SYNCBUSY_ENABLE_Msk             (_U_(0x1) << TCC_SYNCBUSY_ENABLE_Pos)          /**< (TCC_SYNCBUSY) Enable Busy Mask */
#define TCC_SYNCBUSY_ENABLE                 TCC_SYNCBUSY_ENABLE_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_SYNCBUSY_ENABLE_Msk instead */
#define TCC_SYNCBUSY_CTRLB_Pos              2                                              /**< (TCC_SYNCBUSY) Ctrlb Busy Position */
#define TCC_SYNCBUSY_CTRLB_Msk              (_U_(0x1) << TCC_SYNCBUSY_CTRLB_Pos)           /**< (TCC_SYNCBUSY) Ctrlb Busy Mask */
#define TCC_SYNCBUSY_CTRLB                  TCC_SYNCBUSY_CTRLB_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_SYNCBUSY_CTRLB_Msk instead */
#define TCC_SYNCBUSY_STATUS_Pos             3                                              /**< (TCC_SYNCBUSY) Status Busy Position */
#define TCC_SYNCBUSY_STATUS_Msk             (_U_(0x1) << TCC_SYNCBUSY_STATUS_Pos)          /**< (TCC_SYNCBUSY) Status Busy Mask */
#define TCC_SYNCBUSY_STATUS                 TCC_SYNCBUSY_STATUS_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_SYNCBUSY_STATUS_Msk instead */
#define TCC_SYNCBUSY_COUNT_Pos              4                                              /**< (TCC_SYNCBUSY) Count Busy Position */
#define TCC_SYNCBUSY_COUNT_Msk              (_U_(0x1) << TCC_SYNCBUSY_COUNT_Pos)           /**< (TCC_SYNCBUSY) Count Busy Mask */
#define TCC_SYNCBUSY_COUNT                  TCC_SYNCBUSY_COUNT_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_SYNCBUSY_COUNT_Msk instead */
#define TCC_SYNCBUSY_PATT_Pos               5                                              /**< (TCC_SYNCBUSY) Pattern Busy Position */
#define TCC_SYNCBUSY_PATT_Msk               (_U_(0x1) << TCC_SYNCBUSY_PATT_Pos)            /**< (TCC_SYNCBUSY) Pattern Busy Mask */
#define TCC_SYNCBUSY_PATT                   TCC_SYNCBUSY_PATT_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_SYNCBUSY_PATT_Msk instead */
#define TCC_SYNCBUSY_WAVE_Pos               6                                              /**< (TCC_SYNCBUSY) Wave Busy Position */
#define TCC_SYNCBUSY_WAVE_Msk               (_U_(0x1) << TCC_SYNCBUSY_WAVE_Pos)            /**< (TCC_SYNCBUSY) Wave Busy Mask */
#define TCC_SYNCBUSY_WAVE                   TCC_SYNCBUSY_WAVE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_SYNCBUSY_WAVE_Msk instead */
#define TCC_SYNCBUSY_PER_Pos                7                                              /**< (TCC_SYNCBUSY) Period Busy Position */
#define TCC_SYNCBUSY_PER_Msk                (_U_(0x1) << TCC_SYNCBUSY_PER_Pos)             /**< (TCC_SYNCBUSY) Period Busy Mask */
#define TCC_SYNCBUSY_PER                    TCC_SYNCBUSY_PER_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_SYNCBUSY_PER_Msk instead */
#define TCC_SYNCBUSY_CC0_Pos                8                                              /**< (TCC_SYNCBUSY) Compare Channel 0 Busy Position */
#define TCC_SYNCBUSY_CC0_Msk                (_U_(0x1) << TCC_SYNCBUSY_CC0_Pos)             /**< (TCC_SYNCBUSY) Compare Channel 0 Busy Mask */
#define TCC_SYNCBUSY_CC0                    TCC_SYNCBUSY_CC0_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_SYNCBUSY_CC0_Msk instead */
#define TCC_SYNCBUSY_CC1_Pos                9                                              /**< (TCC_SYNCBUSY) Compare Channel 1 Busy Position */
#define TCC_SYNCBUSY_CC1_Msk                (_U_(0x1) << TCC_SYNCBUSY_CC1_Pos)             /**< (TCC_SYNCBUSY) Compare Channel 1 Busy Mask */
#define TCC_SYNCBUSY_CC1                    TCC_SYNCBUSY_CC1_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_SYNCBUSY_CC1_Msk instead */
#define TCC_SYNCBUSY_CC2_Pos                10                                             /**< (TCC_SYNCBUSY) Compare Channel 2 Busy Position */
#define TCC_SYNCBUSY_CC2_Msk                (_U_(0x1) << TCC_SYNCBUSY_CC2_Pos)             /**< (TCC_SYNCBUSY) Compare Channel 2 Busy Mask */
#define TCC_SYNCBUSY_CC2                    TCC_SYNCBUSY_CC2_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_SYNCBUSY_CC2_Msk instead */
#define TCC_SYNCBUSY_CC3_Pos                11                                             /**< (TCC_SYNCBUSY) Compare Channel 3 Busy Position */
#define TCC_SYNCBUSY_CC3_Msk                (_U_(0x1) << TCC_SYNCBUSY_CC3_Pos)             /**< (TCC_SYNCBUSY) Compare Channel 3 Busy Mask */
#define TCC_SYNCBUSY_CC3                    TCC_SYNCBUSY_CC3_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_SYNCBUSY_CC3_Msk instead */
#define TCC_SYNCBUSY_MASK                   _U_(0xFFF)                                     /**< \deprecated (TCC_SYNCBUSY) Register MASK  (Use TCC_SYNCBUSY_Msk instead)  */
#define TCC_SYNCBUSY_Msk                    _U_(0xFFF)                                     /**< (TCC_SYNCBUSY) Register Mask  */

#define TCC_SYNCBUSY_CC_Pos                 8                                              /**< (TCC_SYNCBUSY Position) Compare Channel 3 Busy */
#define TCC_SYNCBUSY_CC_Msk                 (_U_(0xF) << TCC_SYNCBUSY_CC_Pos)              /**< (TCC_SYNCBUSY Mask) CC */
#define TCC_SYNCBUSY_CC(value)              (TCC_SYNCBUSY_CC_Msk & ((value) << TCC_SYNCBUSY_CC_Pos))  

/* -------- TCC_FCTRLA : (TCC Offset: 0x0c) (R/W 32) Recoverable Fault A Configuration -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SRC:2;                     /**< bit:   0..1  Fault A Source                           */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t KEEP:1;                    /**< bit:      3  Fault A Keeper                           */
    uint32_t QUAL:1;                    /**< bit:      4  Fault A Qualification                    */
    uint32_t BLANK:2;                   /**< bit:   5..6  Fault A Blanking Mode                    */
    uint32_t RESTART:1;                 /**< bit:      7  Fault A Restart                          */
    uint32_t HALT:2;                    /**< bit:   8..9  Fault A Halt Mode                        */
    uint32_t CHSEL:2;                   /**< bit: 10..11  Fault A Capture Channel                  */
    uint32_t CAPTURE:3;                 /**< bit: 12..14  Fault A Capture Action                   */
    uint32_t BLANKPRESC:1;              /**< bit:     15  Fault A Blanking Prescaler               */
    uint32_t BLANKVAL:8;                /**< bit: 16..23  Fault A Blanking Time                    */
    uint32_t FILTERVAL:4;               /**< bit: 24..27  Fault A Filter Value                     */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TCC_FCTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_FCTRLA_OFFSET                   (0x0C)                                        /**<  (TCC_FCTRLA) Recoverable Fault A Configuration  Offset */
#define TCC_FCTRLA_RESETVALUE               _U_(0x00)                                     /**<  (TCC_FCTRLA) Recoverable Fault A Configuration  Reset Value */

#define TCC_FCTRLA_SRC_Pos                  0                                              /**< (TCC_FCTRLA) Fault A Source Position */
#define TCC_FCTRLA_SRC_Msk                  (_U_(0x3) << TCC_FCTRLA_SRC_Pos)               /**< (TCC_FCTRLA) Fault A Source Mask */
#define TCC_FCTRLA_SRC(value)               (TCC_FCTRLA_SRC_Msk & ((value) << TCC_FCTRLA_SRC_Pos))
#define   TCC_FCTRLA_SRC_DISABLE_Val        _U_(0x0)                                       /**< (TCC_FCTRLA) Fault input disabled  */
#define   TCC_FCTRLA_SRC_ENABLE_Val         _U_(0x1)                                       /**< (TCC_FCTRLA) MCEx (x=0,1) event input  */
#define   TCC_FCTRLA_SRC_INVERT_Val         _U_(0x2)                                       /**< (TCC_FCTRLA) Inverted MCEx (x=0,1) event input  */
#define   TCC_FCTRLA_SRC_ALTFAULT_Val       _U_(0x3)                                       /**< (TCC_FCTRLA) Alternate fault (A or B) state at the end of the previous period  */
#define TCC_FCTRLA_SRC_DISABLE              (TCC_FCTRLA_SRC_DISABLE_Val << TCC_FCTRLA_SRC_Pos)  /**< (TCC_FCTRLA) Fault input disabled Position  */
#define TCC_FCTRLA_SRC_ENABLE               (TCC_FCTRLA_SRC_ENABLE_Val << TCC_FCTRLA_SRC_Pos)  /**< (TCC_FCTRLA) MCEx (x=0,1) event input Position  */
#define TCC_FCTRLA_SRC_INVERT               (TCC_FCTRLA_SRC_INVERT_Val << TCC_FCTRLA_SRC_Pos)  /**< (TCC_FCTRLA) Inverted MCEx (x=0,1) event input Position  */
#define TCC_FCTRLA_SRC_ALTFAULT             (TCC_FCTRLA_SRC_ALTFAULT_Val << TCC_FCTRLA_SRC_Pos)  /**< (TCC_FCTRLA) Alternate fault (A or B) state at the end of the previous period Position  */
#define TCC_FCTRLA_KEEP_Pos                 3                                              /**< (TCC_FCTRLA) Fault A Keeper Position */
#define TCC_FCTRLA_KEEP_Msk                 (_U_(0x1) << TCC_FCTRLA_KEEP_Pos)              /**< (TCC_FCTRLA) Fault A Keeper Mask */
#define TCC_FCTRLA_KEEP                     TCC_FCTRLA_KEEP_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_FCTRLA_KEEP_Msk instead */
#define TCC_FCTRLA_QUAL_Pos                 4                                              /**< (TCC_FCTRLA) Fault A Qualification Position */
#define TCC_FCTRLA_QUAL_Msk                 (_U_(0x1) << TCC_FCTRLA_QUAL_Pos)              /**< (TCC_FCTRLA) Fault A Qualification Mask */
#define TCC_FCTRLA_QUAL                     TCC_FCTRLA_QUAL_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_FCTRLA_QUAL_Msk instead */
#define TCC_FCTRLA_BLANK_Pos                5                                              /**< (TCC_FCTRLA) Fault A Blanking Mode Position */
#define TCC_FCTRLA_BLANK_Msk                (_U_(0x3) << TCC_FCTRLA_BLANK_Pos)             /**< (TCC_FCTRLA) Fault A Blanking Mode Mask */
#define TCC_FCTRLA_BLANK(value)             (TCC_FCTRLA_BLANK_Msk & ((value) << TCC_FCTRLA_BLANK_Pos))
#define   TCC_FCTRLA_BLANK_START_Val        _U_(0x0)                                       /**< (TCC_FCTRLA) Blanking applied from start of the ramp  */
#define   TCC_FCTRLA_BLANK_RISE_Val         _U_(0x1)                                       /**< (TCC_FCTRLA) Blanking applied from rising edge of the output waveform  */
#define   TCC_FCTRLA_BLANK_FALL_Val         _U_(0x2)                                       /**< (TCC_FCTRLA) Blanking applied from falling edge of the output waveform  */
#define   TCC_FCTRLA_BLANK_BOTH_Val         _U_(0x3)                                       /**< (TCC_FCTRLA) Blanking applied from each toggle of the output waveform  */
#define TCC_FCTRLA_BLANK_START              (TCC_FCTRLA_BLANK_START_Val << TCC_FCTRLA_BLANK_Pos)  /**< (TCC_FCTRLA) Blanking applied from start of the ramp Position  */
#define TCC_FCTRLA_BLANK_RISE               (TCC_FCTRLA_BLANK_RISE_Val << TCC_FCTRLA_BLANK_Pos)  /**< (TCC_FCTRLA) Blanking applied from rising edge of the output waveform Position  */
#define TCC_FCTRLA_BLANK_FALL               (TCC_FCTRLA_BLANK_FALL_Val << TCC_FCTRLA_BLANK_Pos)  /**< (TCC_FCTRLA) Blanking applied from falling edge of the output waveform Position  */
#define TCC_FCTRLA_BLANK_BOTH               (TCC_FCTRLA_BLANK_BOTH_Val << TCC_FCTRLA_BLANK_Pos)  /**< (TCC_FCTRLA) Blanking applied from each toggle of the output waveform Position  */
#define TCC_FCTRLA_RESTART_Pos              7                                              /**< (TCC_FCTRLA) Fault A Restart Position */
#define TCC_FCTRLA_RESTART_Msk              (_U_(0x1) << TCC_FCTRLA_RESTART_Pos)           /**< (TCC_FCTRLA) Fault A Restart Mask */
#define TCC_FCTRLA_RESTART                  TCC_FCTRLA_RESTART_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_FCTRLA_RESTART_Msk instead */
#define TCC_FCTRLA_HALT_Pos                 8                                              /**< (TCC_FCTRLA) Fault A Halt Mode Position */
#define TCC_FCTRLA_HALT_Msk                 (_U_(0x3) << TCC_FCTRLA_HALT_Pos)              /**< (TCC_FCTRLA) Fault A Halt Mode Mask */
#define TCC_FCTRLA_HALT(value)              (TCC_FCTRLA_HALT_Msk & ((value) << TCC_FCTRLA_HALT_Pos))
#define   TCC_FCTRLA_HALT_DISABLE_Val       _U_(0x0)                                       /**< (TCC_FCTRLA) Halt action disabled  */
#define   TCC_FCTRLA_HALT_HW_Val            _U_(0x1)                                       /**< (TCC_FCTRLA) Hardware halt action  */
#define   TCC_FCTRLA_HALT_SW_Val            _U_(0x2)                                       /**< (TCC_FCTRLA) Software halt action  */
#define   TCC_FCTRLA_HALT_NR_Val            _U_(0x3)                                       /**< (TCC_FCTRLA) Non-recoverable fault  */
#define TCC_FCTRLA_HALT_DISABLE             (TCC_FCTRLA_HALT_DISABLE_Val << TCC_FCTRLA_HALT_Pos)  /**< (TCC_FCTRLA) Halt action disabled Position  */
#define TCC_FCTRLA_HALT_HW                  (TCC_FCTRLA_HALT_HW_Val << TCC_FCTRLA_HALT_Pos)  /**< (TCC_FCTRLA) Hardware halt action Position  */
#define TCC_FCTRLA_HALT_SW                  (TCC_FCTRLA_HALT_SW_Val << TCC_FCTRLA_HALT_Pos)  /**< (TCC_FCTRLA) Software halt action Position  */
#define TCC_FCTRLA_HALT_NR                  (TCC_FCTRLA_HALT_NR_Val << TCC_FCTRLA_HALT_Pos)  /**< (TCC_FCTRLA) Non-recoverable fault Position  */
#define TCC_FCTRLA_CHSEL_Pos                10                                             /**< (TCC_FCTRLA) Fault A Capture Channel Position */
#define TCC_FCTRLA_CHSEL_Msk                (_U_(0x3) << TCC_FCTRLA_CHSEL_Pos)             /**< (TCC_FCTRLA) Fault A Capture Channel Mask */
#define TCC_FCTRLA_CHSEL(value)             (TCC_FCTRLA_CHSEL_Msk & ((value) << TCC_FCTRLA_CHSEL_Pos))
#define   TCC_FCTRLA_CHSEL_CC0_Val          _U_(0x0)                                       /**< (TCC_FCTRLA) Capture value stored in channel 0  */
#define   TCC_FCTRLA_CHSEL_CC1_Val          _U_(0x1)                                       /**< (TCC_FCTRLA) Capture value stored in channel 1  */
#define   TCC_FCTRLA_CHSEL_CC2_Val          _U_(0x2)                                       /**< (TCC_FCTRLA) Capture value stored in channel 2  */
#define   TCC_FCTRLA_CHSEL_CC3_Val          _U_(0x3)                                       /**< (TCC_FCTRLA) Capture value stored in channel 3  */
#define TCC_FCTRLA_CHSEL_CC0                (TCC_FCTRLA_CHSEL_CC0_Val << TCC_FCTRLA_CHSEL_Pos)  /**< (TCC_FCTRLA) Capture value stored in channel 0 Position  */
#define TCC_FCTRLA_CHSEL_CC1                (TCC_FCTRLA_CHSEL_CC1_Val << TCC_FCTRLA_CHSEL_Pos)  /**< (TCC_FCTRLA) Capture value stored in channel 1 Position  */
#define TCC_FCTRLA_CHSEL_CC2                (TCC_FCTRLA_CHSEL_CC2_Val << TCC_FCTRLA_CHSEL_Pos)  /**< (TCC_FCTRLA) Capture value stored in channel 2 Position  */
#define TCC_FCTRLA_CHSEL_CC3                (TCC_FCTRLA_CHSEL_CC3_Val << TCC_FCTRLA_CHSEL_Pos)  /**< (TCC_FCTRLA) Capture value stored in channel 3 Position  */
#define TCC_FCTRLA_CAPTURE_Pos              12                                             /**< (TCC_FCTRLA) Fault A Capture Action Position */
#define TCC_FCTRLA_CAPTURE_Msk              (_U_(0x7) << TCC_FCTRLA_CAPTURE_Pos)           /**< (TCC_FCTRLA) Fault A Capture Action Mask */
#define TCC_FCTRLA_CAPTURE(value)           (TCC_FCTRLA_CAPTURE_Msk & ((value) << TCC_FCTRLA_CAPTURE_Pos))
#define   TCC_FCTRLA_CAPTURE_DISABLE_Val    _U_(0x0)                                       /**< (TCC_FCTRLA) No capture  */
#define   TCC_FCTRLA_CAPTURE_CAPT_Val       _U_(0x1)                                       /**< (TCC_FCTRLA) Capture on fault  */
#define   TCC_FCTRLA_CAPTURE_CAPTMIN_Val    _U_(0x2)                                       /**< (TCC_FCTRLA) Minimum capture  */
#define   TCC_FCTRLA_CAPTURE_CAPTMAX_Val    _U_(0x3)                                       /**< (TCC_FCTRLA) Maximum capture  */
#define   TCC_FCTRLA_CAPTURE_LOCMIN_Val     _U_(0x4)                                       /**< (TCC_FCTRLA) Minimum local detection  */
#define   TCC_FCTRLA_CAPTURE_LOCMAX_Val     _U_(0x5)                                       /**< (TCC_FCTRLA) Maximum local detection  */
#define   TCC_FCTRLA_CAPTURE_DERIV0_Val     _U_(0x6)                                       /**< (TCC_FCTRLA) Minimum and maximum local detection  */
#define   TCC_FCTRLA_CAPTURE_CAPTMARK_Val   _U_(0x7)                                       /**< (TCC_FCTRLA) Capture with ramp index as MSB value  */
#define TCC_FCTRLA_CAPTURE_DISABLE          (TCC_FCTRLA_CAPTURE_DISABLE_Val << TCC_FCTRLA_CAPTURE_Pos)  /**< (TCC_FCTRLA) No capture Position  */
#define TCC_FCTRLA_CAPTURE_CAPT             (TCC_FCTRLA_CAPTURE_CAPT_Val << TCC_FCTRLA_CAPTURE_Pos)  /**< (TCC_FCTRLA) Capture on fault Position  */
#define TCC_FCTRLA_CAPTURE_CAPTMIN          (TCC_FCTRLA_CAPTURE_CAPTMIN_Val << TCC_FCTRLA_CAPTURE_Pos)  /**< (TCC_FCTRLA) Minimum capture Position  */
#define TCC_FCTRLA_CAPTURE_CAPTMAX          (TCC_FCTRLA_CAPTURE_CAPTMAX_Val << TCC_FCTRLA_CAPTURE_Pos)  /**< (TCC_FCTRLA) Maximum capture Position  */
#define TCC_FCTRLA_CAPTURE_LOCMIN           (TCC_FCTRLA_CAPTURE_LOCMIN_Val << TCC_FCTRLA_CAPTURE_Pos)  /**< (TCC_FCTRLA) Minimum local detection Position  */
#define TCC_FCTRLA_CAPTURE_LOCMAX           (TCC_FCTRLA_CAPTURE_LOCMAX_Val << TCC_FCTRLA_CAPTURE_Pos)  /**< (TCC_FCTRLA) Maximum local detection Position  */
#define TCC_FCTRLA_CAPTURE_DERIV0           (TCC_FCTRLA_CAPTURE_DERIV0_Val << TCC_FCTRLA_CAPTURE_Pos)  /**< (TCC_FCTRLA) Minimum and maximum local detection Position  */
#define TCC_FCTRLA_CAPTURE_CAPTMARK         (TCC_FCTRLA_CAPTURE_CAPTMARK_Val << TCC_FCTRLA_CAPTURE_Pos)  /**< (TCC_FCTRLA) Capture with ramp index as MSB value Position  */
#define TCC_FCTRLA_BLANKPRESC_Pos           15                                             /**< (TCC_FCTRLA) Fault A Blanking Prescaler Position */
#define TCC_FCTRLA_BLANKPRESC_Msk           (_U_(0x1) << TCC_FCTRLA_BLANKPRESC_Pos)        /**< (TCC_FCTRLA) Fault A Blanking Prescaler Mask */
#define TCC_FCTRLA_BLANKPRESC               TCC_FCTRLA_BLANKPRESC_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_FCTRLA_BLANKPRESC_Msk instead */
#define TCC_FCTRLA_BLANKVAL_Pos             16                                             /**< (TCC_FCTRLA) Fault A Blanking Time Position */
#define TCC_FCTRLA_BLANKVAL_Msk             (_U_(0xFF) << TCC_FCTRLA_BLANKVAL_Pos)         /**< (TCC_FCTRLA) Fault A Blanking Time Mask */
#define TCC_FCTRLA_BLANKVAL(value)          (TCC_FCTRLA_BLANKVAL_Msk & ((value) << TCC_FCTRLA_BLANKVAL_Pos))
#define TCC_FCTRLA_FILTERVAL_Pos            24                                             /**< (TCC_FCTRLA) Fault A Filter Value Position */
#define TCC_FCTRLA_FILTERVAL_Msk            (_U_(0xF) << TCC_FCTRLA_FILTERVAL_Pos)         /**< (TCC_FCTRLA) Fault A Filter Value Mask */
#define TCC_FCTRLA_FILTERVAL(value)         (TCC_FCTRLA_FILTERVAL_Msk & ((value) << TCC_FCTRLA_FILTERVAL_Pos))
#define TCC_FCTRLA_MASK                     _U_(0xFFFFFFB)                                 /**< \deprecated (TCC_FCTRLA) Register MASK  (Use TCC_FCTRLA_Msk instead)  */
#define TCC_FCTRLA_Msk                      _U_(0xFFFFFFB)                                 /**< (TCC_FCTRLA) Register Mask  */


/* -------- TCC_FCTRLB : (TCC Offset: 0x10) (R/W 32) Recoverable Fault B Configuration -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SRC:2;                     /**< bit:   0..1  Fault B Source                           */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t KEEP:1;                    /**< bit:      3  Fault B Keeper                           */
    uint32_t QUAL:1;                    /**< bit:      4  Fault B Qualification                    */
    uint32_t BLANK:2;                   /**< bit:   5..6  Fault B Blanking Mode                    */
    uint32_t RESTART:1;                 /**< bit:      7  Fault B Restart                          */
    uint32_t HALT:2;                    /**< bit:   8..9  Fault B Halt Mode                        */
    uint32_t CHSEL:2;                   /**< bit: 10..11  Fault B Capture Channel                  */
    uint32_t CAPTURE:3;                 /**< bit: 12..14  Fault B Capture Action                   */
    uint32_t BLANKPRESC:1;              /**< bit:     15  Fault B Blanking Prescaler               */
    uint32_t BLANKVAL:8;                /**< bit: 16..23  Fault B Blanking Time                    */
    uint32_t FILTERVAL:4;               /**< bit: 24..27  Fault B Filter Value                     */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TCC_FCTRLB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_FCTRLB_OFFSET                   (0x10)                                        /**<  (TCC_FCTRLB) Recoverable Fault B Configuration  Offset */
#define TCC_FCTRLB_RESETVALUE               _U_(0x00)                                     /**<  (TCC_FCTRLB) Recoverable Fault B Configuration  Reset Value */

#define TCC_FCTRLB_SRC_Pos                  0                                              /**< (TCC_FCTRLB) Fault B Source Position */
#define TCC_FCTRLB_SRC_Msk                  (_U_(0x3) << TCC_FCTRLB_SRC_Pos)               /**< (TCC_FCTRLB) Fault B Source Mask */
#define TCC_FCTRLB_SRC(value)               (TCC_FCTRLB_SRC_Msk & ((value) << TCC_FCTRLB_SRC_Pos))
#define   TCC_FCTRLB_SRC_DISABLE_Val        _U_(0x0)                                       /**< (TCC_FCTRLB) Fault input disabled  */
#define   TCC_FCTRLB_SRC_ENABLE_Val         _U_(0x1)                                       /**< (TCC_FCTRLB) MCEx (x=0,1) event input  */
#define   TCC_FCTRLB_SRC_INVERT_Val         _U_(0x2)                                       /**< (TCC_FCTRLB) Inverted MCEx (x=0,1) event input  */
#define   TCC_FCTRLB_SRC_ALTFAULT_Val       _U_(0x3)                                       /**< (TCC_FCTRLB) Alternate fault (A or B) state at the end of the previous period  */
#define TCC_FCTRLB_SRC_DISABLE              (TCC_FCTRLB_SRC_DISABLE_Val << TCC_FCTRLB_SRC_Pos)  /**< (TCC_FCTRLB) Fault input disabled Position  */
#define TCC_FCTRLB_SRC_ENABLE               (TCC_FCTRLB_SRC_ENABLE_Val << TCC_FCTRLB_SRC_Pos)  /**< (TCC_FCTRLB) MCEx (x=0,1) event input Position  */
#define TCC_FCTRLB_SRC_INVERT               (TCC_FCTRLB_SRC_INVERT_Val << TCC_FCTRLB_SRC_Pos)  /**< (TCC_FCTRLB) Inverted MCEx (x=0,1) event input Position  */
#define TCC_FCTRLB_SRC_ALTFAULT             (TCC_FCTRLB_SRC_ALTFAULT_Val << TCC_FCTRLB_SRC_Pos)  /**< (TCC_FCTRLB) Alternate fault (A or B) state at the end of the previous period Position  */
#define TCC_FCTRLB_KEEP_Pos                 3                                              /**< (TCC_FCTRLB) Fault B Keeper Position */
#define TCC_FCTRLB_KEEP_Msk                 (_U_(0x1) << TCC_FCTRLB_KEEP_Pos)              /**< (TCC_FCTRLB) Fault B Keeper Mask */
#define TCC_FCTRLB_KEEP                     TCC_FCTRLB_KEEP_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_FCTRLB_KEEP_Msk instead */
#define TCC_FCTRLB_QUAL_Pos                 4                                              /**< (TCC_FCTRLB) Fault B Qualification Position */
#define TCC_FCTRLB_QUAL_Msk                 (_U_(0x1) << TCC_FCTRLB_QUAL_Pos)              /**< (TCC_FCTRLB) Fault B Qualification Mask */
#define TCC_FCTRLB_QUAL                     TCC_FCTRLB_QUAL_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_FCTRLB_QUAL_Msk instead */
#define TCC_FCTRLB_BLANK_Pos                5                                              /**< (TCC_FCTRLB) Fault B Blanking Mode Position */
#define TCC_FCTRLB_BLANK_Msk                (_U_(0x3) << TCC_FCTRLB_BLANK_Pos)             /**< (TCC_FCTRLB) Fault B Blanking Mode Mask */
#define TCC_FCTRLB_BLANK(value)             (TCC_FCTRLB_BLANK_Msk & ((value) << TCC_FCTRLB_BLANK_Pos))
#define   TCC_FCTRLB_BLANK_START_Val        _U_(0x0)                                       /**< (TCC_FCTRLB) Blanking applied from start of the ramp  */
#define   TCC_FCTRLB_BLANK_RISE_Val         _U_(0x1)                                       /**< (TCC_FCTRLB) Blanking applied from rising edge of the output waveform  */
#define   TCC_FCTRLB_BLANK_FALL_Val         _U_(0x2)                                       /**< (TCC_FCTRLB) Blanking applied from falling edge of the output waveform  */
#define   TCC_FCTRLB_BLANK_BOTH_Val         _U_(0x3)                                       /**< (TCC_FCTRLB) Blanking applied from each toggle of the output waveform  */
#define TCC_FCTRLB_BLANK_START              (TCC_FCTRLB_BLANK_START_Val << TCC_FCTRLB_BLANK_Pos)  /**< (TCC_FCTRLB) Blanking applied from start of the ramp Position  */
#define TCC_FCTRLB_BLANK_RISE               (TCC_FCTRLB_BLANK_RISE_Val << TCC_FCTRLB_BLANK_Pos)  /**< (TCC_FCTRLB) Blanking applied from rising edge of the output waveform Position  */
#define TCC_FCTRLB_BLANK_FALL               (TCC_FCTRLB_BLANK_FALL_Val << TCC_FCTRLB_BLANK_Pos)  /**< (TCC_FCTRLB) Blanking applied from falling edge of the output waveform Position  */
#define TCC_FCTRLB_BLANK_BOTH               (TCC_FCTRLB_BLANK_BOTH_Val << TCC_FCTRLB_BLANK_Pos)  /**< (TCC_FCTRLB) Blanking applied from each toggle of the output waveform Position  */
#define TCC_FCTRLB_RESTART_Pos              7                                              /**< (TCC_FCTRLB) Fault B Restart Position */
#define TCC_FCTRLB_RESTART_Msk              (_U_(0x1) << TCC_FCTRLB_RESTART_Pos)           /**< (TCC_FCTRLB) Fault B Restart Mask */
#define TCC_FCTRLB_RESTART                  TCC_FCTRLB_RESTART_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_FCTRLB_RESTART_Msk instead */
#define TCC_FCTRLB_HALT_Pos                 8                                              /**< (TCC_FCTRLB) Fault B Halt Mode Position */
#define TCC_FCTRLB_HALT_Msk                 (_U_(0x3) << TCC_FCTRLB_HALT_Pos)              /**< (TCC_FCTRLB) Fault B Halt Mode Mask */
#define TCC_FCTRLB_HALT(value)              (TCC_FCTRLB_HALT_Msk & ((value) << TCC_FCTRLB_HALT_Pos))
#define   TCC_FCTRLB_HALT_DISABLE_Val       _U_(0x0)                                       /**< (TCC_FCTRLB) Halt action disabled  */
#define   TCC_FCTRLB_HALT_HW_Val            _U_(0x1)                                       /**< (TCC_FCTRLB) Hardware halt action  */
#define   TCC_FCTRLB_HALT_SW_Val            _U_(0x2)                                       /**< (TCC_FCTRLB) Software halt action  */
#define   TCC_FCTRLB_HALT_NR_Val            _U_(0x3)                                       /**< (TCC_FCTRLB) Non-recoverable fault  */
#define TCC_FCTRLB_HALT_DISABLE             (TCC_FCTRLB_HALT_DISABLE_Val << TCC_FCTRLB_HALT_Pos)  /**< (TCC_FCTRLB) Halt action disabled Position  */
#define TCC_FCTRLB_HALT_HW                  (TCC_FCTRLB_HALT_HW_Val << TCC_FCTRLB_HALT_Pos)  /**< (TCC_FCTRLB) Hardware halt action Position  */
#define TCC_FCTRLB_HALT_SW                  (TCC_FCTRLB_HALT_SW_Val << TCC_FCTRLB_HALT_Pos)  /**< (TCC_FCTRLB) Software halt action Position  */
#define TCC_FCTRLB_HALT_NR                  (TCC_FCTRLB_HALT_NR_Val << TCC_FCTRLB_HALT_Pos)  /**< (TCC_FCTRLB) Non-recoverable fault Position  */
#define TCC_FCTRLB_CHSEL_Pos                10                                             /**< (TCC_FCTRLB) Fault B Capture Channel Position */
#define TCC_FCTRLB_CHSEL_Msk                (_U_(0x3) << TCC_FCTRLB_CHSEL_Pos)             /**< (TCC_FCTRLB) Fault B Capture Channel Mask */
#define TCC_FCTRLB_CHSEL(value)             (TCC_FCTRLB_CHSEL_Msk & ((value) << TCC_FCTRLB_CHSEL_Pos))
#define   TCC_FCTRLB_CHSEL_CC0_Val          _U_(0x0)                                       /**< (TCC_FCTRLB) Capture value stored in channel 0  */
#define   TCC_FCTRLB_CHSEL_CC1_Val          _U_(0x1)                                       /**< (TCC_FCTRLB) Capture value stored in channel 1  */
#define   TCC_FCTRLB_CHSEL_CC2_Val          _U_(0x2)                                       /**< (TCC_FCTRLB) Capture value stored in channel 2  */
#define   TCC_FCTRLB_CHSEL_CC3_Val          _U_(0x3)                                       /**< (TCC_FCTRLB) Capture value stored in channel 3  */
#define TCC_FCTRLB_CHSEL_CC0                (TCC_FCTRLB_CHSEL_CC0_Val << TCC_FCTRLB_CHSEL_Pos)  /**< (TCC_FCTRLB) Capture value stored in channel 0 Position  */
#define TCC_FCTRLB_CHSEL_CC1                (TCC_FCTRLB_CHSEL_CC1_Val << TCC_FCTRLB_CHSEL_Pos)  /**< (TCC_FCTRLB) Capture value stored in channel 1 Position  */
#define TCC_FCTRLB_CHSEL_CC2                (TCC_FCTRLB_CHSEL_CC2_Val << TCC_FCTRLB_CHSEL_Pos)  /**< (TCC_FCTRLB) Capture value stored in channel 2 Position  */
#define TCC_FCTRLB_CHSEL_CC3                (TCC_FCTRLB_CHSEL_CC3_Val << TCC_FCTRLB_CHSEL_Pos)  /**< (TCC_FCTRLB) Capture value stored in channel 3 Position  */
#define TCC_FCTRLB_CAPTURE_Pos              12                                             /**< (TCC_FCTRLB) Fault B Capture Action Position */
#define TCC_FCTRLB_CAPTURE_Msk              (_U_(0x7) << TCC_FCTRLB_CAPTURE_Pos)           /**< (TCC_FCTRLB) Fault B Capture Action Mask */
#define TCC_FCTRLB_CAPTURE(value)           (TCC_FCTRLB_CAPTURE_Msk & ((value) << TCC_FCTRLB_CAPTURE_Pos))
#define   TCC_FCTRLB_CAPTURE_DISABLE_Val    _U_(0x0)                                       /**< (TCC_FCTRLB) No capture  */
#define   TCC_FCTRLB_CAPTURE_CAPT_Val       _U_(0x1)                                       /**< (TCC_FCTRLB) Capture on fault  */
#define   TCC_FCTRLB_CAPTURE_CAPTMIN_Val    _U_(0x2)                                       /**< (TCC_FCTRLB) Minimum capture  */
#define   TCC_FCTRLB_CAPTURE_CAPTMAX_Val    _U_(0x3)                                       /**< (TCC_FCTRLB) Maximum capture  */
#define   TCC_FCTRLB_CAPTURE_LOCMIN_Val     _U_(0x4)                                       /**< (TCC_FCTRLB) Minimum local detection  */
#define   TCC_FCTRLB_CAPTURE_LOCMAX_Val     _U_(0x5)                                       /**< (TCC_FCTRLB) Maximum local detection  */
#define   TCC_FCTRLB_CAPTURE_DERIV0_Val     _U_(0x6)                                       /**< (TCC_FCTRLB) Minimum and maximum local detection  */
#define   TCC_FCTRLB_CAPTURE_CAPTMARK_Val   _U_(0x7)                                       /**< (TCC_FCTRLB) Capture with ramp index as MSB value  */
#define TCC_FCTRLB_CAPTURE_DISABLE          (TCC_FCTRLB_CAPTURE_DISABLE_Val << TCC_FCTRLB_CAPTURE_Pos)  /**< (TCC_FCTRLB) No capture Position  */
#define TCC_FCTRLB_CAPTURE_CAPT             (TCC_FCTRLB_CAPTURE_CAPT_Val << TCC_FCTRLB_CAPTURE_Pos)  /**< (TCC_FCTRLB) Capture on fault Position  */
#define TCC_FCTRLB_CAPTURE_CAPTMIN          (TCC_FCTRLB_CAPTURE_CAPTMIN_Val << TCC_FCTRLB_CAPTURE_Pos)  /**< (TCC_FCTRLB) Minimum capture Position  */
#define TCC_FCTRLB_CAPTURE_CAPTMAX          (TCC_FCTRLB_CAPTURE_CAPTMAX_Val << TCC_FCTRLB_CAPTURE_Pos)  /**< (TCC_FCTRLB) Maximum capture Position  */
#define TCC_FCTRLB_CAPTURE_LOCMIN           (TCC_FCTRLB_CAPTURE_LOCMIN_Val << TCC_FCTRLB_CAPTURE_Pos)  /**< (TCC_FCTRLB) Minimum local detection Position  */
#define TCC_FCTRLB_CAPTURE_LOCMAX           (TCC_FCTRLB_CAPTURE_LOCMAX_Val << TCC_FCTRLB_CAPTURE_Pos)  /**< (TCC_FCTRLB) Maximum local detection Position  */
#define TCC_FCTRLB_CAPTURE_DERIV0           (TCC_FCTRLB_CAPTURE_DERIV0_Val << TCC_FCTRLB_CAPTURE_Pos)  /**< (TCC_FCTRLB) Minimum and maximum local detection Position  */
#define TCC_FCTRLB_CAPTURE_CAPTMARK         (TCC_FCTRLB_CAPTURE_CAPTMARK_Val << TCC_FCTRLB_CAPTURE_Pos)  /**< (TCC_FCTRLB) Capture with ramp index as MSB value Position  */
#define TCC_FCTRLB_BLANKPRESC_Pos           15                                             /**< (TCC_FCTRLB) Fault B Blanking Prescaler Position */
#define TCC_FCTRLB_BLANKPRESC_Msk           (_U_(0x1) << TCC_FCTRLB_BLANKPRESC_Pos)        /**< (TCC_FCTRLB) Fault B Blanking Prescaler Mask */
#define TCC_FCTRLB_BLANKPRESC               TCC_FCTRLB_BLANKPRESC_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_FCTRLB_BLANKPRESC_Msk instead */
#define TCC_FCTRLB_BLANKVAL_Pos             16                                             /**< (TCC_FCTRLB) Fault B Blanking Time Position */
#define TCC_FCTRLB_BLANKVAL_Msk             (_U_(0xFF) << TCC_FCTRLB_BLANKVAL_Pos)         /**< (TCC_FCTRLB) Fault B Blanking Time Mask */
#define TCC_FCTRLB_BLANKVAL(value)          (TCC_FCTRLB_BLANKVAL_Msk & ((value) << TCC_FCTRLB_BLANKVAL_Pos))
#define TCC_FCTRLB_FILTERVAL_Pos            24                                             /**< (TCC_FCTRLB) Fault B Filter Value Position */
#define TCC_FCTRLB_FILTERVAL_Msk            (_U_(0xF) << TCC_FCTRLB_FILTERVAL_Pos)         /**< (TCC_FCTRLB) Fault B Filter Value Mask */
#define TCC_FCTRLB_FILTERVAL(value)         (TCC_FCTRLB_FILTERVAL_Msk & ((value) << TCC_FCTRLB_FILTERVAL_Pos))
#define TCC_FCTRLB_MASK                     _U_(0xFFFFFFB)                                 /**< \deprecated (TCC_FCTRLB) Register MASK  (Use TCC_FCTRLB_Msk instead)  */
#define TCC_FCTRLB_Msk                      _U_(0xFFFFFFB)                                 /**< (TCC_FCTRLB) Register Mask  */


/* -------- TCC_WEXCTRL : (TCC Offset: 0x14) (R/W 32) Waveform Extension Configuration -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t OTMX:2;                    /**< bit:   0..1  Output Matrix                            */
    uint32_t :6;                        /**< bit:   2..7  Reserved */
    uint32_t DTIEN0:1;                  /**< bit:      8  Dead-time Insertion Generator 0 Enable   */
    uint32_t DTIEN1:1;                  /**< bit:      9  Dead-time Insertion Generator 1 Enable   */
    uint32_t DTIEN2:1;                  /**< bit:     10  Dead-time Insertion Generator 2 Enable   */
    uint32_t DTIEN3:1;                  /**< bit:     11  Dead-time Insertion Generator 3 Enable   */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t DTLS:8;                    /**< bit: 16..23  Dead-time Low Side Outputs Value         */
    uint32_t DTHS:8;                    /**< bit: 24..31  Dead-time High Side Outputs Value        */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t DTIEN:4;                   /**< bit:  8..11  Dead-time Insertion Generator x Enable   */
    uint32_t :20;                       /**< bit: 12..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} TCC_WEXCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_WEXCTRL_OFFSET                  (0x14)                                        /**<  (TCC_WEXCTRL) Waveform Extension Configuration  Offset */
#define TCC_WEXCTRL_RESETVALUE              _U_(0x00)                                     /**<  (TCC_WEXCTRL) Waveform Extension Configuration  Reset Value */

#define TCC_WEXCTRL_OTMX_Pos                0                                              /**< (TCC_WEXCTRL) Output Matrix Position */
#define TCC_WEXCTRL_OTMX_Msk                (_U_(0x3) << TCC_WEXCTRL_OTMX_Pos)             /**< (TCC_WEXCTRL) Output Matrix Mask */
#define TCC_WEXCTRL_OTMX(value)             (TCC_WEXCTRL_OTMX_Msk & ((value) << TCC_WEXCTRL_OTMX_Pos))
#define TCC_WEXCTRL_DTIEN0_Pos              8                                              /**< (TCC_WEXCTRL) Dead-time Insertion Generator 0 Enable Position */
#define TCC_WEXCTRL_DTIEN0_Msk              (_U_(0x1) << TCC_WEXCTRL_DTIEN0_Pos)           /**< (TCC_WEXCTRL) Dead-time Insertion Generator 0 Enable Mask */
#define TCC_WEXCTRL_DTIEN0                  TCC_WEXCTRL_DTIEN0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_WEXCTRL_DTIEN0_Msk instead */
#define TCC_WEXCTRL_DTIEN1_Pos              9                                              /**< (TCC_WEXCTRL) Dead-time Insertion Generator 1 Enable Position */
#define TCC_WEXCTRL_DTIEN1_Msk              (_U_(0x1) << TCC_WEXCTRL_DTIEN1_Pos)           /**< (TCC_WEXCTRL) Dead-time Insertion Generator 1 Enable Mask */
#define TCC_WEXCTRL_DTIEN1                  TCC_WEXCTRL_DTIEN1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_WEXCTRL_DTIEN1_Msk instead */
#define TCC_WEXCTRL_DTIEN2_Pos              10                                             /**< (TCC_WEXCTRL) Dead-time Insertion Generator 2 Enable Position */
#define TCC_WEXCTRL_DTIEN2_Msk              (_U_(0x1) << TCC_WEXCTRL_DTIEN2_Pos)           /**< (TCC_WEXCTRL) Dead-time Insertion Generator 2 Enable Mask */
#define TCC_WEXCTRL_DTIEN2                  TCC_WEXCTRL_DTIEN2_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_WEXCTRL_DTIEN2_Msk instead */
#define TCC_WEXCTRL_DTIEN3_Pos              11                                             /**< (TCC_WEXCTRL) Dead-time Insertion Generator 3 Enable Position */
#define TCC_WEXCTRL_DTIEN3_Msk              (_U_(0x1) << TCC_WEXCTRL_DTIEN3_Pos)           /**< (TCC_WEXCTRL) Dead-time Insertion Generator 3 Enable Mask */
#define TCC_WEXCTRL_DTIEN3                  TCC_WEXCTRL_DTIEN3_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_WEXCTRL_DTIEN3_Msk instead */
#define TCC_WEXCTRL_DTLS_Pos                16                                             /**< (TCC_WEXCTRL) Dead-time Low Side Outputs Value Position */
#define TCC_WEXCTRL_DTLS_Msk                (_U_(0xFF) << TCC_WEXCTRL_DTLS_Pos)            /**< (TCC_WEXCTRL) Dead-time Low Side Outputs Value Mask */
#define TCC_WEXCTRL_DTLS(value)             (TCC_WEXCTRL_DTLS_Msk & ((value) << TCC_WEXCTRL_DTLS_Pos))
#define TCC_WEXCTRL_DTHS_Pos                24                                             /**< (TCC_WEXCTRL) Dead-time High Side Outputs Value Position */
#define TCC_WEXCTRL_DTHS_Msk                (_U_(0xFF) << TCC_WEXCTRL_DTHS_Pos)            /**< (TCC_WEXCTRL) Dead-time High Side Outputs Value Mask */
#define TCC_WEXCTRL_DTHS(value)             (TCC_WEXCTRL_DTHS_Msk & ((value) << TCC_WEXCTRL_DTHS_Pos))
#define TCC_WEXCTRL_MASK                    _U_(0xFFFF0F03)                                /**< \deprecated (TCC_WEXCTRL) Register MASK  (Use TCC_WEXCTRL_Msk instead)  */
#define TCC_WEXCTRL_Msk                     _U_(0xFFFF0F03)                                /**< (TCC_WEXCTRL) Register Mask  */

#define TCC_WEXCTRL_DTIEN_Pos               8                                              /**< (TCC_WEXCTRL Position) Dead-time Insertion Generator x Enable */
#define TCC_WEXCTRL_DTIEN_Msk               (_U_(0xF) << TCC_WEXCTRL_DTIEN_Pos)            /**< (TCC_WEXCTRL Mask) DTIEN */
#define TCC_WEXCTRL_DTIEN(value)            (TCC_WEXCTRL_DTIEN_Msk & ((value) << TCC_WEXCTRL_DTIEN_Pos))  

/* -------- TCC_DRVCTRL : (TCC Offset: 0x18) (R/W 32) Driver Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t NRE0:1;                    /**< bit:      0  Non-Recoverable State 0 Output Enable    */
    uint32_t NRE1:1;                    /**< bit:      1  Non-Recoverable State 1 Output Enable    */
    uint32_t NRE2:1;                    /**< bit:      2  Non-Recoverable State 2 Output Enable    */
    uint32_t NRE3:1;                    /**< bit:      3  Non-Recoverable State 3 Output Enable    */
    uint32_t NRE4:1;                    /**< bit:      4  Non-Recoverable State 4 Output Enable    */
    uint32_t NRE5:1;                    /**< bit:      5  Non-Recoverable State 5 Output Enable    */
    uint32_t NRE6:1;                    /**< bit:      6  Non-Recoverable State 6 Output Enable    */
    uint32_t NRE7:1;                    /**< bit:      7  Non-Recoverable State 7 Output Enable    */
    uint32_t NRV0:1;                    /**< bit:      8  Non-Recoverable State 0 Output Value     */
    uint32_t NRV1:1;                    /**< bit:      9  Non-Recoverable State 1 Output Value     */
    uint32_t NRV2:1;                    /**< bit:     10  Non-Recoverable State 2 Output Value     */
    uint32_t NRV3:1;                    /**< bit:     11  Non-Recoverable State 3 Output Value     */
    uint32_t NRV4:1;                    /**< bit:     12  Non-Recoverable State 4 Output Value     */
    uint32_t NRV5:1;                    /**< bit:     13  Non-Recoverable State 5 Output Value     */
    uint32_t NRV6:1;                    /**< bit:     14  Non-Recoverable State 6 Output Value     */
    uint32_t NRV7:1;                    /**< bit:     15  Non-Recoverable State 7 Output Value     */
    uint32_t INVEN0:1;                  /**< bit:     16  Output Waveform 0 Inversion              */
    uint32_t INVEN1:1;                  /**< bit:     17  Output Waveform 1 Inversion              */
    uint32_t INVEN2:1;                  /**< bit:     18  Output Waveform 2 Inversion              */
    uint32_t INVEN3:1;                  /**< bit:     19  Output Waveform 3 Inversion              */
    uint32_t INVEN4:1;                  /**< bit:     20  Output Waveform 4 Inversion              */
    uint32_t INVEN5:1;                  /**< bit:     21  Output Waveform 5 Inversion              */
    uint32_t INVEN6:1;                  /**< bit:     22  Output Waveform 6 Inversion              */
    uint32_t INVEN7:1;                  /**< bit:     23  Output Waveform 7 Inversion              */
    uint32_t FILTERVAL0:4;              /**< bit: 24..27  Non-Recoverable Fault Input 0 Filter Value */
    uint32_t FILTERVAL1:4;              /**< bit: 28..31  Non-Recoverable Fault Input 1 Filter Value */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t NRE:8;                     /**< bit:   0..7  Non-Recoverable State x Output Enable    */
    uint32_t NRV:8;                     /**< bit:  8..15  Non-Recoverable State x Output Value     */
    uint32_t INVEN:8;                   /**< bit: 16..23  Output Waveform x Inversion              */
    uint32_t :8;                        /**< bit: 24..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} TCC_DRVCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_DRVCTRL_OFFSET                  (0x18)                                        /**<  (TCC_DRVCTRL) Driver Control  Offset */
#define TCC_DRVCTRL_RESETVALUE              _U_(0x00)                                     /**<  (TCC_DRVCTRL) Driver Control  Reset Value */

#define TCC_DRVCTRL_NRE0_Pos                0                                              /**< (TCC_DRVCTRL) Non-Recoverable State 0 Output Enable Position */
#define TCC_DRVCTRL_NRE0_Msk                (_U_(0x1) << TCC_DRVCTRL_NRE0_Pos)             /**< (TCC_DRVCTRL) Non-Recoverable State 0 Output Enable Mask */
#define TCC_DRVCTRL_NRE0                    TCC_DRVCTRL_NRE0_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_NRE0_Msk instead */
#define TCC_DRVCTRL_NRE1_Pos                1                                              /**< (TCC_DRVCTRL) Non-Recoverable State 1 Output Enable Position */
#define TCC_DRVCTRL_NRE1_Msk                (_U_(0x1) << TCC_DRVCTRL_NRE1_Pos)             /**< (TCC_DRVCTRL) Non-Recoverable State 1 Output Enable Mask */
#define TCC_DRVCTRL_NRE1                    TCC_DRVCTRL_NRE1_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_NRE1_Msk instead */
#define TCC_DRVCTRL_NRE2_Pos                2                                              /**< (TCC_DRVCTRL) Non-Recoverable State 2 Output Enable Position */
#define TCC_DRVCTRL_NRE2_Msk                (_U_(0x1) << TCC_DRVCTRL_NRE2_Pos)             /**< (TCC_DRVCTRL) Non-Recoverable State 2 Output Enable Mask */
#define TCC_DRVCTRL_NRE2                    TCC_DRVCTRL_NRE2_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_NRE2_Msk instead */
#define TCC_DRVCTRL_NRE3_Pos                3                                              /**< (TCC_DRVCTRL) Non-Recoverable State 3 Output Enable Position */
#define TCC_DRVCTRL_NRE3_Msk                (_U_(0x1) << TCC_DRVCTRL_NRE3_Pos)             /**< (TCC_DRVCTRL) Non-Recoverable State 3 Output Enable Mask */
#define TCC_DRVCTRL_NRE3                    TCC_DRVCTRL_NRE3_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_NRE3_Msk instead */
#define TCC_DRVCTRL_NRE4_Pos                4                                              /**< (TCC_DRVCTRL) Non-Recoverable State 4 Output Enable Position */
#define TCC_DRVCTRL_NRE4_Msk                (_U_(0x1) << TCC_DRVCTRL_NRE4_Pos)             /**< (TCC_DRVCTRL) Non-Recoverable State 4 Output Enable Mask */
#define TCC_DRVCTRL_NRE4                    TCC_DRVCTRL_NRE4_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_NRE4_Msk instead */
#define TCC_DRVCTRL_NRE5_Pos                5                                              /**< (TCC_DRVCTRL) Non-Recoverable State 5 Output Enable Position */
#define TCC_DRVCTRL_NRE5_Msk                (_U_(0x1) << TCC_DRVCTRL_NRE5_Pos)             /**< (TCC_DRVCTRL) Non-Recoverable State 5 Output Enable Mask */
#define TCC_DRVCTRL_NRE5                    TCC_DRVCTRL_NRE5_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_NRE5_Msk instead */
#define TCC_DRVCTRL_NRE6_Pos                6                                              /**< (TCC_DRVCTRL) Non-Recoverable State 6 Output Enable Position */
#define TCC_DRVCTRL_NRE6_Msk                (_U_(0x1) << TCC_DRVCTRL_NRE6_Pos)             /**< (TCC_DRVCTRL) Non-Recoverable State 6 Output Enable Mask */
#define TCC_DRVCTRL_NRE6                    TCC_DRVCTRL_NRE6_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_NRE6_Msk instead */
#define TCC_DRVCTRL_NRE7_Pos                7                                              /**< (TCC_DRVCTRL) Non-Recoverable State 7 Output Enable Position */
#define TCC_DRVCTRL_NRE7_Msk                (_U_(0x1) << TCC_DRVCTRL_NRE7_Pos)             /**< (TCC_DRVCTRL) Non-Recoverable State 7 Output Enable Mask */
#define TCC_DRVCTRL_NRE7                    TCC_DRVCTRL_NRE7_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_NRE7_Msk instead */
#define TCC_DRVCTRL_NRV0_Pos                8                                              /**< (TCC_DRVCTRL) Non-Recoverable State 0 Output Value Position */
#define TCC_DRVCTRL_NRV0_Msk                (_U_(0x1) << TCC_DRVCTRL_NRV0_Pos)             /**< (TCC_DRVCTRL) Non-Recoverable State 0 Output Value Mask */
#define TCC_DRVCTRL_NRV0                    TCC_DRVCTRL_NRV0_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_NRV0_Msk instead */
#define TCC_DRVCTRL_NRV1_Pos                9                                              /**< (TCC_DRVCTRL) Non-Recoverable State 1 Output Value Position */
#define TCC_DRVCTRL_NRV1_Msk                (_U_(0x1) << TCC_DRVCTRL_NRV1_Pos)             /**< (TCC_DRVCTRL) Non-Recoverable State 1 Output Value Mask */
#define TCC_DRVCTRL_NRV1                    TCC_DRVCTRL_NRV1_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_NRV1_Msk instead */
#define TCC_DRVCTRL_NRV2_Pos                10                                             /**< (TCC_DRVCTRL) Non-Recoverable State 2 Output Value Position */
#define TCC_DRVCTRL_NRV2_Msk                (_U_(0x1) << TCC_DRVCTRL_NRV2_Pos)             /**< (TCC_DRVCTRL) Non-Recoverable State 2 Output Value Mask */
#define TCC_DRVCTRL_NRV2                    TCC_DRVCTRL_NRV2_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_NRV2_Msk instead */
#define TCC_DRVCTRL_NRV3_Pos                11                                             /**< (TCC_DRVCTRL) Non-Recoverable State 3 Output Value Position */
#define TCC_DRVCTRL_NRV3_Msk                (_U_(0x1) << TCC_DRVCTRL_NRV3_Pos)             /**< (TCC_DRVCTRL) Non-Recoverable State 3 Output Value Mask */
#define TCC_DRVCTRL_NRV3                    TCC_DRVCTRL_NRV3_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_NRV3_Msk instead */
#define TCC_DRVCTRL_NRV4_Pos                12                                             /**< (TCC_DRVCTRL) Non-Recoverable State 4 Output Value Position */
#define TCC_DRVCTRL_NRV4_Msk                (_U_(0x1) << TCC_DRVCTRL_NRV4_Pos)             /**< (TCC_DRVCTRL) Non-Recoverable State 4 Output Value Mask */
#define TCC_DRVCTRL_NRV4                    TCC_DRVCTRL_NRV4_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_NRV4_Msk instead */
#define TCC_DRVCTRL_NRV5_Pos                13                                             /**< (TCC_DRVCTRL) Non-Recoverable State 5 Output Value Position */
#define TCC_DRVCTRL_NRV5_Msk                (_U_(0x1) << TCC_DRVCTRL_NRV5_Pos)             /**< (TCC_DRVCTRL) Non-Recoverable State 5 Output Value Mask */
#define TCC_DRVCTRL_NRV5                    TCC_DRVCTRL_NRV5_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_NRV5_Msk instead */
#define TCC_DRVCTRL_NRV6_Pos                14                                             /**< (TCC_DRVCTRL) Non-Recoverable State 6 Output Value Position */
#define TCC_DRVCTRL_NRV6_Msk                (_U_(0x1) << TCC_DRVCTRL_NRV6_Pos)             /**< (TCC_DRVCTRL) Non-Recoverable State 6 Output Value Mask */
#define TCC_DRVCTRL_NRV6                    TCC_DRVCTRL_NRV6_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_NRV6_Msk instead */
#define TCC_DRVCTRL_NRV7_Pos                15                                             /**< (TCC_DRVCTRL) Non-Recoverable State 7 Output Value Position */
#define TCC_DRVCTRL_NRV7_Msk                (_U_(0x1) << TCC_DRVCTRL_NRV7_Pos)             /**< (TCC_DRVCTRL) Non-Recoverable State 7 Output Value Mask */
#define TCC_DRVCTRL_NRV7                    TCC_DRVCTRL_NRV7_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_NRV7_Msk instead */
#define TCC_DRVCTRL_INVEN0_Pos              16                                             /**< (TCC_DRVCTRL) Output Waveform 0 Inversion Position */
#define TCC_DRVCTRL_INVEN0_Msk              (_U_(0x1) << TCC_DRVCTRL_INVEN0_Pos)           /**< (TCC_DRVCTRL) Output Waveform 0 Inversion Mask */
#define TCC_DRVCTRL_INVEN0                  TCC_DRVCTRL_INVEN0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_INVEN0_Msk instead */
#define TCC_DRVCTRL_INVEN1_Pos              17                                             /**< (TCC_DRVCTRL) Output Waveform 1 Inversion Position */
#define TCC_DRVCTRL_INVEN1_Msk              (_U_(0x1) << TCC_DRVCTRL_INVEN1_Pos)           /**< (TCC_DRVCTRL) Output Waveform 1 Inversion Mask */
#define TCC_DRVCTRL_INVEN1                  TCC_DRVCTRL_INVEN1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_INVEN1_Msk instead */
#define TCC_DRVCTRL_INVEN2_Pos              18                                             /**< (TCC_DRVCTRL) Output Waveform 2 Inversion Position */
#define TCC_DRVCTRL_INVEN2_Msk              (_U_(0x1) << TCC_DRVCTRL_INVEN2_Pos)           /**< (TCC_DRVCTRL) Output Waveform 2 Inversion Mask */
#define TCC_DRVCTRL_INVEN2                  TCC_DRVCTRL_INVEN2_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_INVEN2_Msk instead */
#define TCC_DRVCTRL_INVEN3_Pos              19                                             /**< (TCC_DRVCTRL) Output Waveform 3 Inversion Position */
#define TCC_DRVCTRL_INVEN3_Msk              (_U_(0x1) << TCC_DRVCTRL_INVEN3_Pos)           /**< (TCC_DRVCTRL) Output Waveform 3 Inversion Mask */
#define TCC_DRVCTRL_INVEN3                  TCC_DRVCTRL_INVEN3_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_INVEN3_Msk instead */
#define TCC_DRVCTRL_INVEN4_Pos              20                                             /**< (TCC_DRVCTRL) Output Waveform 4 Inversion Position */
#define TCC_DRVCTRL_INVEN4_Msk              (_U_(0x1) << TCC_DRVCTRL_INVEN4_Pos)           /**< (TCC_DRVCTRL) Output Waveform 4 Inversion Mask */
#define TCC_DRVCTRL_INVEN4                  TCC_DRVCTRL_INVEN4_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_INVEN4_Msk instead */
#define TCC_DRVCTRL_INVEN5_Pos              21                                             /**< (TCC_DRVCTRL) Output Waveform 5 Inversion Position */
#define TCC_DRVCTRL_INVEN5_Msk              (_U_(0x1) << TCC_DRVCTRL_INVEN5_Pos)           /**< (TCC_DRVCTRL) Output Waveform 5 Inversion Mask */
#define TCC_DRVCTRL_INVEN5                  TCC_DRVCTRL_INVEN5_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_INVEN5_Msk instead */
#define TCC_DRVCTRL_INVEN6_Pos              22                                             /**< (TCC_DRVCTRL) Output Waveform 6 Inversion Position */
#define TCC_DRVCTRL_INVEN6_Msk              (_U_(0x1) << TCC_DRVCTRL_INVEN6_Pos)           /**< (TCC_DRVCTRL) Output Waveform 6 Inversion Mask */
#define TCC_DRVCTRL_INVEN6                  TCC_DRVCTRL_INVEN6_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_INVEN6_Msk instead */
#define TCC_DRVCTRL_INVEN7_Pos              23                                             /**< (TCC_DRVCTRL) Output Waveform 7 Inversion Position */
#define TCC_DRVCTRL_INVEN7_Msk              (_U_(0x1) << TCC_DRVCTRL_INVEN7_Pos)           /**< (TCC_DRVCTRL) Output Waveform 7 Inversion Mask */
#define TCC_DRVCTRL_INVEN7                  TCC_DRVCTRL_INVEN7_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DRVCTRL_INVEN7_Msk instead */
#define TCC_DRVCTRL_FILTERVAL0_Pos          24                                             /**< (TCC_DRVCTRL) Non-Recoverable Fault Input 0 Filter Value Position */
#define TCC_DRVCTRL_FILTERVAL0_Msk          (_U_(0xF) << TCC_DRVCTRL_FILTERVAL0_Pos)       /**< (TCC_DRVCTRL) Non-Recoverable Fault Input 0 Filter Value Mask */
#define TCC_DRVCTRL_FILTERVAL0(value)       (TCC_DRVCTRL_FILTERVAL0_Msk & ((value) << TCC_DRVCTRL_FILTERVAL0_Pos))
#define TCC_DRVCTRL_FILTERVAL1_Pos          28                                             /**< (TCC_DRVCTRL) Non-Recoverable Fault Input 1 Filter Value Position */
#define TCC_DRVCTRL_FILTERVAL1_Msk          (_U_(0xF) << TCC_DRVCTRL_FILTERVAL1_Pos)       /**< (TCC_DRVCTRL) Non-Recoverable Fault Input 1 Filter Value Mask */
#define TCC_DRVCTRL_FILTERVAL1(value)       (TCC_DRVCTRL_FILTERVAL1_Msk & ((value) << TCC_DRVCTRL_FILTERVAL1_Pos))
#define TCC_DRVCTRL_MASK                    _U_(0xFFFFFFFF)                                /**< \deprecated (TCC_DRVCTRL) Register MASK  (Use TCC_DRVCTRL_Msk instead)  */
#define TCC_DRVCTRL_Msk                     _U_(0xFFFFFFFF)                                /**< (TCC_DRVCTRL) Register Mask  */

#define TCC_DRVCTRL_NRE_Pos                 0                                              /**< (TCC_DRVCTRL Position) Non-Recoverable State x Output Enable */
#define TCC_DRVCTRL_NRE_Msk                 (_U_(0xFF) << TCC_DRVCTRL_NRE_Pos)             /**< (TCC_DRVCTRL Mask) NRE */
#define TCC_DRVCTRL_NRE(value)              (TCC_DRVCTRL_NRE_Msk & ((value) << TCC_DRVCTRL_NRE_Pos))  
#define TCC_DRVCTRL_NRV_Pos                 8                                              /**< (TCC_DRVCTRL Position) Non-Recoverable State x Output Value */
#define TCC_DRVCTRL_NRV_Msk                 (_U_(0xFF) << TCC_DRVCTRL_NRV_Pos)             /**< (TCC_DRVCTRL Mask) NRV */
#define TCC_DRVCTRL_NRV(value)              (TCC_DRVCTRL_NRV_Msk & ((value) << TCC_DRVCTRL_NRV_Pos))  
#define TCC_DRVCTRL_INVEN_Pos               16                                             /**< (TCC_DRVCTRL Position) Output Waveform x Inversion */
#define TCC_DRVCTRL_INVEN_Msk               (_U_(0xFF) << TCC_DRVCTRL_INVEN_Pos)           /**< (TCC_DRVCTRL Mask) INVEN */
#define TCC_DRVCTRL_INVEN(value)            (TCC_DRVCTRL_INVEN_Msk & ((value) << TCC_DRVCTRL_INVEN_Pos))  

/* -------- TCC_DBGCTRL : (TCC Offset: 0x1e) (R/W 8) Debug Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DBGRUN:1;                  /**< bit:      0  Debug Running Mode                       */
    uint8_t  :1;                        /**< bit:      1  Reserved */
    uint8_t  FDDBD:1;                   /**< bit:      2  Fault Detection on Debug Break Detection */
    uint8_t  :5;                        /**< bit:   3..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} TCC_DBGCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_DBGCTRL_OFFSET                  (0x1E)                                        /**<  (TCC_DBGCTRL) Debug Control  Offset */
#define TCC_DBGCTRL_RESETVALUE              _U_(0x00)                                     /**<  (TCC_DBGCTRL) Debug Control  Reset Value */

#define TCC_DBGCTRL_DBGRUN_Pos              0                                              /**< (TCC_DBGCTRL) Debug Running Mode Position */
#define TCC_DBGCTRL_DBGRUN_Msk              (_U_(0x1) << TCC_DBGCTRL_DBGRUN_Pos)           /**< (TCC_DBGCTRL) Debug Running Mode Mask */
#define TCC_DBGCTRL_DBGRUN                  TCC_DBGCTRL_DBGRUN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DBGCTRL_DBGRUN_Msk instead */
#define TCC_DBGCTRL_FDDBD_Pos               2                                              /**< (TCC_DBGCTRL) Fault Detection on Debug Break Detection Position */
#define TCC_DBGCTRL_FDDBD_Msk               (_U_(0x1) << TCC_DBGCTRL_FDDBD_Pos)            /**< (TCC_DBGCTRL) Fault Detection on Debug Break Detection Mask */
#define TCC_DBGCTRL_FDDBD                   TCC_DBGCTRL_FDDBD_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_DBGCTRL_FDDBD_Msk instead */
#define TCC_DBGCTRL_MASK                    _U_(0x05)                                      /**< \deprecated (TCC_DBGCTRL) Register MASK  (Use TCC_DBGCTRL_Msk instead)  */
#define TCC_DBGCTRL_Msk                     _U_(0x05)                                      /**< (TCC_DBGCTRL) Register Mask  */


/* -------- TCC_EVCTRL : (TCC Offset: 0x20) (R/W 32) Event Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t EVACT0:3;                  /**< bit:   0..2  Timer/counter Input Event0 Action        */
    uint32_t EVACT1:3;                  /**< bit:   3..5  Timer/counter Input Event1 Action        */
    uint32_t CNTSEL:2;                  /**< bit:   6..7  Timer/counter Output Event Mode          */
    uint32_t OVFEO:1;                   /**< bit:      8  Overflow/Underflow Output Event Enable   */
    uint32_t TRGEO:1;                   /**< bit:      9  Retrigger Output Event Enable            */
    uint32_t CNTEO:1;                   /**< bit:     10  Timer/counter Output Event Enable        */
    uint32_t :1;                        /**< bit:     11  Reserved */
    uint32_t TCINV0:1;                  /**< bit:     12  Inverted Event 0 Input Enable            */
    uint32_t TCINV1:1;                  /**< bit:     13  Inverted Event 1 Input Enable            */
    uint32_t TCEI0:1;                   /**< bit:     14  Timer/counter Event 0 Input Enable       */
    uint32_t TCEI1:1;                   /**< bit:     15  Timer/counter Event 1 Input Enable       */
    uint32_t MCEI0:1;                   /**< bit:     16  Match or Capture Channel 0 Event Input Enable */
    uint32_t MCEI1:1;                   /**< bit:     17  Match or Capture Channel 1 Event Input Enable */
    uint32_t MCEI2:1;                   /**< bit:     18  Match or Capture Channel 2 Event Input Enable */
    uint32_t MCEI3:1;                   /**< bit:     19  Match or Capture Channel 3 Event Input Enable */
    uint32_t :4;                        /**< bit: 20..23  Reserved */
    uint32_t MCEO0:1;                   /**< bit:     24  Match or Capture Channel 0 Event Output Enable */
    uint32_t MCEO1:1;                   /**< bit:     25  Match or Capture Channel 1 Event Output Enable */
    uint32_t MCEO2:1;                   /**< bit:     26  Match or Capture Channel 2 Event Output Enable */
    uint32_t MCEO3:1;                   /**< bit:     27  Match or Capture Channel 3 Event Output Enable */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :12;                       /**< bit:  0..11  Reserved */
    uint32_t TCINV:2;                   /**< bit: 12..13  Inverted Event x Input Enable            */
    uint32_t TCEI:2;                    /**< bit: 14..15  Timer/counter Event x Input Enable       */
    uint32_t MCEI:4;                    /**< bit: 16..19  Match or Capture Channel x Event Input Enable */
    uint32_t :4;                        /**< bit: 20..23  Reserved */
    uint32_t MCEO:4;                    /**< bit: 24..27  Match or Capture Channel 3 Event Output Enable */
    uint32_t :4;                        /**< bit: 28..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} TCC_EVCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_EVCTRL_OFFSET                   (0x20)                                        /**<  (TCC_EVCTRL) Event Control  Offset */
#define TCC_EVCTRL_RESETVALUE               _U_(0x00)                                     /**<  (TCC_EVCTRL) Event Control  Reset Value */

#define TCC_EVCTRL_EVACT0_Pos               0                                              /**< (TCC_EVCTRL) Timer/counter Input Event0 Action Position */
#define TCC_EVCTRL_EVACT0_Msk               (_U_(0x7) << TCC_EVCTRL_EVACT0_Pos)            /**< (TCC_EVCTRL) Timer/counter Input Event0 Action Mask */
#define TCC_EVCTRL_EVACT0(value)            (TCC_EVCTRL_EVACT0_Msk & ((value) << TCC_EVCTRL_EVACT0_Pos))
#define   TCC_EVCTRL_EVACT0_OFF_Val         _U_(0x0)                                       /**< (TCC_EVCTRL) Event action disabled  */
#define   TCC_EVCTRL_EVACT0_RETRIGGER_Val   _U_(0x1)                                       /**< (TCC_EVCTRL) Start, restart or re-trigger counter on event  */
#define   TCC_EVCTRL_EVACT0_COUNTEV_Val     _U_(0x2)                                       /**< (TCC_EVCTRL) Count on event  */
#define   TCC_EVCTRL_EVACT0_START_Val       _U_(0x3)                                       /**< (TCC_EVCTRL) Start counter on event  */
#define   TCC_EVCTRL_EVACT0_INC_Val         _U_(0x4)                                       /**< (TCC_EVCTRL) Increment counter on event  */
#define   TCC_EVCTRL_EVACT0_COUNT_Val       _U_(0x5)                                       /**< (TCC_EVCTRL) Count on active state of asynchronous event  */
#define   TCC_EVCTRL_EVACT0_STAMP_Val       _U_(0x6)                                       /**< (TCC_EVCTRL) Stamp capture  */
#define   TCC_EVCTRL_EVACT0_FAULT_Val       _U_(0x7)                                       /**< (TCC_EVCTRL) Non-recoverable fault  */
#define TCC_EVCTRL_EVACT0_OFF               (TCC_EVCTRL_EVACT0_OFF_Val << TCC_EVCTRL_EVACT0_Pos)  /**< (TCC_EVCTRL) Event action disabled Position  */
#define TCC_EVCTRL_EVACT0_RETRIGGER         (TCC_EVCTRL_EVACT0_RETRIGGER_Val << TCC_EVCTRL_EVACT0_Pos)  /**< (TCC_EVCTRL) Start, restart or re-trigger counter on event Position  */
#define TCC_EVCTRL_EVACT0_COUNTEV           (TCC_EVCTRL_EVACT0_COUNTEV_Val << TCC_EVCTRL_EVACT0_Pos)  /**< (TCC_EVCTRL) Count on event Position  */
#define TCC_EVCTRL_EVACT0_START             (TCC_EVCTRL_EVACT0_START_Val << TCC_EVCTRL_EVACT0_Pos)  /**< (TCC_EVCTRL) Start counter on event Position  */
#define TCC_EVCTRL_EVACT0_INC               (TCC_EVCTRL_EVACT0_INC_Val << TCC_EVCTRL_EVACT0_Pos)  /**< (TCC_EVCTRL) Increment counter on event Position  */
#define TCC_EVCTRL_EVACT0_COUNT             (TCC_EVCTRL_EVACT0_COUNT_Val << TCC_EVCTRL_EVACT0_Pos)  /**< (TCC_EVCTRL) Count on active state of asynchronous event Position  */
#define TCC_EVCTRL_EVACT0_STAMP             (TCC_EVCTRL_EVACT0_STAMP_Val << TCC_EVCTRL_EVACT0_Pos)  /**< (TCC_EVCTRL) Stamp capture Position  */
#define TCC_EVCTRL_EVACT0_FAULT             (TCC_EVCTRL_EVACT0_FAULT_Val << TCC_EVCTRL_EVACT0_Pos)  /**< (TCC_EVCTRL) Non-recoverable fault Position  */
#define TCC_EVCTRL_EVACT1_Pos               3                                              /**< (TCC_EVCTRL) Timer/counter Input Event1 Action Position */
#define TCC_EVCTRL_EVACT1_Msk               (_U_(0x7) << TCC_EVCTRL_EVACT1_Pos)            /**< (TCC_EVCTRL) Timer/counter Input Event1 Action Mask */
#define TCC_EVCTRL_EVACT1(value)            (TCC_EVCTRL_EVACT1_Msk & ((value) << TCC_EVCTRL_EVACT1_Pos))
#define   TCC_EVCTRL_EVACT1_OFF_Val         _U_(0x0)                                       /**< (TCC_EVCTRL) Event action disabled  */
#define   TCC_EVCTRL_EVACT1_RETRIGGER_Val   _U_(0x1)                                       /**< (TCC_EVCTRL) Re-trigger counter on event  */
#define   TCC_EVCTRL_EVACT1_DIR_Val         _U_(0x2)                                       /**< (TCC_EVCTRL) Direction control  */
#define   TCC_EVCTRL_EVACT1_STOP_Val        _U_(0x3)                                       /**< (TCC_EVCTRL) Stop counter on event  */
#define   TCC_EVCTRL_EVACT1_DEC_Val         _U_(0x4)                                       /**< (TCC_EVCTRL) Decrement counter on event  */
#define   TCC_EVCTRL_EVACT1_PPW_Val         _U_(0x5)                                       /**< (TCC_EVCTRL) Period capture value in CC0 register, pulse width capture value in CC1 register  */
#define   TCC_EVCTRL_EVACT1_PWP_Val         _U_(0x6)                                       /**< (TCC_EVCTRL) Period capture value in CC1 register, pulse width capture value in CC0 register  */
#define   TCC_EVCTRL_EVACT1_FAULT_Val       _U_(0x7)                                       /**< (TCC_EVCTRL) Non-recoverable fault  */
#define TCC_EVCTRL_EVACT1_OFF               (TCC_EVCTRL_EVACT1_OFF_Val << TCC_EVCTRL_EVACT1_Pos)  /**< (TCC_EVCTRL) Event action disabled Position  */
#define TCC_EVCTRL_EVACT1_RETRIGGER         (TCC_EVCTRL_EVACT1_RETRIGGER_Val << TCC_EVCTRL_EVACT1_Pos)  /**< (TCC_EVCTRL) Re-trigger counter on event Position  */
#define TCC_EVCTRL_EVACT1_DIR               (TCC_EVCTRL_EVACT1_DIR_Val << TCC_EVCTRL_EVACT1_Pos)  /**< (TCC_EVCTRL) Direction control Position  */
#define TCC_EVCTRL_EVACT1_STOP              (TCC_EVCTRL_EVACT1_STOP_Val << TCC_EVCTRL_EVACT1_Pos)  /**< (TCC_EVCTRL) Stop counter on event Position  */
#define TCC_EVCTRL_EVACT1_DEC               (TCC_EVCTRL_EVACT1_DEC_Val << TCC_EVCTRL_EVACT1_Pos)  /**< (TCC_EVCTRL) Decrement counter on event Position  */
#define TCC_EVCTRL_EVACT1_PPW               (TCC_EVCTRL_EVACT1_PPW_Val << TCC_EVCTRL_EVACT1_Pos)  /**< (TCC_EVCTRL) Period capture value in CC0 register, pulse width capture value in CC1 register Position  */
#define TCC_EVCTRL_EVACT1_PWP               (TCC_EVCTRL_EVACT1_PWP_Val << TCC_EVCTRL_EVACT1_Pos)  /**< (TCC_EVCTRL) Period capture value in CC1 register, pulse width capture value in CC0 register Position  */
#define TCC_EVCTRL_EVACT1_FAULT             (TCC_EVCTRL_EVACT1_FAULT_Val << TCC_EVCTRL_EVACT1_Pos)  /**< (TCC_EVCTRL) Non-recoverable fault Position  */
#define TCC_EVCTRL_CNTSEL_Pos               6                                              /**< (TCC_EVCTRL) Timer/counter Output Event Mode Position */
#define TCC_EVCTRL_CNTSEL_Msk               (_U_(0x3) << TCC_EVCTRL_CNTSEL_Pos)            /**< (TCC_EVCTRL) Timer/counter Output Event Mode Mask */
#define TCC_EVCTRL_CNTSEL(value)            (TCC_EVCTRL_CNTSEL_Msk & ((value) << TCC_EVCTRL_CNTSEL_Pos))
#define   TCC_EVCTRL_CNTSEL_START_Val       _U_(0x0)                                       /**< (TCC_EVCTRL) An interrupt/event is generated when a new counter cycle starts  */
#define   TCC_EVCTRL_CNTSEL_END_Val         _U_(0x1)                                       /**< (TCC_EVCTRL) An interrupt/event is generated when a counter cycle ends  */
#define   TCC_EVCTRL_CNTSEL_BETWEEN_Val     _U_(0x2)                                       /**< (TCC_EVCTRL) An interrupt/event is generated when a counter cycle ends, except for the first and last cycles  */
#define   TCC_EVCTRL_CNTSEL_BOUNDARY_Val    _U_(0x3)                                       /**< (TCC_EVCTRL) An interrupt/event is generated when a new counter cycle starts or a counter cycle ends  */
#define TCC_EVCTRL_CNTSEL_START             (TCC_EVCTRL_CNTSEL_START_Val << TCC_EVCTRL_CNTSEL_Pos)  /**< (TCC_EVCTRL) An interrupt/event is generated when a new counter cycle starts Position  */
#define TCC_EVCTRL_CNTSEL_END               (TCC_EVCTRL_CNTSEL_END_Val << TCC_EVCTRL_CNTSEL_Pos)  /**< (TCC_EVCTRL) An interrupt/event is generated when a counter cycle ends Position  */
#define TCC_EVCTRL_CNTSEL_BETWEEN           (TCC_EVCTRL_CNTSEL_BETWEEN_Val << TCC_EVCTRL_CNTSEL_Pos)  /**< (TCC_EVCTRL) An interrupt/event is generated when a counter cycle ends, except for the first and last cycles Position  */
#define TCC_EVCTRL_CNTSEL_BOUNDARY          (TCC_EVCTRL_CNTSEL_BOUNDARY_Val << TCC_EVCTRL_CNTSEL_Pos)  /**< (TCC_EVCTRL) An interrupt/event is generated when a new counter cycle starts or a counter cycle ends Position  */
#define TCC_EVCTRL_OVFEO_Pos                8                                              /**< (TCC_EVCTRL) Overflow/Underflow Output Event Enable Position */
#define TCC_EVCTRL_OVFEO_Msk                (_U_(0x1) << TCC_EVCTRL_OVFEO_Pos)             /**< (TCC_EVCTRL) Overflow/Underflow Output Event Enable Mask */
#define TCC_EVCTRL_OVFEO                    TCC_EVCTRL_OVFEO_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_EVCTRL_OVFEO_Msk instead */
#define TCC_EVCTRL_TRGEO_Pos                9                                              /**< (TCC_EVCTRL) Retrigger Output Event Enable Position */
#define TCC_EVCTRL_TRGEO_Msk                (_U_(0x1) << TCC_EVCTRL_TRGEO_Pos)             /**< (TCC_EVCTRL) Retrigger Output Event Enable Mask */
#define TCC_EVCTRL_TRGEO                    TCC_EVCTRL_TRGEO_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_EVCTRL_TRGEO_Msk instead */
#define TCC_EVCTRL_CNTEO_Pos                10                                             /**< (TCC_EVCTRL) Timer/counter Output Event Enable Position */
#define TCC_EVCTRL_CNTEO_Msk                (_U_(0x1) << TCC_EVCTRL_CNTEO_Pos)             /**< (TCC_EVCTRL) Timer/counter Output Event Enable Mask */
#define TCC_EVCTRL_CNTEO                    TCC_EVCTRL_CNTEO_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_EVCTRL_CNTEO_Msk instead */
#define TCC_EVCTRL_TCINV0_Pos               12                                             /**< (TCC_EVCTRL) Inverted Event 0 Input Enable Position */
#define TCC_EVCTRL_TCINV0_Msk               (_U_(0x1) << TCC_EVCTRL_TCINV0_Pos)            /**< (TCC_EVCTRL) Inverted Event 0 Input Enable Mask */
#define TCC_EVCTRL_TCINV0                   TCC_EVCTRL_TCINV0_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_EVCTRL_TCINV0_Msk instead */
#define TCC_EVCTRL_TCINV1_Pos               13                                             /**< (TCC_EVCTRL) Inverted Event 1 Input Enable Position */
#define TCC_EVCTRL_TCINV1_Msk               (_U_(0x1) << TCC_EVCTRL_TCINV1_Pos)            /**< (TCC_EVCTRL) Inverted Event 1 Input Enable Mask */
#define TCC_EVCTRL_TCINV1                   TCC_EVCTRL_TCINV1_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_EVCTRL_TCINV1_Msk instead */
#define TCC_EVCTRL_TCEI0_Pos                14                                             /**< (TCC_EVCTRL) Timer/counter Event 0 Input Enable Position */
#define TCC_EVCTRL_TCEI0_Msk                (_U_(0x1) << TCC_EVCTRL_TCEI0_Pos)             /**< (TCC_EVCTRL) Timer/counter Event 0 Input Enable Mask */
#define TCC_EVCTRL_TCEI0                    TCC_EVCTRL_TCEI0_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_EVCTRL_TCEI0_Msk instead */
#define TCC_EVCTRL_TCEI1_Pos                15                                             /**< (TCC_EVCTRL) Timer/counter Event 1 Input Enable Position */
#define TCC_EVCTRL_TCEI1_Msk                (_U_(0x1) << TCC_EVCTRL_TCEI1_Pos)             /**< (TCC_EVCTRL) Timer/counter Event 1 Input Enable Mask */
#define TCC_EVCTRL_TCEI1                    TCC_EVCTRL_TCEI1_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_EVCTRL_TCEI1_Msk instead */
#define TCC_EVCTRL_MCEI0_Pos                16                                             /**< (TCC_EVCTRL) Match or Capture Channel 0 Event Input Enable Position */
#define TCC_EVCTRL_MCEI0_Msk                (_U_(0x1) << TCC_EVCTRL_MCEI0_Pos)             /**< (TCC_EVCTRL) Match or Capture Channel 0 Event Input Enable Mask */
#define TCC_EVCTRL_MCEI0                    TCC_EVCTRL_MCEI0_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_EVCTRL_MCEI0_Msk instead */
#define TCC_EVCTRL_MCEI1_Pos                17                                             /**< (TCC_EVCTRL) Match or Capture Channel 1 Event Input Enable Position */
#define TCC_EVCTRL_MCEI1_Msk                (_U_(0x1) << TCC_EVCTRL_MCEI1_Pos)             /**< (TCC_EVCTRL) Match or Capture Channel 1 Event Input Enable Mask */
#define TCC_EVCTRL_MCEI1                    TCC_EVCTRL_MCEI1_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_EVCTRL_MCEI1_Msk instead */
#define TCC_EVCTRL_MCEI2_Pos                18                                             /**< (TCC_EVCTRL) Match or Capture Channel 2 Event Input Enable Position */
#define TCC_EVCTRL_MCEI2_Msk                (_U_(0x1) << TCC_EVCTRL_MCEI2_Pos)             /**< (TCC_EVCTRL) Match or Capture Channel 2 Event Input Enable Mask */
#define TCC_EVCTRL_MCEI2                    TCC_EVCTRL_MCEI2_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_EVCTRL_MCEI2_Msk instead */
#define TCC_EVCTRL_MCEI3_Pos                19                                             /**< (TCC_EVCTRL) Match or Capture Channel 3 Event Input Enable Position */
#define TCC_EVCTRL_MCEI3_Msk                (_U_(0x1) << TCC_EVCTRL_MCEI3_Pos)             /**< (TCC_EVCTRL) Match or Capture Channel 3 Event Input Enable Mask */
#define TCC_EVCTRL_MCEI3                    TCC_EVCTRL_MCEI3_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_EVCTRL_MCEI3_Msk instead */
#define TCC_EVCTRL_MCEO0_Pos                24                                             /**< (TCC_EVCTRL) Match or Capture Channel 0 Event Output Enable Position */
#define TCC_EVCTRL_MCEO0_Msk                (_U_(0x1) << TCC_EVCTRL_MCEO0_Pos)             /**< (TCC_EVCTRL) Match or Capture Channel 0 Event Output Enable Mask */
#define TCC_EVCTRL_MCEO0                    TCC_EVCTRL_MCEO0_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_EVCTRL_MCEO0_Msk instead */
#define TCC_EVCTRL_MCEO1_Pos                25                                             /**< (TCC_EVCTRL) Match or Capture Channel 1 Event Output Enable Position */
#define TCC_EVCTRL_MCEO1_Msk                (_U_(0x1) << TCC_EVCTRL_MCEO1_Pos)             /**< (TCC_EVCTRL) Match or Capture Channel 1 Event Output Enable Mask */
#define TCC_EVCTRL_MCEO1                    TCC_EVCTRL_MCEO1_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_EVCTRL_MCEO1_Msk instead */
#define TCC_EVCTRL_MCEO2_Pos                26                                             /**< (TCC_EVCTRL) Match or Capture Channel 2 Event Output Enable Position */
#define TCC_EVCTRL_MCEO2_Msk                (_U_(0x1) << TCC_EVCTRL_MCEO2_Pos)             /**< (TCC_EVCTRL) Match or Capture Channel 2 Event Output Enable Mask */
#define TCC_EVCTRL_MCEO2                    TCC_EVCTRL_MCEO2_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_EVCTRL_MCEO2_Msk instead */
#define TCC_EVCTRL_MCEO3_Pos                27                                             /**< (TCC_EVCTRL) Match or Capture Channel 3 Event Output Enable Position */
#define TCC_EVCTRL_MCEO3_Msk                (_U_(0x1) << TCC_EVCTRL_MCEO3_Pos)             /**< (TCC_EVCTRL) Match or Capture Channel 3 Event Output Enable Mask */
#define TCC_EVCTRL_MCEO3                    TCC_EVCTRL_MCEO3_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_EVCTRL_MCEO3_Msk instead */
#define TCC_EVCTRL_MASK                     _U_(0xF0FF7FF)                                 /**< \deprecated (TCC_EVCTRL) Register MASK  (Use TCC_EVCTRL_Msk instead)  */
#define TCC_EVCTRL_Msk                      _U_(0xF0FF7FF)                                 /**< (TCC_EVCTRL) Register Mask  */

#define TCC_EVCTRL_TCINV_Pos                12                                             /**< (TCC_EVCTRL Position) Inverted Event x Input Enable */
#define TCC_EVCTRL_TCINV_Msk                (_U_(0x3) << TCC_EVCTRL_TCINV_Pos)             /**< (TCC_EVCTRL Mask) TCINV */
#define TCC_EVCTRL_TCINV(value)             (TCC_EVCTRL_TCINV_Msk & ((value) << TCC_EVCTRL_TCINV_Pos))  
#define TCC_EVCTRL_TCEI_Pos                 14                                             /**< (TCC_EVCTRL Position) Timer/counter Event x Input Enable */
#define TCC_EVCTRL_TCEI_Msk                 (_U_(0x3) << TCC_EVCTRL_TCEI_Pos)              /**< (TCC_EVCTRL Mask) TCEI */
#define TCC_EVCTRL_TCEI(value)              (TCC_EVCTRL_TCEI_Msk & ((value) << TCC_EVCTRL_TCEI_Pos))  
#define TCC_EVCTRL_MCEI_Pos                 16                                             /**< (TCC_EVCTRL Position) Match or Capture Channel x Event Input Enable */
#define TCC_EVCTRL_MCEI_Msk                 (_U_(0xF) << TCC_EVCTRL_MCEI_Pos)              /**< (TCC_EVCTRL Mask) MCEI */
#define TCC_EVCTRL_MCEI(value)              (TCC_EVCTRL_MCEI_Msk & ((value) << TCC_EVCTRL_MCEI_Pos))  
#define TCC_EVCTRL_MCEO_Pos                 24                                             /**< (TCC_EVCTRL Position) Match or Capture Channel 3 Event Output Enable */
#define TCC_EVCTRL_MCEO_Msk                 (_U_(0xF) << TCC_EVCTRL_MCEO_Pos)              /**< (TCC_EVCTRL Mask) MCEO */
#define TCC_EVCTRL_MCEO(value)              (TCC_EVCTRL_MCEO_Msk & ((value) << TCC_EVCTRL_MCEO_Pos))  

/* -------- TCC_INTENCLR : (TCC Offset: 0x24) (R/W 32) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t OVF:1;                     /**< bit:      0  Overflow Interrupt Enable                */
    uint32_t TRG:1;                     /**< bit:      1  Retrigger Interrupt Enable               */
    uint32_t CNT:1;                     /**< bit:      2  Counter Interrupt Enable                 */
    uint32_t ERR:1;                     /**< bit:      3  Error Interrupt Enable                   */
    uint32_t :6;                        /**< bit:   4..9  Reserved */
    uint32_t UFS:1;                     /**< bit:     10  Non-Recoverable Update Fault Interrupt Enable */
    uint32_t DFS:1;                     /**< bit:     11  Non-Recoverable Debug Fault Interrupt Enable */
    uint32_t FAULTA:1;                  /**< bit:     12  Recoverable Fault A Interrupt Enable     */
    uint32_t FAULTB:1;                  /**< bit:     13  Recoverable Fault B Interrupt Enable     */
    uint32_t FAULT0:1;                  /**< bit:     14  Non-Recoverable Fault 0 Interrupt Enable */
    uint32_t FAULT1:1;                  /**< bit:     15  Non-Recoverable Fault 1 Interrupt Enable */
    uint32_t MC0:1;                     /**< bit:     16  Match or Capture Channel 0 Interrupt Enable */
    uint32_t MC1:1;                     /**< bit:     17  Match or Capture Channel 1 Interrupt Enable */
    uint32_t MC2:1;                     /**< bit:     18  Match or Capture Channel 2 Interrupt Enable */
    uint32_t MC3:1;                     /**< bit:     19  Match or Capture Channel 3 Interrupt Enable */
    uint32_t :12;                       /**< bit: 20..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :14;                       /**< bit:  0..13  Reserved */
    uint32_t FAULT:2;                   /**< bit: 14..15  Non-Recoverable Fault x Interrupt Enable */
    uint32_t MC:4;                      /**< bit: 16..19  Match or Capture Channel 3 Interrupt Enable */
    uint32_t :12;                       /**< bit: 20..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} TCC_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_INTENCLR_OFFSET                 (0x24)                                        /**<  (TCC_INTENCLR) Interrupt Enable Clear  Offset */
#define TCC_INTENCLR_RESETVALUE             _U_(0x00)                                     /**<  (TCC_INTENCLR) Interrupt Enable Clear  Reset Value */

#define TCC_INTENCLR_OVF_Pos                0                                              /**< (TCC_INTENCLR) Overflow Interrupt Enable Position */
#define TCC_INTENCLR_OVF_Msk                (_U_(0x1) << TCC_INTENCLR_OVF_Pos)             /**< (TCC_INTENCLR) Overflow Interrupt Enable Mask */
#define TCC_INTENCLR_OVF                    TCC_INTENCLR_OVF_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENCLR_OVF_Msk instead */
#define TCC_INTENCLR_TRG_Pos                1                                              /**< (TCC_INTENCLR) Retrigger Interrupt Enable Position */
#define TCC_INTENCLR_TRG_Msk                (_U_(0x1) << TCC_INTENCLR_TRG_Pos)             /**< (TCC_INTENCLR) Retrigger Interrupt Enable Mask */
#define TCC_INTENCLR_TRG                    TCC_INTENCLR_TRG_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENCLR_TRG_Msk instead */
#define TCC_INTENCLR_CNT_Pos                2                                              /**< (TCC_INTENCLR) Counter Interrupt Enable Position */
#define TCC_INTENCLR_CNT_Msk                (_U_(0x1) << TCC_INTENCLR_CNT_Pos)             /**< (TCC_INTENCLR) Counter Interrupt Enable Mask */
#define TCC_INTENCLR_CNT                    TCC_INTENCLR_CNT_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENCLR_CNT_Msk instead */
#define TCC_INTENCLR_ERR_Pos                3                                              /**< (TCC_INTENCLR) Error Interrupt Enable Position */
#define TCC_INTENCLR_ERR_Msk                (_U_(0x1) << TCC_INTENCLR_ERR_Pos)             /**< (TCC_INTENCLR) Error Interrupt Enable Mask */
#define TCC_INTENCLR_ERR                    TCC_INTENCLR_ERR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENCLR_ERR_Msk instead */
#define TCC_INTENCLR_UFS_Pos                10                                             /**< (TCC_INTENCLR) Non-Recoverable Update Fault Interrupt Enable Position */
#define TCC_INTENCLR_UFS_Msk                (_U_(0x1) << TCC_INTENCLR_UFS_Pos)             /**< (TCC_INTENCLR) Non-Recoverable Update Fault Interrupt Enable Mask */
#define TCC_INTENCLR_UFS                    TCC_INTENCLR_UFS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENCLR_UFS_Msk instead */
#define TCC_INTENCLR_DFS_Pos                11                                             /**< (TCC_INTENCLR) Non-Recoverable Debug Fault Interrupt Enable Position */
#define TCC_INTENCLR_DFS_Msk                (_U_(0x1) << TCC_INTENCLR_DFS_Pos)             /**< (TCC_INTENCLR) Non-Recoverable Debug Fault Interrupt Enable Mask */
#define TCC_INTENCLR_DFS                    TCC_INTENCLR_DFS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENCLR_DFS_Msk instead */
#define TCC_INTENCLR_FAULTA_Pos             12                                             /**< (TCC_INTENCLR) Recoverable Fault A Interrupt Enable Position */
#define TCC_INTENCLR_FAULTA_Msk             (_U_(0x1) << TCC_INTENCLR_FAULTA_Pos)          /**< (TCC_INTENCLR) Recoverable Fault A Interrupt Enable Mask */
#define TCC_INTENCLR_FAULTA                 TCC_INTENCLR_FAULTA_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENCLR_FAULTA_Msk instead */
#define TCC_INTENCLR_FAULTB_Pos             13                                             /**< (TCC_INTENCLR) Recoverable Fault B Interrupt Enable Position */
#define TCC_INTENCLR_FAULTB_Msk             (_U_(0x1) << TCC_INTENCLR_FAULTB_Pos)          /**< (TCC_INTENCLR) Recoverable Fault B Interrupt Enable Mask */
#define TCC_INTENCLR_FAULTB                 TCC_INTENCLR_FAULTB_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENCLR_FAULTB_Msk instead */
#define TCC_INTENCLR_FAULT0_Pos             14                                             /**< (TCC_INTENCLR) Non-Recoverable Fault 0 Interrupt Enable Position */
#define TCC_INTENCLR_FAULT0_Msk             (_U_(0x1) << TCC_INTENCLR_FAULT0_Pos)          /**< (TCC_INTENCLR) Non-Recoverable Fault 0 Interrupt Enable Mask */
#define TCC_INTENCLR_FAULT0                 TCC_INTENCLR_FAULT0_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENCLR_FAULT0_Msk instead */
#define TCC_INTENCLR_FAULT1_Pos             15                                             /**< (TCC_INTENCLR) Non-Recoverable Fault 1 Interrupt Enable Position */
#define TCC_INTENCLR_FAULT1_Msk             (_U_(0x1) << TCC_INTENCLR_FAULT1_Pos)          /**< (TCC_INTENCLR) Non-Recoverable Fault 1 Interrupt Enable Mask */
#define TCC_INTENCLR_FAULT1                 TCC_INTENCLR_FAULT1_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENCLR_FAULT1_Msk instead */
#define TCC_INTENCLR_MC0_Pos                16                                             /**< (TCC_INTENCLR) Match or Capture Channel 0 Interrupt Enable Position */
#define TCC_INTENCLR_MC0_Msk                (_U_(0x1) << TCC_INTENCLR_MC0_Pos)             /**< (TCC_INTENCLR) Match or Capture Channel 0 Interrupt Enable Mask */
#define TCC_INTENCLR_MC0                    TCC_INTENCLR_MC0_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENCLR_MC0_Msk instead */
#define TCC_INTENCLR_MC1_Pos                17                                             /**< (TCC_INTENCLR) Match or Capture Channel 1 Interrupt Enable Position */
#define TCC_INTENCLR_MC1_Msk                (_U_(0x1) << TCC_INTENCLR_MC1_Pos)             /**< (TCC_INTENCLR) Match or Capture Channel 1 Interrupt Enable Mask */
#define TCC_INTENCLR_MC1                    TCC_INTENCLR_MC1_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENCLR_MC1_Msk instead */
#define TCC_INTENCLR_MC2_Pos                18                                             /**< (TCC_INTENCLR) Match or Capture Channel 2 Interrupt Enable Position */
#define TCC_INTENCLR_MC2_Msk                (_U_(0x1) << TCC_INTENCLR_MC2_Pos)             /**< (TCC_INTENCLR) Match or Capture Channel 2 Interrupt Enable Mask */
#define TCC_INTENCLR_MC2                    TCC_INTENCLR_MC2_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENCLR_MC2_Msk instead */
#define TCC_INTENCLR_MC3_Pos                19                                             /**< (TCC_INTENCLR) Match or Capture Channel 3 Interrupt Enable Position */
#define TCC_INTENCLR_MC3_Msk                (_U_(0x1) << TCC_INTENCLR_MC3_Pos)             /**< (TCC_INTENCLR) Match or Capture Channel 3 Interrupt Enable Mask */
#define TCC_INTENCLR_MC3                    TCC_INTENCLR_MC3_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENCLR_MC3_Msk instead */
#define TCC_INTENCLR_MASK                   _U_(0xFFC0F)                                   /**< \deprecated (TCC_INTENCLR) Register MASK  (Use TCC_INTENCLR_Msk instead)  */
#define TCC_INTENCLR_Msk                    _U_(0xFFC0F)                                   /**< (TCC_INTENCLR) Register Mask  */

#define TCC_INTENCLR_FAULT_Pos              14                                             /**< (TCC_INTENCLR Position) Non-Recoverable Fault x Interrupt Enable */
#define TCC_INTENCLR_FAULT_Msk              (_U_(0x3) << TCC_INTENCLR_FAULT_Pos)           /**< (TCC_INTENCLR Mask) FAULT */
#define TCC_INTENCLR_FAULT(value)           (TCC_INTENCLR_FAULT_Msk & ((value) << TCC_INTENCLR_FAULT_Pos))  
#define TCC_INTENCLR_MC_Pos                 16                                             /**< (TCC_INTENCLR Position) Match or Capture Channel 3 Interrupt Enable */
#define TCC_INTENCLR_MC_Msk                 (_U_(0xF) << TCC_INTENCLR_MC_Pos)              /**< (TCC_INTENCLR Mask) MC */
#define TCC_INTENCLR_MC(value)              (TCC_INTENCLR_MC_Msk & ((value) << TCC_INTENCLR_MC_Pos))  

/* -------- TCC_INTENSET : (TCC Offset: 0x28) (R/W 32) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t OVF:1;                     /**< bit:      0  Overflow Interrupt Enable                */
    uint32_t TRG:1;                     /**< bit:      1  Retrigger Interrupt Enable               */
    uint32_t CNT:1;                     /**< bit:      2  Counter Interrupt Enable                 */
    uint32_t ERR:1;                     /**< bit:      3  Error Interrupt Enable                   */
    uint32_t :6;                        /**< bit:   4..9  Reserved */
    uint32_t UFS:1;                     /**< bit:     10  Non-Recoverable Update Fault Interrupt Enable */
    uint32_t DFS:1;                     /**< bit:     11  Non-Recoverable Debug Fault Interrupt Enable */
    uint32_t FAULTA:1;                  /**< bit:     12  Recoverable Fault A Interrupt Enable     */
    uint32_t FAULTB:1;                  /**< bit:     13  Recoverable Fault B Interrupt Enable     */
    uint32_t FAULT0:1;                  /**< bit:     14  Non-Recoverable Fault 0 Interrupt Enable */
    uint32_t FAULT1:1;                  /**< bit:     15  Non-Recoverable Fault 1 Interrupt Enable */
    uint32_t MC0:1;                     /**< bit:     16  Match or Capture Channel 0 Interrupt Enable */
    uint32_t MC1:1;                     /**< bit:     17  Match or Capture Channel 1 Interrupt Enable */
    uint32_t MC2:1;                     /**< bit:     18  Match or Capture Channel 2 Interrupt Enable */
    uint32_t MC3:1;                     /**< bit:     19  Match or Capture Channel 3 Interrupt Enable */
    uint32_t :12;                       /**< bit: 20..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :14;                       /**< bit:  0..13  Reserved */
    uint32_t FAULT:2;                   /**< bit: 14..15  Non-Recoverable Fault x Interrupt Enable */
    uint32_t MC:4;                      /**< bit: 16..19  Match or Capture Channel 3 Interrupt Enable */
    uint32_t :12;                       /**< bit: 20..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} TCC_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_INTENSET_OFFSET                 (0x28)                                        /**<  (TCC_INTENSET) Interrupt Enable Set  Offset */
#define TCC_INTENSET_RESETVALUE             _U_(0x00)                                     /**<  (TCC_INTENSET) Interrupt Enable Set  Reset Value */

#define TCC_INTENSET_OVF_Pos                0                                              /**< (TCC_INTENSET) Overflow Interrupt Enable Position */
#define TCC_INTENSET_OVF_Msk                (_U_(0x1) << TCC_INTENSET_OVF_Pos)             /**< (TCC_INTENSET) Overflow Interrupt Enable Mask */
#define TCC_INTENSET_OVF                    TCC_INTENSET_OVF_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENSET_OVF_Msk instead */
#define TCC_INTENSET_TRG_Pos                1                                              /**< (TCC_INTENSET) Retrigger Interrupt Enable Position */
#define TCC_INTENSET_TRG_Msk                (_U_(0x1) << TCC_INTENSET_TRG_Pos)             /**< (TCC_INTENSET) Retrigger Interrupt Enable Mask */
#define TCC_INTENSET_TRG                    TCC_INTENSET_TRG_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENSET_TRG_Msk instead */
#define TCC_INTENSET_CNT_Pos                2                                              /**< (TCC_INTENSET) Counter Interrupt Enable Position */
#define TCC_INTENSET_CNT_Msk                (_U_(0x1) << TCC_INTENSET_CNT_Pos)             /**< (TCC_INTENSET) Counter Interrupt Enable Mask */
#define TCC_INTENSET_CNT                    TCC_INTENSET_CNT_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENSET_CNT_Msk instead */
#define TCC_INTENSET_ERR_Pos                3                                              /**< (TCC_INTENSET) Error Interrupt Enable Position */
#define TCC_INTENSET_ERR_Msk                (_U_(0x1) << TCC_INTENSET_ERR_Pos)             /**< (TCC_INTENSET) Error Interrupt Enable Mask */
#define TCC_INTENSET_ERR                    TCC_INTENSET_ERR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENSET_ERR_Msk instead */
#define TCC_INTENSET_UFS_Pos                10                                             /**< (TCC_INTENSET) Non-Recoverable Update Fault Interrupt Enable Position */
#define TCC_INTENSET_UFS_Msk                (_U_(0x1) << TCC_INTENSET_UFS_Pos)             /**< (TCC_INTENSET) Non-Recoverable Update Fault Interrupt Enable Mask */
#define TCC_INTENSET_UFS                    TCC_INTENSET_UFS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENSET_UFS_Msk instead */
#define TCC_INTENSET_DFS_Pos                11                                             /**< (TCC_INTENSET) Non-Recoverable Debug Fault Interrupt Enable Position */
#define TCC_INTENSET_DFS_Msk                (_U_(0x1) << TCC_INTENSET_DFS_Pos)             /**< (TCC_INTENSET) Non-Recoverable Debug Fault Interrupt Enable Mask */
#define TCC_INTENSET_DFS                    TCC_INTENSET_DFS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENSET_DFS_Msk instead */
#define TCC_INTENSET_FAULTA_Pos             12                                             /**< (TCC_INTENSET) Recoverable Fault A Interrupt Enable Position */
#define TCC_INTENSET_FAULTA_Msk             (_U_(0x1) << TCC_INTENSET_FAULTA_Pos)          /**< (TCC_INTENSET) Recoverable Fault A Interrupt Enable Mask */
#define TCC_INTENSET_FAULTA                 TCC_INTENSET_FAULTA_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENSET_FAULTA_Msk instead */
#define TCC_INTENSET_FAULTB_Pos             13                                             /**< (TCC_INTENSET) Recoverable Fault B Interrupt Enable Position */
#define TCC_INTENSET_FAULTB_Msk             (_U_(0x1) << TCC_INTENSET_FAULTB_Pos)          /**< (TCC_INTENSET) Recoverable Fault B Interrupt Enable Mask */
#define TCC_INTENSET_FAULTB                 TCC_INTENSET_FAULTB_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENSET_FAULTB_Msk instead */
#define TCC_INTENSET_FAULT0_Pos             14                                             /**< (TCC_INTENSET) Non-Recoverable Fault 0 Interrupt Enable Position */
#define TCC_INTENSET_FAULT0_Msk             (_U_(0x1) << TCC_INTENSET_FAULT0_Pos)          /**< (TCC_INTENSET) Non-Recoverable Fault 0 Interrupt Enable Mask */
#define TCC_INTENSET_FAULT0                 TCC_INTENSET_FAULT0_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENSET_FAULT0_Msk instead */
#define TCC_INTENSET_FAULT1_Pos             15                                             /**< (TCC_INTENSET) Non-Recoverable Fault 1 Interrupt Enable Position */
#define TCC_INTENSET_FAULT1_Msk             (_U_(0x1) << TCC_INTENSET_FAULT1_Pos)          /**< (TCC_INTENSET) Non-Recoverable Fault 1 Interrupt Enable Mask */
#define TCC_INTENSET_FAULT1                 TCC_INTENSET_FAULT1_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENSET_FAULT1_Msk instead */
#define TCC_INTENSET_MC0_Pos                16                                             /**< (TCC_INTENSET) Match or Capture Channel 0 Interrupt Enable Position */
#define TCC_INTENSET_MC0_Msk                (_U_(0x1) << TCC_INTENSET_MC0_Pos)             /**< (TCC_INTENSET) Match or Capture Channel 0 Interrupt Enable Mask */
#define TCC_INTENSET_MC0                    TCC_INTENSET_MC0_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENSET_MC0_Msk instead */
#define TCC_INTENSET_MC1_Pos                17                                             /**< (TCC_INTENSET) Match or Capture Channel 1 Interrupt Enable Position */
#define TCC_INTENSET_MC1_Msk                (_U_(0x1) << TCC_INTENSET_MC1_Pos)             /**< (TCC_INTENSET) Match or Capture Channel 1 Interrupt Enable Mask */
#define TCC_INTENSET_MC1                    TCC_INTENSET_MC1_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENSET_MC1_Msk instead */
#define TCC_INTENSET_MC2_Pos                18                                             /**< (TCC_INTENSET) Match or Capture Channel 2 Interrupt Enable Position */
#define TCC_INTENSET_MC2_Msk                (_U_(0x1) << TCC_INTENSET_MC2_Pos)             /**< (TCC_INTENSET) Match or Capture Channel 2 Interrupt Enable Mask */
#define TCC_INTENSET_MC2                    TCC_INTENSET_MC2_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENSET_MC2_Msk instead */
#define TCC_INTENSET_MC3_Pos                19                                             /**< (TCC_INTENSET) Match or Capture Channel 3 Interrupt Enable Position */
#define TCC_INTENSET_MC3_Msk                (_U_(0x1) << TCC_INTENSET_MC3_Pos)             /**< (TCC_INTENSET) Match or Capture Channel 3 Interrupt Enable Mask */
#define TCC_INTENSET_MC3                    TCC_INTENSET_MC3_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTENSET_MC3_Msk instead */
#define TCC_INTENSET_MASK                   _U_(0xFFC0F)                                   /**< \deprecated (TCC_INTENSET) Register MASK  (Use TCC_INTENSET_Msk instead)  */
#define TCC_INTENSET_Msk                    _U_(0xFFC0F)                                   /**< (TCC_INTENSET) Register Mask  */

#define TCC_INTENSET_FAULT_Pos              14                                             /**< (TCC_INTENSET Position) Non-Recoverable Fault x Interrupt Enable */
#define TCC_INTENSET_FAULT_Msk              (_U_(0x3) << TCC_INTENSET_FAULT_Pos)           /**< (TCC_INTENSET Mask) FAULT */
#define TCC_INTENSET_FAULT(value)           (TCC_INTENSET_FAULT_Msk & ((value) << TCC_INTENSET_FAULT_Pos))  
#define TCC_INTENSET_MC_Pos                 16                                             /**< (TCC_INTENSET Position) Match or Capture Channel 3 Interrupt Enable */
#define TCC_INTENSET_MC_Msk                 (_U_(0xF) << TCC_INTENSET_MC_Pos)              /**< (TCC_INTENSET Mask) MC */
#define TCC_INTENSET_MC(value)              (TCC_INTENSET_MC_Msk & ((value) << TCC_INTENSET_MC_Pos))  

/* -------- TCC_INTFLAG : (TCC Offset: 0x2c) (R/W 32) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t OVF:1;                     /**< bit:      0  Overflow                                 */
    __I uint32_t TRG:1;                     /**< bit:      1  Retrigger                                */
    __I uint32_t CNT:1;                     /**< bit:      2  Counter                                  */
    __I uint32_t ERR:1;                     /**< bit:      3  Error                                    */
    __I uint32_t :6;                        /**< bit:   4..9  Reserved */
    __I uint32_t UFS:1;                     /**< bit:     10  Non-Recoverable Update Fault             */
    __I uint32_t DFS:1;                     /**< bit:     11  Non-Recoverable Debug Fault              */
    __I uint32_t FAULTA:1;                  /**< bit:     12  Recoverable Fault A                      */
    __I uint32_t FAULTB:1;                  /**< bit:     13  Recoverable Fault B                      */
    __I uint32_t FAULT0:1;                  /**< bit:     14  Non-Recoverable Fault 0                  */
    __I uint32_t FAULT1:1;                  /**< bit:     15  Non-Recoverable Fault 1                  */
    __I uint32_t MC0:1;                     /**< bit:     16  Match or Capture 0                       */
    __I uint32_t MC1:1;                     /**< bit:     17  Match or Capture 1                       */
    __I uint32_t MC2:1;                     /**< bit:     18  Match or Capture 2                       */
    __I uint32_t MC3:1;                     /**< bit:     19  Match or Capture 3                       */
    __I uint32_t :12;                       /**< bit: 20..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    __I uint32_t :14;                       /**< bit:  0..13  Reserved */
    __I uint32_t FAULT:2;                   /**< bit: 14..15  Non-Recoverable Fault x                  */
    __I uint32_t MC:4;                      /**< bit: 16..19  Match or Capture 3                       */
    __I uint32_t :12;                       /**< bit: 20..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} TCC_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_INTFLAG_OFFSET                  (0x2C)                                        /**<  (TCC_INTFLAG) Interrupt Flag Status and Clear  Offset */
#define TCC_INTFLAG_RESETVALUE              _U_(0x00)                                     /**<  (TCC_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define TCC_INTFLAG_OVF_Pos                 0                                              /**< (TCC_INTFLAG) Overflow Position */
#define TCC_INTFLAG_OVF_Msk                 (_U_(0x1) << TCC_INTFLAG_OVF_Pos)              /**< (TCC_INTFLAG) Overflow Mask */
#define TCC_INTFLAG_OVF                     TCC_INTFLAG_OVF_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTFLAG_OVF_Msk instead */
#define TCC_INTFLAG_TRG_Pos                 1                                              /**< (TCC_INTFLAG) Retrigger Position */
#define TCC_INTFLAG_TRG_Msk                 (_U_(0x1) << TCC_INTFLAG_TRG_Pos)              /**< (TCC_INTFLAG) Retrigger Mask */
#define TCC_INTFLAG_TRG                     TCC_INTFLAG_TRG_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTFLAG_TRG_Msk instead */
#define TCC_INTFLAG_CNT_Pos                 2                                              /**< (TCC_INTFLAG) Counter Position */
#define TCC_INTFLAG_CNT_Msk                 (_U_(0x1) << TCC_INTFLAG_CNT_Pos)              /**< (TCC_INTFLAG) Counter Mask */
#define TCC_INTFLAG_CNT                     TCC_INTFLAG_CNT_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTFLAG_CNT_Msk instead */
#define TCC_INTFLAG_ERR_Pos                 3                                              /**< (TCC_INTFLAG) Error Position */
#define TCC_INTFLAG_ERR_Msk                 (_U_(0x1) << TCC_INTFLAG_ERR_Pos)              /**< (TCC_INTFLAG) Error Mask */
#define TCC_INTFLAG_ERR                     TCC_INTFLAG_ERR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTFLAG_ERR_Msk instead */
#define TCC_INTFLAG_UFS_Pos                 10                                             /**< (TCC_INTFLAG) Non-Recoverable Update Fault Position */
#define TCC_INTFLAG_UFS_Msk                 (_U_(0x1) << TCC_INTFLAG_UFS_Pos)              /**< (TCC_INTFLAG) Non-Recoverable Update Fault Mask */
#define TCC_INTFLAG_UFS                     TCC_INTFLAG_UFS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTFLAG_UFS_Msk instead */
#define TCC_INTFLAG_DFS_Pos                 11                                             /**< (TCC_INTFLAG) Non-Recoverable Debug Fault Position */
#define TCC_INTFLAG_DFS_Msk                 (_U_(0x1) << TCC_INTFLAG_DFS_Pos)              /**< (TCC_INTFLAG) Non-Recoverable Debug Fault Mask */
#define TCC_INTFLAG_DFS                     TCC_INTFLAG_DFS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTFLAG_DFS_Msk instead */
#define TCC_INTFLAG_FAULTA_Pos              12                                             /**< (TCC_INTFLAG) Recoverable Fault A Position */
#define TCC_INTFLAG_FAULTA_Msk              (_U_(0x1) << TCC_INTFLAG_FAULTA_Pos)           /**< (TCC_INTFLAG) Recoverable Fault A Mask */
#define TCC_INTFLAG_FAULTA                  TCC_INTFLAG_FAULTA_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTFLAG_FAULTA_Msk instead */
#define TCC_INTFLAG_FAULTB_Pos              13                                             /**< (TCC_INTFLAG) Recoverable Fault B Position */
#define TCC_INTFLAG_FAULTB_Msk              (_U_(0x1) << TCC_INTFLAG_FAULTB_Pos)           /**< (TCC_INTFLAG) Recoverable Fault B Mask */
#define TCC_INTFLAG_FAULTB                  TCC_INTFLAG_FAULTB_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTFLAG_FAULTB_Msk instead */
#define TCC_INTFLAG_FAULT0_Pos              14                                             /**< (TCC_INTFLAG) Non-Recoverable Fault 0 Position */
#define TCC_INTFLAG_FAULT0_Msk              (_U_(0x1) << TCC_INTFLAG_FAULT0_Pos)           /**< (TCC_INTFLAG) Non-Recoverable Fault 0 Mask */
#define TCC_INTFLAG_FAULT0                  TCC_INTFLAG_FAULT0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTFLAG_FAULT0_Msk instead */
#define TCC_INTFLAG_FAULT1_Pos              15                                             /**< (TCC_INTFLAG) Non-Recoverable Fault 1 Position */
#define TCC_INTFLAG_FAULT1_Msk              (_U_(0x1) << TCC_INTFLAG_FAULT1_Pos)           /**< (TCC_INTFLAG) Non-Recoverable Fault 1 Mask */
#define TCC_INTFLAG_FAULT1                  TCC_INTFLAG_FAULT1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTFLAG_FAULT1_Msk instead */
#define TCC_INTFLAG_MC0_Pos                 16                                             /**< (TCC_INTFLAG) Match or Capture 0 Position */
#define TCC_INTFLAG_MC0_Msk                 (_U_(0x1) << TCC_INTFLAG_MC0_Pos)              /**< (TCC_INTFLAG) Match or Capture 0 Mask */
#define TCC_INTFLAG_MC0                     TCC_INTFLAG_MC0_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTFLAG_MC0_Msk instead */
#define TCC_INTFLAG_MC1_Pos                 17                                             /**< (TCC_INTFLAG) Match or Capture 1 Position */
#define TCC_INTFLAG_MC1_Msk                 (_U_(0x1) << TCC_INTFLAG_MC1_Pos)              /**< (TCC_INTFLAG) Match or Capture 1 Mask */
#define TCC_INTFLAG_MC1                     TCC_INTFLAG_MC1_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTFLAG_MC1_Msk instead */
#define TCC_INTFLAG_MC2_Pos                 18                                             /**< (TCC_INTFLAG) Match or Capture 2 Position */
#define TCC_INTFLAG_MC2_Msk                 (_U_(0x1) << TCC_INTFLAG_MC2_Pos)              /**< (TCC_INTFLAG) Match or Capture 2 Mask */
#define TCC_INTFLAG_MC2                     TCC_INTFLAG_MC2_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTFLAG_MC2_Msk instead */
#define TCC_INTFLAG_MC3_Pos                 19                                             /**< (TCC_INTFLAG) Match or Capture 3 Position */
#define TCC_INTFLAG_MC3_Msk                 (_U_(0x1) << TCC_INTFLAG_MC3_Pos)              /**< (TCC_INTFLAG) Match or Capture 3 Mask */
#define TCC_INTFLAG_MC3                     TCC_INTFLAG_MC3_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_INTFLAG_MC3_Msk instead */
#define TCC_INTFLAG_MASK                    _U_(0xFFC0F)                                   /**< \deprecated (TCC_INTFLAG) Register MASK  (Use TCC_INTFLAG_Msk instead)  */
#define TCC_INTFLAG_Msk                     _U_(0xFFC0F)                                   /**< (TCC_INTFLAG) Register Mask  */

#define TCC_INTFLAG_FAULT_Pos               14                                             /**< (TCC_INTFLAG Position) Non-Recoverable Fault x */
#define TCC_INTFLAG_FAULT_Msk               (_U_(0x3) << TCC_INTFLAG_FAULT_Pos)            /**< (TCC_INTFLAG Mask) FAULT */
#define TCC_INTFLAG_FAULT(value)            (TCC_INTFLAG_FAULT_Msk & ((value) << TCC_INTFLAG_FAULT_Pos))  
#define TCC_INTFLAG_MC_Pos                  16                                             /**< (TCC_INTFLAG Position) Match or Capture 3 */
#define TCC_INTFLAG_MC_Msk                  (_U_(0xF) << TCC_INTFLAG_MC_Pos)               /**< (TCC_INTFLAG Mask) MC */
#define TCC_INTFLAG_MC(value)               (TCC_INTFLAG_MC_Msk & ((value) << TCC_INTFLAG_MC_Pos))  

/* -------- TCC_STATUS : (TCC Offset: 0x30) (R/W 32) Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t STOP:1;                    /**< bit:      0  Stop                                     */
    uint32_t IDX:1;                     /**< bit:      1  Ramp                                     */
    uint32_t UFS:1;                     /**< bit:      2  Non-recoverable Update Fault State       */
    uint32_t DFS:1;                     /**< bit:      3  Non-Recoverable Debug Fault State        */
    uint32_t SLAVE:1;                   /**< bit:      4  Slave                                    */
    uint32_t PATTBUFV:1;                /**< bit:      5  Pattern Buffer Valid                     */
    uint32_t :1;                        /**< bit:      6  Reserved */
    uint32_t PERBUFV:1;                 /**< bit:      7  Period Buffer Valid                      */
    uint32_t FAULTAIN:1;                /**< bit:      8  Recoverable Fault A Input                */
    uint32_t FAULTBIN:1;                /**< bit:      9  Recoverable Fault B Input                */
    uint32_t FAULT0IN:1;                /**< bit:     10  Non-Recoverable Fault0 Input             */
    uint32_t FAULT1IN:1;                /**< bit:     11  Non-Recoverable Fault1 Input             */
    uint32_t FAULTA:1;                  /**< bit:     12  Recoverable Fault A State                */
    uint32_t FAULTB:1;                  /**< bit:     13  Recoverable Fault B State                */
    uint32_t FAULT0:1;                  /**< bit:     14  Non-Recoverable Fault 0 State            */
    uint32_t FAULT1:1;                  /**< bit:     15  Non-Recoverable Fault 1 State            */
    uint32_t CCBUFV0:1;                 /**< bit:     16  Compare Channel 0 Buffer Valid           */
    uint32_t CCBUFV1:1;                 /**< bit:     17  Compare Channel 1 Buffer Valid           */
    uint32_t CCBUFV2:1;                 /**< bit:     18  Compare Channel 2 Buffer Valid           */
    uint32_t CCBUFV3:1;                 /**< bit:     19  Compare Channel 3 Buffer Valid           */
    uint32_t :4;                        /**< bit: 20..23  Reserved */
    uint32_t CMP0:1;                    /**< bit:     24  Compare Channel 0 Value                  */
    uint32_t CMP1:1;                    /**< bit:     25  Compare Channel 1 Value                  */
    uint32_t CMP2:1;                    /**< bit:     26  Compare Channel 2 Value                  */
    uint32_t CMP3:1;                    /**< bit:     27  Compare Channel 3 Value                  */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :14;                       /**< bit:  0..13  Reserved */
    uint32_t FAULT:2;                   /**< bit: 14..15  Non-Recoverable Fault x State            */
    uint32_t CCBUFV:4;                  /**< bit: 16..19  Compare Channel x Buffer Valid           */
    uint32_t :4;                        /**< bit: 20..23  Reserved */
    uint32_t CMP:4;                     /**< bit: 24..27  Compare Channel 3 Value                  */
    uint32_t :4;                        /**< bit: 28..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} TCC_STATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_STATUS_OFFSET                   (0x30)                                        /**<  (TCC_STATUS) Status  Offset */
#define TCC_STATUS_RESETVALUE               _U_(0x01)                                     /**<  (TCC_STATUS) Status  Reset Value */

#define TCC_STATUS_STOP_Pos                 0                                              /**< (TCC_STATUS) Stop Position */
#define TCC_STATUS_STOP_Msk                 (_U_(0x1) << TCC_STATUS_STOP_Pos)              /**< (TCC_STATUS) Stop Mask */
#define TCC_STATUS_STOP                     TCC_STATUS_STOP_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_STOP_Msk instead */
#define TCC_STATUS_IDX_Pos                  1                                              /**< (TCC_STATUS) Ramp Position */
#define TCC_STATUS_IDX_Msk                  (_U_(0x1) << TCC_STATUS_IDX_Pos)               /**< (TCC_STATUS) Ramp Mask */
#define TCC_STATUS_IDX                      TCC_STATUS_IDX_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_IDX_Msk instead */
#define TCC_STATUS_UFS_Pos                  2                                              /**< (TCC_STATUS) Non-recoverable Update Fault State Position */
#define TCC_STATUS_UFS_Msk                  (_U_(0x1) << TCC_STATUS_UFS_Pos)               /**< (TCC_STATUS) Non-recoverable Update Fault State Mask */
#define TCC_STATUS_UFS                      TCC_STATUS_UFS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_UFS_Msk instead */
#define TCC_STATUS_DFS_Pos                  3                                              /**< (TCC_STATUS) Non-Recoverable Debug Fault State Position */
#define TCC_STATUS_DFS_Msk                  (_U_(0x1) << TCC_STATUS_DFS_Pos)               /**< (TCC_STATUS) Non-Recoverable Debug Fault State Mask */
#define TCC_STATUS_DFS                      TCC_STATUS_DFS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_DFS_Msk instead */
#define TCC_STATUS_SLAVE_Pos                4                                              /**< (TCC_STATUS) Slave Position */
#define TCC_STATUS_SLAVE_Msk                (_U_(0x1) << TCC_STATUS_SLAVE_Pos)             /**< (TCC_STATUS) Slave Mask */
#define TCC_STATUS_SLAVE                    TCC_STATUS_SLAVE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_SLAVE_Msk instead */
#define TCC_STATUS_PATTBUFV_Pos             5                                              /**< (TCC_STATUS) Pattern Buffer Valid Position */
#define TCC_STATUS_PATTBUFV_Msk             (_U_(0x1) << TCC_STATUS_PATTBUFV_Pos)          /**< (TCC_STATUS) Pattern Buffer Valid Mask */
#define TCC_STATUS_PATTBUFV                 TCC_STATUS_PATTBUFV_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_PATTBUFV_Msk instead */
#define TCC_STATUS_PERBUFV_Pos              7                                              /**< (TCC_STATUS) Period Buffer Valid Position */
#define TCC_STATUS_PERBUFV_Msk              (_U_(0x1) << TCC_STATUS_PERBUFV_Pos)           /**< (TCC_STATUS) Period Buffer Valid Mask */
#define TCC_STATUS_PERBUFV                  TCC_STATUS_PERBUFV_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_PERBUFV_Msk instead */
#define TCC_STATUS_FAULTAIN_Pos             8                                              /**< (TCC_STATUS) Recoverable Fault A Input Position */
#define TCC_STATUS_FAULTAIN_Msk             (_U_(0x1) << TCC_STATUS_FAULTAIN_Pos)          /**< (TCC_STATUS) Recoverable Fault A Input Mask */
#define TCC_STATUS_FAULTAIN                 TCC_STATUS_FAULTAIN_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_FAULTAIN_Msk instead */
#define TCC_STATUS_FAULTBIN_Pos             9                                              /**< (TCC_STATUS) Recoverable Fault B Input Position */
#define TCC_STATUS_FAULTBIN_Msk             (_U_(0x1) << TCC_STATUS_FAULTBIN_Pos)          /**< (TCC_STATUS) Recoverable Fault B Input Mask */
#define TCC_STATUS_FAULTBIN                 TCC_STATUS_FAULTBIN_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_FAULTBIN_Msk instead */
#define TCC_STATUS_FAULT0IN_Pos             10                                             /**< (TCC_STATUS) Non-Recoverable Fault0 Input Position */
#define TCC_STATUS_FAULT0IN_Msk             (_U_(0x1) << TCC_STATUS_FAULT0IN_Pos)          /**< (TCC_STATUS) Non-Recoverable Fault0 Input Mask */
#define TCC_STATUS_FAULT0IN                 TCC_STATUS_FAULT0IN_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_FAULT0IN_Msk instead */
#define TCC_STATUS_FAULT1IN_Pos             11                                             /**< (TCC_STATUS) Non-Recoverable Fault1 Input Position */
#define TCC_STATUS_FAULT1IN_Msk             (_U_(0x1) << TCC_STATUS_FAULT1IN_Pos)          /**< (TCC_STATUS) Non-Recoverable Fault1 Input Mask */
#define TCC_STATUS_FAULT1IN                 TCC_STATUS_FAULT1IN_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_FAULT1IN_Msk instead */
#define TCC_STATUS_FAULTA_Pos               12                                             /**< (TCC_STATUS) Recoverable Fault A State Position */
#define TCC_STATUS_FAULTA_Msk               (_U_(0x1) << TCC_STATUS_FAULTA_Pos)            /**< (TCC_STATUS) Recoverable Fault A State Mask */
#define TCC_STATUS_FAULTA                   TCC_STATUS_FAULTA_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_FAULTA_Msk instead */
#define TCC_STATUS_FAULTB_Pos               13                                             /**< (TCC_STATUS) Recoverable Fault B State Position */
#define TCC_STATUS_FAULTB_Msk               (_U_(0x1) << TCC_STATUS_FAULTB_Pos)            /**< (TCC_STATUS) Recoverable Fault B State Mask */
#define TCC_STATUS_FAULTB                   TCC_STATUS_FAULTB_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_FAULTB_Msk instead */
#define TCC_STATUS_FAULT0_Pos               14                                             /**< (TCC_STATUS) Non-Recoverable Fault 0 State Position */
#define TCC_STATUS_FAULT0_Msk               (_U_(0x1) << TCC_STATUS_FAULT0_Pos)            /**< (TCC_STATUS) Non-Recoverable Fault 0 State Mask */
#define TCC_STATUS_FAULT0                   TCC_STATUS_FAULT0_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_FAULT0_Msk instead */
#define TCC_STATUS_FAULT1_Pos               15                                             /**< (TCC_STATUS) Non-Recoverable Fault 1 State Position */
#define TCC_STATUS_FAULT1_Msk               (_U_(0x1) << TCC_STATUS_FAULT1_Pos)            /**< (TCC_STATUS) Non-Recoverable Fault 1 State Mask */
#define TCC_STATUS_FAULT1                   TCC_STATUS_FAULT1_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_FAULT1_Msk instead */
#define TCC_STATUS_CCBUFV0_Pos              16                                             /**< (TCC_STATUS) Compare Channel 0 Buffer Valid Position */
#define TCC_STATUS_CCBUFV0_Msk              (_U_(0x1) << TCC_STATUS_CCBUFV0_Pos)           /**< (TCC_STATUS) Compare Channel 0 Buffer Valid Mask */
#define TCC_STATUS_CCBUFV0                  TCC_STATUS_CCBUFV0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_CCBUFV0_Msk instead */
#define TCC_STATUS_CCBUFV1_Pos              17                                             /**< (TCC_STATUS) Compare Channel 1 Buffer Valid Position */
#define TCC_STATUS_CCBUFV1_Msk              (_U_(0x1) << TCC_STATUS_CCBUFV1_Pos)           /**< (TCC_STATUS) Compare Channel 1 Buffer Valid Mask */
#define TCC_STATUS_CCBUFV1                  TCC_STATUS_CCBUFV1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_CCBUFV1_Msk instead */
#define TCC_STATUS_CCBUFV2_Pos              18                                             /**< (TCC_STATUS) Compare Channel 2 Buffer Valid Position */
#define TCC_STATUS_CCBUFV2_Msk              (_U_(0x1) << TCC_STATUS_CCBUFV2_Pos)           /**< (TCC_STATUS) Compare Channel 2 Buffer Valid Mask */
#define TCC_STATUS_CCBUFV2                  TCC_STATUS_CCBUFV2_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_CCBUFV2_Msk instead */
#define TCC_STATUS_CCBUFV3_Pos              19                                             /**< (TCC_STATUS) Compare Channel 3 Buffer Valid Position */
#define TCC_STATUS_CCBUFV3_Msk              (_U_(0x1) << TCC_STATUS_CCBUFV3_Pos)           /**< (TCC_STATUS) Compare Channel 3 Buffer Valid Mask */
#define TCC_STATUS_CCBUFV3                  TCC_STATUS_CCBUFV3_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_CCBUFV3_Msk instead */
#define TCC_STATUS_CMP0_Pos                 24                                             /**< (TCC_STATUS) Compare Channel 0 Value Position */
#define TCC_STATUS_CMP0_Msk                 (_U_(0x1) << TCC_STATUS_CMP0_Pos)              /**< (TCC_STATUS) Compare Channel 0 Value Mask */
#define TCC_STATUS_CMP0                     TCC_STATUS_CMP0_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_CMP0_Msk instead */
#define TCC_STATUS_CMP1_Pos                 25                                             /**< (TCC_STATUS) Compare Channel 1 Value Position */
#define TCC_STATUS_CMP1_Msk                 (_U_(0x1) << TCC_STATUS_CMP1_Pos)              /**< (TCC_STATUS) Compare Channel 1 Value Mask */
#define TCC_STATUS_CMP1                     TCC_STATUS_CMP1_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_CMP1_Msk instead */
#define TCC_STATUS_CMP2_Pos                 26                                             /**< (TCC_STATUS) Compare Channel 2 Value Position */
#define TCC_STATUS_CMP2_Msk                 (_U_(0x1) << TCC_STATUS_CMP2_Pos)              /**< (TCC_STATUS) Compare Channel 2 Value Mask */
#define TCC_STATUS_CMP2                     TCC_STATUS_CMP2_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_CMP2_Msk instead */
#define TCC_STATUS_CMP3_Pos                 27                                             /**< (TCC_STATUS) Compare Channel 3 Value Position */
#define TCC_STATUS_CMP3_Msk                 (_U_(0x1) << TCC_STATUS_CMP3_Pos)              /**< (TCC_STATUS) Compare Channel 3 Value Mask */
#define TCC_STATUS_CMP3                     TCC_STATUS_CMP3_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_STATUS_CMP3_Msk instead */
#define TCC_STATUS_MASK                     _U_(0xF0FFFBF)                                 /**< \deprecated (TCC_STATUS) Register MASK  (Use TCC_STATUS_Msk instead)  */
#define TCC_STATUS_Msk                      _U_(0xF0FFFBF)                                 /**< (TCC_STATUS) Register Mask  */

#define TCC_STATUS_FAULT_Pos                14                                             /**< (TCC_STATUS Position) Non-Recoverable Fault x State */
#define TCC_STATUS_FAULT_Msk                (_U_(0x3) << TCC_STATUS_FAULT_Pos)             /**< (TCC_STATUS Mask) FAULT */
#define TCC_STATUS_FAULT(value)             (TCC_STATUS_FAULT_Msk & ((value) << TCC_STATUS_FAULT_Pos))  
#define TCC_STATUS_CCBUFV_Pos               16                                             /**< (TCC_STATUS Position) Compare Channel x Buffer Valid */
#define TCC_STATUS_CCBUFV_Msk               (_U_(0xF) << TCC_STATUS_CCBUFV_Pos)            /**< (TCC_STATUS Mask) CCBUFV */
#define TCC_STATUS_CCBUFV(value)            (TCC_STATUS_CCBUFV_Msk & ((value) << TCC_STATUS_CCBUFV_Pos))  
#define TCC_STATUS_CMP_Pos                  24                                             /**< (TCC_STATUS Position) Compare Channel 3 Value */
#define TCC_STATUS_CMP_Msk                  (_U_(0xF) << TCC_STATUS_CMP_Pos)               /**< (TCC_STATUS Mask) CMP */
#define TCC_STATUS_CMP(value)               (TCC_STATUS_CMP_Msk & ((value) << TCC_STATUS_CMP_Pos))  

/* -------- TCC_COUNT : (TCC Offset: 0x34) (R/W 32) Count -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t COUNT:24;                  /**< bit:  0..23  Counter Value                            */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // DITH4 mode
    uint32_t :4;                        /**< bit:   0..3  Reserved */
    uint32_t COUNT:20;                  /**< bit:  4..23  Counter Value                            */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } DITH4;                                /**< Structure used for DITH4 mode access */
  struct { // DITH5 mode
    uint32_t :5;                        /**< bit:   0..4  Reserved */
    uint32_t COUNT:19;                  /**< bit:  5..23  Counter Value                            */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } DITH5;                                /**< Structure used for DITH5 mode access */
  struct { // DITH6 mode
    uint32_t :6;                        /**< bit:   0..5  Reserved */
    uint32_t COUNT:18;                  /**< bit:  6..23  Counter Value                            */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } DITH6;                                /**< Structure used for DITH6 mode access */
  uint32_t reg;                         /**< Type used for register access */
} TCC_COUNT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_COUNT_OFFSET                    (0x34)                                        /**<  (TCC_COUNT) Count  Offset */
#define TCC_COUNT_RESETVALUE                _U_(0x00)                                     /**<  (TCC_COUNT) Count  Reset Value */

#define TCC_COUNT_COUNT_Pos                 0                                              /**< (TCC_COUNT) Counter Value Position */
#define TCC_COUNT_COUNT_Msk                 (_U_(0xFFFFFF) << TCC_COUNT_COUNT_Pos)         /**< (TCC_COUNT) Counter Value Mask */
#define TCC_COUNT_COUNT(value)              (TCC_COUNT_COUNT_Msk & ((value) << TCC_COUNT_COUNT_Pos))
#define TCC_COUNT_MASK                      _U_(0xFFFFFF)                                  /**< \deprecated (TCC_COUNT) Register MASK  (Use TCC_COUNT_Msk instead)  */
#define TCC_COUNT_Msk                       _U_(0xFFFFFF)                                  /**< (TCC_COUNT) Register Mask  */

/* DITH4 mode */
#define TCC_COUNT_DITH4_COUNT_Pos           4                                              /**< (TCC_COUNT) Counter Value Position */
#define TCC_COUNT_DITH4_COUNT_Msk           (_U_(0xFFFFF) << TCC_COUNT_DITH4_COUNT_Pos)    /**< (TCC_COUNT) Counter Value Mask */
#define TCC_COUNT_DITH4_COUNT(value)        (TCC_COUNT_DITH4_COUNT_Msk & ((value) << TCC_COUNT_DITH4_COUNT_Pos))
#define TCC_COUNT_DITH4_MASK                _U_(0xFFFFF0)                                  /**< \deprecated (TCC_COUNT_DITH4) Register MASK  (Use TCC_COUNT_DITH4_Msk instead)  */
#define TCC_COUNT_DITH4_Msk                 _U_(0xFFFFF0)                                  /**< (TCC_COUNT_DITH4) Register Mask  */

/* DITH5 mode */
#define TCC_COUNT_DITH5_COUNT_Pos           5                                              /**< (TCC_COUNT) Counter Value Position */
#define TCC_COUNT_DITH5_COUNT_Msk           (_U_(0x7FFFF) << TCC_COUNT_DITH5_COUNT_Pos)    /**< (TCC_COUNT) Counter Value Mask */
#define TCC_COUNT_DITH5_COUNT(value)        (TCC_COUNT_DITH5_COUNT_Msk & ((value) << TCC_COUNT_DITH5_COUNT_Pos))
#define TCC_COUNT_DITH5_MASK                _U_(0xFFFFE0)                                  /**< \deprecated (TCC_COUNT_DITH5) Register MASK  (Use TCC_COUNT_DITH5_Msk instead)  */
#define TCC_COUNT_DITH5_Msk                 _U_(0xFFFFE0)                                  /**< (TCC_COUNT_DITH5) Register Mask  */

/* DITH6 mode */
#define TCC_COUNT_DITH6_COUNT_Pos           6                                              /**< (TCC_COUNT) Counter Value Position */
#define TCC_COUNT_DITH6_COUNT_Msk           (_U_(0x3FFFF) << TCC_COUNT_DITH6_COUNT_Pos)    /**< (TCC_COUNT) Counter Value Mask */
#define TCC_COUNT_DITH6_COUNT(value)        (TCC_COUNT_DITH6_COUNT_Msk & ((value) << TCC_COUNT_DITH6_COUNT_Pos))
#define TCC_COUNT_DITH6_MASK                _U_(0xFFFFC0)                                  /**< \deprecated (TCC_COUNT_DITH6) Register MASK  (Use TCC_COUNT_DITH6_Msk instead)  */
#define TCC_COUNT_DITH6_Msk                 _U_(0xFFFFC0)                                  /**< (TCC_COUNT_DITH6) Register Mask  */


/* -------- TCC_PATT : (TCC Offset: 0x38) (R/W 16) Pattern -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t PGE0:1;                    /**< bit:      0  Pattern Generator 0 Output Enable        */
    uint16_t PGE1:1;                    /**< bit:      1  Pattern Generator 1 Output Enable        */
    uint16_t PGE2:1;                    /**< bit:      2  Pattern Generator 2 Output Enable        */
    uint16_t PGE3:1;                    /**< bit:      3  Pattern Generator 3 Output Enable        */
    uint16_t PGE4:1;                    /**< bit:      4  Pattern Generator 4 Output Enable        */
    uint16_t PGE5:1;                    /**< bit:      5  Pattern Generator 5 Output Enable        */
    uint16_t PGE6:1;                    /**< bit:      6  Pattern Generator 6 Output Enable        */
    uint16_t PGE7:1;                    /**< bit:      7  Pattern Generator 7 Output Enable        */
    uint16_t PGV0:1;                    /**< bit:      8  Pattern Generator 0 Output Value         */
    uint16_t PGV1:1;                    /**< bit:      9  Pattern Generator 1 Output Value         */
    uint16_t PGV2:1;                    /**< bit:     10  Pattern Generator 2 Output Value         */
    uint16_t PGV3:1;                    /**< bit:     11  Pattern Generator 3 Output Value         */
    uint16_t PGV4:1;                    /**< bit:     12  Pattern Generator 4 Output Value         */
    uint16_t PGV5:1;                    /**< bit:     13  Pattern Generator 5 Output Value         */
    uint16_t PGV6:1;                    /**< bit:     14  Pattern Generator 6 Output Value         */
    uint16_t PGV7:1;                    /**< bit:     15  Pattern Generator 7 Output Value         */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint16_t PGE:8;                     /**< bit:   0..7  Pattern Generator x Output Enable        */
    uint16_t PGV:8;                     /**< bit:  8..15  Pattern Generator 7 Output Value         */
  } vec;                                /**< Structure used for vec  access  */
  uint16_t reg;                         /**< Type used for register access */
} TCC_PATT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_PATT_OFFSET                     (0x38)                                        /**<  (TCC_PATT) Pattern  Offset */
#define TCC_PATT_RESETVALUE                 _U_(0x00)                                     /**<  (TCC_PATT) Pattern  Reset Value */

#define TCC_PATT_PGE0_Pos                   0                                              /**< (TCC_PATT) Pattern Generator 0 Output Enable Position */
#define TCC_PATT_PGE0_Msk                   (_U_(0x1) << TCC_PATT_PGE0_Pos)                /**< (TCC_PATT) Pattern Generator 0 Output Enable Mask */
#define TCC_PATT_PGE0                       TCC_PATT_PGE0_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATT_PGE0_Msk instead */
#define TCC_PATT_PGE1_Pos                   1                                              /**< (TCC_PATT) Pattern Generator 1 Output Enable Position */
#define TCC_PATT_PGE1_Msk                   (_U_(0x1) << TCC_PATT_PGE1_Pos)                /**< (TCC_PATT) Pattern Generator 1 Output Enable Mask */
#define TCC_PATT_PGE1                       TCC_PATT_PGE1_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATT_PGE1_Msk instead */
#define TCC_PATT_PGE2_Pos                   2                                              /**< (TCC_PATT) Pattern Generator 2 Output Enable Position */
#define TCC_PATT_PGE2_Msk                   (_U_(0x1) << TCC_PATT_PGE2_Pos)                /**< (TCC_PATT) Pattern Generator 2 Output Enable Mask */
#define TCC_PATT_PGE2                       TCC_PATT_PGE2_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATT_PGE2_Msk instead */
#define TCC_PATT_PGE3_Pos                   3                                              /**< (TCC_PATT) Pattern Generator 3 Output Enable Position */
#define TCC_PATT_PGE3_Msk                   (_U_(0x1) << TCC_PATT_PGE3_Pos)                /**< (TCC_PATT) Pattern Generator 3 Output Enable Mask */
#define TCC_PATT_PGE3                       TCC_PATT_PGE3_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATT_PGE3_Msk instead */
#define TCC_PATT_PGE4_Pos                   4                                              /**< (TCC_PATT) Pattern Generator 4 Output Enable Position */
#define TCC_PATT_PGE4_Msk                   (_U_(0x1) << TCC_PATT_PGE4_Pos)                /**< (TCC_PATT) Pattern Generator 4 Output Enable Mask */
#define TCC_PATT_PGE4                       TCC_PATT_PGE4_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATT_PGE4_Msk instead */
#define TCC_PATT_PGE5_Pos                   5                                              /**< (TCC_PATT) Pattern Generator 5 Output Enable Position */
#define TCC_PATT_PGE5_Msk                   (_U_(0x1) << TCC_PATT_PGE5_Pos)                /**< (TCC_PATT) Pattern Generator 5 Output Enable Mask */
#define TCC_PATT_PGE5                       TCC_PATT_PGE5_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATT_PGE5_Msk instead */
#define TCC_PATT_PGE6_Pos                   6                                              /**< (TCC_PATT) Pattern Generator 6 Output Enable Position */
#define TCC_PATT_PGE6_Msk                   (_U_(0x1) << TCC_PATT_PGE6_Pos)                /**< (TCC_PATT) Pattern Generator 6 Output Enable Mask */
#define TCC_PATT_PGE6                       TCC_PATT_PGE6_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATT_PGE6_Msk instead */
#define TCC_PATT_PGE7_Pos                   7                                              /**< (TCC_PATT) Pattern Generator 7 Output Enable Position */
#define TCC_PATT_PGE7_Msk                   (_U_(0x1) << TCC_PATT_PGE7_Pos)                /**< (TCC_PATT) Pattern Generator 7 Output Enable Mask */
#define TCC_PATT_PGE7                       TCC_PATT_PGE7_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATT_PGE7_Msk instead */
#define TCC_PATT_PGV0_Pos                   8                                              /**< (TCC_PATT) Pattern Generator 0 Output Value Position */
#define TCC_PATT_PGV0_Msk                   (_U_(0x1) << TCC_PATT_PGV0_Pos)                /**< (TCC_PATT) Pattern Generator 0 Output Value Mask */
#define TCC_PATT_PGV0                       TCC_PATT_PGV0_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATT_PGV0_Msk instead */
#define TCC_PATT_PGV1_Pos                   9                                              /**< (TCC_PATT) Pattern Generator 1 Output Value Position */
#define TCC_PATT_PGV1_Msk                   (_U_(0x1) << TCC_PATT_PGV1_Pos)                /**< (TCC_PATT) Pattern Generator 1 Output Value Mask */
#define TCC_PATT_PGV1                       TCC_PATT_PGV1_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATT_PGV1_Msk instead */
#define TCC_PATT_PGV2_Pos                   10                                             /**< (TCC_PATT) Pattern Generator 2 Output Value Position */
#define TCC_PATT_PGV2_Msk                   (_U_(0x1) << TCC_PATT_PGV2_Pos)                /**< (TCC_PATT) Pattern Generator 2 Output Value Mask */
#define TCC_PATT_PGV2                       TCC_PATT_PGV2_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATT_PGV2_Msk instead */
#define TCC_PATT_PGV3_Pos                   11                                             /**< (TCC_PATT) Pattern Generator 3 Output Value Position */
#define TCC_PATT_PGV3_Msk                   (_U_(0x1) << TCC_PATT_PGV3_Pos)                /**< (TCC_PATT) Pattern Generator 3 Output Value Mask */
#define TCC_PATT_PGV3                       TCC_PATT_PGV3_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATT_PGV3_Msk instead */
#define TCC_PATT_PGV4_Pos                   12                                             /**< (TCC_PATT) Pattern Generator 4 Output Value Position */
#define TCC_PATT_PGV4_Msk                   (_U_(0x1) << TCC_PATT_PGV4_Pos)                /**< (TCC_PATT) Pattern Generator 4 Output Value Mask */
#define TCC_PATT_PGV4                       TCC_PATT_PGV4_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATT_PGV4_Msk instead */
#define TCC_PATT_PGV5_Pos                   13                                             /**< (TCC_PATT) Pattern Generator 5 Output Value Position */
#define TCC_PATT_PGV5_Msk                   (_U_(0x1) << TCC_PATT_PGV5_Pos)                /**< (TCC_PATT) Pattern Generator 5 Output Value Mask */
#define TCC_PATT_PGV5                       TCC_PATT_PGV5_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATT_PGV5_Msk instead */
#define TCC_PATT_PGV6_Pos                   14                                             /**< (TCC_PATT) Pattern Generator 6 Output Value Position */
#define TCC_PATT_PGV6_Msk                   (_U_(0x1) << TCC_PATT_PGV6_Pos)                /**< (TCC_PATT) Pattern Generator 6 Output Value Mask */
#define TCC_PATT_PGV6                       TCC_PATT_PGV6_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATT_PGV6_Msk instead */
#define TCC_PATT_PGV7_Pos                   15                                             /**< (TCC_PATT) Pattern Generator 7 Output Value Position */
#define TCC_PATT_PGV7_Msk                   (_U_(0x1) << TCC_PATT_PGV7_Pos)                /**< (TCC_PATT) Pattern Generator 7 Output Value Mask */
#define TCC_PATT_PGV7                       TCC_PATT_PGV7_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATT_PGV7_Msk instead */
#define TCC_PATT_MASK                       _U_(0xFFFF)                                    /**< \deprecated (TCC_PATT) Register MASK  (Use TCC_PATT_Msk instead)  */
#define TCC_PATT_Msk                        _U_(0xFFFF)                                    /**< (TCC_PATT) Register Mask  */

#define TCC_PATT_PGE_Pos                    0                                              /**< (TCC_PATT Position) Pattern Generator x Output Enable */
#define TCC_PATT_PGE_Msk                    (_U_(0xFF) << TCC_PATT_PGE_Pos)                /**< (TCC_PATT Mask) PGE */
#define TCC_PATT_PGE(value)                 (TCC_PATT_PGE_Msk & ((value) << TCC_PATT_PGE_Pos))  
#define TCC_PATT_PGV_Pos                    8                                              /**< (TCC_PATT Position) Pattern Generator 7 Output Value */
#define TCC_PATT_PGV_Msk                    (_U_(0xFF) << TCC_PATT_PGV_Pos)                /**< (TCC_PATT Mask) PGV */
#define TCC_PATT_PGV(value)                 (TCC_PATT_PGV_Msk & ((value) << TCC_PATT_PGV_Pos))  

/* -------- TCC_WAVE : (TCC Offset: 0x3c) (R/W 32) Waveform Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t WAVEGEN:3;                 /**< bit:   0..2  Waveform Generation                      */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t RAMP:2;                    /**< bit:   4..5  Ramp Mode                                */
    uint32_t :1;                        /**< bit:      6  Reserved */
    uint32_t CIPEREN:1;                 /**< bit:      7  Circular period Enable                   */
    uint32_t CICCEN0:1;                 /**< bit:      8  Circular Channel 0 Enable                */
    uint32_t CICCEN1:1;                 /**< bit:      9  Circular Channel 1 Enable                */
    uint32_t CICCEN2:1;                 /**< bit:     10  Circular Channel 2 Enable                */
    uint32_t CICCEN3:1;                 /**< bit:     11  Circular Channel 3 Enable                */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t POL0:1;                    /**< bit:     16  Channel 0 Polarity                       */
    uint32_t POL1:1;                    /**< bit:     17  Channel 1 Polarity                       */
    uint32_t POL2:1;                    /**< bit:     18  Channel 2 Polarity                       */
    uint32_t POL3:1;                    /**< bit:     19  Channel 3 Polarity                       */
    uint32_t :4;                        /**< bit: 20..23  Reserved */
    uint32_t SWAP0:1;                   /**< bit:     24  Swap DTI Output Pair 0                   */
    uint32_t SWAP1:1;                   /**< bit:     25  Swap DTI Output Pair 1                   */
    uint32_t SWAP2:1;                   /**< bit:     26  Swap DTI Output Pair 2                   */
    uint32_t SWAP3:1;                   /**< bit:     27  Swap DTI Output Pair 3                   */
    uint32_t :4;                        /**< bit: 28..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t CICCEN:4;                  /**< bit:  8..11  Circular Channel x Enable                */
    uint32_t :4;                        /**< bit: 12..15  Reserved */
    uint32_t POL:4;                     /**< bit: 16..19  Channel x Polarity                       */
    uint32_t :4;                        /**< bit: 20..23  Reserved */
    uint32_t SWAP:4;                    /**< bit: 24..27  Swap DTI Output Pair 3                   */
    uint32_t :4;                        /**< bit: 28..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} TCC_WAVE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_WAVE_OFFSET                     (0x3C)                                        /**<  (TCC_WAVE) Waveform Control  Offset */
#define TCC_WAVE_RESETVALUE                 _U_(0x00)                                     /**<  (TCC_WAVE) Waveform Control  Reset Value */

#define TCC_WAVE_WAVEGEN_Pos                0                                              /**< (TCC_WAVE) Waveform Generation Position */
#define TCC_WAVE_WAVEGEN_Msk                (_U_(0x7) << TCC_WAVE_WAVEGEN_Pos)             /**< (TCC_WAVE) Waveform Generation Mask */
#define TCC_WAVE_WAVEGEN(value)             (TCC_WAVE_WAVEGEN_Msk & ((value) << TCC_WAVE_WAVEGEN_Pos))
#define   TCC_WAVE_WAVEGEN_NFRQ_Val         _U_(0x0)                                       /**< (TCC_WAVE) Normal frequency  */
#define   TCC_WAVE_WAVEGEN_MFRQ_Val         _U_(0x1)                                       /**< (TCC_WAVE) Match frequency  */
#define   TCC_WAVE_WAVEGEN_NPWM_Val         _U_(0x2)                                       /**< (TCC_WAVE) Normal PWM  */
#define   TCC_WAVE_WAVEGEN_DSCRITICAL_Val   _U_(0x4)                                       /**< (TCC_WAVE) Dual-slope critical  */
#define   TCC_WAVE_WAVEGEN_DSBOTTOM_Val     _U_(0x5)                                       /**< (TCC_WAVE) Dual-slope with interrupt/event condition when COUNT reaches ZERO  */
#define   TCC_WAVE_WAVEGEN_DSBOTH_Val       _U_(0x6)                                       /**< (TCC_WAVE) Dual-slope with interrupt/event condition when COUNT reaches ZERO or TOP  */
#define   TCC_WAVE_WAVEGEN_DSTOP_Val        _U_(0x7)                                       /**< (TCC_WAVE) Dual-slope with interrupt/event condition when COUNT reaches TOP  */
#define TCC_WAVE_WAVEGEN_NFRQ               (TCC_WAVE_WAVEGEN_NFRQ_Val << TCC_WAVE_WAVEGEN_Pos)  /**< (TCC_WAVE) Normal frequency Position  */
#define TCC_WAVE_WAVEGEN_MFRQ               (TCC_WAVE_WAVEGEN_MFRQ_Val << TCC_WAVE_WAVEGEN_Pos)  /**< (TCC_WAVE) Match frequency Position  */
#define TCC_WAVE_WAVEGEN_NPWM               (TCC_WAVE_WAVEGEN_NPWM_Val << TCC_WAVE_WAVEGEN_Pos)  /**< (TCC_WAVE) Normal PWM Position  */
#define TCC_WAVE_WAVEGEN_DSCRITICAL         (TCC_WAVE_WAVEGEN_DSCRITICAL_Val << TCC_WAVE_WAVEGEN_Pos)  /**< (TCC_WAVE) Dual-slope critical Position  */
#define TCC_WAVE_WAVEGEN_DSBOTTOM           (TCC_WAVE_WAVEGEN_DSBOTTOM_Val << TCC_WAVE_WAVEGEN_Pos)  /**< (TCC_WAVE) Dual-slope with interrupt/event condition when COUNT reaches ZERO Position  */
#define TCC_WAVE_WAVEGEN_DSBOTH             (TCC_WAVE_WAVEGEN_DSBOTH_Val << TCC_WAVE_WAVEGEN_Pos)  /**< (TCC_WAVE) Dual-slope with interrupt/event condition when COUNT reaches ZERO or TOP Position  */
#define TCC_WAVE_WAVEGEN_DSTOP              (TCC_WAVE_WAVEGEN_DSTOP_Val << TCC_WAVE_WAVEGEN_Pos)  /**< (TCC_WAVE) Dual-slope with interrupt/event condition when COUNT reaches TOP Position  */
#define TCC_WAVE_RAMP_Pos                   4                                              /**< (TCC_WAVE) Ramp Mode Position */
#define TCC_WAVE_RAMP_Msk                   (_U_(0x3) << TCC_WAVE_RAMP_Pos)                /**< (TCC_WAVE) Ramp Mode Mask */
#define TCC_WAVE_RAMP(value)                (TCC_WAVE_RAMP_Msk & ((value) << TCC_WAVE_RAMP_Pos))
#define   TCC_WAVE_RAMP_RAMP1_Val           _U_(0x0)                                       /**< (TCC_WAVE) RAMP1 operation  */
#define   TCC_WAVE_RAMP_RAMP2A_Val          _U_(0x1)                                       /**< (TCC_WAVE) Alternative RAMP2 operation  */
#define   TCC_WAVE_RAMP_RAMP2_Val           _U_(0x2)                                       /**< (TCC_WAVE) RAMP2 operation  */
#define   TCC_WAVE_RAMP_RAMP2C_Val          _U_(0x3)                                       /**< (TCC_WAVE) Critical RAMP2 operation  */
#define TCC_WAVE_RAMP_RAMP1                 (TCC_WAVE_RAMP_RAMP1_Val << TCC_WAVE_RAMP_Pos)  /**< (TCC_WAVE) RAMP1 operation Position  */
#define TCC_WAVE_RAMP_RAMP2A                (TCC_WAVE_RAMP_RAMP2A_Val << TCC_WAVE_RAMP_Pos)  /**< (TCC_WAVE) Alternative RAMP2 operation Position  */
#define TCC_WAVE_RAMP_RAMP2                 (TCC_WAVE_RAMP_RAMP2_Val << TCC_WAVE_RAMP_Pos)  /**< (TCC_WAVE) RAMP2 operation Position  */
#define TCC_WAVE_RAMP_RAMP2C                (TCC_WAVE_RAMP_RAMP2C_Val << TCC_WAVE_RAMP_Pos)  /**< (TCC_WAVE) Critical RAMP2 operation Position  */
#define TCC_WAVE_CIPEREN_Pos                7                                              /**< (TCC_WAVE) Circular period Enable Position */
#define TCC_WAVE_CIPEREN_Msk                (_U_(0x1) << TCC_WAVE_CIPEREN_Pos)             /**< (TCC_WAVE) Circular period Enable Mask */
#define TCC_WAVE_CIPEREN                    TCC_WAVE_CIPEREN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_WAVE_CIPEREN_Msk instead */
#define TCC_WAVE_CICCEN0_Pos                8                                              /**< (TCC_WAVE) Circular Channel 0 Enable Position */
#define TCC_WAVE_CICCEN0_Msk                (_U_(0x1) << TCC_WAVE_CICCEN0_Pos)             /**< (TCC_WAVE) Circular Channel 0 Enable Mask */
#define TCC_WAVE_CICCEN0                    TCC_WAVE_CICCEN0_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_WAVE_CICCEN0_Msk instead */
#define TCC_WAVE_CICCEN1_Pos                9                                              /**< (TCC_WAVE) Circular Channel 1 Enable Position */
#define TCC_WAVE_CICCEN1_Msk                (_U_(0x1) << TCC_WAVE_CICCEN1_Pos)             /**< (TCC_WAVE) Circular Channel 1 Enable Mask */
#define TCC_WAVE_CICCEN1                    TCC_WAVE_CICCEN1_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_WAVE_CICCEN1_Msk instead */
#define TCC_WAVE_CICCEN2_Pos                10                                             /**< (TCC_WAVE) Circular Channel 2 Enable Position */
#define TCC_WAVE_CICCEN2_Msk                (_U_(0x1) << TCC_WAVE_CICCEN2_Pos)             /**< (TCC_WAVE) Circular Channel 2 Enable Mask */
#define TCC_WAVE_CICCEN2                    TCC_WAVE_CICCEN2_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_WAVE_CICCEN2_Msk instead */
#define TCC_WAVE_CICCEN3_Pos                11                                             /**< (TCC_WAVE) Circular Channel 3 Enable Position */
#define TCC_WAVE_CICCEN3_Msk                (_U_(0x1) << TCC_WAVE_CICCEN3_Pos)             /**< (TCC_WAVE) Circular Channel 3 Enable Mask */
#define TCC_WAVE_CICCEN3                    TCC_WAVE_CICCEN3_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_WAVE_CICCEN3_Msk instead */
#define TCC_WAVE_POL0_Pos                   16                                             /**< (TCC_WAVE) Channel 0 Polarity Position */
#define TCC_WAVE_POL0_Msk                   (_U_(0x1) << TCC_WAVE_POL0_Pos)                /**< (TCC_WAVE) Channel 0 Polarity Mask */
#define TCC_WAVE_POL0                       TCC_WAVE_POL0_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_WAVE_POL0_Msk instead */
#define TCC_WAVE_POL1_Pos                   17                                             /**< (TCC_WAVE) Channel 1 Polarity Position */
#define TCC_WAVE_POL1_Msk                   (_U_(0x1) << TCC_WAVE_POL1_Pos)                /**< (TCC_WAVE) Channel 1 Polarity Mask */
#define TCC_WAVE_POL1                       TCC_WAVE_POL1_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_WAVE_POL1_Msk instead */
#define TCC_WAVE_POL2_Pos                   18                                             /**< (TCC_WAVE) Channel 2 Polarity Position */
#define TCC_WAVE_POL2_Msk                   (_U_(0x1) << TCC_WAVE_POL2_Pos)                /**< (TCC_WAVE) Channel 2 Polarity Mask */
#define TCC_WAVE_POL2                       TCC_WAVE_POL2_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_WAVE_POL2_Msk instead */
#define TCC_WAVE_POL3_Pos                   19                                             /**< (TCC_WAVE) Channel 3 Polarity Position */
#define TCC_WAVE_POL3_Msk                   (_U_(0x1) << TCC_WAVE_POL3_Pos)                /**< (TCC_WAVE) Channel 3 Polarity Mask */
#define TCC_WAVE_POL3                       TCC_WAVE_POL3_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_WAVE_POL3_Msk instead */
#define TCC_WAVE_SWAP0_Pos                  24                                             /**< (TCC_WAVE) Swap DTI Output Pair 0 Position */
#define TCC_WAVE_SWAP0_Msk                  (_U_(0x1) << TCC_WAVE_SWAP0_Pos)               /**< (TCC_WAVE) Swap DTI Output Pair 0 Mask */
#define TCC_WAVE_SWAP0                      TCC_WAVE_SWAP0_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_WAVE_SWAP0_Msk instead */
#define TCC_WAVE_SWAP1_Pos                  25                                             /**< (TCC_WAVE) Swap DTI Output Pair 1 Position */
#define TCC_WAVE_SWAP1_Msk                  (_U_(0x1) << TCC_WAVE_SWAP1_Pos)               /**< (TCC_WAVE) Swap DTI Output Pair 1 Mask */
#define TCC_WAVE_SWAP1                      TCC_WAVE_SWAP1_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_WAVE_SWAP1_Msk instead */
#define TCC_WAVE_SWAP2_Pos                  26                                             /**< (TCC_WAVE) Swap DTI Output Pair 2 Position */
#define TCC_WAVE_SWAP2_Msk                  (_U_(0x1) << TCC_WAVE_SWAP2_Pos)               /**< (TCC_WAVE) Swap DTI Output Pair 2 Mask */
#define TCC_WAVE_SWAP2                      TCC_WAVE_SWAP2_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_WAVE_SWAP2_Msk instead */
#define TCC_WAVE_SWAP3_Pos                  27                                             /**< (TCC_WAVE) Swap DTI Output Pair 3 Position */
#define TCC_WAVE_SWAP3_Msk                  (_U_(0x1) << TCC_WAVE_SWAP3_Pos)               /**< (TCC_WAVE) Swap DTI Output Pair 3 Mask */
#define TCC_WAVE_SWAP3                      TCC_WAVE_SWAP3_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_WAVE_SWAP3_Msk instead */
#define TCC_WAVE_MASK                       _U_(0xF0F0FB7)                                 /**< \deprecated (TCC_WAVE) Register MASK  (Use TCC_WAVE_Msk instead)  */
#define TCC_WAVE_Msk                        _U_(0xF0F0FB7)                                 /**< (TCC_WAVE) Register Mask  */

#define TCC_WAVE_CICCEN_Pos                 8                                              /**< (TCC_WAVE Position) Circular Channel x Enable */
#define TCC_WAVE_CICCEN_Msk                 (_U_(0xF) << TCC_WAVE_CICCEN_Pos)              /**< (TCC_WAVE Mask) CICCEN */
#define TCC_WAVE_CICCEN(value)              (TCC_WAVE_CICCEN_Msk & ((value) << TCC_WAVE_CICCEN_Pos))  
#define TCC_WAVE_POL_Pos                    16                                             /**< (TCC_WAVE Position) Channel x Polarity */
#define TCC_WAVE_POL_Msk                    (_U_(0xF) << TCC_WAVE_POL_Pos)                 /**< (TCC_WAVE Mask) POL */
#define TCC_WAVE_POL(value)                 (TCC_WAVE_POL_Msk & ((value) << TCC_WAVE_POL_Pos))  
#define TCC_WAVE_SWAP_Pos                   24                                             /**< (TCC_WAVE Position) Swap DTI Output Pair 3 */
#define TCC_WAVE_SWAP_Msk                   (_U_(0xF) << TCC_WAVE_SWAP_Pos)                /**< (TCC_WAVE Mask) SWAP */
#define TCC_WAVE_SWAP(value)                (TCC_WAVE_SWAP_Msk & ((value) << TCC_WAVE_SWAP_Pos))  

/* -------- TCC_PER : (TCC Offset: 0x40) (R/W 32) Period -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PER:24;                    /**< bit:  0..23  Period Value                             */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // DITH4 mode
    uint32_t DITHER:4;                  /**< bit:   0..3  Dithering Cycle Number                   */
    uint32_t PER:20;                    /**< bit:  4..23  Period Value                             */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } DITH4;                                /**< Structure used for DITH4 mode access */
  struct { // DITH5 mode
    uint32_t DITHER:5;                  /**< bit:   0..4  Dithering Cycle Number                   */
    uint32_t PER:19;                    /**< bit:  5..23  Period Value                             */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } DITH5;                                /**< Structure used for DITH5 mode access */
  struct { // DITH6 mode
    uint32_t DITHER:6;                  /**< bit:   0..5  Dithering Cycle Number                   */
    uint32_t PER:18;                    /**< bit:  6..23  Period Value                             */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } DITH6;                                /**< Structure used for DITH6 mode access */
  uint32_t reg;                         /**< Type used for register access */
} TCC_PER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_PER_OFFSET                      (0x40)                                        /**<  (TCC_PER) Period  Offset */
#define TCC_PER_RESETVALUE                  _U_(0xFFFFFFFF)                               /**<  (TCC_PER) Period  Reset Value */

#define TCC_PER_PER_Pos                     0                                              /**< (TCC_PER) Period Value Position */
#define TCC_PER_PER_Msk                     (_U_(0xFFFFFF) << TCC_PER_PER_Pos)             /**< (TCC_PER) Period Value Mask */
#define TCC_PER_PER(value)                  (TCC_PER_PER_Msk & ((value) << TCC_PER_PER_Pos))
#define TCC_PER_MASK                        _U_(0xFFFFFF)                                  /**< \deprecated (TCC_PER) Register MASK  (Use TCC_PER_Msk instead)  */
#define TCC_PER_Msk                         _U_(0xFFFFFF)                                  /**< (TCC_PER) Register Mask  */

/* DITH4 mode */
#define TCC_PER_DITH4_DITHER_Pos            0                                              /**< (TCC_PER) Dithering Cycle Number Position */
#define TCC_PER_DITH4_DITHER_Msk            (_U_(0xF) << TCC_PER_DITH4_DITHER_Pos)         /**< (TCC_PER) Dithering Cycle Number Mask */
#define TCC_PER_DITH4_DITHER(value)         (TCC_PER_DITH4_DITHER_Msk & ((value) << TCC_PER_DITH4_DITHER_Pos))
#define TCC_PER_DITH4_PER_Pos               4                                              /**< (TCC_PER) Period Value Position */
#define TCC_PER_DITH4_PER_Msk               (_U_(0xFFFFF) << TCC_PER_DITH4_PER_Pos)        /**< (TCC_PER) Period Value Mask */
#define TCC_PER_DITH4_PER(value)            (TCC_PER_DITH4_PER_Msk & ((value) << TCC_PER_DITH4_PER_Pos))
#define TCC_PER_DITH4_MASK                  _U_(0xFFFFFF)                                  /**< \deprecated (TCC_PER_DITH4) Register MASK  (Use TCC_PER_DITH4_Msk instead)  */
#define TCC_PER_DITH4_Msk                   _U_(0xFFFFFF)                                  /**< (TCC_PER_DITH4) Register Mask  */

/* DITH5 mode */
#define TCC_PER_DITH5_DITHER_Pos            0                                              /**< (TCC_PER) Dithering Cycle Number Position */
#define TCC_PER_DITH5_DITHER_Msk            (_U_(0x1F) << TCC_PER_DITH5_DITHER_Pos)        /**< (TCC_PER) Dithering Cycle Number Mask */
#define TCC_PER_DITH5_DITHER(value)         (TCC_PER_DITH5_DITHER_Msk & ((value) << TCC_PER_DITH5_DITHER_Pos))
#define TCC_PER_DITH5_PER_Pos               5                                              /**< (TCC_PER) Period Value Position */
#define TCC_PER_DITH5_PER_Msk               (_U_(0x7FFFF) << TCC_PER_DITH5_PER_Pos)        /**< (TCC_PER) Period Value Mask */
#define TCC_PER_DITH5_PER(value)            (TCC_PER_DITH5_PER_Msk & ((value) << TCC_PER_DITH5_PER_Pos))
#define TCC_PER_DITH5_MASK                  _U_(0xFFFFFF)                                  /**< \deprecated (TCC_PER_DITH5) Register MASK  (Use TCC_PER_DITH5_Msk instead)  */
#define TCC_PER_DITH5_Msk                   _U_(0xFFFFFF)                                  /**< (TCC_PER_DITH5) Register Mask  */

/* DITH6 mode */
#define TCC_PER_DITH6_DITHER_Pos            0                                              /**< (TCC_PER) Dithering Cycle Number Position */
#define TCC_PER_DITH6_DITHER_Msk            (_U_(0x3F) << TCC_PER_DITH6_DITHER_Pos)        /**< (TCC_PER) Dithering Cycle Number Mask */
#define TCC_PER_DITH6_DITHER(value)         (TCC_PER_DITH6_DITHER_Msk & ((value) << TCC_PER_DITH6_DITHER_Pos))
#define TCC_PER_DITH6_PER_Pos               6                                              /**< (TCC_PER) Period Value Position */
#define TCC_PER_DITH6_PER_Msk               (_U_(0x3FFFF) << TCC_PER_DITH6_PER_Pos)        /**< (TCC_PER) Period Value Mask */
#define TCC_PER_DITH6_PER(value)            (TCC_PER_DITH6_PER_Msk & ((value) << TCC_PER_DITH6_PER_Pos))
#define TCC_PER_DITH6_MASK                  _U_(0xFFFFFF)                                  /**< \deprecated (TCC_PER_DITH6) Register MASK  (Use TCC_PER_DITH6_Msk instead)  */
#define TCC_PER_DITH6_Msk                   _U_(0xFFFFFF)                                  /**< (TCC_PER_DITH6) Register Mask  */


/* -------- TCC_CC : (TCC Offset: 0x44) (R/W 32) Compare and Capture -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CC:24;                     /**< bit:  0..23  Channel Compare/Capture Value            */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // DITH4 mode
    uint32_t DITHER:4;                  /**< bit:   0..3  Dithering Cycle Number                   */
    uint32_t CC:20;                     /**< bit:  4..23  Channel Compare/Capture Value            */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } DITH4;                                /**< Structure used for DITH4 mode access */
  struct { // DITH5 mode
    uint32_t DITHER:5;                  /**< bit:   0..4  Dithering Cycle Number                   */
    uint32_t CC:19;                     /**< bit:  5..23  Channel Compare/Capture Value            */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } DITH5;                                /**< Structure used for DITH5 mode access */
  struct { // DITH6 mode
    uint32_t DITHER:6;                  /**< bit:   0..5  Dithering Cycle Number                   */
    uint32_t CC:18;                     /**< bit:  6..23  Channel Compare/Capture Value            */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } DITH6;                                /**< Structure used for DITH6 mode access */
  uint32_t reg;                         /**< Type used for register access */
} TCC_CC_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_CC_OFFSET                       (0x44)                                        /**<  (TCC_CC) Compare and Capture  Offset */
#define TCC_CC_RESETVALUE                   _U_(0x00)                                     /**<  (TCC_CC) Compare and Capture  Reset Value */

#define TCC_CC_CC_Pos                       0                                              /**< (TCC_CC) Channel Compare/Capture Value Position */
#define TCC_CC_CC_Msk                       (_U_(0xFFFFFF) << TCC_CC_CC_Pos)               /**< (TCC_CC) Channel Compare/Capture Value Mask */
#define TCC_CC_CC(value)                    (TCC_CC_CC_Msk & ((value) << TCC_CC_CC_Pos)) 
#define TCC_CC_MASK                         _U_(0xFFFFFF)                                  /**< \deprecated (TCC_CC) Register MASK  (Use TCC_CC_Msk instead)  */
#define TCC_CC_Msk                          _U_(0xFFFFFF)                                  /**< (TCC_CC) Register Mask  */

/* DITH4 mode */
#define TCC_CC_DITH4_DITHER_Pos             0                                              /**< (TCC_CC) Dithering Cycle Number Position */
#define TCC_CC_DITH4_DITHER_Msk             (_U_(0xF) << TCC_CC_DITH4_DITHER_Pos)          /**< (TCC_CC) Dithering Cycle Number Mask */
#define TCC_CC_DITH4_DITHER(value)          (TCC_CC_DITH4_DITHER_Msk & ((value) << TCC_CC_DITH4_DITHER_Pos))
#define TCC_CC_DITH4_CC_Pos                 4                                              /**< (TCC_CC) Channel Compare/Capture Value Position */
#define TCC_CC_DITH4_CC_Msk                 (_U_(0xFFFFF) << TCC_CC_DITH4_CC_Pos)          /**< (TCC_CC) Channel Compare/Capture Value Mask */
#define TCC_CC_DITH4_CC(value)              (TCC_CC_DITH4_CC_Msk & ((value) << TCC_CC_DITH4_CC_Pos))
#define TCC_CC_DITH4_MASK                   _U_(0xFFFFFF)                                  /**< \deprecated (TCC_CC_DITH4) Register MASK  (Use TCC_CC_DITH4_Msk instead)  */
#define TCC_CC_DITH4_Msk                    _U_(0xFFFFFF)                                  /**< (TCC_CC_DITH4) Register Mask  */

/* DITH5 mode */
#define TCC_CC_DITH5_DITHER_Pos             0                                              /**< (TCC_CC) Dithering Cycle Number Position */
#define TCC_CC_DITH5_DITHER_Msk             (_U_(0x1F) << TCC_CC_DITH5_DITHER_Pos)         /**< (TCC_CC) Dithering Cycle Number Mask */
#define TCC_CC_DITH5_DITHER(value)          (TCC_CC_DITH5_DITHER_Msk & ((value) << TCC_CC_DITH5_DITHER_Pos))
#define TCC_CC_DITH5_CC_Pos                 5                                              /**< (TCC_CC) Channel Compare/Capture Value Position */
#define TCC_CC_DITH5_CC_Msk                 (_U_(0x7FFFF) << TCC_CC_DITH5_CC_Pos)          /**< (TCC_CC) Channel Compare/Capture Value Mask */
#define TCC_CC_DITH5_CC(value)              (TCC_CC_DITH5_CC_Msk & ((value) << TCC_CC_DITH5_CC_Pos))
#define TCC_CC_DITH5_MASK                   _U_(0xFFFFFF)                                  /**< \deprecated (TCC_CC_DITH5) Register MASK  (Use TCC_CC_DITH5_Msk instead)  */
#define TCC_CC_DITH5_Msk                    _U_(0xFFFFFF)                                  /**< (TCC_CC_DITH5) Register Mask  */

/* DITH6 mode */
#define TCC_CC_DITH6_DITHER_Pos             0                                              /**< (TCC_CC) Dithering Cycle Number Position */
#define TCC_CC_DITH6_DITHER_Msk             (_U_(0x3F) << TCC_CC_DITH6_DITHER_Pos)         /**< (TCC_CC) Dithering Cycle Number Mask */
#define TCC_CC_DITH6_DITHER(value)          (TCC_CC_DITH6_DITHER_Msk & ((value) << TCC_CC_DITH6_DITHER_Pos))
#define TCC_CC_DITH6_CC_Pos                 6                                              /**< (TCC_CC) Channel Compare/Capture Value Position */
#define TCC_CC_DITH6_CC_Msk                 (_U_(0x3FFFF) << TCC_CC_DITH6_CC_Pos)          /**< (TCC_CC) Channel Compare/Capture Value Mask */
#define TCC_CC_DITH6_CC(value)              (TCC_CC_DITH6_CC_Msk & ((value) << TCC_CC_DITH6_CC_Pos))
#define TCC_CC_DITH6_MASK                   _U_(0xFFFFFF)                                  /**< \deprecated (TCC_CC_DITH6) Register MASK  (Use TCC_CC_DITH6_Msk instead)  */
#define TCC_CC_DITH6_Msk                    _U_(0xFFFFFF)                                  /**< (TCC_CC_DITH6) Register Mask  */


/* -------- TCC_PATTBUF : (TCC Offset: 0x64) (R/W 16) Pattern Buffer -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t PGEB0:1;                   /**< bit:      0  Pattern Generator 0 Output Enable Buffer */
    uint16_t PGEB1:1;                   /**< bit:      1  Pattern Generator 1 Output Enable Buffer */
    uint16_t PGEB2:1;                   /**< bit:      2  Pattern Generator 2 Output Enable Buffer */
    uint16_t PGEB3:1;                   /**< bit:      3  Pattern Generator 3 Output Enable Buffer */
    uint16_t PGEB4:1;                   /**< bit:      4  Pattern Generator 4 Output Enable Buffer */
    uint16_t PGEB5:1;                   /**< bit:      5  Pattern Generator 5 Output Enable Buffer */
    uint16_t PGEB6:1;                   /**< bit:      6  Pattern Generator 6 Output Enable Buffer */
    uint16_t PGEB7:1;                   /**< bit:      7  Pattern Generator 7 Output Enable Buffer */
    uint16_t PGVB0:1;                   /**< bit:      8  Pattern Generator 0 Output Enable        */
    uint16_t PGVB1:1;                   /**< bit:      9  Pattern Generator 1 Output Enable        */
    uint16_t PGVB2:1;                   /**< bit:     10  Pattern Generator 2 Output Enable        */
    uint16_t PGVB3:1;                   /**< bit:     11  Pattern Generator 3 Output Enable        */
    uint16_t PGVB4:1;                   /**< bit:     12  Pattern Generator 4 Output Enable        */
    uint16_t PGVB5:1;                   /**< bit:     13  Pattern Generator 5 Output Enable        */
    uint16_t PGVB6:1;                   /**< bit:     14  Pattern Generator 6 Output Enable        */
    uint16_t PGVB7:1;                   /**< bit:     15  Pattern Generator 7 Output Enable        */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint16_t PGEB:8;                    /**< bit:   0..7  Pattern Generator x Output Enable Buffer */
    uint16_t PGVB:8;                    /**< bit:  8..15  Pattern Generator 7 Output Enable        */
  } vec;                                /**< Structure used for vec  access  */
  uint16_t reg;                         /**< Type used for register access */
} TCC_PATTBUF_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_PATTBUF_OFFSET                  (0x64)                                        /**<  (TCC_PATTBUF) Pattern Buffer  Offset */
#define TCC_PATTBUF_RESETVALUE              _U_(0x00)                                     /**<  (TCC_PATTBUF) Pattern Buffer  Reset Value */

#define TCC_PATTBUF_PGEB0_Pos               0                                              /**< (TCC_PATTBUF) Pattern Generator 0 Output Enable Buffer Position */
#define TCC_PATTBUF_PGEB0_Msk               (_U_(0x1) << TCC_PATTBUF_PGEB0_Pos)            /**< (TCC_PATTBUF) Pattern Generator 0 Output Enable Buffer Mask */
#define TCC_PATTBUF_PGEB0                   TCC_PATTBUF_PGEB0_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATTBUF_PGEB0_Msk instead */
#define TCC_PATTBUF_PGEB1_Pos               1                                              /**< (TCC_PATTBUF) Pattern Generator 1 Output Enable Buffer Position */
#define TCC_PATTBUF_PGEB1_Msk               (_U_(0x1) << TCC_PATTBUF_PGEB1_Pos)            /**< (TCC_PATTBUF) Pattern Generator 1 Output Enable Buffer Mask */
#define TCC_PATTBUF_PGEB1                   TCC_PATTBUF_PGEB1_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATTBUF_PGEB1_Msk instead */
#define TCC_PATTBUF_PGEB2_Pos               2                                              /**< (TCC_PATTBUF) Pattern Generator 2 Output Enable Buffer Position */
#define TCC_PATTBUF_PGEB2_Msk               (_U_(0x1) << TCC_PATTBUF_PGEB2_Pos)            /**< (TCC_PATTBUF) Pattern Generator 2 Output Enable Buffer Mask */
#define TCC_PATTBUF_PGEB2                   TCC_PATTBUF_PGEB2_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATTBUF_PGEB2_Msk instead */
#define TCC_PATTBUF_PGEB3_Pos               3                                              /**< (TCC_PATTBUF) Pattern Generator 3 Output Enable Buffer Position */
#define TCC_PATTBUF_PGEB3_Msk               (_U_(0x1) << TCC_PATTBUF_PGEB3_Pos)            /**< (TCC_PATTBUF) Pattern Generator 3 Output Enable Buffer Mask */
#define TCC_PATTBUF_PGEB3                   TCC_PATTBUF_PGEB3_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATTBUF_PGEB3_Msk instead */
#define TCC_PATTBUF_PGEB4_Pos               4                                              /**< (TCC_PATTBUF) Pattern Generator 4 Output Enable Buffer Position */
#define TCC_PATTBUF_PGEB4_Msk               (_U_(0x1) << TCC_PATTBUF_PGEB4_Pos)            /**< (TCC_PATTBUF) Pattern Generator 4 Output Enable Buffer Mask */
#define TCC_PATTBUF_PGEB4                   TCC_PATTBUF_PGEB4_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATTBUF_PGEB4_Msk instead */
#define TCC_PATTBUF_PGEB5_Pos               5                                              /**< (TCC_PATTBUF) Pattern Generator 5 Output Enable Buffer Position */
#define TCC_PATTBUF_PGEB5_Msk               (_U_(0x1) << TCC_PATTBUF_PGEB5_Pos)            /**< (TCC_PATTBUF) Pattern Generator 5 Output Enable Buffer Mask */
#define TCC_PATTBUF_PGEB5                   TCC_PATTBUF_PGEB5_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATTBUF_PGEB5_Msk instead */
#define TCC_PATTBUF_PGEB6_Pos               6                                              /**< (TCC_PATTBUF) Pattern Generator 6 Output Enable Buffer Position */
#define TCC_PATTBUF_PGEB6_Msk               (_U_(0x1) << TCC_PATTBUF_PGEB6_Pos)            /**< (TCC_PATTBUF) Pattern Generator 6 Output Enable Buffer Mask */
#define TCC_PATTBUF_PGEB6                   TCC_PATTBUF_PGEB6_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATTBUF_PGEB6_Msk instead */
#define TCC_PATTBUF_PGEB7_Pos               7                                              /**< (TCC_PATTBUF) Pattern Generator 7 Output Enable Buffer Position */
#define TCC_PATTBUF_PGEB7_Msk               (_U_(0x1) << TCC_PATTBUF_PGEB7_Pos)            /**< (TCC_PATTBUF) Pattern Generator 7 Output Enable Buffer Mask */
#define TCC_PATTBUF_PGEB7                   TCC_PATTBUF_PGEB7_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATTBUF_PGEB7_Msk instead */
#define TCC_PATTBUF_PGVB0_Pos               8                                              /**< (TCC_PATTBUF) Pattern Generator 0 Output Enable Position */
#define TCC_PATTBUF_PGVB0_Msk               (_U_(0x1) << TCC_PATTBUF_PGVB0_Pos)            /**< (TCC_PATTBUF) Pattern Generator 0 Output Enable Mask */
#define TCC_PATTBUF_PGVB0                   TCC_PATTBUF_PGVB0_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATTBUF_PGVB0_Msk instead */
#define TCC_PATTBUF_PGVB1_Pos               9                                              /**< (TCC_PATTBUF) Pattern Generator 1 Output Enable Position */
#define TCC_PATTBUF_PGVB1_Msk               (_U_(0x1) << TCC_PATTBUF_PGVB1_Pos)            /**< (TCC_PATTBUF) Pattern Generator 1 Output Enable Mask */
#define TCC_PATTBUF_PGVB1                   TCC_PATTBUF_PGVB1_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATTBUF_PGVB1_Msk instead */
#define TCC_PATTBUF_PGVB2_Pos               10                                             /**< (TCC_PATTBUF) Pattern Generator 2 Output Enable Position */
#define TCC_PATTBUF_PGVB2_Msk               (_U_(0x1) << TCC_PATTBUF_PGVB2_Pos)            /**< (TCC_PATTBUF) Pattern Generator 2 Output Enable Mask */
#define TCC_PATTBUF_PGVB2                   TCC_PATTBUF_PGVB2_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATTBUF_PGVB2_Msk instead */
#define TCC_PATTBUF_PGVB3_Pos               11                                             /**< (TCC_PATTBUF) Pattern Generator 3 Output Enable Position */
#define TCC_PATTBUF_PGVB3_Msk               (_U_(0x1) << TCC_PATTBUF_PGVB3_Pos)            /**< (TCC_PATTBUF) Pattern Generator 3 Output Enable Mask */
#define TCC_PATTBUF_PGVB3                   TCC_PATTBUF_PGVB3_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATTBUF_PGVB3_Msk instead */
#define TCC_PATTBUF_PGVB4_Pos               12                                             /**< (TCC_PATTBUF) Pattern Generator 4 Output Enable Position */
#define TCC_PATTBUF_PGVB4_Msk               (_U_(0x1) << TCC_PATTBUF_PGVB4_Pos)            /**< (TCC_PATTBUF) Pattern Generator 4 Output Enable Mask */
#define TCC_PATTBUF_PGVB4                   TCC_PATTBUF_PGVB4_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATTBUF_PGVB4_Msk instead */
#define TCC_PATTBUF_PGVB5_Pos               13                                             /**< (TCC_PATTBUF) Pattern Generator 5 Output Enable Position */
#define TCC_PATTBUF_PGVB5_Msk               (_U_(0x1) << TCC_PATTBUF_PGVB5_Pos)            /**< (TCC_PATTBUF) Pattern Generator 5 Output Enable Mask */
#define TCC_PATTBUF_PGVB5                   TCC_PATTBUF_PGVB5_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATTBUF_PGVB5_Msk instead */
#define TCC_PATTBUF_PGVB6_Pos               14                                             /**< (TCC_PATTBUF) Pattern Generator 6 Output Enable Position */
#define TCC_PATTBUF_PGVB6_Msk               (_U_(0x1) << TCC_PATTBUF_PGVB6_Pos)            /**< (TCC_PATTBUF) Pattern Generator 6 Output Enable Mask */
#define TCC_PATTBUF_PGVB6                   TCC_PATTBUF_PGVB6_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATTBUF_PGVB6_Msk instead */
#define TCC_PATTBUF_PGVB7_Pos               15                                             /**< (TCC_PATTBUF) Pattern Generator 7 Output Enable Position */
#define TCC_PATTBUF_PGVB7_Msk               (_U_(0x1) << TCC_PATTBUF_PGVB7_Pos)            /**< (TCC_PATTBUF) Pattern Generator 7 Output Enable Mask */
#define TCC_PATTBUF_PGVB7                   TCC_PATTBUF_PGVB7_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use TCC_PATTBUF_PGVB7_Msk instead */
#define TCC_PATTBUF_MASK                    _U_(0xFFFF)                                    /**< \deprecated (TCC_PATTBUF) Register MASK  (Use TCC_PATTBUF_Msk instead)  */
#define TCC_PATTBUF_Msk                     _U_(0xFFFF)                                    /**< (TCC_PATTBUF) Register Mask  */

#define TCC_PATTBUF_PGEB_Pos                0                                              /**< (TCC_PATTBUF Position) Pattern Generator x Output Enable Buffer */
#define TCC_PATTBUF_PGEB_Msk                (_U_(0xFF) << TCC_PATTBUF_PGEB_Pos)            /**< (TCC_PATTBUF Mask) PGEB */
#define TCC_PATTBUF_PGEB(value)             (TCC_PATTBUF_PGEB_Msk & ((value) << TCC_PATTBUF_PGEB_Pos))  
#define TCC_PATTBUF_PGVB_Pos                8                                              /**< (TCC_PATTBUF Position) Pattern Generator 7 Output Enable */
#define TCC_PATTBUF_PGVB_Msk                (_U_(0xFF) << TCC_PATTBUF_PGVB_Pos)            /**< (TCC_PATTBUF Mask) PGVB */
#define TCC_PATTBUF_PGVB(value)             (TCC_PATTBUF_PGVB_Msk & ((value) << TCC_PATTBUF_PGVB_Pos))  

/* -------- TCC_PERBUF : (TCC Offset: 0x6c) (R/W 32) Period Buffer -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t PERBUF:24;                 /**< bit:  0..23  Period Buffer Value                      */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // DITH4 mode
    uint32_t DITHERBUF:4;               /**< bit:   0..3  Dithering Buffer Cycle Number            */
    uint32_t PERBUF:20;                 /**< bit:  4..23  Period Buffer Value                      */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } DITH4;                                /**< Structure used for DITH4 mode access */
  struct { // DITH5 mode
    uint32_t DITHERBUF:5;               /**< bit:   0..4  Dithering Buffer Cycle Number            */
    uint32_t PERBUF:19;                 /**< bit:  5..23  Period Buffer Value                      */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } DITH5;                                /**< Structure used for DITH5 mode access */
  struct { // DITH6 mode
    uint32_t DITHERBUF:6;               /**< bit:   0..5  Dithering Buffer Cycle Number            */
    uint32_t PERBUF:18;                 /**< bit:  6..23  Period Buffer Value                      */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } DITH6;                                /**< Structure used for DITH6 mode access */
  uint32_t reg;                         /**< Type used for register access */
} TCC_PERBUF_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_PERBUF_OFFSET                   (0x6C)                                        /**<  (TCC_PERBUF) Period Buffer  Offset */
#define TCC_PERBUF_RESETVALUE               _U_(0xFFFFFFFF)                               /**<  (TCC_PERBUF) Period Buffer  Reset Value */

#define TCC_PERBUF_PERBUF_Pos               0                                              /**< (TCC_PERBUF) Period Buffer Value Position */
#define TCC_PERBUF_PERBUF_Msk               (_U_(0xFFFFFF) << TCC_PERBUF_PERBUF_Pos)       /**< (TCC_PERBUF) Period Buffer Value Mask */
#define TCC_PERBUF_PERBUF(value)            (TCC_PERBUF_PERBUF_Msk & ((value) << TCC_PERBUF_PERBUF_Pos))
#define TCC_PERBUF_MASK                     _U_(0xFFFFFF)                                  /**< \deprecated (TCC_PERBUF) Register MASK  (Use TCC_PERBUF_Msk instead)  */
#define TCC_PERBUF_Msk                      _U_(0xFFFFFF)                                  /**< (TCC_PERBUF) Register Mask  */

/* DITH4 mode */
#define TCC_PERBUF_DITH4_DITHERBUF_Pos      0                                              /**< (TCC_PERBUF) Dithering Buffer Cycle Number Position */
#define TCC_PERBUF_DITH4_DITHERBUF_Msk      (_U_(0xF) << TCC_PERBUF_DITH4_DITHERBUF_Pos)   /**< (TCC_PERBUF) Dithering Buffer Cycle Number Mask */
#define TCC_PERBUF_DITH4_DITHERBUF(value)   (TCC_PERBUF_DITH4_DITHERBUF_Msk & ((value) << TCC_PERBUF_DITH4_DITHERBUF_Pos))
#define TCC_PERBUF_DITH4_PERBUF_Pos         4                                              /**< (TCC_PERBUF) Period Buffer Value Position */
#define TCC_PERBUF_DITH4_PERBUF_Msk         (_U_(0xFFFFF) << TCC_PERBUF_DITH4_PERBUF_Pos)  /**< (TCC_PERBUF) Period Buffer Value Mask */
#define TCC_PERBUF_DITH4_PERBUF(value)      (TCC_PERBUF_DITH4_PERBUF_Msk & ((value) << TCC_PERBUF_DITH4_PERBUF_Pos))
#define TCC_PERBUF_DITH4_MASK               _U_(0xFFFFFF)                                  /**< \deprecated (TCC_PERBUF_DITH4) Register MASK  (Use TCC_PERBUF_DITH4_Msk instead)  */
#define TCC_PERBUF_DITH4_Msk                _U_(0xFFFFFF)                                  /**< (TCC_PERBUF_DITH4) Register Mask  */

/* DITH5 mode */
#define TCC_PERBUF_DITH5_DITHERBUF_Pos      0                                              /**< (TCC_PERBUF) Dithering Buffer Cycle Number Position */
#define TCC_PERBUF_DITH5_DITHERBUF_Msk      (_U_(0x1F) << TCC_PERBUF_DITH5_DITHERBUF_Pos)  /**< (TCC_PERBUF) Dithering Buffer Cycle Number Mask */
#define TCC_PERBUF_DITH5_DITHERBUF(value)   (TCC_PERBUF_DITH5_DITHERBUF_Msk & ((value) << TCC_PERBUF_DITH5_DITHERBUF_Pos))
#define TCC_PERBUF_DITH5_PERBUF_Pos         5                                              /**< (TCC_PERBUF) Period Buffer Value Position */
#define TCC_PERBUF_DITH5_PERBUF_Msk         (_U_(0x7FFFF) << TCC_PERBUF_DITH5_PERBUF_Pos)  /**< (TCC_PERBUF) Period Buffer Value Mask */
#define TCC_PERBUF_DITH5_PERBUF(value)      (TCC_PERBUF_DITH5_PERBUF_Msk & ((value) << TCC_PERBUF_DITH5_PERBUF_Pos))
#define TCC_PERBUF_DITH5_MASK               _U_(0xFFFFFF)                                  /**< \deprecated (TCC_PERBUF_DITH5) Register MASK  (Use TCC_PERBUF_DITH5_Msk instead)  */
#define TCC_PERBUF_DITH5_Msk                _U_(0xFFFFFF)                                  /**< (TCC_PERBUF_DITH5) Register Mask  */

/* DITH6 mode */
#define TCC_PERBUF_DITH6_DITHERBUF_Pos      0                                              /**< (TCC_PERBUF) Dithering Buffer Cycle Number Position */
#define TCC_PERBUF_DITH6_DITHERBUF_Msk      (_U_(0x3F) << TCC_PERBUF_DITH6_DITHERBUF_Pos)  /**< (TCC_PERBUF) Dithering Buffer Cycle Number Mask */
#define TCC_PERBUF_DITH6_DITHERBUF(value)   (TCC_PERBUF_DITH6_DITHERBUF_Msk & ((value) << TCC_PERBUF_DITH6_DITHERBUF_Pos))
#define TCC_PERBUF_DITH6_PERBUF_Pos         6                                              /**< (TCC_PERBUF) Period Buffer Value Position */
#define TCC_PERBUF_DITH6_PERBUF_Msk         (_U_(0x3FFFF) << TCC_PERBUF_DITH6_PERBUF_Pos)  /**< (TCC_PERBUF) Period Buffer Value Mask */
#define TCC_PERBUF_DITH6_PERBUF(value)      (TCC_PERBUF_DITH6_PERBUF_Msk & ((value) << TCC_PERBUF_DITH6_PERBUF_Pos))
#define TCC_PERBUF_DITH6_MASK               _U_(0xFFFFFF)                                  /**< \deprecated (TCC_PERBUF_DITH6) Register MASK  (Use TCC_PERBUF_DITH6_Msk instead)  */
#define TCC_PERBUF_DITH6_Msk                _U_(0xFFFFFF)                                  /**< (TCC_PERBUF_DITH6) Register Mask  */


/* -------- TCC_CCBUF : (TCC Offset: 0x70) (R/W 32) Compare and Capture Buffer -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CCBUF:24;                  /**< bit:  0..23  Channel Compare/Capture Buffer Value     */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct { // DITH4 mode
    uint32_t CCBUF:4;                   /**< bit:   0..3  Channel Compare/Capture Buffer Value     */
    uint32_t DITHERBUF:20;              /**< bit:  4..23  Dithering Buffer Cycle Number            */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } DITH4;                                /**< Structure used for DITH4 mode access */
  struct { // DITH5 mode
    uint32_t DITHERBUF:5;               /**< bit:   0..4  Dithering Buffer Cycle Number            */
    uint32_t CCBUF:19;                  /**< bit:  5..23  Channel Compare/Capture Buffer Value     */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } DITH5;                                /**< Structure used for DITH5 mode access */
  struct { // DITH6 mode
    uint32_t DITHERBUF:6;               /**< bit:   0..5  Dithering Buffer Cycle Number            */
    uint32_t CCBUF:18;                  /**< bit:  6..23  Channel Compare/Capture Buffer Value     */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } DITH6;                                /**< Structure used for DITH6 mode access */
  uint32_t reg;                         /**< Type used for register access */
} TCC_CCBUF_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TCC_CCBUF_OFFSET                    (0x70)                                        /**<  (TCC_CCBUF) Compare and Capture Buffer  Offset */
#define TCC_CCBUF_RESETVALUE                _U_(0x00)                                     /**<  (TCC_CCBUF) Compare and Capture Buffer  Reset Value */

#define TCC_CCBUF_CCBUF_Pos                 0                                              /**< (TCC_CCBUF) Channel Compare/Capture Buffer Value Position */
#define TCC_CCBUF_CCBUF_Msk                 (_U_(0xFFFFFF) << TCC_CCBUF_CCBUF_Pos)         /**< (TCC_CCBUF) Channel Compare/Capture Buffer Value Mask */
#define TCC_CCBUF_CCBUF(value)              (TCC_CCBUF_CCBUF_Msk & ((value) << TCC_CCBUF_CCBUF_Pos))
#define TCC_CCBUF_MASK                      _U_(0xFFFFFF)                                  /**< \deprecated (TCC_CCBUF) Register MASK  (Use TCC_CCBUF_Msk instead)  */
#define TCC_CCBUF_Msk                       _U_(0xFFFFFF)                                  /**< (TCC_CCBUF) Register Mask  */

/* DITH4 mode */
#define TCC_CCBUF_DITH4_CCBUF_Pos           0                                              /**< (TCC_CCBUF) Channel Compare/Capture Buffer Value Position */
#define TCC_CCBUF_DITH4_CCBUF_Msk           (_U_(0xF) << TCC_CCBUF_DITH4_CCBUF_Pos)        /**< (TCC_CCBUF) Channel Compare/Capture Buffer Value Mask */
#define TCC_CCBUF_DITH4_CCBUF(value)        (TCC_CCBUF_DITH4_CCBUF_Msk & ((value) << TCC_CCBUF_DITH4_CCBUF_Pos))
#define TCC_CCBUF_DITH4_DITHERBUF_Pos       4                                              /**< (TCC_CCBUF) Dithering Buffer Cycle Number Position */
#define TCC_CCBUF_DITH4_DITHERBUF_Msk       (_U_(0xFFFFF) << TCC_CCBUF_DITH4_DITHERBUF_Pos)  /**< (TCC_CCBUF) Dithering Buffer Cycle Number Mask */
#define TCC_CCBUF_DITH4_DITHERBUF(value)    (TCC_CCBUF_DITH4_DITHERBUF_Msk & ((value) << TCC_CCBUF_DITH4_DITHERBUF_Pos))
#define TCC_CCBUF_DITH4_MASK                _U_(0xFFFFFF)                                  /**< \deprecated (TCC_CCBUF_DITH4) Register MASK  (Use TCC_CCBUF_DITH4_Msk instead)  */
#define TCC_CCBUF_DITH4_Msk                 _U_(0xFFFFFF)                                  /**< (TCC_CCBUF_DITH4) Register Mask  */

/* DITH5 mode */
#define TCC_CCBUF_DITH5_DITHERBUF_Pos       0                                              /**< (TCC_CCBUF) Dithering Buffer Cycle Number Position */
#define TCC_CCBUF_DITH5_DITHERBUF_Msk       (_U_(0x1F) << TCC_CCBUF_DITH5_DITHERBUF_Pos)   /**< (TCC_CCBUF) Dithering Buffer Cycle Number Mask */
#define TCC_CCBUF_DITH5_DITHERBUF(value)    (TCC_CCBUF_DITH5_DITHERBUF_Msk & ((value) << TCC_CCBUF_DITH5_DITHERBUF_Pos))
#define TCC_CCBUF_DITH5_CCBUF_Pos           5                                              /**< (TCC_CCBUF) Channel Compare/Capture Buffer Value Position */
#define TCC_CCBUF_DITH5_CCBUF_Msk           (_U_(0x7FFFF) << TCC_CCBUF_DITH5_CCBUF_Pos)    /**< (TCC_CCBUF) Channel Compare/Capture Buffer Value Mask */
#define TCC_CCBUF_DITH5_CCBUF(value)        (TCC_CCBUF_DITH5_CCBUF_Msk & ((value) << TCC_CCBUF_DITH5_CCBUF_Pos))
#define TCC_CCBUF_DITH5_MASK                _U_(0xFFFFFF)                                  /**< \deprecated (TCC_CCBUF_DITH5) Register MASK  (Use TCC_CCBUF_DITH5_Msk instead)  */
#define TCC_CCBUF_DITH5_Msk                 _U_(0xFFFFFF)                                  /**< (TCC_CCBUF_DITH5) Register Mask  */

/* DITH6 mode */
#define TCC_CCBUF_DITH6_DITHERBUF_Pos       0                                              /**< (TCC_CCBUF) Dithering Buffer Cycle Number Position */
#define TCC_CCBUF_DITH6_DITHERBUF_Msk       (_U_(0x3F) << TCC_CCBUF_DITH6_DITHERBUF_Pos)   /**< (TCC_CCBUF) Dithering Buffer Cycle Number Mask */
#define TCC_CCBUF_DITH6_DITHERBUF(value)    (TCC_CCBUF_DITH6_DITHERBUF_Msk & ((value) << TCC_CCBUF_DITH6_DITHERBUF_Pos))
#define TCC_CCBUF_DITH6_CCBUF_Pos           6                                              /**< (TCC_CCBUF) Channel Compare/Capture Buffer Value Position */
#define TCC_CCBUF_DITH6_CCBUF_Msk           (_U_(0x3FFFF) << TCC_CCBUF_DITH6_CCBUF_Pos)    /**< (TCC_CCBUF) Channel Compare/Capture Buffer Value Mask */
#define TCC_CCBUF_DITH6_CCBUF(value)        (TCC_CCBUF_DITH6_CCBUF_Msk & ((value) << TCC_CCBUF_DITH6_CCBUF_Pos))
#define TCC_CCBUF_DITH6_MASK                _U_(0xFFFFFF)                                  /**< \deprecated (TCC_CCBUF_DITH6) Register MASK  (Use TCC_CCBUF_DITH6_Msk instead)  */
#define TCC_CCBUF_DITH6_Msk                 _U_(0xFFFFFF)                                  /**< (TCC_CCBUF_DITH6) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief TCC hardware registers */
typedef struct {  /* Timer Counter Control */
  __IO uint32_t CTRLA;          /**< (TCC Offset: 0x00) Control A */
  __IO uint8_t CTRLBCLR;       /**< (TCC Offset: 0x04) Control B Clear */
  __IO uint8_t CTRLBSET;       /**< (TCC Offset: 0x05) Control B Set */
  __I  uint8_t                        Reserved1[2];
  __I  uint32_t SYNCBUSY;       /**< (TCC Offset: 0x08) Synchronization Busy */
  __IO uint32_t FCTRLA;         /**< (TCC Offset: 0x0C) Recoverable Fault A Configuration */
  __IO uint32_t FCTRLB;         /**< (TCC Offset: 0x10) Recoverable Fault B Configuration */
  __IO uint32_t WEXCTRL;        /**< (TCC Offset: 0x14) Waveform Extension Configuration */
  __IO uint32_t DRVCTRL;        /**< (TCC Offset: 0x18) Driver Control */
  __I  uint8_t                        Reserved2[2];
  __IO uint8_t DBGCTRL;        /**< (TCC Offset: 0x1E) Debug Control */
  __I  uint8_t                        Reserved3[1];
  __IO uint32_t EVCTRL;         /**< (TCC Offset: 0x20) Event Control */
  __IO uint32_t INTENCLR;       /**< (TCC Offset: 0x24) Interrupt Enable Clear */
  __IO uint32_t INTENSET;       /**< (TCC Offset: 0x28) Interrupt Enable Set */
  __IO uint32_t INTFLAG;        /**< (TCC Offset: 0x2C) Interrupt Flag Status and Clear */
  __IO uint32_t STATUS;         /**< (TCC Offset: 0x30) Status */
  __IO uint32_t COUNT;          /**< (TCC Offset: 0x34) Count */
  __IO uint16_t PATT;           /**< (TCC Offset: 0x38) Pattern */
  __I  uint8_t                        Reserved4[2];
  __IO uint32_t WAVE;           /**< (TCC Offset: 0x3C) Waveform Control */
  __IO uint32_t PER;            /**< (TCC Offset: 0x40) Period */
  __IO uint32_t CC[4];          /**< (TCC Offset: 0x44) Compare and Capture */
  __I  uint8_t                        Reserved5[16];
  __IO uint16_t PATTBUF;        /**< (TCC Offset: 0x64) Pattern Buffer */
  __I  uint8_t                        Reserved6[6];
  __IO uint32_t PERBUF;         /**< (TCC Offset: 0x6C) Period Buffer */
  __IO uint32_t CCBUF[4];       /**< (TCC Offset: 0x70) Compare and Capture Buffer */
} Tcc;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief TCC hardware registers */
typedef struct {  /* Timer Counter Control */
  __IO TCC_CTRLA_Type                 CTRLA;          /**< Offset: 0x00 (R/W  32) Control A */
  __IO TCC_CTRLBCLR_Type              CTRLBCLR;       /**< Offset: 0x04 (R/W   8) Control B Clear */
  __IO TCC_CTRLBSET_Type              CTRLBSET;       /**< Offset: 0x05 (R/W   8) Control B Set */
  __I  uint8_t                        Reserved1[2];
  __I  TCC_SYNCBUSY_Type              SYNCBUSY;       /**< Offset: 0x08 (R/   32) Synchronization Busy */
  __IO TCC_FCTRLA_Type                FCTRLA;         /**< Offset: 0x0C (R/W  32) Recoverable Fault A Configuration */
  __IO TCC_FCTRLB_Type                FCTRLB;         /**< Offset: 0x10 (R/W  32) Recoverable Fault B Configuration */
  __IO TCC_WEXCTRL_Type               WEXCTRL;        /**< Offset: 0x14 (R/W  32) Waveform Extension Configuration */
  __IO TCC_DRVCTRL_Type               DRVCTRL;        /**< Offset: 0x18 (R/W  32) Driver Control */
  __I  uint8_t                        Reserved2[2];
  __IO TCC_DBGCTRL_Type               DBGCTRL;        /**< Offset: 0x1E (R/W   8) Debug Control */
  __I  uint8_t                        Reserved3[1];
  __IO TCC_EVCTRL_Type                EVCTRL;         /**< Offset: 0x20 (R/W  32) Event Control */
  __IO TCC_INTENCLR_Type              INTENCLR;       /**< Offset: 0x24 (R/W  32) Interrupt Enable Clear */
  __IO TCC_INTENSET_Type              INTENSET;       /**< Offset: 0x28 (R/W  32) Interrupt Enable Set */
  __IO TCC_INTFLAG_Type               INTFLAG;        /**< Offset: 0x2C (R/W  32) Interrupt Flag Status and Clear */
  __IO TCC_STATUS_Type                STATUS;         /**< Offset: 0x30 (R/W  32) Status */
  __IO TCC_COUNT_Type                 COUNT;          /**< Offset: 0x34 (R/W  32) Count */
  __IO TCC_PATT_Type                  PATT;           /**< Offset: 0x38 (R/W  16) Pattern */
  __I  uint8_t                        Reserved4[2];
  __IO TCC_WAVE_Type                  WAVE;           /**< Offset: 0x3C (R/W  32) Waveform Control */
  __IO TCC_PER_Type                   PER;            /**< Offset: 0x40 (R/W  32) Period */
  __IO TCC_CC_Type                    CC[4];          /**< Offset: 0x44 (R/W  32) Compare and Capture */
  __I  uint8_t                        Reserved5[16];
  __IO TCC_PATTBUF_Type               PATTBUF;        /**< Offset: 0x64 (R/W  16) Pattern Buffer */
  __I  uint8_t                        Reserved6[6];
  __IO TCC_PERBUF_Type                PERBUF;         /**< Offset: 0x6C (R/W  32) Period Buffer */
  __IO TCC_CCBUF_Type                 CCBUF[4];       /**< Offset: 0x70 (R/W  32) Compare and Capture Buffer */
} Tcc;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  b'end of Timer Counter Control' */

#endif /* _WLR089_TCC_COMPONENT_H_ */
