/**
 * \brief Component description for PM
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
#ifndef _WLR089_PM_COMPONENT_H_
#define _WLR089_PM_COMPONENT_H_
#define _WLR089_PM_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup WLR089_PM b'Power Manager'
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PM */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define PM_U2240                      /**< (PM) Module ID */
#define REV_PM 0x102                  /**< (PM) Module revision */

/* -------- PM_CTRLA : (PM Offset: 0x00) (R/W 8) Control A -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  :2;                        /**< bit:   0..1  Reserved */
    uint8_t  IORET:1;                   /**< bit:      2  I/O Retention                            */
    uint8_t  :5;                        /**< bit:   3..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} PM_CTRLA_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_CTRLA_OFFSET                     (0x00)                                        /**<  (PM_CTRLA) Control A  Offset */
#define PM_CTRLA_RESETVALUE                 _U_(0x00)                                     /**<  (PM_CTRLA) Control A  Reset Value */

#define PM_CTRLA_IORET_Pos                  2                                              /**< (PM_CTRLA) I/O Retention Position */
#define PM_CTRLA_IORET_Msk                  (_U_(0x1) << PM_CTRLA_IORET_Pos)               /**< (PM_CTRLA) I/O Retention Mask */
#define PM_CTRLA_IORET                      PM_CTRLA_IORET_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PM_CTRLA_IORET_Msk instead */
#define PM_CTRLA_MASK                       _U_(0x04)                                      /**< \deprecated (PM_CTRLA) Register MASK  (Use PM_CTRLA_Msk instead)  */
#define PM_CTRLA_Msk                        _U_(0x04)                                      /**< (PM_CTRLA) Register Mask  */


/* -------- PM_SLEEPCFG : (PM Offset: 0x01) (R/W 8) Sleep Configuration -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  SLEEPMODE:3;               /**< bit:   0..2  Sleep Mode                               */
    uint8_t  :5;                        /**< bit:   3..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} PM_SLEEPCFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_SLEEPCFG_OFFSET                  (0x01)                                        /**<  (PM_SLEEPCFG) Sleep Configuration  Offset */
#define PM_SLEEPCFG_RESETVALUE              _U_(0x02)                                     /**<  (PM_SLEEPCFG) Sleep Configuration  Reset Value */

#define PM_SLEEPCFG_SLEEPMODE_Pos           0                                              /**< (PM_SLEEPCFG) Sleep Mode Position */
#define PM_SLEEPCFG_SLEEPMODE_Msk           (_U_(0x7) << PM_SLEEPCFG_SLEEPMODE_Pos)        /**< (PM_SLEEPCFG) Sleep Mode Mask */
#define PM_SLEEPCFG_SLEEPMODE(value)        (PM_SLEEPCFG_SLEEPMODE_Msk & ((value) << PM_SLEEPCFG_SLEEPMODE_Pos))
#define   PM_SLEEPCFG_SLEEPMODE_IDLE_Val    _U_(0x2)                                       /**< (PM_SLEEPCFG) CPU, AHBx, and APBx clocks are OFF  */
#define   PM_SLEEPCFG_SLEEPMODE_STANDBY_Val _U_(0x4)                                       /**< (PM_SLEEPCFG) All Clocks are OFF  */
#define   PM_SLEEPCFG_SLEEPMODE_BACKUP_Val  _U_(0x5)                                       /**< (PM_SLEEPCFG) Only Backup domain is powered ON  */
#define   PM_SLEEPCFG_SLEEPMODE_OFF_Val     _U_(0x6)                                       /**< (PM_SLEEPCFG) All power domains are powered OFF  */
#define PM_SLEEPCFG_SLEEPMODE_IDLE          (PM_SLEEPCFG_SLEEPMODE_IDLE_Val << PM_SLEEPCFG_SLEEPMODE_Pos)  /**< (PM_SLEEPCFG) CPU, AHBx, and APBx clocks are OFF Position  */
#define PM_SLEEPCFG_SLEEPMODE_STANDBY       (PM_SLEEPCFG_SLEEPMODE_STANDBY_Val << PM_SLEEPCFG_SLEEPMODE_Pos)  /**< (PM_SLEEPCFG) All Clocks are OFF Position  */
#define PM_SLEEPCFG_SLEEPMODE_BACKUP        (PM_SLEEPCFG_SLEEPMODE_BACKUP_Val << PM_SLEEPCFG_SLEEPMODE_Pos)  /**< (PM_SLEEPCFG) Only Backup domain is powered ON Position  */
#define PM_SLEEPCFG_SLEEPMODE_OFF           (PM_SLEEPCFG_SLEEPMODE_OFF_Val << PM_SLEEPCFG_SLEEPMODE_Pos)  /**< (PM_SLEEPCFG) All power domains are powered OFF Position  */
#define PM_SLEEPCFG_MASK                    _U_(0x07)                                      /**< \deprecated (PM_SLEEPCFG) Register MASK  (Use PM_SLEEPCFG_Msk instead)  */
#define PM_SLEEPCFG_Msk                     _U_(0x07)                                      /**< (PM_SLEEPCFG) Register Mask  */


