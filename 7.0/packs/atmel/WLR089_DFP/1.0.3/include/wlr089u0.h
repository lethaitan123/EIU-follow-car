/**
 * \brief Header file for WLR089U0
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
#ifndef _WLR089U0_H_
#define _WLR089U0_H_

/** \addtogroup WLR089U0_definitions b'WLR089U0 definitions
  This file defines all structures and symbols for WLR089U0:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions'
 *  @{
 */

#ifdef __cplusplus
 extern "C" {
#endif

/** \defgroup Atmel_glob_defs b'Atmel Global Defines

    <strong>IO Type Qualifiers</strong> are used
    \li to specify the access to peripheral variables.
    \li for automatic generation of peripheral register debug information.

    \\remark
    CMSIS core has a syntax that differs from this using i.e. __I, __O, or __IO followed by 'uint<size>_t' respective types.
    Default the header files will follow the CMSIS core syntax.'
 *  @{
 */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#include <stdint.h>

/* IO definitions (access restrictions to peripheral registers) */
#ifndef __cplusplus
typedef volatile const uint32_t RoReg;   /**< Read only 32-bit register (volatile const unsigned int) */
typedef volatile const uint16_t RoReg16; /**< Read only 16-bit register (volatile const unsigned int) */
typedef volatile const uint8_t  RoReg8;  /**< Read only  8-bit register (volatile const unsigned int) */
#else
typedef volatile       uint32_t RoReg;   /**< Read only 32-bit register (volatile const unsigned int) */
typedef volatile       uint16_t RoReg16; /**< Read only 16-bit register (volatile const unsigned int) */
typedef volatile       uint8_t  RoReg8;  /**< Read only  8-bit register (volatile const unsigned int) */
#endif
typedef volatile       uint32_t WoReg;   /**< Write only 32-bit register (volatile unsigned int) */
typedef volatile       uint16_t WoReg16; /**< Write only 16-bit register (volatile unsigned int) */
typedef volatile       uint8_t  WoReg8;  /**< Write only  8-bit register (volatile unsigned int) */
typedef volatile       uint32_t RwReg;   /**< Read-Write 32-bit register (volatile unsigned int) */
typedef volatile       uint16_t RwReg16; /**< Read-Write 16-bit register (volatile unsigned int) */
typedef volatile       uint8_t  RwReg8;  /**< Read-Write  8-bit register (volatile unsigned int) */

#define CAST(type, value) ((type *)(value)) /**< Pointer Type Conversion Macro for C/C++ */
#define REG_ACCESS(type, address) (*(type*)(address)) /**< C code: Register value */
#else /* Assembler */
#define CAST(type, value) (value) /**< Pointer Type Conversion Macro for Assembler */
#define REG_ACCESS(type, address) (address) /**< Assembly code: Register address */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !defined(SKIP_INTEGER_LITERALS)

#if defined(_U_) || defined(_L_) || defined(_UL_)
  #error "Integer Literals macros already defined elsewhere"
#endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Macros that deal with adding suffixes to integer literal constants for C/C++ */
#define _U_(x) x ## U    /**< C code: Unsigned integer literal constant value */
#define _L_(x) x ## L    /**< C code: Long integer literal constant value */
#define _UL_(x) x ## UL  /**< C code: Unsigned Long integer literal constant value */

#else /* Assembler */

#define _U_(x) x    /**< Assembler: Unsigned integer literal constant value */
#define _L_(x) x    /**< Assembler: Long integer literal constant value */
#define _UL_(x) x   /**< Assembler: Unsigned Long integer literal constant value */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* SKIP_INTEGER_LITERALS */
/** @}  b'end of Atmel Global Defines' */

/** \addtogroup WLR089U0_cmsis b'CMSIS Definitions'
 *  @{
 */
/* ************************************************************************** */
/*   CMSIS DEFINITIONS FOR WLR089U0 */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-M0PLUS Processor Exceptions Numbers ******************************/
  Reset_IRQn                = -15, /**< 1   Reset Vector, invoked on Power up and warm reset  */
  NonMaskableInt_IRQn       = -14, /**< 2   Non maskable Interrupt, cannot be stopped or preempted  */
  HardFault_IRQn            = -13, /**< 3   Hard Fault, all classes of Fault     */
  SVCall_IRQn               = -5 , /**< 11  System Service Call via SVC instruction  */
  PendSV_IRQn               = -2 , /**< 14  Pendable request for system service  */
  SysTick_IRQn              = -1 , /**< 15  System Tick Timer                    */
/******  WLR089U0 specific Interrupt Numbers ***********************************/
  SYSTEM_IRQn               = 0  , /**< 0   WLR089U0 Main Clock (MCLK)          */
  WDT_IRQn                  = 1  , /**< 1   WLR089U0 Watchdog Timer (WDT)       */
  RTC_IRQn                  = 2  , /**< 2   WLR089U0 Real-Time Counter (RTC)    */
  EIC_IRQn                  = 3  , /**< 3   WLR089U0 External Interrupt Controller (EIC) */
  NVMCTRL_IRQn              = 4  , /**< 4   WLR089U0 Non-Volatile Memory Controller (NVMCTRL) */
  DMAC_IRQn                 = 5  , /**< 5   WLR089U0 Direct Memory Access Controller (DMAC) */
  USB_IRQn                  = 6  , /**< 6   WLR089U0 Universal Serial Bus (USB) */
  EVSYS_IRQn                = 7  , /**< 7   WLR089U0 Event System Interface (EVSYS) */
  SERCOM0_IRQn              = 8  , /**< 8   WLR089U0 Serial Communication Interface (SERCOM0) */
  SERCOM1_IRQn              = 9  , /**< 9   WLR089U0 Serial Communication Interface (SERCOM1) */
  SERCOM2_IRQn              = 10 , /**< 10  WLR089U0 Serial Communication Interface (SERCOM2) */
  SERCOM3_IRQn              = 11 , /**< 11  WLR089U0 Serial Communication Interface (SERCOM3) */
  SERCOM4_IRQn              = 12 , /**< 12  WLR089U0 Serial Communication Interface (SERCOM4) */
  SERCOM5_IRQn              = 13 , /**< 13  WLR089U0 Serial Communication Interface (SERCOM5) */
  TCC0_IRQn                 = 14 , /**< 14  WLR089U0 Timer Counter Control (TCC0) */
  TCC1_IRQn                 = 15 , /**< 15  WLR089U0 Timer Counter Control (TCC1) */
  TCC2_IRQn                 = 16 , /**< 16  WLR089U0 Timer Counter Control (TCC2) */
  TC0_IRQn                  = 17 , /**< 17  WLR089U0 Basic Timer Counter (TC0)  */
  TC1_IRQn                  = 18 , /**< 18  WLR089U0 Basic Timer Counter (TC1)  */
  TC2_IRQn                  = 19 , /**< 19  WLR089U0 Basic Timer Counter (TC2)  */
  TC3_IRQn                  = 20 , /**< 20  WLR089U0 Basic Timer Counter (TC3)  */
  TC4_IRQn                  = 21 , /**< 21  WLR089U0 Basic Timer Counter (TC4)  */
  ADC_IRQn                  = 22 , /**< 22  WLR089U0 Analog Digital Converter (ADC) */
  AC_IRQn                   = 23 , /**< 23  WLR089U0 Analog Comparators (AC)    */
  DAC_IRQn                  = 24 , /**< 24  WLR089U0 Digital-to-Analog Converter (DAC) */
  PTC_IRQn                  = 25 , /**< 25  WLR089U0 Peripheral Touch Controller (PTC) */
  AES_IRQn                  = 26 , /**< 26  WLR089U0 Advanced Encryption Standard (AES) */
  TRNG_IRQn                 = 27 , /**< 27  WLR089U0 True Random Generator (TRNG) */

  PERIPH_COUNT_IRQn        = 28  /**< Number of peripheral IDs */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  /* Cortex-M handlers */
  void* pfnReset_Handler;                        /* -15 Reset Vector, invoked on Power up and warm reset  */
  void* pfnNonMaskableInt_Handler;               /* -14 Non maskable Interrupt, cannot be stopped or preempted  */
  void* pfnHardFault_Handler;                    /* -13 Hard Fault, all classes of Fault     */
  void* pvReservedC12;
  void* pvReservedC11;
  void* pvReservedC10;
  void* pvReservedC9;
  void* pvReservedC8;
  void* pvReservedC7;
  void* pvReservedC6;
  void* pfnSVCall_Handler;                       /*  -5 System Service Call via SVC instruction  */
  void* pvReservedC4;
  void* pvReservedC3;
  void* pfnPendSV_Handler;                       /*  -2 Pendable request for system service  */
  void* pfnSysTick_Handler;                      /*  -1 System Tick Timer                    */


  /* Peripheral handlers */
  void* pfnSYSTEM_Handler;                       /* 0   WLR089U0 Main Clock (MCLK)     */
  void* pfnWDT_Handler;                          /* 1   WLR089U0 Watchdog Timer (WDT)  */
  void* pfnRTC_Handler;                          /* 2   WLR089U0 Real-Time Counter (RTC) */
  void* pfnEIC_Handler;                          /* 3   WLR089U0 External Interrupt Controller (EIC) */
  void* pfnNVMCTRL_Handler;                      /* 4   WLR089U0 Non-Volatile Memory Controller (NVMCTRL) */
  void* pfnDMAC_Handler;                         /* 5   WLR089U0 Direct Memory Access Controller (DMAC) */
  void* pfnUSB_Handler;                          /* 6   WLR089U0 Universal Serial Bus (USB) */
  void* pfnEVSYS_Handler;                        /* 7   WLR089U0 Event System Interface (EVSYS) */
  void* pfnSERCOM0_Handler;                      /* 8   WLR089U0 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM1_Handler;                      /* 9   WLR089U0 Serial Communication Interface (SERCOM1) */
  void* pfnSERCOM2_Handler;                      /* 10  WLR089U0 Serial Communication Interface (SERCOM2) */
  void* pfnSERCOM3_Handler;                      /* 11  WLR089U0 Serial Communication Interface (SERCOM3) */
  void* pfnSERCOM4_Handler;                      /* 12  WLR089U0 Serial Communication Interface (SERCOM4) */
  void* pfnSERCOM5_Handler;                      /* 13  WLR089U0 Serial Communication Interface (SERCOM5) */
  void* pfnTCC0_Handler;                         /* 14  WLR089U0 Timer Counter Control (TCC0) */
  void* pfnTCC1_Handler;                         /* 15  WLR089U0 Timer Counter Control (TCC1) */
  void* pfnTCC2_Handler;                         /* 16  WLR089U0 Timer Counter Control (TCC2) */
  void* pfnTC0_Handler;                          /* 17  WLR089U0 Basic Timer Counter (TC0) */
  void* pfnTC1_Handler;                          /* 18  WLR089U0 Basic Timer Counter (TC1) */
  void* pfnTC2_Handler;                          /* 19  WLR089U0 Basic Timer Counter (TC2) */
  void* pfnTC3_Handler;                          /* 20  WLR089U0 Basic Timer Counter (TC3) */
  void* pfnTC4_Handler;                          /* 21  WLR089U0 Basic Timer Counter (TC4) */
  void* pfnADC_Handler;                          /* 22  WLR089U0 Analog Digital Converter (ADC) */
  void* pfnAC_Handler;                           /* 23  WLR089U0 Analog Comparators (AC) */
  void* pfnDAC_Handler;                          /* 24  WLR089U0 Digital-to-Analog Converter (DAC) */
  void* pfnPTC_Handler;                          /* 25  WLR089U0 Peripheral Touch Controller (PTC) */
  void* pfnAES_Handler;                          /* 26  WLR089U0 Advanced Encryption Standard (AES) */
  void* pfnTRNG_Handler;                         /* 27  WLR089U0 True Random Generator (TRNG) */
} DeviceVectors;

