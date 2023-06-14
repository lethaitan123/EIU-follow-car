/**
 * \brief Component description for MTB
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
#ifndef _WLR089_MTB_COMPONENT_H_
#define _WLR089_MTB_COMPONENT_H_
#define _WLR089_MTB_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup WLR089_MTB b'Cortex-M0+ Micro-Trace Buffer'
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR MTB */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define MTB_U2002                      /**< (MTB) Module ID */
#define REV_MTB 0x100                  /**< (MTB) Module revision */

/* -------- MTB_POSITION : (MTB Offset: 0x00) (R/W 32) MTB Position -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t WRAP:1;                    /**< bit:      2  Pointer Value Wraps                      */
    uint32_t POINTER:29;                /**< bit:  3..31  Trace Packet Location Pointer            */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MTB_POSITION_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_POSITION_OFFSET                 (0x00)                                        /**<  (MTB_POSITION) MTB Position  Offset */

#define MTB_POSITION_WRAP_Pos               2                                              /**< (MTB_POSITION) Pointer Value Wraps Position */
#define MTB_POSITION_WRAP_Msk               (_U_(0x1) << MTB_POSITION_WRAP_Pos)            /**< (MTB_POSITION) Pointer Value Wraps Mask */
#define MTB_POSITION_WRAP                   MTB_POSITION_WRAP_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MTB_POSITION_WRAP_Msk instead */
#define MTB_POSITION_POINTER_Pos            3                                              /**< (MTB_POSITION) Trace Packet Location Pointer Position */
#define MTB_POSITION_POINTER_Msk            (_U_(0x1FFFFFFF) << MTB_POSITION_POINTER_Pos)  /**< (MTB_POSITION) Trace Packet Location Pointer Mask */
#define MTB_POSITION_POINTER(value)         (MTB_POSITION_POINTER_Msk & ((value) << MTB_POSITION_POINTER_Pos))
#define MTB_POSITION_MASK                   _U_(0xFFFFFFFC)                                /**< \deprecated (MTB_POSITION) Register MASK  (Use MTB_POSITION_Msk instead)  */
#define MTB_POSITION_Msk                    _U_(0xFFFFFFFC)                                /**< (MTB_POSITION) Register Mask  */


/* -------- MTB_MASTER : (MTB Offset: 0x04) (R/W 32) MTB Master -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MASK:5;                    /**< bit:   0..4  Maximum Value of the Trace Buffer in SRAM */
    uint32_t TSTARTEN:1;                /**< bit:      5  Trace Start Input Enable                 */
    uint32_t TSTOPEN:1;                 /**< bit:      6  Trace Stop Input Enable                  */
    uint32_t SFRWPRIV:1;                /**< bit:      7  Special Function Register Write Privilege */
    uint32_t RAMPRIV:1;                 /**< bit:      8  SRAM Privilege                           */
    uint32_t HALTREQ:1;                 /**< bit:      9  Halt Request                             */
    uint32_t :21;                       /**< bit: 10..30  Reserved */
    uint32_t EN:1;                      /**< bit:     31  Main Trace Enable                        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MTB_MASTER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_MASTER_OFFSET                   (0x04)                                        /**<  (MTB_MASTER) MTB Master  Offset */
#define MTB_MASTER_RESETVALUE               _U_(0x00)                                     /**<  (MTB_MASTER) MTB Master  Reset Value */