/* -------- PM_PLCFG : (PM Offset: 0x02) (R/W 8) Performance Level Configuration -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  PLSEL:2;                   /**< bit:   0..1  Performance Level Select                 */
    uint8_t  :5;                        /**< bit:   2..6  Reserved */
    uint8_t  PLDIS:1;                   /**< bit:      7  Performance Level Disable                */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} PM_PLCFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_PLCFG_OFFSET                     (0x02)                                        /**<  (PM_PLCFG) Performance Level Configuration  Offset */
#define PM_PLCFG_RESETVALUE                 _U_(0x00)                                     /**<  (PM_PLCFG) Performance Level Configuration  Reset Value */

#define PM_PLCFG_PLSEL_Pos                  0                                              /**< (PM_PLCFG) Performance Level Select Position */
#define PM_PLCFG_PLSEL_Msk                  (_U_(0x3) << PM_PLCFG_PLSEL_Pos)               /**< (PM_PLCFG) Performance Level Select Mask */
#define PM_PLCFG_PLSEL(value)               (PM_PLCFG_PLSEL_Msk & ((value) << PM_PLCFG_PLSEL_Pos))
#define   PM_PLCFG_PLSEL_PL0_Val            _U_(0x0)                                       /**< (PM_PLCFG) Performance Level 0  */
#define   PM_PLCFG_PLSEL_PL1_Val            _U_(0x1)                                       /**< (PM_PLCFG) Performance Level 1  */
#define   PM_PLCFG_PLSEL_PL2_Val            _U_(0x2)                                       /**< (PM_PLCFG) Performance Level 2  */
#define PM_PLCFG_PLSEL_PL0                  (PM_PLCFG_PLSEL_PL0_Val << PM_PLCFG_PLSEL_Pos)  /**< (PM_PLCFG) Performance Level 0 Position  */
#define PM_PLCFG_PLSEL_PL1                  (PM_PLCFG_PLSEL_PL1_Val << PM_PLCFG_PLSEL_Pos)  /**< (PM_PLCFG) Performance Level 1 Position  */
#define PM_PLCFG_PLSEL_PL2                  (PM_PLCFG_PLSEL_PL2_Val << PM_PLCFG_PLSEL_Pos)  /**< (PM_PLCFG) Performance Level 2 Position  */
#define PM_PLCFG_PLDIS_Pos                  7                                              /**< (PM_PLCFG) Performance Level Disable Position */
#define PM_PLCFG_PLDIS_Msk                  (_U_(0x1) << PM_PLCFG_PLDIS_Pos)               /**< (PM_PLCFG) Performance Level Disable Mask */
#define PM_PLCFG_PLDIS                      PM_PLCFG_PLDIS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use PM_PLCFG_PLDIS_Msk instead */
#define PM_PLCFG_MASK                       _U_(0x83)                                      /**< \deprecated (PM_PLCFG) Register MASK  (Use PM_PLCFG_Msk instead)  */
#define PM_PLCFG_Msk                        _U_(0x83)                                      /**< (PM_PLCFG) Register Mask  */