/* Defines for Deprecated Interrupt and Exceptions handler names */
#define pfnMemManage_Handler      pfnMemoryManagement_Handler     /**< \deprecated  Backward compatibility for ASF */
#define pfnDebugMon_Handler       pfnDebugMonitor_Handler         /**< \deprecated  Backward compatibility for ASF */
#define pfnNMI_Handler            pfnNonMaskableInt_Handler       /**< \deprecated  Backward compatibility for ASF */
#define pfnSVC_Handler            pfnSVCall_Handler               /**< \deprecated  Backward compatibility for ASF */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if !defined DONT_USE_PREDEFINED_CORE_HANDLERS

/* CORTEX-M0PLUS core handlers */
void Reset_Handler                 ( void );
void NonMaskableInt_Handler        ( void );
void HardFault_Handler             ( void );
void SVCall_Handler                ( void );
void PendSV_Handler                ( void );
void SysTick_Handler               ( void );
#endif /* DONT_USE_PREDEFINED_CORE_HANDLERS */

#if !defined DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS

/* Peripherals handlers */
void AC_Handler                    ( void );
void ADC_Handler                   ( void );
void AES_Handler                   ( void );
void DAC_Handler                   ( void );
void DMAC_Handler                  ( void );
void EIC_Handler                   ( void );
void EVSYS_Handler                 ( void );
void NVMCTRL_Handler               ( void );
void PTC_Handler                   ( void );
void RTC_Handler                   ( void );
void SERCOM0_Handler               ( void );
void SERCOM1_Handler               ( void );
void SERCOM2_Handler               ( void );
void SERCOM3_Handler               ( void );
void SERCOM4_Handler               ( void );
void SERCOM5_Handler               ( void );
void SYSTEM_Handler                ( void );
void TC0_Handler                   ( void );
void TC1_Handler                   ( void );
void TC2_Handler                   ( void );
void TC3_Handler                   ( void );
void TC4_Handler                   ( void );
void TCC0_Handler                  ( void );
void TCC1_Handler                  ( void );
void TCC2_Handler                  ( void );
void TRNG_Handler                  ( void );
void USB_Handler                   ( void );
void WDT_Handler                   ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */


/* Defines for Deprecated Interrupt and Exceptions handler names */
#define MemManage_Handler         MemoryManagement_Handler        /**< \deprecated  Backward compatibility for ASF */
#define DebugMon_Handler          DebugMonitor_Handler            /**< \deprecated  Backward compatibility for ASF */
#define NMI_Handler               NonMaskableInt_Handler          /**< \deprecated  Backward compatibility for ASF */
#define SVC_Handler               SVCall_Handler                  /**< \deprecated  Backward compatibility for ASF */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */


/*
 * \brief Configuration of the CORTEX-M0PLUS Processor and Core Peripherals
 */

#define NUM_IRQ                       29 /**< Number of interrupt request lines                                         */
#define __CM0PLUS_REV             0x0001 /**< Cortex-M0+ Core Revision                                                  */
#define __MPU_PRESENT                  0 /**< MPU present or not                                                        */
#define __NVIC_PRIO_BITS               2 /**< Number of Bits used for Priority Levels                                   */
#define __VTOR_PRESENT                 1 /**< Vector Table Offset Register present or not                               */
#define __Vendor_SysTickConfig         0 /**< Set to 1 if different SysTick Config is used                              */
#define __ARCH_ARM                     1
#define __ARCH_ARM_CORTEX_M            1
#define __DEVICE_IS_SAM                1

/*
 * \brief CMSIS includes
 */
#include <core_cm0plus.h>
#if !defined DONT_USE_CMSIS_INIT
#include "system_wlr089.h"
#endif /* DONT_USE_CMSIS_INIT */

/** @}  b'end of WLR089U0_cmsis CMSIS Definitions' */

/** \defgroup WLR089U0_api b'Peripheral Software API'
 *  @{
 */

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR WLR089U0 */
/* ************************************************************************** */
#include "component/ac.h"
#include "component/adc.h"
#include "component/aes.h"
#include "component/ccl.h"
#include "component/dac.h"
#include "component/dmac.h"
#include "component/dsu.h"
#include "component/eic.h"
#include "component/evsys.h"
#include "component/gclk.h"
#include "component/mclk.h"
#include "component/mtb.h"
#include "component/nvmctrl.h"
#include "component/oscctrl.h"
#include "component/osc32kctrl.h"
#include "component/pac.h"
#include "component/pm.h"
#include "component/port.h"
#include "component/ptc.h"
#include "component/rstc.h"
#include "component/rtc.h"
#include "component/sercom.h"
#include "component/supc.h"
#include "component/tc.h"
#include "component/tcc.h"
#include "component/trng.h"
#include "component/usb.h"
#include "component/wdt.h"
/** @}  b'end of Peripheral Software API' */

/** \defgroup WLR089U0_reg b'Registers Access Definitions'
 *  @{
 */

/* ************************************************************************** */
/*   REGISTER ACCESS DEFINITIONS FOR WLR089U0 */
/* ************************************************************************** */
#include "instance/ac.h"
#include "instance/adc.h"
#include "instance/aes.h"
#include "instance/ccl.h"
#include "instance/dac.h"
#include "instance/dmac.h"
#include "instance/dsu.h"
#include "instance/eic.h"
#include "instance/evsys.h"
#include "instance/gclk.h"
#include "instance/mclk.h"
#include "instance/mtb.h"
#include "instance/nvmctrl.h"
#include "instance/oscctrl.h"
#include "instance/osc32kctrl.h"
#include "instance/pac.h"
#include "instance/pm.h"
#include "instance/port.h"
#include "instance/ptc.h"
#include "instance/rstc.h"
#include "instance/rtc.h"
#include "instance/sercom0.h"
#include "instance/sercom1.h"
#include "instance/sercom2.h"
#include "instance/sercom3.h"
#include "instance/sercom4.h"
#include "instance/sercom5.h"
#include "instance/supc.h"
#include "instance/tc0.h"
#include "instance/tc1.h"
#include "instance/tc2.h"
#include "instance/tc3.h"
#include "instance/tc4.h"
#include "instance/tcc0.h"
#include "instance/tcc1.h"
#include "instance/tcc2.h"
#include "instance/trng.h"
#include "instance/usb.h"
#include "instance/wdt.h"
/** @}  b'end of Registers Access Definitions' */

/** \addtogroup WLR089U0_id b'Peripheral Ids Definitions'
 *  @{
 */

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR WLR089U0 */
/* ************************************************************************** */
#define ID_PM           (  0) /**< \brief Power Manager (PM) */
#define ID_MCLK         (  1) /**< \brief Main Clock (MCLK) */
#define ID_RSTC         (  2) /**< \brief Reset Controller (RSTC) */
#define ID_OSCCTRL      (  3) /**< \brief Oscillators Control (OSCCTRL) */
#define ID_OSC32KCTRL   (  4) /**< \brief 32k Oscillators Control (OSC32KCTRL) */
#define ID_SUPC         (  5) /**< \brief Supply Controller (SUPC) */
#define ID_GCLK         (  6) /**< \brief Generic Clock Generator (GCLK) */
#define ID_WDT          (  7) /**< \brief Watchdog Timer (WDT) */
#define ID_RTC          (  8) /**< \brief Real-Time Counter (RTC) */
#define ID_EIC          (  9) /**< \brief External Interrupt Controller (EIC) */
#define ID_PORT         ( 10) /**< \brief Port Module (PORT) */
#define ID_USB          ( 32) /**< \brief Universal Serial Bus (USB) */
#define ID_DSU          ( 33) /**< \brief Device Service Unit (DSU) */
#define ID_NVMCTRL      ( 34) /**< \brief Non-Volatile Memory Controller (NVMCTRL) */
#define ID_MTB          ( 35) /**< \brief Cortex-M0+ Micro-Trace Buffer (MTB) */
#define ID_SERCOM0      ( 64) /**< \brief Serial Communication Interface (SERCOM0) */
#define ID_SERCOM1      ( 65) /**< \brief Serial Communication Interface (SERCOM1) */
#define ID_SERCOM2      ( 66) /**< \brief Serial Communication Interface (SERCOM2) */
#define ID_SERCOM3      ( 67) /**< \brief Serial Communication Interface (SERCOM3) */
#define ID_SERCOM4      ( 68) /**< \brief Serial Communication Interface (SERCOM4) */
#define ID_TCC0         ( 69) /**< \brief Timer Counter Control (TCC0) */
#define ID_TCC1         ( 70) /**< \brief Timer Counter Control (TCC1) */
#define ID_TCC2         ( 71) /**< \brief Timer Counter Control (TCC2) */
#define ID_TC0          ( 72) /**< \brief Basic Timer Counter (TC0) */
#define ID_TC1          ( 73) /**< \brief Basic Timer Counter (TC1) */
#define ID_TC2          ( 74) /**< \brief Basic Timer Counter (TC2) */
#define ID_TC3          ( 75) /**< \brief Basic Timer Counter (TC3) */
#define ID_DAC          ( 76) /**< \brief Digital-to-Analog Converter (DAC) */
#define ID_AES          ( 77) /**< \brief Advanced Encryption Standard (AES) */
#define ID_TRNG         ( 78) /**< \brief True Random Generator (TRNG) */
#define ID_EVSYS        ( 96) /**< \brief Event System Interface (EVSYS) */
#define ID_SERCOM5      ( 97) /**< \brief Serial Communication Interface (SERCOM5) */
#define ID_TC4          ( 98) /**< \brief Basic Timer Counter (TC4) */
#define ID_ADC          ( 99) /**< \brief Analog Digital Converter (ADC) */
#define ID_AC           (100) /**< \brief Analog Comparators (AC) */
#define ID_PTC          (101) /**< \brief Peripheral Touch Controller (PTC) */
#define ID_CCL          (103) /**< \brief Configurable Custom Logic (CCL) */
#define ID_PAC          (128) /**< \brief Peripheral Access Controller (PAC) */
#define ID_DMAC         (129) /**< \brief Direct Memory Access Controller (DMAC) */