#define MTB_MASTER_MASK_Pos                 0                                              /**< (MTB_MASTER) Maximum Value of the Trace Buffer in SRAM Position */
#define MTB_MASTER_MASK_Msk                 (_U_(0x1F) << MTB_MASTER_MASK_Pos)             /**< (MTB_MASTER) Maximum Value of the Trace Buffer in SRAM Mask */
#define MTB_MASTER_MASK(value)              (MTB_MASTER_MASK_Msk & ((value) << MTB_MASTER_MASK_Pos))
#define MTB_MASTER_TSTARTEN_Pos             5                                              /**< (MTB_MASTER) Trace Start Input Enable Position */
#define MTB_MASTER_TSTARTEN_Msk             (_U_(0x1) << MTB_MASTER_TSTARTEN_Pos)          /**< (MTB_MASTER) Trace Start Input Enable Mask */
#define MTB_MASTER_TSTARTEN                 MTB_MASTER_TSTARTEN_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MTB_MASTER_TSTARTEN_Msk instead */
#define MTB_MASTER_TSTOPEN_Pos              6                                              /**< (MTB_MASTER) Trace Stop Input Enable Position */
#define MTB_MASTER_TSTOPEN_Msk              (_U_(0x1) << MTB_MASTER_TSTOPEN_Pos)           /**< (MTB_MASTER) Trace Stop Input Enable Mask */
#define MTB_MASTER_TSTOPEN                  MTB_MASTER_TSTOPEN_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MTB_MASTER_TSTOPEN_Msk instead */
#define MTB_MASTER_SFRWPRIV_Pos             7                                              /**< (MTB_MASTER) Special Function Register Write Privilege Position */
#define MTB_MASTER_SFRWPRIV_Msk             (_U_(0x1) << MTB_MASTER_SFRWPRIV_Pos)          /**< (MTB_MASTER) Special Function Register Write Privilege Mask */
#define MTB_MASTER_SFRWPRIV                 MTB_MASTER_SFRWPRIV_Msk                        /**< \deprecated Old style mask definition for 1 bit bitfield. Use MTB_MASTER_SFRWPRIV_Msk instead */
#define MTB_MASTER_RAMPRIV_Pos              8                                              /**< (MTB_MASTER) SRAM Privilege Position */
#define MTB_MASTER_RAMPRIV_Msk              (_U_(0x1) << MTB_MASTER_RAMPRIV_Pos)           /**< (MTB_MASTER) SRAM Privilege Mask */
#define MTB_MASTER_RAMPRIV                  MTB_MASTER_RAMPRIV_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MTB_MASTER_RAMPRIV_Msk instead */
#define MTB_MASTER_HALTREQ_Pos              9                                              /**< (MTB_MASTER) Halt Request Position */
#define MTB_MASTER_HALTREQ_Msk              (_U_(0x1) << MTB_MASTER_HALTREQ_Pos)           /**< (MTB_MASTER) Halt Request Mask */
#define MTB_MASTER_HALTREQ                  MTB_MASTER_HALTREQ_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MTB_MASTER_HALTREQ_Msk instead */
#define MTB_MASTER_EN_Pos                   31                                             /**< (MTB_MASTER) Main Trace Enable Position */
#define MTB_MASTER_EN_Msk                   (_U_(0x1) << MTB_MASTER_EN_Pos)                /**< (MTB_MASTER) Main Trace Enable Mask */
#define MTB_MASTER_EN                       MTB_MASTER_EN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MTB_MASTER_EN_Msk instead */
#define MTB_MASTER_Msk                      _U_(0x800003FF)                                /**< (MTB_MASTER) Register Mask  */


/* -------- MTB_FLOW : (MTB Offset: 0x08) (R/W 32) MTB Flow -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t AUTOSTOP:1;                /**< bit:      0  Auto Stop Tracing                        */
    uint32_t AUTOHALT:1;                /**< bit:      1  Auto Halt Request                        */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t WATERMARK:29;              /**< bit:  3..31  Watermark value                          */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MTB_FLOW_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_FLOW_OFFSET                     (0x08)                                        /**<  (MTB_FLOW) MTB Flow  Offset */
#define MTB_FLOW_RESETVALUE                 _U_(0x00)                                     /**<  (MTB_FLOW) MTB Flow  Reset Value */