/* -------- PM_INTENCLR : (PM Offset: 0x04) (R/W 8) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  PLRDY:1;                   /**< bit:      0  Performance Level Interrupt Enable       */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} PM_INTENCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_INTENCLR_OFFSET                  (0x04)                                        /**<  (PM_INTENCLR) Interrupt Enable Clear  Offset */
#define PM_INTENCLR_RESETVALUE              _U_(0x00)                                     /**<  (PM_INTENCLR) Interrupt Enable Clear  Reset Value */

#define PM_INTENCLR_PLRDY_Pos               0                                              /**< (PM_INTENCLR) Performance Level Interrupt Enable Position */
#define PM_INTENCLR_PLRDY_Msk               (_U_(0x1) << PM_INTENCLR_PLRDY_Pos)            /**< (PM_INTENCLR) Performance Level Interrupt Enable Mask */
#define PM_INTENCLR_PLRDY                   PM_INTENCLR_PLRDY_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PM_INTENCLR_PLRDY_Msk instead */
#define PM_INTENCLR_MASK                    _U_(0x01)                                      /**< \deprecated (PM_INTENCLR) Register MASK  (Use PM_INTENCLR_Msk instead)  */
#define PM_INTENCLR_Msk                     _U_(0x01)                                      /**< (PM_INTENCLR) Register Mask  */


/* -------- PM_INTENSET : (PM Offset: 0x05) (R/W 8) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  PLRDY:1;                   /**< bit:      0  Performance Level Ready interrupt Enable */
    uint8_t  :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} PM_INTENSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_INTENSET_OFFSET                  (0x05)                                        /**<  (PM_INTENSET) Interrupt Enable Set  Offset */
#define PM_INTENSET_RESETVALUE              _U_(0x00)                                     /**<  (PM_INTENSET) Interrupt Enable Set  Reset Value */

#define PM_INTENSET_PLRDY_Pos               0                                              /**< (PM_INTENSET) Performance Level Ready interrupt Enable Position */
#define PM_INTENSET_PLRDY_Msk               (_U_(0x1) << PM_INTENSET_PLRDY_Pos)            /**< (PM_INTENSET) Performance Level Ready interrupt Enable Mask */
#define PM_INTENSET_PLRDY                   PM_INTENSET_PLRDY_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use PM_INTENSET_PLRDY_Msk instead */
#define PM_INTENSET_MASK                    _U_(0x01)                                      /**< \deprecated (PM_INTENSET) Register MASK  (Use PM_INTENSET_Msk instead)  */
#define PM_INTENSET_Msk                     _U_(0x01)                                      /**< (PM_INTENSET) Register Mask  */


/* -------- PM_INTFLAG : (PM Offset: 0x06) (R/W 8) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t PLRDY:1;                   /**< bit:      0  Performance Level Ready                  */
    __I uint8_t :7;                        /**< bit:   1..7  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} PM_INTFLAG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_INTFLAG_OFFSET                   (0x06)                                        /**<  (PM_INTFLAG) Interrupt Flag Status and Clear  Offset */
#define PM_INTFLAG_RESETVALUE               _U_(0x00)                                     /**<  (PM_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define PM_INTFLAG_PLRDY_Pos                0                                              /**< (PM_INTFLAG) Performance Level Ready Position */
#define PM_INTFLAG_PLRDY_Msk                (_U_(0x1) << PM_INTFLAG_PLRDY_Pos)             /**< (PM_INTFLAG) Performance Level Ready Mask */
#define PM_INTFLAG_PLRDY                    PM_INTFLAG_PLRDY_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use PM_INTFLAG_PLRDY_Msk instead */
#define PM_INTFLAG_MASK                     _U_(0x01)                                      /**< \deprecated (PM_INTFLAG) Register MASK  (Use PM_INTFLAG_Msk instead)  */
#define PM_INTFLAG_Msk                      _U_(0x01)                                      /**< (PM_INTFLAG) Register Mask  */