#define ID_PERIPH_COUNT (130) /**< \brief Number of peripheral IDs */
/** @}  b'end of Peripheral Ids Definitions' */

/** \addtogroup WLR089U0_base b'Peripheral Base Address Definitions'
 *  @{
 */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR WLR089U0 */
/* ************************************************************************** */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define AC                     (0x43001000)                   /**< \brief (AC        ) Base Address */
#define ADC                    (0x43000C00)                   /**< \brief (ADC       ) Base Address */
#define AES                    (0x42003400)                   /**< \brief (AES       ) Base Address */
#define CCL                    (0x43001C00)                   /**< \brief (CCL       ) Base Address */
#define DAC                    (0x42003000)                   /**< \brief (DAC       ) Base Address */
#define DMAC                   (0x44000400)                   /**< \brief (DMAC      ) Base Address */
#define DSU                    (0x41002000)                   /**< \brief (DSU       ) Base Address */
#define EIC                    (0x40002400)                   /**< \brief (EIC       ) Base Address */
#define EVSYS                  (0x43000000)                   /**< \brief (EVSYS     ) Base Address */
#define GCLK                   (0x40001800)                   /**< \brief (GCLK      ) Base Address */
#define MCLK                   (0x40000400)                   /**< \brief (MCLK      ) Base Address */
#define MTB                    (0x41006000)                   /**< \brief (MTB       ) Base Address */
#define NVMCTRL                (0x41004000)                   /**< \brief (NVMCTRL   ) Base Address */
#define OSCCTRL                (0x40000C00)                   /**< \brief (OSCCTRL   ) Base Address */
#define OSC32KCTRL             (0x40001000)                   /**< \brief (OSC32KCTRL) Base Address */
#define PAC                    (0x44000000)                   /**< \brief (PAC       ) Base Address */
#define PM                     (0x40000000)                   /**< \brief (PM        ) Base Address */
#define PORT                   (0x40002800)                   /**< \brief (PORT      ) Base Address */
#define PORT_IOBUS             (0x60000000)                   /**< \brief (PORT      ) Base Address */
#define PTC                    (0x43001400)                   /**< \brief (PTC       ) Base Address */
#define RSTC                   (0x40000800)                   /**< \brief (RSTC      ) Base Address */
#define RTC                    (0x40002000)                   /**< \brief (RTC       ) Base Address */
#define SERCOM0                (0x42000000)                   /**< \brief (SERCOM0   ) Base Address */
#define SERCOM1                (0x42000400)                   /**< \brief (SERCOM1   ) Base Address */
#define SERCOM2                (0x42000800)                   /**< \brief (SERCOM2   ) Base Address */
#define SERCOM3                (0x42000C00)                   /**< \brief (SERCOM3   ) Base Address */
#define SERCOM4                (0x42001000)                   /**< \brief (SERCOM4   ) Base Address */
#define SERCOM5                (0x43000400)                   /**< \brief (SERCOM5   ) Base Address */
#define SUPC                   (0x40001400)                   /**< \brief (SUPC      ) Base Address */
#define TC0                    (0x42002000)                   /**< \brief (TC0       ) Base Address */
#define TC1                    (0x42002400)                   /**< \brief (TC1       ) Base Address */
#define TC2                    (0x42002800)                   /**< \brief (TC2       ) Base Address */
#define TC3                    (0x42002C00)                   /**< \brief (TC3       ) Base Address */
#define TC4                    (0x43000800)                   /**< \brief (TC4       ) Base Address */
#define TCC0                   (0x42001400)                   /**< \brief (TCC0      ) Base Address */
#define TCC1                   (0x42001800)                   /**< \brief (TCC1      ) Base Address */
#define TCC2                   (0x42001C00)                   /**< \brief (TCC2      ) Base Address */
#define TRNG                   (0x42003800)                   /**< \brief (TRNG      ) Base Address */
#define USB                    (0x41000000)                   /**< \brief (USB       ) Base Address */
#define WDT                    (0x40001C00)                   /**< \brief (WDT       ) Base Address */

#else /* For C/C++ compiler */

#define AC                     ((Ac *)0x43001000U)            /**< \brief (AC        ) Base Address */
#define AC_INST_NUM            1                              /**< \brief (AC        ) Number of instances */
#define AC_INSTS               { AC }                         /**< \brief (AC        ) Instances List */

#define ADC                    ((Adc *)0x43000C00U)           /**< \brief (ADC       ) Base Address */
#define ADC_INST_NUM           1                              /**< \brief (ADC       ) Number of instances */
#define ADC_INSTS              { ADC }                        /**< \brief (ADC       ) Instances List */

#define AES                    ((Aes *)0x42003400U)           /**< \brief (AES       ) Base Address */
#define AES_INST_NUM           1                              /**< \brief (AES       ) Number of instances */
#define AES_INSTS              { AES }                        /**< \brief (AES       ) Instances List */

#define CCL                    ((Ccl *)0x43001C00U)           /**< \brief (CCL       ) Base Address */
#define CCL_INST_NUM           1                              /**< \brief (CCL       ) Number of instances */
#define CCL_INSTS              { CCL }                        /**< \brief (CCL       ) Instances List */

#define DAC                    ((Dac *)0x42003000U)           /**< \brief (DAC       ) Base Address */
#define DAC_INST_NUM           1                              /**< \brief (DAC       ) Number of instances */
#define DAC_INSTS              { DAC }                        /**< \brief (DAC       ) Instances List */

#define DMAC                   ((Dmac *)0x44000400U)          /**< \brief (DMAC      ) Base Address */
#define DMAC_INST_NUM          1                              /**< \brief (DMAC      ) Number of instances */
#define DMAC_INSTS             { DMAC }                       /**< \brief (DMAC      ) Instances List */

#define DSU                    ((Dsu *)0x41002000U)           /**< \brief (DSU       ) Base Address */
#define DSU_INST_NUM           1                              /**< \brief (DSU       ) Number of instances */
#define DSU_INSTS              { DSU }                        /**< \brief (DSU       ) Instances List */