#define MTB_FLOW_AUTOSTOP_Pos               0                                              /**< (MTB_FLOW) Auto Stop Tracing Position */
#define MTB_FLOW_AUTOSTOP_Msk               (_U_(0x1) << MTB_FLOW_AUTOSTOP_Pos)            /**< (MTB_FLOW) Auto Stop Tracing Mask */
#define MTB_FLOW_AUTOSTOP                   MTB_FLOW_AUTOSTOP_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MTB_FLOW_AUTOSTOP_Msk instead */
#define MTB_FLOW_AUTOHALT_Pos               1                                              /**< (MTB_FLOW) Auto Halt Request Position */
#define MTB_FLOW_AUTOHALT_Msk               (_U_(0x1) << MTB_FLOW_AUTOHALT_Pos)            /**< (MTB_FLOW) Auto Halt Request Mask */
#define MTB_FLOW_AUTOHALT                   MTB_FLOW_AUTOHALT_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MTB_FLOW_AUTOHALT_Msk instead */
#define MTB_FLOW_WATERMARK_Pos              3                                              /**< (MTB_FLOW) Watermark value Position */
#define MTB_FLOW_WATERMARK_Msk              (_U_(0x1FFFFFFF) << MTB_FLOW_WATERMARK_Pos)    /**< (MTB_FLOW) Watermark value Mask */
#define MTB_FLOW_WATERMARK(value)           (MTB_FLOW_WATERMARK_Msk & ((value) << MTB_FLOW_WATERMARK_Pos))
#define MTB_FLOW_MASK                       _U_(0xFFFFFFFB)                                /**< \deprecated (MTB_FLOW) Register MASK  (Use MTB_FLOW_Msk instead)  */
#define MTB_FLOW_Msk                        _U_(0xFFFFFFFB)                                /**< (MTB_FLOW) Register Mask  */


/* -------- MTB_BASE : (MTB Offset: 0x0c) (R/ 32) MTB Base -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_BASE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_BASE_OFFSET                     (0x0C)                                        /**<  (MTB_BASE) MTB Base  Offset */

#define MTB_BASE_MASK                       _U_(0x00)                                      /**< \deprecated (MTB_BASE) Register MASK  (Use MTB_BASE_Msk instead)  */
#define MTB_BASE_Msk                        _U_(0x00)                                      /**< (MTB_BASE) Register Mask  */


/* -------- MTB_ITCTRL : (MTB Offset: 0xf00) (R/W 32) MTB Integration Mode Control -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_ITCTRL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_ITCTRL_OFFSET                   (0xF00)                                       /**<  (MTB_ITCTRL) MTB Integration Mode Control  Offset */

#define MTB_ITCTRL_MASK                     _U_(0x00)                                      /**< \deprecated (MTB_ITCTRL) Register MASK  (Use MTB_ITCTRL_Msk instead)  */
#define MTB_ITCTRL_Msk                      _U_(0x00)                                      /**< (MTB_ITCTRL) Register Mask  */


/* -------- MTB_CLAIMSET : (MTB Offset: 0xfa0) (R/W 32) MTB Claim Set -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_CLAIMSET_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_CLAIMSET_OFFSET                 (0xFA0)                                       /**<  (MTB_CLAIMSET) MTB Claim Set  Offset */

#define MTB_CLAIMSET_MASK                   _U_(0x00)                                      /**< \deprecated (MTB_CLAIMSET) Register MASK  (Use MTB_CLAIMSET_Msk instead)  */
#define MTB_CLAIMSET_Msk                    _U_(0x00)                                      /**< (MTB_CLAIMSET) Register Mask  */


/* -------- MTB_CLAIMCLR : (MTB Offset: 0xfa4) (R/W 32) MTB Claim Clear -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_CLAIMCLR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_CLAIMCLR_OFFSET                 (0xFA4)                                       /**<  (MTB_CLAIMCLR) MTB Claim Clear  Offset */

#define MTB_CLAIMCLR_MASK                   _U_(0x00)                                      /**< \deprecated (MTB_CLAIMCLR) Register MASK  (Use MTB_CLAIMCLR_Msk instead)  */
#define MTB_CLAIMCLR_Msk                    _U_(0x00)                                      /**< (MTB_CLAIMCLR) Register Mask  */


/* -------- MTB_LOCKACCESS : (MTB Offset: 0xfb0) (R/W 32) MTB Lock Access -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_LOCKACCESS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_LOCKACCESS_OFFSET               (0xFB0)                                       /**<  (MTB_LOCKACCESS) MTB Lock Access  Offset */

#define MTB_LOCKACCESS_MASK                 _U_(0x00)                                      /**< \deprecated (MTB_LOCKACCESS) Register MASK  (Use MTB_LOCKACCESS_Msk instead)  */
#define MTB_LOCKACCESS_Msk                  _U_(0x00)                                      /**< (MTB_LOCKACCESS) Register Mask  */