/* -------- PM_STDBYCFG : (PM Offset: 0x08) (R/W 16) Standby Configuration -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint16_t PDCFG:2;                   /**< bit:   0..1  Power Domain Configuration               */
    uint16_t :2;                        /**< bit:   2..3  Reserved */
    uint16_t DPGPD0:1;                  /**< bit:      4  Dynamic Power Gating for PD0             */
    uint16_t DPGPD1:1;                  /**< bit:      5  Dynamic Power Gating for PD1             */
    uint16_t VREGSMOD:2;                /**< bit:   6..7  Voltage Regulator Standby mode           */
    uint16_t LINKPD:2;                  /**< bit:   8..9  Linked Power Domain                      */
    uint16_t BBIASHS:2;                 /**< bit: 10..11  Back Bias for HMCRAMCHS                  */
    uint16_t BBIASLP:2;                 /**< bit: 12..13  Back Bias for HMCRAMCLP                  */
    uint16_t BBIASPP:2;                 /**< bit: 14..15  Back Bias for PicoPram                   */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint16_t :4;                        /**< bit:   0..3  Reserved */
    uint16_t DPGPD:2;                   /**< bit:   4..5  Dynamic Power Gating for PDx             */
    uint16_t :10;                       /**< bit:  6..15 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint16_t reg;                         /**< Type used for register access */
} PM_STDBYCFG_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_STDBYCFG_OFFSET                  (0x08)                                        /**<  (PM_STDBYCFG) Standby Configuration  Offset */
#define PM_STDBYCFG_RESETVALUE              _U_(0x00)                                     /**<  (PM_STDBYCFG) Standby Configuration  Reset Value */