#define EIC                    ((Eic *)0x40002400U)           /**< \brief (EIC       ) Base Address */
#define EIC_INST_NUM           1                              /**< \brief (EIC       ) Number of instances */
#define EIC_INSTS              { EIC }                        /**< \brief (EIC       ) Instances List */

#define EVSYS                  ((Evsys *)0x43000000U)         /**< \brief (EVSYS     ) Base Address */
#define EVSYS_INST_NUM         1                              /**< \brief (EVSYS     ) Number of instances */
#define EVSYS_INSTS            { EVSYS }                      /**< \brief (EVSYS     ) Instances List */

#define GCLK                   ((Gclk *)0x40001800U)          /**< \brief (GCLK      ) Base Address */
#define GCLK_INST_NUM          1                              /**< \brief (GCLK      ) Number of instances */
#define GCLK_INSTS             { GCLK }                       /**< \brief (GCLK      ) Instances List */

#define MCLK                   ((Mclk *)0x40000400U)          /**< \brief (MCLK      ) Base Address */
#define MCLK_INST_NUM          1                              /**< \brief (MCLK      ) Number of instances */
#define MCLK_INSTS             { MCLK }                       /**< \brief (MCLK      ) Instances List */

#define MTB                    ((Mtb *)0x41006000U)           /**< \brief (MTB       ) Base Address */
#define MTB_INST_NUM           1                              /**< \brief (MTB       ) Number of instances */
#define MTB_INSTS              { MTB }                        /**< \brief (MTB       ) Instances List */

#define NVMCTRL                ((Nvmctrl *)0x41004000U)       /**< \brief (NVMCTRL   ) Base Address */
#define NVMCTRL_INST_NUM       1                              /**< \brief (NVMCTRL   ) Number of instances */
#define NVMCTRL_INSTS          { NVMCTRL }                    /**< \brief (NVMCTRL   ) Instances List */

#define OSCCTRL                ((Oscctrl *)0x40000C00U)       /**< \brief (OSCCTRL   ) Base Address */
#define OSCCTRL_INST_NUM       1                              /**< \brief (OSCCTRL   ) Number of instances */
#define OSCCTRL_INSTS          { OSCCTRL }                    /**< \brief (OSCCTRL   ) Instances List */

#define OSC32KCTRL             ((Osc32kctrl *)0x40001000U)    /**< \brief (OSC32KCTRL) Base Address */
#define OSC32KCTRL_INST_NUM    1                              /**< \brief (OSC32KCTRL) Number of instances */
#define OSC32KCTRL_INSTS       { OSC32KCTRL }                 /**< \brief (OSC32KCTRL) Instances List */

#define PAC                    ((Pac *)0x44000000U)           /**< \brief (PAC       ) Base Address */
#define PAC_INST_NUM           1                              /**< \brief (PAC       ) Number of instances */
#define PAC_INSTS              { PAC }                        /**< \brief (PAC       ) Instances List */

#define PM                     ((Pm *)0x40000000U)            /**< \brief (PM        ) Base Address */
#define PM_INST_NUM            1                              /**< \brief (PM        ) Number of instances */
#define PM_INSTS               { PM }                         /**< \brief (PM        ) Instances List */

#define PORT                   ((Port *)0x40002800U)          /**< \brief (PORT      ) Base Address */
#define PORT_IOBUS             ((Port *)0x60000000U)          /**< \brief (PORT      ) Base Address */
#define PORT_INST_NUM          1                              /**< \brief (PORT      ) Number of instances */
#define PORT_INSTS             { PORT }                       /**< \brief (PORT      ) Instances List */

#define PTC                    ((Ptc *)0x43001400U)           /**< \brief (PTC       ) Base Address */
#define PTC_INST_NUM           1                              /**< \brief (PTC       ) Number of instances */
#define PTC_INSTS              { PTC }                        /**< \brief (PTC       ) Instances List */

#define RSTC                   ((Rstc *)0x40000800U)          /**< \brief (RSTC      ) Base Address */
#define RSTC_INST_NUM          1                              /**< \brief (RSTC      ) Number of instances */
#define RSTC_INSTS             { RSTC }                       /**< \brief (RSTC      ) Instances List */

#define RTC                    ((Rtc *)0x40002000U)           /**< \brief (RTC       ) Base Address */
#define RTC_INST_NUM           1                              /**< \brief (RTC       ) Number of instances */
#define RTC_INSTS              { RTC }                        /**< \brief (RTC       ) Instances List */

#define SERCOM0                ((Sercom *)0x42000000U)        /**< \brief (SERCOM0   ) Base Address */
#define SERCOM1                ((Sercom *)0x42000400U)        /**< \brief (SERCOM1   ) Base Address */
#define SERCOM2                ((Sercom *)0x42000800U)        /**< \brief (SERCOM2   ) Base Address */
#define SERCOM3                ((Sercom *)0x42000C00U)        /**< \brief (SERCOM3   ) Base Address */
#define SERCOM4                ((Sercom *)0x42001000U)        /**< \brief (SERCOM4   ) Base Address */
#define SERCOM5                ((Sercom *)0x43000400U)        /**< \brief (SERCOM5   ) Base Address */
#define SERCOM_INST_NUM        6                              /**< \brief (SERCOM    ) Number of instances */
#define SERCOM_INSTS           { SERCOM0, SERCOM1, SERCOM2, SERCOM3, SERCOM4, SERCOM5 } /**< \brief (SERCOM    ) Instances List */

#define SUPC                   ((Supc *)0x40001400U)          /**< \brief (SUPC      ) Base Address */
#define SUPC_INST_NUM          1                              /**< \brief (SUPC      ) Number of instances */
#define SUPC_INSTS             { SUPC }                       /**< \brief (SUPC      ) Instances List */

#define TC0                    ((Tc *)0x42002000U)            /**< \brief (TC0       ) Base Address */
#define TC1                    ((Tc *)0x42002400U)            /**< \brief (TC1       ) Base Address */
#define TC2                    ((Tc *)0x42002800U)            /**< \brief (TC2       ) Base Address */
#define TC3                    ((Tc *)0x42002C00U)            /**< \brief (TC3       ) Base Address */
#define TC4                    ((Tc *)0x43000800U)            /**< \brief (TC4       ) Base Address */
#define TC_INST_NUM            5                              /**< \brief (TC        ) Number of instances */
#define TC_INSTS               { TC0, TC1, TC2, TC3, TC4 }    /**< \brief (TC        ) Instances List */

#define TCC0                   ((Tcc *)0x42001400U)           /**< \brief (TCC0      ) Base Address */
#define TCC1                   ((Tcc *)0x42001800U)           /**< \brief (TCC1      ) Base Address */
#define TCC2                   ((Tcc *)0x42001C00U)           /**< \brief (TCC2      ) Base Address */
#define TCC_INST_NUM           3                              /**< \brief (TCC       ) Number of instances */
#define TCC_INSTS              { TCC0, TCC1, TCC2 }           /**< \brief (TCC       ) Instances List */