/* -------- MTB_LOCKSTATUS : (MTB Offset: 0xfb4) (R/ 32) MTB Lock Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_LOCKSTATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_LOCKSTATUS_OFFSET               (0xFB4)                                       /**<  (MTB_LOCKSTATUS) MTB Lock Status  Offset */

#define MTB_LOCKSTATUS_MASK                 _U_(0x00)                                      /**< \deprecated (MTB_LOCKSTATUS) Register MASK  (Use MTB_LOCKSTATUS_Msk instead)  */
#define MTB_LOCKSTATUS_Msk                  _U_(0x00)                                      /**< (MTB_LOCKSTATUS) Register Mask  */


/* -------- MTB_AUTHSTATUS : (MTB Offset: 0xfb8) (R/ 32) MTB Authentication Status -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_AUTHSTATUS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_AUTHSTATUS_OFFSET               (0xFB8)                                       /**<  (MTB_AUTHSTATUS) MTB Authentication Status  Offset */

#define MTB_AUTHSTATUS_MASK                 _U_(0x00)                                      /**< \deprecated (MTB_AUTHSTATUS) Register MASK  (Use MTB_AUTHSTATUS_Msk instead)  */
#define MTB_AUTHSTATUS_Msk                  _U_(0x00)                                      /**< (MTB_AUTHSTATUS) Register Mask  */


/* -------- MTB_DEVARCH : (MTB Offset: 0xfbc) (R/ 32) MTB Device Architecture -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_DEVARCH_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_DEVARCH_OFFSET                  (0xFBC)                                       /**<  (MTB_DEVARCH) MTB Device Architecture  Offset */

#define MTB_DEVARCH_MASK                    _U_(0x00)                                      /**< \deprecated (MTB_DEVARCH) Register MASK  (Use MTB_DEVARCH_Msk instead)  */
#define MTB_DEVARCH_Msk                     _U_(0x00)                                      /**< (MTB_DEVARCH) Register Mask  */


/* -------- MTB_DEVID : (MTB Offset: 0xfc8) (R/ 32) MTB Device Configuration -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_DEVID_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_DEVID_OFFSET                    (0xFC8)                                       /**<  (MTB_DEVID) MTB Device Configuration  Offset */

#define MTB_DEVID_MASK                      _U_(0x00)                                      /**< \deprecated (MTB_DEVID) Register MASK  (Use MTB_DEVID_Msk instead)  */
#define MTB_DEVID_Msk                       _U_(0x00)                                      /**< (MTB_DEVID) Register Mask  */


/* -------- MTB_DEVTYPE : (MTB Offset: 0xfcc) (R/ 32) MTB Device Type -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_DEVTYPE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_DEVTYPE_OFFSET                  (0xFCC)                                       /**<  (MTB_DEVTYPE) MTB Device Type  Offset */

#define MTB_DEVTYPE_MASK                    _U_(0x00)                                      /**< \deprecated (MTB_DEVTYPE) Register MASK  (Use MTB_DEVTYPE_Msk instead)  */
#define MTB_DEVTYPE_Msk                     _U_(0x00)                                      /**< (MTB_DEVTYPE) Register Mask  */


/* -------- MTB_PID4 : (MTB Offset: 0xfd0) (R/ 32) Peripheral Identification 4 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_PID4_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_PID4_OFFSET                     (0xFD0)                                       /**<  (MTB_PID4) Peripheral Identification 4  Offset */

#define MTB_PID4_MASK                       _U_(0x00)                                      /**< \deprecated (MTB_PID4) Register MASK  (Use MTB_PID4_Msk instead)  */
#define MTB_PID4_Msk                        _U_(0x00)                                      /**< (MTB_PID4) Register Mask  */


/* -------- MTB_PID5 : (MTB Offset: 0xfd4) (R/ 32) Peripheral Identification 5 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_PID5_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_PID5_OFFSET                     (0xFD4)                                       /**<  (MTB_PID5) Peripheral Identification 5  Offset */

#define MTB_PID5_MASK                       _U_(0x00)                                      /**< \deprecated (MTB_PID5) Register MASK  (Use MTB_PID5_Msk instead)  */
#define MTB_PID5_Msk                        _U_(0x00)                                      /**< (MTB_PID5) Register Mask  */