#define PM_STDBYCFG_PDCFG_Pos               0                                              /**< (PM_STDBYCFG) Power Domain Configuration Position */
#define PM_STDBYCFG_PDCFG_Msk               (_U_(0x3) << PM_STDBYCFG_PDCFG_Pos)            /**< (PM_STDBYCFG) Power Domain Configuration Mask */
#define PM_STDBYCFG_PDCFG(value)            (PM_STDBYCFG_PDCFG_Msk & ((value) << PM_STDBYCFG_PDCFG_Pos))
#define   PM_STDBYCFG_PDCFG_DEFAULT_Val     _U_(0x0)                                       /**< (PM_STDBYCFG) All power domains switching is handled by hardware.  */
#define   PM_STDBYCFG_PDCFG_PD0_Val         _U_(0x1)                                       /**< (PM_STDBYCFG) PD0 is forced ACTIVE. PD1 and PD2 power domains switching is handled by hardware.  */
#define   PM_STDBYCFG_PDCFG_PD01_Val        _U_(0x2)                                       /**< (PM_STDBYCFG) PD0 and PD1 are forced ACTIVE. PD2 power domain switching is handled by hardware.  */
#define   PM_STDBYCFG_PDCFG_PD012_Val       _U_(0x3)                                       /**< (PM_STDBYCFG) All power domains are forced ACTIVE.  */
#define PM_STDBYCFG_PDCFG_DEFAULT           (PM_STDBYCFG_PDCFG_DEFAULT_Val << PM_STDBYCFG_PDCFG_Pos)  /**< (PM_STDBYCFG) All power domains switching is handled by hardware. Position  */
#define PM_STDBYCFG_PDCFG_PD0               (PM_STDBYCFG_PDCFG_PD0_Val << PM_STDBYCFG_PDCFG_Pos)  /**< (PM_STDBYCFG) PD0 is forced ACTIVE. PD1 and PD2 power domains switching is handled by hardware. Position  */
#define PM_STDBYCFG_PDCFG_PD01              (PM_STDBYCFG_PDCFG_PD01_Val << PM_STDBYCFG_PDCFG_Pos)  /**< (PM_STDBYCFG) PD0 and PD1 are forced ACTIVE. PD2 power domain switching is handled by hardware. Position  */
#define PM_STDBYCFG_PDCFG_PD012             (PM_STDBYCFG_PDCFG_PD012_Val << PM_STDBYCFG_PDCFG_Pos)  /**< (PM_STDBYCFG) All power domains are forced ACTIVE. Position  */
#define PM_STDBYCFG_DPGPD0_Pos              4                                              /**< (PM_STDBYCFG) Dynamic Power Gating for PD0 Position */
#define PM_STDBYCFG_DPGPD0_Msk              (_U_(0x1) << PM_STDBYCFG_DPGPD0_Pos)           /**< (PM_STDBYCFG) Dynamic Power Gating for PD0 Mask */
#define PM_STDBYCFG_DPGPD0                  PM_STDBYCFG_DPGPD0_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use PM_STDBYCFG_DPGPD0_Msk instead */
#define PM_STDBYCFG_DPGPD1_Pos              5                                              /**< (PM_STDBYCFG) Dynamic Power Gating for PD1 Position */
#define PM_STDBYCFG_DPGPD1_Msk              (_U_(0x1) << PM_STDBYCFG_DPGPD1_Pos)           /**< (PM_STDBYCFG) Dynamic Power Gating for PD1 Mask */
#define PM_STDBYCFG_DPGPD1                  PM_STDBYCFG_DPGPD1_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use PM_STDBYCFG_DPGPD1_Msk instead */
#define PM_STDBYCFG_VREGSMOD_Pos            6                                              /**< (PM_STDBYCFG) Voltage Regulator Standby mode Position */
#define PM_STDBYCFG_VREGSMOD_Msk            (_U_(0x3) << PM_STDBYCFG_VREGSMOD_Pos)         /**< (PM_STDBYCFG) Voltage Regulator Standby mode Mask */
#define PM_STDBYCFG_VREGSMOD(value)         (PM_STDBYCFG_VREGSMOD_Msk & ((value) << PM_STDBYCFG_VREGSMOD_Pos))
#define   PM_STDBYCFG_VREGSMOD_AUTO_Val     _U_(0x0)                                       /**< (PM_STDBYCFG) Automatic mode  */
#define   PM_STDBYCFG_VREGSMOD_PERFORMANCE_Val _U_(0x1)                                       /**< (PM_STDBYCFG) Performance oriented  */
#define   PM_STDBYCFG_VREGSMOD_LP_Val       _U_(0x2)                                       /**< (PM_STDBYCFG) Low Power oriented  */
#define PM_STDBYCFG_VREGSMOD_AUTO           (PM_STDBYCFG_VREGSMOD_AUTO_Val << PM_STDBYCFG_VREGSMOD_Pos)  /**< (PM_STDBYCFG) Automatic mode Position  */
#define PM_STDBYCFG_VREGSMOD_PERFORMANCE    (PM_STDBYCFG_VREGSMOD_PERFORMANCE_Val << PM_STDBYCFG_VREGSMOD_Pos)  /**< (PM_STDBYCFG) Performance oriented Position  */
#define PM_STDBYCFG_VREGSMOD_LP             (PM_STDBYCFG_VREGSMOD_LP_Val << PM_STDBYCFG_VREGSMOD_Pos)  /**< (PM_STDBYCFG) Low Power oriented Position  */
#define PM_STDBYCFG_LINKPD_Pos              8                                              /**< (PM_STDBYCFG) Linked Power Domain Position */
#define PM_STDBYCFG_LINKPD_Msk              (_U_(0x3) << PM_STDBYCFG_LINKPD_Pos)           /**< (PM_STDBYCFG) Linked Power Domain Mask */
#define PM_STDBYCFG_LINKPD(value)           (PM_STDBYCFG_LINKPD_Msk & ((value) << PM_STDBYCFG_LINKPD_Pos))
#define   PM_STDBYCFG_LINKPD_DEFAULT_Val    _U_(0x0)                                       /**< (PM_STDBYCFG) Power domains are not linked  */
#define   PM_STDBYCFG_LINKPD_PD01_Val       _U_(0x1)                                       /**< (PM_STDBYCFG) PD0 and PD1 power domains are linked  */
#define   PM_STDBYCFG_LINKPD_PD12_Val       _U_(0x2)                                       /**< (PM_STDBYCFG) PD1 and PD2 power domains are linked  */
#define   PM_STDBYCFG_LINKPD_PD012_Val      _U_(0x3)                                       /**< (PM_STDBYCFG) All power domains are linked  */
#define PM_STDBYCFG_LINKPD_DEFAULT          (PM_STDBYCFG_LINKPD_DEFAULT_Val << PM_STDBYCFG_LINKPD_Pos)  /**< (PM_STDBYCFG) Power domains are not linked Position  */
#define PM_STDBYCFG_LINKPD_PD01             (PM_STDBYCFG_LINKPD_PD01_Val << PM_STDBYCFG_LINKPD_Pos)  /**< (PM_STDBYCFG) PD0 and PD1 power domains are linked Position  */
#define PM_STDBYCFG_LINKPD_PD12             (PM_STDBYCFG_LINKPD_PD12_Val << PM_STDBYCFG_LINKPD_Pos)  /**< (PM_STDBYCFG) PD1 and PD2 power domains are linked Position  */
#define PM_STDBYCFG_LINKPD_PD012            (PM_STDBYCFG_LINKPD_PD012_Val << PM_STDBYCFG_LINKPD_Pos)  /**< (PM_STDBYCFG) All power domains are linked Position  */
#define PM_STDBYCFG_BBIASHS_Pos             10                                             /**< (PM_STDBYCFG) Back Bias for HMCRAMCHS Position */
#define PM_STDBYCFG_BBIASHS_Msk             (_U_(0x3) << PM_STDBYCFG_BBIASHS_Pos)          /**< (PM_STDBYCFG) Back Bias for HMCRAMCHS Mask */
#define PM_STDBYCFG_BBIASHS(value)          (PM_STDBYCFG_BBIASHS_Msk & ((value) << PM_STDBYCFG_BBIASHS_Pos))
#define PM_STDBYCFG_BBIASLP_Pos             12                                             /**< (PM_STDBYCFG) Back Bias for HMCRAMCLP Position */
#define PM_STDBYCFG_BBIASLP_Msk             (_U_(0x3) << PM_STDBYCFG_BBIASLP_Pos)          /**< (PM_STDBYCFG) Back Bias for HMCRAMCLP Mask */
#define PM_STDBYCFG_BBIASLP(value)          (PM_STDBYCFG_BBIASLP_Msk & ((value) << PM_STDBYCFG_BBIASLP_Pos))
#define PM_STDBYCFG_BBIASPP_Pos             14                                             /**< (PM_STDBYCFG) Back Bias for PicoPram Position */
#define PM_STDBYCFG_BBIASPP_Msk             (_U_(0x3) << PM_STDBYCFG_BBIASPP_Pos)          /**< (PM_STDBYCFG) Back Bias for PicoPram Mask */
#define PM_STDBYCFG_BBIASPP(value)          (PM_STDBYCFG_BBIASPP_Msk & ((value) << PM_STDBYCFG_BBIASPP_Pos))
#define PM_STDBYCFG_MASK                    _U_(0xFFF3)                                    /**< \deprecated (PM_STDBYCFG) Register MASK  (Use PM_STDBYCFG_Msk instead)  */
#define PM_STDBYCFG_Msk                     _U_(0xFFF3)                                    /**< (PM_STDBYCFG) Register Mask  */