#define TRNG                   ((Trng *)0x42003800U)          /**< \brief (TRNG      ) Base Address */
#define TRNG_INST_NUM          1                              /**< \brief (TRNG      ) Number of instances */
#define TRNG_INSTS             { TRNG }                       /**< \brief (TRNG      ) Instances List */

#define USB                    ((Usb *)0x41000000U)           /**< \brief (USB       ) Base Address */
#define USB_INST_NUM           1                              /**< \brief (USB       ) Number of instances */
#define USB_INSTS              { USB }                        /**< \brief (USB       ) Instances List */

#define WDT                    ((Wdt *)0x40001C00U)           /**< \brief (WDT       ) Base Address */
#define WDT_INST_NUM           1                              /**< \brief (WDT       ) Number of instances */
#define WDT_INSTS              { WDT }                        /**< \brief (WDT       ) Instances List */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  b'end of Peripheral Base Address Definitions' */

/** \addtogroup WLR089U0_pio b'Peripheral Pio Definitions'
 *  @{
 */

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR WLR089U0*/
/* ************************************************************************** */
#include "pio/wlr089u0.h"
/** @}  b'end of Peripheral Pio Definitions' */

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR WLR089U0*/
/* ************************************************************************** */

#define FLASH_SIZE               _U_(0x00040000)       /*  256kB Memory segment type: flash */
#define FLASH_PAGE_SIZE          _U_(        64)
#define FLASH_NB_OF_PAGES        _U_(      4096)

#define CAL_SIZE                 _U_(0x00000008)       /*    0kB Memory segment type: fuses */
#define LOCKBIT_SIZE             _U_(0x00000004)       /*    0kB Memory segment type: fuses */
#define OTP1_SIZE                _U_(0x00000008)       /*    0kB Memory segment type: fuses */
#define OTP2_SIZE                _U_(0x00000008)       /*    0kB Memory segment type: fuses */
#define OTP3_SIZE                _U_(0x00000008)       /*    0kB Memory segment type: fuses */
#define OTP4_SIZE                _U_(0x00000008)       /*    0kB Memory segment type: fuses */
#define OTP5_SIZE                _U_(0x00000008)       /*    0kB Memory segment type: fuses */
#define TEMP_LOG_SIZE            _U_(0x00000008)       /*    0kB Memory segment type: fuses */
#define USER_PAGE_SIZE           _U_(0x00000100)       /*    0kB Memory segment type: user_page */
#define USER_PAGE_PAGE_SIZE      _U_(        64)
#define USER_PAGE_NB_OF_PAGES    _U_(         4)

#define RWW_SIZE                 _U_(0x00002000)       /*    8kB Memory segment type: flash */
#define RWW_PAGE_SIZE            _U_(        64)
#define RWW_NB_OF_PAGES          _U_(       128)

#define HSRAM_SIZE               _U_(0x00008000)       /*   32kB Memory segment type: ram */
#define LPRAM_SIZE               _U_(0x00002000)       /*    8kB Memory segment type: ram */
#define HPB0_SIZE                _U_(0x00004000)       /*   16kB Memory segment type: io */
#define HPB1_SIZE                _U_(0x00010000)       /*   64kB Memory segment type: io */
#define HPB2_SIZE                _U_(0x00008000)       /*   32kB Memory segment type: io */
#define HPB3_SIZE                _U_(0x00002000)       /*    8kB Memory segment type: io */
#define HPB4_SIZE                _U_(0x00001000)       /*    4kB Memory segment type: io */
#define PPB_SIZE                 _U_(0x00100000)       /* 1024kB Memory segment type: io */
#define SCS_SIZE                 _U_(0x00001000)       /*    4kB Memory segment type: io */
#define PERIPHERALS_SIZE         _U_(0x20000000)       /* 524288kB Memory segment type: io */

#define FLASH_ADDR               _U_(0x00000000)       /**< FLASH base address (type: flash)*/
#define CAL_ADDR                 _U_(0x00800000)       /**< CAL base address (type: fuses)*/
#define LOCKBIT_ADDR             _U_(0x00802000)       /**< LOCKBIT base address (type: fuses)*/
#define OTP1_ADDR                _U_(0x00806000)       /**< OTP1 base address (type: fuses)*/
#define OTP2_ADDR                _U_(0x00806008)       /**< OTP2 base address (type: fuses)*/
#define OTP3_ADDR                _U_(0x00806010)       /**< OTP3 base address (type: fuses)*/
#define OTP4_ADDR                _U_(0x00806018)       /**< OTP4 base address (type: fuses)*/
#define OTP5_ADDR                _U_(0x00806020)       /**< OTP5 base address (type: fuses)*/
#define TEMP_LOG_ADDR            _U_(0x00806030)       /**< TEMP_LOG base address (type: fuses)*/
#define USER_PAGE_ADDR           _U_(0x00804000)       /**< USER_PAGE base address (type: user_page)*/
#define RWW_ADDR                 _U_(0x00400000)       /**< RWW base address (type: flash)*/
#define HSRAM_ADDR               _U_(0x20000000)       /**< HSRAM base address (type: ram)*/
#define LPRAM_ADDR               _U_(0x30000000)       /**< LPRAM base address (type: ram)*/
#define HPB0_ADDR                _U_(0x40000000)       /**< HPB0 base address (type: io)*/
#define HPB1_ADDR                _U_(0x41000000)       /**< HPB1 base address (type: io)*/
#define HPB2_ADDR                _U_(0x42000000)       /**< HPB2 base address (type: io)*/
#define HPB3_ADDR                _U_(0x43000000)       /**< HPB3 base address (type: io)*/
#define HPB4_ADDR                _U_(0x44000000)       /**< HPB4 base address (type: io)*/
#define PPB_ADDR                 _U_(0xe0000000)       /**< PPB base address (type: io)*/
#define SCS_ADDR                 _U_(0xe000e000)       /**< SCS base address (type: io)*/
#define PERIPHERALS_ADDR         _U_(0x40000000)       /**< PERIPHERALS base address (type: io)*/

/* ************************************************************************** */
/**  DEVICE SIGNATURES FOR WLR089U0 */
/* ************************************************************************** */
#define DSU_DID                  _UL_(0X10810228)

/* ************************************************************************** */
/**  ELECTRICAL DEFINITIONS FOR WLR089U0 */
/* ************************************************************************** */