/* -------- MTB_PID6 : (MTB Offset: 0xfd8) (R/ 32) Peripheral Identification 6 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_PID6_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_PID6_OFFSET                     (0xFD8)                                       /**<  (MTB_PID6) Peripheral Identification 6  Offset */

#define MTB_PID6_MASK                       _U_(0x00)                                      /**< \deprecated (MTB_PID6) Register MASK  (Use MTB_PID6_Msk instead)  */
#define MTB_PID6_Msk                        _U_(0x00)                                      /**< (MTB_PID6) Register Mask  */


/* -------- MTB_PID7 : (MTB Offset: 0xfdc) (R/ 32) Peripheral Identification 7 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_PID7_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_PID7_OFFSET                     (0xFDC)                                       /**<  (MTB_PID7) Peripheral Identification 7  Offset */

#define MTB_PID7_MASK                       _U_(0x00)                                      /**< \deprecated (MTB_PID7) Register MASK  (Use MTB_PID7_Msk instead)  */
#define MTB_PID7_Msk                        _U_(0x00)                                      /**< (MTB_PID7) Register Mask  */


/* -------- MTB_PID0 : (MTB Offset: 0xfe0) (R/ 32) Peripheral Identification 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_PID0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_PID0_OFFSET                     (0xFE0)                                       /**<  (MTB_PID0) Peripheral Identification 0  Offset */

#define MTB_PID0_MASK                       _U_(0x00)                                      /**< \deprecated (MTB_PID0) Register MASK  (Use MTB_PID0_Msk instead)  */
#define MTB_PID0_Msk                        _U_(0x00)                                      /**< (MTB_PID0) Register Mask  */


/* -------- MTB_PID1 : (MTB Offset: 0xfe4) (R/ 32) Peripheral Identification 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_PID1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_PID1_OFFSET                     (0xFE4)                                       /**<  (MTB_PID1) Peripheral Identification 1  Offset */

#define MTB_PID1_MASK                       _U_(0x00)                                      /**< \deprecated (MTB_PID1) Register MASK  (Use MTB_PID1_Msk instead)  */
#define MTB_PID1_Msk                        _U_(0x00)                                      /**< (MTB_PID1) Register Mask  */


/* -------- MTB_PID2 : (MTB Offset: 0xfe8) (R/ 32) Peripheral Identification 2 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_PID2_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_PID2_OFFSET                     (0xFE8)                                       /**<  (MTB_PID2) Peripheral Identification 2  Offset */

#define MTB_PID2_MASK                       _U_(0x00)                                      /**< \deprecated (MTB_PID2) Register MASK  (Use MTB_PID2_Msk instead)  */
#define MTB_PID2_Msk                        _U_(0x00)                                      /**< (MTB_PID2) Register Mask  */


/* -------- MTB_PID3 : (MTB Offset: 0xfec) (R/ 32) Peripheral Identification 3 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_PID3_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_PID3_OFFSET                     (0xFEC)                                       /**<  (MTB_PID3) Peripheral Identification 3  Offset */

#define MTB_PID3_MASK                       _U_(0x00)                                      /**< \deprecated (MTB_PID3) Register MASK  (Use MTB_PID3_Msk instead)  */
#define MTB_PID3_Msk                        _U_(0x00)                                      /**< (MTB_PID3) Register Mask  */


/* -------- MTB_CID0 : (MTB Offset: 0xff0) (R/ 32) Component Identification 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_CID0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_CID0_OFFSET                     (0xFF0)                                       /**<  (MTB_CID0) Component Identification 0  Offset */

#define MTB_CID0_MASK                       _U_(0x00)                                      /**< \deprecated (MTB_CID0) Register MASK  (Use MTB_CID0_Msk instead)  */
#define MTB_CID0_Msk                        _U_(0x00)                                      /**< (MTB_CID0) Register Mask  */


/* -------- MTB_CID1 : (MTB Offset: 0xff4) (R/ 32) Component Identification 1 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_CID1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_CID1_OFFSET                     (0xFF4)                                       /**<  (MTB_CID1) Component Identification 1  Offset */