#define PM_STDBYCFG_DPGPD_Pos               4                                              /**< (PM_STDBYCFG Position) Dynamic Power Gating for PDx */
#define PM_STDBYCFG_DPGPD_Msk               (_U_(0x3) << PM_STDBYCFG_DPGPD_Pos)            /**< (PM_STDBYCFG Mask) DPGPD */
#define PM_STDBYCFG_DPGPD(value)            (PM_STDBYCFG_DPGPD_Msk & ((value) << PM_STDBYCFG_DPGPD_Pos))  

/* -------- PM_PWSAKDLY : (PM Offset: 0x0c) (R/W 8) Power Switch Acknowledge Delay -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint8_t  DLYVAL:7;                  /**< bit:   0..6  Delay Value                              */
    uint8_t  IGNACK:1;                  /**< bit:      7  Ignore Acknowledge                       */
  } bit;                                /**< Structure used for bit  access */
  uint8_t  reg;                         /**< Type used for register access */
} PM_PWSAKDLY_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_PWSAKDLY_OFFSET                  (0x0C)                                        /**<  (PM_PWSAKDLY) Power Switch Acknowledge Delay  Offset */
#define PM_PWSAKDLY_RESETVALUE              _U_(0x00)                                     /**<  (PM_PWSAKDLY) Power Switch Acknowledge Delay  Reset Value */