/* ************************************************************************** */
/** Event Generator IDs for R089U0 */
/* ************************************************************************** */
#define EVENT_ID_GEN_RTC_CMP_0                            1 /**< ID for RTC event generator CMP_0 */
#define EVENT_ID_GEN_RTC_CMP_1                            2 /**< ID for RTC event generator CMP_1 */
#define EVENT_ID_GEN_RTC_OVF                              3 /**< ID for RTC event generator OVF */
#define EVENT_ID_GEN_RTC_PER_0                            4 /**< ID for RTC event generator PER_0 */
#define EVENT_ID_GEN_RTC_PER_1                            5 /**< ID for RTC event generator PER_1 */
#define EVENT_ID_GEN_RTC_PER_2                            6 /**< ID for RTC event generator PER_2 */
#define EVENT_ID_GEN_RTC_PER_3                            7 /**< ID for RTC event generator PER_3 */
#define EVENT_ID_GEN_RTC_PER_4                            8 /**< ID for RTC event generator PER_4 */
#define EVENT_ID_GEN_RTC_PER_5                            9 /**< ID for RTC event generator PER_5 */
#define EVENT_ID_GEN_RTC_PER_6                           10 /**< ID for RTC event generator PER_6 */
#define EVENT_ID_GEN_RTC_PER_7                           11 /**< ID for RTC event generator PER_7 */
#define EVENT_ID_GEN_EIC_EXTINT_0                        12 /**< ID for EIC event generator EXTINT_0 */
#define EVENT_ID_GEN_EIC_EXTINT_1                        13 /**< ID for EIC event generator EXTINT_1 */
#define EVENT_ID_GEN_EIC_EXTINT_2                        14 /**< ID for EIC event generator EXTINT_2 */
#define EVENT_ID_GEN_EIC_EXTINT_3                        15 /**< ID for EIC event generator EXTINT_3 */
#define EVENT_ID_GEN_EIC_EXTINT_4                        16 /**< ID for EIC event generator EXTINT_4 */
#define EVENT_ID_GEN_EIC_EXTINT_5                        17 /**< ID for EIC event generator EXTINT_5 */
#define EVENT_ID_GEN_EIC_EXTINT_6                        18 /**< ID for EIC event generator EXTINT_6 */
#define EVENT_ID_GEN_EIC_EXTINT_7                        19 /**< ID for EIC event generator EXTINT_7 */
#define EVENT_ID_GEN_EIC_EXTINT_8                        20 /**< ID for EIC event generator EXTINT_8 */
#define EVENT_ID_GEN_EIC_EXTINT_9                        21 /**< ID for EIC event generator EXTINT_9 */
#define EVENT_ID_GEN_EIC_EXTINT_10                       22 /**< ID for EIC event generator EXTINT_10 */
#define EVENT_ID_GEN_EIC_EXTINT_11                       23 /**< ID for EIC event generator EXTINT_11 */
#define EVENT_ID_GEN_EIC_EXTINT_12                       24 /**< ID for EIC event generator EXTINT_12 */
#define EVENT_ID_GEN_EIC_EXTINT_13                       25 /**< ID for EIC event generator EXTINT_13 */
#define EVENT_ID_GEN_EIC_EXTINT_14                       26 /**< ID for EIC event generator EXTINT_14 */
#define EVENT_ID_GEN_EIC_EXTINT_15                       27 /**< ID for EIC event generator EXTINT_15 */
#define EVENT_ID_GEN_DMAC_CH_0                           28 /**< ID for DMAC event generator CH_0 */
#define EVENT_ID_GEN_DMAC_CH_1                           29 /**< ID for DMAC event generator CH_1 */
#define EVENT_ID_GEN_DMAC_CH_2                           30 /**< ID for DMAC event generator CH_2 */
#define EVENT_ID_GEN_DMAC_CH_3                           31 /**< ID for DMAC event generator CH_3 */
#define EVENT_ID_GEN_DMAC_CH_4                           32 /**< ID for DMAC event generator CH_4 */
#define EVENT_ID_GEN_DMAC_CH_5                           33 /**< ID for DMAC event generator CH_5 */
#define EVENT_ID_GEN_DMAC_CH_6                           34 /**< ID for DMAC event generator CH_6 */
#define EVENT_ID_GEN_DMAC_CH_7                           35 /**< ID for DMAC event generator CH_7 */
#define EVENT_ID_GEN_TCC0_OVF                            36 /**< ID for TCC0 event generator OVF */
#define EVENT_ID_GEN_TCC0_TRG                            37 /**< ID for TCC0 event generator TRG */
#define EVENT_ID_GEN_TCC0_CNT                            38 /**< ID for TCC0 event generator CNT */
#define EVENT_ID_GEN_TCC0_MCX_0                          39 /**< ID for TCC0 event generator MCX_0 */
#define EVENT_ID_GEN_TCC0_MCX_1                          40 /**< ID for TCC0 event generator MCX_1 */
#define EVENT_ID_GEN_TCC0_MCX_2                          41 /**< ID for TCC0 event generator MCX_2 */
#define EVENT_ID_GEN_TCC0_MCX_3                          42 /**< ID for TCC0 event generator MCX_3 */
#define EVENT_ID_GEN_TCC1_OVF                            43 /**< ID for TCC1 event generator OVF */
#define EVENT_ID_GEN_TCC1_TRG                            44 /**< ID for TCC1 event generator TRG */
#define EVENT_ID_GEN_TCC1_CNT                            45 /**< ID for TCC1 event generator CNT */
#define EVENT_ID_GEN_TCC1_MCX_0                          46 /**< ID for TCC1 event generator MCX_0 */
#define EVENT_ID_GEN_TCC1_MCX_1                          47 /**< ID for TCC1 event generator MCX_1 */
#define EVENT_ID_GEN_TCC2_OVF                            48 /**< ID for TCC2 event generator OVF */
#define EVENT_ID_GEN_TCC2_TRG                            49 /**< ID for TCC2 event generator TRG */
#define EVENT_ID_GEN_TCC2_CNT                            50 /**< ID for TCC2 event generator CNT */
#define EVENT_ID_GEN_TCC2_MCX_0                          51 /**< ID for TCC2 event generator MCX_0 */
#define EVENT_ID_GEN_TCC2_MCX_1                          52 /**< ID for TCC2 event generator MCX_1 */
#define EVENT_ID_GEN_TC0_OVF                             53 /**< ID for TC0 event generator OVF */
#define EVENT_ID_GEN_TC0_MCX_0                           54 /**< ID for TC0 event generator MCX_0 */
#define EVENT_ID_GEN_TC0_MCX_1                           55 /**< ID for TC0 event generator MCX_1 */
#define EVENT_ID_GEN_TC1_OVF                             56 /**< ID for TC1 event generator OVF */
#define EVENT_ID_GEN_TC1_MCX_0                           57 /**< ID for TC1 event generator MCX_0 */
#define EVENT_ID_GEN_TC1_MCX_1                           58 /**< ID for TC1 event generator MCX_1 */
#define EVENT_ID_GEN_TC2_OVF                             59 /**< ID for TC2 event generator OVF */
#define EVENT_ID_GEN_TC2_MCX_0                           60 /**< ID for TC2 event generator MCX_0 */
#define EVENT_ID_GEN_TC2_MCX_1                           61 /**< ID for TC2 event generator MCX_1 */
#define EVENT_ID_GEN_TC3_OVF                             62 /**< ID for TC3 event generator OVF */
#define EVENT_ID_GEN_TC3_MCX_0                           63 /**< ID for TC3 event generator MCX_0 */
#define EVENT_ID_GEN_TC3_MCX_1                           64 /**< ID for TC3 event generator MCX_1 */
#define EVENT_ID_GEN_TC4_OVF                             65 /**< ID for TC4 event generator OVF */
#define EVENT_ID_GEN_TC4_MCX_0                           66 /**< ID for TC4 event generator MCX_0 */
#define EVENT_ID_GEN_TC4_MCX_1                           67 /**< ID for TC4 event generator MCX_1 */
#define EVENT_ID_GEN_ADC_RESRDY                          68 /**< ID for ADC event generator RESRDY */
#define EVENT_ID_GEN_ADC_WINMON                          69 /**< ID for ADC event generator WINMON */
#define EVENT_ID_GEN_AC_COMP_0                           70 /**< ID for AC event generator COMP_0 */
#define EVENT_ID_GEN_AC_COMP_1                           71 /**< ID for AC event generator COMP_1 */
#define EVENT_ID_GEN_AC_WIN_0                            72 /**< ID for AC event generator WIN_0 */
#define EVENT_ID_GEN_DAC_EMPTY_0                         73 /**< ID for DAC event generator EMPTY_0 */
#define EVENT_ID_GEN_DAC_EMPTY_1                         74 /**< ID for DAC event generator EMPTY_1 */
#define EVENT_ID_GEN_TRNG_READY                          77 /**< ID for TRNG event generator READY */
#define EVENT_ID_GEN_CCL_LUTOUT_0                        78 /**< ID for CCL event generator LUTOUT_0 */
#define EVENT_ID_GEN_CCL_LUTOUT_1                        79 /**< ID for CCL event generator LUTOUT_1 */
#define EVENT_ID_GEN_CCL_LUTOUT_2                        80 /**< ID for CCL event generator LUTOUT_2 */
#define EVENT_ID_GEN_CCL_LUTOUT_3                        81 /**< ID for CCL event generator LUTOUT_3 */
#define EVENT_ID_GEN_PAC_ACCERR                          82 /**< ID for PAC event generator ACCERR */

