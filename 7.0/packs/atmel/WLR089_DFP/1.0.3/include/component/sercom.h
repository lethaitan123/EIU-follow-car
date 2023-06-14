/**
 * \brief Component description for SERCOM
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
#ifndef _WLR089_SERCOM_COMPONENT_H_
#define _WLR089_SERCOM_COMPONENT_H_
#define _WLR089_SERCOM_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup WLR089_SERCOM b'Serial Communication Interface'
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SERCOM */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define SERCOM_U2201                      /**< (SERCOM) Module ID */
#define REV_SERCOM 0x220                  /**< (SERCOM) Module revision */

/* -------- SERCOM_I2CM_CTRLA : (SERCOM Offset: 0x00) (R/W 32) I2CM Control A -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint32_t ENABLE:1;                  /**< bit:      1  Enable                                   */
    uint32_t MODE:3;                    /**< bit:   2..4  Operating Mode                           */
    uint32_t :2;                        /**< bit:   5..6  Reserved */
    uint32_t RUNSTDBY:1;                /**< bit:      7  Run in Standby                           */
    uint32_t :8;                        /**< bit:  8..15  Reserved */
    uint32_t PINOUT:1;                  /**< bit:     16  Pin Usage                                */
    uint32_t :3;                        /**< bit: 17..19  Reserved */
    uint32_t SDAHOLD:2;                 /**< bit: 20..21  SDA Hold Time                            */
    uint32_t MEXTTOEN:1;                /**< bit:     22  Master SCL Low Extend Timeout            */
    uint32_t SEXTTOEN:1;                /**< bit:     23  Slave SCL Low Extend Timeout             */
    uint32_t SPEED:2;                   /**< bit: 24..25  Transfer Speed                           */
    uint32_t :1;                        /**< bit:     26  Reserved */
    uint32_t SCLSM:1;                   /**< bit:     27  SCL Clock Stretch Mode                   */
    uint32_t INACTOUT:2;                /**< bit: 28..29  Inactive Time-Out                        */
    uint32_t LOWTOUTEN:1;               /**< bit:     30  SCL Low Timeout Enable                   */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_I2CM_CTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_CTRLA_OFFSET            (0x00)                                        /**<  (SERCOM_I2CM_CTRLA) I2CM Control A  Offset */
#define SERCOM_I2CM_CTRLA_RESETVALUE        _U_(0x00)                                     /**<  (SERCOM_I2CM_CTRLA) I2CM Control A  Reset Value */

#define SERCOM_I2CM_CTRLA_SWRST_Pos         0                                              /**< (SERCOM_I2CM_CTRLA) Software Reset Position */
#define SERCOM_I2CM_CTRLA_SWRST_Msk         (_U_(0x1) << SERCOM_I2CM_CTRLA_SWRST_Pos)      /**< (SERCOM_I2CM_CTRLA) Software Reset Mask */
#define SERCOM_I2CM_CTRLA_SWRST             SERCOM_I2CM_CTRLA_SWRST_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_CTRLA_SWRST_Msk instead */
#define SERCOM_I2CM_CTRLA_ENABLE_Pos        1                                              /**< (SERCOM_I2CM_CTRLA) Enable Position */
#define SERCOM_I2CM_CTRLA_ENABLE_Msk        (_U_(0x1) << SERCOM_I2CM_CTRLA_ENABLE_Pos)     /**< (SERCOM_I2CM_CTRLA) Enable Mask */
#define SERCOM_I2CM_CTRLA_ENABLE            SERCOM_I2CM_CTRLA_ENABLE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_CTRLA_ENABLE_Msk instead */
#define SERCOM_I2CM_CTRLA_MODE_Pos          2                                              /**< (SERCOM_I2CM_CTRLA) Operating Mode Position */
#define SERCOM_I2CM_CTRLA_MODE_Msk          (_U_(0x7) << SERCOM_I2CM_CTRLA_MODE_Pos)       /**< (SERCOM_I2CM_CTRLA) Operating Mode Mask */
#define SERCOM_I2CM_CTRLA_MODE(value)       (SERCOM_I2CM_CTRLA_MODE_Msk & ((value) << SERCOM_I2CM_CTRLA_MODE_Pos))
#define   SERCOM_I2CM_CTRLA_MODE_USART_EXT_CLK_Val _U_(0x0)                                       /**< (SERCOM_I2CM_CTRLA) USART with external clock  */
#define   SERCOM_I2CM_CTRLA_MODE_USART_INT_CLK_Val _U_(0x1)                                       /**< (SERCOM_I2CM_CTRLA) USART with internal clock  */
#define   SERCOM_I2CM_CTRLA_MODE_SPI_SLAVE_Val _U_(0x2)                                       /**< (SERCOM_I2CM_CTRLA) SPI in slave operation  */
#define   SERCOM_I2CM_CTRLA_MODE_SPI_MASTER_Val _U_(0x3)                                       /**< (SERCOM_I2CM_CTRLA) SPI in master operation  */
#define   SERCOM_I2CM_CTRLA_MODE_I2C_SLAVE_Val _U_(0x4)                                       /**< (SERCOM_I2CM_CTRLA) I2C slave operation  */
#define   SERCOM_I2CM_CTRLA_MODE_I2C_MASTER_Val _U_(0x5)                                       /**< (SERCOM_I2CM_CTRLA) I2C master operation  */
#define SERCOM_I2CM_CTRLA_MODE_USART_EXT_CLK (SERCOM_I2CM_CTRLA_MODE_USART_EXT_CLK_Val << SERCOM_I2CM_CTRLA_MODE_Pos)  /**< (SERCOM_I2CM_CTRLA) USART with external clock Position  */
#define SERCOM_I2CM_CTRLA_MODE_USART_INT_CLK (SERCOM_I2CM_CTRLA_MODE_USART_INT_CLK_Val << SERCOM_I2CM_CTRLA_MODE_Pos)  /**< (SERCOM_I2CM_CTRLA) USART with internal clock Position  */
#define SERCOM_I2CM_CTRLA_MODE_SPI_SLAVE    (SERCOM_I2CM_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_I2CM_CTRLA_MODE_Pos)  /**< (SERCOM_I2CM_CTRLA) SPI in slave operation Position  */
#define SERCOM_I2CM_CTRLA_MODE_SPI_MASTER   (SERCOM_I2CM_CTRLA_MODE_SPI_MASTER_Val << SERCOM_I2CM_CTRLA_MODE_Pos)  /**< (SERCOM_I2CM_CTRLA) SPI in master operation Position  */
#define SERCOM_I2CM_CTRLA_MODE_I2C_SLAVE    (SERCOM_I2CM_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_I2CM_CTRLA_MODE_Pos)  /**< (SERCOM_I2CM_CTRLA) I2C slave operation Position  */
#define SERCOM_I2CM_CTRLA_MODE_I2C_MASTER   (SERCOM_I2CM_CTRLA_MODE_I2C_MASTER_Val << SERCOM_I2CM_CTRLA_MODE_Pos)  /**< (SERCOM_I2CM_CTRLA) I2C master operation Position  */
#define SERCOM_I2CM_CTRLA_RUNSTDBY_Pos      7                                              /**< (SERCOM_I2CM_CTRLA) Run in Standby Position */
#define SERCOM_I2CM_CTRLA_RUNSTDBY_Msk      (_U_(0x1) << SERCOM_I2CM_CTRLA_RUNSTDBY_Pos)   /**< (SERCOM_I2CM_CTRLA) Run in Standby Mask */
#define SERCOM_I2CM_CTRLA_RUNSTDBY          SERCOM_I2CM_CTRLA_RUNSTDBY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_CTRLA_RUNSTDBY_Msk instead */
#define SERCOM_I2CM_CTRLA_PINOUT_Pos        16                                             /**< (SERCOM_I2CM_CTRLA) Pin Usage Position */
#define SERCOM_I2CM_CTRLA_PINOUT_Msk        (_U_(0x1) << SERCOM_I2CM_CTRLA_PINOUT_Pos)     /**< (SERCOM_I2CM_CTRLA) Pin Usage Mask */
#define SERCOM_I2CM_CTRLA_PINOUT            SERCOM_I2CM_CTRLA_PINOUT_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_CTRLA_PINOUT_Msk instead */
#define SERCOM_I2CM_CTRLA_SDAHOLD_Pos       20                                             /**< (SERCOM_I2CM_CTRLA) SDA Hold Time Position */
#define SERCOM_I2CM_CTRLA_SDAHOLD_Msk       (_U_(0x3) << SERCOM_I2CM_CTRLA_SDAHOLD_Pos)    /**< (SERCOM_I2CM_CTRLA) SDA Hold Time Mask */
#define SERCOM_I2CM_CTRLA_SDAHOLD(value)    (SERCOM_I2CM_CTRLA_SDAHOLD_Msk & ((value) << SERCOM_I2CM_CTRLA_SDAHOLD_Pos))
#define   SERCOM_I2CM_CTRLA_SDAHOLD_DISABLE_Val _U_(0x0)                                       /**< (SERCOM_I2CM_CTRLA) Disabled  */
#define   SERCOM_I2CM_CTRLA_SDAHOLD_75NS_Val _U_(0x1)                                       /**< (SERCOM_I2CM_CTRLA) 50-100ns hold time  */
#define   SERCOM_I2CM_CTRLA_SDAHOLD_450NS_Val _U_(0x2)                                       /**< (SERCOM_I2CM_CTRLA) 300-600ns hold time  */
#define   SERCOM_I2CM_CTRLA_SDAHOLD_600NS_Val _U_(0x3)                                       /**< (SERCOM_I2CM_CTRLA) 400-800ns hold time  */
#define SERCOM_I2CM_CTRLA_SDAHOLD_DISABLE   (SERCOM_I2CM_CTRLA_SDAHOLD_DISABLE_Val << SERCOM_I2CM_CTRLA_SDAHOLD_Pos)  /**< (SERCOM_I2CM_CTRLA) Disabled Position  */
#define SERCOM_I2CM_CTRLA_SDAHOLD_75NS      (SERCOM_I2CM_CTRLA_SDAHOLD_75NS_Val << SERCOM_I2CM_CTRLA_SDAHOLD_Pos)  /**< (SERCOM_I2CM_CTRLA) 50-100ns hold time Position  */
#define SERCOM_I2CM_CTRLA_SDAHOLD_450NS     (SERCOM_I2CM_CTRLA_SDAHOLD_450NS_Val << SERCOM_I2CM_CTRLA_SDAHOLD_Pos)  /**< (SERCOM_I2CM_CTRLA) 300-600ns hold time Position  */
#define SERCOM_I2CM_CTRLA_SDAHOLD_600NS     (SERCOM_I2CM_CTRLA_SDAHOLD_600NS_Val << SERCOM_I2CM_CTRLA_SDAHOLD_Pos)  /**< (SERCOM_I2CM_CTRLA) 400-800ns hold time Position  */
#define SERCOM_I2CM_CTRLA_MEXTTOEN_Pos      22                                             /**< (SERCOM_I2CM_CTRLA) Master SCL Low Extend Timeout Position */
#define SERCOM_I2CM_CTRLA_MEXTTOEN_Msk      (_U_(0x1) << SERCOM_I2CM_CTRLA_MEXTTOEN_Pos)   /**< (SERCOM_I2CM_CTRLA) Master SCL Low Extend Timeout Mask */
#define SERCOM_I2CM_CTRLA_MEXTTOEN          SERCOM_I2CM_CTRLA_MEXTTOEN_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_CTRLA_MEXTTOEN_Msk instead */
#define SERCOM_I2CM_CTRLA_SEXTTOEN_Pos      23                                             /**< (SERCOM_I2CM_CTRLA) Slave SCL Low Extend Timeout Position */
#define SERCOM_I2CM_CTRLA_SEXTTOEN_Msk      (_U_(0x1) << SERCOM_I2CM_CTRLA_SEXTTOEN_Pos)   /**< (SERCOM_I2CM_CTRLA) Slave SCL Low Extend Timeout Mask */
#define SERCOM_I2CM_CTRLA_SEXTTOEN          SERCOM_I2CM_CTRLA_SEXTTOEN_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_CTRLA_SEXTTOEN_Msk instead */
#define SERCOM_I2CM_CTRLA_SPEED_Pos         24                                             /**< (SERCOM_I2CM_CTRLA) Transfer Speed Position */
#define SERCOM_I2CM_CTRLA_SPEED_Msk         (_U_(0x3) << SERCOM_I2CM_CTRLA_SPEED_Pos)      /**< (SERCOM_I2CM_CTRLA) Transfer Speed Mask */
#define SERCOM_I2CM_CTRLA_SPEED(value)      (SERCOM_I2CM_CTRLA_SPEED_Msk & ((value) << SERCOM_I2CM_CTRLA_SPEED_Pos))
#define   SERCOM_I2CM_CTRLA_SPEED_STANDARD_AND_FAST_MODE_Val _U_(0x0)                                       /**< (SERCOM_I2CM_CTRLA) Standard Mode(Sm) Upto 100kHz and Fast Mode(Fm) Upto 400kHz   */
#define   SERCOM_I2CM_CTRLA_SPEED_FASTPLUS_MODE_Val _U_(0x1)                                       /**< (SERCOM_I2CM_CTRLA) Fast-mode Plus Upto 1MHz  */
#define   SERCOM_I2CM_CTRLA_SPEED_HIGH_SPEED_MODE_Val _U_(0x2)                                       /**< (SERCOM_I2CM_CTRLA) High-speed mode Upto 3.4MHz  */
#define SERCOM_I2CM_CTRLA_SPEED_STANDARD_AND_FAST_MODE (SERCOM_I2CM_CTRLA_SPEED_STANDARD_AND_FAST_MODE_Val << SERCOM_I2CM_CTRLA_SPEED_Pos)  /**< (SERCOM_I2CM_CTRLA) Standard Mode(Sm) Upto 100kHz and Fast Mode(Fm) Upto 400kHz  Position  */
#define SERCOM_I2CM_CTRLA_SPEED_FASTPLUS_MODE (SERCOM_I2CM_CTRLA_SPEED_FASTPLUS_MODE_Val << SERCOM_I2CM_CTRLA_SPEED_Pos)  /**< (SERCOM_I2CM_CTRLA) Fast-mode Plus Upto 1MHz Position  */
#define SERCOM_I2CM_CTRLA_SPEED_HIGH_SPEED_MODE (SERCOM_I2CM_CTRLA_SPEED_HIGH_SPEED_MODE_Val << SERCOM_I2CM_CTRLA_SPEED_Pos)  /**< (SERCOM_I2CM_CTRLA) High-speed mode Upto 3.4MHz Position  */
#define SERCOM_I2CM_CTRLA_SCLSM_Pos         27                                             /**< (SERCOM_I2CM_CTRLA) SCL Clock Stretch Mode Position */
#define SERCOM_I2CM_CTRLA_SCLSM_Msk         (_U_(0x1) << SERCOM_I2CM_CTRLA_SCLSM_Pos)      /**< (SERCOM_I2CM_CTRLA) SCL Clock Stretch Mode Mask */
#define SERCOM_I2CM_CTRLA_SCLSM             SERCOM_I2CM_CTRLA_SCLSM_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_CTRLA_SCLSM_Msk instead */
#define SERCOM_I2CM_CTRLA_INACTOUT_Pos      28                                             /**< (SERCOM_I2CM_CTRLA) Inactive Time-Out Position */
#define SERCOM_I2CM_CTRLA_INACTOUT_Msk      (_U_(0x3) << SERCOM_I2CM_CTRLA_INACTOUT_Pos)   /**< (SERCOM_I2CM_CTRLA) Inactive Time-Out Mask */
#define SERCOM_I2CM_CTRLA_INACTOUT(value)   (SERCOM_I2CM_CTRLA_INACTOUT_Msk & ((value) << SERCOM_I2CM_CTRLA_INACTOUT_Pos))
#define   SERCOM_I2CM_CTRLA_INACTOUT_DISABLE_Val _U_(0x0)                                       /**< (SERCOM_I2CM_CTRLA) Disabled  */
#define   SERCOM_I2CM_CTRLA_INACTOUT_55US_Val _U_(0x1)                                       /**< (SERCOM_I2CM_CTRLA) 5-6 SCL Time-Out(50-60us)  */
#define   SERCOM_I2CM_CTRLA_INACTOUT_105US_Val _U_(0x2)                                       /**< (SERCOM_I2CM_CTRLA) 10-11 SCL Time-Out(100-110us)  */
#define   SERCOM_I2CM_CTRLA_INACTOUT_205US_Val _U_(0x3)                                       /**< (SERCOM_I2CM_CTRLA) 20-21 SCL Time-Out(200-210us)  */
#define SERCOM_I2CM_CTRLA_INACTOUT_DISABLE  (SERCOM_I2CM_CTRLA_INACTOUT_DISABLE_Val << SERCOM_I2CM_CTRLA_INACTOUT_Pos)  /**< (SERCOM_I2CM_CTRLA) Disabled Position  */
#define SERCOM_I2CM_CTRLA_INACTOUT_55US     (SERCOM_I2CM_CTRLA_INACTOUT_55US_Val << SERCOM_I2CM_CTRLA_INACTOUT_Pos)  /**< (SERCOM_I2CM_CTRLA) 5-6 SCL Time-Out(50-60us) Position  */
#define SERCOM_I2CM_CTRLA_INACTOUT_105US    (SERCOM_I2CM_CTRLA_INACTOUT_105US_Val << SERCOM_I2CM_CTRLA_INACTOUT_Pos)  /**< (SERCOM_I2CM_CTRLA) 10-11 SCL Time-Out(100-110us) Position  */
#define SERCOM_I2CM_CTRLA_INACTOUT_205US    (SERCOM_I2CM_CTRLA_INACTOUT_205US_Val << SERCOM_I2CM_CTRLA_INACTOUT_Pos)  /**< (SERCOM_I2CM_CTRLA) 20-21 SCL Time-Out(200-210us) Position  */
#define SERCOM_I2CM_CTRLA_LOWTOUTEN_Pos     30                                             /**< (SERCOM_I2CM_CTRLA) SCL Low Timeout Enable Position */
#define SERCOM_I2CM_CTRLA_LOWTOUTEN_Msk     (_U_(0x1) << SERCOM_I2CM_CTRLA_LOWTOUTEN_Pos)  /**< (SERCOM_I2CM_CTRLA) SCL Low Timeout Enable Mask */
#define SERCOM_I2CM_CTRLA_LOWTOUTEN         SERCOM_I2CM_CTRLA_LOWTOUTEN_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_CTRLA_LOWTOUTEN_Msk instead */
#define SERCOM_I2CM_CTRLA_MASK              _U_(0x7BF1009F)                                /**< \deprecated (SERCOM_I2CM_CTRLA) Register MASK  (Use SERCOM_I2CM_CTRLA_Msk instead)  */
#define SERCOM_I2CM_CTRLA_Msk               _U_(0x7BF1009F)                                /**< (SERCOM_I2CM_CTRLA) Register Mask  */


/* -------- SERCOM_I2CS_CTRLA : (SERCOM Offset: 0x00) (R/W 32) I2CS Control A -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint32_t ENABLE:1;                  /**< bit:      1  Enable                                   */
    uint32_t MODE:3;                    /**< bit:   2..4  Operating Mode                           */
    uint32_t :2;                        /**< bit:   5..6  Reserved */
    uint32_t RUNSTDBY:1;                /**< bit:      7  Run during Standby                       */
    uint32_t :8;                        /**< bit:  8..15  Reserved */
    uint32_t PINOUT:1;                  /**< bit:     16  Pin Usage                                */
    uint32_t :3;                        /**< bit: 17..19  Reserved */
    uint32_t SDAHOLD:2;                 /**< bit: 20..21  SDA Hold Time                            */
    uint32_t :1;                        /**< bit:     22  Reserved */
    uint32_t SEXTTOEN:1;                /**< bit:     23  Slave SCL Low Extend Timeout             */
    uint32_t SPEED:2;                   /**< bit: 24..25  Transfer Speed                           */
    uint32_t :1;                        /**< bit:     26  Reserved */
    uint32_t SCLSM:1;                   /**< bit:     27  SCL Clock Stretch Mode                   */
    uint32_t :2;                        /**< bit: 28..29  Reserved */
    uint32_t LOWTOUTEN:1;               /**< bit:     30  SCL Low Timeout Enable                   */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_I2CS_CTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_CTRLA_OFFSET            (0x00)                                        /**<  (SERCOM_I2CS_CTRLA) I2CS Control A  Offset */
#define SERCOM_I2CS_CTRLA_RESETVALUE        _U_(0x00)                                     /**<  (SERCOM_I2CS_CTRLA) I2CS Control A  Reset Value */

#define SERCOM_I2CS_CTRLA_SWRST_Pos         0                                              /**< (SERCOM_I2CS_CTRLA) Software Reset Position */
#define SERCOM_I2CS_CTRLA_SWRST_Msk         (_U_(0x1) << SERCOM_I2CS_CTRLA_SWRST_Pos)      /**< (SERCOM_I2CS_CTRLA) Software Reset Mask */
#define SERCOM_I2CS_CTRLA_SWRST             SERCOM_I2CS_CTRLA_SWRST_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_CTRLA_SWRST_Msk instead */
#define SERCOM_I2CS_CTRLA_ENABLE_Pos        1                                              /**< (SERCOM_I2CS_CTRLA) Enable Position */
#define SERCOM_I2CS_CTRLA_ENABLE_Msk        (_U_(0x1) << SERCOM_I2CS_CTRLA_ENABLE_Pos)     /**< (SERCOM_I2CS_CTRLA) Enable Mask */
#define SERCOM_I2CS_CTRLA_ENABLE            SERCOM_I2CS_CTRLA_ENABLE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_CTRLA_ENABLE_Msk instead */
#define SERCOM_I2CS_CTRLA_MODE_Pos          2                                              /**< (SERCOM_I2CS_CTRLA) Operating Mode Position */
#define SERCOM_I2CS_CTRLA_MODE_Msk          (_U_(0x7) << SERCOM_I2CS_CTRLA_MODE_Pos)       /**< (SERCOM_I2CS_CTRLA) Operating Mode Mask */
#define SERCOM_I2CS_CTRLA_MODE(value)       (SERCOM_I2CS_CTRLA_MODE_Msk & ((value) << SERCOM_I2CS_CTRLA_MODE_Pos))
#define   SERCOM_I2CS_CTRLA_MODE_USART_EXT_CLK_Val _U_(0x0)                                       /**< (SERCOM_I2CS_CTRLA) USART with external clock  */
#define   SERCOM_I2CS_CTRLA_MODE_USART_INT_CLK_Val _U_(0x1)                                       /**< (SERCOM_I2CS_CTRLA) USART with internal clock  */
#define   SERCOM_I2CS_CTRLA_MODE_SPI_SLAVE_Val _U_(0x2)                                       /**< (SERCOM_I2CS_CTRLA) SPI in slave operation  */
#define   SERCOM_I2CS_CTRLA_MODE_SPI_MASTER_Val _U_(0x3)                                       /**< (SERCOM_I2CS_CTRLA) SPI in master operation  */
#define   SERCOM_I2CS_CTRLA_MODE_I2C_SLAVE_Val _U_(0x4)                                       /**< (SERCOM_I2CS_CTRLA) I2C slave operation  */
#define   SERCOM_I2CS_CTRLA_MODE_I2C_MASTER_Val _U_(0x5)                                       /**< (SERCOM_I2CS_CTRLA) I2C master operation  */
#define SERCOM_I2CS_CTRLA_MODE_USART_EXT_CLK (SERCOM_I2CS_CTRLA_MODE_USART_EXT_CLK_Val << SERCOM_I2CS_CTRLA_MODE_Pos)  /**< (SERCOM_I2CS_CTRLA) USART with external clock Position  */
#define SERCOM_I2CS_CTRLA_MODE_USART_INT_CLK (SERCOM_I2CS_CTRLA_MODE_USART_INT_CLK_Val << SERCOM_I2CS_CTRLA_MODE_Pos)  /**< (SERCOM_I2CS_CTRLA) USART with internal clock Position  */
#define SERCOM_I2CS_CTRLA_MODE_SPI_SLAVE    (SERCOM_I2CS_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_I2CS_CTRLA_MODE_Pos)  /**< (SERCOM_I2CS_CTRLA) SPI in slave operation Position  */
#define SERCOM_I2CS_CTRLA_MODE_SPI_MASTER   (SERCOM_I2CS_CTRLA_MODE_SPI_MASTER_Val << SERCOM_I2CS_CTRLA_MODE_Pos)  /**< (SERCOM_I2CS_CTRLA) SPI in master operation Position  */
#define SERCOM_I2CS_CTRLA_MODE_I2C_SLAVE    (SERCOM_I2CS_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_I2CS_CTRLA_MODE_Pos)  /**< (SERCOM_I2CS_CTRLA) I2C slave operation Position  */
#define SERCOM_I2CS_CTRLA_MODE_I2C_MASTER   (SERCOM_I2CS_CTRLA_MODE_I2C_MASTER_Val << SERCOM_I2CS_CTRLA_MODE_Pos)  /**< (SERCOM_I2CS_CTRLA) I2C master operation Position  */
#define SERCOM_I2CS_CTRLA_RUNSTDBY_Pos      7                                              /**< (SERCOM_I2CS_CTRLA) Run during Standby Position */
#define SERCOM_I2CS_CTRLA_RUNSTDBY_Msk      (_U_(0x1) << SERCOM_I2CS_CTRLA_RUNSTDBY_Pos)   /**< (SERCOM_I2CS_CTRLA) Run during Standby Mask */
#define SERCOM_I2CS_CTRLA_RUNSTDBY          SERCOM_I2CS_CTRLA_RUNSTDBY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_CTRLA_RUNSTDBY_Msk instead */
#define SERCOM_I2CS_CTRLA_PINOUT_Pos        16                                             /**< (SERCOM_I2CS_CTRLA) Pin Usage Position */
#define SERCOM_I2CS_CTRLA_PINOUT_Msk        (_U_(0x1) << SERCOM_I2CS_CTRLA_PINOUT_Pos)     /**< (SERCOM_I2CS_CTRLA) Pin Usage Mask */
#define SERCOM_I2CS_CTRLA_PINOUT            SERCOM_I2CS_CTRLA_PINOUT_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_CTRLA_PINOUT_Msk instead */
#define SERCOM_I2CS_CTRLA_SDAHOLD_Pos       20                                             /**< (SERCOM_I2CS_CTRLA) SDA Hold Time Position */
#define SERCOM_I2CS_CTRLA_SDAHOLD_Msk       (_U_(0x3) << SERCOM_I2CS_CTRLA_SDAHOLD_Pos)    /**< (SERCOM_I2CS_CTRLA) SDA Hold Time Mask */
#define SERCOM_I2CS_CTRLA_SDAHOLD(value)    (SERCOM_I2CS_CTRLA_SDAHOLD_Msk & ((value) << SERCOM_I2CS_CTRLA_SDAHOLD_Pos))
#define   SERCOM_I2CS_CTRLA_SDAHOLD_DISABLE_Val _U_(0x0)                                       /**< (SERCOM_I2CS_CTRLA) Disabled  */
#define   SERCOM_I2CS_CTRLA_SDAHOLD_75NS_Val _U_(0x1)                                       /**< (SERCOM_I2CS_CTRLA) 50-100ns hold time  */
#define   SERCOM_I2CS_CTRLA_SDAHOLD_450NS_Val _U_(0x2)                                       /**< (SERCOM_I2CS_CTRLA) 300-600ns hold time  */
#define   SERCOM_I2CS_CTRLA_SDAHOLD_600NS_Val _U_(0x3)                                       /**< (SERCOM_I2CS_CTRLA) 400-800ns hold time  */
#define SERCOM_I2CS_CTRLA_SDAHOLD_DISABLE   (SERCOM_I2CS_CTRLA_SDAHOLD_DISABLE_Val << SERCOM_I2CS_CTRLA_SDAHOLD_Pos)  /**< (SERCOM_I2CS_CTRLA) Disabled Position  */
#define SERCOM_I2CS_CTRLA_SDAHOLD_75NS      (SERCOM_I2CS_CTRLA_SDAHOLD_75NS_Val << SERCOM_I2CS_CTRLA_SDAHOLD_Pos)  /**< (SERCOM_I2CS_CTRLA) 50-100ns hold time Position  */
#define SERCOM_I2CS_CTRLA_SDAHOLD_450NS     (SERCOM_I2CS_CTRLA_SDAHOLD_450NS_Val << SERCOM_I2CS_CTRLA_SDAHOLD_Pos)  /**< (SERCOM_I2CS_CTRLA) 300-600ns hold time Position  */
#define SERCOM_I2CS_CTRLA_SDAHOLD_600NS     (SERCOM_I2CS_CTRLA_SDAHOLD_600NS_Val << SERCOM_I2CS_CTRLA_SDAHOLD_Pos)  /**< (SERCOM_I2CS_CTRLA) 400-800ns hold time Position  */
#define SERCOM_I2CS_CTRLA_SEXTTOEN_Pos      23                                             /**< (SERCOM_I2CS_CTRLA) Slave SCL Low Extend Timeout Position */
#define SERCOM_I2CS_CTRLA_SEXTTOEN_Msk      (_U_(0x1) << SERCOM_I2CS_CTRLA_SEXTTOEN_Pos)   /**< (SERCOM_I2CS_CTRLA) Slave SCL Low Extend Timeout Mask */
#define SERCOM_I2CS_CTRLA_SEXTTOEN          SERCOM_I2CS_CTRLA_SEXTTOEN_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_CTRLA_SEXTTOEN_Msk instead */
#define SERCOM_I2CS_CTRLA_SPEED_Pos         24                                             /**< (SERCOM_I2CS_CTRLA) Transfer Speed Position */
#define SERCOM_I2CS_CTRLA_SPEED_Msk         (_U_(0x3) << SERCOM_I2CS_CTRLA_SPEED_Pos)      /**< (SERCOM_I2CS_CTRLA) Transfer Speed Mask */
#define SERCOM_I2CS_CTRLA_SPEED(value)      (SERCOM_I2CS_CTRLA_SPEED_Msk & ((value) << SERCOM_I2CS_CTRLA_SPEED_Pos))
#define   SERCOM_I2CS_CTRLA_SPEED_STANDARD_AND_FAST_MODE_Val _U_(0x0)                                       /**< (SERCOM_I2CS_CTRLA) Standard Mode(Sm) Upto 100kHz and Fast Mode(Fm) Upto 400kHz   */
#define   SERCOM_I2CS_CTRLA_SPEED_FASTPLUS_MODE_Val _U_(0x1)                                       /**< (SERCOM_I2CS_CTRLA) Fast-mode Plus Upto 1MHz  */
#define   SERCOM_I2CS_CTRLA_SPEED_HIGH_SPEED_MODE_Val _U_(0x2)                                       /**< (SERCOM_I2CS_CTRLA) High-speed mode Upto 3.4MHz  */
#define SERCOM_I2CS_CTRLA_SPEED_STANDARD_AND_FAST_MODE (SERCOM_I2CS_CTRLA_SPEED_STANDARD_AND_FAST_MODE_Val << SERCOM_I2CS_CTRLA_SPEED_Pos)  /**< (SERCOM_I2CS_CTRLA) Standard Mode(Sm) Upto 100kHz and Fast Mode(Fm) Upto 400kHz  Position  */
#define SERCOM_I2CS_CTRLA_SPEED_FASTPLUS_MODE (SERCOM_I2CS_CTRLA_SPEED_FASTPLUS_MODE_Val << SERCOM_I2CS_CTRLA_SPEED_Pos)  /**< (SERCOM_I2CS_CTRLA) Fast-mode Plus Upto 1MHz Position  */
#define SERCOM_I2CS_CTRLA_SPEED_HIGH_SPEED_MODE (SERCOM_I2CS_CTRLA_SPEED_HIGH_SPEED_MODE_Val << SERCOM_I2CS_CTRLA_SPEED_Pos)  /**< (SERCOM_I2CS_CTRLA) High-speed mode Upto 3.4MHz Position  */
#define SERCOM_I2CS_CTRLA_SCLSM_Pos         27                                             /**< (SERCOM_I2CS_CTRLA) SCL Clock Stretch Mode Position */
#define SERCOM_I2CS_CTRLA_SCLSM_Msk         (_U_(0x1) << SERCOM_I2CS_CTRLA_SCLSM_Pos)      /**< (SERCOM_I2CS_CTRLA) SCL Clock Stretch Mode Mask */
#define SERCOM_I2CS_CTRLA_SCLSM             SERCOM_I2CS_CTRLA_SCLSM_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_CTRLA_SCLSM_Msk instead */
#define SERCOM_I2CS_CTRLA_LOWTOUTEN_Pos     30                                             /**< (SERCOM_I2CS_CTRLA) SCL Low Timeout Enable Position */
#define SERCOM_I2CS_CTRLA_LOWTOUTEN_Msk     (_U_(0x1) << SERCOM_I2CS_CTRLA_LOWTOUTEN_Pos)  /**< (SERCOM_I2CS_CTRLA) SCL Low Timeout Enable Mask */
#define SERCOM_I2CS_CTRLA_LOWTOUTEN         SERCOM_I2CS_CTRLA_LOWTOUTEN_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_CTRLA_LOWTOUTEN_Msk instead */
#define SERCOM_I2CS_CTRLA_MASK              _U_(0x4BB1009F)                                /**< \deprecated (SERCOM_I2CS_CTRLA) Register MASK  (Use SERCOM_I2CS_CTRLA_Msk instead)  */
#define SERCOM_I2CS_CTRLA_Msk               _U_(0x4BB1009F)                                /**< (SERCOM_I2CS_CTRLA) Register Mask  */


/* -------- SERCOM_SPIM_CTRLA : (SERCOM Offset: 0x00) (R/W 32) SPIM Control A -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint32_t ENABLE:1;                  /**< bit:      1  Enable                                   */
    uint32_t MODE:3;                    /**< bit:   2..4  Operating Mode                           */
    uint32_t :2;                        /**< bit:   5..6  Reserved */
    uint32_t RUNSTDBY:1;                /**< bit:      7  Run during Standby                       */
    uint32_t IBON:1;                    /**< bit:      8  Immediate Buffer Overflow Notification   */
    uint32_t :7;                        /**< bit:  9..15  Reserved */
    uint32_t DOPO:2;                    /**< bit: 16..17  Data Out Pinout                          */
    uint32_t :2;                        /**< bit: 18..19  Reserved */
    uint32_t DIPO:2;                    /**< bit: 20..21  Data In Pinout                           */
    uint32_t :2;                        /**< bit: 22..23  Reserved */
    uint32_t FORM:4;                    /**< bit: 24..27  Frame Format                             */
    uint32_t CPHA:1;                    /**< bit:     28  Clock Phase                              */
    uint32_t CPOL:1;                    /**< bit:     29  Clock Polarity                           */
    uint32_t DORD:1;                    /**< bit:     30  Data Order                               */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_SPIM_CTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIM_CTRLA_OFFSET            (0x00)                                        /**<  (SERCOM_SPIM_CTRLA) SPIM Control A  Offset */
#define SERCOM_SPIM_CTRLA_RESETVALUE        _U_(0x00)                                     /**<  (SERCOM_SPIM_CTRLA) SPIM Control A  Reset Value */

#define SERCOM_SPIM_CTRLA_SWRST_Pos         0                                              /**< (SERCOM_SPIM_CTRLA) Software Reset Position */
#define SERCOM_SPIM_CTRLA_SWRST_Msk         (_U_(0x1) << SERCOM_SPIM_CTRLA_SWRST_Pos)      /**< (SERCOM_SPIM_CTRLA) Software Reset Mask */
#define SERCOM_SPIM_CTRLA_SWRST             SERCOM_SPIM_CTRLA_SWRST_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_CTRLA_SWRST_Msk instead */
#define SERCOM_SPIM_CTRLA_ENABLE_Pos        1                                              /**< (SERCOM_SPIM_CTRLA) Enable Position */
#define SERCOM_SPIM_CTRLA_ENABLE_Msk        (_U_(0x1) << SERCOM_SPIM_CTRLA_ENABLE_Pos)     /**< (SERCOM_SPIM_CTRLA) Enable Mask */
#define SERCOM_SPIM_CTRLA_ENABLE            SERCOM_SPIM_CTRLA_ENABLE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_CTRLA_ENABLE_Msk instead */
#define SERCOM_SPIM_CTRLA_MODE_Pos          2                                              /**< (SERCOM_SPIM_CTRLA) Operating Mode Position */
#define SERCOM_SPIM_CTRLA_MODE_Msk          (_U_(0x7) << SERCOM_SPIM_CTRLA_MODE_Pos)       /**< (SERCOM_SPIM_CTRLA) Operating Mode Mask */
#define SERCOM_SPIM_CTRLA_MODE(value)       (SERCOM_SPIM_CTRLA_MODE_Msk & ((value) << SERCOM_SPIM_CTRLA_MODE_Pos))
#define   SERCOM_SPIM_CTRLA_MODE_USART_EXT_CLK_Val _U_(0x0)                                       /**< (SERCOM_SPIM_CTRLA) USART with external clock  */
#define   SERCOM_SPIM_CTRLA_MODE_USART_INT_CLK_Val _U_(0x1)                                       /**< (SERCOM_SPIM_CTRLA) USART with internal clock  */
#define   SERCOM_SPIM_CTRLA_MODE_SPI_SLAVE_Val _U_(0x2)                                       /**< (SERCOM_SPIM_CTRLA) SPI in slave operation  */
#define   SERCOM_SPIM_CTRLA_MODE_SPI_MASTER_Val _U_(0x3)                                       /**< (SERCOM_SPIM_CTRLA) SPI in master operation  */
#define   SERCOM_SPIM_CTRLA_MODE_I2C_SLAVE_Val _U_(0x4)                                       /**< (SERCOM_SPIM_CTRLA) I2C slave operation  */
#define   SERCOM_SPIM_CTRLA_MODE_I2C_MASTER_Val _U_(0x5)                                       /**< (SERCOM_SPIM_CTRLA) I2C master operation  */
#define SERCOM_SPIM_CTRLA_MODE_USART_EXT_CLK (SERCOM_SPIM_CTRLA_MODE_USART_EXT_CLK_Val << SERCOM_SPIM_CTRLA_MODE_Pos)  /**< (SERCOM_SPIM_CTRLA) USART with external clock Position  */
#define SERCOM_SPIM_CTRLA_MODE_USART_INT_CLK (SERCOM_SPIM_CTRLA_MODE_USART_INT_CLK_Val << SERCOM_SPIM_CTRLA_MODE_Pos)  /**< (SERCOM_SPIM_CTRLA) USART with internal clock Position  */
#define SERCOM_SPIM_CTRLA_MODE_SPI_SLAVE    (SERCOM_SPIM_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_SPIM_CTRLA_MODE_Pos)  /**< (SERCOM_SPIM_CTRLA) SPI in slave operation Position  */
#define SERCOM_SPIM_CTRLA_MODE_SPI_MASTER   (SERCOM_SPIM_CTRLA_MODE_SPI_MASTER_Val << SERCOM_SPIM_CTRLA_MODE_Pos)  /**< (SERCOM_SPIM_CTRLA) SPI in master operation Position  */
#define SERCOM_SPIM_CTRLA_MODE_I2C_SLAVE    (SERCOM_SPIM_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_SPIM_CTRLA_MODE_Pos)  /**< (SERCOM_SPIM_CTRLA) I2C slave operation Position  */
#define SERCOM_SPIM_CTRLA_MODE_I2C_MASTER   (SERCOM_SPIM_CTRLA_MODE_I2C_MASTER_Val << SERCOM_SPIM_CTRLA_MODE_Pos)  /**< (SERCOM_SPIM_CTRLA) I2C master operation Position  */
#define SERCOM_SPIM_CTRLA_RUNSTDBY_Pos      7                                              /**< (SERCOM_SPIM_CTRLA) Run during Standby Position */
#define SERCOM_SPIM_CTRLA_RUNSTDBY_Msk      (_U_(0x1) << SERCOM_SPIM_CTRLA_RUNSTDBY_Pos)   /**< (SERCOM_SPIM_CTRLA) Run during Standby Mask */
#define SERCOM_SPIM_CTRLA_RUNSTDBY          SERCOM_SPIM_CTRLA_RUNSTDBY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_CTRLA_RUNSTDBY_Msk instead */
#define SERCOM_SPIM_CTRLA_IBON_Pos          8                                              /**< (SERCOM_SPIM_CTRLA) Immediate Buffer Overflow Notification Position */
#define SERCOM_SPIM_CTRLA_IBON_Msk          (_U_(0x1) << SERCOM_SPIM_CTRLA_IBON_Pos)       /**< (SERCOM_SPIM_CTRLA) Immediate Buffer Overflow Notification Mask */
#define SERCOM_SPIM_CTRLA_IBON              SERCOM_SPIM_CTRLA_IBON_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_CTRLA_IBON_Msk instead */
#define SERCOM_SPIM_CTRLA_DOPO_Pos          16                                             /**< (SERCOM_SPIM_CTRLA) Data Out Pinout Position */
#define SERCOM_SPIM_CTRLA_DOPO_Msk          (_U_(0x3) << SERCOM_SPIM_CTRLA_DOPO_Pos)       /**< (SERCOM_SPIM_CTRLA) Data Out Pinout Mask */
#define SERCOM_SPIM_CTRLA_DOPO(value)       (SERCOM_SPIM_CTRLA_DOPO_Msk & ((value) << SERCOM_SPIM_CTRLA_DOPO_Pos))
#define   SERCOM_SPIM_CTRLA_DOPO_PAD0_Val   _U_(0x0)                                       /**< (SERCOM_SPIM_CTRLA) DO on PAD[0], SCK on PAD[1] and SS on PAD[2]  */
#define   SERCOM_SPIM_CTRLA_DOPO_PAD1_Val   _U_(0x1)                                       /**< (SERCOM_SPIM_CTRLA) DO on PAD[2], SCK on PAD[3] and SS on PAD[1]  */
#define   SERCOM_SPIM_CTRLA_DOPO_PAD2_Val   _U_(0x2)                                       /**< (SERCOM_SPIM_CTRLA) DO on PAD[3], SCK on PAD[1] and SS on PAD[2]  */
#define   SERCOM_SPIM_CTRLA_DOPO_PAD3_Val   _U_(0x3)                                       /**< (SERCOM_SPIM_CTRLA) DO on PAD[0], SCK on PAD[3] and SS on PAD[1]  */
#define SERCOM_SPIM_CTRLA_DOPO_PAD0         (SERCOM_SPIM_CTRLA_DOPO_PAD0_Val << SERCOM_SPIM_CTRLA_DOPO_Pos)  /**< (SERCOM_SPIM_CTRLA) DO on PAD[0], SCK on PAD[1] and SS on PAD[2] Position  */
#define SERCOM_SPIM_CTRLA_DOPO_PAD1         (SERCOM_SPIM_CTRLA_DOPO_PAD1_Val << SERCOM_SPIM_CTRLA_DOPO_Pos)  /**< (SERCOM_SPIM_CTRLA) DO on PAD[2], SCK on PAD[3] and SS on PAD[1] Position  */
#define SERCOM_SPIM_CTRLA_DOPO_PAD2         (SERCOM_SPIM_CTRLA_DOPO_PAD2_Val << SERCOM_SPIM_CTRLA_DOPO_Pos)  /**< (SERCOM_SPIM_CTRLA) DO on PAD[3], SCK on PAD[1] and SS on PAD[2] Position  */
#define SERCOM_SPIM_CTRLA_DOPO_PAD3         (SERCOM_SPIM_CTRLA_DOPO_PAD3_Val << SERCOM_SPIM_CTRLA_DOPO_Pos)  /**< (SERCOM_SPIM_CTRLA) DO on PAD[0], SCK on PAD[3] and SS on PAD[1] Position  */
#define SERCOM_SPIM_CTRLA_DIPO_Pos          20                                             /**< (SERCOM_SPIM_CTRLA) Data In Pinout Position */
#define SERCOM_SPIM_CTRLA_DIPO_Msk          (_U_(0x3) << SERCOM_SPIM_CTRLA_DIPO_Pos)       /**< (SERCOM_SPIM_CTRLA) Data In Pinout Mask */
#define SERCOM_SPIM_CTRLA_DIPO(value)       (SERCOM_SPIM_CTRLA_DIPO_Msk & ((value) << SERCOM_SPIM_CTRLA_DIPO_Pos))
#define   SERCOM_SPIM_CTRLA_DIPO_PAD0_Val   _U_(0x0)                                       /**< (SERCOM_SPIM_CTRLA) SERCOM PAD[0]  */
#define   SERCOM_SPIM_CTRLA_DIPO_PAD1_Val   _U_(0x1)                                       /**< (SERCOM_SPIM_CTRLA) SERCOM PAD[1]  */
#define   SERCOM_SPIM_CTRLA_DIPO_PAD2_Val   _U_(0x2)                                       /**< (SERCOM_SPIM_CTRLA) SERCOM PAD[2]  */
#define   SERCOM_SPIM_CTRLA_DIPO_PAD3_Val   _U_(0x3)                                       /**< (SERCOM_SPIM_CTRLA) SERCOM PAD[3]  */
#define SERCOM_SPIM_CTRLA_DIPO_PAD0         (SERCOM_SPIM_CTRLA_DIPO_PAD0_Val << SERCOM_SPIM_CTRLA_DIPO_Pos)  /**< (SERCOM_SPIM_CTRLA) SERCOM PAD[0] Position  */
#define SERCOM_SPIM_CTRLA_DIPO_PAD1         (SERCOM_SPIM_CTRLA_DIPO_PAD1_Val << SERCOM_SPIM_CTRLA_DIPO_Pos)  /**< (SERCOM_SPIM_CTRLA) SERCOM PAD[1] Position  */
#define SERCOM_SPIM_CTRLA_DIPO_PAD2         (SERCOM_SPIM_CTRLA_DIPO_PAD2_Val << SERCOM_SPIM_CTRLA_DIPO_Pos)  /**< (SERCOM_SPIM_CTRLA) SERCOM PAD[2] Position  */
#define SERCOM_SPIM_CTRLA_DIPO_PAD3         (SERCOM_SPIM_CTRLA_DIPO_PAD3_Val << SERCOM_SPIM_CTRLA_DIPO_Pos)  /**< (SERCOM_SPIM_CTRLA) SERCOM PAD[3] Position  */
#define SERCOM_SPIM_CTRLA_FORM_Pos          24                                             /**< (SERCOM_SPIM_CTRLA) Frame Format Position */
#define SERCOM_SPIM_CTRLA_FORM_Msk          (_U_(0xF) << SERCOM_SPIM_CTRLA_FORM_Pos)       /**< (SERCOM_SPIM_CTRLA) Frame Format Mask */
#define SERCOM_SPIM_CTRLA_FORM(value)       (SERCOM_SPIM_CTRLA_FORM_Msk & ((value) << SERCOM_SPIM_CTRLA_FORM_Pos))
#define   SERCOM_SPIM_CTRLA_FORM_SPI_FRAME_Val _U_(0x0)                                       /**< (SERCOM_SPIM_CTRLA) SPI Frame  */
#define   SERCOM_SPIM_CTRLA_FORM_SPI_FRAME_WITH_ADDR_Val _U_(0x2)                                       /**< (SERCOM_SPIM_CTRLA) SPI Frame with Addr  */
#define SERCOM_SPIM_CTRLA_FORM_SPI_FRAME    (SERCOM_SPIM_CTRLA_FORM_SPI_FRAME_Val << SERCOM_SPIM_CTRLA_FORM_Pos)  /**< (SERCOM_SPIM_CTRLA) SPI Frame Position  */
#define SERCOM_SPIM_CTRLA_FORM_SPI_FRAME_WITH_ADDR (SERCOM_SPIM_CTRLA_FORM_SPI_FRAME_WITH_ADDR_Val << SERCOM_SPIM_CTRLA_FORM_Pos)  /**< (SERCOM_SPIM_CTRLA) SPI Frame with Addr Position  */
#define SERCOM_SPIM_CTRLA_CPHA_Pos          28                                             /**< (SERCOM_SPIM_CTRLA) Clock Phase Position */
#define SERCOM_SPIM_CTRLA_CPHA_Msk          (_U_(0x1) << SERCOM_SPIM_CTRLA_CPHA_Pos)       /**< (SERCOM_SPIM_CTRLA) Clock Phase Mask */
#define SERCOM_SPIM_CTRLA_CPHA              SERCOM_SPIM_CTRLA_CPHA_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_CTRLA_CPHA_Msk instead */
#define   SERCOM_SPIM_CTRLA_CPHA_LEADING_EDGE_Val _U_(0x0)                                       /**< (SERCOM_SPIM_CTRLA) The data is sampled on a leading SCK edge and changed on a trailing SCK edge  */
#define   SERCOM_SPIM_CTRLA_CPHA_TRAILING_EDGE_Val _U_(0x1)                                       /**< (SERCOM_SPIM_CTRLA) The data is sampled on a trailing SCK edge and changed on a leading SCK edge  */
#define SERCOM_SPIM_CTRLA_CPHA_LEADING_EDGE (SERCOM_SPIM_CTRLA_CPHA_LEADING_EDGE_Val << SERCOM_SPIM_CTRLA_CPHA_Pos)  /**< (SERCOM_SPIM_CTRLA) The data is sampled on a leading SCK edge and changed on a trailing SCK edge Position  */
#define SERCOM_SPIM_CTRLA_CPHA_TRAILING_EDGE (SERCOM_SPIM_CTRLA_CPHA_TRAILING_EDGE_Val << SERCOM_SPIM_CTRLA_CPHA_Pos)  /**< (SERCOM_SPIM_CTRLA) The data is sampled on a trailing SCK edge and changed on a leading SCK edge Position  */
#define SERCOM_SPIM_CTRLA_CPOL_Pos          29                                             /**< (SERCOM_SPIM_CTRLA) Clock Polarity Position */
#define SERCOM_SPIM_CTRLA_CPOL_Msk          (_U_(0x1) << SERCOM_SPIM_CTRLA_CPOL_Pos)       /**< (SERCOM_SPIM_CTRLA) Clock Polarity Mask */
#define SERCOM_SPIM_CTRLA_CPOL              SERCOM_SPIM_CTRLA_CPOL_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_CTRLA_CPOL_Msk instead */
#define   SERCOM_SPIM_CTRLA_CPOL_IDLE_LOW_Val _U_(0x0)                                       /**< (SERCOM_SPIM_CTRLA) SCK is low when idle  */
#define   SERCOM_SPIM_CTRLA_CPOL_IDLE_HIGH_Val _U_(0x1)                                       /**< (SERCOM_SPIM_CTRLA) SCK is high when idle  */
#define SERCOM_SPIM_CTRLA_CPOL_IDLE_LOW     (SERCOM_SPIM_CTRLA_CPOL_IDLE_LOW_Val << SERCOM_SPIM_CTRLA_CPOL_Pos)  /**< (SERCOM_SPIM_CTRLA) SCK is low when idle Position  */
#define SERCOM_SPIM_CTRLA_CPOL_IDLE_HIGH    (SERCOM_SPIM_CTRLA_CPOL_IDLE_HIGH_Val << SERCOM_SPIM_CTRLA_CPOL_Pos)  /**< (SERCOM_SPIM_CTRLA) SCK is high when idle Position  */
#define SERCOM_SPIM_CTRLA_DORD_Pos          30                                             /**< (SERCOM_SPIM_CTRLA) Data Order Position */
#define SERCOM_SPIM_CTRLA_DORD_Msk          (_U_(0x1) << SERCOM_SPIM_CTRLA_DORD_Pos)       /**< (SERCOM_SPIM_CTRLA) Data Order Mask */
#define SERCOM_SPIM_CTRLA_DORD              SERCOM_SPIM_CTRLA_DORD_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_CTRLA_DORD_Msk instead */
#define   SERCOM_SPIM_CTRLA_DORD_MSB_Val    _U_(0x0)                                       /**< (SERCOM_SPIM_CTRLA) MSB is transferred first  */
#define   SERCOM_SPIM_CTRLA_DORD_LSB_Val    _U_(0x1)                                       /**< (SERCOM_SPIM_CTRLA) LSB is transferred first  */
#define SERCOM_SPIM_CTRLA_DORD_MSB          (SERCOM_SPIM_CTRLA_DORD_MSB_Val << SERCOM_SPIM_CTRLA_DORD_Pos)  /**< (SERCOM_SPIM_CTRLA) MSB is transferred first Position  */
#define SERCOM_SPIM_CTRLA_DORD_LSB          (SERCOM_SPIM_CTRLA_DORD_LSB_Val << SERCOM_SPIM_CTRLA_DORD_Pos)  /**< (SERCOM_SPIM_CTRLA) LSB is transferred first Position  */
#define SERCOM_SPIM_CTRLA_MASK              _U_(0x7F33019F)                                /**< \deprecated (SERCOM_SPIM_CTRLA) Register MASK  (Use SERCOM_SPIM_CTRLA_Msk instead)  */
#define SERCOM_SPIM_CTRLA_Msk               _U_(0x7F33019F)                                /**< (SERCOM_SPIM_CTRLA) Register Mask  */


/* -------- SERCOM_SPIS_CTRLA : (SERCOM Offset: 0x00) (R/W 32) SPIS Control A -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint32_t ENABLE:1;                  /**< bit:      1  Enable                                   */
    uint32_t MODE:3;                    /**< bit:   2..4  Operating Mode                           */
    uint32_t :2;                        /**< bit:   5..6  Reserved */
    uint32_t RUNSTDBY:1;                /**< bit:      7  Run during Standby                       */
    uint32_t IBON:1;                    /**< bit:      8  Immediate Buffer Overflow Notification   */
    uint32_t :7;                        /**< bit:  9..15  Reserved */
    uint32_t DOPO:2;                    /**< bit: 16..17  Data Out Pinout                          */
    uint32_t :2;                        /**< bit: 18..19  Reserved */
    uint32_t DIPO:2;                    /**< bit: 20..21  Data In Pinout                           */
    uint32_t :2;                        /**< bit: 22..23  Reserved */
    uint32_t FORM:4;                    /**< bit: 24..27  Frame Format                             */
    uint32_t CPHA:1;                    /**< bit:     28  Clock Phase                              */
    uint32_t CPOL:1;                    /**< bit:     29  Clock Polarity                           */
    uint32_t DORD:1;                    /**< bit:     30  Data Order                               */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_SPIS_CTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIS_CTRLA_OFFSET            (0x00)                                        /**<  (SERCOM_SPIS_CTRLA) SPIS Control A  Offset */
#define SERCOM_SPIS_CTRLA_RESETVALUE        _U_(0x00)                                     /**<  (SERCOM_SPIS_CTRLA) SPIS Control A  Reset Value */

#define SERCOM_SPIS_CTRLA_SWRST_Pos         0                                              /**< (SERCOM_SPIS_CTRLA) Software Reset Position */
#define SERCOM_SPIS_CTRLA_SWRST_Msk         (_U_(0x1) << SERCOM_SPIS_CTRLA_SWRST_Pos)      /**< (SERCOM_SPIS_CTRLA) Software Reset Mask */
#define SERCOM_SPIS_CTRLA_SWRST             SERCOM_SPIS_CTRLA_SWRST_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_CTRLA_SWRST_Msk instead */
#define SERCOM_SPIS_CTRLA_ENABLE_Pos        1                                              /**< (SERCOM_SPIS_CTRLA) Enable Position */
#define SERCOM_SPIS_CTRLA_ENABLE_Msk        (_U_(0x1) << SERCOM_SPIS_CTRLA_ENABLE_Pos)     /**< (SERCOM_SPIS_CTRLA) Enable Mask */
#define SERCOM_SPIS_CTRLA_ENABLE            SERCOM_SPIS_CTRLA_ENABLE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_CTRLA_ENABLE_Msk instead */
#define SERCOM_SPIS_CTRLA_MODE_Pos          2                                              /**< (SERCOM_SPIS_CTRLA) Operating Mode Position */
#define SERCOM_SPIS_CTRLA_MODE_Msk          (_U_(0x7) << SERCOM_SPIS_CTRLA_MODE_Pos)       /**< (SERCOM_SPIS_CTRLA) Operating Mode Mask */
#define SERCOM_SPIS_CTRLA_MODE(value)       (SERCOM_SPIS_CTRLA_MODE_Msk & ((value) << SERCOM_SPIS_CTRLA_MODE_Pos))
#define   SERCOM_SPIS_CTRLA_MODE_USART_EXT_CLK_Val _U_(0x0)                                       /**< (SERCOM_SPIS_CTRLA) USART with external clock  */
#define   SERCOM_SPIS_CTRLA_MODE_USART_INT_CLK_Val _U_(0x1)                                       /**< (SERCOM_SPIS_CTRLA) USART with internal clock  */
#define   SERCOM_SPIS_CTRLA_MODE_SPI_SLAVE_Val _U_(0x2)                                       /**< (SERCOM_SPIS_CTRLA) SPI in slave operation  */
#define   SERCOM_SPIS_CTRLA_MODE_SPI_MASTER_Val _U_(0x3)                                       /**< (SERCOM_SPIS_CTRLA) SPI in master operation  */
#define   SERCOM_SPIS_CTRLA_MODE_I2C_SLAVE_Val _U_(0x4)                                       /**< (SERCOM_SPIS_CTRLA) I2C slave operation  */
#define   SERCOM_SPIS_CTRLA_MODE_I2C_MASTER_Val _U_(0x5)                                       /**< (SERCOM_SPIS_CTRLA) I2C master operation  */
#define SERCOM_SPIS_CTRLA_MODE_USART_EXT_CLK (SERCOM_SPIS_CTRLA_MODE_USART_EXT_CLK_Val << SERCOM_SPIS_CTRLA_MODE_Pos)  /**< (SERCOM_SPIS_CTRLA) USART with external clock Position  */
#define SERCOM_SPIS_CTRLA_MODE_USART_INT_CLK (SERCOM_SPIS_CTRLA_MODE_USART_INT_CLK_Val << SERCOM_SPIS_CTRLA_MODE_Pos)  /**< (SERCOM_SPIS_CTRLA) USART with internal clock Position  */
#define SERCOM_SPIS_CTRLA_MODE_SPI_SLAVE    (SERCOM_SPIS_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_SPIS_CTRLA_MODE_Pos)  /**< (SERCOM_SPIS_CTRLA) SPI in slave operation Position  */
#define SERCOM_SPIS_CTRLA_MODE_SPI_MASTER   (SERCOM_SPIS_CTRLA_MODE_SPI_MASTER_Val << SERCOM_SPIS_CTRLA_MODE_Pos)  /**< (SERCOM_SPIS_CTRLA) SPI in master operation Position  */
#define SERCOM_SPIS_CTRLA_MODE_I2C_SLAVE    (SERCOM_SPIS_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_SPIS_CTRLA_MODE_Pos)  /**< (SERCOM_SPIS_CTRLA) I2C slave operation Position  */
#define SERCOM_SPIS_CTRLA_MODE_I2C_MASTER   (SERCOM_SPIS_CTRLA_MODE_I2C_MASTER_Val << SERCOM_SPIS_CTRLA_MODE_Pos)  /**< (SERCOM_SPIS_CTRLA) I2C master operation Position  */
#define SERCOM_SPIS_CTRLA_RUNSTDBY_Pos      7                                              /**< (SERCOM_SPIS_CTRLA) Run during Standby Position */
#define SERCOM_SPIS_CTRLA_RUNSTDBY_Msk      (_U_(0x1) << SERCOM_SPIS_CTRLA_RUNSTDBY_Pos)   /**< (SERCOM_SPIS_CTRLA) Run during Standby Mask */
#define SERCOM_SPIS_CTRLA_RUNSTDBY          SERCOM_SPIS_CTRLA_RUNSTDBY_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_CTRLA_RUNSTDBY_Msk instead */
#define SERCOM_SPIS_CTRLA_IBON_Pos          8                                              /**< (SERCOM_SPIS_CTRLA) Immediate Buffer Overflow Notification Position */
#define SERCOM_SPIS_CTRLA_IBON_Msk          (_U_(0x1) << SERCOM_SPIS_CTRLA_IBON_Pos)       /**< (SERCOM_SPIS_CTRLA) Immediate Buffer Overflow Notification Mask */
#define SERCOM_SPIS_CTRLA_IBON              SERCOM_SPIS_CTRLA_IBON_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_CTRLA_IBON_Msk instead */
#define SERCOM_SPIS_CTRLA_DOPO_Pos          16                                             /**< (SERCOM_SPIS_CTRLA) Data Out Pinout Position */
#define SERCOM_SPIS_CTRLA_DOPO_Msk          (_U_(0x3) << SERCOM_SPIS_CTRLA_DOPO_Pos)       /**< (SERCOM_SPIS_CTRLA) Data Out Pinout Mask */
#define SERCOM_SPIS_CTRLA_DOPO(value)       (SERCOM_SPIS_CTRLA_DOPO_Msk & ((value) << SERCOM_SPIS_CTRLA_DOPO_Pos))
#define   SERCOM_SPIS_CTRLA_DOPO_PAD0_Val   _U_(0x0)                                       /**< (SERCOM_SPIS_CTRLA) DO on PAD[0], SCK on PAD[1] and SS on PAD[2]  */
#define   SERCOM_SPIS_CTRLA_DOPO_PAD1_Val   _U_(0x1)                                       /**< (SERCOM_SPIS_CTRLA) DO on PAD[2], SCK on PAD[3] and SS on PAD[1]  */
#define   SERCOM_SPIS_CTRLA_DOPO_PAD2_Val   _U_(0x2)                                       /**< (SERCOM_SPIS_CTRLA) DO on PAD[3], SCK on PAD[1] and SS on PAD[2]  */
#define   SERCOM_SPIS_CTRLA_DOPO_PAD3_Val   _U_(0x3)                                       /**< (SERCOM_SPIS_CTRLA) DO on PAD[0], SCK on PAD[3] and SS on PAD[1]  */
#define SERCOM_SPIS_CTRLA_DOPO_PAD0         (SERCOM_SPIS_CTRLA_DOPO_PAD0_Val << SERCOM_SPIS_CTRLA_DOPO_Pos)  /**< (SERCOM_SPIS_CTRLA) DO on PAD[0], SCK on PAD[1] and SS on PAD[2] Position  */
#define SERCOM_SPIS_CTRLA_DOPO_PAD1         (SERCOM_SPIS_CTRLA_DOPO_PAD1_Val << SERCOM_SPIS_CTRLA_DOPO_Pos)  /**< (SERCOM_SPIS_CTRLA) DO on PAD[2], SCK on PAD[3] and SS on PAD[1] Position  */
#define SERCOM_SPIS_CTRLA_DOPO_PAD2         (SERCOM_SPIS_CTRLA_DOPO_PAD2_Val << SERCOM_SPIS_CTRLA_DOPO_Pos)  /**< (SERCOM_SPIS_CTRLA) DO on PAD[3], SCK on PAD[1] and SS on PAD[2] Position  */
#define SERCOM_SPIS_CTRLA_DOPO_PAD3         (SERCOM_SPIS_CTRLA_DOPO_PAD3_Val << SERCOM_SPIS_CTRLA_DOPO_Pos)  /**< (SERCOM_SPIS_CTRLA) DO on PAD[0], SCK on PAD[3] and SS on PAD[1] Position  */
#define SERCOM_SPIS_CTRLA_DIPO_Pos          20                                             /**< (SERCOM_SPIS_CTRLA) Data In Pinout Position */
#define SERCOM_SPIS_CTRLA_DIPO_Msk          (_U_(0x3) << SERCOM_SPIS_CTRLA_DIPO_Pos)       /**< (SERCOM_SPIS_CTRLA) Data In Pinout Mask */
#define SERCOM_SPIS_CTRLA_DIPO(value)       (SERCOM_SPIS_CTRLA_DIPO_Msk & ((value) << SERCOM_SPIS_CTRLA_DIPO_Pos))
#define   SERCOM_SPIS_CTRLA_DIPO_PAD0_Val   _U_(0x0)                                       /**< (SERCOM_SPIS_CTRLA) SERCOM PAD[0]  */
#define   SERCOM_SPIS_CTRLA_DIPO_PAD1_Val   _U_(0x1)                                       /**< (SERCOM_SPIS_CTRLA) SERCOM PAD[1]  */
#define   SERCOM_SPIS_CTRLA_DIPO_PAD2_Val   _U_(0x2)                                       /**< (SERCOM_SPIS_CTRLA) SERCOM PAD[2]  */
#define   SERCOM_SPIS_CTRLA_DIPO_PAD3_Val   _U_(0x3)                                       /**< (SERCOM_SPIS_CTRLA) SERCOM PAD[3]  */
#define SERCOM_SPIS_CTRLA_DIPO_PAD0         (SERCOM_SPIS_CTRLA_DIPO_PAD0_Val << SERCOM_SPIS_CTRLA_DIPO_Pos)  /**< (SERCOM_SPIS_CTRLA) SERCOM PAD[0] Position  */
#define SERCOM_SPIS_CTRLA_DIPO_PAD1         (SERCOM_SPIS_CTRLA_DIPO_PAD1_Val << SERCOM_SPIS_CTRLA_DIPO_Pos)  /**< (SERCOM_SPIS_CTRLA) SERCOM PAD[1] Position  */
#define SERCOM_SPIS_CTRLA_DIPO_PAD2         (SERCOM_SPIS_CTRLA_DIPO_PAD2_Val << SERCOM_SPIS_CTRLA_DIPO_Pos)  /**< (SERCOM_SPIS_CTRLA) SERCOM PAD[2] Position  */
#define SERCOM_SPIS_CTRLA_DIPO_PAD3         (SERCOM_SPIS_CTRLA_DIPO_PAD3_Val << SERCOM_SPIS_CTRLA_DIPO_Pos)  /**< (SERCOM_SPIS_CTRLA) SERCOM PAD[3] Position  */
#define SERCOM_SPIS_CTRLA_FORM_Pos          24                                             /**< (SERCOM_SPIS_CTRLA) Frame Format Position */
#define SERCOM_SPIS_CTRLA_FORM_Msk          (_U_(0xF) << SERCOM_SPIS_CTRLA_FORM_Pos)       /**< (SERCOM_SPIS_CTRLA) Frame Format Mask */
#define SERCOM_SPIS_CTRLA_FORM(value)       (SERCOM_SPIS_CTRLA_FORM_Msk & ((value) << SERCOM_SPIS_CTRLA_FORM_Pos))
#define   SERCOM_SPIS_CTRLA_FORM_SPI_FRAME_Val _U_(0x0)                                       /**< (SERCOM_SPIS_CTRLA) SPI Frame  */
#define   SERCOM_SPIS_CTRLA_FORM_SPI_FRAME_WITH_ADDR_Val _U_(0x2)                                       /**< (SERCOM_SPIS_CTRLA) SPI Frame with Addr  */
#define SERCOM_SPIS_CTRLA_FORM_SPI_FRAME    (SERCOM_SPIS_CTRLA_FORM_SPI_FRAME_Val << SERCOM_SPIS_CTRLA_FORM_Pos)  /**< (SERCOM_SPIS_CTRLA) SPI Frame Position  */
#define SERCOM_SPIS_CTRLA_FORM_SPI_FRAME_WITH_ADDR (SERCOM_SPIS_CTRLA_FORM_SPI_FRAME_WITH_ADDR_Val << SERCOM_SPIS_CTRLA_FORM_Pos)  /**< (SERCOM_SPIS_CTRLA) SPI Frame with Addr Position  */
#define SERCOM_SPIS_CTRLA_CPHA_Pos          28                                             /**< (SERCOM_SPIS_CTRLA) Clock Phase Position */
#define SERCOM_SPIS_CTRLA_CPHA_Msk          (_U_(0x1) << SERCOM_SPIS_CTRLA_CPHA_Pos)       /**< (SERCOM_SPIS_CTRLA) Clock Phase Mask */
#define SERCOM_SPIS_CTRLA_CPHA              SERCOM_SPIS_CTRLA_CPHA_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_CTRLA_CPHA_Msk instead */
#define   SERCOM_SPIS_CTRLA_CPHA_LEADING_EDGE_Val _U_(0x0)                                       /**< (SERCOM_SPIS_CTRLA) The data is sampled on a leading SCK edge and changed on a trailing SCK edge  */
#define   SERCOM_SPIS_CTRLA_CPHA_TRAILING_EDGE_Val _U_(0x1)                                       /**< (SERCOM_SPIS_CTRLA) The data is sampled on a trailing SCK edge and changed on a leading SCK edge  */
#define SERCOM_SPIS_CTRLA_CPHA_LEADING_EDGE (SERCOM_SPIS_CTRLA_CPHA_LEADING_EDGE_Val << SERCOM_SPIS_CTRLA_CPHA_Pos)  /**< (SERCOM_SPIS_CTRLA) The data is sampled on a leading SCK edge and changed on a trailing SCK edge Position  */
#define SERCOM_SPIS_CTRLA_CPHA_TRAILING_EDGE (SERCOM_SPIS_CTRLA_CPHA_TRAILING_EDGE_Val << SERCOM_SPIS_CTRLA_CPHA_Pos)  /**< (SERCOM_SPIS_CTRLA) The data is sampled on a trailing SCK edge and changed on a leading SCK edge Position  */
#define SERCOM_SPIS_CTRLA_CPOL_Pos          29                                             /**< (SERCOM_SPIS_CTRLA) Clock Polarity Position */
#define SERCOM_SPIS_CTRLA_CPOL_Msk          (_U_(0x1) << SERCOM_SPIS_CTRLA_CPOL_Pos)       /**< (SERCOM_SPIS_CTRLA) Clock Polarity Mask */
#define SERCOM_SPIS_CTRLA_CPOL              SERCOM_SPIS_CTRLA_CPOL_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_CTRLA_CPOL_Msk instead */
#define   SERCOM_SPIS_CTRLA_CPOL_IDLE_LOW_Val _U_(0x0)                                       /**< (SERCOM_SPIS_CTRLA) SCK is low when idle  */
#define   SERCOM_SPIS_CTRLA_CPOL_IDLE_HIGH_Val _U_(0x1)                                       /**< (SERCOM_SPIS_CTRLA) SCK is high when idle  */
#define SERCOM_SPIS_CTRLA_CPOL_IDLE_LOW     (SERCOM_SPIS_CTRLA_CPOL_IDLE_LOW_Val << SERCOM_SPIS_CTRLA_CPOL_Pos)  /**< (SERCOM_SPIS_CTRLA) SCK is low when idle Position  */
#define SERCOM_SPIS_CTRLA_CPOL_IDLE_HIGH    (SERCOM_SPIS_CTRLA_CPOL_IDLE_HIGH_Val << SERCOM_SPIS_CTRLA_CPOL_Pos)  /**< (SERCOM_SPIS_CTRLA) SCK is high when idle Position  */
#define SERCOM_SPIS_CTRLA_DORD_Pos          30                                             /**< (SERCOM_SPIS_CTRLA) Data Order Position */
#define SERCOM_SPIS_CTRLA_DORD_Msk          (_U_(0x1) << SERCOM_SPIS_CTRLA_DORD_Pos)       /**< (SERCOM_SPIS_CTRLA) Data Order Mask */
#define SERCOM_SPIS_CTRLA_DORD              SERCOM_SPIS_CTRLA_DORD_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_CTRLA_DORD_Msk instead */
#define   SERCOM_SPIS_CTRLA_DORD_MSB_Val    _U_(0x0)                                       /**< (SERCOM_SPIS_CTRLA) MSB is transferred first  */
#define   SERCOM_SPIS_CTRLA_DORD_LSB_Val    _U_(0x1)                                       /**< (SERCOM_SPIS_CTRLA) LSB is transferred first  */
#define SERCOM_SPIS_CTRLA_DORD_MSB          (SERCOM_SPIS_CTRLA_DORD_MSB_Val << SERCOM_SPIS_CTRLA_DORD_Pos)  /**< (SERCOM_SPIS_CTRLA) MSB is transferred first Position  */
#define SERCOM_SPIS_CTRLA_DORD_LSB          (SERCOM_SPIS_CTRLA_DORD_LSB_Val << SERCOM_SPIS_CTRLA_DORD_Pos)  /**< (SERCOM_SPIS_CTRLA) LSB is transferred first Position  */
#define SERCOM_SPIS_CTRLA_MASK              _U_(0x7F33019F)                                /**< \deprecated (SERCOM_SPIS_CTRLA) Register MASK  (Use SERCOM_SPIS_CTRLA_Msk instead)  */
#define SERCOM_SPIS_CTRLA_Msk               _U_(0x7F33019F)                                /**< (SERCOM_SPIS_CTRLA) Register Mask  */


/* -------- SERCOM_USART_EXT_CTRLA : (SERCOM Offset: 0x00) (R/W 32) USART_EXT Control A -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint32_t ENABLE:1;                  /**< bit:      1  Enable                                   */
    uint32_t MODE:3;                    /**< bit:   2..4  Operating Mode                           */
    uint32_t :2;                        /**< bit:   5..6  Reserved */
    uint32_t RUNSTDBY:1;                /**< bit:      7  Run during Standby                       */
    uint32_t IBON:1;                    /**< bit:      8  Immediate Buffer Overflow Notification   */
    uint32_t :4;                        /**< bit:  9..12  Reserved */
    uint32_t SAMPR:3;                   /**< bit: 13..15  Sample                                   */
    uint32_t TXPO:2;                    /**< bit: 16..17  Transmit Data Pinout                     */
    uint32_t :2;                        /**< bit: 18..19  Reserved */
    uint32_t RXPO:2;                    /**< bit: 20..21  Receive Data Pinout                      */
    uint32_t SAMPA:2;                   /**< bit: 22..23  Sample Adjustment                        */
    uint32_t FORM:4;                    /**< bit: 24..27  Frame Format                             */
    uint32_t CMODE:1;                   /**< bit:     28  Communication Mode                       */
    uint32_t CPOL:1;                    /**< bit:     29  Clock Polarity                           */
    uint32_t DORD:1;                    /**< bit:     30  Data Order                               */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_USART_EXT_CTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_EXT_CTRLA_OFFSET       (0x00)                                        /**<  (SERCOM_USART_EXT_CTRLA) USART_EXT Control A  Offset */
#define SERCOM_USART_EXT_CTRLA_RESETVALUE   _U_(0x00)                                     /**<  (SERCOM_USART_EXT_CTRLA) USART_EXT Control A  Reset Value */

#define SERCOM_USART_EXT_CTRLA_SWRST_Pos    0                                              /**< (SERCOM_USART_EXT_CTRLA) Software Reset Position */
#define SERCOM_USART_EXT_CTRLA_SWRST_Msk    (_U_(0x1) << SERCOM_USART_EXT_CTRLA_SWRST_Pos)  /**< (SERCOM_USART_EXT_CTRLA) Software Reset Mask */
#define SERCOM_USART_EXT_CTRLA_SWRST        SERCOM_USART_EXT_CTRLA_SWRST_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_CTRLA_SWRST_Msk instead */
#define SERCOM_USART_EXT_CTRLA_ENABLE_Pos   1                                              /**< (SERCOM_USART_EXT_CTRLA) Enable Position */
#define SERCOM_USART_EXT_CTRLA_ENABLE_Msk   (_U_(0x1) << SERCOM_USART_EXT_CTRLA_ENABLE_Pos)  /**< (SERCOM_USART_EXT_CTRLA) Enable Mask */
#define SERCOM_USART_EXT_CTRLA_ENABLE       SERCOM_USART_EXT_CTRLA_ENABLE_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_CTRLA_ENABLE_Msk instead */
#define SERCOM_USART_EXT_CTRLA_MODE_Pos     2                                              /**< (SERCOM_USART_EXT_CTRLA) Operating Mode Position */
#define SERCOM_USART_EXT_CTRLA_MODE_Msk     (_U_(0x7) << SERCOM_USART_EXT_CTRLA_MODE_Pos)  /**< (SERCOM_USART_EXT_CTRLA) Operating Mode Mask */
#define SERCOM_USART_EXT_CTRLA_MODE(value)  (SERCOM_USART_EXT_CTRLA_MODE_Msk & ((value) << SERCOM_USART_EXT_CTRLA_MODE_Pos))
#define   SERCOM_USART_EXT_CTRLA_MODE_USART_EXT_CLK_Val _U_(0x0)                                       /**< (SERCOM_USART_EXT_CTRLA) USART with external clock  */
#define   SERCOM_USART_EXT_CTRLA_MODE_USART_INT_CLK_Val _U_(0x1)                                       /**< (SERCOM_USART_EXT_CTRLA) USART with internal clock  */
#define   SERCOM_USART_EXT_CTRLA_MODE_SPI_SLAVE_Val _U_(0x2)                                       /**< (SERCOM_USART_EXT_CTRLA) SPI in slave operation  */
#define   SERCOM_USART_EXT_CTRLA_MODE_SPI_MASTER_Val _U_(0x3)                                       /**< (SERCOM_USART_EXT_CTRLA) SPI in master operation  */
#define   SERCOM_USART_EXT_CTRLA_MODE_I2C_SLAVE_Val _U_(0x4)                                       /**< (SERCOM_USART_EXT_CTRLA) I2C slave operation  */
#define   SERCOM_USART_EXT_CTRLA_MODE_I2C_MASTER_Val _U_(0x5)                                       /**< (SERCOM_USART_EXT_CTRLA) I2C master operation  */
#define SERCOM_USART_EXT_CTRLA_MODE_USART_EXT_CLK (SERCOM_USART_EXT_CTRLA_MODE_USART_EXT_CLK_Val << SERCOM_USART_EXT_CTRLA_MODE_Pos)  /**< (SERCOM_USART_EXT_CTRLA) USART with external clock Position  */
#define SERCOM_USART_EXT_CTRLA_MODE_USART_INT_CLK (SERCOM_USART_EXT_CTRLA_MODE_USART_INT_CLK_Val << SERCOM_USART_EXT_CTRLA_MODE_Pos)  /**< (SERCOM_USART_EXT_CTRLA) USART with internal clock Position  */
#define SERCOM_USART_EXT_CTRLA_MODE_SPI_SLAVE (SERCOM_USART_EXT_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_USART_EXT_CTRLA_MODE_Pos)  /**< (SERCOM_USART_EXT_CTRLA) SPI in slave operation Position  */
#define SERCOM_USART_EXT_CTRLA_MODE_SPI_MASTER (SERCOM_USART_EXT_CTRLA_MODE_SPI_MASTER_Val << SERCOM_USART_EXT_CTRLA_MODE_Pos)  /**< (SERCOM_USART_EXT_CTRLA) SPI in master operation Position  */
#define SERCOM_USART_EXT_CTRLA_MODE_I2C_SLAVE (SERCOM_USART_EXT_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_USART_EXT_CTRLA_MODE_Pos)  /**< (SERCOM_USART_EXT_CTRLA) I2C slave operation Position  */
#define SERCOM_USART_EXT_CTRLA_MODE_I2C_MASTER (SERCOM_USART_EXT_CTRLA_MODE_I2C_MASTER_Val << SERCOM_USART_EXT_CTRLA_MODE_Pos)  /**< (SERCOM_USART_EXT_CTRLA) I2C master operation Position  */
#define SERCOM_USART_EXT_CTRLA_RUNSTDBY_Pos 7                                              /**< (SERCOM_USART_EXT_CTRLA) Run during Standby Position */
#define SERCOM_USART_EXT_CTRLA_RUNSTDBY_Msk (_U_(0x1) << SERCOM_USART_EXT_CTRLA_RUNSTDBY_Pos)  /**< (SERCOM_USART_EXT_CTRLA) Run during Standby Mask */
#define SERCOM_USART_EXT_CTRLA_RUNSTDBY     SERCOM_USART_EXT_CTRLA_RUNSTDBY_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_CTRLA_RUNSTDBY_Msk instead */
#define SERCOM_USART_EXT_CTRLA_IBON_Pos     8                                              /**< (SERCOM_USART_EXT_CTRLA) Immediate Buffer Overflow Notification Position */
#define SERCOM_USART_EXT_CTRLA_IBON_Msk     (_U_(0x1) << SERCOM_USART_EXT_CTRLA_IBON_Pos)  /**< (SERCOM_USART_EXT_CTRLA) Immediate Buffer Overflow Notification Mask */
#define SERCOM_USART_EXT_CTRLA_IBON         SERCOM_USART_EXT_CTRLA_IBON_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_CTRLA_IBON_Msk instead */
#define SERCOM_USART_EXT_CTRLA_SAMPR_Pos    13                                             /**< (SERCOM_USART_EXT_CTRLA) Sample Position */
#define SERCOM_USART_EXT_CTRLA_SAMPR_Msk    (_U_(0x7) << SERCOM_USART_EXT_CTRLA_SAMPR_Pos)  /**< (SERCOM_USART_EXT_CTRLA) Sample Mask */
#define SERCOM_USART_EXT_CTRLA_SAMPR(value) (SERCOM_USART_EXT_CTRLA_SAMPR_Msk & ((value) << SERCOM_USART_EXT_CTRLA_SAMPR_Pos))
#define   SERCOM_USART_EXT_CTRLA_SAMPR_16X_ARITHMETIC_Val _U_(0x0)                                       /**< (SERCOM_USART_EXT_CTRLA) 16x over-sampling using arithmetic baudrate generation  */
#define   SERCOM_USART_EXT_CTRLA_SAMPR_16X_FRACTIONAL_Val _U_(0x1)                                       /**< (SERCOM_USART_EXT_CTRLA) 16x over-sampling using fractional baudrate generation  */
#define   SERCOM_USART_EXT_CTRLA_SAMPR_8X_ARITHMETIC_Val _U_(0x2)                                       /**< (SERCOM_USART_EXT_CTRLA) 8x over-sampling using arithmetic baudrate generation  */
#define   SERCOM_USART_EXT_CTRLA_SAMPR_8X_FRACTIONAL_Val _U_(0x3)                                       /**< (SERCOM_USART_EXT_CTRLA) 8x over-sampling using fractional baudrate generation  */
#define   SERCOM_USART_EXT_CTRLA_SAMPR_3X_ARITHMETIC_Val _U_(0x4)                                       /**< (SERCOM_USART_EXT_CTRLA) 3x over-sampling using arithmetic baudrate generation  */
#define SERCOM_USART_EXT_CTRLA_SAMPR_16X_ARITHMETIC (SERCOM_USART_EXT_CTRLA_SAMPR_16X_ARITHMETIC_Val << SERCOM_USART_EXT_CTRLA_SAMPR_Pos)  /**< (SERCOM_USART_EXT_CTRLA) 16x over-sampling using arithmetic baudrate generation Position  */
#define SERCOM_USART_EXT_CTRLA_SAMPR_16X_FRACTIONAL (SERCOM_USART_EXT_CTRLA_SAMPR_16X_FRACTIONAL_Val << SERCOM_USART_EXT_CTRLA_SAMPR_Pos)  /**< (SERCOM_USART_EXT_CTRLA) 16x over-sampling using fractional baudrate generation Position  */
#define SERCOM_USART_EXT_CTRLA_SAMPR_8X_ARITHMETIC (SERCOM_USART_EXT_CTRLA_SAMPR_8X_ARITHMETIC_Val << SERCOM_USART_EXT_CTRLA_SAMPR_Pos)  /**< (SERCOM_USART_EXT_CTRLA) 8x over-sampling using arithmetic baudrate generation Position  */
#define SERCOM_USART_EXT_CTRLA_SAMPR_8X_FRACTIONAL (SERCOM_USART_EXT_CTRLA_SAMPR_8X_FRACTIONAL_Val << SERCOM_USART_EXT_CTRLA_SAMPR_Pos)  /**< (SERCOM_USART_EXT_CTRLA) 8x over-sampling using fractional baudrate generation Position  */
#define SERCOM_USART_EXT_CTRLA_SAMPR_3X_ARITHMETIC (SERCOM_USART_EXT_CTRLA_SAMPR_3X_ARITHMETIC_Val << SERCOM_USART_EXT_CTRLA_SAMPR_Pos)  /**< (SERCOM_USART_EXT_CTRLA) 3x over-sampling using arithmetic baudrate generation Position  */
#define SERCOM_USART_EXT_CTRLA_TXPO_Pos     16                                             /**< (SERCOM_USART_EXT_CTRLA) Transmit Data Pinout Position */
#define SERCOM_USART_EXT_CTRLA_TXPO_Msk     (_U_(0x3) << SERCOM_USART_EXT_CTRLA_TXPO_Pos)  /**< (SERCOM_USART_EXT_CTRLA) Transmit Data Pinout Mask */
#define SERCOM_USART_EXT_CTRLA_TXPO(value)  (SERCOM_USART_EXT_CTRLA_TXPO_Msk & ((value) << SERCOM_USART_EXT_CTRLA_TXPO_Pos))
#define   SERCOM_USART_EXT_CTRLA_TXPO_PAD0_Val _U_(0x0)                                       /**< (SERCOM_USART_EXT_CTRLA) PAD[0] = TxD; PAD[1] = XCK  */
#define   SERCOM_USART_EXT_CTRLA_TXPO_PAD1_Val _U_(0x1)                                       /**< (SERCOM_USART_EXT_CTRLA) PAD[2] = TxD; PAD[3] = XCK  */
#define   SERCOM_USART_EXT_CTRLA_TXPO_PAD2_Val _U_(0x2)                                       /**< (SERCOM_USART_EXT_CTRLA) PAD[0] = TxD; PAD[2] = RTS; PAD[3] = CTS  */
#define SERCOM_USART_EXT_CTRLA_TXPO_PAD0    (SERCOM_USART_EXT_CTRLA_TXPO_PAD0_Val << SERCOM_USART_EXT_CTRLA_TXPO_Pos)  /**< (SERCOM_USART_EXT_CTRLA) PAD[0] = TxD; PAD[1] = XCK Position  */
#define SERCOM_USART_EXT_CTRLA_TXPO_PAD1    (SERCOM_USART_EXT_CTRLA_TXPO_PAD1_Val << SERCOM_USART_EXT_CTRLA_TXPO_Pos)  /**< (SERCOM_USART_EXT_CTRLA) PAD[2] = TxD; PAD[3] = XCK Position  */
#define SERCOM_USART_EXT_CTRLA_TXPO_PAD2    (SERCOM_USART_EXT_CTRLA_TXPO_PAD2_Val << SERCOM_USART_EXT_CTRLA_TXPO_Pos)  /**< (SERCOM_USART_EXT_CTRLA) PAD[0] = TxD; PAD[2] = RTS; PAD[3] = CTS Position  */
#define SERCOM_USART_EXT_CTRLA_RXPO_Pos     20                                             /**< (SERCOM_USART_EXT_CTRLA) Receive Data Pinout Position */
#define SERCOM_USART_EXT_CTRLA_RXPO_Msk     (_U_(0x3) << SERCOM_USART_EXT_CTRLA_RXPO_Pos)  /**< (SERCOM_USART_EXT_CTRLA) Receive Data Pinout Mask */
#define SERCOM_USART_EXT_CTRLA_RXPO(value)  (SERCOM_USART_EXT_CTRLA_RXPO_Msk & ((value) << SERCOM_USART_EXT_CTRLA_RXPO_Pos))
#define   SERCOM_USART_EXT_CTRLA_RXPO_PAD0_Val _U_(0x0)                                       /**< (SERCOM_USART_EXT_CTRLA) SERCOM PAD[0] is used for data reception  */
#define   SERCOM_USART_EXT_CTRLA_RXPO_PAD1_Val _U_(0x1)                                       /**< (SERCOM_USART_EXT_CTRLA) SERCOM PAD[1] is used for data reception  */
#define   SERCOM_USART_EXT_CTRLA_RXPO_PAD2_Val _U_(0x2)                                       /**< (SERCOM_USART_EXT_CTRLA) SERCOM PAD[2] is used for data reception  */
#define   SERCOM_USART_EXT_CTRLA_RXPO_PAD3_Val _U_(0x3)                                       /**< (SERCOM_USART_EXT_CTRLA) SERCOM PAD[3] is used for data reception  */
#define SERCOM_USART_EXT_CTRLA_RXPO_PAD0    (SERCOM_USART_EXT_CTRLA_RXPO_PAD0_Val << SERCOM_USART_EXT_CTRLA_RXPO_Pos)  /**< (SERCOM_USART_EXT_CTRLA) SERCOM PAD[0] is used for data reception Position  */
#define SERCOM_USART_EXT_CTRLA_RXPO_PAD1    (SERCOM_USART_EXT_CTRLA_RXPO_PAD1_Val << SERCOM_USART_EXT_CTRLA_RXPO_Pos)  /**< (SERCOM_USART_EXT_CTRLA) SERCOM PAD[1] is used for data reception Position  */
#define SERCOM_USART_EXT_CTRLA_RXPO_PAD2    (SERCOM_USART_EXT_CTRLA_RXPO_PAD2_Val << SERCOM_USART_EXT_CTRLA_RXPO_Pos)  /**< (SERCOM_USART_EXT_CTRLA) SERCOM PAD[2] is used for data reception Position  */
#define SERCOM_USART_EXT_CTRLA_RXPO_PAD3    (SERCOM_USART_EXT_CTRLA_RXPO_PAD3_Val << SERCOM_USART_EXT_CTRLA_RXPO_Pos)  /**< (SERCOM_USART_EXT_CTRLA) SERCOM PAD[3] is used for data reception Position  */
#define SERCOM_USART_EXT_CTRLA_SAMPA_Pos    22                                             /**< (SERCOM_USART_EXT_CTRLA) Sample Adjustment Position */
#define SERCOM_USART_EXT_CTRLA_SAMPA_Msk    (_U_(0x3) << SERCOM_USART_EXT_CTRLA_SAMPA_Pos)  /**< (SERCOM_USART_EXT_CTRLA) Sample Adjustment Mask */
#define SERCOM_USART_EXT_CTRLA_SAMPA(value) (SERCOM_USART_EXT_CTRLA_SAMPA_Msk & ((value) << SERCOM_USART_EXT_CTRLA_SAMPA_Pos))
#define   SERCOM_USART_EXT_CTRLA_SAMPA_ADJ0_Val _U_(0x0)                                       /**< (SERCOM_USART_EXT_CTRLA) 16x Over-sampling = 7-8-9; 8x Over-sampling = 3-4-5  */
#define   SERCOM_USART_EXT_CTRLA_SAMPA_ADJ1_Val _U_(0x1)                                       /**< (SERCOM_USART_EXT_CTRLA) 16x Over-sampling = 9-10-11; 8x Over-sampling = 4-5-6  */
#define   SERCOM_USART_EXT_CTRLA_SAMPA_ADJ2_Val _U_(0x2)                                       /**< (SERCOM_USART_EXT_CTRLA) 16x Over-sampling = 11-12-13; 8x Over-sampling = 5-6-7  */
#define   SERCOM_USART_EXT_CTRLA_SAMPA_ADJ3_Val _U_(0x3)                                       /**< (SERCOM_USART_EXT_CTRLA) 16x Over-sampling = 13-14-15; 8x Over-sampling = 6-7-8  */
#define SERCOM_USART_EXT_CTRLA_SAMPA_ADJ0   (SERCOM_USART_EXT_CTRLA_SAMPA_ADJ0_Val << SERCOM_USART_EXT_CTRLA_SAMPA_Pos)  /**< (SERCOM_USART_EXT_CTRLA) 16x Over-sampling = 7-8-9; 8x Over-sampling = 3-4-5 Position  */
#define SERCOM_USART_EXT_CTRLA_SAMPA_ADJ1   (SERCOM_USART_EXT_CTRLA_SAMPA_ADJ1_Val << SERCOM_USART_EXT_CTRLA_SAMPA_Pos)  /**< (SERCOM_USART_EXT_CTRLA) 16x Over-sampling = 9-10-11; 8x Over-sampling = 4-5-6 Position  */
#define SERCOM_USART_EXT_CTRLA_SAMPA_ADJ2   (SERCOM_USART_EXT_CTRLA_SAMPA_ADJ2_Val << SERCOM_USART_EXT_CTRLA_SAMPA_Pos)  /**< (SERCOM_USART_EXT_CTRLA) 16x Over-sampling = 11-12-13; 8x Over-sampling = 5-6-7 Position  */
#define SERCOM_USART_EXT_CTRLA_SAMPA_ADJ3   (SERCOM_USART_EXT_CTRLA_SAMPA_ADJ3_Val << SERCOM_USART_EXT_CTRLA_SAMPA_Pos)  /**< (SERCOM_USART_EXT_CTRLA) 16x Over-sampling = 13-14-15; 8x Over-sampling = 6-7-8 Position  */
#define SERCOM_USART_EXT_CTRLA_FORM_Pos     24                                             /**< (SERCOM_USART_EXT_CTRLA) Frame Format Position */
#define SERCOM_USART_EXT_CTRLA_FORM_Msk     (_U_(0xF) << SERCOM_USART_EXT_CTRLA_FORM_Pos)  /**< (SERCOM_USART_EXT_CTRLA) Frame Format Mask */
#define SERCOM_USART_EXT_CTRLA_FORM(value)  (SERCOM_USART_EXT_CTRLA_FORM_Msk & ((value) << SERCOM_USART_EXT_CTRLA_FORM_Pos))
#define   SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_NO_PARITY_Val _U_(0x0)                                       /**< (SERCOM_USART_EXT_CTRLA) USART frame  */
#define   SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_WITH_PARITY_Val _U_(0x1)                                       /**< (SERCOM_USART_EXT_CTRLA) USART frame with parity  */
#define   SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_NO_PARITY_Val _U_(0x4)                                       /**< (SERCOM_USART_EXT_CTRLA) Auto-baud - break detection and auto-baud  */
#define   SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_WITH_PARITY_Val _U_(0x5)                                       /**< (SERCOM_USART_EXT_CTRLA) Auto-baud - break detection and auto-baud with parity  */
#define SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_NO_PARITY (SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_NO_PARITY_Val << SERCOM_USART_EXT_CTRLA_FORM_Pos)  /**< (SERCOM_USART_EXT_CTRLA) USART frame Position  */
#define SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_WITH_PARITY (SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_WITH_PARITY_Val << SERCOM_USART_EXT_CTRLA_FORM_Pos)  /**< (SERCOM_USART_EXT_CTRLA) USART frame with parity Position  */
#define SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_NO_PARITY (SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_NO_PARITY_Val << SERCOM_USART_EXT_CTRLA_FORM_Pos)  /**< (SERCOM_USART_EXT_CTRLA) Auto-baud - break detection and auto-baud Position  */
#define SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_WITH_PARITY (SERCOM_USART_EXT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_WITH_PARITY_Val << SERCOM_USART_EXT_CTRLA_FORM_Pos)  /**< (SERCOM_USART_EXT_CTRLA) Auto-baud - break detection and auto-baud with parity Position  */
#define SERCOM_USART_EXT_CTRLA_CMODE_Pos    28                                             /**< (SERCOM_USART_EXT_CTRLA) Communication Mode Position */
#define SERCOM_USART_EXT_CTRLA_CMODE_Msk    (_U_(0x1) << SERCOM_USART_EXT_CTRLA_CMODE_Pos)  /**< (SERCOM_USART_EXT_CTRLA) Communication Mode Mask */
#define SERCOM_USART_EXT_CTRLA_CMODE        SERCOM_USART_EXT_CTRLA_CMODE_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_CTRLA_CMODE_Msk instead */
#define   SERCOM_USART_EXT_CTRLA_CMODE_ASYNC_Val _U_(0x0)                                       /**< (SERCOM_USART_EXT_CTRLA) Asynchronous Communication  */
#define   SERCOM_USART_EXT_CTRLA_CMODE_SYNC_Val _U_(0x1)                                       /**< (SERCOM_USART_EXT_CTRLA) Synchronous Communication  */
#define SERCOM_USART_EXT_CTRLA_CMODE_ASYNC  (SERCOM_USART_EXT_CTRLA_CMODE_ASYNC_Val << SERCOM_USART_EXT_CTRLA_CMODE_Pos)  /**< (SERCOM_USART_EXT_CTRLA) Asynchronous Communication Position  */
#define SERCOM_USART_EXT_CTRLA_CMODE_SYNC   (SERCOM_USART_EXT_CTRLA_CMODE_SYNC_Val << SERCOM_USART_EXT_CTRLA_CMODE_Pos)  /**< (SERCOM_USART_EXT_CTRLA) Synchronous Communication Position  */
#define SERCOM_USART_EXT_CTRLA_CPOL_Pos     29                                             /**< (SERCOM_USART_EXT_CTRLA) Clock Polarity Position */
#define SERCOM_USART_EXT_CTRLA_CPOL_Msk     (_U_(0x1) << SERCOM_USART_EXT_CTRLA_CPOL_Pos)  /**< (SERCOM_USART_EXT_CTRLA) Clock Polarity Mask */
#define SERCOM_USART_EXT_CTRLA_CPOL         SERCOM_USART_EXT_CTRLA_CPOL_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_CTRLA_CPOL_Msk instead */
#define   SERCOM_USART_EXT_CTRLA_CPOL_IDLE_LOW_Val _U_(0x0)                                       /**< (SERCOM_USART_EXT_CTRLA) TxD Change:- Rising XCK edge, RxD Sample:- Falling XCK edge  */
#define   SERCOM_USART_EXT_CTRLA_CPOL_IDLE_HIGH_Val _U_(0x1)                                       /**< (SERCOM_USART_EXT_CTRLA) TxD Change:- Falling XCK edge, RxD Sample:- Rising XCK edge  */
#define SERCOM_USART_EXT_CTRLA_CPOL_IDLE_LOW (SERCOM_USART_EXT_CTRLA_CPOL_IDLE_LOW_Val << SERCOM_USART_EXT_CTRLA_CPOL_Pos)  /**< (SERCOM_USART_EXT_CTRLA) TxD Change:- Rising XCK edge, RxD Sample:- Falling XCK edge Position  */
#define SERCOM_USART_EXT_CTRLA_CPOL_IDLE_HIGH (SERCOM_USART_EXT_CTRLA_CPOL_IDLE_HIGH_Val << SERCOM_USART_EXT_CTRLA_CPOL_Pos)  /**< (SERCOM_USART_EXT_CTRLA) TxD Change:- Falling XCK edge, RxD Sample:- Rising XCK edge Position  */
#define SERCOM_USART_EXT_CTRLA_DORD_Pos     30                                             /**< (SERCOM_USART_EXT_CTRLA) Data Order Position */
#define SERCOM_USART_EXT_CTRLA_DORD_Msk     (_U_(0x1) << SERCOM_USART_EXT_CTRLA_DORD_Pos)  /**< (SERCOM_USART_EXT_CTRLA) Data Order Mask */
#define SERCOM_USART_EXT_CTRLA_DORD         SERCOM_USART_EXT_CTRLA_DORD_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_CTRLA_DORD_Msk instead */
#define   SERCOM_USART_EXT_CTRLA_DORD_MSB_Val _U_(0x0)                                       /**< (SERCOM_USART_EXT_CTRLA) MSB is transmitted first  */
#define   SERCOM_USART_EXT_CTRLA_DORD_LSB_Val _U_(0x1)                                       /**< (SERCOM_USART_EXT_CTRLA) LSB is transmitted first  */
#define SERCOM_USART_EXT_CTRLA_DORD_MSB     (SERCOM_USART_EXT_CTRLA_DORD_MSB_Val << SERCOM_USART_EXT_CTRLA_DORD_Pos)  /**< (SERCOM_USART_EXT_CTRLA) MSB is transmitted first Position  */
#define SERCOM_USART_EXT_CTRLA_DORD_LSB     (SERCOM_USART_EXT_CTRLA_DORD_LSB_Val << SERCOM_USART_EXT_CTRLA_DORD_Pos)  /**< (SERCOM_USART_EXT_CTRLA) LSB is transmitted first Position  */
#define SERCOM_USART_EXT_CTRLA_MASK         _U_(0x7FF3E19F)                                /**< \deprecated (SERCOM_USART_EXT_CTRLA) Register MASK  (Use SERCOM_USART_EXT_CTRLA_Msk instead)  */
#define SERCOM_USART_EXT_CTRLA_Msk          _U_(0x7FF3E19F)                                /**< (SERCOM_USART_EXT_CTRLA) Register Mask  */


/* -------- SERCOM_USART_INT_CTRLA : (SERCOM Offset: 0x00) (R/W 32) USART_INT Control A -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset                           */
    uint32_t ENABLE:1;                  /**< bit:      1  Enable                                   */
    uint32_t MODE:3;                    /**< bit:   2..4  Operating Mode                           */
    uint32_t :2;                        /**< bit:   5..6  Reserved */
    uint32_t RUNSTDBY:1;                /**< bit:      7  Run during Standby                       */
    uint32_t IBON:1;                    /**< bit:      8  Immediate Buffer Overflow Notification   */
    uint32_t :4;                        /**< bit:  9..12  Reserved */
    uint32_t SAMPR:3;                   /**< bit: 13..15  Sample                                   */
    uint32_t TXPO:2;                    /**< bit: 16..17  Transmit Data Pinout                     */
    uint32_t :2;                        /**< bit: 18..19  Reserved */
    uint32_t RXPO:2;                    /**< bit: 20..21  Receive Data Pinout                      */
    uint32_t SAMPA:2;                   /**< bit: 22..23  Sample Adjustment                        */
    uint32_t FORM:4;                    /**< bit: 24..27  Frame Format                             */
    uint32_t CMODE:1;                   /**< bit:     28  Communication Mode                       */
    uint32_t CPOL:1;                    /**< bit:     29  Clock Polarity                           */
    uint32_t DORD:1;                    /**< bit:     30  Data Order                               */
    uint32_t :1;                        /**< bit:     31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_USART_INT_CTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_INT_CTRLA_OFFSET       (0x00)                                        /**<  (SERCOM_USART_INT_CTRLA) USART_INT Control A  Offset */
#define SERCOM_USART_INT_CTRLA_RESETVALUE   _U_(0x00)                                     /**<  (SERCOM_USART_INT_CTRLA) USART_INT Control A  Reset Value */

#define SERCOM_USART_INT_CTRLA_SWRST_Pos    0                                              /**< (SERCOM_USART_INT_CTRLA) Software Reset Position */
#define SERCOM_USART_INT_CTRLA_SWRST_Msk    (_U_(0x1) << SERCOM_USART_INT_CTRLA_SWRST_Pos)  /**< (SERCOM_USART_INT_CTRLA) Software Reset Mask */
#define SERCOM_USART_INT_CTRLA_SWRST        SERCOM_USART_INT_CTRLA_SWRST_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_CTRLA_SWRST_Msk instead */
#define SERCOM_USART_INT_CTRLA_ENABLE_Pos   1                                              /**< (SERCOM_USART_INT_CTRLA) Enable Position */
#define SERCOM_USART_INT_CTRLA_ENABLE_Msk   (_U_(0x1) << SERCOM_USART_INT_CTRLA_ENABLE_Pos)  /**< (SERCOM_USART_INT_CTRLA) Enable Mask */
#define SERCOM_USART_INT_CTRLA_ENABLE       SERCOM_USART_INT_CTRLA_ENABLE_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_CTRLA_ENABLE_Msk instead */
#define SERCOM_USART_INT_CTRLA_MODE_Pos     2                                              /**< (SERCOM_USART_INT_CTRLA) Operating Mode Position */
#define SERCOM_USART_INT_CTRLA_MODE_Msk     (_U_(0x7) << SERCOM_USART_INT_CTRLA_MODE_Pos)  /**< (SERCOM_USART_INT_CTRLA) Operating Mode Mask */
#define SERCOM_USART_INT_CTRLA_MODE(value)  (SERCOM_USART_INT_CTRLA_MODE_Msk & ((value) << SERCOM_USART_INT_CTRLA_MODE_Pos))
#define   SERCOM_USART_INT_CTRLA_MODE_USART_EXT_CLK_Val _U_(0x0)                                       /**< (SERCOM_USART_INT_CTRLA) USART with external clock  */
#define   SERCOM_USART_INT_CTRLA_MODE_USART_INT_CLK_Val _U_(0x1)                                       /**< (SERCOM_USART_INT_CTRLA) USART with internal clock  */
#define   SERCOM_USART_INT_CTRLA_MODE_SPI_SLAVE_Val _U_(0x2)                                       /**< (SERCOM_USART_INT_CTRLA) SPI in slave operation  */
#define   SERCOM_USART_INT_CTRLA_MODE_SPI_MASTER_Val _U_(0x3)                                       /**< (SERCOM_USART_INT_CTRLA) SPI in master operation  */
#define   SERCOM_USART_INT_CTRLA_MODE_I2C_SLAVE_Val _U_(0x4)                                       /**< (SERCOM_USART_INT_CTRLA) I2C slave operation  */
#define   SERCOM_USART_INT_CTRLA_MODE_I2C_MASTER_Val _U_(0x5)                                       /**< (SERCOM_USART_INT_CTRLA) I2C master operation  */
#define SERCOM_USART_INT_CTRLA_MODE_USART_EXT_CLK (SERCOM_USART_INT_CTRLA_MODE_USART_EXT_CLK_Val << SERCOM_USART_INT_CTRLA_MODE_Pos)  /**< (SERCOM_USART_INT_CTRLA) USART with external clock Position  */
#define SERCOM_USART_INT_CTRLA_MODE_USART_INT_CLK (SERCOM_USART_INT_CTRLA_MODE_USART_INT_CLK_Val << SERCOM_USART_INT_CTRLA_MODE_Pos)  /**< (SERCOM_USART_INT_CTRLA) USART with internal clock Position  */
#define SERCOM_USART_INT_CTRLA_MODE_SPI_SLAVE (SERCOM_USART_INT_CTRLA_MODE_SPI_SLAVE_Val << SERCOM_USART_INT_CTRLA_MODE_Pos)  /**< (SERCOM_USART_INT_CTRLA) SPI in slave operation Position  */
#define SERCOM_USART_INT_CTRLA_MODE_SPI_MASTER (SERCOM_USART_INT_CTRLA_MODE_SPI_MASTER_Val << SERCOM_USART_INT_CTRLA_MODE_Pos)  /**< (SERCOM_USART_INT_CTRLA) SPI in master operation Position  */
#define SERCOM_USART_INT_CTRLA_MODE_I2C_SLAVE (SERCOM_USART_INT_CTRLA_MODE_I2C_SLAVE_Val << SERCOM_USART_INT_CTRLA_MODE_Pos)  /**< (SERCOM_USART_INT_CTRLA) I2C slave operation Position  */
#define SERCOM_USART_INT_CTRLA_MODE_I2C_MASTER (SERCOM_USART_INT_CTRLA_MODE_I2C_MASTER_Val << SERCOM_USART_INT_CTRLA_MODE_Pos)  /**< (SERCOM_USART_INT_CTRLA) I2C master operation Position  */
#define SERCOM_USART_INT_CTRLA_RUNSTDBY_Pos 7                                              /**< (SERCOM_USART_INT_CTRLA) Run during Standby Position */
#define SERCOM_USART_INT_CTRLA_RUNSTDBY_Msk (_U_(0x1) << SERCOM_USART_INT_CTRLA_RUNSTDBY_Pos)  /**< (SERCOM_USART_INT_CTRLA) Run during Standby Mask */
#define SERCOM_USART_INT_CTRLA_RUNSTDBY     SERCOM_USART_INT_CTRLA_RUNSTDBY_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_CTRLA_RUNSTDBY_Msk instead */
#define SERCOM_USART_INT_CTRLA_IBON_Pos     8                                              /**< (SERCOM_USART_INT_CTRLA) Immediate Buffer Overflow Notification Position */
#define SERCOM_USART_INT_CTRLA_IBON_Msk     (_U_(0x1) << SERCOM_USART_INT_CTRLA_IBON_Pos)  /**< (SERCOM_USART_INT_CTRLA) Immediate Buffer Overflow Notification Mask */
#define SERCOM_USART_INT_CTRLA_IBON         SERCOM_USART_INT_CTRLA_IBON_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_CTRLA_IBON_Msk instead */
#define SERCOM_USART_INT_CTRLA_SAMPR_Pos    13                                             /**< (SERCOM_USART_INT_CTRLA) Sample Position */
#define SERCOM_USART_INT_CTRLA_SAMPR_Msk    (_U_(0x7) << SERCOM_USART_INT_CTRLA_SAMPR_Pos)  /**< (SERCOM_USART_INT_CTRLA) Sample Mask */
#define SERCOM_USART_INT_CTRLA_SAMPR(value) (SERCOM_USART_INT_CTRLA_SAMPR_Msk & ((value) << SERCOM_USART_INT_CTRLA_SAMPR_Pos))
#define   SERCOM_USART_INT_CTRLA_SAMPR_16X_ARITHMETIC_Val _U_(0x0)                                       /**< (SERCOM_USART_INT_CTRLA) 16x over-sampling using arithmetic baudrate generation  */
#define   SERCOM_USART_INT_CTRLA_SAMPR_16X_FRACTIONAL_Val _U_(0x1)                                       /**< (SERCOM_USART_INT_CTRLA) 16x over-sampling using fractional baudrate generation  */
#define   SERCOM_USART_INT_CTRLA_SAMPR_8X_ARITHMETIC_Val _U_(0x2)                                       /**< (SERCOM_USART_INT_CTRLA) 8x over-sampling using arithmetic baudrate generation  */
#define   SERCOM_USART_INT_CTRLA_SAMPR_8X_FRACTIONAL_Val _U_(0x3)                                       /**< (SERCOM_USART_INT_CTRLA) 8x over-sampling using fractional baudrate generation  */
#define   SERCOM_USART_INT_CTRLA_SAMPR_3X_ARITHMETIC_Val _U_(0x4)                                       /**< (SERCOM_USART_INT_CTRLA) 3x over-sampling using arithmetic baudrate generation  */
#define SERCOM_USART_INT_CTRLA_SAMPR_16X_ARITHMETIC (SERCOM_USART_INT_CTRLA_SAMPR_16X_ARITHMETIC_Val << SERCOM_USART_INT_CTRLA_SAMPR_Pos)  /**< (SERCOM_USART_INT_CTRLA) 16x over-sampling using arithmetic baudrate generation Position  */
#define SERCOM_USART_INT_CTRLA_SAMPR_16X_FRACTIONAL (SERCOM_USART_INT_CTRLA_SAMPR_16X_FRACTIONAL_Val << SERCOM_USART_INT_CTRLA_SAMPR_Pos)  /**< (SERCOM_USART_INT_CTRLA) 16x over-sampling using fractional baudrate generation Position  */
#define SERCOM_USART_INT_CTRLA_SAMPR_8X_ARITHMETIC (SERCOM_USART_INT_CTRLA_SAMPR_8X_ARITHMETIC_Val << SERCOM_USART_INT_CTRLA_SAMPR_Pos)  /**< (SERCOM_USART_INT_CTRLA) 8x over-sampling using arithmetic baudrate generation Position  */
#define SERCOM_USART_INT_CTRLA_SAMPR_8X_FRACTIONAL (SERCOM_USART_INT_CTRLA_SAMPR_8X_FRACTIONAL_Val << SERCOM_USART_INT_CTRLA_SAMPR_Pos)  /**< (SERCOM_USART_INT_CTRLA) 8x over-sampling using fractional baudrate generation Position  */
#define SERCOM_USART_INT_CTRLA_SAMPR_3X_ARITHMETIC (SERCOM_USART_INT_CTRLA_SAMPR_3X_ARITHMETIC_Val << SERCOM_USART_INT_CTRLA_SAMPR_Pos)  /**< (SERCOM_USART_INT_CTRLA) 3x over-sampling using arithmetic baudrate generation Position  */
#define SERCOM_USART_INT_CTRLA_TXPO_Pos     16                                             /**< (SERCOM_USART_INT_CTRLA) Transmit Data Pinout Position */
#define SERCOM_USART_INT_CTRLA_TXPO_Msk     (_U_(0x3) << SERCOM_USART_INT_CTRLA_TXPO_Pos)  /**< (SERCOM_USART_INT_CTRLA) Transmit Data Pinout Mask */
#define SERCOM_USART_INT_CTRLA_TXPO(value)  (SERCOM_USART_INT_CTRLA_TXPO_Msk & ((value) << SERCOM_USART_INT_CTRLA_TXPO_Pos))
#define   SERCOM_USART_INT_CTRLA_TXPO_PAD0_Val _U_(0x0)                                       /**< (SERCOM_USART_INT_CTRLA) PAD[0] = TxD; PAD[1] = XCK  */
#define   SERCOM_USART_INT_CTRLA_TXPO_PAD1_Val _U_(0x1)                                       /**< (SERCOM_USART_INT_CTRLA) PAD[2] = TxD; PAD[3] = XCK  */
#define   SERCOM_USART_INT_CTRLA_TXPO_PAD2_Val _U_(0x2)                                       /**< (SERCOM_USART_INT_CTRLA) PAD[0] = TxD; PAD[2] = RTS; PAD[3] = CTS  */
#define SERCOM_USART_INT_CTRLA_TXPO_PAD0    (SERCOM_USART_INT_CTRLA_TXPO_PAD0_Val << SERCOM_USART_INT_CTRLA_TXPO_Pos)  /**< (SERCOM_USART_INT_CTRLA) PAD[0] = TxD; PAD[1] = XCK Position  */
#define SERCOM_USART_INT_CTRLA_TXPO_PAD1    (SERCOM_USART_INT_CTRLA_TXPO_PAD1_Val << SERCOM_USART_INT_CTRLA_TXPO_Pos)  /**< (SERCOM_USART_INT_CTRLA) PAD[2] = TxD; PAD[3] = XCK Position  */
#define SERCOM_USART_INT_CTRLA_TXPO_PAD2    (SERCOM_USART_INT_CTRLA_TXPO_PAD2_Val << SERCOM_USART_INT_CTRLA_TXPO_Pos)  /**< (SERCOM_USART_INT_CTRLA) PAD[0] = TxD; PAD[2] = RTS; PAD[3] = CTS Position  */
#define SERCOM_USART_INT_CTRLA_RXPO_Pos     20                                             /**< (SERCOM_USART_INT_CTRLA) Receive Data Pinout Position */
#define SERCOM_USART_INT_CTRLA_RXPO_Msk     (_U_(0x3) << SERCOM_USART_INT_CTRLA_RXPO_Pos)  /**< (SERCOM_USART_INT_CTRLA) Receive Data Pinout Mask */
#define SERCOM_USART_INT_CTRLA_RXPO(value)  (SERCOM_USART_INT_CTRLA_RXPO_Msk & ((value) << SERCOM_USART_INT_CTRLA_RXPO_Pos))
#define   SERCOM_USART_INT_CTRLA_RXPO_PAD0_Val _U_(0x0)                                       /**< (SERCOM_USART_INT_CTRLA) SERCOM PAD[0] is used for data reception  */
#define   SERCOM_USART_INT_CTRLA_RXPO_PAD1_Val _U_(0x1)                                       /**< (SERCOM_USART_INT_CTRLA) SERCOM PAD[1] is used for data reception  */
#define   SERCOM_USART_INT_CTRLA_RXPO_PAD2_Val _U_(0x2)                                       /**< (SERCOM_USART_INT_CTRLA) SERCOM PAD[2] is used for data reception  */
#define   SERCOM_USART_INT_CTRLA_RXPO_PAD3_Val _U_(0x3)                                       /**< (SERCOM_USART_INT_CTRLA) SERCOM PAD[3] is used for data reception  */
#define SERCOM_USART_INT_CTRLA_RXPO_PAD0    (SERCOM_USART_INT_CTRLA_RXPO_PAD0_Val << SERCOM_USART_INT_CTRLA_RXPO_Pos)  /**< (SERCOM_USART_INT_CTRLA) SERCOM PAD[0] is used for data reception Position  */
#define SERCOM_USART_INT_CTRLA_RXPO_PAD1    (SERCOM_USART_INT_CTRLA_RXPO_PAD1_Val << SERCOM_USART_INT_CTRLA_RXPO_Pos)  /**< (SERCOM_USART_INT_CTRLA) SERCOM PAD[1] is used for data reception Position  */
#define SERCOM_USART_INT_CTRLA_RXPO_PAD2    (SERCOM_USART_INT_CTRLA_RXPO_PAD2_Val << SERCOM_USART_INT_CTRLA_RXPO_Pos)  /**< (SERCOM_USART_INT_CTRLA) SERCOM PAD[2] is used for data reception Position  */
#define SERCOM_USART_INT_CTRLA_RXPO_PAD3    (SERCOM_USART_INT_CTRLA_RXPO_PAD3_Val << SERCOM_USART_INT_CTRLA_RXPO_Pos)  /**< (SERCOM_USART_INT_CTRLA) SERCOM PAD[3] is used for data reception Position  */
#define SERCOM_USART_INT_CTRLA_SAMPA_Pos    22                                             /**< (SERCOM_USART_INT_CTRLA) Sample Adjustment Position */
#define SERCOM_USART_INT_CTRLA_SAMPA_Msk    (_U_(0x3) << SERCOM_USART_INT_CTRLA_SAMPA_Pos)  /**< (SERCOM_USART_INT_CTRLA) Sample Adjustment Mask */
#define SERCOM_USART_INT_CTRLA_SAMPA(value) (SERCOM_USART_INT_CTRLA_SAMPA_Msk & ((value) << SERCOM_USART_INT_CTRLA_SAMPA_Pos))
#define   SERCOM_USART_INT_CTRLA_SAMPA_ADJ0_Val _U_(0x0)                                       /**< (SERCOM_USART_INT_CTRLA) 16x Over-sampling = 7-8-9; 8x Over-sampling = 3-4-5  */
#define   SERCOM_USART_INT_CTRLA_SAMPA_ADJ1_Val _U_(0x1)                                       /**< (SERCOM_USART_INT_CTRLA) 16x Over-sampling = 9-10-11; 8x Over-sampling = 4-5-6  */
#define   SERCOM_USART_INT_CTRLA_SAMPA_ADJ2_Val _U_(0x2)                                       /**< (SERCOM_USART_INT_CTRLA) 16x Over-sampling = 11-12-13; 8x Over-sampling = 5-6-7  */
#define   SERCOM_USART_INT_CTRLA_SAMPA_ADJ3_Val _U_(0x3)                                       /**< (SERCOM_USART_INT_CTRLA) 16x Over-sampling = 13-14-15; 8x Over-sampling = 6-7-8  */
#define SERCOM_USART_INT_CTRLA_SAMPA_ADJ0   (SERCOM_USART_INT_CTRLA_SAMPA_ADJ0_Val << SERCOM_USART_INT_CTRLA_SAMPA_Pos)  /**< (SERCOM_USART_INT_CTRLA) 16x Over-sampling = 7-8-9; 8x Over-sampling = 3-4-5 Position  */
#define SERCOM_USART_INT_CTRLA_SAMPA_ADJ1   (SERCOM_USART_INT_CTRLA_SAMPA_ADJ1_Val << SERCOM_USART_INT_CTRLA_SAMPA_Pos)  /**< (SERCOM_USART_INT_CTRLA) 16x Over-sampling = 9-10-11; 8x Over-sampling = 4-5-6 Position  */
#define SERCOM_USART_INT_CTRLA_SAMPA_ADJ2   (SERCOM_USART_INT_CTRLA_SAMPA_ADJ2_Val << SERCOM_USART_INT_CTRLA_SAMPA_Pos)  /**< (SERCOM_USART_INT_CTRLA) 16x Over-sampling = 11-12-13; 8x Over-sampling = 5-6-7 Position  */
#define SERCOM_USART_INT_CTRLA_SAMPA_ADJ3   (SERCOM_USART_INT_CTRLA_SAMPA_ADJ3_Val << SERCOM_USART_INT_CTRLA_SAMPA_Pos)  /**< (SERCOM_USART_INT_CTRLA) 16x Over-sampling = 13-14-15; 8x Over-sampling = 6-7-8 Position  */
#define SERCOM_USART_INT_CTRLA_FORM_Pos     24                                             /**< (SERCOM_USART_INT_CTRLA) Frame Format Position */
#define SERCOM_USART_INT_CTRLA_FORM_Msk     (_U_(0xF) << SERCOM_USART_INT_CTRLA_FORM_Pos)  /**< (SERCOM_USART_INT_CTRLA) Frame Format Mask */
#define SERCOM_USART_INT_CTRLA_FORM(value)  (SERCOM_USART_INT_CTRLA_FORM_Msk & ((value) << SERCOM_USART_INT_CTRLA_FORM_Pos))
#define   SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_NO_PARITY_Val _U_(0x0)                                       /**< (SERCOM_USART_INT_CTRLA) USART frame  */
#define   SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_WITH_PARITY_Val _U_(0x1)                                       /**< (SERCOM_USART_INT_CTRLA) USART frame with parity  */
#define   SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_NO_PARITY_Val _U_(0x4)                                       /**< (SERCOM_USART_INT_CTRLA) Auto-baud - break detection and auto-baud  */
#define   SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_WITH_PARITY_Val _U_(0x5)                                       /**< (SERCOM_USART_INT_CTRLA) Auto-baud - break detection and auto-baud with parity  */
#define SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_NO_PARITY (SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_NO_PARITY_Val << SERCOM_USART_INT_CTRLA_FORM_Pos)  /**< (SERCOM_USART_INT_CTRLA) USART frame Position  */
#define SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_WITH_PARITY (SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_WITH_PARITY_Val << SERCOM_USART_INT_CTRLA_FORM_Pos)  /**< (SERCOM_USART_INT_CTRLA) USART frame with parity Position  */
#define SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_NO_PARITY (SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_NO_PARITY_Val << SERCOM_USART_INT_CTRLA_FORM_Pos)  /**< (SERCOM_USART_INT_CTRLA) Auto-baud - break detection and auto-baud Position  */
#define SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_WITH_PARITY (SERCOM_USART_INT_CTRLA_FORM_USART_FRAME_AUTO_BAUD_WITH_PARITY_Val << SERCOM_USART_INT_CTRLA_FORM_Pos)  /**< (SERCOM_USART_INT_CTRLA) Auto-baud - break detection and auto-baud with parity Position  */
#define SERCOM_USART_INT_CTRLA_CMODE_Pos    28                                             /**< (SERCOM_USART_INT_CTRLA) Communication Mode Position */
#define SERCOM_USART_INT_CTRLA_CMODE_Msk    (_U_(0x1) << SERCOM_USART_INT_CTRLA_CMODE_Pos)  /**< (SERCOM_USART_INT_CTRLA) Communication Mode Mask */
#define SERCOM_USART_INT_CTRLA_CMODE        SERCOM_USART_INT_CTRLA_CMODE_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_CTRLA_CMODE_Msk instead */
#define   SERCOM_USART_INT_CTRLA_CMODE_ASYNC_Val _U_(0x0)                                       /**< (SERCOM_USART_INT_CTRLA) Asynchronous Communication  */
#define   SERCOM_USART_INT_CTRLA_CMODE_SYNC_Val _U_(0x1)                                       /**< (SERCOM_USART_INT_CTRLA) Synchronous Communication  */
#define SERCOM_USART_INT_CTRLA_CMODE_ASYNC  (SERCOM_USART_INT_CTRLA_CMODE_ASYNC_Val << SERCOM_USART_INT_CTRLA_CMODE_Pos)  /**< (SERCOM_USART_INT_CTRLA) Asynchronous Communication Position  */
#define SERCOM_USART_INT_CTRLA_CMODE_SYNC   (SERCOM_USART_INT_CTRLA_CMODE_SYNC_Val << SERCOM_USART_INT_CTRLA_CMODE_Pos)  /**< (SERCOM_USART_INT_CTRLA) Synchronous Communication Position  */
#define SERCOM_USART_INT_CTRLA_CPOL_Pos     29                                             /**< (SERCOM_USART_INT_CTRLA) Clock Polarity Position */
#define SERCOM_USART_INT_CTRLA_CPOL_Msk     (_U_(0x1) << SERCOM_USART_INT_CTRLA_CPOL_Pos)  /**< (SERCOM_USART_INT_CTRLA) Clock Polarity Mask */
#define SERCOM_USART_INT_CTRLA_CPOL         SERCOM_USART_INT_CTRLA_CPOL_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_CTRLA_CPOL_Msk instead */
#define   SERCOM_USART_INT_CTRLA_CPOL_IDLE_LOW_Val _U_(0x0)                                       /**< (SERCOM_USART_INT_CTRLA) TxD Change:- Rising XCK edge, RxD Sample:- Falling XCK edge  */
#define   SERCOM_USART_INT_CTRLA_CPOL_IDLE_HIGH_Val _U_(0x1)                                       /**< (SERCOM_USART_INT_CTRLA) TxD Change:- Falling XCK edge, RxD Sample:- Rising XCK edge  */
#define SERCOM_USART_INT_CTRLA_CPOL_IDLE_LOW (SERCOM_USART_INT_CTRLA_CPOL_IDLE_LOW_Val << SERCOM_USART_INT_CTRLA_CPOL_Pos)  /**< (SERCOM_USART_INT_CTRLA) TxD Change:- Rising XCK edge, RxD Sample:- Falling XCK edge Position  */
#define SERCOM_USART_INT_CTRLA_CPOL_IDLE_HIGH (SERCOM_USART_INT_CTRLA_CPOL_IDLE_HIGH_Val << SERCOM_USART_INT_CTRLA_CPOL_Pos)  /**< (SERCOM_USART_INT_CTRLA) TxD Change:- Falling XCK edge, RxD Sample:- Rising XCK edge Position  */
#define SERCOM_USART_INT_CTRLA_DORD_Pos     30                                             /**< (SERCOM_USART_INT_CTRLA) Data Order Position */
#define SERCOM_USART_INT_CTRLA_DORD_Msk     (_U_(0x1) << SERCOM_USART_INT_CTRLA_DORD_Pos)  /**< (SERCOM_USART_INT_CTRLA) Data Order Mask */
#define SERCOM_USART_INT_CTRLA_DORD         SERCOM_USART_INT_CTRLA_DORD_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_CTRLA_DORD_Msk instead */
#define   SERCOM_USART_INT_CTRLA_DORD_MSB_Val _U_(0x0)                                       /**< (SERCOM_USART_INT_CTRLA) MSB is transmitted first  */
#define   SERCOM_USART_INT_CTRLA_DORD_LSB_Val _U_(0x1)                                       /**< (SERCOM_USART_INT_CTRLA) LSB is transmitted first  */
#define SERCOM_USART_INT_CTRLA_DORD_MSB     (SERCOM_USART_INT_CTRLA_DORD_MSB_Val << SERCOM_USART_INT_CTRLA_DORD_Pos)  /**< (SERCOM_USART_INT_CTRLA) MSB is transmitted first Position  */
#define SERCOM_USART_INT_CTRLA_DORD_LSB     (SERCOM_USART_INT_CTRLA_DORD_LSB_Val << SERCOM_USART_INT_CTRLA_DORD_Pos)  /**< (SERCOM_USART_INT_CTRLA) LSB is transmitted first Position  */
#define SERCOM_USART_INT_CTRLA_MASK         _U_(0x7FF3E19F)                                /**< \deprecated (SERCOM_USART_INT_CTRLA) Register MASK  (Use SERCOM_USART_INT_CTRLA_Msk instead)  */
#define SERCOM_USART_INT_CTRLA_Msk          _U_(0x7FF3E19F)                                /**< (SERCOM_USART_INT_CTRLA) Register Mask  */


/* -------- SERCOM_I2CM_CTRLB : (SERCOM Offset: 0x04) (R/W 32) I2CM Control B -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t SMEN:1;                    /**< bit:      8  Smart Mode Enable                        */
    uint32_t QCEN:1;                    /**< bit:      9  Quick Command Enable                     */
    uint32_t :6;                        /**< bit: 10..15  Reserved */
    uint32_t CMD:2;                     /**< bit: 16..17  Command                                  */
    uint32_t ACKACT:1;                  /**< bit:     18  Acknowledge Action                       */
    uint32_t :13;                       /**< bit: 19..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_I2CM_CTRLB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_CTRLB_OFFSET            (0x04)                                        /**<  (SERCOM_I2CM_CTRLB) I2CM Control B  Offset */
#define SERCOM_I2CM_CTRLB_RESETVALUE        _U_(0x00)                                     /**<  (SERCOM_I2CM_CTRLB) I2CM Control B  Reset Value */

#define SERCOM_I2CM_CTRLB_SMEN_Pos          8                                              /**< (SERCOM_I2CM_CTRLB) Smart Mode Enable Position */
#define SERCOM_I2CM_CTRLB_SMEN_Msk          (_U_(0x1) << SERCOM_I2CM_CTRLB_SMEN_Pos)       /**< (SERCOM_I2CM_CTRLB) Smart Mode Enable Mask */
#define SERCOM_I2CM_CTRLB_SMEN              SERCOM_I2CM_CTRLB_SMEN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_CTRLB_SMEN_Msk instead */
#define SERCOM_I2CM_CTRLB_QCEN_Pos          9                                              /**< (SERCOM_I2CM_CTRLB) Quick Command Enable Position */
#define SERCOM_I2CM_CTRLB_QCEN_Msk          (_U_(0x1) << SERCOM_I2CM_CTRLB_QCEN_Pos)       /**< (SERCOM_I2CM_CTRLB) Quick Command Enable Mask */
#define SERCOM_I2CM_CTRLB_QCEN              SERCOM_I2CM_CTRLB_QCEN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_CTRLB_QCEN_Msk instead */
#define SERCOM_I2CM_CTRLB_CMD_Pos           16                                             /**< (SERCOM_I2CM_CTRLB) Command Position */
#define SERCOM_I2CM_CTRLB_CMD_Msk           (_U_(0x3) << SERCOM_I2CM_CTRLB_CMD_Pos)        /**< (SERCOM_I2CM_CTRLB) Command Mask */
#define SERCOM_I2CM_CTRLB_CMD(value)        (SERCOM_I2CM_CTRLB_CMD_Msk & ((value) << SERCOM_I2CM_CTRLB_CMD_Pos))
#define SERCOM_I2CM_CTRLB_ACKACT_Pos        18                                             /**< (SERCOM_I2CM_CTRLB) Acknowledge Action Position */
#define SERCOM_I2CM_CTRLB_ACKACT_Msk        (_U_(0x1) << SERCOM_I2CM_CTRLB_ACKACT_Pos)     /**< (SERCOM_I2CM_CTRLB) Acknowledge Action Mask */
#define SERCOM_I2CM_CTRLB_ACKACT            SERCOM_I2CM_CTRLB_ACKACT_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_CTRLB_ACKACT_Msk instead */
#define SERCOM_I2CM_CTRLB_MASK              _U_(0x70300)                                   /**< \deprecated (SERCOM_I2CM_CTRLB) Register MASK  (Use SERCOM_I2CM_CTRLB_Msk instead)  */
#define SERCOM_I2CM_CTRLB_Msk               _U_(0x70300)                                   /**< (SERCOM_I2CM_CTRLB) Register Mask  */


/* -------- SERCOM_I2CS_CTRLB : (SERCOM Offset: 0x04) (R/W 32) I2CS Control B -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t SMEN:1;                    /**< bit:      8  Smart Mode Enable                        */
    uint32_t GCMD:1;                    /**< bit:      9  PMBus Group Command                      */
    uint32_t AACKEN:1;                  /**< bit:     10  Automatic Address Acknowledge            */
    uint32_t :3;                        /**< bit: 11..13  Reserved */
    uint32_t AMODE:2;                   /**< bit: 14..15  Address Mode                             */
    uint32_t CMD:2;                     /**< bit: 16..17  Command                                  */
    uint32_t ACKACT:1;                  /**< bit:     18  Acknowledge Action                       */
    uint32_t :13;                       /**< bit: 19..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_I2CS_CTRLB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_CTRLB_OFFSET            (0x04)                                        /**<  (SERCOM_I2CS_CTRLB) I2CS Control B  Offset */
#define SERCOM_I2CS_CTRLB_RESETVALUE        _U_(0x00)                                     /**<  (SERCOM_I2CS_CTRLB) I2CS Control B  Reset Value */

#define SERCOM_I2CS_CTRLB_SMEN_Pos          8                                              /**< (SERCOM_I2CS_CTRLB) Smart Mode Enable Position */
#define SERCOM_I2CS_CTRLB_SMEN_Msk          (_U_(0x1) << SERCOM_I2CS_CTRLB_SMEN_Pos)       /**< (SERCOM_I2CS_CTRLB) Smart Mode Enable Mask */
#define SERCOM_I2CS_CTRLB_SMEN              SERCOM_I2CS_CTRLB_SMEN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_CTRLB_SMEN_Msk instead */
#define SERCOM_I2CS_CTRLB_GCMD_Pos          9                                              /**< (SERCOM_I2CS_CTRLB) PMBus Group Command Position */
#define SERCOM_I2CS_CTRLB_GCMD_Msk          (_U_(0x1) << SERCOM_I2CS_CTRLB_GCMD_Pos)       /**< (SERCOM_I2CS_CTRLB) PMBus Group Command Mask */
#define SERCOM_I2CS_CTRLB_GCMD              SERCOM_I2CS_CTRLB_GCMD_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_CTRLB_GCMD_Msk instead */
#define SERCOM_I2CS_CTRLB_AACKEN_Pos        10                                             /**< (SERCOM_I2CS_CTRLB) Automatic Address Acknowledge Position */
#define SERCOM_I2CS_CTRLB_AACKEN_Msk        (_U_(0x1) << SERCOM_I2CS_CTRLB_AACKEN_Pos)     /**< (SERCOM_I2CS_CTRLB) Automatic Address Acknowledge Mask */
#define SERCOM_I2CS_CTRLB_AACKEN            SERCOM_I2CS_CTRLB_AACKEN_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_CTRLB_AACKEN_Msk instead */
#define SERCOM_I2CS_CTRLB_AMODE_Pos         14                                             /**< (SERCOM_I2CS_CTRLB) Address Mode Position */
#define SERCOM_I2CS_CTRLB_AMODE_Msk         (_U_(0x3) << SERCOM_I2CS_CTRLB_AMODE_Pos)      /**< (SERCOM_I2CS_CTRLB) Address Mode Mask */
#define SERCOM_I2CS_CTRLB_AMODE(value)      (SERCOM_I2CS_CTRLB_AMODE_Msk & ((value) << SERCOM_I2CS_CTRLB_AMODE_Pos))
#define SERCOM_I2CS_CTRLB_CMD_Pos           16                                             /**< (SERCOM_I2CS_CTRLB) Command Position */
#define SERCOM_I2CS_CTRLB_CMD_Msk           (_U_(0x3) << SERCOM_I2CS_CTRLB_CMD_Pos)        /**< (SERCOM_I2CS_CTRLB) Command Mask */
#define SERCOM_I2CS_CTRLB_CMD(value)        (SERCOM_I2CS_CTRLB_CMD_Msk & ((value) << SERCOM_I2CS_CTRLB_CMD_Pos))
#define SERCOM_I2CS_CTRLB_ACKACT_Pos        18                                             /**< (SERCOM_I2CS_CTRLB) Acknowledge Action Position */
#define SERCOM_I2CS_CTRLB_ACKACT_Msk        (_U_(0x1) << SERCOM_I2CS_CTRLB_ACKACT_Pos)     /**< (SERCOM_I2CS_CTRLB) Acknowledge Action Mask */
#define SERCOM_I2CS_CTRLB_ACKACT            SERCOM_I2CS_CTRLB_ACKACT_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_CTRLB_ACKACT_Msk instead */
#define SERCOM_I2CS_CTRLB_MASK              _U_(0x7C700)                                   /**< \deprecated (SERCOM_I2CS_CTRLB) Register MASK  (Use SERCOM_I2CS_CTRLB_Msk instead)  */
#define SERCOM_I2CS_CTRLB_Msk               _U_(0x7C700)                                   /**< (SERCOM_I2CS_CTRLB) Register Mask  */


/* -------- SERCOM_SPIM_CTRLB : (SERCOM Offset: 0x04) (R/W 32) SPIM Control B -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHSIZE:3;                  /**< bit:   0..2  Character Size                           */
    uint32_t :3;                        /**< bit:   3..5  Reserved */
    uint32_t PLOADEN:1;                 /**< bit:      6  Data Preload Enable                      */
    uint32_t :2;                        /**< bit:   7..8  Reserved */
    uint32_t SSDE:1;                    /**< bit:      9  Slave Select Low Detect Enable           */
    uint32_t :3;                        /**< bit: 10..12  Reserved */
    uint32_t MSSEN:1;                   /**< bit:     13  Master Slave Select Enable               */
    uint32_t AMODE:2;                   /**< bit: 14..15  Address Mode                             */
    uint32_t :1;                        /**< bit:     16  Reserved */
    uint32_t RXEN:1;                    /**< bit:     17  Receiver Enable                          */
    uint32_t :14;                       /**< bit: 18..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_SPIM_CTRLB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIM_CTRLB_OFFSET            (0x04)                                        /**<  (SERCOM_SPIM_CTRLB) SPIM Control B  Offset */
#define SERCOM_SPIM_CTRLB_RESETVALUE        _U_(0x00)                                     /**<  (SERCOM_SPIM_CTRLB) SPIM Control B  Reset Value */

#define SERCOM_SPIM_CTRLB_CHSIZE_Pos        0                                              /**< (SERCOM_SPIM_CTRLB) Character Size Position */
#define SERCOM_SPIM_CTRLB_CHSIZE_Msk        (_U_(0x7) << SERCOM_SPIM_CTRLB_CHSIZE_Pos)     /**< (SERCOM_SPIM_CTRLB) Character Size Mask */
#define SERCOM_SPIM_CTRLB_CHSIZE(value)     (SERCOM_SPIM_CTRLB_CHSIZE_Msk & ((value) << SERCOM_SPIM_CTRLB_CHSIZE_Pos))
#define   SERCOM_SPIM_CTRLB_CHSIZE_8_BIT_Val _U_(0x0)                                       /**< (SERCOM_SPIM_CTRLB) 8 bits  */
#define   SERCOM_SPIM_CTRLB_CHSIZE_9_BIT_Val _U_(0x1)                                       /**< (SERCOM_SPIM_CTRLB) 9 bits  */
#define SERCOM_SPIM_CTRLB_CHSIZE_8_BIT      (SERCOM_SPIM_CTRLB_CHSIZE_8_BIT_Val << SERCOM_SPIM_CTRLB_CHSIZE_Pos)  /**< (SERCOM_SPIM_CTRLB) 8 bits Position  */
#define SERCOM_SPIM_CTRLB_CHSIZE_9_BIT      (SERCOM_SPIM_CTRLB_CHSIZE_9_BIT_Val << SERCOM_SPIM_CTRLB_CHSIZE_Pos)  /**< (SERCOM_SPIM_CTRLB) 9 bits Position  */
#define SERCOM_SPIM_CTRLB_PLOADEN_Pos       6                                              /**< (SERCOM_SPIM_CTRLB) Data Preload Enable Position */
#define SERCOM_SPIM_CTRLB_PLOADEN_Msk       (_U_(0x1) << SERCOM_SPIM_CTRLB_PLOADEN_Pos)    /**< (SERCOM_SPIM_CTRLB) Data Preload Enable Mask */
#define SERCOM_SPIM_CTRLB_PLOADEN           SERCOM_SPIM_CTRLB_PLOADEN_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_CTRLB_PLOADEN_Msk instead */
#define SERCOM_SPIM_CTRLB_SSDE_Pos          9                                              /**< (SERCOM_SPIM_CTRLB) Slave Select Low Detect Enable Position */
#define SERCOM_SPIM_CTRLB_SSDE_Msk          (_U_(0x1) << SERCOM_SPIM_CTRLB_SSDE_Pos)       /**< (SERCOM_SPIM_CTRLB) Slave Select Low Detect Enable Mask */
#define SERCOM_SPIM_CTRLB_SSDE              SERCOM_SPIM_CTRLB_SSDE_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_CTRLB_SSDE_Msk instead */
#define SERCOM_SPIM_CTRLB_MSSEN_Pos         13                                             /**< (SERCOM_SPIM_CTRLB) Master Slave Select Enable Position */
#define SERCOM_SPIM_CTRLB_MSSEN_Msk         (_U_(0x1) << SERCOM_SPIM_CTRLB_MSSEN_Pos)      /**< (SERCOM_SPIM_CTRLB) Master Slave Select Enable Mask */
#define SERCOM_SPIM_CTRLB_MSSEN             SERCOM_SPIM_CTRLB_MSSEN_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_CTRLB_MSSEN_Msk instead */
#define SERCOM_SPIM_CTRLB_AMODE_Pos         14                                             /**< (SERCOM_SPIM_CTRLB) Address Mode Position */
#define SERCOM_SPIM_CTRLB_AMODE_Msk         (_U_(0x3) << SERCOM_SPIM_CTRLB_AMODE_Pos)      /**< (SERCOM_SPIM_CTRLB) Address Mode Mask */
#define SERCOM_SPIM_CTRLB_AMODE(value)      (SERCOM_SPIM_CTRLB_AMODE_Msk & ((value) << SERCOM_SPIM_CTRLB_AMODE_Pos))
#define   SERCOM_SPIM_CTRLB_AMODE_MASK_Val  _U_(0x0)                                       /**< (SERCOM_SPIM_CTRLB) SPI Address mask   */
#define   SERCOM_SPIM_CTRLB_AMODE_2_ADDRESSES_Val _U_(0x1)                                       /**< (SERCOM_SPIM_CTRLB) Two unique Addressess  */
#define   SERCOM_SPIM_CTRLB_AMODE_RANGE_Val _U_(0x2)                                       /**< (SERCOM_SPIM_CTRLB) Address Range  */
#define SERCOM_SPIM_CTRLB_AMODE_MASK        (SERCOM_SPIM_CTRLB_AMODE_MASK_Val << SERCOM_SPIM_CTRLB_AMODE_Pos)  /**< (SERCOM_SPIM_CTRLB) SPI Address mask  Position  */
#define SERCOM_SPIM_CTRLB_AMODE_2_ADDRESSES (SERCOM_SPIM_CTRLB_AMODE_2_ADDRESSES_Val << SERCOM_SPIM_CTRLB_AMODE_Pos)  /**< (SERCOM_SPIM_CTRLB) Two unique Addressess Position  */
#define SERCOM_SPIM_CTRLB_AMODE_RANGE       (SERCOM_SPIM_CTRLB_AMODE_RANGE_Val << SERCOM_SPIM_CTRLB_AMODE_Pos)  /**< (SERCOM_SPIM_CTRLB) Address Range Position  */
#define SERCOM_SPIM_CTRLB_RXEN_Pos          17                                             /**< (SERCOM_SPIM_CTRLB) Receiver Enable Position */
#define SERCOM_SPIM_CTRLB_RXEN_Msk          (_U_(0x1) << SERCOM_SPIM_CTRLB_RXEN_Pos)       /**< (SERCOM_SPIM_CTRLB) Receiver Enable Mask */
#define SERCOM_SPIM_CTRLB_RXEN              SERCOM_SPIM_CTRLB_RXEN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_CTRLB_RXEN_Msk instead */
#define SERCOM_SPIM_CTRLB_MASK              _U_(0x2E247)                                   /**< \deprecated (SERCOM_SPIM_CTRLB) Register MASK  (Use SERCOM_SPIM_CTRLB_Msk instead)  */
#define SERCOM_SPIM_CTRLB_Msk               _U_(0x2E247)                                   /**< (SERCOM_SPIM_CTRLB) Register Mask  */


/* -------- SERCOM_SPIS_CTRLB : (SERCOM Offset: 0x04) (R/W 32) SPIS Control B -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHSIZE:3;                  /**< bit:   0..2  Character Size                           */
    uint32_t :3;                        /**< bit:   3..5  Reserved */
    uint32_t PLOADEN:1;                 /**< bit:      6  Data Preload Enable                      */
    uint32_t :2;                        /**< bit:   7..8  Reserved */
    uint32_t SSDE:1;                    /**< bit:      9  Slave Select Low Detect Enable           */
    uint32_t :3;                        /**< bit: 10..12  Reserved */
    uint32_t MSSEN:1;                   /**< bit:     13  Master Slave Select Enable               */
    uint32_t AMODE:2;                   /**< bit: 14..15  Address Mode                             */
    uint32_t :1;                        /**< bit:     16  Reserved */
    uint32_t RXEN:1;                    /**< bit:     17  Receiver Enable                          */
    uint32_t :14;                       /**< bit: 18..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_SPIS_CTRLB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIS_CTRLB_OFFSET            (0x04)                                        /**<  (SERCOM_SPIS_CTRLB) SPIS Control B  Offset */
#define SERCOM_SPIS_CTRLB_RESETVALUE        _U_(0x00)                                     /**<  (SERCOM_SPIS_CTRLB) SPIS Control B  Reset Value */

#define SERCOM_SPIS_CTRLB_CHSIZE_Pos        0                                              /**< (SERCOM_SPIS_CTRLB) Character Size Position */
#define SERCOM_SPIS_CTRLB_CHSIZE_Msk        (_U_(0x7) << SERCOM_SPIS_CTRLB_CHSIZE_Pos)     /**< (SERCOM_SPIS_CTRLB) Character Size Mask */
#define SERCOM_SPIS_CTRLB_CHSIZE(value)     (SERCOM_SPIS_CTRLB_CHSIZE_Msk & ((value) << SERCOM_SPIS_CTRLB_CHSIZE_Pos))
#define   SERCOM_SPIS_CTRLB_CHSIZE_8_BIT_Val _U_(0x0)                                       /**< (SERCOM_SPIS_CTRLB) 8 bits  */
#define   SERCOM_SPIS_CTRLB_CHSIZE_9_BIT_Val _U_(0x1)                                       /**< (SERCOM_SPIS_CTRLB) 9 bits  */
#define SERCOM_SPIS_CTRLB_CHSIZE_8_BIT      (SERCOM_SPIS_CTRLB_CHSIZE_8_BIT_Val << SERCOM_SPIS_CTRLB_CHSIZE_Pos)  /**< (SERCOM_SPIS_CTRLB) 8 bits Position  */
#define SERCOM_SPIS_CTRLB_CHSIZE_9_BIT      (SERCOM_SPIS_CTRLB_CHSIZE_9_BIT_Val << SERCOM_SPIS_CTRLB_CHSIZE_Pos)  /**< (SERCOM_SPIS_CTRLB) 9 bits Position  */
#define SERCOM_SPIS_CTRLB_PLOADEN_Pos       6                                              /**< (SERCOM_SPIS_CTRLB) Data Preload Enable Position */
#define SERCOM_SPIS_CTRLB_PLOADEN_Msk       (_U_(0x1) << SERCOM_SPIS_CTRLB_PLOADEN_Pos)    /**< (SERCOM_SPIS_CTRLB) Data Preload Enable Mask */
#define SERCOM_SPIS_CTRLB_PLOADEN           SERCOM_SPIS_CTRLB_PLOADEN_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_CTRLB_PLOADEN_Msk instead */
#define SERCOM_SPIS_CTRLB_SSDE_Pos          9                                              /**< (SERCOM_SPIS_CTRLB) Slave Select Low Detect Enable Position */
#define SERCOM_SPIS_CTRLB_SSDE_Msk          (_U_(0x1) << SERCOM_SPIS_CTRLB_SSDE_Pos)       /**< (SERCOM_SPIS_CTRLB) Slave Select Low Detect Enable Mask */
#define SERCOM_SPIS_CTRLB_SSDE              SERCOM_SPIS_CTRLB_SSDE_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_CTRLB_SSDE_Msk instead */
#define SERCOM_SPIS_CTRLB_MSSEN_Pos         13                                             /**< (SERCOM_SPIS_CTRLB) Master Slave Select Enable Position */
#define SERCOM_SPIS_CTRLB_MSSEN_Msk         (_U_(0x1) << SERCOM_SPIS_CTRLB_MSSEN_Pos)      /**< (SERCOM_SPIS_CTRLB) Master Slave Select Enable Mask */
#define SERCOM_SPIS_CTRLB_MSSEN             SERCOM_SPIS_CTRLB_MSSEN_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_CTRLB_MSSEN_Msk instead */
#define SERCOM_SPIS_CTRLB_AMODE_Pos         14                                             /**< (SERCOM_SPIS_CTRLB) Address Mode Position */
#define SERCOM_SPIS_CTRLB_AMODE_Msk         (_U_(0x3) << SERCOM_SPIS_CTRLB_AMODE_Pos)      /**< (SERCOM_SPIS_CTRLB) Address Mode Mask */
#define SERCOM_SPIS_CTRLB_AMODE(value)      (SERCOM_SPIS_CTRLB_AMODE_Msk & ((value) << SERCOM_SPIS_CTRLB_AMODE_Pos))
#define   SERCOM_SPIS_CTRLB_AMODE_MASK_Val  _U_(0x0)                                       /**< (SERCOM_SPIS_CTRLB) SPI Address mask   */
#define   SERCOM_SPIS_CTRLB_AMODE_2_ADDRESSES_Val _U_(0x1)                                       /**< (SERCOM_SPIS_CTRLB) Two unique Addressess  */
#define   SERCOM_SPIS_CTRLB_AMODE_RANGE_Val _U_(0x2)                                       /**< (SERCOM_SPIS_CTRLB) Address Range  */
#define SERCOM_SPIS_CTRLB_AMODE_MASK        (SERCOM_SPIS_CTRLB_AMODE_MASK_Val << SERCOM_SPIS_CTRLB_AMODE_Pos)  /**< (SERCOM_SPIS_CTRLB) SPI Address mask  Position  */
#define SERCOM_SPIS_CTRLB_AMODE_2_ADDRESSES (SERCOM_SPIS_CTRLB_AMODE_2_ADDRESSES_Val << SERCOM_SPIS_CTRLB_AMODE_Pos)  /**< (SERCOM_SPIS_CTRLB) Two unique Addressess Position  */
#define SERCOM_SPIS_CTRLB_AMODE_RANGE       (SERCOM_SPIS_CTRLB_AMODE_RANGE_Val << SERCOM_SPIS_CTRLB_AMODE_Pos)  /**< (SERCOM_SPIS_CTRLB) Address Range Position  */
#define SERCOM_SPIS_CTRLB_RXEN_Pos          17                                             /**< (SERCOM_SPIS_CTRLB) Receiver Enable Position */
#define SERCOM_SPIS_CTRLB_RXEN_Msk          (_U_(0x1) << SERCOM_SPIS_CTRLB_RXEN_Pos)       /**< (SERCOM_SPIS_CTRLB) Receiver Enable Mask */
#define SERCOM_SPIS_CTRLB_RXEN              SERCOM_SPIS_CTRLB_RXEN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_CTRLB_RXEN_Msk instead */
#define SERCOM_SPIS_CTRLB_MASK              _U_(0x2E247)                                   /**< \deprecated (SERCOM_SPIS_CTRLB) Register MASK  (Use SERCOM_SPIS_CTRLB_Msk instead)  */
#define SERCOM_SPIS_CTRLB_Msk               _U_(0x2E247)                                   /**< (SERCOM_SPIS_CTRLB) Register Mask  */


/* -------- SERCOM_USART_EXT_CTRLB : (SERCOM Offset: 0x04) (R/W 32) USART_EXT Control B -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHSIZE:3;                  /**< bit:   0..2  Character Size                           */
    uint32_t :3;                        /**< bit:   3..5  Reserved */
    uint32_t SBMODE:1;                  /**< bit:      6  Stop Bit Mode                            */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t COLDEN:1;                  /**< bit:      8  Collision Detection Enable               */
    uint32_t SFDE:1;                    /**< bit:      9  Start of Frame Detection Enable          */
    uint32_t ENC:1;                     /**< bit:     10  Encoding Format                          */
    uint32_t :2;                        /**< bit: 11..12  Reserved */
    uint32_t PMODE:1;                   /**< bit:     13  Parity Mode                              */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t TXEN:1;                    /**< bit:     16  Transmitter Enable                       */
    uint32_t RXEN:1;                    /**< bit:     17  Receiver Enable                          */
    uint32_t :14;                       /**< bit: 18..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_USART_EXT_CTRLB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_EXT_CTRLB_OFFSET       (0x04)                                        /**<  (SERCOM_USART_EXT_CTRLB) USART_EXT Control B  Offset */
#define SERCOM_USART_EXT_CTRLB_RESETVALUE   _U_(0x00)                                     /**<  (SERCOM_USART_EXT_CTRLB) USART_EXT Control B  Reset Value */

#define SERCOM_USART_EXT_CTRLB_CHSIZE_Pos   0                                              /**< (SERCOM_USART_EXT_CTRLB) Character Size Position */
#define SERCOM_USART_EXT_CTRLB_CHSIZE_Msk   (_U_(0x7) << SERCOM_USART_EXT_CTRLB_CHSIZE_Pos)  /**< (SERCOM_USART_EXT_CTRLB) Character Size Mask */
#define SERCOM_USART_EXT_CTRLB_CHSIZE(value) (SERCOM_USART_EXT_CTRLB_CHSIZE_Msk & ((value) << SERCOM_USART_EXT_CTRLB_CHSIZE_Pos))
#define   SERCOM_USART_EXT_CTRLB_CHSIZE_8_BIT_Val _U_(0x0)                                       /**< (SERCOM_USART_EXT_CTRLB) 8 Bits  */
#define   SERCOM_USART_EXT_CTRLB_CHSIZE_9_BIT_Val _U_(0x1)                                       /**< (SERCOM_USART_EXT_CTRLB) 9 Bits  */
#define   SERCOM_USART_EXT_CTRLB_CHSIZE_5_BIT_Val _U_(0x5)                                       /**< (SERCOM_USART_EXT_CTRLB) 5 Bits  */
#define   SERCOM_USART_EXT_CTRLB_CHSIZE_6_BIT_Val _U_(0x6)                                       /**< (SERCOM_USART_EXT_CTRLB) 6 Bits  */
#define   SERCOM_USART_EXT_CTRLB_CHSIZE_7_BIT_Val _U_(0x7)                                       /**< (SERCOM_USART_EXT_CTRLB) 7 Bits  */
#define SERCOM_USART_EXT_CTRLB_CHSIZE_8_BIT (SERCOM_USART_EXT_CTRLB_CHSIZE_8_BIT_Val << SERCOM_USART_EXT_CTRLB_CHSIZE_Pos)  /**< (SERCOM_USART_EXT_CTRLB) 8 Bits Position  */
#define SERCOM_USART_EXT_CTRLB_CHSIZE_9_BIT (SERCOM_USART_EXT_CTRLB_CHSIZE_9_BIT_Val << SERCOM_USART_EXT_CTRLB_CHSIZE_Pos)  /**< (SERCOM_USART_EXT_CTRLB) 9 Bits Position  */
#define SERCOM_USART_EXT_CTRLB_CHSIZE_5_BIT (SERCOM_USART_EXT_CTRLB_CHSIZE_5_BIT_Val << SERCOM_USART_EXT_CTRLB_CHSIZE_Pos)  /**< (SERCOM_USART_EXT_CTRLB) 5 Bits Position  */
#define SERCOM_USART_EXT_CTRLB_CHSIZE_6_BIT (SERCOM_USART_EXT_CTRLB_CHSIZE_6_BIT_Val << SERCOM_USART_EXT_CTRLB_CHSIZE_Pos)  /**< (SERCOM_USART_EXT_CTRLB) 6 Bits Position  */
#define SERCOM_USART_EXT_CTRLB_CHSIZE_7_BIT (SERCOM_USART_EXT_CTRLB_CHSIZE_7_BIT_Val << SERCOM_USART_EXT_CTRLB_CHSIZE_Pos)  /**< (SERCOM_USART_EXT_CTRLB) 7 Bits Position  */
#define SERCOM_USART_EXT_CTRLB_SBMODE_Pos   6                                              /**< (SERCOM_USART_EXT_CTRLB) Stop Bit Mode Position */
#define SERCOM_USART_EXT_CTRLB_SBMODE_Msk   (_U_(0x1) << SERCOM_USART_EXT_CTRLB_SBMODE_Pos)  /**< (SERCOM_USART_EXT_CTRLB) Stop Bit Mode Mask */
#define SERCOM_USART_EXT_CTRLB_SBMODE       SERCOM_USART_EXT_CTRLB_SBMODE_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_CTRLB_SBMODE_Msk instead */
#define   SERCOM_USART_EXT_CTRLB_SBMODE_1_BIT_Val _U_(0x0)                                       /**< (SERCOM_USART_EXT_CTRLB) One Stop Bit  */
#define   SERCOM_USART_EXT_CTRLB_SBMODE_2_BIT_Val _U_(0x1)                                       /**< (SERCOM_USART_EXT_CTRLB) Two Stop Bits  */
#define SERCOM_USART_EXT_CTRLB_SBMODE_1_BIT (SERCOM_USART_EXT_CTRLB_SBMODE_1_BIT_Val << SERCOM_USART_EXT_CTRLB_SBMODE_Pos)  /**< (SERCOM_USART_EXT_CTRLB) One Stop Bit Position  */
#define SERCOM_USART_EXT_CTRLB_SBMODE_2_BIT (SERCOM_USART_EXT_CTRLB_SBMODE_2_BIT_Val << SERCOM_USART_EXT_CTRLB_SBMODE_Pos)  /**< (SERCOM_USART_EXT_CTRLB) Two Stop Bits Position  */
#define SERCOM_USART_EXT_CTRLB_COLDEN_Pos   8                                              /**< (SERCOM_USART_EXT_CTRLB) Collision Detection Enable Position */
#define SERCOM_USART_EXT_CTRLB_COLDEN_Msk   (_U_(0x1) << SERCOM_USART_EXT_CTRLB_COLDEN_Pos)  /**< (SERCOM_USART_EXT_CTRLB) Collision Detection Enable Mask */
#define SERCOM_USART_EXT_CTRLB_COLDEN       SERCOM_USART_EXT_CTRLB_COLDEN_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_CTRLB_COLDEN_Msk instead */
#define SERCOM_USART_EXT_CTRLB_SFDE_Pos     9                                              /**< (SERCOM_USART_EXT_CTRLB) Start of Frame Detection Enable Position */
#define SERCOM_USART_EXT_CTRLB_SFDE_Msk     (_U_(0x1) << SERCOM_USART_EXT_CTRLB_SFDE_Pos)  /**< (SERCOM_USART_EXT_CTRLB) Start of Frame Detection Enable Mask */
#define SERCOM_USART_EXT_CTRLB_SFDE         SERCOM_USART_EXT_CTRLB_SFDE_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_CTRLB_SFDE_Msk instead */
#define SERCOM_USART_EXT_CTRLB_ENC_Pos      10                                             /**< (SERCOM_USART_EXT_CTRLB) Encoding Format Position */
#define SERCOM_USART_EXT_CTRLB_ENC_Msk      (_U_(0x1) << SERCOM_USART_EXT_CTRLB_ENC_Pos)   /**< (SERCOM_USART_EXT_CTRLB) Encoding Format Mask */
#define SERCOM_USART_EXT_CTRLB_ENC          SERCOM_USART_EXT_CTRLB_ENC_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_CTRLB_ENC_Msk instead */
#define SERCOM_USART_EXT_CTRLB_PMODE_Pos    13                                             /**< (SERCOM_USART_EXT_CTRLB) Parity Mode Position */
#define SERCOM_USART_EXT_CTRLB_PMODE_Msk    (_U_(0x1) << SERCOM_USART_EXT_CTRLB_PMODE_Pos)  /**< (SERCOM_USART_EXT_CTRLB) Parity Mode Mask */
#define SERCOM_USART_EXT_CTRLB_PMODE        SERCOM_USART_EXT_CTRLB_PMODE_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_CTRLB_PMODE_Msk instead */
#define   SERCOM_USART_EXT_CTRLB_PMODE_EVEN_Val _U_(0x0)                                       /**< (SERCOM_USART_EXT_CTRLB) Even Parity  */
#define   SERCOM_USART_EXT_CTRLB_PMODE_ODD_Val _U_(0x1)                                       /**< (SERCOM_USART_EXT_CTRLB) Odd Parity  */
#define SERCOM_USART_EXT_CTRLB_PMODE_EVEN   (SERCOM_USART_EXT_CTRLB_PMODE_EVEN_Val << SERCOM_USART_EXT_CTRLB_PMODE_Pos)  /**< (SERCOM_USART_EXT_CTRLB) Even Parity Position  */
#define SERCOM_USART_EXT_CTRLB_PMODE_ODD    (SERCOM_USART_EXT_CTRLB_PMODE_ODD_Val << SERCOM_USART_EXT_CTRLB_PMODE_Pos)  /**< (SERCOM_USART_EXT_CTRLB) Odd Parity Position  */
#define SERCOM_USART_EXT_CTRLB_TXEN_Pos     16                                             /**< (SERCOM_USART_EXT_CTRLB) Transmitter Enable Position */
#define SERCOM_USART_EXT_CTRLB_TXEN_Msk     (_U_(0x1) << SERCOM_USART_EXT_CTRLB_TXEN_Pos)  /**< (SERCOM_USART_EXT_CTRLB) Transmitter Enable Mask */
#define SERCOM_USART_EXT_CTRLB_TXEN         SERCOM_USART_EXT_CTRLB_TXEN_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_CTRLB_TXEN_Msk instead */
#define SERCOM_USART_EXT_CTRLB_RXEN_Pos     17                                             /**< (SERCOM_USART_EXT_CTRLB) Receiver Enable Position */
#define SERCOM_USART_EXT_CTRLB_RXEN_Msk     (_U_(0x1) << SERCOM_USART_EXT_CTRLB_RXEN_Pos)  /**< (SERCOM_USART_EXT_CTRLB) Receiver Enable Mask */
#define SERCOM_USART_EXT_CTRLB_RXEN         SERCOM_USART_EXT_CTRLB_RXEN_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_CTRLB_RXEN_Msk instead */
#define SERCOM_USART_EXT_CTRLB_MASK         _U_(0x32747)                                   /**< \deprecated (SERCOM_USART_EXT_CTRLB) Register MASK  (Use SERCOM_USART_EXT_CTRLB_Msk instead)  */
#define SERCOM_USART_EXT_CTRLB_Msk          _U_(0x32747)                                   /**< (SERCOM_USART_EXT_CTRLB) Register Mask  */


/* -------- SERCOM_USART_INT_CTRLB : (SERCOM Offset: 0x04) (R/W 32) USART_INT Control B -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHSIZE:3;                  /**< bit:   0..2  Character Size                           */
    uint32_t :3;                        /**< bit:   3..5  Reserved */
    uint32_t SBMODE:1;                  /**< bit:      6  Stop Bit Mode                            */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t COLDEN:1;                  /**< bit:      8  Collision Detection Enable               */
    uint32_t SFDE:1;                    /**< bit:      9  Start of Frame Detection Enable          */
    uint32_t ENC:1;                     /**< bit:     10  Encoding Format                          */
    uint32_t :2;                        /**< bit: 11..12  Reserved */
    uint32_t PMODE:1;                   /**< bit:     13  Parity Mode                              */
    uint32_t :2;                        /**< bit: 14..15  Reserved */
    uint32_t TXEN:1;                    /**< bit:     16  Transmitter Enable                       */
    uint32_t RXEN:1;                    /**< bit:     17  Receiver Enable                          */
    uint32_t :14;                       /**< bit: 18..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_USART_INT_CTRLB_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_INT_CTRLB_OFFSET       (0x04)                                        /**<  (SERCOM_USART_INT_CTRLB) USART_INT Control B  Offset */
#define SERCOM_USART_INT_CTRLB_RESETVALUE   _U_(0x00)                                     /**<  (SERCOM_USART_INT_CTRLB) USART_INT Control B  Reset Value */

#define SERCOM_USART_INT_CTRLB_CHSIZE_Pos   0                                              /**< (SERCOM_USART_INT_CTRLB) Character Size Position */
#define SERCOM_USART_INT_CTRLB_CHSIZE_Msk   (_U_(0x7) << SERCOM_USART_INT_CTRLB_CHSIZE_Pos)  /**< (SERCOM_USART_INT_CTRLB) Character Size Mask */
#define SERCOM_USART_INT_CTRLB_CHSIZE(value) (SERCOM_USART_INT_CTRLB_CHSIZE_Msk & ((value) << SERCOM_USART_INT_CTRLB_CHSIZE_Pos))
#define   SERCOM_USART_INT_CTRLB_CHSIZE_8_BIT_Val _U_(0x0)                                       /**< (SERCOM_USART_INT_CTRLB) 8 Bits  */
#define   SERCOM_USART_INT_CTRLB_CHSIZE_9_BIT_Val _U_(0x1)                                       /**< (SERCOM_USART_INT_CTRLB) 9 Bits  */
#define   SERCOM_USART_INT_CTRLB_CHSIZE_5_BIT_Val _U_(0x5)                                       /**< (SERCOM_USART_INT_CTRLB) 5 Bits  */
#define   SERCOM_USART_INT_CTRLB_CHSIZE_6_BIT_Val _U_(0x6)                                       /**< (SERCOM_USART_INT_CTRLB) 6 Bits  */
#define   SERCOM_USART_INT_CTRLB_CHSIZE_7_BIT_Val _U_(0x7)                                       /**< (SERCOM_USART_INT_CTRLB) 7 Bits  */
#define SERCOM_USART_INT_CTRLB_CHSIZE_8_BIT (SERCOM_USART_INT_CTRLB_CHSIZE_8_BIT_Val << SERCOM_USART_INT_CTRLB_CHSIZE_Pos)  /**< (SERCOM_USART_INT_CTRLB) 8 Bits Position  */
#define SERCOM_USART_INT_CTRLB_CHSIZE_9_BIT (SERCOM_USART_INT_CTRLB_CHSIZE_9_BIT_Val << SERCOM_USART_INT_CTRLB_CHSIZE_Pos)  /**< (SERCOM_USART_INT_CTRLB) 9 Bits Position  */
#define SERCOM_USART_INT_CTRLB_CHSIZE_5_BIT (SERCOM_USART_INT_CTRLB_CHSIZE_5_BIT_Val << SERCOM_USART_INT_CTRLB_CHSIZE_Pos)  /**< (SERCOM_USART_INT_CTRLB) 5 Bits Position  */
#define SERCOM_USART_INT_CTRLB_CHSIZE_6_BIT (SERCOM_USART_INT_CTRLB_CHSIZE_6_BIT_Val << SERCOM_USART_INT_CTRLB_CHSIZE_Pos)  /**< (SERCOM_USART_INT_CTRLB) 6 Bits Position  */
#define SERCOM_USART_INT_CTRLB_CHSIZE_7_BIT (SERCOM_USART_INT_CTRLB_CHSIZE_7_BIT_Val << SERCOM_USART_INT_CTRLB_CHSIZE_Pos)  /**< (SERCOM_USART_INT_CTRLB) 7 Bits Position  */
#define SERCOM_USART_INT_CTRLB_SBMODE_Pos   6                                              /**< (SERCOM_USART_INT_CTRLB) Stop Bit Mode Position */
#define SERCOM_USART_INT_CTRLB_SBMODE_Msk   (_U_(0x1) << SERCOM_USART_INT_CTRLB_SBMODE_Pos)  /**< (SERCOM_USART_INT_CTRLB) Stop Bit Mode Mask */
#define SERCOM_USART_INT_CTRLB_SBMODE       SERCOM_USART_INT_CTRLB_SBMODE_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_CTRLB_SBMODE_Msk instead */
#define   SERCOM_USART_INT_CTRLB_SBMODE_1_BIT_Val _U_(0x0)                                       /**< (SERCOM_USART_INT_CTRLB) One Stop Bit  */
#define   SERCOM_USART_INT_CTRLB_SBMODE_2_BIT_Val _U_(0x1)                                       /**< (SERCOM_USART_INT_CTRLB) Two Stop Bits  */
#define SERCOM_USART_INT_CTRLB_SBMODE_1_BIT (SERCOM_USART_INT_CTRLB_SBMODE_1_BIT_Val << SERCOM_USART_INT_CTRLB_SBMODE_Pos)  /**< (SERCOM_USART_INT_CTRLB) One Stop Bit Position  */
#define SERCOM_USART_INT_CTRLB_SBMODE_2_BIT (SERCOM_USART_INT_CTRLB_SBMODE_2_BIT_Val << SERCOM_USART_INT_CTRLB_SBMODE_Pos)  /**< (SERCOM_USART_INT_CTRLB) Two Stop Bits Position  */
#define SERCOM_USART_INT_CTRLB_COLDEN_Pos   8                                              /**< (SERCOM_USART_INT_CTRLB) Collision Detection Enable Position */
#define SERCOM_USART_INT_CTRLB_COLDEN_Msk   (_U_(0x1) << SERCOM_USART_INT_CTRLB_COLDEN_Pos)  /**< (SERCOM_USART_INT_CTRLB) Collision Detection Enable Mask */
#define SERCOM_USART_INT_CTRLB_COLDEN       SERCOM_USART_INT_CTRLB_COLDEN_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_CTRLB_COLDEN_Msk instead */
#define SERCOM_USART_INT_CTRLB_SFDE_Pos     9                                              /**< (SERCOM_USART_INT_CTRLB) Start of Frame Detection Enable Position */
#define SERCOM_USART_INT_CTRLB_SFDE_Msk     (_U_(0x1) << SERCOM_USART_INT_CTRLB_SFDE_Pos)  /**< (SERCOM_USART_INT_CTRLB) Start of Frame Detection Enable Mask */
#define SERCOM_USART_INT_CTRLB_SFDE         SERCOM_USART_INT_CTRLB_SFDE_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_CTRLB_SFDE_Msk instead */
#define SERCOM_USART_INT_CTRLB_ENC_Pos      10                                             /**< (SERCOM_USART_INT_CTRLB) Encoding Format Position */
#define SERCOM_USART_INT_CTRLB_ENC_Msk      (_U_(0x1) << SERCOM_USART_INT_CTRLB_ENC_Pos)   /**< (SERCOM_USART_INT_CTRLB) Encoding Format Mask */
#define SERCOM_USART_INT_CTRLB_ENC          SERCOM_USART_INT_CTRLB_ENC_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_CTRLB_ENC_Msk instead */
#define SERCOM_USART_INT_CTRLB_PMODE_Pos    13                                             /**< (SERCOM_USART_INT_CTRLB) Parity Mode Position */
#define SERCOM_USART_INT_CTRLB_PMODE_Msk    (_U_(0x1) << SERCOM_USART_INT_CTRLB_PMODE_Pos)  /**< (SERCOM_USART_INT_CTRLB) Parity Mode Mask */
#define SERCOM_USART_INT_CTRLB_PMODE        SERCOM_USART_INT_CTRLB_PMODE_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_CTRLB_PMODE_Msk instead */
#define   SERCOM_USART_INT_CTRLB_PMODE_EVEN_Val _U_(0x0)                                       /**< (SERCOM_USART_INT_CTRLB) Even Parity  */
#define   SERCOM_USART_INT_CTRLB_PMODE_ODD_Val _U_(0x1)                                       /**< (SERCOM_USART_INT_CTRLB) Odd Parity  */
#define SERCOM_USART_INT_CTRLB_PMODE_EVEN   (SERCOM_USART_INT_CTRLB_PMODE_EVEN_Val << SERCOM_USART_INT_CTRLB_PMODE_Pos)  /**< (SERCOM_USART_INT_CTRLB) Even Parity Position  */
#define SERCOM_USART_INT_CTRLB_PMODE_ODD    (SERCOM_USART_INT_CTRLB_PMODE_ODD_Val << SERCOM_USART_INT_CTRLB_PMODE_Pos)  /**< (SERCOM_USART_INT_CTRLB) Odd Parity Position  */
#define SERCOM_USART_INT_CTRLB_TXEN_Pos     16                                             /**< (SERCOM_USART_INT_CTRLB) Transmitter Enable Position */
#define SERCOM_USART_INT_CTRLB_TXEN_Msk     (_U_(0x1) << SERCOM_USART_INT_CTRLB_TXEN_Pos)  /**< (SERCOM_USART_INT_CTRLB) Transmitter Enable Mask */
#define SERCOM_USART_INT_CTRLB_TXEN         SERCOM_USART_INT_CTRLB_TXEN_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_CTRLB_TXEN_Msk instead */
#define SERCOM_USART_INT_CTRLB_RXEN_Pos     17                                             /**< (SERCOM_USART_INT_CTRLB) Receiver Enable Position */
#define SERCOM_USART_INT_CTRLB_RXEN_Msk     (_U_(0x1) << SERCOM_USART_INT_CTRLB_RXEN_Pos)  /**< (SERCOM_USART_INT_CTRLB) Receiver Enable Mask */
#define SERCOM_USART_INT_CTRLB_RXEN         SERCOM_USART_INT_CTRLB_RXEN_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_CTRLB_RXEN_Msk instead */
#define SERCOM_USART_INT_CTRLB_MASK         _U_(0x32747)                                   /**< \deprecated (SERCOM_USART_INT_CTRLB) Register MASK  (Use SERCOM_USART_INT_CTRLB_Msk instead)  */
#define SERCOM_USART_INT_CTRLB_Msk          _U_(0x32747)                                   /**< (SERCOM_USART_INT_CTRLB) Register Mask  */


/* -------- SERCOM_I2CM_BAUD : (SERCOM Offset: 0x0c) (R/W 32) I2CM Baud Rate -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t BAUD:8;                    /**< bit:   0..7  Baud Rate Value                          */
    uint32_t BAUDLOW:8;                 /**< bit:  8..15  Baud Rate Value Low                      */
    uint32_t HSBAUD:8;                  /**< bit: 16..23  High Speed Baud Rate Value               */
    uint32_t HSBAUDLOW:8;               /**< bit: 24..31  High Speed Baud Rate Value Low           */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_I2CM_BAUD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_BAUD_OFFSET             (0x0C)                                        /**<  (SERCOM_I2CM_BAUD) I2CM Baud Rate  Offset */
#define SERCOM_I2CM_BAUD_RESETVALUE         _U_(0x00)                                     /**<  (SERCOM_I2CM_BAUD) I2CM Baud Rate  Reset Value */

#define SERCOM_I2CM_BAUD_BAUD_Pos           0                                              /**< (SERCOM_I2CM_BAUD) Baud Rate Value Position */
#define SERCOM_I2CM_BAUD_BAUD_Msk           (_U_(0xFF) << SERCOM_I2CM_BAUD_BAUD_Pos)       /**< (SERCOM_I2CM_BAUD) Baud Rate Value Mask */
#define SERCOM_I2CM_BAUD_BAUD(value)        (SERCOM_I2CM_BAUD_BAUD_Msk & ((value) << SERCOM_I2CM_BAUD_BAUD_Pos))
#define SERCOM_I2CM_BAUD_BAUDLOW_Pos        8                                              /**< (SERCOM_I2CM_BAUD) Baud Rate Value Low Position */
#define SERCOM_I2CM_BAUD_BAUDLOW_Msk        (_U_(0xFF) << SERCOM_I2CM_BAUD_BAUDLOW_Pos)    /**< (SERCOM_I2CM_BAUD) Baud Rate Value Low Mask */
#define SERCOM_I2CM_BAUD_BAUDLOW(value)     (SERCOM_I2CM_BAUD_BAUDLOW_Msk & ((value) << SERCOM_I2CM_BAUD_BAUDLOW_Pos))
#define SERCOM_I2CM_BAUD_HSBAUD_Pos         16                                             /**< (SERCOM_I2CM_BAUD) High Speed Baud Rate Value Position */
#define SERCOM_I2CM_BAUD_HSBAUD_Msk         (_U_(0xFF) << SERCOM_I2CM_BAUD_HSBAUD_Pos)     /**< (SERCOM_I2CM_BAUD) High Speed Baud Rate Value Mask */
#define SERCOM_I2CM_BAUD_HSBAUD(value)      (SERCOM_I2CM_BAUD_HSBAUD_Msk & ((value) << SERCOM_I2CM_BAUD_HSBAUD_Pos))
#define SERCOM_I2CM_BAUD_HSBAUDLOW_Pos      24                                             /**< (SERCOM_I2CM_BAUD) High Speed Baud Rate Value Low Position */
#define SERCOM_I2CM_BAUD_HSBAUDLOW_Msk      (_U_(0xFF) << SERCOM_I2CM_BAUD_HSBAUDLOW_Pos)  /**< (SERCOM_I2CM_BAUD) High Speed Baud Rate Value Low Mask */
#define SERCOM_I2CM_BAUD_HSBAUDLOW(value)   (SERCOM_I2CM_BAUD_HSBAUDLOW_Msk & ((value) << SERCOM_I2CM_BAUD_HSBAUDLOW_Pos))
#define SERCOM_I2CM_BAUD_MASK               _U_(0xFFFFFFFF)                                /**< \deprecated (SERCOM_I2CM_BAUD) Register MASK  (Use SERCOM_I2CM_BAUD_Msk instead)  */
#define SERCOM_I2CM_BAUD_Msk                _U_(0xFFFFFFFF)                                /**< (SERCOM_I2CM_BAUD) Register Mask  */


/* -------- SERCOM_SPIM_BAUD : (SERCOM Offset: 0x0c) (R/W 8) SPIM Baud Rate -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  BAUD:8;                    /**< bit:   0..7  Baud Rate Value                          */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_SPIM_BAUD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIM_BAUD_OFFSET             (0x0C)                                        /**<  (SERCOM_SPIM_BAUD) SPIM Baud Rate  Offset */
#define SERCOM_SPIM_BAUD_RESETVALUE         _U_(0x00)                                     /**<  (SERCOM_SPIM_BAUD) SPIM Baud Rate  Reset Value */

#define SERCOM_SPIM_BAUD_BAUD_Pos           0                                              /**< (SERCOM_SPIM_BAUD) Baud Rate Value Position */
#define SERCOM_SPIM_BAUD_BAUD_Msk           (_U_(0xFF) << SERCOM_SPIM_BAUD_BAUD_Pos)       /**< (SERCOM_SPIM_BAUD) Baud Rate Value Mask */
#define SERCOM_SPIM_BAUD_BAUD(value)        (SERCOM_SPIM_BAUD_BAUD_Msk & ((value) << SERCOM_SPIM_BAUD_BAUD_Pos))
#define SERCOM_SPIM_BAUD_MASK               _U_(0xFF)                                      /**< \deprecated (SERCOM_SPIM_BAUD) Register MASK  (Use SERCOM_SPIM_BAUD_Msk instead)  */
#define SERCOM_SPIM_BAUD_Msk                _U_(0xFF)                                      /**< (SERCOM_SPIM_BAUD) Register Mask  */


/* -------- SERCOM_SPIS_BAUD : (SERCOM Offset: 0x0c) (R/W 8) SPIS Baud Rate -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  BAUD:8;                    /**< bit:   0..7  Baud Rate Value                          */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_SPIS_BAUD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIS_BAUD_OFFSET             (0x0C)                                        /**<  (SERCOM_SPIS_BAUD) SPIS Baud Rate  Offset */
#define SERCOM_SPIS_BAUD_RESETVALUE         _U_(0x00)                                     /**<  (SERCOM_SPIS_BAUD) SPIS Baud Rate  Reset Value */

#define SERCOM_SPIS_BAUD_BAUD_Pos           0                                              /**< (SERCOM_SPIS_BAUD) Baud Rate Value Position */
#define SERCOM_SPIS_BAUD_BAUD_Msk           (_U_(0xFF) << SERCOM_SPIS_BAUD_BAUD_Pos)       /**< (SERCOM_SPIS_BAUD) Baud Rate Value Mask */
#define SERCOM_SPIS_BAUD_BAUD(value)        (SERCOM_SPIS_BAUD_BAUD_Msk & ((value) << SERCOM_SPIS_BAUD_BAUD_Pos))
#define SERCOM_SPIS_BAUD_MASK               _U_(0xFF)                                      /**< \deprecated (SERCOM_SPIS_BAUD) Register MASK  (Use SERCOM_SPIS_BAUD_Msk instead)  */
#define SERCOM_SPIS_BAUD_Msk                _U_(0xFF)                                      /**< (SERCOM_SPIS_BAUD) Register Mask  */


/* -------- SERCOM_USART_EXT_BAUD : (SERCOM Offset: 0x0c) (R/W 16) USART_EXT Baud Rate -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t BAUD:16;                   /**< bit:  0..15  Baud Rate Value                          */
  } bit;                                /**< Structure used for bit  access */
  struct { // FRAC mode
    uint16_t BAUD:13;                   /**< bit:  0..12  Baud Rate Value                          */
    uint16_t FP:3;                      /**< bit: 13..15  Fractional Part                          */
  } FRAC;                                /**< Structure used for FRAC mode access */
  struct { // FRACFP mode
    uint16_t BAUD:13;                   /**< bit:  0..12  Baud Rate Value                          */
    uint16_t FP:3;                      /**< bit: 13..15  Fractional Part                          */
  } FRACFP;                                /**< Structure used for FRACFP mode access */
  struct { // USARTFP mode
    uint16_t BAUD:16;                   /**< bit:  0..15  Baud Rate Value                          */
  } USARTFP;                                /**< Structure used for USARTFP mode access */
  uint16_t reg;                         /**< Type used for register access */
} SERCOM_USART_EXT_BAUD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_EXT_BAUD_OFFSET        (0x0C)                                        /**<  (SERCOM_USART_EXT_BAUD) USART_EXT Baud Rate  Offset */
#define SERCOM_USART_EXT_BAUD_RESETVALUE    _U_(0x00)                                     /**<  (SERCOM_USART_EXT_BAUD) USART_EXT Baud Rate  Reset Value */

#define SERCOM_USART_EXT_BAUD_BAUD_Pos      0                                              /**< (SERCOM_USART_EXT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_EXT_BAUD_BAUD_Msk      (_U_(0xFFFF) << SERCOM_USART_EXT_BAUD_BAUD_Pos)  /**< (SERCOM_USART_EXT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_EXT_BAUD_BAUD(value)   (SERCOM_USART_EXT_BAUD_BAUD_Msk & ((value) << SERCOM_USART_EXT_BAUD_BAUD_Pos))
#define SERCOM_USART_EXT_BAUD_MASK          _U_(0xFFFF)                                    /**< \deprecated (SERCOM_USART_EXT_BAUD) Register MASK  (Use SERCOM_USART_EXT_BAUD_Msk instead)  */
#define SERCOM_USART_EXT_BAUD_Msk           _U_(0xFFFF)                                    /**< (SERCOM_USART_EXT_BAUD) Register Mask  */

/* FRAC mode */
#define SERCOM_USART_EXT_BAUD_FRAC_BAUD_Pos 0                                              /**< (SERCOM_USART_EXT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_EXT_BAUD_FRAC_BAUD_Msk (_U_(0x1FFF) << SERCOM_USART_EXT_BAUD_FRAC_BAUD_Pos)  /**< (SERCOM_USART_EXT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_EXT_BAUD_FRAC_BAUD(value) (SERCOM_USART_EXT_BAUD_FRAC_BAUD_Msk & ((value) << SERCOM_USART_EXT_BAUD_FRAC_BAUD_Pos))
#define SERCOM_USART_EXT_BAUD_FRAC_FP_Pos   13                                             /**< (SERCOM_USART_EXT_BAUD) Fractional Part Position */
#define SERCOM_USART_EXT_BAUD_FRAC_FP_Msk   (_U_(0x7) << SERCOM_USART_EXT_BAUD_FRAC_FP_Pos)  /**< (SERCOM_USART_EXT_BAUD) Fractional Part Mask */
#define SERCOM_USART_EXT_BAUD_FRAC_FP(value) (SERCOM_USART_EXT_BAUD_FRAC_FP_Msk & ((value) << SERCOM_USART_EXT_BAUD_FRAC_FP_Pos))
#define SERCOM_USART_EXT_BAUD_FRAC_MASK     _U_(0xFFFF)                                    /**< \deprecated (SERCOM_USART_EXT_BAUD_FRAC) Register MASK  (Use SERCOM_USART_EXT_BAUD_FRAC_Msk instead)  */
#define SERCOM_USART_EXT_BAUD_FRAC_Msk      _U_(0xFFFF)                                    /**< (SERCOM_USART_EXT_BAUD_FRAC) Register Mask  */

/* FRACFP mode */
#define SERCOM_USART_EXT_BAUD_FRACFP_BAUD_Pos 0                                              /**< (SERCOM_USART_EXT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_EXT_BAUD_FRACFP_BAUD_Msk (_U_(0x1FFF) << SERCOM_USART_EXT_BAUD_FRACFP_BAUD_Pos)  /**< (SERCOM_USART_EXT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_EXT_BAUD_FRACFP_BAUD(value) (SERCOM_USART_EXT_BAUD_FRACFP_BAUD_Msk & ((value) << SERCOM_USART_EXT_BAUD_FRACFP_BAUD_Pos))
#define SERCOM_USART_EXT_BAUD_FRACFP_FP_Pos 13                                             /**< (SERCOM_USART_EXT_BAUD) Fractional Part Position */
#define SERCOM_USART_EXT_BAUD_FRACFP_FP_Msk (_U_(0x7) << SERCOM_USART_EXT_BAUD_FRACFP_FP_Pos)  /**< (SERCOM_USART_EXT_BAUD) Fractional Part Mask */
#define SERCOM_USART_EXT_BAUD_FRACFP_FP(value) (SERCOM_USART_EXT_BAUD_FRACFP_FP_Msk & ((value) << SERCOM_USART_EXT_BAUD_FRACFP_FP_Pos))
#define SERCOM_USART_EXT_BAUD_FRACFP_MASK   _U_(0xFFFF)                                    /**< \deprecated (SERCOM_USART_EXT_BAUD_FRACFP) Register MASK  (Use SERCOM_USART_EXT_BAUD_FRACFP_Msk instead)  */
#define SERCOM_USART_EXT_BAUD_FRACFP_Msk    _U_(0xFFFF)                                    /**< (SERCOM_USART_EXT_BAUD_FRACFP) Register Mask  */

/* USARTFP mode */
#define SERCOM_USART_EXT_BAUD_USARTFP_BAUD_Pos 0                                              /**< (SERCOM_USART_EXT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_EXT_BAUD_USARTFP_BAUD_Msk (_U_(0xFFFF) << SERCOM_USART_EXT_BAUD_USARTFP_BAUD_Pos)  /**< (SERCOM_USART_EXT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_EXT_BAUD_USARTFP_BAUD(value) (SERCOM_USART_EXT_BAUD_USARTFP_BAUD_Msk & ((value) << SERCOM_USART_EXT_BAUD_USARTFP_BAUD_Pos))
#define SERCOM_USART_EXT_BAUD_USARTFP_MASK  _U_(0xFFFF)                                    /**< \deprecated (SERCOM_USART_EXT_BAUD_USARTFP) Register MASK  (Use SERCOM_USART_EXT_BAUD_USARTFP_Msk instead)  */
#define SERCOM_USART_EXT_BAUD_USARTFP_Msk   _U_(0xFFFF)                                    /**< (SERCOM_USART_EXT_BAUD_USARTFP) Register Mask  */


/* -------- SERCOM_USART_INT_BAUD : (SERCOM Offset: 0x0c) (R/W 16) USART_INT Baud Rate -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t BAUD:16;                   /**< bit:  0..15  Baud Rate Value                          */
  } bit;                                /**< Structure used for bit  access */
  struct { // FRAC mode
    uint16_t BAUD:13;                   /**< bit:  0..12  Baud Rate Value                          */
    uint16_t FP:3;                      /**< bit: 13..15  Fractional Part                          */
  } FRAC;                                /**< Structure used for FRAC mode access */
  struct { // FRACFP mode
    uint16_t BAUD:13;                   /**< bit:  0..12  Baud Rate Value                          */
    uint16_t FP:3;                      /**< bit: 13..15  Fractional Part                          */
  } FRACFP;                                /**< Structure used for FRACFP mode access */
  struct { // USARTFP mode
    uint16_t BAUD:16;                   /**< bit:  0..15  Baud Rate Value                          */
  } USARTFP;                                /**< Structure used for USARTFP mode access */
  uint16_t reg;                         /**< Type used for register access */
} SERCOM_USART_INT_BAUD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_INT_BAUD_OFFSET        (0x0C)                                        /**<  (SERCOM_USART_INT_BAUD) USART_INT Baud Rate  Offset */
#define SERCOM_USART_INT_BAUD_RESETVALUE    _U_(0x00)                                     /**<  (SERCOM_USART_INT_BAUD) USART_INT Baud Rate  Reset Value */

#define SERCOM_USART_INT_BAUD_BAUD_Pos      0                                              /**< (SERCOM_USART_INT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_INT_BAUD_BAUD_Msk      (_U_(0xFFFF) << SERCOM_USART_INT_BAUD_BAUD_Pos)  /**< (SERCOM_USART_INT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_INT_BAUD_BAUD(value)   (SERCOM_USART_INT_BAUD_BAUD_Msk & ((value) << SERCOM_USART_INT_BAUD_BAUD_Pos))
#define SERCOM_USART_INT_BAUD_MASK          _U_(0xFFFF)                                    /**< \deprecated (SERCOM_USART_INT_BAUD) Register MASK  (Use SERCOM_USART_INT_BAUD_Msk instead)  */
#define SERCOM_USART_INT_BAUD_Msk           _U_(0xFFFF)                                    /**< (SERCOM_USART_INT_BAUD) Register Mask  */

/* FRAC mode */
#define SERCOM_USART_INT_BAUD_FRAC_BAUD_Pos 0                                              /**< (SERCOM_USART_INT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_INT_BAUD_FRAC_BAUD_Msk (_U_(0x1FFF) << SERCOM_USART_INT_BAUD_FRAC_BAUD_Pos)  /**< (SERCOM_USART_INT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_INT_BAUD_FRAC_BAUD(value) (SERCOM_USART_INT_BAUD_FRAC_BAUD_Msk & ((value) << SERCOM_USART_INT_BAUD_FRAC_BAUD_Pos))
#define SERCOM_USART_INT_BAUD_FRAC_FP_Pos   13                                             /**< (SERCOM_USART_INT_BAUD) Fractional Part Position */
#define SERCOM_USART_INT_BAUD_FRAC_FP_Msk   (_U_(0x7) << SERCOM_USART_INT_BAUD_FRAC_FP_Pos)  /**< (SERCOM_USART_INT_BAUD) Fractional Part Mask */
#define SERCOM_USART_INT_BAUD_FRAC_FP(value) (SERCOM_USART_INT_BAUD_FRAC_FP_Msk & ((value) << SERCOM_USART_INT_BAUD_FRAC_FP_Pos))
#define SERCOM_USART_INT_BAUD_FRAC_MASK     _U_(0xFFFF)                                    /**< \deprecated (SERCOM_USART_INT_BAUD_FRAC) Register MASK  (Use SERCOM_USART_INT_BAUD_FRAC_Msk instead)  */
#define SERCOM_USART_INT_BAUD_FRAC_Msk      _U_(0xFFFF)                                    /**< (SERCOM_USART_INT_BAUD_FRAC) Register Mask  */

/* FRACFP mode */
#define SERCOM_USART_INT_BAUD_FRACFP_BAUD_Pos 0                                              /**< (SERCOM_USART_INT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_INT_BAUD_FRACFP_BAUD_Msk (_U_(0x1FFF) << SERCOM_USART_INT_BAUD_FRACFP_BAUD_Pos)  /**< (SERCOM_USART_INT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_INT_BAUD_FRACFP_BAUD(value) (SERCOM_USART_INT_BAUD_FRACFP_BAUD_Msk & ((value) << SERCOM_USART_INT_BAUD_FRACFP_BAUD_Pos))
#define SERCOM_USART_INT_BAUD_FRACFP_FP_Pos 13                                             /**< (SERCOM_USART_INT_BAUD) Fractional Part Position */
#define SERCOM_USART_INT_BAUD_FRACFP_FP_Msk (_U_(0x7) << SERCOM_USART_INT_BAUD_FRACFP_FP_Pos)  /**< (SERCOM_USART_INT_BAUD) Fractional Part Mask */
#define SERCOM_USART_INT_BAUD_FRACFP_FP(value) (SERCOM_USART_INT_BAUD_FRACFP_FP_Msk & ((value) << SERCOM_USART_INT_BAUD_FRACFP_FP_Pos))
#define SERCOM_USART_INT_BAUD_FRACFP_MASK   _U_(0xFFFF)                                    /**< \deprecated (SERCOM_USART_INT_BAUD_FRACFP) Register MASK  (Use SERCOM_USART_INT_BAUD_FRACFP_Msk instead)  */
#define SERCOM_USART_INT_BAUD_FRACFP_Msk    _U_(0xFFFF)                                    /**< (SERCOM_USART_INT_BAUD_FRACFP) Register Mask  */

/* USARTFP mode */
#define SERCOM_USART_INT_BAUD_USARTFP_BAUD_Pos 0                                              /**< (SERCOM_USART_INT_BAUD) Baud Rate Value Position */
#define SERCOM_USART_INT_BAUD_USARTFP_BAUD_Msk (_U_(0xFFFF) << SERCOM_USART_INT_BAUD_USARTFP_BAUD_Pos)  /**< (SERCOM_USART_INT_BAUD) Baud Rate Value Mask */
#define SERCOM_USART_INT_BAUD_USARTFP_BAUD(value) (SERCOM_USART_INT_BAUD_USARTFP_BAUD_Msk & ((value) << SERCOM_USART_INT_BAUD_USARTFP_BAUD_Pos))
#define SERCOM_USART_INT_BAUD_USARTFP_MASK  _U_(0xFFFF)                                    /**< \deprecated (SERCOM_USART_INT_BAUD_USARTFP) Register MASK  (Use SERCOM_USART_INT_BAUD_USARTFP_Msk instead)  */
#define SERCOM_USART_INT_BAUD_USARTFP_Msk   _U_(0xFFFF)                                    /**< (SERCOM_USART_INT_BAUD_USARTFP) Register Mask  */


/* -------- SERCOM_USART_EXT_RXPL : (SERCOM Offset: 0x0e) (R/W 8) USART_EXT Receive Pulse Length -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  RXPL:8;                    /**< bit:   0..7  Receive Pulse Length                     */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_USART_EXT_RXPL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_EXT_RXPL_OFFSET        (0x0E)                                        /**<  (SERCOM_USART_EXT_RXPL) USART_EXT Receive Pulse Length  Offset */
#define SERCOM_USART_EXT_RXPL_RESETVALUE    _U_(0x00)                                     /**<  (SERCOM_USART_EXT_RXPL) USART_EXT Receive Pulse Length  Reset Value */

#define SERCOM_USART_EXT_RXPL_RXPL_Pos      0                                              /**< (SERCOM_USART_EXT_RXPL) Receive Pulse Length Position */
#define SERCOM_USART_EXT_RXPL_RXPL_Msk      (_U_(0xFF) << SERCOM_USART_EXT_RXPL_RXPL_Pos)  /**< (SERCOM_USART_EXT_RXPL) Receive Pulse Length Mask */
#define SERCOM_USART_EXT_RXPL_RXPL(value)   (SERCOM_USART_EXT_RXPL_RXPL_Msk & ((value) << SERCOM_USART_EXT_RXPL_RXPL_Pos))
#define SERCOM_USART_EXT_RXPL_MASK          _U_(0xFF)                                      /**< \deprecated (SERCOM_USART_EXT_RXPL) Register MASK  (Use SERCOM_USART_EXT_RXPL_Msk instead)  */
#define SERCOM_USART_EXT_RXPL_Msk           _U_(0xFF)                                      /**< (SERCOM_USART_EXT_RXPL) Register Mask  */


/* -------- SERCOM_USART_INT_RXPL : (SERCOM Offset: 0x0e) (R/W 8) USART_INT Receive Pulse Length -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  RXPL:8;                    /**< bit:   0..7  Receive Pulse Length                     */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_USART_INT_RXPL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_INT_RXPL_OFFSET        (0x0E)                                        /**<  (SERCOM_USART_INT_RXPL) USART_INT Receive Pulse Length  Offset */
#define SERCOM_USART_INT_RXPL_RESETVALUE    _U_(0x00)                                     /**<  (SERCOM_USART_INT_RXPL) USART_INT Receive Pulse Length  Reset Value */

#define SERCOM_USART_INT_RXPL_RXPL_Pos      0                                              /**< (SERCOM_USART_INT_RXPL) Receive Pulse Length Position */
#define SERCOM_USART_INT_RXPL_RXPL_Msk      (_U_(0xFF) << SERCOM_USART_INT_RXPL_RXPL_Pos)  /**< (SERCOM_USART_INT_RXPL) Receive Pulse Length Mask */
#define SERCOM_USART_INT_RXPL_RXPL(value)   (SERCOM_USART_INT_RXPL_RXPL_Msk & ((value) << SERCOM_USART_INT_RXPL_RXPL_Pos))
#define SERCOM_USART_INT_RXPL_MASK          _U_(0xFF)                                      /**< \deprecated (SERCOM_USART_INT_RXPL) Register MASK  (Use SERCOM_USART_INT_RXPL_Msk instead)  */
#define SERCOM_USART_INT_RXPL_Msk           _U_(0xFF)                                      /**< (SERCOM_USART_INT_RXPL) Register Mask  */


/* -------- SERCOM_I2CM_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) I2CM Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  MB:1;                      /**< bit:      0  Master On Bus Interrupt Disable          */
    uint8_t  SB:1;                      /**< bit:      1  Slave On Bus Interrupt Disable           */
    uint8_t  :5;                        /**< bit:   2..6  Reserved */
    uint8_t  ERROR:1;                   /**< bit:      7  Combined Error Interrupt Disable         */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_I2CM_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_INTENCLR_OFFSET         (0x14)                                        /**<  (SERCOM_I2CM_INTENCLR) I2CM Interrupt Enable Clear  Offset */
#define SERCOM_I2CM_INTENCLR_RESETVALUE     _U_(0x00)                                     /**<  (SERCOM_I2CM_INTENCLR) I2CM Interrupt Enable Clear  Reset Value */

#define SERCOM_I2CM_INTENCLR_MB_Pos         0                                              /**< (SERCOM_I2CM_INTENCLR) Master On Bus Interrupt Disable Position */
#define SERCOM_I2CM_INTENCLR_MB_Msk         (_U_(0x1) << SERCOM_I2CM_INTENCLR_MB_Pos)      /**< (SERCOM_I2CM_INTENCLR) Master On Bus Interrupt Disable Mask */
#define SERCOM_I2CM_INTENCLR_MB             SERCOM_I2CM_INTENCLR_MB_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_INTENCLR_MB_Msk instead */
#define SERCOM_I2CM_INTENCLR_SB_Pos         1                                              /**< (SERCOM_I2CM_INTENCLR) Slave On Bus Interrupt Disable Position */
#define SERCOM_I2CM_INTENCLR_SB_Msk         (_U_(0x1) << SERCOM_I2CM_INTENCLR_SB_Pos)      /**< (SERCOM_I2CM_INTENCLR) Slave On Bus Interrupt Disable Mask */
#define SERCOM_I2CM_INTENCLR_SB             SERCOM_I2CM_INTENCLR_SB_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_INTENCLR_SB_Msk instead */
#define SERCOM_I2CM_INTENCLR_ERROR_Pos      7                                              /**< (SERCOM_I2CM_INTENCLR) Combined Error Interrupt Disable Position */
#define SERCOM_I2CM_INTENCLR_ERROR_Msk      (_U_(0x1) << SERCOM_I2CM_INTENCLR_ERROR_Pos)   /**< (SERCOM_I2CM_INTENCLR) Combined Error Interrupt Disable Mask */
#define SERCOM_I2CM_INTENCLR_ERROR          SERCOM_I2CM_INTENCLR_ERROR_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_INTENCLR_ERROR_Msk instead */
#define SERCOM_I2CM_INTENCLR_MASK           _U_(0x83)                                      /**< \deprecated (SERCOM_I2CM_INTENCLR) Register MASK  (Use SERCOM_I2CM_INTENCLR_Msk instead)  */
#define SERCOM_I2CM_INTENCLR_Msk            _U_(0x83)                                      /**< (SERCOM_I2CM_INTENCLR) Register Mask  */


/* -------- SERCOM_I2CS_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) I2CS Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  PREC:1;                    /**< bit:      0  Stop Received Interrupt Disable          */
    uint8_t  AMATCH:1;                  /**< bit:      1  Address Match Interrupt Disable          */
    uint8_t  DRDY:1;                    /**< bit:      2  Data Interrupt Disable                   */
    uint8_t  :4;                        /**< bit:   3..6  Reserved */
    uint8_t  ERROR:1;                   /**< bit:      7  Combined Error Interrupt Disable         */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_I2CS_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_INTENCLR_OFFSET         (0x14)                                        /**<  (SERCOM_I2CS_INTENCLR) I2CS Interrupt Enable Clear  Offset */
#define SERCOM_I2CS_INTENCLR_RESETVALUE     _U_(0x00)                                     /**<  (SERCOM_I2CS_INTENCLR) I2CS Interrupt Enable Clear  Reset Value */

#define SERCOM_I2CS_INTENCLR_PREC_Pos       0                                              /**< (SERCOM_I2CS_INTENCLR) Stop Received Interrupt Disable Position */
#define SERCOM_I2CS_INTENCLR_PREC_Msk       (_U_(0x1) << SERCOM_I2CS_INTENCLR_PREC_Pos)    /**< (SERCOM_I2CS_INTENCLR) Stop Received Interrupt Disable Mask */
#define SERCOM_I2CS_INTENCLR_PREC           SERCOM_I2CS_INTENCLR_PREC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_INTENCLR_PREC_Msk instead */
#define SERCOM_I2CS_INTENCLR_AMATCH_Pos     1                                              /**< (SERCOM_I2CS_INTENCLR) Address Match Interrupt Disable Position */
#define SERCOM_I2CS_INTENCLR_AMATCH_Msk     (_U_(0x1) << SERCOM_I2CS_INTENCLR_AMATCH_Pos)  /**< (SERCOM_I2CS_INTENCLR) Address Match Interrupt Disable Mask */
#define SERCOM_I2CS_INTENCLR_AMATCH         SERCOM_I2CS_INTENCLR_AMATCH_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_INTENCLR_AMATCH_Msk instead */
#define SERCOM_I2CS_INTENCLR_DRDY_Pos       2                                              /**< (SERCOM_I2CS_INTENCLR) Data Interrupt Disable Position */
#define SERCOM_I2CS_INTENCLR_DRDY_Msk       (_U_(0x1) << SERCOM_I2CS_INTENCLR_DRDY_Pos)    /**< (SERCOM_I2CS_INTENCLR) Data Interrupt Disable Mask */
#define SERCOM_I2CS_INTENCLR_DRDY           SERCOM_I2CS_INTENCLR_DRDY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_INTENCLR_DRDY_Msk instead */
#define SERCOM_I2CS_INTENCLR_ERROR_Pos      7                                              /**< (SERCOM_I2CS_INTENCLR) Combined Error Interrupt Disable Position */
#define SERCOM_I2CS_INTENCLR_ERROR_Msk      (_U_(0x1) << SERCOM_I2CS_INTENCLR_ERROR_Pos)   /**< (SERCOM_I2CS_INTENCLR) Combined Error Interrupt Disable Mask */
#define SERCOM_I2CS_INTENCLR_ERROR          SERCOM_I2CS_INTENCLR_ERROR_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_INTENCLR_ERROR_Msk instead */
#define SERCOM_I2CS_INTENCLR_MASK           _U_(0x87)                                      /**< \deprecated (SERCOM_I2CS_INTENCLR) Register MASK  (Use SERCOM_I2CS_INTENCLR_Msk instead)  */
#define SERCOM_I2CS_INTENCLR_Msk            _U_(0x87)                                      /**< (SERCOM_I2CS_INTENCLR) Register Mask  */


/* -------- SERCOM_SPIM_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) SPIM Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DRE:1;                     /**< bit:      0  Data Register Empty Interrupt Disable    */
    uint8_t  TXC:1;                     /**< bit:      1  Transmit Complete Interrupt Disable      */
    uint8_t  RXC:1;                     /**< bit:      2  Receive Complete Interrupt Disable       */
    uint8_t  SSL:1;                     /**< bit:      3  Slave Select Low Interrupt Disable       */
    uint8_t  :3;                        /**< bit:   4..6  Reserved */
    uint8_t  ERROR:1;                   /**< bit:      7  Combined Error Interrupt Disable         */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_SPIM_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIM_INTENCLR_OFFSET         (0x14)                                        /**<  (SERCOM_SPIM_INTENCLR) SPIM Interrupt Enable Clear  Offset */
#define SERCOM_SPIM_INTENCLR_RESETVALUE     _U_(0x00)                                     /**<  (SERCOM_SPIM_INTENCLR) SPIM Interrupt Enable Clear  Reset Value */

#define SERCOM_SPIM_INTENCLR_DRE_Pos        0                                              /**< (SERCOM_SPIM_INTENCLR) Data Register Empty Interrupt Disable Position */
#define SERCOM_SPIM_INTENCLR_DRE_Msk        (_U_(0x1) << SERCOM_SPIM_INTENCLR_DRE_Pos)     /**< (SERCOM_SPIM_INTENCLR) Data Register Empty Interrupt Disable Mask */
#define SERCOM_SPIM_INTENCLR_DRE            SERCOM_SPIM_INTENCLR_DRE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_INTENCLR_DRE_Msk instead */
#define SERCOM_SPIM_INTENCLR_TXC_Pos        1                                              /**< (SERCOM_SPIM_INTENCLR) Transmit Complete Interrupt Disable Position */
#define SERCOM_SPIM_INTENCLR_TXC_Msk        (_U_(0x1) << SERCOM_SPIM_INTENCLR_TXC_Pos)     /**< (SERCOM_SPIM_INTENCLR) Transmit Complete Interrupt Disable Mask */
#define SERCOM_SPIM_INTENCLR_TXC            SERCOM_SPIM_INTENCLR_TXC_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_INTENCLR_TXC_Msk instead */
#define SERCOM_SPIM_INTENCLR_RXC_Pos        2                                              /**< (SERCOM_SPIM_INTENCLR) Receive Complete Interrupt Disable Position */
#define SERCOM_SPIM_INTENCLR_RXC_Msk        (_U_(0x1) << SERCOM_SPIM_INTENCLR_RXC_Pos)     /**< (SERCOM_SPIM_INTENCLR) Receive Complete Interrupt Disable Mask */
#define SERCOM_SPIM_INTENCLR_RXC            SERCOM_SPIM_INTENCLR_RXC_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_INTENCLR_RXC_Msk instead */
#define SERCOM_SPIM_INTENCLR_SSL_Pos        3                                              /**< (SERCOM_SPIM_INTENCLR) Slave Select Low Interrupt Disable Position */
#define SERCOM_SPIM_INTENCLR_SSL_Msk        (_U_(0x1) << SERCOM_SPIM_INTENCLR_SSL_Pos)     /**< (SERCOM_SPIM_INTENCLR) Slave Select Low Interrupt Disable Mask */
#define SERCOM_SPIM_INTENCLR_SSL            SERCOM_SPIM_INTENCLR_SSL_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_INTENCLR_SSL_Msk instead */
#define SERCOM_SPIM_INTENCLR_ERROR_Pos      7                                              /**< (SERCOM_SPIM_INTENCLR) Combined Error Interrupt Disable Position */
#define SERCOM_SPIM_INTENCLR_ERROR_Msk      (_U_(0x1) << SERCOM_SPIM_INTENCLR_ERROR_Pos)   /**< (SERCOM_SPIM_INTENCLR) Combined Error Interrupt Disable Mask */
#define SERCOM_SPIM_INTENCLR_ERROR          SERCOM_SPIM_INTENCLR_ERROR_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_INTENCLR_ERROR_Msk instead */
#define SERCOM_SPIM_INTENCLR_MASK           _U_(0x8F)                                      /**< \deprecated (SERCOM_SPIM_INTENCLR) Register MASK  (Use SERCOM_SPIM_INTENCLR_Msk instead)  */
#define SERCOM_SPIM_INTENCLR_Msk            _U_(0x8F)                                      /**< (SERCOM_SPIM_INTENCLR) Register Mask  */


/* -------- SERCOM_SPIS_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) SPIS Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DRE:1;                     /**< bit:      0  Data Register Empty Interrupt Disable    */
    uint8_t  TXC:1;                     /**< bit:      1  Transmit Complete Interrupt Disable      */
    uint8_t  RXC:1;                     /**< bit:      2  Receive Complete Interrupt Disable       */
    uint8_t  SSL:1;                     /**< bit:      3  Slave Select Low Interrupt Disable       */
    uint8_t  :3;                        /**< bit:   4..6  Reserved */
    uint8_t  ERROR:1;                   /**< bit:      7  Combined Error Interrupt Disable         */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_SPIS_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIS_INTENCLR_OFFSET         (0x14)                                        /**<  (SERCOM_SPIS_INTENCLR) SPIS Interrupt Enable Clear  Offset */
#define SERCOM_SPIS_INTENCLR_RESETVALUE     _U_(0x00)                                     /**<  (SERCOM_SPIS_INTENCLR) SPIS Interrupt Enable Clear  Reset Value */

#define SERCOM_SPIS_INTENCLR_DRE_Pos        0                                              /**< (SERCOM_SPIS_INTENCLR) Data Register Empty Interrupt Disable Position */
#define SERCOM_SPIS_INTENCLR_DRE_Msk        (_U_(0x1) << SERCOM_SPIS_INTENCLR_DRE_Pos)     /**< (SERCOM_SPIS_INTENCLR) Data Register Empty Interrupt Disable Mask */
#define SERCOM_SPIS_INTENCLR_DRE            SERCOM_SPIS_INTENCLR_DRE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_INTENCLR_DRE_Msk instead */
#define SERCOM_SPIS_INTENCLR_TXC_Pos        1                                              /**< (SERCOM_SPIS_INTENCLR) Transmit Complete Interrupt Disable Position */
#define SERCOM_SPIS_INTENCLR_TXC_Msk        (_U_(0x1) << SERCOM_SPIS_INTENCLR_TXC_Pos)     /**< (SERCOM_SPIS_INTENCLR) Transmit Complete Interrupt Disable Mask */
#define SERCOM_SPIS_INTENCLR_TXC            SERCOM_SPIS_INTENCLR_TXC_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_INTENCLR_TXC_Msk instead */
#define SERCOM_SPIS_INTENCLR_RXC_Pos        2                                              /**< (SERCOM_SPIS_INTENCLR) Receive Complete Interrupt Disable Position */
#define SERCOM_SPIS_INTENCLR_RXC_Msk        (_U_(0x1) << SERCOM_SPIS_INTENCLR_RXC_Pos)     /**< (SERCOM_SPIS_INTENCLR) Receive Complete Interrupt Disable Mask */
#define SERCOM_SPIS_INTENCLR_RXC            SERCOM_SPIS_INTENCLR_RXC_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_INTENCLR_RXC_Msk instead */
#define SERCOM_SPIS_INTENCLR_SSL_Pos        3                                              /**< (SERCOM_SPIS_INTENCLR) Slave Select Low Interrupt Disable Position */
#define SERCOM_SPIS_INTENCLR_SSL_Msk        (_U_(0x1) << SERCOM_SPIS_INTENCLR_SSL_Pos)     /**< (SERCOM_SPIS_INTENCLR) Slave Select Low Interrupt Disable Mask */
#define SERCOM_SPIS_INTENCLR_SSL            SERCOM_SPIS_INTENCLR_SSL_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_INTENCLR_SSL_Msk instead */
#define SERCOM_SPIS_INTENCLR_ERROR_Pos      7                                              /**< (SERCOM_SPIS_INTENCLR) Combined Error Interrupt Disable Position */
#define SERCOM_SPIS_INTENCLR_ERROR_Msk      (_U_(0x1) << SERCOM_SPIS_INTENCLR_ERROR_Pos)   /**< (SERCOM_SPIS_INTENCLR) Combined Error Interrupt Disable Mask */
#define SERCOM_SPIS_INTENCLR_ERROR          SERCOM_SPIS_INTENCLR_ERROR_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_INTENCLR_ERROR_Msk instead */
#define SERCOM_SPIS_INTENCLR_MASK           _U_(0x8F)                                      /**< \deprecated (SERCOM_SPIS_INTENCLR) Register MASK  (Use SERCOM_SPIS_INTENCLR_Msk instead)  */
#define SERCOM_SPIS_INTENCLR_Msk            _U_(0x8F)                                      /**< (SERCOM_SPIS_INTENCLR) Register Mask  */


/* -------- SERCOM_USART_EXT_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) USART_EXT Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DRE:1;                     /**< bit:      0  Data Register Empty Interrupt Disable    */
    uint8_t  TXC:1;                     /**< bit:      1  Transmit Complete Interrupt Disable      */
    uint8_t  RXC:1;                     /**< bit:      2  Receive Complete Interrupt Disable       */
    uint8_t  RXS:1;                     /**< bit:      3  Receive Start Interrupt Disable          */
    uint8_t  CTSIC:1;                   /**< bit:      4  Clear To Send Input Change Interrupt Disable */
    uint8_t  RXBRK:1;                   /**< bit:      5  Break Received Interrupt Disable         */
    uint8_t  :1;                        /**< bit:      6  Reserved */
    uint8_t  ERROR:1;                   /**< bit:      7  Combined Error Interrupt Disable         */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_USART_EXT_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_EXT_INTENCLR_OFFSET    (0x14)                                        /**<  (SERCOM_USART_EXT_INTENCLR) USART_EXT Interrupt Enable Clear  Offset */
#define SERCOM_USART_EXT_INTENCLR_RESETVALUE _U_(0x00)                                     /**<  (SERCOM_USART_EXT_INTENCLR) USART_EXT Interrupt Enable Clear  Reset Value */

#define SERCOM_USART_EXT_INTENCLR_DRE_Pos   0                                              /**< (SERCOM_USART_EXT_INTENCLR) Data Register Empty Interrupt Disable Position */
#define SERCOM_USART_EXT_INTENCLR_DRE_Msk   (_U_(0x1) << SERCOM_USART_EXT_INTENCLR_DRE_Pos)  /**< (SERCOM_USART_EXT_INTENCLR) Data Register Empty Interrupt Disable Mask */
#define SERCOM_USART_EXT_INTENCLR_DRE       SERCOM_USART_EXT_INTENCLR_DRE_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTENCLR_DRE_Msk instead */
#define SERCOM_USART_EXT_INTENCLR_TXC_Pos   1                                              /**< (SERCOM_USART_EXT_INTENCLR) Transmit Complete Interrupt Disable Position */
#define SERCOM_USART_EXT_INTENCLR_TXC_Msk   (_U_(0x1) << SERCOM_USART_EXT_INTENCLR_TXC_Pos)  /**< (SERCOM_USART_EXT_INTENCLR) Transmit Complete Interrupt Disable Mask */
#define SERCOM_USART_EXT_INTENCLR_TXC       SERCOM_USART_EXT_INTENCLR_TXC_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTENCLR_TXC_Msk instead */
#define SERCOM_USART_EXT_INTENCLR_RXC_Pos   2                                              /**< (SERCOM_USART_EXT_INTENCLR) Receive Complete Interrupt Disable Position */
#define SERCOM_USART_EXT_INTENCLR_RXC_Msk   (_U_(0x1) << SERCOM_USART_EXT_INTENCLR_RXC_Pos)  /**< (SERCOM_USART_EXT_INTENCLR) Receive Complete Interrupt Disable Mask */
#define SERCOM_USART_EXT_INTENCLR_RXC       SERCOM_USART_EXT_INTENCLR_RXC_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTENCLR_RXC_Msk instead */
#define SERCOM_USART_EXT_INTENCLR_RXS_Pos   3                                              /**< (SERCOM_USART_EXT_INTENCLR) Receive Start Interrupt Disable Position */
#define SERCOM_USART_EXT_INTENCLR_RXS_Msk   (_U_(0x1) << SERCOM_USART_EXT_INTENCLR_RXS_Pos)  /**< (SERCOM_USART_EXT_INTENCLR) Receive Start Interrupt Disable Mask */
#define SERCOM_USART_EXT_INTENCLR_RXS       SERCOM_USART_EXT_INTENCLR_RXS_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTENCLR_RXS_Msk instead */
#define SERCOM_USART_EXT_INTENCLR_CTSIC_Pos 4                                              /**< (SERCOM_USART_EXT_INTENCLR) Clear To Send Input Change Interrupt Disable Position */
#define SERCOM_USART_EXT_INTENCLR_CTSIC_Msk (_U_(0x1) << SERCOM_USART_EXT_INTENCLR_CTSIC_Pos)  /**< (SERCOM_USART_EXT_INTENCLR) Clear To Send Input Change Interrupt Disable Mask */
#define SERCOM_USART_EXT_INTENCLR_CTSIC     SERCOM_USART_EXT_INTENCLR_CTSIC_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTENCLR_CTSIC_Msk instead */
#define SERCOM_USART_EXT_INTENCLR_RXBRK_Pos 5                                              /**< (SERCOM_USART_EXT_INTENCLR) Break Received Interrupt Disable Position */
#define SERCOM_USART_EXT_INTENCLR_RXBRK_Msk (_U_(0x1) << SERCOM_USART_EXT_INTENCLR_RXBRK_Pos)  /**< (SERCOM_USART_EXT_INTENCLR) Break Received Interrupt Disable Mask */
#define SERCOM_USART_EXT_INTENCLR_RXBRK     SERCOM_USART_EXT_INTENCLR_RXBRK_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTENCLR_RXBRK_Msk instead */
#define SERCOM_USART_EXT_INTENCLR_ERROR_Pos 7                                              /**< (SERCOM_USART_EXT_INTENCLR) Combined Error Interrupt Disable Position */
#define SERCOM_USART_EXT_INTENCLR_ERROR_Msk (_U_(0x1) << SERCOM_USART_EXT_INTENCLR_ERROR_Pos)  /**< (SERCOM_USART_EXT_INTENCLR) Combined Error Interrupt Disable Mask */
#define SERCOM_USART_EXT_INTENCLR_ERROR     SERCOM_USART_EXT_INTENCLR_ERROR_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTENCLR_ERROR_Msk instead */
#define SERCOM_USART_EXT_INTENCLR_MASK      _U_(0xBF)                                      /**< \deprecated (SERCOM_USART_EXT_INTENCLR) Register MASK  (Use SERCOM_USART_EXT_INTENCLR_Msk instead)  */
#define SERCOM_USART_EXT_INTENCLR_Msk       _U_(0xBF)                                      /**< (SERCOM_USART_EXT_INTENCLR) Register Mask  */


/* -------- SERCOM_USART_INT_INTENCLR : (SERCOM Offset: 0x14) (R/W 8) USART_INT Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DRE:1;                     /**< bit:      0  Data Register Empty Interrupt Disable    */
    uint8_t  TXC:1;                     /**< bit:      1  Transmit Complete Interrupt Disable      */
    uint8_t  RXC:1;                     /**< bit:      2  Receive Complete Interrupt Disable       */
    uint8_t  RXS:1;                     /**< bit:      3  Receive Start Interrupt Disable          */
    uint8_t  CTSIC:1;                   /**< bit:      4  Clear To Send Input Change Interrupt Disable */
    uint8_t  RXBRK:1;                   /**< bit:      5  Break Received Interrupt Disable         */
    uint8_t  :1;                        /**< bit:      6  Reserved */
    uint8_t  ERROR:1;                   /**< bit:      7  Combined Error Interrupt Disable         */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_USART_INT_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_INT_INTENCLR_OFFSET    (0x14)                                        /**<  (SERCOM_USART_INT_INTENCLR) USART_INT Interrupt Enable Clear  Offset */
#define SERCOM_USART_INT_INTENCLR_RESETVALUE _U_(0x00)                                     /**<  (SERCOM_USART_INT_INTENCLR) USART_INT Interrupt Enable Clear  Reset Value */

#define SERCOM_USART_INT_INTENCLR_DRE_Pos   0                                              /**< (SERCOM_USART_INT_INTENCLR) Data Register Empty Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_DRE_Msk   (_U_(0x1) << SERCOM_USART_INT_INTENCLR_DRE_Pos)  /**< (SERCOM_USART_INT_INTENCLR) Data Register Empty Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_DRE       SERCOM_USART_INT_INTENCLR_DRE_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTENCLR_DRE_Msk instead */
#define SERCOM_USART_INT_INTENCLR_TXC_Pos   1                                              /**< (SERCOM_USART_INT_INTENCLR) Transmit Complete Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_TXC_Msk   (_U_(0x1) << SERCOM_USART_INT_INTENCLR_TXC_Pos)  /**< (SERCOM_USART_INT_INTENCLR) Transmit Complete Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_TXC       SERCOM_USART_INT_INTENCLR_TXC_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTENCLR_TXC_Msk instead */
#define SERCOM_USART_INT_INTENCLR_RXC_Pos   2                                              /**< (SERCOM_USART_INT_INTENCLR) Receive Complete Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_RXC_Msk   (_U_(0x1) << SERCOM_USART_INT_INTENCLR_RXC_Pos)  /**< (SERCOM_USART_INT_INTENCLR) Receive Complete Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_RXC       SERCOM_USART_INT_INTENCLR_RXC_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTENCLR_RXC_Msk instead */
#define SERCOM_USART_INT_INTENCLR_RXS_Pos   3                                              /**< (SERCOM_USART_INT_INTENCLR) Receive Start Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_RXS_Msk   (_U_(0x1) << SERCOM_USART_INT_INTENCLR_RXS_Pos)  /**< (SERCOM_USART_INT_INTENCLR) Receive Start Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_RXS       SERCOM_USART_INT_INTENCLR_RXS_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTENCLR_RXS_Msk instead */
#define SERCOM_USART_INT_INTENCLR_CTSIC_Pos 4                                              /**< (SERCOM_USART_INT_INTENCLR) Clear To Send Input Change Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_CTSIC_Msk (_U_(0x1) << SERCOM_USART_INT_INTENCLR_CTSIC_Pos)  /**< (SERCOM_USART_INT_INTENCLR) Clear To Send Input Change Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_CTSIC     SERCOM_USART_INT_INTENCLR_CTSIC_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTENCLR_CTSIC_Msk instead */
#define SERCOM_USART_INT_INTENCLR_RXBRK_Pos 5                                              /**< (SERCOM_USART_INT_INTENCLR) Break Received Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_RXBRK_Msk (_U_(0x1) << SERCOM_USART_INT_INTENCLR_RXBRK_Pos)  /**< (SERCOM_USART_INT_INTENCLR) Break Received Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_RXBRK     SERCOM_USART_INT_INTENCLR_RXBRK_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTENCLR_RXBRK_Msk instead */
#define SERCOM_USART_INT_INTENCLR_ERROR_Pos 7                                              /**< (SERCOM_USART_INT_INTENCLR) Combined Error Interrupt Disable Position */
#define SERCOM_USART_INT_INTENCLR_ERROR_Msk (_U_(0x1) << SERCOM_USART_INT_INTENCLR_ERROR_Pos)  /**< (SERCOM_USART_INT_INTENCLR) Combined Error Interrupt Disable Mask */
#define SERCOM_USART_INT_INTENCLR_ERROR     SERCOM_USART_INT_INTENCLR_ERROR_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTENCLR_ERROR_Msk instead */
#define SERCOM_USART_INT_INTENCLR_MASK      _U_(0xBF)                                      /**< \deprecated (SERCOM_USART_INT_INTENCLR) Register MASK  (Use SERCOM_USART_INT_INTENCLR_Msk instead)  */
#define SERCOM_USART_INT_INTENCLR_Msk       _U_(0xBF)                                      /**< (SERCOM_USART_INT_INTENCLR) Register Mask  */


/* -------- SERCOM_I2CM_INTENSET : (SERCOM Offset: 0x16) (R/W 8) I2CM Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  MB:1;                      /**< bit:      0  Master On Bus Interrupt Enable           */
    uint8_t  SB:1;                      /**< bit:      1  Slave On Bus Interrupt Enable            */
    uint8_t  :5;                        /**< bit:   2..6  Reserved */
    uint8_t  ERROR:1;                   /**< bit:      7  Combined Error Interrupt Enable          */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_I2CM_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_INTENSET_OFFSET         (0x16)                                        /**<  (SERCOM_I2CM_INTENSET) I2CM Interrupt Enable Set  Offset */
#define SERCOM_I2CM_INTENSET_RESETVALUE     _U_(0x00)                                     /**<  (SERCOM_I2CM_INTENSET) I2CM Interrupt Enable Set  Reset Value */

#define SERCOM_I2CM_INTENSET_MB_Pos         0                                              /**< (SERCOM_I2CM_INTENSET) Master On Bus Interrupt Enable Position */
#define SERCOM_I2CM_INTENSET_MB_Msk         (_U_(0x1) << SERCOM_I2CM_INTENSET_MB_Pos)      /**< (SERCOM_I2CM_INTENSET) Master On Bus Interrupt Enable Mask */
#define SERCOM_I2CM_INTENSET_MB             SERCOM_I2CM_INTENSET_MB_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_INTENSET_MB_Msk instead */
#define SERCOM_I2CM_INTENSET_SB_Pos         1                                              /**< (SERCOM_I2CM_INTENSET) Slave On Bus Interrupt Enable Position */
#define SERCOM_I2CM_INTENSET_SB_Msk         (_U_(0x1) << SERCOM_I2CM_INTENSET_SB_Pos)      /**< (SERCOM_I2CM_INTENSET) Slave On Bus Interrupt Enable Mask */
#define SERCOM_I2CM_INTENSET_SB             SERCOM_I2CM_INTENSET_SB_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_INTENSET_SB_Msk instead */
#define SERCOM_I2CM_INTENSET_ERROR_Pos      7                                              /**< (SERCOM_I2CM_INTENSET) Combined Error Interrupt Enable Position */
#define SERCOM_I2CM_INTENSET_ERROR_Msk      (_U_(0x1) << SERCOM_I2CM_INTENSET_ERROR_Pos)   /**< (SERCOM_I2CM_INTENSET) Combined Error Interrupt Enable Mask */
#define SERCOM_I2CM_INTENSET_ERROR          SERCOM_I2CM_INTENSET_ERROR_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_INTENSET_ERROR_Msk instead */
#define SERCOM_I2CM_INTENSET_MASK           _U_(0x83)                                      /**< \deprecated (SERCOM_I2CM_INTENSET) Register MASK  (Use SERCOM_I2CM_INTENSET_Msk instead)  */
#define SERCOM_I2CM_INTENSET_Msk            _U_(0x83)                                      /**< (SERCOM_I2CM_INTENSET) Register Mask  */


/* -------- SERCOM_I2CS_INTENSET : (SERCOM Offset: 0x16) (R/W 8) I2CS Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  PREC:1;                    /**< bit:      0  Stop Received Interrupt Enable           */
    uint8_t  AMATCH:1;                  /**< bit:      1  Address Match Interrupt Enable           */
    uint8_t  DRDY:1;                    /**< bit:      2  Data Interrupt Enable                    */
    uint8_t  :4;                        /**< bit:   3..6  Reserved */
    uint8_t  ERROR:1;                   /**< bit:      7  Combined Error Interrupt Enable          */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_I2CS_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_INTENSET_OFFSET         (0x16)                                        /**<  (SERCOM_I2CS_INTENSET) I2CS Interrupt Enable Set  Offset */
#define SERCOM_I2CS_INTENSET_RESETVALUE     _U_(0x00)                                     /**<  (SERCOM_I2CS_INTENSET) I2CS Interrupt Enable Set  Reset Value */

#define SERCOM_I2CS_INTENSET_PREC_Pos       0                                              /**< (SERCOM_I2CS_INTENSET) Stop Received Interrupt Enable Position */
#define SERCOM_I2CS_INTENSET_PREC_Msk       (_U_(0x1) << SERCOM_I2CS_INTENSET_PREC_Pos)    /**< (SERCOM_I2CS_INTENSET) Stop Received Interrupt Enable Mask */
#define SERCOM_I2CS_INTENSET_PREC           SERCOM_I2CS_INTENSET_PREC_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_INTENSET_PREC_Msk instead */
#define SERCOM_I2CS_INTENSET_AMATCH_Pos     1                                              /**< (SERCOM_I2CS_INTENSET) Address Match Interrupt Enable Position */
#define SERCOM_I2CS_INTENSET_AMATCH_Msk     (_U_(0x1) << SERCOM_I2CS_INTENSET_AMATCH_Pos)  /**< (SERCOM_I2CS_INTENSET) Address Match Interrupt Enable Mask */
#define SERCOM_I2CS_INTENSET_AMATCH         SERCOM_I2CS_INTENSET_AMATCH_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_INTENSET_AMATCH_Msk instead */
#define SERCOM_I2CS_INTENSET_DRDY_Pos       2                                              /**< (SERCOM_I2CS_INTENSET) Data Interrupt Enable Position */
#define SERCOM_I2CS_INTENSET_DRDY_Msk       (_U_(0x1) << SERCOM_I2CS_INTENSET_DRDY_Pos)    /**< (SERCOM_I2CS_INTENSET) Data Interrupt Enable Mask */
#define SERCOM_I2CS_INTENSET_DRDY           SERCOM_I2CS_INTENSET_DRDY_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_INTENSET_DRDY_Msk instead */
#define SERCOM_I2CS_INTENSET_ERROR_Pos      7                                              /**< (SERCOM_I2CS_INTENSET) Combined Error Interrupt Enable Position */
#define SERCOM_I2CS_INTENSET_ERROR_Msk      (_U_(0x1) << SERCOM_I2CS_INTENSET_ERROR_Pos)   /**< (SERCOM_I2CS_INTENSET) Combined Error Interrupt Enable Mask */
#define SERCOM_I2CS_INTENSET_ERROR          SERCOM_I2CS_INTENSET_ERROR_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_INTENSET_ERROR_Msk instead */
#define SERCOM_I2CS_INTENSET_MASK           _U_(0x87)                                      /**< \deprecated (SERCOM_I2CS_INTENSET) Register MASK  (Use SERCOM_I2CS_INTENSET_Msk instead)  */
#define SERCOM_I2CS_INTENSET_Msk            _U_(0x87)                                      /**< (SERCOM_I2CS_INTENSET) Register Mask  */


/* -------- SERCOM_SPIM_INTENSET : (SERCOM Offset: 0x16) (R/W 8) SPIM Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DRE:1;                     /**< bit:      0  Data Register Empty Interrupt Enable     */
    uint8_t  TXC:1;                     /**< bit:      1  Transmit Complete Interrupt Enable       */
    uint8_t  RXC:1;                     /**< bit:      2  Receive Complete Interrupt Enable        */
    uint8_t  SSL:1;                     /**< bit:      3  Slave Select Low Interrupt Enable        */
    uint8_t  :3;                        /**< bit:   4..6  Reserved */
    uint8_t  ERROR:1;                   /**< bit:      7  Combined Error Interrupt Enable          */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_SPIM_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIM_INTENSET_OFFSET         (0x16)                                        /**<  (SERCOM_SPIM_INTENSET) SPIM Interrupt Enable Set  Offset */
#define SERCOM_SPIM_INTENSET_RESETVALUE     _U_(0x00)                                     /**<  (SERCOM_SPIM_INTENSET) SPIM Interrupt Enable Set  Reset Value */

#define SERCOM_SPIM_INTENSET_DRE_Pos        0                                              /**< (SERCOM_SPIM_INTENSET) Data Register Empty Interrupt Enable Position */
#define SERCOM_SPIM_INTENSET_DRE_Msk        (_U_(0x1) << SERCOM_SPIM_INTENSET_DRE_Pos)     /**< (SERCOM_SPIM_INTENSET) Data Register Empty Interrupt Enable Mask */
#define SERCOM_SPIM_INTENSET_DRE            SERCOM_SPIM_INTENSET_DRE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_INTENSET_DRE_Msk instead */
#define SERCOM_SPIM_INTENSET_TXC_Pos        1                                              /**< (SERCOM_SPIM_INTENSET) Transmit Complete Interrupt Enable Position */
#define SERCOM_SPIM_INTENSET_TXC_Msk        (_U_(0x1) << SERCOM_SPIM_INTENSET_TXC_Pos)     /**< (SERCOM_SPIM_INTENSET) Transmit Complete Interrupt Enable Mask */
#define SERCOM_SPIM_INTENSET_TXC            SERCOM_SPIM_INTENSET_TXC_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_INTENSET_TXC_Msk instead */
#define SERCOM_SPIM_INTENSET_RXC_Pos        2                                              /**< (SERCOM_SPIM_INTENSET) Receive Complete Interrupt Enable Position */
#define SERCOM_SPIM_INTENSET_RXC_Msk        (_U_(0x1) << SERCOM_SPIM_INTENSET_RXC_Pos)     /**< (SERCOM_SPIM_INTENSET) Receive Complete Interrupt Enable Mask */
#define SERCOM_SPIM_INTENSET_RXC            SERCOM_SPIM_INTENSET_RXC_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_INTENSET_RXC_Msk instead */
#define SERCOM_SPIM_INTENSET_SSL_Pos        3                                              /**< (SERCOM_SPIM_INTENSET) Slave Select Low Interrupt Enable Position */
#define SERCOM_SPIM_INTENSET_SSL_Msk        (_U_(0x1) << SERCOM_SPIM_INTENSET_SSL_Pos)     /**< (SERCOM_SPIM_INTENSET) Slave Select Low Interrupt Enable Mask */
#define SERCOM_SPIM_INTENSET_SSL            SERCOM_SPIM_INTENSET_SSL_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_INTENSET_SSL_Msk instead */
#define SERCOM_SPIM_INTENSET_ERROR_Pos      7                                              /**< (SERCOM_SPIM_INTENSET) Combined Error Interrupt Enable Position */
#define SERCOM_SPIM_INTENSET_ERROR_Msk      (_U_(0x1) << SERCOM_SPIM_INTENSET_ERROR_Pos)   /**< (SERCOM_SPIM_INTENSET) Combined Error Interrupt Enable Mask */
#define SERCOM_SPIM_INTENSET_ERROR          SERCOM_SPIM_INTENSET_ERROR_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_INTENSET_ERROR_Msk instead */
#define SERCOM_SPIM_INTENSET_MASK           _U_(0x8F)                                      /**< \deprecated (SERCOM_SPIM_INTENSET) Register MASK  (Use SERCOM_SPIM_INTENSET_Msk instead)  */
#define SERCOM_SPIM_INTENSET_Msk            _U_(0x8F)                                      /**< (SERCOM_SPIM_INTENSET) Register Mask  */


/* -------- SERCOM_SPIS_INTENSET : (SERCOM Offset: 0x16) (R/W 8) SPIS Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DRE:1;                     /**< bit:      0  Data Register Empty Interrupt Enable     */
    uint8_t  TXC:1;                     /**< bit:      1  Transmit Complete Interrupt Enable       */
    uint8_t  RXC:1;                     /**< bit:      2  Receive Complete Interrupt Enable        */
    uint8_t  SSL:1;                     /**< bit:      3  Slave Select Low Interrupt Enable        */
    uint8_t  :3;                        /**< bit:   4..6  Reserved */
    uint8_t  ERROR:1;                   /**< bit:      7  Combined Error Interrupt Enable          */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_SPIS_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIS_INTENSET_OFFSET         (0x16)                                        /**<  (SERCOM_SPIS_INTENSET) SPIS Interrupt Enable Set  Offset */
#define SERCOM_SPIS_INTENSET_RESETVALUE     _U_(0x00)                                     /**<  (SERCOM_SPIS_INTENSET) SPIS Interrupt Enable Set  Reset Value */

#define SERCOM_SPIS_INTENSET_DRE_Pos        0                                              /**< (SERCOM_SPIS_INTENSET) Data Register Empty Interrupt Enable Position */
#define SERCOM_SPIS_INTENSET_DRE_Msk        (_U_(0x1) << SERCOM_SPIS_INTENSET_DRE_Pos)     /**< (SERCOM_SPIS_INTENSET) Data Register Empty Interrupt Enable Mask */
#define SERCOM_SPIS_INTENSET_DRE            SERCOM_SPIS_INTENSET_DRE_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_INTENSET_DRE_Msk instead */
#define SERCOM_SPIS_INTENSET_TXC_Pos        1                                              /**< (SERCOM_SPIS_INTENSET) Transmit Complete Interrupt Enable Position */
#define SERCOM_SPIS_INTENSET_TXC_Msk        (_U_(0x1) << SERCOM_SPIS_INTENSET_TXC_Pos)     /**< (SERCOM_SPIS_INTENSET) Transmit Complete Interrupt Enable Mask */
#define SERCOM_SPIS_INTENSET_TXC            SERCOM_SPIS_INTENSET_TXC_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_INTENSET_TXC_Msk instead */
#define SERCOM_SPIS_INTENSET_RXC_Pos        2                                              /**< (SERCOM_SPIS_INTENSET) Receive Complete Interrupt Enable Position */
#define SERCOM_SPIS_INTENSET_RXC_Msk        (_U_(0x1) << SERCOM_SPIS_INTENSET_RXC_Pos)     /**< (SERCOM_SPIS_INTENSET) Receive Complete Interrupt Enable Mask */
#define SERCOM_SPIS_INTENSET_RXC            SERCOM_SPIS_INTENSET_RXC_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_INTENSET_RXC_Msk instead */
#define SERCOM_SPIS_INTENSET_SSL_Pos        3                                              /**< (SERCOM_SPIS_INTENSET) Slave Select Low Interrupt Enable Position */
#define SERCOM_SPIS_INTENSET_SSL_Msk        (_U_(0x1) << SERCOM_SPIS_INTENSET_SSL_Pos)     /**< (SERCOM_SPIS_INTENSET) Slave Select Low Interrupt Enable Mask */
#define SERCOM_SPIS_INTENSET_SSL            SERCOM_SPIS_INTENSET_SSL_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_INTENSET_SSL_Msk instead */
#define SERCOM_SPIS_INTENSET_ERROR_Pos      7                                              /**< (SERCOM_SPIS_INTENSET) Combined Error Interrupt Enable Position */
#define SERCOM_SPIS_INTENSET_ERROR_Msk      (_U_(0x1) << SERCOM_SPIS_INTENSET_ERROR_Pos)   /**< (SERCOM_SPIS_INTENSET) Combined Error Interrupt Enable Mask */
#define SERCOM_SPIS_INTENSET_ERROR          SERCOM_SPIS_INTENSET_ERROR_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_INTENSET_ERROR_Msk instead */
#define SERCOM_SPIS_INTENSET_MASK           _U_(0x8F)                                      /**< \deprecated (SERCOM_SPIS_INTENSET) Register MASK  (Use SERCOM_SPIS_INTENSET_Msk instead)  */
#define SERCOM_SPIS_INTENSET_Msk            _U_(0x8F)                                      /**< (SERCOM_SPIS_INTENSET) Register Mask  */


/* -------- SERCOM_USART_EXT_INTENSET : (SERCOM Offset: 0x16) (R/W 8) USART_EXT Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DRE:1;                     /**< bit:      0  Data Register Empty Interrupt Enable     */
    uint8_t  TXC:1;                     /**< bit:      1  Transmit Complete Interrupt Enable       */
    uint8_t  RXC:1;                     /**< bit:      2  Receive Complete Interrupt Enable        */
    uint8_t  RXS:1;                     /**< bit:      3  Receive Start Interrupt Enable           */
    uint8_t  CTSIC:1;                   /**< bit:      4  Clear To Send Input Change Interrupt Enable */
    uint8_t  RXBRK:1;                   /**< bit:      5  Break Received Interrupt Enable          */
    uint8_t  :1;                        /**< bit:      6  Reserved */
    uint8_t  ERROR:1;                   /**< bit:      7  Combined Error Interrupt Enable          */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_USART_EXT_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_EXT_INTENSET_OFFSET    (0x16)                                        /**<  (SERCOM_USART_EXT_INTENSET) USART_EXT Interrupt Enable Set  Offset */
#define SERCOM_USART_EXT_INTENSET_RESETVALUE _U_(0x00)                                     /**<  (SERCOM_USART_EXT_INTENSET) USART_EXT Interrupt Enable Set  Reset Value */

#define SERCOM_USART_EXT_INTENSET_DRE_Pos   0                                              /**< (SERCOM_USART_EXT_INTENSET) Data Register Empty Interrupt Enable Position */
#define SERCOM_USART_EXT_INTENSET_DRE_Msk   (_U_(0x1) << SERCOM_USART_EXT_INTENSET_DRE_Pos)  /**< (SERCOM_USART_EXT_INTENSET) Data Register Empty Interrupt Enable Mask */
#define SERCOM_USART_EXT_INTENSET_DRE       SERCOM_USART_EXT_INTENSET_DRE_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTENSET_DRE_Msk instead */
#define SERCOM_USART_EXT_INTENSET_TXC_Pos   1                                              /**< (SERCOM_USART_EXT_INTENSET) Transmit Complete Interrupt Enable Position */
#define SERCOM_USART_EXT_INTENSET_TXC_Msk   (_U_(0x1) << SERCOM_USART_EXT_INTENSET_TXC_Pos)  /**< (SERCOM_USART_EXT_INTENSET) Transmit Complete Interrupt Enable Mask */
#define SERCOM_USART_EXT_INTENSET_TXC       SERCOM_USART_EXT_INTENSET_TXC_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTENSET_TXC_Msk instead */
#define SERCOM_USART_EXT_INTENSET_RXC_Pos   2                                              /**< (SERCOM_USART_EXT_INTENSET) Receive Complete Interrupt Enable Position */
#define SERCOM_USART_EXT_INTENSET_RXC_Msk   (_U_(0x1) << SERCOM_USART_EXT_INTENSET_RXC_Pos)  /**< (SERCOM_USART_EXT_INTENSET) Receive Complete Interrupt Enable Mask */
#define SERCOM_USART_EXT_INTENSET_RXC       SERCOM_USART_EXT_INTENSET_RXC_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTENSET_RXC_Msk instead */
#define SERCOM_USART_EXT_INTENSET_RXS_Pos   3                                              /**< (SERCOM_USART_EXT_INTENSET) Receive Start Interrupt Enable Position */
#define SERCOM_USART_EXT_INTENSET_RXS_Msk   (_U_(0x1) << SERCOM_USART_EXT_INTENSET_RXS_Pos)  /**< (SERCOM_USART_EXT_INTENSET) Receive Start Interrupt Enable Mask */
#define SERCOM_USART_EXT_INTENSET_RXS       SERCOM_USART_EXT_INTENSET_RXS_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTENSET_RXS_Msk instead */
#define SERCOM_USART_EXT_INTENSET_CTSIC_Pos 4                                              /**< (SERCOM_USART_EXT_INTENSET) Clear To Send Input Change Interrupt Enable Position */
#define SERCOM_USART_EXT_INTENSET_CTSIC_Msk (_U_(0x1) << SERCOM_USART_EXT_INTENSET_CTSIC_Pos)  /**< (SERCOM_USART_EXT_INTENSET) Clear To Send Input Change Interrupt Enable Mask */
#define SERCOM_USART_EXT_INTENSET_CTSIC     SERCOM_USART_EXT_INTENSET_CTSIC_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTENSET_CTSIC_Msk instead */
#define SERCOM_USART_EXT_INTENSET_RXBRK_Pos 5                                              /**< (SERCOM_USART_EXT_INTENSET) Break Received Interrupt Enable Position */
#define SERCOM_USART_EXT_INTENSET_RXBRK_Msk (_U_(0x1) << SERCOM_USART_EXT_INTENSET_RXBRK_Pos)  /**< (SERCOM_USART_EXT_INTENSET) Break Received Interrupt Enable Mask */
#define SERCOM_USART_EXT_INTENSET_RXBRK     SERCOM_USART_EXT_INTENSET_RXBRK_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTENSET_RXBRK_Msk instead */
#define SERCOM_USART_EXT_INTENSET_ERROR_Pos 7                                              /**< (SERCOM_USART_EXT_INTENSET) Combined Error Interrupt Enable Position */
#define SERCOM_USART_EXT_INTENSET_ERROR_Msk (_U_(0x1) << SERCOM_USART_EXT_INTENSET_ERROR_Pos)  /**< (SERCOM_USART_EXT_INTENSET) Combined Error Interrupt Enable Mask */
#define SERCOM_USART_EXT_INTENSET_ERROR     SERCOM_USART_EXT_INTENSET_ERROR_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTENSET_ERROR_Msk instead */
#define SERCOM_USART_EXT_INTENSET_MASK      _U_(0xBF)                                      /**< \deprecated (SERCOM_USART_EXT_INTENSET) Register MASK  (Use SERCOM_USART_EXT_INTENSET_Msk instead)  */
#define SERCOM_USART_EXT_INTENSET_Msk       _U_(0xBF)                                      /**< (SERCOM_USART_EXT_INTENSET) Register Mask  */


/* -------- SERCOM_USART_INT_INTENSET : (SERCOM Offset: 0x16) (R/W 8) USART_INT Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DRE:1;                     /**< bit:      0  Data Register Empty Interrupt Enable     */
    uint8_t  TXC:1;                     /**< bit:      1  Transmit Complete Interrupt Enable       */
    uint8_t  RXC:1;                     /**< bit:      2  Receive Complete Interrupt Enable        */
    uint8_t  RXS:1;                     /**< bit:      3  Receive Start Interrupt Enable           */
    uint8_t  CTSIC:1;                   /**< bit:      4  Clear To Send Input Change Interrupt Enable */
    uint8_t  RXBRK:1;                   /**< bit:      5  Break Received Interrupt Enable          */
    uint8_t  :1;                        /**< bit:      6  Reserved */
    uint8_t  ERROR:1;                   /**< bit:      7  Combined Error Interrupt Enable          */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_USART_INT_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_INT_INTENSET_OFFSET    (0x16)                                        /**<  (SERCOM_USART_INT_INTENSET) USART_INT Interrupt Enable Set  Offset */
#define SERCOM_USART_INT_INTENSET_RESETVALUE _U_(0x00)                                     /**<  (SERCOM_USART_INT_INTENSET) USART_INT Interrupt Enable Set  Reset Value */

#define SERCOM_USART_INT_INTENSET_DRE_Pos   0                                              /**< (SERCOM_USART_INT_INTENSET) Data Register Empty Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_DRE_Msk   (_U_(0x1) << SERCOM_USART_INT_INTENSET_DRE_Pos)  /**< (SERCOM_USART_INT_INTENSET) Data Register Empty Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_DRE       SERCOM_USART_INT_INTENSET_DRE_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTENSET_DRE_Msk instead */
#define SERCOM_USART_INT_INTENSET_TXC_Pos   1                                              /**< (SERCOM_USART_INT_INTENSET) Transmit Complete Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_TXC_Msk   (_U_(0x1) << SERCOM_USART_INT_INTENSET_TXC_Pos)  /**< (SERCOM_USART_INT_INTENSET) Transmit Complete Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_TXC       SERCOM_USART_INT_INTENSET_TXC_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTENSET_TXC_Msk instead */
#define SERCOM_USART_INT_INTENSET_RXC_Pos   2                                              /**< (SERCOM_USART_INT_INTENSET) Receive Complete Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_RXC_Msk   (_U_(0x1) << SERCOM_USART_INT_INTENSET_RXC_Pos)  /**< (SERCOM_USART_INT_INTENSET) Receive Complete Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_RXC       SERCOM_USART_INT_INTENSET_RXC_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTENSET_RXC_Msk instead */
#define SERCOM_USART_INT_INTENSET_RXS_Pos   3                                              /**< (SERCOM_USART_INT_INTENSET) Receive Start Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_RXS_Msk   (_U_(0x1) << SERCOM_USART_INT_INTENSET_RXS_Pos)  /**< (SERCOM_USART_INT_INTENSET) Receive Start Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_RXS       SERCOM_USART_INT_INTENSET_RXS_Msk              /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTENSET_RXS_Msk instead */
#define SERCOM_USART_INT_INTENSET_CTSIC_Pos 4                                              /**< (SERCOM_USART_INT_INTENSET) Clear To Send Input Change Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_CTSIC_Msk (_U_(0x1) << SERCOM_USART_INT_INTENSET_CTSIC_Pos)  /**< (SERCOM_USART_INT_INTENSET) Clear To Send Input Change Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_CTSIC     SERCOM_USART_INT_INTENSET_CTSIC_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTENSET_CTSIC_Msk instead */
#define SERCOM_USART_INT_INTENSET_RXBRK_Pos 5                                              /**< (SERCOM_USART_INT_INTENSET) Break Received Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_RXBRK_Msk (_U_(0x1) << SERCOM_USART_INT_INTENSET_RXBRK_Pos)  /**< (SERCOM_USART_INT_INTENSET) Break Received Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_RXBRK     SERCOM_USART_INT_INTENSET_RXBRK_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTENSET_RXBRK_Msk instead */
#define SERCOM_USART_INT_INTENSET_ERROR_Pos 7                                              /**< (SERCOM_USART_INT_INTENSET) Combined Error Interrupt Enable Position */
#define SERCOM_USART_INT_INTENSET_ERROR_Msk (_U_(0x1) << SERCOM_USART_INT_INTENSET_ERROR_Pos)  /**< (SERCOM_USART_INT_INTENSET) Combined Error Interrupt Enable Mask */
#define SERCOM_USART_INT_INTENSET_ERROR     SERCOM_USART_INT_INTENSET_ERROR_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTENSET_ERROR_Msk instead */
#define SERCOM_USART_INT_INTENSET_MASK      _U_(0xBF)                                      /**< \deprecated (SERCOM_USART_INT_INTENSET) Register MASK  (Use SERCOM_USART_INT_INTENSET_Msk instead)  */
#define SERCOM_USART_INT_INTENSET_Msk       _U_(0xBF)                                      /**< (SERCOM_USART_INT_INTENSET) Register Mask  */


/* -------- SERCOM_I2CM_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) I2CM Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t MB:1;                      /**< bit:      0  Master On Bus Interrupt                  */
    __I uint8_t SB:1;                      /**< bit:      1  Slave On Bus Interrupt                   */
    __I uint8_t :5;                        /**< bit:   2..6  Reserved */
    __I uint8_t ERROR:1;                   /**< bit:      7  Combined Error Interrupt                 */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_I2CM_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_INTFLAG_OFFSET          (0x18)                                        /**<  (SERCOM_I2CM_INTFLAG) I2CM Interrupt Flag Status and Clear  Offset */
#define SERCOM_I2CM_INTFLAG_RESETVALUE      _U_(0x00)                                     /**<  (SERCOM_I2CM_INTFLAG) I2CM Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_I2CM_INTFLAG_MB_Pos          0                                              /**< (SERCOM_I2CM_INTFLAG) Master On Bus Interrupt Position */
#define SERCOM_I2CM_INTFLAG_MB_Msk          (_U_(0x1) << SERCOM_I2CM_INTFLAG_MB_Pos)       /**< (SERCOM_I2CM_INTFLAG) Master On Bus Interrupt Mask */
#define SERCOM_I2CM_INTFLAG_MB              SERCOM_I2CM_INTFLAG_MB_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_INTFLAG_MB_Msk instead */
#define SERCOM_I2CM_INTFLAG_SB_Pos          1                                              /**< (SERCOM_I2CM_INTFLAG) Slave On Bus Interrupt Position */
#define SERCOM_I2CM_INTFLAG_SB_Msk          (_U_(0x1) << SERCOM_I2CM_INTFLAG_SB_Pos)       /**< (SERCOM_I2CM_INTFLAG) Slave On Bus Interrupt Mask */
#define SERCOM_I2CM_INTFLAG_SB              SERCOM_I2CM_INTFLAG_SB_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_INTFLAG_SB_Msk instead */
#define SERCOM_I2CM_INTFLAG_ERROR_Pos       7                                              /**< (SERCOM_I2CM_INTFLAG) Combined Error Interrupt Position */
#define SERCOM_I2CM_INTFLAG_ERROR_Msk       (_U_(0x1) << SERCOM_I2CM_INTFLAG_ERROR_Pos)    /**< (SERCOM_I2CM_INTFLAG) Combined Error Interrupt Mask */
#define SERCOM_I2CM_INTFLAG_ERROR           SERCOM_I2CM_INTFLAG_ERROR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_INTFLAG_ERROR_Msk instead */
#define SERCOM_I2CM_INTFLAG_MASK            _U_(0x83)                                      /**< \deprecated (SERCOM_I2CM_INTFLAG) Register MASK  (Use SERCOM_I2CM_INTFLAG_Msk instead)  */
#define SERCOM_I2CM_INTFLAG_Msk             _U_(0x83)                                      /**< (SERCOM_I2CM_INTFLAG) Register Mask  */


/* -------- SERCOM_I2CS_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) I2CS Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t PREC:1;                    /**< bit:      0  Stop Received Interrupt                  */
    __I uint8_t AMATCH:1;                  /**< bit:      1  Address Match Interrupt                  */
    __I uint8_t DRDY:1;                    /**< bit:      2  Data Interrupt                           */
    __I uint8_t :4;                        /**< bit:   3..6  Reserved */
    __I uint8_t ERROR:1;                   /**< bit:      7  Combined Error Interrupt                 */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_I2CS_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_INTFLAG_OFFSET          (0x18)                                        /**<  (SERCOM_I2CS_INTFLAG) I2CS Interrupt Flag Status and Clear  Offset */
#define SERCOM_I2CS_INTFLAG_RESETVALUE      _U_(0x00)                                     /**<  (SERCOM_I2CS_INTFLAG) I2CS Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_I2CS_INTFLAG_PREC_Pos        0                                              /**< (SERCOM_I2CS_INTFLAG) Stop Received Interrupt Position */
#define SERCOM_I2CS_INTFLAG_PREC_Msk        (_U_(0x1) << SERCOM_I2CS_INTFLAG_PREC_Pos)     /**< (SERCOM_I2CS_INTFLAG) Stop Received Interrupt Mask */
#define SERCOM_I2CS_INTFLAG_PREC            SERCOM_I2CS_INTFLAG_PREC_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_INTFLAG_PREC_Msk instead */
#define SERCOM_I2CS_INTFLAG_AMATCH_Pos      1                                              /**< (SERCOM_I2CS_INTFLAG) Address Match Interrupt Position */
#define SERCOM_I2CS_INTFLAG_AMATCH_Msk      (_U_(0x1) << SERCOM_I2CS_INTFLAG_AMATCH_Pos)   /**< (SERCOM_I2CS_INTFLAG) Address Match Interrupt Mask */
#define SERCOM_I2CS_INTFLAG_AMATCH          SERCOM_I2CS_INTFLAG_AMATCH_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_INTFLAG_AMATCH_Msk instead */
#define SERCOM_I2CS_INTFLAG_DRDY_Pos        2                                              /**< (SERCOM_I2CS_INTFLAG) Data Interrupt Position */
#define SERCOM_I2CS_INTFLAG_DRDY_Msk        (_U_(0x1) << SERCOM_I2CS_INTFLAG_DRDY_Pos)     /**< (SERCOM_I2CS_INTFLAG) Data Interrupt Mask */
#define SERCOM_I2CS_INTFLAG_DRDY            SERCOM_I2CS_INTFLAG_DRDY_Msk                   /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_INTFLAG_DRDY_Msk instead */
#define SERCOM_I2CS_INTFLAG_ERROR_Pos       7                                              /**< (SERCOM_I2CS_INTFLAG) Combined Error Interrupt Position */
#define SERCOM_I2CS_INTFLAG_ERROR_Msk       (_U_(0x1) << SERCOM_I2CS_INTFLAG_ERROR_Pos)    /**< (SERCOM_I2CS_INTFLAG) Combined Error Interrupt Mask */
#define SERCOM_I2CS_INTFLAG_ERROR           SERCOM_I2CS_INTFLAG_ERROR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_INTFLAG_ERROR_Msk instead */
#define SERCOM_I2CS_INTFLAG_MASK            _U_(0x87)                                      /**< \deprecated (SERCOM_I2CS_INTFLAG) Register MASK  (Use SERCOM_I2CS_INTFLAG_Msk instead)  */
#define SERCOM_I2CS_INTFLAG_Msk             _U_(0x87)                                      /**< (SERCOM_I2CS_INTFLAG) Register Mask  */


/* -------- SERCOM_SPIM_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) SPIM Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t DRE:1;                     /**< bit:      0  Data Register Empty Interrupt            */
    __I uint8_t TXC:1;                     /**< bit:      1  Transmit Complete Interrupt              */
    __I uint8_t RXC:1;                     /**< bit:      2  Receive Complete Interrupt               */
    __I uint8_t SSL:1;                     /**< bit:      3  Slave Select Low Interrupt Flag          */
    __I uint8_t :3;                        /**< bit:   4..6  Reserved */
    __I uint8_t ERROR:1;                   /**< bit:      7  Combined Error Interrupt                 */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_SPIM_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIM_INTFLAG_OFFSET          (0x18)                                        /**<  (SERCOM_SPIM_INTFLAG) SPIM Interrupt Flag Status and Clear  Offset */
#define SERCOM_SPIM_INTFLAG_RESETVALUE      _U_(0x00)                                     /**<  (SERCOM_SPIM_INTFLAG) SPIM Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_SPIM_INTFLAG_DRE_Pos         0                                              /**< (SERCOM_SPIM_INTFLAG) Data Register Empty Interrupt Position */
#define SERCOM_SPIM_INTFLAG_DRE_Msk         (_U_(0x1) << SERCOM_SPIM_INTFLAG_DRE_Pos)      /**< (SERCOM_SPIM_INTFLAG) Data Register Empty Interrupt Mask */
#define SERCOM_SPIM_INTFLAG_DRE             SERCOM_SPIM_INTFLAG_DRE_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_INTFLAG_DRE_Msk instead */
#define SERCOM_SPIM_INTFLAG_TXC_Pos         1                                              /**< (SERCOM_SPIM_INTFLAG) Transmit Complete Interrupt Position */
#define SERCOM_SPIM_INTFLAG_TXC_Msk         (_U_(0x1) << SERCOM_SPIM_INTFLAG_TXC_Pos)      /**< (SERCOM_SPIM_INTFLAG) Transmit Complete Interrupt Mask */
#define SERCOM_SPIM_INTFLAG_TXC             SERCOM_SPIM_INTFLAG_TXC_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_INTFLAG_TXC_Msk instead */
#define SERCOM_SPIM_INTFLAG_RXC_Pos         2                                              /**< (SERCOM_SPIM_INTFLAG) Receive Complete Interrupt Position */
#define SERCOM_SPIM_INTFLAG_RXC_Msk         (_U_(0x1) << SERCOM_SPIM_INTFLAG_RXC_Pos)      /**< (SERCOM_SPIM_INTFLAG) Receive Complete Interrupt Mask */
#define SERCOM_SPIM_INTFLAG_RXC             SERCOM_SPIM_INTFLAG_RXC_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_INTFLAG_RXC_Msk instead */
#define SERCOM_SPIM_INTFLAG_SSL_Pos         3                                              /**< (SERCOM_SPIM_INTFLAG) Slave Select Low Interrupt Flag Position */
#define SERCOM_SPIM_INTFLAG_SSL_Msk         (_U_(0x1) << SERCOM_SPIM_INTFLAG_SSL_Pos)      /**< (SERCOM_SPIM_INTFLAG) Slave Select Low Interrupt Flag Mask */
#define SERCOM_SPIM_INTFLAG_SSL             SERCOM_SPIM_INTFLAG_SSL_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_INTFLAG_SSL_Msk instead */
#define SERCOM_SPIM_INTFLAG_ERROR_Pos       7                                              /**< (SERCOM_SPIM_INTFLAG) Combined Error Interrupt Position */
#define SERCOM_SPIM_INTFLAG_ERROR_Msk       (_U_(0x1) << SERCOM_SPIM_INTFLAG_ERROR_Pos)    /**< (SERCOM_SPIM_INTFLAG) Combined Error Interrupt Mask */
#define SERCOM_SPIM_INTFLAG_ERROR           SERCOM_SPIM_INTFLAG_ERROR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_INTFLAG_ERROR_Msk instead */
#define SERCOM_SPIM_INTFLAG_MASK            _U_(0x8F)                                      /**< \deprecated (SERCOM_SPIM_INTFLAG) Register MASK  (Use SERCOM_SPIM_INTFLAG_Msk instead)  */
#define SERCOM_SPIM_INTFLAG_Msk             _U_(0x8F)                                      /**< (SERCOM_SPIM_INTFLAG) Register Mask  */


/* -------- SERCOM_SPIS_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) SPIS Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t DRE:1;                     /**< bit:      0  Data Register Empty Interrupt            */
    __I uint8_t TXC:1;                     /**< bit:      1  Transmit Complete Interrupt              */
    __I uint8_t RXC:1;                     /**< bit:      2  Receive Complete Interrupt               */
    __I uint8_t SSL:1;                     /**< bit:      3  Slave Select Low Interrupt Flag          */
    __I uint8_t :3;                        /**< bit:   4..6  Reserved */
    __I uint8_t ERROR:1;                   /**< bit:      7  Combined Error Interrupt                 */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_SPIS_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIS_INTFLAG_OFFSET          (0x18)                                        /**<  (SERCOM_SPIS_INTFLAG) SPIS Interrupt Flag Status and Clear  Offset */
#define SERCOM_SPIS_INTFLAG_RESETVALUE      _U_(0x00)                                     /**<  (SERCOM_SPIS_INTFLAG) SPIS Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_SPIS_INTFLAG_DRE_Pos         0                                              /**< (SERCOM_SPIS_INTFLAG) Data Register Empty Interrupt Position */
#define SERCOM_SPIS_INTFLAG_DRE_Msk         (_U_(0x1) << SERCOM_SPIS_INTFLAG_DRE_Pos)      /**< (SERCOM_SPIS_INTFLAG) Data Register Empty Interrupt Mask */
#define SERCOM_SPIS_INTFLAG_DRE             SERCOM_SPIS_INTFLAG_DRE_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_INTFLAG_DRE_Msk instead */
#define SERCOM_SPIS_INTFLAG_TXC_Pos         1                                              /**< (SERCOM_SPIS_INTFLAG) Transmit Complete Interrupt Position */
#define SERCOM_SPIS_INTFLAG_TXC_Msk         (_U_(0x1) << SERCOM_SPIS_INTFLAG_TXC_Pos)      /**< (SERCOM_SPIS_INTFLAG) Transmit Complete Interrupt Mask */
#define SERCOM_SPIS_INTFLAG_TXC             SERCOM_SPIS_INTFLAG_TXC_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_INTFLAG_TXC_Msk instead */
#define SERCOM_SPIS_INTFLAG_RXC_Pos         2                                              /**< (SERCOM_SPIS_INTFLAG) Receive Complete Interrupt Position */
#define SERCOM_SPIS_INTFLAG_RXC_Msk         (_U_(0x1) << SERCOM_SPIS_INTFLAG_RXC_Pos)      /**< (SERCOM_SPIS_INTFLAG) Receive Complete Interrupt Mask */
#define SERCOM_SPIS_INTFLAG_RXC             SERCOM_SPIS_INTFLAG_RXC_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_INTFLAG_RXC_Msk instead */
#define SERCOM_SPIS_INTFLAG_SSL_Pos         3                                              /**< (SERCOM_SPIS_INTFLAG) Slave Select Low Interrupt Flag Position */
#define SERCOM_SPIS_INTFLAG_SSL_Msk         (_U_(0x1) << SERCOM_SPIS_INTFLAG_SSL_Pos)      /**< (SERCOM_SPIS_INTFLAG) Slave Select Low Interrupt Flag Mask */
#define SERCOM_SPIS_INTFLAG_SSL             SERCOM_SPIS_INTFLAG_SSL_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_INTFLAG_SSL_Msk instead */
#define SERCOM_SPIS_INTFLAG_ERROR_Pos       7                                              /**< (SERCOM_SPIS_INTFLAG) Combined Error Interrupt Position */
#define SERCOM_SPIS_INTFLAG_ERROR_Msk       (_U_(0x1) << SERCOM_SPIS_INTFLAG_ERROR_Pos)    /**< (SERCOM_SPIS_INTFLAG) Combined Error Interrupt Mask */
#define SERCOM_SPIS_INTFLAG_ERROR           SERCOM_SPIS_INTFLAG_ERROR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_INTFLAG_ERROR_Msk instead */
#define SERCOM_SPIS_INTFLAG_MASK            _U_(0x8F)                                      /**< \deprecated (SERCOM_SPIS_INTFLAG) Register MASK  (Use SERCOM_SPIS_INTFLAG_Msk instead)  */
#define SERCOM_SPIS_INTFLAG_Msk             _U_(0x8F)                                      /**< (SERCOM_SPIS_INTFLAG) Register Mask  */


/* -------- SERCOM_USART_EXT_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) USART_EXT Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t DRE:1;                     /**< bit:      0  Data Register Empty Interrupt            */
    __I uint8_t TXC:1;                     /**< bit:      1  Transmit Complete Interrupt              */
    __I uint8_t RXC:1;                     /**< bit:      2  Receive Complete Interrupt               */
    __I uint8_t RXS:1;                     /**< bit:      3  Receive Start Interrupt                  */
    __I uint8_t CTSIC:1;                   /**< bit:      4  Clear To Send Input Change Interrupt     */
    __I uint8_t RXBRK:1;                   /**< bit:      5  Break Received Interrupt                 */
    __I uint8_t :1;                        /**< bit:      6  Reserved */
    __I uint8_t ERROR:1;                   /**< bit:      7  Combined Error Interrupt                 */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_USART_EXT_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_EXT_INTFLAG_OFFSET     (0x18)                                        /**<  (SERCOM_USART_EXT_INTFLAG) USART_EXT Interrupt Flag Status and Clear  Offset */
#define SERCOM_USART_EXT_INTFLAG_RESETVALUE _U_(0x00)                                     /**<  (SERCOM_USART_EXT_INTFLAG) USART_EXT Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_USART_EXT_INTFLAG_DRE_Pos    0                                              /**< (SERCOM_USART_EXT_INTFLAG) Data Register Empty Interrupt Position */
#define SERCOM_USART_EXT_INTFLAG_DRE_Msk    (_U_(0x1) << SERCOM_USART_EXT_INTFLAG_DRE_Pos)  /**< (SERCOM_USART_EXT_INTFLAG) Data Register Empty Interrupt Mask */
#define SERCOM_USART_EXT_INTFLAG_DRE        SERCOM_USART_EXT_INTFLAG_DRE_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTFLAG_DRE_Msk instead */
#define SERCOM_USART_EXT_INTFLAG_TXC_Pos    1                                              /**< (SERCOM_USART_EXT_INTFLAG) Transmit Complete Interrupt Position */
#define SERCOM_USART_EXT_INTFLAG_TXC_Msk    (_U_(0x1) << SERCOM_USART_EXT_INTFLAG_TXC_Pos)  /**< (SERCOM_USART_EXT_INTFLAG) Transmit Complete Interrupt Mask */
#define SERCOM_USART_EXT_INTFLAG_TXC        SERCOM_USART_EXT_INTFLAG_TXC_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTFLAG_TXC_Msk instead */
#define SERCOM_USART_EXT_INTFLAG_RXC_Pos    2                                              /**< (SERCOM_USART_EXT_INTFLAG) Receive Complete Interrupt Position */
#define SERCOM_USART_EXT_INTFLAG_RXC_Msk    (_U_(0x1) << SERCOM_USART_EXT_INTFLAG_RXC_Pos)  /**< (SERCOM_USART_EXT_INTFLAG) Receive Complete Interrupt Mask */
#define SERCOM_USART_EXT_INTFLAG_RXC        SERCOM_USART_EXT_INTFLAG_RXC_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTFLAG_RXC_Msk instead */
#define SERCOM_USART_EXT_INTFLAG_RXS_Pos    3                                              /**< (SERCOM_USART_EXT_INTFLAG) Receive Start Interrupt Position */
#define SERCOM_USART_EXT_INTFLAG_RXS_Msk    (_U_(0x1) << SERCOM_USART_EXT_INTFLAG_RXS_Pos)  /**< (SERCOM_USART_EXT_INTFLAG) Receive Start Interrupt Mask */
#define SERCOM_USART_EXT_INTFLAG_RXS        SERCOM_USART_EXT_INTFLAG_RXS_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTFLAG_RXS_Msk instead */
#define SERCOM_USART_EXT_INTFLAG_CTSIC_Pos  4                                              /**< (SERCOM_USART_EXT_INTFLAG) Clear To Send Input Change Interrupt Position */
#define SERCOM_USART_EXT_INTFLAG_CTSIC_Msk  (_U_(0x1) << SERCOM_USART_EXT_INTFLAG_CTSIC_Pos)  /**< (SERCOM_USART_EXT_INTFLAG) Clear To Send Input Change Interrupt Mask */
#define SERCOM_USART_EXT_INTFLAG_CTSIC      SERCOM_USART_EXT_INTFLAG_CTSIC_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTFLAG_CTSIC_Msk instead */
#define SERCOM_USART_EXT_INTFLAG_RXBRK_Pos  5                                              /**< (SERCOM_USART_EXT_INTFLAG) Break Received Interrupt Position */
#define SERCOM_USART_EXT_INTFLAG_RXBRK_Msk  (_U_(0x1) << SERCOM_USART_EXT_INTFLAG_RXBRK_Pos)  /**< (SERCOM_USART_EXT_INTFLAG) Break Received Interrupt Mask */
#define SERCOM_USART_EXT_INTFLAG_RXBRK      SERCOM_USART_EXT_INTFLAG_RXBRK_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTFLAG_RXBRK_Msk instead */
#define SERCOM_USART_EXT_INTFLAG_ERROR_Pos  7                                              /**< (SERCOM_USART_EXT_INTFLAG) Combined Error Interrupt Position */
#define SERCOM_USART_EXT_INTFLAG_ERROR_Msk  (_U_(0x1) << SERCOM_USART_EXT_INTFLAG_ERROR_Pos)  /**< (SERCOM_USART_EXT_INTFLAG) Combined Error Interrupt Mask */
#define SERCOM_USART_EXT_INTFLAG_ERROR      SERCOM_USART_EXT_INTFLAG_ERROR_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_INTFLAG_ERROR_Msk instead */
#define SERCOM_USART_EXT_INTFLAG_MASK       _U_(0xBF)                                      /**< \deprecated (SERCOM_USART_EXT_INTFLAG) Register MASK  (Use SERCOM_USART_EXT_INTFLAG_Msk instead)  */
#define SERCOM_USART_EXT_INTFLAG_Msk        _U_(0xBF)                                      /**< (SERCOM_USART_EXT_INTFLAG) Register Mask  */


/* -------- SERCOM_USART_INT_INTFLAG : (SERCOM Offset: 0x18) (R/W 8) USART_INT Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t DRE:1;                     /**< bit:      0  Data Register Empty Interrupt            */
    __I uint8_t TXC:1;                     /**< bit:      1  Transmit Complete Interrupt              */
    __I uint8_t RXC:1;                     /**< bit:      2  Receive Complete Interrupt               */
    __I uint8_t RXS:1;                     /**< bit:      3  Receive Start Interrupt                  */
    __I uint8_t CTSIC:1;                   /**< bit:      4  Clear To Send Input Change Interrupt     */
    __I uint8_t RXBRK:1;                   /**< bit:      5  Break Received Interrupt                 */
    __I uint8_t :1;                        /**< bit:      6  Reserved */
    __I uint8_t ERROR:1;                   /**< bit:      7  Combined Error Interrupt                 */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_USART_INT_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_INT_INTFLAG_OFFSET     (0x18)                                        /**<  (SERCOM_USART_INT_INTFLAG) USART_INT Interrupt Flag Status and Clear  Offset */
#define SERCOM_USART_INT_INTFLAG_RESETVALUE _U_(0x00)                                     /**<  (SERCOM_USART_INT_INTFLAG) USART_INT Interrupt Flag Status and Clear  Reset Value */

#define SERCOM_USART_INT_INTFLAG_DRE_Pos    0                                              /**< (SERCOM_USART_INT_INTFLAG) Data Register Empty Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_DRE_Msk    (_U_(0x1) << SERCOM_USART_INT_INTFLAG_DRE_Pos)  /**< (SERCOM_USART_INT_INTFLAG) Data Register Empty Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_DRE        SERCOM_USART_INT_INTFLAG_DRE_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTFLAG_DRE_Msk instead */
#define SERCOM_USART_INT_INTFLAG_TXC_Pos    1                                              /**< (SERCOM_USART_INT_INTFLAG) Transmit Complete Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_TXC_Msk    (_U_(0x1) << SERCOM_USART_INT_INTFLAG_TXC_Pos)  /**< (SERCOM_USART_INT_INTFLAG) Transmit Complete Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_TXC        SERCOM_USART_INT_INTFLAG_TXC_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTFLAG_TXC_Msk instead */
#define SERCOM_USART_INT_INTFLAG_RXC_Pos    2                                              /**< (SERCOM_USART_INT_INTFLAG) Receive Complete Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_RXC_Msk    (_U_(0x1) << SERCOM_USART_INT_INTFLAG_RXC_Pos)  /**< (SERCOM_USART_INT_INTFLAG) Receive Complete Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_RXC        SERCOM_USART_INT_INTFLAG_RXC_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTFLAG_RXC_Msk instead */
#define SERCOM_USART_INT_INTFLAG_RXS_Pos    3                                              /**< (SERCOM_USART_INT_INTFLAG) Receive Start Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_RXS_Msk    (_U_(0x1) << SERCOM_USART_INT_INTFLAG_RXS_Pos)  /**< (SERCOM_USART_INT_INTFLAG) Receive Start Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_RXS        SERCOM_USART_INT_INTFLAG_RXS_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTFLAG_RXS_Msk instead */
#define SERCOM_USART_INT_INTFLAG_CTSIC_Pos  4                                              /**< (SERCOM_USART_INT_INTFLAG) Clear To Send Input Change Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_CTSIC_Msk  (_U_(0x1) << SERCOM_USART_INT_INTFLAG_CTSIC_Pos)  /**< (SERCOM_USART_INT_INTFLAG) Clear To Send Input Change Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_CTSIC      SERCOM_USART_INT_INTFLAG_CTSIC_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTFLAG_CTSIC_Msk instead */
#define SERCOM_USART_INT_INTFLAG_RXBRK_Pos  5                                              /**< (SERCOM_USART_INT_INTFLAG) Break Received Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_RXBRK_Msk  (_U_(0x1) << SERCOM_USART_INT_INTFLAG_RXBRK_Pos)  /**< (SERCOM_USART_INT_INTFLAG) Break Received Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_RXBRK      SERCOM_USART_INT_INTFLAG_RXBRK_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTFLAG_RXBRK_Msk instead */
#define SERCOM_USART_INT_INTFLAG_ERROR_Pos  7                                              /**< (SERCOM_USART_INT_INTFLAG) Combined Error Interrupt Position */
#define SERCOM_USART_INT_INTFLAG_ERROR_Msk  (_U_(0x1) << SERCOM_USART_INT_INTFLAG_ERROR_Pos)  /**< (SERCOM_USART_INT_INTFLAG) Combined Error Interrupt Mask */
#define SERCOM_USART_INT_INTFLAG_ERROR      SERCOM_USART_INT_INTFLAG_ERROR_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_INTFLAG_ERROR_Msk instead */
#define SERCOM_USART_INT_INTFLAG_MASK       _U_(0xBF)                                      /**< \deprecated (SERCOM_USART_INT_INTFLAG) Register MASK  (Use SERCOM_USART_INT_INTFLAG_Msk instead)  */
#define SERCOM_USART_INT_INTFLAG_Msk        _U_(0xBF)                                      /**< (SERCOM_USART_INT_INTFLAG) Register Mask  */


/* -------- SERCOM_I2CM_STATUS : (SERCOM Offset: 0x1a) (R/W 16) I2CM Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t BUSERR:1;                  /**< bit:      0  Bus Error                                */
    uint16_t ARBLOST:1;                 /**< bit:      1  Arbitration Lost                         */
    uint16_t RXNACK:1;                  /**< bit:      2  Received Not Acknowledge                 */
    uint16_t :1;                        /**< bit:      3  Reserved */
    uint16_t BUSSTATE:2;                /**< bit:   4..5  Bus State                                */
    uint16_t LOWTOUT:1;                 /**< bit:      6  SCL Low Timeout                          */
    uint16_t CLKHOLD:1;                 /**< bit:      7  Clock Hold                               */
    uint16_t MEXTTOUT:1;                /**< bit:      8  Master SCL Low Extend Timeout            */
    uint16_t SEXTTOUT:1;                /**< bit:      9  Slave SCL Low Extend Timeout             */
    uint16_t LENERR:1;                  /**< bit:     10  Length Error                             */
    uint16_t :5;                        /**< bit: 11..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SERCOM_I2CM_STATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_STATUS_OFFSET           (0x1A)                                        /**<  (SERCOM_I2CM_STATUS) I2CM Status  Offset */
#define SERCOM_I2CM_STATUS_RESETVALUE       _U_(0x00)                                     /**<  (SERCOM_I2CM_STATUS) I2CM Status  Reset Value */

#define SERCOM_I2CM_STATUS_BUSERR_Pos       0                                              /**< (SERCOM_I2CM_STATUS) Bus Error Position */
#define SERCOM_I2CM_STATUS_BUSERR_Msk       (_U_(0x1) << SERCOM_I2CM_STATUS_BUSERR_Pos)    /**< (SERCOM_I2CM_STATUS) Bus Error Mask */
#define SERCOM_I2CM_STATUS_BUSERR           SERCOM_I2CM_STATUS_BUSERR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_STATUS_BUSERR_Msk instead */
#define SERCOM_I2CM_STATUS_ARBLOST_Pos      1                                              /**< (SERCOM_I2CM_STATUS) Arbitration Lost Position */
#define SERCOM_I2CM_STATUS_ARBLOST_Msk      (_U_(0x1) << SERCOM_I2CM_STATUS_ARBLOST_Pos)   /**< (SERCOM_I2CM_STATUS) Arbitration Lost Mask */
#define SERCOM_I2CM_STATUS_ARBLOST          SERCOM_I2CM_STATUS_ARBLOST_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_STATUS_ARBLOST_Msk instead */
#define SERCOM_I2CM_STATUS_RXNACK_Pos       2                                              /**< (SERCOM_I2CM_STATUS) Received Not Acknowledge Position */
#define SERCOM_I2CM_STATUS_RXNACK_Msk       (_U_(0x1) << SERCOM_I2CM_STATUS_RXNACK_Pos)    /**< (SERCOM_I2CM_STATUS) Received Not Acknowledge Mask */
#define SERCOM_I2CM_STATUS_RXNACK           SERCOM_I2CM_STATUS_RXNACK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_STATUS_RXNACK_Msk instead */
#define SERCOM_I2CM_STATUS_BUSSTATE_Pos     4                                              /**< (SERCOM_I2CM_STATUS) Bus State Position */
#define SERCOM_I2CM_STATUS_BUSSTATE_Msk     (_U_(0x3) << SERCOM_I2CM_STATUS_BUSSTATE_Pos)  /**< (SERCOM_I2CM_STATUS) Bus State Mask */
#define SERCOM_I2CM_STATUS_BUSSTATE(value)  (SERCOM_I2CM_STATUS_BUSSTATE_Msk & ((value) << SERCOM_I2CM_STATUS_BUSSTATE_Pos))
#define SERCOM_I2CM_STATUS_LOWTOUT_Pos      6                                              /**< (SERCOM_I2CM_STATUS) SCL Low Timeout Position */
#define SERCOM_I2CM_STATUS_LOWTOUT_Msk      (_U_(0x1) << SERCOM_I2CM_STATUS_LOWTOUT_Pos)   /**< (SERCOM_I2CM_STATUS) SCL Low Timeout Mask */
#define SERCOM_I2CM_STATUS_LOWTOUT          SERCOM_I2CM_STATUS_LOWTOUT_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_STATUS_LOWTOUT_Msk instead */
#define SERCOM_I2CM_STATUS_CLKHOLD_Pos      7                                              /**< (SERCOM_I2CM_STATUS) Clock Hold Position */
#define SERCOM_I2CM_STATUS_CLKHOLD_Msk      (_U_(0x1) << SERCOM_I2CM_STATUS_CLKHOLD_Pos)   /**< (SERCOM_I2CM_STATUS) Clock Hold Mask */
#define SERCOM_I2CM_STATUS_CLKHOLD          SERCOM_I2CM_STATUS_CLKHOLD_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_STATUS_CLKHOLD_Msk instead */
#define SERCOM_I2CM_STATUS_MEXTTOUT_Pos     8                                              /**< (SERCOM_I2CM_STATUS) Master SCL Low Extend Timeout Position */
#define SERCOM_I2CM_STATUS_MEXTTOUT_Msk     (_U_(0x1) << SERCOM_I2CM_STATUS_MEXTTOUT_Pos)  /**< (SERCOM_I2CM_STATUS) Master SCL Low Extend Timeout Mask */
#define SERCOM_I2CM_STATUS_MEXTTOUT         SERCOM_I2CM_STATUS_MEXTTOUT_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_STATUS_MEXTTOUT_Msk instead */
#define SERCOM_I2CM_STATUS_SEXTTOUT_Pos     9                                              /**< (SERCOM_I2CM_STATUS) Slave SCL Low Extend Timeout Position */
#define SERCOM_I2CM_STATUS_SEXTTOUT_Msk     (_U_(0x1) << SERCOM_I2CM_STATUS_SEXTTOUT_Pos)  /**< (SERCOM_I2CM_STATUS) Slave SCL Low Extend Timeout Mask */
#define SERCOM_I2CM_STATUS_SEXTTOUT         SERCOM_I2CM_STATUS_SEXTTOUT_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_STATUS_SEXTTOUT_Msk instead */
#define SERCOM_I2CM_STATUS_LENERR_Pos       10                                             /**< (SERCOM_I2CM_STATUS) Length Error Position */
#define SERCOM_I2CM_STATUS_LENERR_Msk       (_U_(0x1) << SERCOM_I2CM_STATUS_LENERR_Pos)    /**< (SERCOM_I2CM_STATUS) Length Error Mask */
#define SERCOM_I2CM_STATUS_LENERR           SERCOM_I2CM_STATUS_LENERR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_STATUS_LENERR_Msk instead */
#define SERCOM_I2CM_STATUS_MASK             _U_(0x7F7)                                     /**< \deprecated (SERCOM_I2CM_STATUS) Register MASK  (Use SERCOM_I2CM_STATUS_Msk instead)  */
#define SERCOM_I2CM_STATUS_Msk              _U_(0x7F7)                                     /**< (SERCOM_I2CM_STATUS) Register Mask  */


/* -------- SERCOM_I2CS_STATUS : (SERCOM Offset: 0x1a) (R/W 16) I2CS Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t BUSERR:1;                  /**< bit:      0  Bus Error                                */
    uint16_t COLL:1;                    /**< bit:      1  Transmit Collision                       */
    uint16_t RXNACK:1;                  /**< bit:      2  Received Not Acknowledge                 */
    uint16_t DIR:1;                     /**< bit:      3  Read/Write Direction                     */
    uint16_t SR:1;                      /**< bit:      4  Repeated Start                           */
    uint16_t :1;                        /**< bit:      5  Reserved */
    uint16_t LOWTOUT:1;                 /**< bit:      6  SCL Low Timeout                          */
    uint16_t CLKHOLD:1;                 /**< bit:      7  Clock Hold                               */
    uint16_t :1;                        /**< bit:      8  Reserved */
    uint16_t SEXTTOUT:1;                /**< bit:      9  Slave SCL Low Extend Timeout             */
    uint16_t HS:1;                      /**< bit:     10  High Speed                               */
    uint16_t :5;                        /**< bit: 11..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SERCOM_I2CS_STATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_STATUS_OFFSET           (0x1A)                                        /**<  (SERCOM_I2CS_STATUS) I2CS Status  Offset */
#define SERCOM_I2CS_STATUS_RESETVALUE       _U_(0x00)                                     /**<  (SERCOM_I2CS_STATUS) I2CS Status  Reset Value */

#define SERCOM_I2CS_STATUS_BUSERR_Pos       0                                              /**< (SERCOM_I2CS_STATUS) Bus Error Position */
#define SERCOM_I2CS_STATUS_BUSERR_Msk       (_U_(0x1) << SERCOM_I2CS_STATUS_BUSERR_Pos)    /**< (SERCOM_I2CS_STATUS) Bus Error Mask */
#define SERCOM_I2CS_STATUS_BUSERR           SERCOM_I2CS_STATUS_BUSERR_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_STATUS_BUSERR_Msk instead */
#define SERCOM_I2CS_STATUS_COLL_Pos         1                                              /**< (SERCOM_I2CS_STATUS) Transmit Collision Position */
#define SERCOM_I2CS_STATUS_COLL_Msk         (_U_(0x1) << SERCOM_I2CS_STATUS_COLL_Pos)      /**< (SERCOM_I2CS_STATUS) Transmit Collision Mask */
#define SERCOM_I2CS_STATUS_COLL             SERCOM_I2CS_STATUS_COLL_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_STATUS_COLL_Msk instead */
#define SERCOM_I2CS_STATUS_RXNACK_Pos       2                                              /**< (SERCOM_I2CS_STATUS) Received Not Acknowledge Position */
#define SERCOM_I2CS_STATUS_RXNACK_Msk       (_U_(0x1) << SERCOM_I2CS_STATUS_RXNACK_Pos)    /**< (SERCOM_I2CS_STATUS) Received Not Acknowledge Mask */
#define SERCOM_I2CS_STATUS_RXNACK           SERCOM_I2CS_STATUS_RXNACK_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_STATUS_RXNACK_Msk instead */
#define SERCOM_I2CS_STATUS_DIR_Pos          3                                              /**< (SERCOM_I2CS_STATUS) Read/Write Direction Position */
#define SERCOM_I2CS_STATUS_DIR_Msk          (_U_(0x1) << SERCOM_I2CS_STATUS_DIR_Pos)       /**< (SERCOM_I2CS_STATUS) Read/Write Direction Mask */
#define SERCOM_I2CS_STATUS_DIR              SERCOM_I2CS_STATUS_DIR_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_STATUS_DIR_Msk instead */
#define SERCOM_I2CS_STATUS_SR_Pos           4                                              /**< (SERCOM_I2CS_STATUS) Repeated Start Position */
#define SERCOM_I2CS_STATUS_SR_Msk           (_U_(0x1) << SERCOM_I2CS_STATUS_SR_Pos)        /**< (SERCOM_I2CS_STATUS) Repeated Start Mask */
#define SERCOM_I2CS_STATUS_SR               SERCOM_I2CS_STATUS_SR_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_STATUS_SR_Msk instead */
#define SERCOM_I2CS_STATUS_LOWTOUT_Pos      6                                              /**< (SERCOM_I2CS_STATUS) SCL Low Timeout Position */
#define SERCOM_I2CS_STATUS_LOWTOUT_Msk      (_U_(0x1) << SERCOM_I2CS_STATUS_LOWTOUT_Pos)   /**< (SERCOM_I2CS_STATUS) SCL Low Timeout Mask */
#define SERCOM_I2CS_STATUS_LOWTOUT          SERCOM_I2CS_STATUS_LOWTOUT_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_STATUS_LOWTOUT_Msk instead */
#define SERCOM_I2CS_STATUS_CLKHOLD_Pos      7                                              /**< (SERCOM_I2CS_STATUS) Clock Hold Position */
#define SERCOM_I2CS_STATUS_CLKHOLD_Msk      (_U_(0x1) << SERCOM_I2CS_STATUS_CLKHOLD_Pos)   /**< (SERCOM_I2CS_STATUS) Clock Hold Mask */
#define SERCOM_I2CS_STATUS_CLKHOLD          SERCOM_I2CS_STATUS_CLKHOLD_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_STATUS_CLKHOLD_Msk instead */
#define SERCOM_I2CS_STATUS_SEXTTOUT_Pos     9                                              /**< (SERCOM_I2CS_STATUS) Slave SCL Low Extend Timeout Position */
#define SERCOM_I2CS_STATUS_SEXTTOUT_Msk     (_U_(0x1) << SERCOM_I2CS_STATUS_SEXTTOUT_Pos)  /**< (SERCOM_I2CS_STATUS) Slave SCL Low Extend Timeout Mask */
#define SERCOM_I2CS_STATUS_SEXTTOUT         SERCOM_I2CS_STATUS_SEXTTOUT_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_STATUS_SEXTTOUT_Msk instead */
#define SERCOM_I2CS_STATUS_HS_Pos           10                                             /**< (SERCOM_I2CS_STATUS) High Speed Position */
#define SERCOM_I2CS_STATUS_HS_Msk           (_U_(0x1) << SERCOM_I2CS_STATUS_HS_Pos)        /**< (SERCOM_I2CS_STATUS) High Speed Mask */
#define SERCOM_I2CS_STATUS_HS               SERCOM_I2CS_STATUS_HS_Msk                      /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_STATUS_HS_Msk instead */
#define SERCOM_I2CS_STATUS_MASK             _U_(0x6DF)                                     /**< \deprecated (SERCOM_I2CS_STATUS) Register MASK  (Use SERCOM_I2CS_STATUS_Msk instead)  */
#define SERCOM_I2CS_STATUS_Msk              _U_(0x6DF)                                     /**< (SERCOM_I2CS_STATUS) Register Mask  */


/* -------- SERCOM_SPIM_STATUS : (SERCOM Offset: 0x1a) (R/W 16) SPIM Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t :2;                        /**< bit:   0..1  Reserved */
    uint16_t BUFOVF:1;                  /**< bit:      2  Buffer Overflow                          */
    uint16_t :13;                       /**< bit:  3..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SERCOM_SPIM_STATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIM_STATUS_OFFSET           (0x1A)                                        /**<  (SERCOM_SPIM_STATUS) SPIM Status  Offset */
#define SERCOM_SPIM_STATUS_RESETVALUE       _U_(0x00)                                     /**<  (SERCOM_SPIM_STATUS) SPIM Status  Reset Value */

#define SERCOM_SPIM_STATUS_BUFOVF_Pos       2                                              /**< (SERCOM_SPIM_STATUS) Buffer Overflow Position */
#define SERCOM_SPIM_STATUS_BUFOVF_Msk       (_U_(0x1) << SERCOM_SPIM_STATUS_BUFOVF_Pos)    /**< (SERCOM_SPIM_STATUS) Buffer Overflow Mask */
#define SERCOM_SPIM_STATUS_BUFOVF           SERCOM_SPIM_STATUS_BUFOVF_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_STATUS_BUFOVF_Msk instead */
#define SERCOM_SPIM_STATUS_MASK             _U_(0x04)                                      /**< \deprecated (SERCOM_SPIM_STATUS) Register MASK  (Use SERCOM_SPIM_STATUS_Msk instead)  */
#define SERCOM_SPIM_STATUS_Msk              _U_(0x04)                                      /**< (SERCOM_SPIM_STATUS) Register Mask  */


/* -------- SERCOM_SPIS_STATUS : (SERCOM Offset: 0x1a) (R/W 16) SPIS Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t :2;                        /**< bit:   0..1  Reserved */
    uint16_t BUFOVF:1;                  /**< bit:      2  Buffer Overflow                          */
    uint16_t :13;                       /**< bit:  3..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SERCOM_SPIS_STATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIS_STATUS_OFFSET           (0x1A)                                        /**<  (SERCOM_SPIS_STATUS) SPIS Status  Offset */
#define SERCOM_SPIS_STATUS_RESETVALUE       _U_(0x00)                                     /**<  (SERCOM_SPIS_STATUS) SPIS Status  Reset Value */

#define SERCOM_SPIS_STATUS_BUFOVF_Pos       2                                              /**< (SERCOM_SPIS_STATUS) Buffer Overflow Position */
#define SERCOM_SPIS_STATUS_BUFOVF_Msk       (_U_(0x1) << SERCOM_SPIS_STATUS_BUFOVF_Pos)    /**< (SERCOM_SPIS_STATUS) Buffer Overflow Mask */
#define SERCOM_SPIS_STATUS_BUFOVF           SERCOM_SPIS_STATUS_BUFOVF_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_STATUS_BUFOVF_Msk instead */
#define SERCOM_SPIS_STATUS_MASK             _U_(0x04)                                      /**< \deprecated (SERCOM_SPIS_STATUS) Register MASK  (Use SERCOM_SPIS_STATUS_Msk instead)  */
#define SERCOM_SPIS_STATUS_Msk              _U_(0x04)                                      /**< (SERCOM_SPIS_STATUS) Register Mask  */


/* -------- SERCOM_USART_EXT_STATUS : (SERCOM Offset: 0x1a) (R/W 16) USART_EXT Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t PERR:1;                    /**< bit:      0  Parity Error                             */
    uint16_t FERR:1;                    /**< bit:      1  Frame Error                              */
    uint16_t BUFOVF:1;                  /**< bit:      2  Buffer Overflow                          */
    uint16_t CTS:1;                     /**< bit:      3  Clear To Send                            */
    uint16_t ISF:1;                     /**< bit:      4  Inconsistent Sync Field                  */
    uint16_t COLL:1;                    /**< bit:      5  Collision Detected                       */
    uint16_t :10;                       /**< bit:  6..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SERCOM_USART_EXT_STATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_EXT_STATUS_OFFSET      (0x1A)                                        /**<  (SERCOM_USART_EXT_STATUS) USART_EXT Status  Offset */
#define SERCOM_USART_EXT_STATUS_RESETVALUE  _U_(0x00)                                     /**<  (SERCOM_USART_EXT_STATUS) USART_EXT Status  Reset Value */

#define SERCOM_USART_EXT_STATUS_PERR_Pos    0                                              /**< (SERCOM_USART_EXT_STATUS) Parity Error Position */
#define SERCOM_USART_EXT_STATUS_PERR_Msk    (_U_(0x1) << SERCOM_USART_EXT_STATUS_PERR_Pos)  /**< (SERCOM_USART_EXT_STATUS) Parity Error Mask */
#define SERCOM_USART_EXT_STATUS_PERR        SERCOM_USART_EXT_STATUS_PERR_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_STATUS_PERR_Msk instead */
#define SERCOM_USART_EXT_STATUS_FERR_Pos    1                                              /**< (SERCOM_USART_EXT_STATUS) Frame Error Position */
#define SERCOM_USART_EXT_STATUS_FERR_Msk    (_U_(0x1) << SERCOM_USART_EXT_STATUS_FERR_Pos)  /**< (SERCOM_USART_EXT_STATUS) Frame Error Mask */
#define SERCOM_USART_EXT_STATUS_FERR        SERCOM_USART_EXT_STATUS_FERR_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_STATUS_FERR_Msk instead */
#define SERCOM_USART_EXT_STATUS_BUFOVF_Pos  2                                              /**< (SERCOM_USART_EXT_STATUS) Buffer Overflow Position */
#define SERCOM_USART_EXT_STATUS_BUFOVF_Msk  (_U_(0x1) << SERCOM_USART_EXT_STATUS_BUFOVF_Pos)  /**< (SERCOM_USART_EXT_STATUS) Buffer Overflow Mask */
#define SERCOM_USART_EXT_STATUS_BUFOVF      SERCOM_USART_EXT_STATUS_BUFOVF_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_STATUS_BUFOVF_Msk instead */
#define SERCOM_USART_EXT_STATUS_CTS_Pos     3                                              /**< (SERCOM_USART_EXT_STATUS) Clear To Send Position */
#define SERCOM_USART_EXT_STATUS_CTS_Msk     (_U_(0x1) << SERCOM_USART_EXT_STATUS_CTS_Pos)  /**< (SERCOM_USART_EXT_STATUS) Clear To Send Mask */
#define SERCOM_USART_EXT_STATUS_CTS         SERCOM_USART_EXT_STATUS_CTS_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_STATUS_CTS_Msk instead */
#define SERCOM_USART_EXT_STATUS_ISF_Pos     4                                              /**< (SERCOM_USART_EXT_STATUS) Inconsistent Sync Field Position */
#define SERCOM_USART_EXT_STATUS_ISF_Msk     (_U_(0x1) << SERCOM_USART_EXT_STATUS_ISF_Pos)  /**< (SERCOM_USART_EXT_STATUS) Inconsistent Sync Field Mask */
#define SERCOM_USART_EXT_STATUS_ISF         SERCOM_USART_EXT_STATUS_ISF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_STATUS_ISF_Msk instead */
#define SERCOM_USART_EXT_STATUS_COLL_Pos    5                                              /**< (SERCOM_USART_EXT_STATUS) Collision Detected Position */
#define SERCOM_USART_EXT_STATUS_COLL_Msk    (_U_(0x1) << SERCOM_USART_EXT_STATUS_COLL_Pos)  /**< (SERCOM_USART_EXT_STATUS) Collision Detected Mask */
#define SERCOM_USART_EXT_STATUS_COLL        SERCOM_USART_EXT_STATUS_COLL_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_STATUS_COLL_Msk instead */
#define SERCOM_USART_EXT_STATUS_MASK        _U_(0x3F)                                      /**< \deprecated (SERCOM_USART_EXT_STATUS) Register MASK  (Use SERCOM_USART_EXT_STATUS_Msk instead)  */
#define SERCOM_USART_EXT_STATUS_Msk         _U_(0x3F)                                      /**< (SERCOM_USART_EXT_STATUS) Register Mask  */


/* -------- SERCOM_USART_INT_STATUS : (SERCOM Offset: 0x1a) (R/W 16) USART_INT Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t PERR:1;                    /**< bit:      0  Parity Error                             */
    uint16_t FERR:1;                    /**< bit:      1  Frame Error                              */
    uint16_t BUFOVF:1;                  /**< bit:      2  Buffer Overflow                          */
    uint16_t CTS:1;                     /**< bit:      3  Clear To Send                            */
    uint16_t ISF:1;                     /**< bit:      4  Inconsistent Sync Field                  */
    uint16_t COLL:1;                    /**< bit:      5  Collision Detected                       */
    uint16_t :10;                       /**< bit:  6..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SERCOM_USART_INT_STATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_INT_STATUS_OFFSET      (0x1A)                                        /**<  (SERCOM_USART_INT_STATUS) USART_INT Status  Offset */
#define SERCOM_USART_INT_STATUS_RESETVALUE  _U_(0x00)                                     /**<  (SERCOM_USART_INT_STATUS) USART_INT Status  Reset Value */

#define SERCOM_USART_INT_STATUS_PERR_Pos    0                                              /**< (SERCOM_USART_INT_STATUS) Parity Error Position */
#define SERCOM_USART_INT_STATUS_PERR_Msk    (_U_(0x1) << SERCOM_USART_INT_STATUS_PERR_Pos)  /**< (SERCOM_USART_INT_STATUS) Parity Error Mask */
#define SERCOM_USART_INT_STATUS_PERR        SERCOM_USART_INT_STATUS_PERR_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_STATUS_PERR_Msk instead */
#define SERCOM_USART_INT_STATUS_FERR_Pos    1                                              /**< (SERCOM_USART_INT_STATUS) Frame Error Position */
#define SERCOM_USART_INT_STATUS_FERR_Msk    (_U_(0x1) << SERCOM_USART_INT_STATUS_FERR_Pos)  /**< (SERCOM_USART_INT_STATUS) Frame Error Mask */
#define SERCOM_USART_INT_STATUS_FERR        SERCOM_USART_INT_STATUS_FERR_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_STATUS_FERR_Msk instead */
#define SERCOM_USART_INT_STATUS_BUFOVF_Pos  2                                              /**< (SERCOM_USART_INT_STATUS) Buffer Overflow Position */
#define SERCOM_USART_INT_STATUS_BUFOVF_Msk  (_U_(0x1) << SERCOM_USART_INT_STATUS_BUFOVF_Pos)  /**< (SERCOM_USART_INT_STATUS) Buffer Overflow Mask */
#define SERCOM_USART_INT_STATUS_BUFOVF      SERCOM_USART_INT_STATUS_BUFOVF_Msk             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_STATUS_BUFOVF_Msk instead */
#define SERCOM_USART_INT_STATUS_CTS_Pos     3                                              /**< (SERCOM_USART_INT_STATUS) Clear To Send Position */
#define SERCOM_USART_INT_STATUS_CTS_Msk     (_U_(0x1) << SERCOM_USART_INT_STATUS_CTS_Pos)  /**< (SERCOM_USART_INT_STATUS) Clear To Send Mask */
#define SERCOM_USART_INT_STATUS_CTS         SERCOM_USART_INT_STATUS_CTS_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_STATUS_CTS_Msk instead */
#define SERCOM_USART_INT_STATUS_ISF_Pos     4                                              /**< (SERCOM_USART_INT_STATUS) Inconsistent Sync Field Position */
#define SERCOM_USART_INT_STATUS_ISF_Msk     (_U_(0x1) << SERCOM_USART_INT_STATUS_ISF_Pos)  /**< (SERCOM_USART_INT_STATUS) Inconsistent Sync Field Mask */
#define SERCOM_USART_INT_STATUS_ISF         SERCOM_USART_INT_STATUS_ISF_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_STATUS_ISF_Msk instead */
#define SERCOM_USART_INT_STATUS_COLL_Pos    5                                              /**< (SERCOM_USART_INT_STATUS) Collision Detected Position */
#define SERCOM_USART_INT_STATUS_COLL_Msk    (_U_(0x1) << SERCOM_USART_INT_STATUS_COLL_Pos)  /**< (SERCOM_USART_INT_STATUS) Collision Detected Mask */
#define SERCOM_USART_INT_STATUS_COLL        SERCOM_USART_INT_STATUS_COLL_Msk               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_STATUS_COLL_Msk instead */
#define SERCOM_USART_INT_STATUS_MASK        _U_(0x3F)                                      /**< \deprecated (SERCOM_USART_INT_STATUS) Register MASK  (Use SERCOM_USART_INT_STATUS_Msk instead)  */
#define SERCOM_USART_INT_STATUS_Msk         _U_(0x3F)                                      /**< (SERCOM_USART_INT_STATUS) Register Mask  */


/* -------- SERCOM_I2CM_SYNCBUSY : (SERCOM Offset: 0x1c) (R/ 32) I2CM Synchronization Busy -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset Synchronization Busy      */
    uint32_t ENABLE:1;                  /**< bit:      1  SERCOM Enable Synchronization Busy       */
    uint32_t SYSOP:1;                   /**< bit:      2  System Operation Synchronization Busy    */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_I2CM_SYNCBUSY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_SYNCBUSY_OFFSET         (0x1C)                                        /**<  (SERCOM_I2CM_SYNCBUSY) I2CM Synchronization Busy  Offset */
#define SERCOM_I2CM_SYNCBUSY_RESETVALUE     _U_(0x00)                                     /**<  (SERCOM_I2CM_SYNCBUSY) I2CM Synchronization Busy  Reset Value */

#define SERCOM_I2CM_SYNCBUSY_SWRST_Pos      0                                              /**< (SERCOM_I2CM_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_I2CM_SYNCBUSY_SWRST_Msk      (_U_(0x1) << SERCOM_I2CM_SYNCBUSY_SWRST_Pos)   /**< (SERCOM_I2CM_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_I2CM_SYNCBUSY_SWRST          SERCOM_I2CM_SYNCBUSY_SWRST_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_SYNCBUSY_SWRST_Msk instead */
#define SERCOM_I2CM_SYNCBUSY_ENABLE_Pos     1                                              /**< (SERCOM_I2CM_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_I2CM_SYNCBUSY_ENABLE_Msk     (_U_(0x1) << SERCOM_I2CM_SYNCBUSY_ENABLE_Pos)  /**< (SERCOM_I2CM_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_I2CM_SYNCBUSY_ENABLE         SERCOM_I2CM_SYNCBUSY_ENABLE_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_SYNCBUSY_ENABLE_Msk instead */
#define SERCOM_I2CM_SYNCBUSY_SYSOP_Pos      2                                              /**< (SERCOM_I2CM_SYNCBUSY) System Operation Synchronization Busy Position */
#define SERCOM_I2CM_SYNCBUSY_SYSOP_Msk      (_U_(0x1) << SERCOM_I2CM_SYNCBUSY_SYSOP_Pos)   /**< (SERCOM_I2CM_SYNCBUSY) System Operation Synchronization Busy Mask */
#define SERCOM_I2CM_SYNCBUSY_SYSOP          SERCOM_I2CM_SYNCBUSY_SYSOP_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_SYNCBUSY_SYSOP_Msk instead */
#define SERCOM_I2CM_SYNCBUSY_MASK           _U_(0x07)                                      /**< \deprecated (SERCOM_I2CM_SYNCBUSY) Register MASK  (Use SERCOM_I2CM_SYNCBUSY_Msk instead)  */
#define SERCOM_I2CM_SYNCBUSY_Msk            _U_(0x07)                                      /**< (SERCOM_I2CM_SYNCBUSY) Register Mask  */


/* -------- SERCOM_I2CS_SYNCBUSY : (SERCOM Offset: 0x1c) (R/ 32) I2CS Synchronization Busy -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset Synchronization Busy      */
    uint32_t ENABLE:1;                  /**< bit:      1  SERCOM Enable Synchronization Busy       */
    uint32_t :30;                       /**< bit:  2..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_I2CS_SYNCBUSY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_SYNCBUSY_OFFSET         (0x1C)                                        /**<  (SERCOM_I2CS_SYNCBUSY) I2CS Synchronization Busy  Offset */
#define SERCOM_I2CS_SYNCBUSY_RESETVALUE     _U_(0x00)                                     /**<  (SERCOM_I2CS_SYNCBUSY) I2CS Synchronization Busy  Reset Value */

#define SERCOM_I2CS_SYNCBUSY_SWRST_Pos      0                                              /**< (SERCOM_I2CS_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_I2CS_SYNCBUSY_SWRST_Msk      (_U_(0x1) << SERCOM_I2CS_SYNCBUSY_SWRST_Pos)   /**< (SERCOM_I2CS_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_I2CS_SYNCBUSY_SWRST          SERCOM_I2CS_SYNCBUSY_SWRST_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_SYNCBUSY_SWRST_Msk instead */
#define SERCOM_I2CS_SYNCBUSY_ENABLE_Pos     1                                              /**< (SERCOM_I2CS_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_I2CS_SYNCBUSY_ENABLE_Msk     (_U_(0x1) << SERCOM_I2CS_SYNCBUSY_ENABLE_Pos)  /**< (SERCOM_I2CS_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_I2CS_SYNCBUSY_ENABLE         SERCOM_I2CS_SYNCBUSY_ENABLE_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_SYNCBUSY_ENABLE_Msk instead */
#define SERCOM_I2CS_SYNCBUSY_MASK           _U_(0x03)                                      /**< \deprecated (SERCOM_I2CS_SYNCBUSY) Register MASK  (Use SERCOM_I2CS_SYNCBUSY_Msk instead)  */
#define SERCOM_I2CS_SYNCBUSY_Msk            _U_(0x03)                                      /**< (SERCOM_I2CS_SYNCBUSY) Register Mask  */


/* -------- SERCOM_SPIM_SYNCBUSY : (SERCOM Offset: 0x1c) (R/ 32) SPIM Synchronization Busy -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset Synchronization Busy      */
    uint32_t ENABLE:1;                  /**< bit:      1  SERCOM Enable Synchronization Busy       */
    uint32_t CTRLB:1;                   /**< bit:      2  CTRLB Synchronization Busy               */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_SPIM_SYNCBUSY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIM_SYNCBUSY_OFFSET         (0x1C)                                        /**<  (SERCOM_SPIM_SYNCBUSY) SPIM Synchronization Busy  Offset */
#define SERCOM_SPIM_SYNCBUSY_RESETVALUE     _U_(0x00)                                     /**<  (SERCOM_SPIM_SYNCBUSY) SPIM Synchronization Busy  Reset Value */

#define SERCOM_SPIM_SYNCBUSY_SWRST_Pos      0                                              /**< (SERCOM_SPIM_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_SPIM_SYNCBUSY_SWRST_Msk      (_U_(0x1) << SERCOM_SPIM_SYNCBUSY_SWRST_Pos)   /**< (SERCOM_SPIM_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_SPIM_SYNCBUSY_SWRST          SERCOM_SPIM_SYNCBUSY_SWRST_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_SYNCBUSY_SWRST_Msk instead */
#define SERCOM_SPIM_SYNCBUSY_ENABLE_Pos     1                                              /**< (SERCOM_SPIM_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_SPIM_SYNCBUSY_ENABLE_Msk     (_U_(0x1) << SERCOM_SPIM_SYNCBUSY_ENABLE_Pos)  /**< (SERCOM_SPIM_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_SPIM_SYNCBUSY_ENABLE         SERCOM_SPIM_SYNCBUSY_ENABLE_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_SYNCBUSY_ENABLE_Msk instead */
#define SERCOM_SPIM_SYNCBUSY_CTRLB_Pos      2                                              /**< (SERCOM_SPIM_SYNCBUSY) CTRLB Synchronization Busy Position */
#define SERCOM_SPIM_SYNCBUSY_CTRLB_Msk      (_U_(0x1) << SERCOM_SPIM_SYNCBUSY_CTRLB_Pos)   /**< (SERCOM_SPIM_SYNCBUSY) CTRLB Synchronization Busy Mask */
#define SERCOM_SPIM_SYNCBUSY_CTRLB          SERCOM_SPIM_SYNCBUSY_CTRLB_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_SYNCBUSY_CTRLB_Msk instead */
#define SERCOM_SPIM_SYNCBUSY_MASK           _U_(0x07)                                      /**< \deprecated (SERCOM_SPIM_SYNCBUSY) Register MASK  (Use SERCOM_SPIM_SYNCBUSY_Msk instead)  */
#define SERCOM_SPIM_SYNCBUSY_Msk            _U_(0x07)                                      /**< (SERCOM_SPIM_SYNCBUSY) Register Mask  */


/* -------- SERCOM_SPIS_SYNCBUSY : (SERCOM Offset: 0x1c) (R/ 32) SPIS Synchronization Busy -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset Synchronization Busy      */
    uint32_t ENABLE:1;                  /**< bit:      1  SERCOM Enable Synchronization Busy       */
    uint32_t CTRLB:1;                   /**< bit:      2  CTRLB Synchronization Busy               */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_SPIS_SYNCBUSY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIS_SYNCBUSY_OFFSET         (0x1C)                                        /**<  (SERCOM_SPIS_SYNCBUSY) SPIS Synchronization Busy  Offset */
#define SERCOM_SPIS_SYNCBUSY_RESETVALUE     _U_(0x00)                                     /**<  (SERCOM_SPIS_SYNCBUSY) SPIS Synchronization Busy  Reset Value */

#define SERCOM_SPIS_SYNCBUSY_SWRST_Pos      0                                              /**< (SERCOM_SPIS_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_SPIS_SYNCBUSY_SWRST_Msk      (_U_(0x1) << SERCOM_SPIS_SYNCBUSY_SWRST_Pos)   /**< (SERCOM_SPIS_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_SPIS_SYNCBUSY_SWRST          SERCOM_SPIS_SYNCBUSY_SWRST_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_SYNCBUSY_SWRST_Msk instead */
#define SERCOM_SPIS_SYNCBUSY_ENABLE_Pos     1                                              /**< (SERCOM_SPIS_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_SPIS_SYNCBUSY_ENABLE_Msk     (_U_(0x1) << SERCOM_SPIS_SYNCBUSY_ENABLE_Pos)  /**< (SERCOM_SPIS_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_SPIS_SYNCBUSY_ENABLE         SERCOM_SPIS_SYNCBUSY_ENABLE_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_SYNCBUSY_ENABLE_Msk instead */
#define SERCOM_SPIS_SYNCBUSY_CTRLB_Pos      2                                              /**< (SERCOM_SPIS_SYNCBUSY) CTRLB Synchronization Busy Position */
#define SERCOM_SPIS_SYNCBUSY_CTRLB_Msk      (_U_(0x1) << SERCOM_SPIS_SYNCBUSY_CTRLB_Pos)   /**< (SERCOM_SPIS_SYNCBUSY) CTRLB Synchronization Busy Mask */
#define SERCOM_SPIS_SYNCBUSY_CTRLB          SERCOM_SPIS_SYNCBUSY_CTRLB_Msk                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_SYNCBUSY_CTRLB_Msk instead */
#define SERCOM_SPIS_SYNCBUSY_MASK           _U_(0x07)                                      /**< \deprecated (SERCOM_SPIS_SYNCBUSY) Register MASK  (Use SERCOM_SPIS_SYNCBUSY_Msk instead)  */
#define SERCOM_SPIS_SYNCBUSY_Msk            _U_(0x07)                                      /**< (SERCOM_SPIS_SYNCBUSY) Register Mask  */


/* -------- SERCOM_USART_EXT_SYNCBUSY : (SERCOM Offset: 0x1c) (R/ 32) USART_EXT Synchronization Busy -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset Synchronization Busy      */
    uint32_t ENABLE:1;                  /**< bit:      1  SERCOM Enable Synchronization Busy       */
    uint32_t CTRLB:1;                   /**< bit:      2  CTRLB Synchronization Busy               */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_USART_EXT_SYNCBUSY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_EXT_SYNCBUSY_OFFSET    (0x1C)                                        /**<  (SERCOM_USART_EXT_SYNCBUSY) USART_EXT Synchronization Busy  Offset */
#define SERCOM_USART_EXT_SYNCBUSY_RESETVALUE _U_(0x00)                                     /**<  (SERCOM_USART_EXT_SYNCBUSY) USART_EXT Synchronization Busy  Reset Value */

#define SERCOM_USART_EXT_SYNCBUSY_SWRST_Pos 0                                              /**< (SERCOM_USART_EXT_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_USART_EXT_SYNCBUSY_SWRST_Msk (_U_(0x1) << SERCOM_USART_EXT_SYNCBUSY_SWRST_Pos)  /**< (SERCOM_USART_EXT_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_USART_EXT_SYNCBUSY_SWRST     SERCOM_USART_EXT_SYNCBUSY_SWRST_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_SYNCBUSY_SWRST_Msk instead */
#define SERCOM_USART_EXT_SYNCBUSY_ENABLE_Pos 1                                              /**< (SERCOM_USART_EXT_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_USART_EXT_SYNCBUSY_ENABLE_Msk (_U_(0x1) << SERCOM_USART_EXT_SYNCBUSY_ENABLE_Pos)  /**< (SERCOM_USART_EXT_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_USART_EXT_SYNCBUSY_ENABLE    SERCOM_USART_EXT_SYNCBUSY_ENABLE_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_SYNCBUSY_ENABLE_Msk instead */
#define SERCOM_USART_EXT_SYNCBUSY_CTRLB_Pos 2                                              /**< (SERCOM_USART_EXT_SYNCBUSY) CTRLB Synchronization Busy Position */
#define SERCOM_USART_EXT_SYNCBUSY_CTRLB_Msk (_U_(0x1) << SERCOM_USART_EXT_SYNCBUSY_CTRLB_Pos)  /**< (SERCOM_USART_EXT_SYNCBUSY) CTRLB Synchronization Busy Mask */
#define SERCOM_USART_EXT_SYNCBUSY_CTRLB     SERCOM_USART_EXT_SYNCBUSY_CTRLB_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_SYNCBUSY_CTRLB_Msk instead */
#define SERCOM_USART_EXT_SYNCBUSY_MASK      _U_(0x07)                                      /**< \deprecated (SERCOM_USART_EXT_SYNCBUSY) Register MASK  (Use SERCOM_USART_EXT_SYNCBUSY_Msk instead)  */
#define SERCOM_USART_EXT_SYNCBUSY_Msk       _U_(0x07)                                      /**< (SERCOM_USART_EXT_SYNCBUSY) Register Mask  */


/* -------- SERCOM_USART_INT_SYNCBUSY : (SERCOM Offset: 0x1c) (R/ 32) USART_INT Synchronization Busy -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SWRST:1;                   /**< bit:      0  Software Reset Synchronization Busy      */
    uint32_t ENABLE:1;                  /**< bit:      1  SERCOM Enable Synchronization Busy       */
    uint32_t CTRLB:1;                   /**< bit:      2  CTRLB Synchronization Busy               */
    uint32_t :29;                       /**< bit:  3..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_USART_INT_SYNCBUSY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_INT_SYNCBUSY_OFFSET    (0x1C)                                        /**<  (SERCOM_USART_INT_SYNCBUSY) USART_INT Synchronization Busy  Offset */
#define SERCOM_USART_INT_SYNCBUSY_RESETVALUE _U_(0x00)                                     /**<  (SERCOM_USART_INT_SYNCBUSY) USART_INT Synchronization Busy  Reset Value */

#define SERCOM_USART_INT_SYNCBUSY_SWRST_Pos 0                                              /**< (SERCOM_USART_INT_SYNCBUSY) Software Reset Synchronization Busy Position */
#define SERCOM_USART_INT_SYNCBUSY_SWRST_Msk (_U_(0x1) << SERCOM_USART_INT_SYNCBUSY_SWRST_Pos)  /**< (SERCOM_USART_INT_SYNCBUSY) Software Reset Synchronization Busy Mask */
#define SERCOM_USART_INT_SYNCBUSY_SWRST     SERCOM_USART_INT_SYNCBUSY_SWRST_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_SYNCBUSY_SWRST_Msk instead */
#define SERCOM_USART_INT_SYNCBUSY_ENABLE_Pos 1                                              /**< (SERCOM_USART_INT_SYNCBUSY) SERCOM Enable Synchronization Busy Position */
#define SERCOM_USART_INT_SYNCBUSY_ENABLE_Msk (_U_(0x1) << SERCOM_USART_INT_SYNCBUSY_ENABLE_Pos)  /**< (SERCOM_USART_INT_SYNCBUSY) SERCOM Enable Synchronization Busy Mask */
#define SERCOM_USART_INT_SYNCBUSY_ENABLE    SERCOM_USART_INT_SYNCBUSY_ENABLE_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_SYNCBUSY_ENABLE_Msk instead */
#define SERCOM_USART_INT_SYNCBUSY_CTRLB_Pos 2                                              /**< (SERCOM_USART_INT_SYNCBUSY) CTRLB Synchronization Busy Position */
#define SERCOM_USART_INT_SYNCBUSY_CTRLB_Msk (_U_(0x1) << SERCOM_USART_INT_SYNCBUSY_CTRLB_Pos)  /**< (SERCOM_USART_INT_SYNCBUSY) CTRLB Synchronization Busy Mask */
#define SERCOM_USART_INT_SYNCBUSY_CTRLB     SERCOM_USART_INT_SYNCBUSY_CTRLB_Msk            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_SYNCBUSY_CTRLB_Msk instead */
#define SERCOM_USART_INT_SYNCBUSY_MASK      _U_(0x07)                                      /**< \deprecated (SERCOM_USART_INT_SYNCBUSY) Register MASK  (Use SERCOM_USART_INT_SYNCBUSY_Msk instead)  */
#define SERCOM_USART_INT_SYNCBUSY_Msk       _U_(0x07)                                      /**< (SERCOM_USART_INT_SYNCBUSY) Register Mask  */


/* -------- SERCOM_I2CM_ADDR : (SERCOM Offset: 0x24) (R/W 32) I2CM Address -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR:11;                   /**< bit:  0..10  Address Value                            */
    uint32_t :2;                        /**< bit: 11..12  Reserved */
    uint32_t LENEN:1;                   /**< bit:     13  Length Enable                            */
    uint32_t HS:1;                      /**< bit:     14  High Speed Mode                          */
    uint32_t TENBITEN:1;                /**< bit:     15  Ten Bit Addressing Enable                */
    uint32_t LEN:8;                     /**< bit: 16..23  Length                                   */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_I2CM_ADDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_ADDR_OFFSET             (0x24)                                        /**<  (SERCOM_I2CM_ADDR) I2CM Address  Offset */
#define SERCOM_I2CM_ADDR_RESETVALUE         _U_(0x00)                                     /**<  (SERCOM_I2CM_ADDR) I2CM Address  Reset Value */

#define SERCOM_I2CM_ADDR_ADDR_Pos           0                                              /**< (SERCOM_I2CM_ADDR) Address Value Position */
#define SERCOM_I2CM_ADDR_ADDR_Msk           (_U_(0x7FF) << SERCOM_I2CM_ADDR_ADDR_Pos)      /**< (SERCOM_I2CM_ADDR) Address Value Mask */
#define SERCOM_I2CM_ADDR_ADDR(value)        (SERCOM_I2CM_ADDR_ADDR_Msk & ((value) << SERCOM_I2CM_ADDR_ADDR_Pos))
#define SERCOM_I2CM_ADDR_LENEN_Pos          13                                             /**< (SERCOM_I2CM_ADDR) Length Enable Position */
#define SERCOM_I2CM_ADDR_LENEN_Msk          (_U_(0x1) << SERCOM_I2CM_ADDR_LENEN_Pos)       /**< (SERCOM_I2CM_ADDR) Length Enable Mask */
#define SERCOM_I2CM_ADDR_LENEN              SERCOM_I2CM_ADDR_LENEN_Msk                     /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_ADDR_LENEN_Msk instead */
#define SERCOM_I2CM_ADDR_HS_Pos             14                                             /**< (SERCOM_I2CM_ADDR) High Speed Mode Position */
#define SERCOM_I2CM_ADDR_HS_Msk             (_U_(0x1) << SERCOM_I2CM_ADDR_HS_Pos)          /**< (SERCOM_I2CM_ADDR) High Speed Mode Mask */
#define SERCOM_I2CM_ADDR_HS                 SERCOM_I2CM_ADDR_HS_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_ADDR_HS_Msk instead */
#define SERCOM_I2CM_ADDR_TENBITEN_Pos       15                                             /**< (SERCOM_I2CM_ADDR) Ten Bit Addressing Enable Position */
#define SERCOM_I2CM_ADDR_TENBITEN_Msk       (_U_(0x1) << SERCOM_I2CM_ADDR_TENBITEN_Pos)    /**< (SERCOM_I2CM_ADDR) Ten Bit Addressing Enable Mask */
#define SERCOM_I2CM_ADDR_TENBITEN           SERCOM_I2CM_ADDR_TENBITEN_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_ADDR_TENBITEN_Msk instead */
#define SERCOM_I2CM_ADDR_LEN_Pos            16                                             /**< (SERCOM_I2CM_ADDR) Length Position */
#define SERCOM_I2CM_ADDR_LEN_Msk            (_U_(0xFF) << SERCOM_I2CM_ADDR_LEN_Pos)        /**< (SERCOM_I2CM_ADDR) Length Mask */
#define SERCOM_I2CM_ADDR_LEN(value)         (SERCOM_I2CM_ADDR_LEN_Msk & ((value) << SERCOM_I2CM_ADDR_LEN_Pos))
#define SERCOM_I2CM_ADDR_MASK               _U_(0xFFE7FF)                                  /**< \deprecated (SERCOM_I2CM_ADDR) Register MASK  (Use SERCOM_I2CM_ADDR_Msk instead)  */
#define SERCOM_I2CM_ADDR_Msk                _U_(0xFFE7FF)                                  /**< (SERCOM_I2CM_ADDR) Register Mask  */


/* -------- SERCOM_I2CS_ADDR : (SERCOM Offset: 0x24) (R/W 32) I2CS Address -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t GENCEN:1;                  /**< bit:      0  General Call Address Enable              */
    uint32_t ADDR:10;                   /**< bit:  1..10  Address Value                            */
    uint32_t :4;                        /**< bit: 11..14  Reserved */
    uint32_t TENBITEN:1;                /**< bit:     15  Ten Bit Addressing Enable                */
    uint32_t :1;                        /**< bit:     16  Reserved */
    uint32_t ADDRMASK:10;               /**< bit: 17..26  Address Mask                             */
    uint32_t :5;                        /**< bit: 27..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_I2CS_ADDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_ADDR_OFFSET             (0x24)                                        /**<  (SERCOM_I2CS_ADDR) I2CS Address  Offset */
#define SERCOM_I2CS_ADDR_RESETVALUE         _U_(0x00)                                     /**<  (SERCOM_I2CS_ADDR) I2CS Address  Reset Value */

#define SERCOM_I2CS_ADDR_GENCEN_Pos         0                                              /**< (SERCOM_I2CS_ADDR) General Call Address Enable Position */
#define SERCOM_I2CS_ADDR_GENCEN_Msk         (_U_(0x1) << SERCOM_I2CS_ADDR_GENCEN_Pos)      /**< (SERCOM_I2CS_ADDR) General Call Address Enable Mask */
#define SERCOM_I2CS_ADDR_GENCEN             SERCOM_I2CS_ADDR_GENCEN_Msk                    /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_ADDR_GENCEN_Msk instead */
#define SERCOM_I2CS_ADDR_ADDR_Pos           1                                              /**< (SERCOM_I2CS_ADDR) Address Value Position */
#define SERCOM_I2CS_ADDR_ADDR_Msk           (_U_(0x3FF) << SERCOM_I2CS_ADDR_ADDR_Pos)      /**< (SERCOM_I2CS_ADDR) Address Value Mask */
#define SERCOM_I2CS_ADDR_ADDR(value)        (SERCOM_I2CS_ADDR_ADDR_Msk & ((value) << SERCOM_I2CS_ADDR_ADDR_Pos))
#define SERCOM_I2CS_ADDR_TENBITEN_Pos       15                                             /**< (SERCOM_I2CS_ADDR) Ten Bit Addressing Enable Position */
#define SERCOM_I2CS_ADDR_TENBITEN_Msk       (_U_(0x1) << SERCOM_I2CS_ADDR_TENBITEN_Pos)    /**< (SERCOM_I2CS_ADDR) Ten Bit Addressing Enable Mask */
#define SERCOM_I2CS_ADDR_TENBITEN           SERCOM_I2CS_ADDR_TENBITEN_Msk                  /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CS_ADDR_TENBITEN_Msk instead */
#define SERCOM_I2CS_ADDR_ADDRMASK_Pos       17                                             /**< (SERCOM_I2CS_ADDR) Address Mask Position */
#define SERCOM_I2CS_ADDR_ADDRMASK_Msk       (_U_(0x3FF) << SERCOM_I2CS_ADDR_ADDRMASK_Pos)  /**< (SERCOM_I2CS_ADDR) Address Mask Mask */
#define SERCOM_I2CS_ADDR_ADDRMASK(value)    (SERCOM_I2CS_ADDR_ADDRMASK_Msk & ((value) << SERCOM_I2CS_ADDR_ADDRMASK_Pos))
#define SERCOM_I2CS_ADDR_Msk                _U_(0x7FE87FF)                                 /**< (SERCOM_I2CS_ADDR) Register Mask  */


/* -------- SERCOM_SPIM_ADDR : (SERCOM Offset: 0x24) (R/W 32) SPIM Address -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR:8;                    /**< bit:   0..7  Address Value                            */
    uint32_t :8;                        /**< bit:  8..15  Reserved */
    uint32_t ADDRMASK:8;                /**< bit: 16..23  Address Mask                             */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_SPIM_ADDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIM_ADDR_OFFSET             (0x24)                                        /**<  (SERCOM_SPIM_ADDR) SPIM Address  Offset */
#define SERCOM_SPIM_ADDR_RESETVALUE         _U_(0x00)                                     /**<  (SERCOM_SPIM_ADDR) SPIM Address  Reset Value */

#define SERCOM_SPIM_ADDR_ADDR_Pos           0                                              /**< (SERCOM_SPIM_ADDR) Address Value Position */
#define SERCOM_SPIM_ADDR_ADDR_Msk           (_U_(0xFF) << SERCOM_SPIM_ADDR_ADDR_Pos)       /**< (SERCOM_SPIM_ADDR) Address Value Mask */
#define SERCOM_SPIM_ADDR_ADDR(value)        (SERCOM_SPIM_ADDR_ADDR_Msk & ((value) << SERCOM_SPIM_ADDR_ADDR_Pos))
#define SERCOM_SPIM_ADDR_ADDRMASK_Pos       16                                             /**< (SERCOM_SPIM_ADDR) Address Mask Position */
#define SERCOM_SPIM_ADDR_ADDRMASK_Msk       (_U_(0xFF) << SERCOM_SPIM_ADDR_ADDRMASK_Pos)   /**< (SERCOM_SPIM_ADDR) Address Mask Mask */
#define SERCOM_SPIM_ADDR_ADDRMASK(value)    (SERCOM_SPIM_ADDR_ADDRMASK_Msk & ((value) << SERCOM_SPIM_ADDR_ADDRMASK_Pos))
#define SERCOM_SPIM_ADDR_Msk                _U_(0xFF00FF)                                  /**< (SERCOM_SPIM_ADDR) Register Mask  */


/* -------- SERCOM_SPIS_ADDR : (SERCOM Offset: 0x24) (R/W 32) SPIS Address -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR:8;                    /**< bit:   0..7  Address Value                            */
    uint32_t :8;                        /**< bit:  8..15  Reserved */
    uint32_t ADDRMASK:8;                /**< bit: 16..23  Address Mask                             */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_SPIS_ADDR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIS_ADDR_OFFSET             (0x24)                                        /**<  (SERCOM_SPIS_ADDR) SPIS Address  Offset */
#define SERCOM_SPIS_ADDR_RESETVALUE         _U_(0x00)                                     /**<  (SERCOM_SPIS_ADDR) SPIS Address  Reset Value */

#define SERCOM_SPIS_ADDR_ADDR_Pos           0                                              /**< (SERCOM_SPIS_ADDR) Address Value Position */
#define SERCOM_SPIS_ADDR_ADDR_Msk           (_U_(0xFF) << SERCOM_SPIS_ADDR_ADDR_Pos)       /**< (SERCOM_SPIS_ADDR) Address Value Mask */
#define SERCOM_SPIS_ADDR_ADDR(value)        (SERCOM_SPIS_ADDR_ADDR_Msk & ((value) << SERCOM_SPIS_ADDR_ADDR_Pos))
#define SERCOM_SPIS_ADDR_ADDRMASK_Pos       16                                             /**< (SERCOM_SPIS_ADDR) Address Mask Position */
#define SERCOM_SPIS_ADDR_ADDRMASK_Msk       (_U_(0xFF) << SERCOM_SPIS_ADDR_ADDRMASK_Pos)   /**< (SERCOM_SPIS_ADDR) Address Mask Mask */
#define SERCOM_SPIS_ADDR_ADDRMASK(value)    (SERCOM_SPIS_ADDR_ADDRMASK_Msk & ((value) << SERCOM_SPIS_ADDR_ADDRMASK_Pos))
#define SERCOM_SPIS_ADDR_Msk                _U_(0xFF00FF)                                  /**< (SERCOM_SPIS_ADDR) Register Mask  */


/* -------- SERCOM_I2CM_DATA : (SERCOM Offset: 0x28) (R/W 8) I2CM Data -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DATA:8;                    /**< bit:   0..7  Data Value                               */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_I2CM_DATA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_DATA_OFFSET             (0x28)                                        /**<  (SERCOM_I2CM_DATA) I2CM Data  Offset */
#define SERCOM_I2CM_DATA_RESETVALUE         _U_(0x00)                                     /**<  (SERCOM_I2CM_DATA) I2CM Data  Reset Value */

#define SERCOM_I2CM_DATA_DATA_Pos           0                                              /**< (SERCOM_I2CM_DATA) Data Value Position */
#define SERCOM_I2CM_DATA_DATA_Msk           (_U_(0xFF) << SERCOM_I2CM_DATA_DATA_Pos)       /**< (SERCOM_I2CM_DATA) Data Value Mask */
#define SERCOM_I2CM_DATA_DATA(value)        (SERCOM_I2CM_DATA_DATA_Msk & ((value) << SERCOM_I2CM_DATA_DATA_Pos))
#define SERCOM_I2CM_DATA_MASK               _U_(0xFF)                                      /**< \deprecated (SERCOM_I2CM_DATA) Register MASK  (Use SERCOM_I2CM_DATA_Msk instead)  */
#define SERCOM_I2CM_DATA_Msk                _U_(0xFF)                                      /**< (SERCOM_I2CM_DATA) Register Mask  */


/* -------- SERCOM_I2CS_DATA : (SERCOM Offset: 0x28) (R/W 8) I2CS Data -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DATA:8;                    /**< bit:   0..7  Data Value                               */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_I2CS_DATA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CS_DATA_OFFSET             (0x28)                                        /**<  (SERCOM_I2CS_DATA) I2CS Data  Offset */
#define SERCOM_I2CS_DATA_RESETVALUE         _U_(0x00)                                     /**<  (SERCOM_I2CS_DATA) I2CS Data  Reset Value */

#define SERCOM_I2CS_DATA_DATA_Pos           0                                              /**< (SERCOM_I2CS_DATA) Data Value Position */
#define SERCOM_I2CS_DATA_DATA_Msk           (_U_(0xFF) << SERCOM_I2CS_DATA_DATA_Pos)       /**< (SERCOM_I2CS_DATA) Data Value Mask */
#define SERCOM_I2CS_DATA_DATA(value)        (SERCOM_I2CS_DATA_DATA_Msk & ((value) << SERCOM_I2CS_DATA_DATA_Pos))
#define SERCOM_I2CS_DATA_MASK               _U_(0xFF)                                      /**< \deprecated (SERCOM_I2CS_DATA) Register MASK  (Use SERCOM_I2CS_DATA_Msk instead)  */
#define SERCOM_I2CS_DATA_Msk                _U_(0xFF)                                      /**< (SERCOM_I2CS_DATA) Register Mask  */


/* -------- SERCOM_SPIM_DATA : (SERCOM Offset: 0x28) (R/W 32) SPIM Data -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATA:9;                    /**< bit:   0..8  Data Value                               */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_SPIM_DATA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIM_DATA_OFFSET             (0x28)                                        /**<  (SERCOM_SPIM_DATA) SPIM Data  Offset */
#define SERCOM_SPIM_DATA_RESETVALUE         _U_(0x00)                                     /**<  (SERCOM_SPIM_DATA) SPIM Data  Reset Value */

#define SERCOM_SPIM_DATA_DATA_Pos           0                                              /**< (SERCOM_SPIM_DATA) Data Value Position */
#define SERCOM_SPIM_DATA_DATA_Msk           (_U_(0x1FF) << SERCOM_SPIM_DATA_DATA_Pos)      /**< (SERCOM_SPIM_DATA) Data Value Mask */
#define SERCOM_SPIM_DATA_DATA(value)        (SERCOM_SPIM_DATA_DATA_Msk & ((value) << SERCOM_SPIM_DATA_DATA_Pos))
#define SERCOM_SPIM_DATA_MASK               _U_(0x1FF)                                     /**< \deprecated (SERCOM_SPIM_DATA) Register MASK  (Use SERCOM_SPIM_DATA_Msk instead)  */
#define SERCOM_SPIM_DATA_Msk                _U_(0x1FF)                                     /**< (SERCOM_SPIM_DATA) Register Mask  */


/* -------- SERCOM_SPIS_DATA : (SERCOM Offset: 0x28) (R/W 32) SPIS Data -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATA:9;                    /**< bit:   0..8  Data Value                               */
    uint32_t :23;                       /**< bit:  9..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SERCOM_SPIS_DATA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIS_DATA_OFFSET             (0x28)                                        /**<  (SERCOM_SPIS_DATA) SPIS Data  Offset */
#define SERCOM_SPIS_DATA_RESETVALUE         _U_(0x00)                                     /**<  (SERCOM_SPIS_DATA) SPIS Data  Reset Value */

#define SERCOM_SPIS_DATA_DATA_Pos           0                                              /**< (SERCOM_SPIS_DATA) Data Value Position */
#define SERCOM_SPIS_DATA_DATA_Msk           (_U_(0x1FF) << SERCOM_SPIS_DATA_DATA_Pos)      /**< (SERCOM_SPIS_DATA) Data Value Mask */
#define SERCOM_SPIS_DATA_DATA(value)        (SERCOM_SPIS_DATA_DATA_Msk & ((value) << SERCOM_SPIS_DATA_DATA_Pos))
#define SERCOM_SPIS_DATA_MASK               _U_(0x1FF)                                     /**< \deprecated (SERCOM_SPIS_DATA) Register MASK  (Use SERCOM_SPIS_DATA_Msk instead)  */
#define SERCOM_SPIS_DATA_Msk                _U_(0x1FF)                                     /**< (SERCOM_SPIS_DATA) Register Mask  */


/* -------- SERCOM_USART_EXT_DATA : (SERCOM Offset: 0x28) (R/W 16) USART_EXT Data -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t DATA:9;                    /**< bit:   0..8  Data Value                               */
    uint16_t :7;                        /**< bit:  9..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SERCOM_USART_EXT_DATA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_EXT_DATA_OFFSET        (0x28)                                        /**<  (SERCOM_USART_EXT_DATA) USART_EXT Data  Offset */
#define SERCOM_USART_EXT_DATA_RESETVALUE    _U_(0x00)                                     /**<  (SERCOM_USART_EXT_DATA) USART_EXT Data  Reset Value */

#define SERCOM_USART_EXT_DATA_DATA_Pos      0                                              /**< (SERCOM_USART_EXT_DATA) Data Value Position */
#define SERCOM_USART_EXT_DATA_DATA_Msk      (_U_(0x1FF) << SERCOM_USART_EXT_DATA_DATA_Pos)  /**< (SERCOM_USART_EXT_DATA) Data Value Mask */
#define SERCOM_USART_EXT_DATA_DATA(value)   (SERCOM_USART_EXT_DATA_DATA_Msk & ((value) << SERCOM_USART_EXT_DATA_DATA_Pos))
#define SERCOM_USART_EXT_DATA_MASK          _U_(0x1FF)                                     /**< \deprecated (SERCOM_USART_EXT_DATA) Register MASK  (Use SERCOM_USART_EXT_DATA_Msk instead)  */
#define SERCOM_USART_EXT_DATA_Msk           _U_(0x1FF)                                     /**< (SERCOM_USART_EXT_DATA) Register Mask  */


/* -------- SERCOM_USART_INT_DATA : (SERCOM Offset: 0x28) (R/W 16) USART_INT Data -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t DATA:9;                    /**< bit:   0..8  Data Value                               */
    uint16_t :7;                        /**< bit:  9..15  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint16_t reg;                         /**< Type used for register access */
} SERCOM_USART_INT_DATA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_INT_DATA_OFFSET        (0x28)                                        /**<  (SERCOM_USART_INT_DATA) USART_INT Data  Offset */
#define SERCOM_USART_INT_DATA_RESETVALUE    _U_(0x00)                                     /**<  (SERCOM_USART_INT_DATA) USART_INT Data  Reset Value */

#define SERCOM_USART_INT_DATA_DATA_Pos      0                                              /**< (SERCOM_USART_INT_DATA) Data Value Position */
#define SERCOM_USART_INT_DATA_DATA_Msk      (_U_(0x1FF) << SERCOM_USART_INT_DATA_DATA_Pos)  /**< (SERCOM_USART_INT_DATA) Data Value Mask */
#define SERCOM_USART_INT_DATA_DATA(value)   (SERCOM_USART_INT_DATA_DATA_Msk & ((value) << SERCOM_USART_INT_DATA_DATA_Pos))
#define SERCOM_USART_INT_DATA_MASK          _U_(0x1FF)                                     /**< \deprecated (SERCOM_USART_INT_DATA) Register MASK  (Use SERCOM_USART_INT_DATA_Msk instead)  */
#define SERCOM_USART_INT_DATA_Msk           _U_(0x1FF)                                     /**< (SERCOM_USART_INT_DATA) Register Mask  */


/* -------- SERCOM_I2CM_DBGCTRL : (SERCOM Offset: 0x30) (R/W 8) I2CM Debug Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DBGSTOP:1;                 /**< bit:      0  Debug Mode                               */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_I2CM_DBGCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_I2CM_DBGCTRL_OFFSET          (0x30)                                        /**<  (SERCOM_I2CM_DBGCTRL) I2CM Debug Control  Offset */
#define SERCOM_I2CM_DBGCTRL_RESETVALUE      _U_(0x00)                                     /**<  (SERCOM_I2CM_DBGCTRL) I2CM Debug Control  Reset Value */

#define SERCOM_I2CM_DBGCTRL_DBGSTOP_Pos     0                                              /**< (SERCOM_I2CM_DBGCTRL) Debug Mode Position */
#define SERCOM_I2CM_DBGCTRL_DBGSTOP_Msk     (_U_(0x1) << SERCOM_I2CM_DBGCTRL_DBGSTOP_Pos)  /**< (SERCOM_I2CM_DBGCTRL) Debug Mode Mask */
#define SERCOM_I2CM_DBGCTRL_DBGSTOP         SERCOM_I2CM_DBGCTRL_DBGSTOP_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_I2CM_DBGCTRL_DBGSTOP_Msk instead */
#define SERCOM_I2CM_DBGCTRL_MASK            _U_(0x01)                                      /**< \deprecated (SERCOM_I2CM_DBGCTRL) Register MASK  (Use SERCOM_I2CM_DBGCTRL_Msk instead)  */
#define SERCOM_I2CM_DBGCTRL_Msk             _U_(0x01)                                      /**< (SERCOM_I2CM_DBGCTRL) Register Mask  */


/* -------- SERCOM_SPIM_DBGCTRL : (SERCOM Offset: 0x30) (R/W 8) SPIM Debug Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DBGSTOP:1;                 /**< bit:      0  Debug Mode                               */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_SPIM_DBGCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIM_DBGCTRL_OFFSET          (0x30)                                        /**<  (SERCOM_SPIM_DBGCTRL) SPIM Debug Control  Offset */
#define SERCOM_SPIM_DBGCTRL_RESETVALUE      _U_(0x00)                                     /**<  (SERCOM_SPIM_DBGCTRL) SPIM Debug Control  Reset Value */

#define SERCOM_SPIM_DBGCTRL_DBGSTOP_Pos     0                                              /**< (SERCOM_SPIM_DBGCTRL) Debug Mode Position */
#define SERCOM_SPIM_DBGCTRL_DBGSTOP_Msk     (_U_(0x1) << SERCOM_SPIM_DBGCTRL_DBGSTOP_Pos)  /**< (SERCOM_SPIM_DBGCTRL) Debug Mode Mask */
#define SERCOM_SPIM_DBGCTRL_DBGSTOP         SERCOM_SPIM_DBGCTRL_DBGSTOP_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIM_DBGCTRL_DBGSTOP_Msk instead */
#define SERCOM_SPIM_DBGCTRL_MASK            _U_(0x01)                                      /**< \deprecated (SERCOM_SPIM_DBGCTRL) Register MASK  (Use SERCOM_SPIM_DBGCTRL_Msk instead)  */
#define SERCOM_SPIM_DBGCTRL_Msk             _U_(0x01)                                      /**< (SERCOM_SPIM_DBGCTRL) Register Mask  */


/* -------- SERCOM_SPIS_DBGCTRL : (SERCOM Offset: 0x30) (R/W 8) SPIS Debug Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DBGSTOP:1;                 /**< bit:      0  Debug Mode                               */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_SPIS_DBGCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_SPIS_DBGCTRL_OFFSET          (0x30)                                        /**<  (SERCOM_SPIS_DBGCTRL) SPIS Debug Control  Offset */
#define SERCOM_SPIS_DBGCTRL_RESETVALUE      _U_(0x00)                                     /**<  (SERCOM_SPIS_DBGCTRL) SPIS Debug Control  Reset Value */

#define SERCOM_SPIS_DBGCTRL_DBGSTOP_Pos     0                                              /**< (SERCOM_SPIS_DBGCTRL) Debug Mode Position */
#define SERCOM_SPIS_DBGCTRL_DBGSTOP_Msk     (_U_(0x1) << SERCOM_SPIS_DBGCTRL_DBGSTOP_Pos)  /**< (SERCOM_SPIS_DBGCTRL) Debug Mode Mask */
#define SERCOM_SPIS_DBGCTRL_DBGSTOP         SERCOM_SPIS_DBGCTRL_DBGSTOP_Msk                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_SPIS_DBGCTRL_DBGSTOP_Msk instead */
#define SERCOM_SPIS_DBGCTRL_MASK            _U_(0x01)                                      /**< \deprecated (SERCOM_SPIS_DBGCTRL) Register MASK  (Use SERCOM_SPIS_DBGCTRL_Msk instead)  */
#define SERCOM_SPIS_DBGCTRL_Msk             _U_(0x01)                                      /**< (SERCOM_SPIS_DBGCTRL) Register Mask  */


/* -------- SERCOM_USART_EXT_DBGCTRL : (SERCOM Offset: 0x30) (R/W 8) USART_EXT Debug Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DBGSTOP:1;                 /**< bit:      0  Debug Mode                               */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_USART_EXT_DBGCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_EXT_DBGCTRL_OFFSET     (0x30)                                        /**<  (SERCOM_USART_EXT_DBGCTRL) USART_EXT Debug Control  Offset */
#define SERCOM_USART_EXT_DBGCTRL_RESETVALUE _U_(0x00)                                     /**<  (SERCOM_USART_EXT_DBGCTRL) USART_EXT Debug Control  Reset Value */

#define SERCOM_USART_EXT_DBGCTRL_DBGSTOP_Pos 0                                              /**< (SERCOM_USART_EXT_DBGCTRL) Debug Mode Position */
#define SERCOM_USART_EXT_DBGCTRL_DBGSTOP_Msk (_U_(0x1) << SERCOM_USART_EXT_DBGCTRL_DBGSTOP_Pos)  /**< (SERCOM_USART_EXT_DBGCTRL) Debug Mode Mask */
#define SERCOM_USART_EXT_DBGCTRL_DBGSTOP    SERCOM_USART_EXT_DBGCTRL_DBGSTOP_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_EXT_DBGCTRL_DBGSTOP_Msk instead */
#define SERCOM_USART_EXT_DBGCTRL_MASK       _U_(0x01)                                      /**< \deprecated (SERCOM_USART_EXT_DBGCTRL) Register MASK  (Use SERCOM_USART_EXT_DBGCTRL_Msk instead)  */
#define SERCOM_USART_EXT_DBGCTRL_Msk        _U_(0x01)                                      /**< (SERCOM_USART_EXT_DBGCTRL) Register Mask  */


/* -------- SERCOM_USART_INT_DBGCTRL : (SERCOM Offset: 0x30) (R/W 8) USART_INT Debug Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DBGSTOP:1;                 /**< bit:      0  Debug Mode                               */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} SERCOM_USART_INT_DBGCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SERCOM_USART_INT_DBGCTRL_OFFSET     (0x30)                                        /**<  (SERCOM_USART_INT_DBGCTRL) USART_INT Debug Control  Offset */
#define SERCOM_USART_INT_DBGCTRL_RESETVALUE _U_(0x00)                                     /**<  (SERCOM_USART_INT_DBGCTRL) USART_INT Debug Control  Reset Value */

#define SERCOM_USART_INT_DBGCTRL_DBGSTOP_Pos 0                                              /**< (SERCOM_USART_INT_DBGCTRL) Debug Mode Position */
#define SERCOM_USART_INT_DBGCTRL_DBGSTOP_Msk (_U_(0x1) << SERCOM_USART_INT_DBGCTRL_DBGSTOP_Pos)  /**< (SERCOM_USART_INT_DBGCTRL) Debug Mode Mask */
#define SERCOM_USART_INT_DBGCTRL_DBGSTOP    SERCOM_USART_INT_DBGCTRL_DBGSTOP_Msk           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SERCOM_USART_INT_DBGCTRL_DBGSTOP_Msk instead */
#define SERCOM_USART_INT_DBGCTRL_MASK       _U_(0x01)                                      /**< \deprecated (SERCOM_USART_INT_DBGCTRL) Register MASK  (Use SERCOM_USART_INT_DBGCTRL_Msk instead)  */
#define SERCOM_USART_INT_DBGCTRL_Msk        _U_(0x01)                                      /**< (SERCOM_USART_INT_DBGCTRL) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief SERCOM hardware registers */
typedef struct {  /* Serial Communication Interface */
  __IO uint32_t CTRLA;          /**< (SERCOM Offset: 0x00) I2CM Control A */
  __IO uint32_t CTRLB;          /**< (SERCOM Offset: 0x04) I2CM Control B */
  __I  uint8_t                        Reserved1[4];
  __IO uint32_t BAUD;           /**< (SERCOM Offset: 0x0C) I2CM Baud Rate */
  __I  uint8_t                        Reserved2[4];
  __IO uint8_t INTENCLR;       /**< (SERCOM Offset: 0x14) I2CM Interrupt Enable Clear */
  __I  uint8_t                        Reserved3[1];
  __IO uint8_t INTENSET;       /**< (SERCOM Offset: 0x16) I2CM Interrupt Enable Set */
  __I  uint8_t                        Reserved4[1];
  __IO uint8_t INTFLAG;        /**< (SERCOM Offset: 0x18) I2CM Interrupt Flag Status and Clear */
  __I  uint8_t                        Reserved5[1];
  __IO uint16_t STATUS;         /**< (SERCOM Offset: 0x1A) I2CM Status */
  __I  uint32_t SYNCBUSY;       /**< (SERCOM Offset: 0x1C) I2CM Synchronization Busy */
  __I  uint8_t                        Reserved6[4];
  __IO uint32_t ADDR;           /**< (SERCOM Offset: 0x24) I2CM Address */
  __IO uint8_t DATA;           /**< (SERCOM Offset: 0x28) I2CM Data */
  __I  uint8_t                        Reserved7[7];
  __IO uint8_t DBGCTRL;        /**< (SERCOM Offset: 0x30) I2CM Debug Control */
} SercomI2cm;

/** \brief SERCOM hardware registers */
typedef struct {  /* Serial Communication Interface */
  __IO uint32_t CTRLA;          /**< (SERCOM Offset: 0x00) I2CS Control A */
  __IO uint32_t CTRLB;          /**< (SERCOM Offset: 0x04) I2CS Control B */
  __I  uint8_t                        Reserved1[12];
  __IO uint8_t INTENCLR;       /**< (SERCOM Offset: 0x14) I2CS Interrupt Enable Clear */
  __I  uint8_t                        Reserved2[1];
  __IO uint8_t INTENSET;       /**< (SERCOM Offset: 0x16) I2CS Interrupt Enable Set */
  __I  uint8_t                        Reserved3[1];
  __IO uint8_t INTFLAG;        /**< (SERCOM Offset: 0x18) I2CS Interrupt Flag Status and Clear */
  __I  uint8_t                        Reserved4[1];
  __IO uint16_t STATUS;         /**< (SERCOM Offset: 0x1A) I2CS Status */
  __I  uint32_t SYNCBUSY;       /**< (SERCOM Offset: 0x1C) I2CS Synchronization Busy */
  __I  uint8_t                        Reserved5[4];
  __IO uint32_t ADDR;           /**< (SERCOM Offset: 0x24) I2CS Address */
  __IO uint8_t DATA;           /**< (SERCOM Offset: 0x28) I2CS Data */
} SercomI2cs;

/** \brief SERCOM hardware registers */
typedef struct {  /* Serial Communication Interface */
  __IO uint32_t CTRLA;          /**< (SERCOM Offset: 0x00) SPIS Control A */
  __IO uint32_t CTRLB;          /**< (SERCOM Offset: 0x04) SPIS Control B */
  __I  uint8_t                        Reserved1[4];
  __IO uint8_t BAUD;           /**< (SERCOM Offset: 0x0C) SPIS Baud Rate */
  __I  uint8_t                        Reserved2[7];
  __IO uint8_t INTENCLR;       /**< (SERCOM Offset: 0x14) SPIS Interrupt Enable Clear */
  __I  uint8_t                        Reserved3[1];
  __IO uint8_t INTENSET;       /**< (SERCOM Offset: 0x16) SPIS Interrupt Enable Set */
  __I  uint8_t                        Reserved4[1];
  __IO uint8_t INTFLAG;        /**< (SERCOM Offset: 0x18) SPIS Interrupt Flag Status and Clear */
  __I  uint8_t                        Reserved5[1];
  __IO uint16_t STATUS;         /**< (SERCOM Offset: 0x1A) SPIS Status */
  __I  uint32_t SYNCBUSY;       /**< (SERCOM Offset: 0x1C) SPIS Synchronization Busy */
  __I  uint8_t                        Reserved6[4];
  __IO uint32_t ADDR;           /**< (SERCOM Offset: 0x24) SPIS Address */
  __IO uint32_t DATA;           /**< (SERCOM Offset: 0x28) SPIS Data */
  __I  uint8_t                        Reserved7[4];
  __IO uint8_t DBGCTRL;        /**< (SERCOM Offset: 0x30) SPIS Debug Control */
} SercomSpis;

/** \brief SERCOM hardware registers */
typedef struct {  /* Serial Communication Interface */
  __IO uint32_t CTRLA;          /**< (SERCOM Offset: 0x00) SPIM Control A */
  __IO uint32_t CTRLB;          /**< (SERCOM Offset: 0x04) SPIM Control B */
  __I  uint8_t                        Reserved1[4];
  __IO uint8_t BAUD;           /**< (SERCOM Offset: 0x0C) SPIM Baud Rate */
  __I  uint8_t                        Reserved2[7];
  __IO uint8_t INTENCLR;       /**< (SERCOM Offset: 0x14) SPIM Interrupt Enable Clear */
  __I  uint8_t                        Reserved3[1];
  __IO uint8_t INTENSET;       /**< (SERCOM Offset: 0x16) SPIM Interrupt Enable Set */
  __I  uint8_t                        Reserved4[1];
  __IO uint8_t INTFLAG;        /**< (SERCOM Offset: 0x18) SPIM Interrupt Flag Status and Clear */
  __I  uint8_t                        Reserved5[1];
  __IO uint16_t STATUS;         /**< (SERCOM Offset: 0x1A) SPIM Status */
  __I  uint32_t SYNCBUSY;       /**< (SERCOM Offset: 0x1C) SPIM Synchronization Busy */
  __I  uint8_t                        Reserved6[4];
  __IO uint32_t ADDR;           /**< (SERCOM Offset: 0x24) SPIM Address */
  __IO uint32_t DATA;           /**< (SERCOM Offset: 0x28) SPIM Data */
  __I  uint8_t                        Reserved7[4];
  __IO uint8_t DBGCTRL;        /**< (SERCOM Offset: 0x30) SPIM Debug Control */
} SercomSpim;

/** \brief SERCOM hardware registers */
typedef struct {  /* Serial Communication Interface */
  __IO uint32_t CTRLA;          /**< (SERCOM Offset: 0x00) USART_EXT Control A */
  __IO uint32_t CTRLB;          /**< (SERCOM Offset: 0x04) USART_EXT Control B */
  __I  uint8_t                        Reserved1[4];
  __IO uint16_t BAUD;           /**< (SERCOM Offset: 0x0C) USART_EXT Baud Rate */
  __IO uint8_t RXPL;           /**< (SERCOM Offset: 0x0E) USART_EXT Receive Pulse Length */
  __I  uint8_t                        Reserved2[5];
  __IO uint8_t INTENCLR;       /**< (SERCOM Offset: 0x14) USART_EXT Interrupt Enable Clear */
  __I  uint8_t                        Reserved3[1];
  __IO uint8_t INTENSET;       /**< (SERCOM Offset: 0x16) USART_EXT Interrupt Enable Set */
  __I  uint8_t                        Reserved4[1];
  __IO uint8_t INTFLAG;        /**< (SERCOM Offset: 0x18) USART_EXT Interrupt Flag Status and Clear */
  __I  uint8_t                        Reserved5[1];
  __IO uint16_t STATUS;         /**< (SERCOM Offset: 0x1A) USART_EXT Status */
  __I  uint32_t SYNCBUSY;       /**< (SERCOM Offset: 0x1C) USART_EXT Synchronization Busy */
  __I  uint8_t                        Reserved6[8];
  __IO uint16_t DATA;           /**< (SERCOM Offset: 0x28) USART_EXT Data */
  __I  uint8_t                        Reserved7[6];
  __IO uint8_t DBGCTRL;        /**< (SERCOM Offset: 0x30) USART_EXT Debug Control */
} SercomUsartExt;

/** \brief SERCOM hardware registers */
typedef struct {  /* Serial Communication Interface */
  __IO uint32_t CTRLA;          /**< (SERCOM Offset: 0x00) USART_INT Control A */
  __IO uint32_t CTRLB;          /**< (SERCOM Offset: 0x04) USART_INT Control B */
  __I  uint8_t                        Reserved1[4];
  __IO uint16_t BAUD;           /**< (SERCOM Offset: 0x0C) USART_INT Baud Rate */
  __IO uint8_t RXPL;           /**< (SERCOM Offset: 0x0E) USART_INT Receive Pulse Length */
  __I  uint8_t                        Reserved2[5];
  __IO uint8_t INTENCLR;       /**< (SERCOM Offset: 0x14) USART_INT Interrupt Enable Clear */
  __I  uint8_t                        Reserved3[1];
  __IO uint8_t INTENSET;       /**< (SERCOM Offset: 0x16) USART_INT Interrupt Enable Set */
  __I  uint8_t                        Reserved4[1];
  __IO uint8_t INTFLAG;        /**< (SERCOM Offset: 0x18) USART_INT Interrupt Flag Status and Clear */
  __I  uint8_t                        Reserved5[1];
  __IO uint16_t STATUS;         /**< (SERCOM Offset: 0x1A) USART_INT Status */
  __I  uint32_t SYNCBUSY;       /**< (SERCOM Offset: 0x1C) USART_INT Synchronization Busy */
  __I  uint8_t                        Reserved6[8];
  __IO uint16_t DATA;           /**< (SERCOM Offset: 0x28) USART_INT Data */
  __I  uint8_t                        Reserved7[6];
  __IO uint8_t DBGCTRL;        /**< (SERCOM Offset: 0x30) USART_INT Debug Control */
} SercomUsartInt;

/** \brief SERCOM hardware registers */
typedef union {  /* Serial Communication Interface */
       SercomI2cm                     I2CM;           /**< I2C Master Mode */
       SercomI2cs                     I2CS;           /**< I2C Slave Mode */
       SercomSpis                     SPIS;           /**< SPI Slave Mode */
       SercomSpim                     SPIM;           /**< SPI Master Mode */
       SercomUsartExt                 USART_EXT;      /**< USART EXTERNAL CLOCK Mode */
       SercomUsartInt                 USART_INT;      /**< USART INTERNAL CLOCK Mode */
} Sercom;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief SERCOM hardware registers */
typedef struct {  /* Serial Communication Interface */
  __IO SERCOM_I2CM_CTRLA_Type         CTRLA;          /**< Offset: 0x00 (R/W  32) I2CM Control A */
  __IO SERCOM_I2CM_CTRLB_Type         CTRLB;          /**< Offset: 0x04 (R/W  32) I2CM Control B */
  __I  uint8_t                        Reserved1[4];
  __IO SERCOM_I2CM_BAUD_Type          BAUD;           /**< Offset: 0x0C (R/W  32) I2CM Baud Rate */
  __I  uint8_t                        Reserved2[4];
  __IO SERCOM_I2CM_INTENCLR_Type      INTENCLR;       /**< Offset: 0x14 (R/W   8) I2CM Interrupt Enable Clear */
  __I  uint8_t                        Reserved3[1];
  __IO SERCOM_I2CM_INTENSET_Type      INTENSET;       /**< Offset: 0x16 (R/W   8) I2CM Interrupt Enable Set */
  __I  uint8_t                        Reserved4[1];
  __IO SERCOM_I2CM_INTFLAG_Type       INTFLAG;        /**< Offset: 0x18 (R/W   8) I2CM Interrupt Flag Status and Clear */
  __I  uint8_t                        Reserved5[1];
  __IO SERCOM_I2CM_STATUS_Type        STATUS;         /**< Offset: 0x1A (R/W  16) I2CM Status */
  __I  SERCOM_I2CM_SYNCBUSY_Type      SYNCBUSY;       /**< Offset: 0x1C (R/   32) I2CM Synchronization Busy */
  __I  uint8_t                        Reserved6[4];
  __IO SERCOM_I2CM_ADDR_Type          ADDR;           /**< Offset: 0x24 (R/W  32) I2CM Address */
  __IO SERCOM_I2CM_DATA_Type          DATA;           /**< Offset: 0x28 (R/W   8) I2CM Data */
  __I  uint8_t                        Reserved7[7];
  __IO SERCOM_I2CM_DBGCTRL_Type       DBGCTRL;        /**< Offset: 0x30 (R/W   8) I2CM Debug Control */
} SercomI2cm;

/** \brief SERCOM hardware registers */
typedef struct {  /* Serial Communication Interface */
  __IO SERCOM_I2CS_CTRLA_Type         CTRLA;          /**< Offset: 0x00 (R/W  32) I2CS Control A */
  __IO SERCOM_I2CS_CTRLB_Type         CTRLB;          /**< Offset: 0x04 (R/W  32) I2CS Control B */
  __I  uint8_t                        Reserved1[12];
  __IO SERCOM_I2CS_INTENCLR_Type      INTENCLR;       /**< Offset: 0x14 (R/W   8) I2CS Interrupt Enable Clear */
  __I  uint8_t                        Reserved2[1];
  __IO SERCOM_I2CS_INTENSET_Type      INTENSET;       /**< Offset: 0x16 (R/W   8) I2CS Interrupt Enable Set */
  __I  uint8_t                        Reserved3[1];
  __IO SERCOM_I2CS_INTFLAG_Type       INTFLAG;        /**< Offset: 0x18 (R/W   8) I2CS Interrupt Flag Status and Clear */
  __I  uint8_t                        Reserved4[1];
  __IO SERCOM_I2CS_STATUS_Type        STATUS;         /**< Offset: 0x1A (R/W  16) I2CS Status */
  __I  SERCOM_I2CS_SYNCBUSY_Type      SYNCBUSY;       /**< Offset: 0x1C (R/   32) I2CS Synchronization Busy */
  __I  uint8_t                        Reserved5[4];
  __IO SERCOM_I2CS_ADDR_Type          ADDR;           /**< Offset: 0x24 (R/W  32) I2CS Address */
  __IO SERCOM_I2CS_DATA_Type          DATA;           /**< Offset: 0x28 (R/W   8) I2CS Data */
} SercomI2cs;

/** \brief SERCOM hardware registers */
typedef struct {  /* Serial Communication Interface */
  __IO SERCOM_SPIS_CTRLA_Type         CTRLA;          /**< Offset: 0x00 (R/W  32) SPIS Control A */
  __IO SERCOM_SPIS_CTRLB_Type         CTRLB;          /**< Offset: 0x04 (R/W  32) SPIS Control B */
  __I  uint8_t                        Reserved1[4];
  __IO SERCOM_SPIS_BAUD_Type          BAUD;           /**< Offset: 0x0C (R/W   8) SPIS Baud Rate */
  __I  uint8_t                        Reserved2[7];
  __IO SERCOM_SPIS_INTENCLR_Type      INTENCLR;       /**< Offset: 0x14 (R/W   8) SPIS Interrupt Enable Clear */
  __I  uint8_t                        Reserved3[1];
  __IO SERCOM_SPIS_INTENSET_Type      INTENSET;       /**< Offset: 0x16 (R/W   8) SPIS Interrupt Enable Set */
  __I  uint8_t                        Reserved4[1];
  __IO SERCOM_SPIS_INTFLAG_Type       INTFLAG;        /**< Offset: 0x18 (R/W   8) SPIS Interrupt Flag Status and Clear */
  __I  uint8_t                        Reserved5[1];
  __IO SERCOM_SPIS_STATUS_Type        STATUS;         /**< Offset: 0x1A (R/W  16) SPIS Status */
  __I  SERCOM_SPIS_SYNCBUSY_Type      SYNCBUSY;       /**< Offset: 0x1C (R/   32) SPIS Synchronization Busy */
  __I  uint8_t                        Reserved6[4];
  __IO SERCOM_SPIS_ADDR_Type          ADDR;           /**< Offset: 0x24 (R/W  32) SPIS Address */
  __IO SERCOM_SPIS_DATA_Type          DATA;           /**< Offset: 0x28 (R/W  32) SPIS Data */
  __I  uint8_t                        Reserved7[4];
  __IO SERCOM_SPIS_DBGCTRL_Type       DBGCTRL;        /**< Offset: 0x30 (R/W   8) SPIS Debug Control */
} SercomSpis;

/** \brief SERCOM hardware registers */
typedef struct {  /* Serial Communication Interface */
  __IO SERCOM_SPIM_CTRLA_Type         CTRLA;          /**< Offset: 0x00 (R/W  32) SPIM Control A */
  __IO SERCOM_SPIM_CTRLB_Type         CTRLB;          /**< Offset: 0x04 (R/W  32) SPIM Control B */
  __I  uint8_t                        Reserved1[4];
  __IO SERCOM_SPIM_BAUD_Type          BAUD;           /**< Offset: 0x0C (R/W   8) SPIM Baud Rate */
  __I  uint8_t                        Reserved2[7];
  __IO SERCOM_SPIM_INTENCLR_Type      INTENCLR;       /**< Offset: 0x14 (R/W   8) SPIM Interrupt Enable Clear */
  __I  uint8_t                        Reserved3[1];
  __IO SERCOM_SPIM_INTENSET_Type      INTENSET;       /**< Offset: 0x16 (R/W   8) SPIM Interrupt Enable Set */
  __I  uint8_t                        Reserved4[1];
  __IO SERCOM_SPIM_INTFLAG_Type       INTFLAG;        /**< Offset: 0x18 (R/W   8) SPIM Interrupt Flag Status and Clear */
  __I  uint8_t                        Reserved5[1];
  __IO SERCOM_SPIM_STATUS_Type        STATUS;         /**< Offset: 0x1A (R/W  16) SPIM Status */
  __I  SERCOM_SPIM_SYNCBUSY_Type      SYNCBUSY;       /**< Offset: 0x1C (R/   32) SPIM Synchronization Busy */
  __I  uint8_t                        Reserved6[4];
  __IO SERCOM_SPIM_ADDR_Type          ADDR;           /**< Offset: 0x24 (R/W  32) SPIM Address */
  __IO SERCOM_SPIM_DATA_Type          DATA;           /**< Offset: 0x28 (R/W  32) SPIM Data */
  __I  uint8_t                        Reserved7[4];
  __IO SERCOM_SPIM_DBGCTRL_Type       DBGCTRL;        /**< Offset: 0x30 (R/W   8) SPIM Debug Control */
} SercomSpim;

/** \brief SERCOM hardware registers */
typedef struct {  /* Serial Communication Interface */
  __IO SERCOM_USART_EXT_CTRLA_Type    CTRLA;          /**< Offset: 0x00 (R/W  32) USART_EXT Control A */
  __IO SERCOM_USART_EXT_CTRLB_Type    CTRLB;          /**< Offset: 0x04 (R/W  32) USART_EXT Control B */
  __I  uint8_t                        Reserved1[4];
  __IO SERCOM_USART_EXT_BAUD_Type     BAUD;           /**< Offset: 0x0C (R/W  16) USART_EXT Baud Rate */
  __IO SERCOM_USART_EXT_RXPL_Type     RXPL;           /**< Offset: 0x0E (R/W   8) USART_EXT Receive Pulse Length */
  __I  uint8_t                        Reserved2[5];
  __IO SERCOM_USART_EXT_INTENCLR_Type INTENCLR;       /**< Offset: 0x14 (R/W   8) USART_EXT Interrupt Enable Clear */
  __I  uint8_t                        Reserved3[1];
  __IO SERCOM_USART_EXT_INTENSET_Type INTENSET;       /**< Offset: 0x16 (R/W   8) USART_EXT Interrupt Enable Set */
  __I  uint8_t                        Reserved4[1];
  __IO SERCOM_USART_EXT_INTFLAG_Type  INTFLAG;        /**< Offset: 0x18 (R/W   8) USART_EXT Interrupt Flag Status and Clear */
  __I  uint8_t                        Reserved5[1];
  __IO SERCOM_USART_EXT_STATUS_Type   STATUS;         /**< Offset: 0x1A (R/W  16) USART_EXT Status */
  __I  SERCOM_USART_EXT_SYNCBUSY_Type SYNCBUSY;       /**< Offset: 0x1C (R/   32) USART_EXT Synchronization Busy */
  __I  uint8_t                        Reserved6[8];
  __IO SERCOM_USART_EXT_DATA_Type     DATA;           /**< Offset: 0x28 (R/W  16) USART_EXT Data */
  __I  uint8_t                        Reserved7[6];
  __IO SERCOM_USART_EXT_DBGCTRL_Type  DBGCTRL;        /**< Offset: 0x30 (R/W   8) USART_EXT Debug Control */
} SercomUsartExt;

/** \brief SERCOM hardware registers */
typedef struct {  /* Serial Communication Interface */
  __IO SERCOM_USART_INT_CTRLA_Type    CTRLA;          /**< Offset: 0x00 (R/W  32) USART_INT Control A */
  __IO SERCOM_USART_INT_CTRLB_Type    CTRLB;          /**< Offset: 0x04 (R/W  32) USART_INT Control B */
  __I  uint8_t                        Reserved1[4];
  __IO SERCOM_USART_INT_BAUD_Type     BAUD;           /**< Offset: 0x0C (R/W  16) USART_INT Baud Rate */
  __IO SERCOM_USART_INT_RXPL_Type     RXPL;           /**< Offset: 0x0E (R/W   8) USART_INT Receive Pulse Length */
  __I  uint8_t                        Reserved2[5];
  __IO SERCOM_USART_INT_INTENCLR_Type INTENCLR;       /**< Offset: 0x14 (R/W   8) USART_INT Interrupt Enable Clear */
  __I  uint8_t                        Reserved3[1];
  __IO SERCOM_USART_INT_INTENSET_Type INTENSET;       /**< Offset: 0x16 (R/W   8) USART_INT Interrupt Enable Set */
  __I  uint8_t                        Reserved4[1];
  __IO SERCOM_USART_INT_INTFLAG_Type  INTFLAG;        /**< Offset: 0x18 (R/W   8) USART_INT Interrupt Flag Status and Clear */
  __I  uint8_t                        Reserved5[1];
  __IO SERCOM_USART_INT_STATUS_Type   STATUS;         /**< Offset: 0x1A (R/W  16) USART_INT Status */
  __I  SERCOM_USART_INT_SYNCBUSY_Type SYNCBUSY;       /**< Offset: 0x1C (R/   32) USART_INT Synchronization Busy */
  __I  uint8_t                        Reserved6[8];
  __IO SERCOM_USART_INT_DATA_Type     DATA;           /**< Offset: 0x28 (R/W  16) USART_INT Data */
  __I  uint8_t                        Reserved7[6];
  __IO SERCOM_USART_INT_DBGCTRL_Type  DBGCTRL;        /**< Offset: 0x30 (R/W   8) USART_INT Debug Control */
} SercomUsartInt;

/** \brief SERCOM hardware registers */
typedef union {  /* Serial Communication Interface */
       SercomI2cm                     I2CM;           /**< I2C Master Mode */
       SercomI2cs                     I2CS;           /**< I2C Slave Mode */
       SercomSpis                     SPIS;           /**< SPI Slave Mode */
       SercomSpim                     SPIM;           /**< SPI Master Mode */
       SercomUsartExt                 USART_EXT;      /**< USART EXTERNAL CLOCK Mode */
       SercomUsartInt                 USART_INT;      /**< USART INTERNAL CLOCK Mode */
} Sercom;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  b'end of Serial Communication Interface' */

#endif /* _WLR089_SERCOM_COMPONENT_H_ */