#define PM_PWSAKDLY_DLYVAL_Pos              0                                              /**< (PM_PWSAKDLY) Delay Value Position */
#define PM_PWSAKDLY_DLYVAL_Msk              (_U_(0x7F) << PM_PWSAKDLY_DLYVAL_Pos)          /**< (PM_PWSAKDLY) Delay Value Mask */
#define PM_PWSAKDLY_DLYVAL(value)           (PM_PWSAKDLY_DLYVAL_Msk & ((value) << PM_PWSAKDLY_DLYVAL_Pos))
#define PM_PWSAKDLY_IGNACK_Pos              7                                              /**< (PM_PWSAKDLY) Ignore Acknowledge Position */
#define PM_PWSAKDLY_IGNACK_Msk              (_U_(0x1) << PM_PWSAKDLY_IGNACK_Pos)           /**< (PM_PWSAKDLY) Ignore Acknowledge Mask */
#define PM_PWSAKDLY_IGNACK                  PM_PWSAKDLY_IGNACK_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use PM_PWSAKDLY_IGNACK_Msk instead */
#define PM_PWSAKDLY_MASK                    _U_(0xFF)                                      /**< \deprecated (PM_PWSAKDLY) Register MASK  (Use PM_PWSAKDLY_Msk instead)  */
#define PM_PWSAKDLY_Msk                     _U_(0xFF)                                      /**< (PM_PWSAKDLY) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief PM hardware registers */
typedef struct {  /* Power Manager */
  __IO uint8_t CTRLA;          /**< (PM Offset: 0x00) Control A */
  __IO uint8_t SLEEPCFG;       /**< (PM Offset: 0x01) Sleep Configuration */
  __IO uint8_t PLCFG;          /**< (PM Offset: 0x02) Performance Level Configuration */
  __I  uint8_t                        Reserved1[1];
  __IO uint8_t INTENCLR;       /**< (PM Offset: 0x04) Interrupt Enable Clear */
  __IO uint8_t INTENSET;       /**< (PM Offset: 0x05) Interrupt Enable Set */
  __IO uint8_t INTFLAG;        /**< (PM Offset: 0x06) Interrupt Flag Status and Clear */
  __I  uint8_t                        Reserved2[1];
  __IO uint16_t STDBYCFG;       /**< (PM Offset: 0x08) Standby Configuration */
  __I  uint8_t                        Reserved3[2];
  __IO uint8_t PWSAKDLY;       /**< (PM Offset: 0x0C) Power Switch Acknowledge Delay */
} Pm;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief PM hardware registers */
typedef struct {  /* Power Manager */
  __IO PM_CTRLA_Type                  CTRLA;          /**< Offset: 0x00 (R/W   8) Control A */
  __IO PM_SLEEPCFG_Type               SLEEPCFG;       /**< Offset: 0x01 (R/W   8) Sleep Configuration */
  __IO PM_PLCFG_Type                  PLCFG;          /**< Offset: 0x02 (R/W   8) Performance Level Configuration */
  __I  uint8_t                        Reserved1[1];
  __IO PM_INTENCLR_Type               INTENCLR;       /**< Offset: 0x04 (R/W   8) Interrupt Enable Clear */
  __IO PM_INTENSET_Type               INTENSET;       /**< Offset: 0x05 (R/W   8) Interrupt Enable Set */
  __IO PM_INTFLAG_Type                INTFLAG;        /**< Offset: 0x06 (R/W   8) Interrupt Flag Status and Clear */
  __I  uint8_t                        Reserved2[1];
  __IO PM_STDBYCFG_Type               STDBYCFG;       /**< Offset: 0x08 (R/W  16) Standby Configuration */
  __I  uint8_t                        Reserved3[2];
  __IO PM_PWSAKDLY_Type               PWSAKDLY;       /**< Offset: 0x0C (R/W   8) Power Switch Acknowledge Delay */
} Pm;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  b'end of Power Manager' */

#endif /* _WLR089_PM_COMPONENT_H_ */