#define MTB_CID1_MASK                       _U_(0x00)                                      /**< \deprecated (MTB_CID1) Register MASK  (Use MTB_CID1_Msk instead)  */
#define MTB_CID1_Msk                        _U_(0x00)                                      /**< (MTB_CID1) Register Mask  */


/* -------- MTB_CID2 : (MTB Offset: 0xff8) (R/ 32) Component Identification 2 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_CID2_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_CID2_OFFSET                     (0xFF8)                                       /**<  (MTB_CID2) Component Identification 2  Offset */

#define MTB_CID2_MASK                       _U_(0x00)                                      /**< \deprecated (MTB_CID2) Register MASK  (Use MTB_CID2_Msk instead)  */
#define MTB_CID2_Msk                        _U_(0x00)                                      /**< (MTB_CID2) Register Mask  */


/* -------- MTB_CID3 : (MTB Offset: 0xffc) (R/ 32) Component Identification 3 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  uint32_t reg;                         /**< Type used for register access */
} MTB_CID3_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MTB_CID3_OFFSET                     (0xFFC)                                       /**<  (MTB_CID3) Component Identification 3  Offset */

#define MTB_CID3_MASK                       _U_(0x00)                                      /**< \deprecated (MTB_CID3) Register MASK  (Use MTB_CID3_Msk instead)  */
#define MTB_CID3_Msk                        _U_(0x00)                                      /**< (MTB_CID3) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief MTB hardware registers */
typedef struct {  /* Cortex-M0+ Micro-Trace Buffer */
  __IO uint32_t POSITION;       /**< (MTB Offset: 0x00) MTB Position */
  __IO uint32_t MASTER;         /**< (MTB Offset: 0x04) MTB Master */
  __IO uint32_t FLOW;           /**< (MTB Offset: 0x08) MTB Flow */
  __I  uint32_t BASE;           /**< (MTB Offset: 0x0C) MTB Base */
  __I  uint8_t                        Reserved1[3824];
  __IO uint32_t ITCTRL;         /**< (MTB Offset: 0xF00) MTB Integration Mode Control */
  __I  uint8_t                        Reserved2[156];
  __IO uint32_t CLAIMSET;       /**< (MTB Offset: 0xFA0) MTB Claim Set */
  __IO uint32_t CLAIMCLR;       /**< (MTB Offset: 0xFA4) MTB Claim Clear */
  __I  uint8_t                        Reserved3[8];
  __IO uint32_t LOCKACCESS;     /**< (MTB Offset: 0xFB0) MTB Lock Access */
  __I  uint32_t LOCKSTATUS;     /**< (MTB Offset: 0xFB4) MTB Lock Status */
  __I  uint32_t AUTHSTATUS;     /**< (MTB Offset: 0xFB8) MTB Authentication Status */
  __I  uint32_t DEVARCH;        /**< (MTB Offset: 0xFBC) MTB Device Architecture */
  __I  uint8_t                        Reserved4[8];
  __I  uint32_t DEVID;          /**< (MTB Offset: 0xFC8) MTB Device Configuration */
  __I  uint32_t DEVTYPE;        /**< (MTB Offset: 0xFCC) MTB Device Type */
  __I  uint32_t PID4;           /**< (MTB Offset: 0xFD0) Peripheral Identification 4 */
  __I  uint32_t PID5;           /**< (MTB Offset: 0xFD4) Peripheral Identification 5 */
  __I  uint32_t PID6;           /**< (MTB Offset: 0xFD8) Peripheral Identification 6 */
  __I  uint32_t PID7;           /**< (MTB Offset: 0xFDC) Peripheral Identification 7 */
  __I  uint32_t PID0;           /**< (MTB Offset: 0xFE0) Peripheral Identification 0 */
  __I  uint32_t PID1;           /**< (MTB Offset: 0xFE4) Peripheral Identification 1 */
  __I  uint32_t PID2;           /**< (MTB Offset: 0xFE8) Peripheral Identification 2 */
  __I  uint32_t PID3;           /**< (MTB Offset: 0xFEC) Peripheral Identification 3 */
  __I  uint32_t CID0;           /**< (MTB Offset: 0xFF0) Component Identification 0 */
  __I  uint32_t CID1;           /**< (MTB Offset: 0xFF4) Component Identification 1 */
  __I  uint32_t CID2;           /**< (MTB Offset: 0xFF8) Component Identification 2 */
  __I  uint32_t CID3;           /**< (MTB Offset: 0xFFC) Component Identification 3 */
} Mtb;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief MTB hardware registers */
typedef struct {  /* Cortex-M0+ Micro-Trace Buffer */
  __IO MTB_POSITION_Type              POSITION;       /**< Offset: 0x00 (R/W  32) MTB Position */
  __IO MTB_MASTER_Type                MASTER;         /**< Offset: 0x04 (R/W  32) MTB Master */
  __IO MTB_FLOW_Type                  FLOW;           /**< Offset: 0x08 (R/W  32) MTB Flow */
  __I  MTB_BASE_Type                  BASE;           /**< Offset: 0x0C (R/   32) MTB Base */
  __I  uint8_t                        Reserved1[3824];
  __IO MTB_ITCTRL_Type                ITCTRL;         /**< Offset: 0xF00 (R/W  32) MTB Integration Mode Control */
  __I  uint8_t                        Reserved2[156];
  __IO MTB_CLAIMSET_Type              CLAIMSET;       /**< Offset: 0xFA0 (R/W  32) MTB Claim Set */
  __IO MTB_CLAIMCLR_Type              CLAIMCLR;       /**< Offset: 0xFA4 (R/W  32) MTB Claim Clear */
  __I  uint8_t                        Reserved3[8];
  __IO MTB_LOCKACCESS_Type            LOCKACCESS;     /**< Offset: 0xFB0 (R/W  32) MTB Lock Access */
  __I  MTB_LOCKSTATUS_Type            LOCKSTATUS;     /**< Offset: 0xFB4 (R/   32) MTB Lock Status */
  __I  MTB_AUTHSTATUS_Type            AUTHSTATUS;     /**< Offset: 0xFB8 (R/   32) MTB Authentication Status */
  __I  MTB_DEVARCH_Type               DEVARCH;        /**< Offset: 0xFBC (R/   32) MTB Device Architecture */
  __I  uint8_t                        Reserved4[8];
  __I  MTB_DEVID_Type                 DEVID;          /**< Offset: 0xFC8 (R/   32) MTB Device Configuration */
  __I  MTB_DEVTYPE_Type               DEVTYPE;        /**< Offset: 0xFCC (R/   32) MTB Device Type */
  __I  MTB_PID4_Type                  PID4;           /**< Offset: 0xFD0 (R/   32) Peripheral Identification 4 */
  __I  MTB_PID5_Type                  PID5;           /**< Offset: 0xFD4 (R/   32) Peripheral Identification 5 */
  __I  MTB_PID6_Type                  PID6;           /**< Offset: 0xFD8 (R/   32) Peripheral Identification 6 */
  __I  MTB_PID7_Type                  PID7;           /**< Offset: 0xFDC (R/   32) Peripheral Identification 7 */
  __I  MTB_PID0_Type                  PID0;           /**< Offset: 0xFE0 (R/   32) Peripheral Identification 0 */
  __I  MTB_PID1_Type                  PID1;           /**< Offset: 0xFE4 (R/   32) Peripheral Identification 1 */
  __I  MTB_PID2_Type                  PID2;           /**< Offset: 0xFE8 (R/   32) Peripheral Identification 2 */
  __I  MTB_PID3_Type                  PID3;           /**< Offset: 0xFEC (R/   32) Peripheral Identification 3 */
  __I  MTB_CID0_Type                  CID0;           /**< Offset: 0xFF0 (R/   32) Component Identification 0 */
  __I  MTB_CID1_Type                  CID1;           /**< Offset: 0xFF4 (R/   32) Component Identification 1 */
  __I  MTB_CID2_Type                  CID2;           /**< Offset: 0xFF8 (R/   32) Component Identification 2 */
  __I  MTB_CID3_Type                  CID3;           /**< Offset: 0xFFC (R/   32) Component Identification 3 */
} Mtb;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  b'end of Cortex-M0+ Micro-Trace Buffer' */

#endif /* _WLR089_MTB_COMPONENT_H_ */