/* ************************************************************************** */
/** Event User IDs for R089U0 */
/* ************************************************************************** */
#define EVENT_ID_USER_PORT_EV_0                           0 /**< ID for PORT event user EV_0 */
#define EVENT_ID_USER_PORT_EV_1                           1 /**< ID for PORT event user EV_1 */
#define EVENT_ID_USER_PORT_EV_2                           2 /**< ID for PORT event user EV_2 */
#define EVENT_ID_USER_PORT_EV_3                           3 /**< ID for PORT event user EV_3 */
#define EVENT_ID_USER_DMAC_CH_0                           4 /**< ID for DMAC event user CH_0 */
#define EVENT_ID_USER_DMAC_CH_1                           5 /**< ID for DMAC event user CH_1 */
#define EVENT_ID_USER_DMAC_CH_2                           6 /**< ID for DMAC event user CH_2 */
#define EVENT_ID_USER_DMAC_CH_3                           7 /**< ID for DMAC event user CH_3 */
#define EVENT_ID_USER_DMAC_CH_4                           8 /**< ID for DMAC event user CH_4 */
#define EVENT_ID_USER_DMAC_CH_5                           9 /**< ID for DMAC event user CH_5 */
#define EVENT_ID_USER_DMAC_CH_6                          10 /**< ID for DMAC event user CH_6 */
#define EVENT_ID_USER_DMAC_CH_7                          11 /**< ID for DMAC event user CH_7 */
#define EVENT_ID_USER_TCC0_EV_0                          12 /**< ID for TCC0 event user EV_0 */
#define EVENT_ID_USER_TCC0_EV_1                          13 /**< ID for TCC0 event user EV_1 */
#define EVENT_ID_USER_TCC0_MC_0                          14 /**< ID for TCC0 event user MC_0 */
#define EVENT_ID_USER_TCC0_MC_1                          15 /**< ID for TCC0 event user MC_1 */
#define EVENT_ID_USER_TCC0_MC_2                          16 /**< ID for TCC0 event user MC_2 */
#define EVENT_ID_USER_TCC0_MC_3                          17 /**< ID for TCC0 event user MC_3 */
#define EVENT_ID_USER_TCC1_EV_0                          18 /**< ID for TCC1 event user EV_0 */
#define EVENT_ID_USER_TCC1_EV_1                          19 /**< ID for TCC1 event user EV_1 */
#define EVENT_ID_USER_TCC1_MC_0                          20 /**< ID for TCC1 event user MC_0 */
#define EVENT_ID_USER_TCC1_MC_1                          21 /**< ID for TCC1 event user MC_1 */
#define EVENT_ID_USER_TCC2_EV_0                          22 /**< ID for TCC2 event user EV_0 */
#define EVENT_ID_USER_TCC2_EV_1                          23 /**< ID for TCC2 event user EV_1 */
#define EVENT_ID_USER_TCC2_MC_0                          24 /**< ID for TCC2 event user MC_0 */
#define EVENT_ID_USER_TCC2_MC_1                          25 /**< ID for TCC2 event user MC_1 */
#define EVENT_ID_USER_TC0_EVU                            26 /**< ID for TC0 event user EVU */
#define EVENT_ID_USER_TC1_EVU                            27 /**< ID for TC1 event user EVU */
#define EVENT_ID_USER_TC2_EVU                            28 /**< ID for TC2 event user EVU */
#define EVENT_ID_USER_TC3_EVU                            29 /**< ID for TC3 event user EVU */
#define EVENT_ID_USER_TC4_EVU                            30 /**< ID for TC4 event user EVU */
#define EVENT_ID_USER_ADC_START                          31 /**< ID for ADC event user START */
#define EVENT_ID_USER_ADC_SYNC                           32 /**< ID for ADC event user SYNC */
#define EVENT_ID_USER_AC_SOC_0                           33 /**< ID for AC event user SOC_0 */
#define EVENT_ID_USER_AC_SOC_1                           34 /**< ID for AC event user SOC_1 */
#define EVENT_ID_USER_DAC_START_0                        35 /**< ID for DAC event user START_0 */
#define EVENT_ID_USER_DAC_START_1                        36 /**< ID for DAC event user START_1 */
#define EVENT_ID_USER_CCL_LUTIN_0                        38 /**< ID for CCL event user LUTIN_0 */
#define EVENT_ID_USER_CCL_LUTIN_1                        39 /**< ID for CCL event user LUTIN_1 */
#define EVENT_ID_USER_CCL_LUTIN_2                        40 /**< ID for CCL event user LUTIN_2 */
#define EVENT_ID_USER_CCL_LUTIN_3                        41 /**< ID for CCL event user LUTIN_3 */
#define EVENT_ID_USER_MTB_START                          43 /**< ID for MTB event user START */
#define EVENT_ID_USER_MTB_STOP                           44 /**< ID for MTB event user STOP */

#ifdef __cplusplus
}
#endif

/** @}  b'end of WLR089U0 definitions' */


#endif /* _WLR089U0_H_ */
