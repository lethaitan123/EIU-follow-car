/**
 * \brief Peripheral I/O description for WLR089U0
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
#ifndef _WLR089U0_PIO_H_
#define _WLR089U0_PIO_H_

/* ========== Peripheral I/O pin numbers ========== */
#define PIN_PA00                    (  0)  /**< Pin Number for PA00 */
#define PIN_PA01                    (  1)  /**< Pin Number for PA01 */
#define PIN_PA04                    (  4)  /**< Pin Number for PA04 */
#define PIN_PA05                    (  5)  /**< Pin Number for PA05 */
#define PIN_PA06                    (  6)  /**< Pin Number for PA06 */
#define PIN_PA07                    (  7)  /**< Pin Number for PA07 */
#define PIN_PA08                    (  8)  /**< Pin Number for PA08 */
#define PIN_PA09                    (  9)  /**< Pin Number for PA09 */
#define PIN_PA10                    ( 10)  /**< Pin Number for PA10 */
#define PIN_PA11                    ( 11)  /**< Pin Number for PA11 */
#define PIN_PA12                    ( 12)  /**< Pin Number for PA12 */
#define PIN_PA13                    ( 13)  /**< Pin Number for PA13 */
#define PIN_PA14                    ( 14)  /**< Pin Number for PA14 */
#define PIN_PA15                    ( 15)  /**< Pin Number for PA15 */
#define PIN_PA16                    ( 16)  /**< Pin Number for PA16 */
#define PIN_PA17                    ( 17)  /**< Pin Number for PA17 */
#define PIN_PA18                    ( 18)  /**< Pin Number for PA18 */
#define PIN_PA19                    ( 19)  /**< Pin Number for PA19 */
#define PIN_PA22                    ( 22)  /**< Pin Number for PA22 */
#define PIN_PA23                    ( 23)  /**< Pin Number for PA23 */
#define PIN_PA24                    ( 24)  /**< Pin Number for PA24 */
#define PIN_PA25                    ( 25)  /**< Pin Number for PA25 */
#define PIN_PA27                    ( 27)  /**< Pin Number for PA27 */
#define PIN_PA28                    ( 28)  /**< Pin Number for PA28 */
#define PIN_PA30                    ( 30)  /**< Pin Number for PA30 */
#define PIN_PA31                    ( 31)  /**< Pin Number for PA31 */
#define PIN_PB00                    ( 32)  /**< Pin Number for PB00 */
#define PIN_PB02                    ( 34)  /**< Pin Number for PB02 */
#define PIN_PB03                    ( 35)  /**< Pin Number for PB03 */
#define PIN_PB15                    ( 47)  /**< Pin Number for PB15 */
#define PIN_PB16                    ( 48)  /**< Pin Number for PB16 */
#define PIN_PB17                    ( 49)  /**< Pin Number for PB17 */
#define PIN_PB22                    ( 54)  /**< Pin Number for PB22 */
#define PIN_PB23                    ( 55)  /**< Pin Number for PB23 */
#define PIN_PB30                    ( 62)  /**< Pin Number for PB30 */
#define PIN_PB31                    ( 63)  /**< Pin Number for PB31 */
#define PIN_PC18                    ( 82)  /**< Pin Number for PC18 */
#define PIN_PC19                    ( 83)  /**< Pin Number for PC19 */


/* ========== Peripheral I/O masks ========== */
#define PORT_PA00                   (_U_(1) << 0) /**< PORT Mask for PA00 */
#define PORT_PA01                   (_U_(1) << 1) /**< PORT Mask for PA01 */
#define PORT_PA04                   (_U_(1) << 4) /**< PORT Mask for PA04 */
#define PORT_PA05                   (_U_(1) << 5) /**< PORT Mask for PA05 */
#define PORT_PA06                   (_U_(1) << 6) /**< PORT Mask for PA06 */
#define PORT_PA07                   (_U_(1) << 7) /**< PORT Mask for PA07 */
#define PORT_PA08                   (_U_(1) << 8) /**< PORT Mask for PA08 */
#define PORT_PA09                   (_U_(1) << 9) /**< PORT Mask for PA09 */
#define PORT_PA10                   (_U_(1) << 10) /**< PORT Mask for PA10 */
#define PORT_PA11                   (_U_(1) << 11) /**< PORT Mask for PA11 */
#define PORT_PA12                   (_U_(1) << 12) /**< PORT Mask for PA12 */
#define PORT_PA13                   (_U_(1) << 13) /**< PORT Mask for PA13 */
#define PORT_PA14                   (_U_(1) << 14) /**< PORT Mask for PA14 */
#define PORT_PA15                   (_U_(1) << 15) /**< PORT Mask for PA15 */
#define PORT_PA16                   (_U_(1) << 16) /**< PORT Mask for PA16 */
#define PORT_PA17                   (_U_(1) << 17) /**< PORT Mask for PA17 */
#define PORT_PA18                   (_U_(1) << 18) /**< PORT Mask for PA18 */
#define PORT_PA19                   (_U_(1) << 19) /**< PORT Mask for PA19 */
#define PORT_PA22                   (_U_(1) << 22) /**< PORT Mask for PA22 */
#define PORT_PA23                   (_U_(1) << 23) /**< PORT Mask for PA23 */
#define PORT_PA24                   (_U_(1) << 24) /**< PORT Mask for PA24 */
#define PORT_PA25                   (_U_(1) << 25) /**< PORT Mask for PA25 */
#define PORT_PA27                   (_U_(1) << 27) /**< PORT Mask for PA27 */
#define PORT_PA28                   (_U_(1) << 28) /**< PORT Mask for PA28 */
#define PORT_PA30                   (_U_(1) << 30) /**< PORT Mask for PA30 */
#define PORT_PA31                   (_U_(1) << 31) /**< PORT Mask for PA31 */
#define PORT_PB00                   (_U_(1) << 0) /**< PORT Mask for PB00 */
#define PORT_PB02                   (_U_(1) << 2) /**< PORT Mask for PB02 */
#define PORT_PB03                   (_U_(1) << 3) /**< PORT Mask for PB03 */
#define PORT_PB15                   (_U_(1) << 15) /**< PORT Mask for PB15 */
#define PORT_PB16                   (_U_(1) << 16) /**< PORT Mask for PB16 */
#define PORT_PB17                   (_U_(1) << 17) /**< PORT Mask for PB17 */
#define PORT_PB22                   (_U_(1) << 22) /**< PORT Mask for PB22 */
#define PORT_PB23                   (_U_(1) << 23) /**< PORT Mask for PB23 */
#define PORT_PB30                   (_U_(1) << 30) /**< PORT Mask for PB30 */
#define PORT_PB31                   (_U_(1) << 31) /**< PORT Mask for PB31 */
#define PORT_PC18                   (_U_(1) << 18) /**< PORT Mask for PC18 */
#define PORT_PC19                   (_U_(1) << 19) /**< PORT Mask for PC19 */


/* ========== Peripheral I/O indexes ========== */
#define PORT_PA00_IDX               (  0)  /**< PORT Index Number for PA00 */
#define PORT_PA01_IDX               (  1)  /**< PORT Index Number for PA01 */
#define PORT_PA04_IDX               (  4)  /**< PORT Index Number for PA04 */
#define PORT_PA05_IDX               (  5)  /**< PORT Index Number for PA05 */
#define PORT_PA06_IDX               (  6)  /**< PORT Index Number for PA06 */
#define PORT_PA07_IDX               (  7)  /**< PORT Index Number for PA07 */
#define PORT_PA08_IDX               (  8)  /**< PORT Index Number for PA08 */
#define PORT_PA09_IDX               (  9)  /**< PORT Index Number for PA09 */
#define PORT_PA10_IDX               ( 10)  /**< PORT Index Number for PA10 */
#define PORT_PA11_IDX               ( 11)  /**< PORT Index Number for PA11 */
#define PORT_PA12_IDX               ( 12)  /**< PORT Index Number for PA12 */
#define PORT_PA13_IDX               ( 13)  /**< PORT Index Number for PA13 */
#define PORT_PA14_IDX               ( 14)  /**< PORT Index Number for PA14 */
#define PORT_PA15_IDX               ( 15)  /**< PORT Index Number for PA15 */
#define PORT_PA16_IDX               ( 16)  /**< PORT Index Number for PA16 */
#define PORT_PA17_IDX               ( 17)  /**< PORT Index Number for PA17 */
#define PORT_PA18_IDX               ( 18)  /**< PORT Index Number for PA18 */
#define PORT_PA19_IDX               ( 19)  /**< PORT Index Number for PA19 */
#define PORT_PA22_IDX               ( 22)  /**< PORT Index Number for PA22 */
#define PORT_PA23_IDX               ( 23)  /**< PORT Index Number for PA23 */
#define PORT_PA24_IDX               ( 24)  /**< PORT Index Number for PA24 */
#define PORT_PA25_IDX               ( 25)  /**< PORT Index Number for PA25 */
#define PORT_PA27_IDX               ( 27)  /**< PORT Index Number for PA27 */
#define PORT_PA28_IDX               ( 28)  /**< PORT Index Number for PA28 */
#define PORT_PA30_IDX               ( 30)  /**< PORT Index Number for PA30 */
#define PORT_PA31_IDX               ( 31)  /**< PORT Index Number for PA31 */
#define PORT_PB00_IDX               ( 32)  /**< PORT Index Number for PB00 */
#define PORT_PB02_IDX               ( 34)  /**< PORT Index Number for PB02 */
#define PORT_PB03_IDX               ( 35)  /**< PORT Index Number for PB03 */
#define PORT_PB15_IDX               ( 47)  /**< PORT Index Number for PB15 */
#define PORT_PB16_IDX               ( 48)  /**< PORT Index Number for PB16 */
#define PORT_PB17_IDX               ( 49)  /**< PORT Index Number for PB17 */
#define PORT_PB22_IDX               ( 54)  /**< PORT Index Number for PB22 */
#define PORT_PB23_IDX               ( 55)  /**< PORT Index Number for PB23 */
#define PORT_PB30_IDX               ( 62)  /**< PORT Index Number for PB30 */
#define PORT_PB31_IDX               ( 63)  /**< PORT Index Number for PB31 */
#define PORT_PC18_IDX               ( 82)  /**< PORT Index Number for PC18 */
#define PORT_PC19_IDX               ( 83)  /**< PORT Index Number for PC19 */

/* ========== PORT definition for AC peripheral ========== */
#define PIN_PA04B_AC_AIN0                          _L_(4)       /**< AC signal: AIN0 on PA04 mux B*/
#define MUX_PA04B_AC_AIN0                          _L_(1)      
#define PINMUX_PA04B_AC_AIN0                       ((PIN_PA04B_AC_AIN0 << 16) | MUX_PA04B_AC_AIN0)
#define PORT_PA04B_AC_AIN0                         (_UL_(1) << 4)

#define PIN_PA05B_AC_AIN1                          _L_(5)       /**< AC signal: AIN1 on PA05 mux B*/
#define MUX_PA05B_AC_AIN1                          _L_(1)      
#define PINMUX_PA05B_AC_AIN1                       ((PIN_PA05B_AC_AIN1 << 16) | MUX_PA05B_AC_AIN1)
#define PORT_PA05B_AC_AIN1                         (_UL_(1) << 5)

#define PIN_PA06B_AC_AIN2                          _L_(6)       /**< AC signal: AIN2 on PA06 mux B*/
#define MUX_PA06B_AC_AIN2                          _L_(1)      
#define PINMUX_PA06B_AC_AIN2                       ((PIN_PA06B_AC_AIN2 << 16) | MUX_PA06B_AC_AIN2)
#define PORT_PA06B_AC_AIN2                         (_UL_(1) << 6)

#define PIN_PA07B_AC_AIN3                          _L_(7)       /**< AC signal: AIN3 on PA07 mux B*/
#define MUX_PA07B_AC_AIN3                          _L_(1)      
#define PINMUX_PA07B_AC_AIN3                       ((PIN_PA07B_AC_AIN3 << 16) | MUX_PA07B_AC_AIN3)
#define PORT_PA07B_AC_AIN3                         (_UL_(1) << 7)

#define PIN_PA12H_AC_CMP0                          _L_(12)      /**< AC signal: CMP0 on PA12 mux H*/
#define MUX_PA12H_AC_CMP0                          _L_(7)      
#define PINMUX_PA12H_AC_CMP0                       ((PIN_PA12H_AC_CMP0 << 16) | MUX_PA12H_AC_CMP0)
#define PORT_PA12H_AC_CMP0                         (_UL_(1) << 12)

#define PIN_PA18H_AC_CMP0                          _L_(18)      /**< AC signal: CMP0 on PA18 mux H*/
#define MUX_PA18H_AC_CMP0                          _L_(7)      
#define PINMUX_PA18H_AC_CMP0                       ((PIN_PA18H_AC_CMP0 << 16) | MUX_PA18H_AC_CMP0)
#define PORT_PA18H_AC_CMP0                         (_UL_(1) << 18)

#define PIN_PA19H_AC_CMP1                          _L_(19)      /**< AC signal: CMP1 on PA19 mux H*/
#define MUX_PA19H_AC_CMP1                          _L_(7)      
#define PINMUX_PA19H_AC_CMP1                       ((PIN_PA19H_AC_CMP1 << 16) | MUX_PA19H_AC_CMP1)
#define PORT_PA19H_AC_CMP1                         (_UL_(1) << 19)

/* ========== PORT definition for ADC peripheral ========== */
#define PIN_PA04B_ADC_AIN4                         _L_(4)       /**< ADC signal: AIN4 on PA04 mux B*/
#define MUX_PA04B_ADC_AIN4                         _L_(1)      
#define PINMUX_PA04B_ADC_AIN4                      ((PIN_PA04B_ADC_AIN4 << 16) | MUX_PA04B_ADC_AIN4)
#define PORT_PA04B_ADC_AIN4                        (_UL_(1) << 4)

#define PIN_PA05B_ADC_AIN5                         _L_(5)       /**< ADC signal: AIN5 on PA05 mux B*/
#define MUX_PA05B_ADC_AIN5                         _L_(1)      
#define PINMUX_PA05B_ADC_AIN5                      ((PIN_PA05B_ADC_AIN5 << 16) | MUX_PA05B_ADC_AIN5)
#define PORT_PA05B_ADC_AIN5                        (_UL_(1) << 5)

#define PIN_PA06B_ADC_AIN6                         _L_(6)       /**< ADC signal: AIN6 on PA06 mux B*/
#define MUX_PA06B_ADC_AIN6                         _L_(1)      
#define PINMUX_PA06B_ADC_AIN6                      ((PIN_PA06B_ADC_AIN6 << 16) | MUX_PA06B_ADC_AIN6)
#define PORT_PA06B_ADC_AIN6                        (_UL_(1) << 6)

#define PIN_PA07B_ADC_AIN7                         _L_(7)       /**< ADC signal: AIN7 on PA07 mux B*/
#define MUX_PA07B_ADC_AIN7                         _L_(1)      
#define PINMUX_PA07B_ADC_AIN7                      ((PIN_PA07B_ADC_AIN7 << 16) | MUX_PA07B_ADC_AIN7)
#define PORT_PA07B_ADC_AIN7                        (_UL_(1) << 7)

#define PIN_PB00B_ADC_AIN8                         _L_(32)      /**< ADC signal: AIN8 on PB00 mux B*/
#define MUX_PB00B_ADC_AIN8                         _L_(1)      
#define PINMUX_PB00B_ADC_AIN8                      ((PIN_PB00B_ADC_AIN8 << 16) | MUX_PB00B_ADC_AIN8)
#define PORT_PB00B_ADC_AIN8                        (_UL_(1) << 0)

#define PIN_PB02B_ADC_AIN10                        _L_(34)      /**< ADC signal: AIN10 on PB02 mux B*/
#define MUX_PB02B_ADC_AIN10                        _L_(1)      
#define PINMUX_PB02B_ADC_AIN10                     ((PIN_PB02B_ADC_AIN10 << 16) | MUX_PB02B_ADC_AIN10)
#define PORT_PB02B_ADC_AIN10                       (_UL_(1) << 2)

#define PIN_PB03B_ADC_AIN11                        _L_(35)      /**< ADC signal: AIN11 on PB03 mux B*/
#define MUX_PB03B_ADC_AIN11                        _L_(1)      
#define PINMUX_PB03B_ADC_AIN11                     ((PIN_PB03B_ADC_AIN11 << 16) | MUX_PB03B_ADC_AIN11)
#define PORT_PB03B_ADC_AIN11                       (_UL_(1) << 3)

#define PIN_PA08B_ADC_AIN16                        _L_(8)       /**< ADC signal: AIN16 on PA08 mux B*/
#define MUX_PA08B_ADC_AIN16                        _L_(1)      
#define PINMUX_PA08B_ADC_AIN16                     ((PIN_PA08B_ADC_AIN16 << 16) | MUX_PA08B_ADC_AIN16)
#define PORT_PA08B_ADC_AIN16                       (_UL_(1) << 8)

#define PIN_PA10B_ADC_AIN18                        _L_(10)      /**< ADC signal: AIN18 on PA10 mux B*/
#define MUX_PA10B_ADC_AIN18                        _L_(1)      
#define PINMUX_PA10B_ADC_AIN18                     ((PIN_PA10B_ADC_AIN18 << 16) | MUX_PA10B_ADC_AIN18)
#define PORT_PA10B_ADC_AIN18                       (_UL_(1) << 10)

#define PIN_PA11B_ADC_AIN19                        _L_(11)      /**< ADC signal: AIN19 on PA11 mux B*/
#define MUX_PA11B_ADC_AIN19                        _L_(1)      
#define PINMUX_PA11B_ADC_AIN19                     ((PIN_PA11B_ADC_AIN19 << 16) | MUX_PA11B_ADC_AIN19)
#define PORT_PA11B_ADC_AIN19                       (_UL_(1) << 11)

#define PIN_PA04B_ADC_VREFP                        _L_(4)       /**< ADC signal: VREFP on PA04 mux B*/
#define MUX_PA04B_ADC_VREFP                        _L_(1)      
#define PINMUX_PA04B_ADC_VREFP                     ((PIN_PA04B_ADC_VREFP << 16) | MUX_PA04B_ADC_VREFP)
#define PORT_PA04B_ADC_VREFP                       (_UL_(1) << 4)

/* ========== PORT definition for CCL peripheral ========== */
#define PIN_PA04I_CCL_IN0                          _L_(4)       /**< CCL signal: IN0 on PA04 mux I*/
#define MUX_PA04I_CCL_IN0                          _L_(8)      
#define PINMUX_PA04I_CCL_IN0                       ((PIN_PA04I_CCL_IN0 << 16) | MUX_PA04I_CCL_IN0)
#define PORT_PA04I_CCL_IN0                         (_UL_(1) << 4)

#define PIN_PA16I_CCL_IN0                          _L_(16)      /**< CCL signal: IN0 on PA16 mux I*/
#define MUX_PA16I_CCL_IN0                          _L_(8)      
#define PINMUX_PA16I_CCL_IN0                       ((PIN_PA16I_CCL_IN0 << 16) | MUX_PA16I_CCL_IN0)
#define PORT_PA16I_CCL_IN0                         (_UL_(1) << 16)

#define PIN_PB22I_CCL_IN0                          _L_(54)      /**< CCL signal: IN0 on PB22 mux I*/
#define MUX_PB22I_CCL_IN0                          _L_(8)      
#define PINMUX_PB22I_CCL_IN0                       ((PIN_PB22I_CCL_IN0 << 16) | MUX_PB22I_CCL_IN0)
#define PORT_PB22I_CCL_IN0                         (_UL_(1) << 22)

#define PIN_PA05I_CCL_IN1                          _L_(5)       /**< CCL signal: IN1 on PA05 mux I*/
#define MUX_PA05I_CCL_IN1                          _L_(8)      
#define PINMUX_PA05I_CCL_IN1                       ((PIN_PA05I_CCL_IN1 << 16) | MUX_PA05I_CCL_IN1)
#define PORT_PA05I_CCL_IN1                         (_UL_(1) << 5)

#define PIN_PA17I_CCL_IN1                          _L_(17)      /**< CCL signal: IN1 on PA17 mux I*/
#define MUX_PA17I_CCL_IN1                          _L_(8)      
#define PINMUX_PA17I_CCL_IN1                       ((PIN_PA17I_CCL_IN1 << 16) | MUX_PA17I_CCL_IN1)
#define PORT_PA17I_CCL_IN1                         (_UL_(1) << 17)

#define PIN_PB00I_CCL_IN1                          _L_(32)      /**< CCL signal: IN1 on PB00 mux I*/
#define MUX_PB00I_CCL_IN1                          _L_(8)      
#define PINMUX_PB00I_CCL_IN1                       ((PIN_PB00I_CCL_IN1 << 16) | MUX_PB00I_CCL_IN1)
#define PORT_PB00I_CCL_IN1                         (_UL_(1) << 0)

#define PIN_PA06I_CCL_IN2                          _L_(6)       /**< CCL signal: IN2 on PA06 mux I*/
#define MUX_PA06I_CCL_IN2                          _L_(8)      
#define PINMUX_PA06I_CCL_IN2                       ((PIN_PA06I_CCL_IN2 << 16) | MUX_PA06I_CCL_IN2)
#define PORT_PA06I_CCL_IN2                         (_UL_(1) << 6)

#define PIN_PA18I_CCL_IN2                          _L_(18)      /**< CCL signal: IN2 on PA18 mux I*/
#define MUX_PA18I_CCL_IN2                          _L_(8)      
#define PINMUX_PA18I_CCL_IN2                       ((PIN_PA18I_CCL_IN2 << 16) | MUX_PA18I_CCL_IN2)
#define PORT_PA18I_CCL_IN2                         (_UL_(1) << 18)

#define PIN_PA08I_CCL_IN3                          _L_(8)       /**< CCL signal: IN3 on PA08 mux I*/
#define MUX_PA08I_CCL_IN3                          _L_(8)      
#define PINMUX_PA08I_CCL_IN3                       ((PIN_PA08I_CCL_IN3 << 16) | MUX_PA08I_CCL_IN3)
#define PORT_PA08I_CCL_IN3                         (_UL_(1) << 8)

#define PIN_PA30I_CCL_IN3                          _L_(30)      /**< CCL signal: IN3 on PA30 mux I*/
#define MUX_PA30I_CCL_IN3                          _L_(8)      
#define PINMUX_PA30I_CCL_IN3                       ((PIN_PA30I_CCL_IN3 << 16) | MUX_PA30I_CCL_IN3)
#define PORT_PA30I_CCL_IN3                         (_UL_(1) << 30)

#define PIN_PA10I_CCL_IN5                          _L_(10)      /**< CCL signal: IN5 on PA10 mux I*/
#define MUX_PA10I_CCL_IN5                          _L_(8)      
#define PINMUX_PA10I_CCL_IN5                       ((PIN_PA10I_CCL_IN5 << 16) | MUX_PA10I_CCL_IN5)
#define PORT_PA10I_CCL_IN5                         (_UL_(1) << 10)

#define PIN_PA22I_CCL_IN6                          _L_(22)      /**< CCL signal: IN6 on PA22 mux I*/
#define MUX_PA22I_CCL_IN6                          _L_(8)      
#define PINMUX_PA22I_CCL_IN6                       ((PIN_PA22I_CCL_IN6 << 16) | MUX_PA22I_CCL_IN6)
#define PORT_PA22I_CCL_IN6                         (_UL_(1) << 22)

#define PIN_PA23I_CCL_IN7                          _L_(23)      /**< CCL signal: IN7 on PA23 mux I*/
#define MUX_PA23I_CCL_IN7                          _L_(8)      
#define PINMUX_PA23I_CCL_IN7                       ((PIN_PA23I_CCL_IN7 << 16) | MUX_PA23I_CCL_IN7)
#define PORT_PA23I_CCL_IN7                         (_UL_(1) << 23)

#define PIN_PA24I_CCL_IN8                          _L_(24)      /**< CCL signal: IN8 on PA24 mux I*/
#define MUX_PA24I_CCL_IN8                          _L_(8)      
#define PINMUX_PA24I_CCL_IN8                       ((PIN_PA24I_CCL_IN8 << 16) | MUX_PA24I_CCL_IN8)
#define PORT_PA24I_CCL_IN8                         (_UL_(1) << 24)

#define PIN_PB15I_CCL_IN10                         _L_(47)      /**< CCL signal: IN10 on PB15 mux I*/
#define MUX_PB15I_CCL_IN10                         _L_(8)      
#define PINMUX_PB15I_CCL_IN10                      ((PIN_PB15I_CCL_IN10 << 16) | MUX_PB15I_CCL_IN10)
#define PORT_PB15I_CCL_IN10                        (_UL_(1) << 15)

#define PIN_PB16I_CCL_IN11                         _L_(48)      /**< CCL signal: IN11 on PB16 mux I*/
#define MUX_PB16I_CCL_IN11                         _L_(8)      
#define PINMUX_PB16I_CCL_IN11                      ((PIN_PB16I_CCL_IN11 << 16) | MUX_PB16I_CCL_IN11)
#define PORT_PB16I_CCL_IN11                        (_UL_(1) << 16)

#define PIN_PA07I_CCL_OUT0                         _L_(7)       /**< CCL signal: OUT0 on PA07 mux I*/
#define MUX_PA07I_CCL_OUT0                         _L_(8)      
#define PINMUX_PA07I_CCL_OUT0                      ((PIN_PA07I_CCL_OUT0 << 16) | MUX_PA07I_CCL_OUT0)
#define PORT_PA07I_CCL_OUT0                        (_UL_(1) << 7)

#define PIN_PA19I_CCL_OUT0                         _L_(19)      /**< CCL signal: OUT0 on PA19 mux I*/
#define MUX_PA19I_CCL_OUT0                         _L_(8)      
#define PINMUX_PA19I_CCL_OUT0                      ((PIN_PA19I_CCL_OUT0 << 16) | MUX_PA19I_CCL_OUT0)
#define PORT_PA19I_CCL_OUT0                        (_UL_(1) << 19)

#define PIN_PB02I_CCL_OUT0                         _L_(34)      /**< CCL signal: OUT0 on PB02 mux I*/
#define MUX_PB02I_CCL_OUT0                         _L_(8)      
#define PINMUX_PB02I_CCL_OUT0                      ((PIN_PB02I_CCL_OUT0 << 16) | MUX_PB02I_CCL_OUT0)
#define PORT_PB02I_CCL_OUT0                        (_UL_(1) << 2)

#define PIN_PB23I_CCL_OUT0                         _L_(55)      /**< CCL signal: OUT0 on PB23 mux I*/
#define MUX_PB23I_CCL_OUT0                         _L_(8)      
#define PINMUX_PB23I_CCL_OUT0                      ((PIN_PB23I_CCL_OUT0 << 16) | MUX_PB23I_CCL_OUT0)
#define PORT_PB23I_CCL_OUT0                        (_UL_(1) << 23)

#define PIN_PA11I_CCL_OUT1                         _L_(11)      /**< CCL signal: OUT1 on PA11 mux I*/
#define MUX_PA11I_CCL_OUT1                         _L_(8)      
#define PINMUX_PA11I_CCL_OUT1                      ((PIN_PA11I_CCL_OUT1 << 16) | MUX_PA11I_CCL_OUT1)
#define PORT_PA11I_CCL_OUT1                        (_UL_(1) << 11)

#define PIN_PA31I_CCL_OUT1                         _L_(31)      /**< CCL signal: OUT1 on PA31 mux I*/
#define MUX_PA31I_CCL_OUT1                         _L_(8)      
#define PINMUX_PA31I_CCL_OUT1                      ((PIN_PA31I_CCL_OUT1 << 16) | MUX_PA31I_CCL_OUT1)
#define PORT_PA31I_CCL_OUT1                        (_UL_(1) << 31)

#define PIN_PA25I_CCL_OUT2                         _L_(25)      /**< CCL signal: OUT2 on PA25 mux I*/
#define MUX_PA25I_CCL_OUT2                         _L_(8)      
#define PINMUX_PA25I_CCL_OUT2                      ((PIN_PA25I_CCL_OUT2 << 16) | MUX_PA25I_CCL_OUT2)
#define PORT_PA25I_CCL_OUT2                        (_UL_(1) << 25)

#define PIN_PB17I_CCL_OUT3                         _L_(49)      /**< CCL signal: OUT3 on PB17 mux I*/
#define MUX_PB17I_CCL_OUT3                         _L_(8)      
#define PINMUX_PB17I_CCL_OUT3                      ((PIN_PB17I_CCL_OUT3 << 16) | MUX_PB17I_CCL_OUT3)
#define PORT_PB17I_CCL_OUT3                        (_UL_(1) << 17)

/* ========== PORT definition for DAC peripheral ========== */
#define PIN_PA05B_DAC_VOUT1                        _L_(5)       /**< DAC signal: VOUT1 on PA05 mux B*/
#define MUX_PA05B_DAC_VOUT1                        _L_(1)      
#define PINMUX_PA05B_DAC_VOUT1                     ((PIN_PA05B_DAC_VOUT1 << 16) | MUX_PA05B_DAC_VOUT1)
#define PORT_PA05B_DAC_VOUT1                       (_UL_(1) << 5)

/* ========== PORT definition for EIC peripheral ========== */
#define PIN_PA16A_EIC_EXTINT0                      _L_(16)      /**< EIC signal: EXTINT0 on PA16 mux A*/
#define MUX_PA16A_EIC_EXTINT0                      _L_(0)      
#define PINMUX_PA16A_EIC_EXTINT0                   ((PIN_PA16A_EIC_EXTINT0 << 16) | MUX_PA16A_EIC_EXTINT0)
#define PORT_PA16A_EIC_EXTINT0                     (_UL_(1) << 16)
#define PIN_PA16A_EIC_EXTINT_NUM                   _L_(0)       /**< EIC signal: PIN_PA16 External Interrupt Line */

#define PIN_PB00A_EIC_EXTINT0                      _L_(32)      /**< EIC signal: EXTINT0 on PB00 mux A*/
#define MUX_PB00A_EIC_EXTINT0                      _L_(0)      
#define PINMUX_PB00A_EIC_EXTINT0                   ((PIN_PB00A_EIC_EXTINT0 << 16) | MUX_PB00A_EIC_EXTINT0)
#define PORT_PB00A_EIC_EXTINT0                     (_UL_(1) << 0)
#define PIN_PB00A_EIC_EXTINT_NUM                   _L_(0)       /**< EIC signal: PIN_PB00 External Interrupt Line */

#define PIN_PB16A_EIC_EXTINT0                      _L_(48)      /**< EIC signal: EXTINT0 on PB16 mux A*/
#define MUX_PB16A_EIC_EXTINT0                      _L_(0)      
#define PINMUX_PB16A_EIC_EXTINT0                   ((PIN_PB16A_EIC_EXTINT0 << 16) | MUX_PB16A_EIC_EXTINT0)
#define PORT_PB16A_EIC_EXTINT0                     (_UL_(1) << 16)
#define PIN_PB16A_EIC_EXTINT_NUM                   _L_(0)       /**< EIC signal: PIN_PB16 External Interrupt Line */

#define PIN_PA17A_EIC_EXTINT1                      _L_(17)      /**< EIC signal: EXTINT1 on PA17 mux A*/
#define MUX_PA17A_EIC_EXTINT1                      _L_(0)      
#define PINMUX_PA17A_EIC_EXTINT1                   ((PIN_PA17A_EIC_EXTINT1 << 16) | MUX_PA17A_EIC_EXTINT1)
#define PORT_PA17A_EIC_EXTINT1                     (_UL_(1) << 17)
#define PIN_PA17A_EIC_EXTINT_NUM                   _L_(1)       /**< EIC signal: PIN_PA17 External Interrupt Line */

#define PIN_PB17A_EIC_EXTINT1                      _L_(49)      /**< EIC signal: EXTINT1 on PB17 mux A*/
#define MUX_PB17A_EIC_EXTINT1                      _L_(0)      
#define PINMUX_PB17A_EIC_EXTINT1                   ((PIN_PB17A_EIC_EXTINT1 << 16) | MUX_PB17A_EIC_EXTINT1)
#define PORT_PB17A_EIC_EXTINT1                     (_UL_(1) << 17)
#define PIN_PB17A_EIC_EXTINT_NUM                   _L_(1)       /**< EIC signal: PIN_PB17 External Interrupt Line */

#define PIN_PA18A_EIC_EXTINT2                      _L_(18)      /**< EIC signal: EXTINT2 on PA18 mux A*/
#define MUX_PA18A_EIC_EXTINT2                      _L_(0)      
#define PINMUX_PA18A_EIC_EXTINT2                   ((PIN_PA18A_EIC_EXTINT2 << 16) | MUX_PA18A_EIC_EXTINT2)
#define PORT_PA18A_EIC_EXTINT2                     (_UL_(1) << 18)
#define PIN_PA18A_EIC_EXTINT_NUM                   _L_(2)       /**< EIC signal: PIN_PA18 External Interrupt Line */

#define PIN_PB02A_EIC_EXTINT2                      _L_(34)      /**< EIC signal: EXTINT2 on PB02 mux A*/
#define MUX_PB02A_EIC_EXTINT2                      _L_(0)      
#define PINMUX_PB02A_EIC_EXTINT2                   ((PIN_PB02A_EIC_EXTINT2 << 16) | MUX_PB02A_EIC_EXTINT2)
#define PORT_PB02A_EIC_EXTINT2                     (_UL_(1) << 2)
#define PIN_PB02A_EIC_EXTINT_NUM                   _L_(2)       /**< EIC signal: PIN_PB02 External Interrupt Line */

#define PIN_PA19A_EIC_EXTINT3                      _L_(19)      /**< EIC signal: EXTINT3 on PA19 mux A*/
#define MUX_PA19A_EIC_EXTINT3                      _L_(0)      
#define PINMUX_PA19A_EIC_EXTINT3                   ((PIN_PA19A_EIC_EXTINT3 << 16) | MUX_PA19A_EIC_EXTINT3)
#define PORT_PA19A_EIC_EXTINT3                     (_UL_(1) << 19)
#define PIN_PA19A_EIC_EXTINT_NUM                   _L_(3)       /**< EIC signal: PIN_PA19 External Interrupt Line */

#define PIN_PB03A_EIC_EXTINT3                      _L_(35)      /**< EIC signal: EXTINT3 on PB03 mux A*/
#define MUX_PB03A_EIC_EXTINT3                      _L_(0)      
#define PINMUX_PB03A_EIC_EXTINT3                   ((PIN_PB03A_EIC_EXTINT3 << 16) | MUX_PB03A_EIC_EXTINT3)
#define PORT_PB03A_EIC_EXTINT3                     (_UL_(1) << 3)
#define PIN_PB03A_EIC_EXTINT_NUM                   _L_(3)       /**< EIC signal: PIN_PB03 External Interrupt Line */

#define PIN_PA04A_EIC_EXTINT4                      _L_(4)       /**< EIC signal: EXTINT4 on PA04 mux A*/
#define MUX_PA04A_EIC_EXTINT4                      _L_(0)      
#define PINMUX_PA04A_EIC_EXTINT4                   ((PIN_PA04A_EIC_EXTINT4 << 16) | MUX_PA04A_EIC_EXTINT4)
#define PORT_PA04A_EIC_EXTINT4                     (_UL_(1) << 4)
#define PIN_PA04A_EIC_EXTINT_NUM                   _L_(4)       /**< EIC signal: PIN_PA04 External Interrupt Line */

#define PIN_PA05A_EIC_EXTINT5                      _L_(5)       /**< EIC signal: EXTINT5 on PA05 mux A*/
#define MUX_PA05A_EIC_EXTINT5                      _L_(0)      
#define PINMUX_PA05A_EIC_EXTINT5                   ((PIN_PA05A_EIC_EXTINT5 << 16) | MUX_PA05A_EIC_EXTINT5)
#define PORT_PA05A_EIC_EXTINT5                     (_UL_(1) << 5)
#define PIN_PA05A_EIC_EXTINT_NUM                   _L_(5)       /**< EIC signal: PIN_PA05 External Interrupt Line */

#define PIN_PA06A_EIC_EXTINT6                      _L_(6)       /**< EIC signal: EXTINT6 on PA06 mux A*/
#define MUX_PA06A_EIC_EXTINT6                      _L_(0)      
#define PINMUX_PA06A_EIC_EXTINT6                   ((PIN_PA06A_EIC_EXTINT6 << 16) | MUX_PA06A_EIC_EXTINT6)
#define PORT_PA06A_EIC_EXTINT6                     (_UL_(1) << 6)
#define PIN_PA06A_EIC_EXTINT_NUM                   _L_(6)       /**< EIC signal: PIN_PA06 External Interrupt Line */

#define PIN_PA22A_EIC_EXTINT6                      _L_(22)      /**< EIC signal: EXTINT6 on PA22 mux A*/
#define MUX_PA22A_EIC_EXTINT6                      _L_(0)      
#define PINMUX_PA22A_EIC_EXTINT6                   ((PIN_PA22A_EIC_EXTINT6 << 16) | MUX_PA22A_EIC_EXTINT6)
#define PORT_PA22A_EIC_EXTINT6                     (_UL_(1) << 22)
#define PIN_PA22A_EIC_EXTINT_NUM                   _L_(6)       /**< EIC signal: PIN_PA22 External Interrupt Line */

#define PIN_PB22A_EIC_EXTINT6                      _L_(54)      /**< EIC signal: EXTINT6 on PB22 mux A*/
#define MUX_PB22A_EIC_EXTINT6                      _L_(0)      
#define PINMUX_PB22A_EIC_EXTINT6                   ((PIN_PB22A_EIC_EXTINT6 << 16) | MUX_PB22A_EIC_EXTINT6)
#define PORT_PB22A_EIC_EXTINT6                     (_UL_(1) << 22)
#define PIN_PB22A_EIC_EXTINT_NUM                   _L_(6)       /**< EIC signal: PIN_PB22 External Interrupt Line */

#define PIN_PA07A_EIC_EXTINT7                      _L_(7)       /**< EIC signal: EXTINT7 on PA07 mux A*/
#define MUX_PA07A_EIC_EXTINT7                      _L_(0)      
#define PINMUX_PA07A_EIC_EXTINT7                   ((PIN_PA07A_EIC_EXTINT7 << 16) | MUX_PA07A_EIC_EXTINT7)
#define PORT_PA07A_EIC_EXTINT7                     (_UL_(1) << 7)
#define PIN_PA07A_EIC_EXTINT_NUM                   _L_(7)       /**< EIC signal: PIN_PA07 External Interrupt Line */

#define PIN_PA23A_EIC_EXTINT7                      _L_(23)      /**< EIC signal: EXTINT7 on PA23 mux A*/
#define MUX_PA23A_EIC_EXTINT7                      _L_(0)      
#define PINMUX_PA23A_EIC_EXTINT7                   ((PIN_PA23A_EIC_EXTINT7 << 16) | MUX_PA23A_EIC_EXTINT7)
#define PORT_PA23A_EIC_EXTINT7                     (_UL_(1) << 23)
#define PIN_PA23A_EIC_EXTINT_NUM                   _L_(7)       /**< EIC signal: PIN_PA23 External Interrupt Line */

#define PIN_PB23A_EIC_EXTINT7                      _L_(55)      /**< EIC signal: EXTINT7 on PB23 mux A*/
#define MUX_PB23A_EIC_EXTINT7                      _L_(0)      
#define PINMUX_PB23A_EIC_EXTINT7                   ((PIN_PB23A_EIC_EXTINT7 << 16) | MUX_PB23A_EIC_EXTINT7)
#define PORT_PB23A_EIC_EXTINT7                     (_UL_(1) << 23)
#define PIN_PB23A_EIC_EXTINT_NUM                   _L_(7)       /**< EIC signal: PIN_PB23 External Interrupt Line */

#define PIN_PA28A_EIC_EXTINT8                      _L_(28)      /**< EIC signal: EXTINT8 on PA28 mux A*/
#define MUX_PA28A_EIC_EXTINT8                      _L_(0)      
#define PINMUX_PA28A_EIC_EXTINT8                   ((PIN_PA28A_EIC_EXTINT8 << 16) | MUX_PA28A_EIC_EXTINT8)
#define PORT_PA28A_EIC_EXTINT8                     (_UL_(1) << 28)
#define PIN_PA28A_EIC_EXTINT_NUM                   _L_(8)       /**< EIC signal: PIN_PA28 External Interrupt Line */

#define PIN_PA10A_EIC_EXTINT10                     _L_(10)      /**< EIC signal: EXTINT10 on PA10 mux A*/
#define MUX_PA10A_EIC_EXTINT10                     _L_(0)      
#define PINMUX_PA10A_EIC_EXTINT10                  ((PIN_PA10A_EIC_EXTINT10 << 16) | MUX_PA10A_EIC_EXTINT10)
#define PORT_PA10A_EIC_EXTINT10                    (_UL_(1) << 10)
#define PIN_PA10A_EIC_EXTINT_NUM                   _L_(10)      /**< EIC signal: PIN_PA10 External Interrupt Line */

#define PIN_PA30A_EIC_EXTINT10                     _L_(30)      /**< EIC signal: EXTINT10 on PA30 mux A*/
#define MUX_PA30A_EIC_EXTINT10                     _L_(0)      
#define PINMUX_PA30A_EIC_EXTINT10                  ((PIN_PA30A_EIC_EXTINT10 << 16) | MUX_PA30A_EIC_EXTINT10)
#define PORT_PA30A_EIC_EXTINT10                    (_UL_(1) << 30)
#define PIN_PA30A_EIC_EXTINT_NUM                   _L_(10)      /**< EIC signal: PIN_PA30 External Interrupt Line */

#define PIN_PA11A_EIC_EXTINT11                     _L_(11)      /**< EIC signal: EXTINT11 on PA11 mux A*/
#define MUX_PA11A_EIC_EXTINT11                     _L_(0)      
#define PINMUX_PA11A_EIC_EXTINT11                  ((PIN_PA11A_EIC_EXTINT11 << 16) | MUX_PA11A_EIC_EXTINT11)
#define PORT_PA11A_EIC_EXTINT11                    (_UL_(1) << 11)
#define PIN_PA11A_EIC_EXTINT_NUM                   _L_(11)      /**< EIC signal: PIN_PA11 External Interrupt Line */

#define PIN_PA31A_EIC_EXTINT11                     _L_(31)      /**< EIC signal: EXTINT11 on PA31 mux A*/
#define MUX_PA31A_EIC_EXTINT11                     _L_(0)      
#define PINMUX_PA31A_EIC_EXTINT11                  ((PIN_PA31A_EIC_EXTINT11 << 16) | MUX_PA31A_EIC_EXTINT11)
#define PORT_PA31A_EIC_EXTINT11                    (_UL_(1) << 31)
#define PIN_PA31A_EIC_EXTINT_NUM                   _L_(11)      /**< EIC signal: PIN_PA31 External Interrupt Line */

#define PIN_PA12A_EIC_EXTINT12                     _L_(12)      /**< EIC signal: EXTINT12 on PA12 mux A*/
#define MUX_PA12A_EIC_EXTINT12                     _L_(0)      
#define PINMUX_PA12A_EIC_EXTINT12                  ((PIN_PA12A_EIC_EXTINT12 << 16) | MUX_PA12A_EIC_EXTINT12)
#define PORT_PA12A_EIC_EXTINT12                    (_UL_(1) << 12)
#define PIN_PA12A_EIC_EXTINT_NUM                   _L_(12)      /**< EIC signal: PIN_PA12 External Interrupt Line */

#define PIN_PA24A_EIC_EXTINT12                     _L_(24)      /**< EIC signal: EXTINT12 on PA24 mux A*/
#define MUX_PA24A_EIC_EXTINT12                     _L_(0)      
#define PINMUX_PA24A_EIC_EXTINT12                  ((PIN_PA24A_EIC_EXTINT12 << 16) | MUX_PA24A_EIC_EXTINT12)
#define PORT_PA24A_EIC_EXTINT12                    (_UL_(1) << 24)
#define PIN_PA24A_EIC_EXTINT_NUM                   _L_(12)      /**< EIC signal: PIN_PA24 External Interrupt Line */

#define PIN_PA25A_EIC_EXTINT13                     _L_(25)      /**< EIC signal: EXTINT13 on PA25 mux A*/
#define MUX_PA25A_EIC_EXTINT13                     _L_(0)      
#define PINMUX_PA25A_EIC_EXTINT13                  ((PIN_PA25A_EIC_EXTINT13 << 16) | MUX_PA25A_EIC_EXTINT13)
#define PORT_PA25A_EIC_EXTINT13                    (_UL_(1) << 25)
#define PIN_PA25A_EIC_EXTINT_NUM                   _L_(13)      /**< EIC signal: PIN_PA25 External Interrupt Line */

#define PIN_PB30A_EIC_EXTINT14                     _L_(62)      /**< EIC signal: EXTINT14 on PB30 mux A*/
#define MUX_PB30A_EIC_EXTINT14                     _L_(0)      
#define PINMUX_PB30A_EIC_EXTINT14                  ((PIN_PB30A_EIC_EXTINT14 << 16) | MUX_PB30A_EIC_EXTINT14)
#define PORT_PB30A_EIC_EXTINT14                    (_UL_(1) << 30)
#define PIN_PB30A_EIC_EXTINT_NUM                   _L_(14)      /**< EIC signal: PIN_PB30 External Interrupt Line */

#define PIN_PA14A_EIC_EXTINT14                     _L_(14)      /**< EIC signal: EXTINT14 on PA14 mux A*/
#define MUX_PA14A_EIC_EXTINT14                     _L_(0)      
#define PINMUX_PA14A_EIC_EXTINT14                  ((PIN_PA14A_EIC_EXTINT14 << 16) | MUX_PA14A_EIC_EXTINT14)
#define PORT_PA14A_EIC_EXTINT14                    (_UL_(1) << 14)
#define PIN_PA14A_EIC_EXTINT_NUM                   _L_(14)      /**< EIC signal: PIN_PA14 External Interrupt Line */

#define PIN_PA27A_EIC_EXTINT15                     _L_(27)      /**< EIC signal: EXTINT15 on PA27 mux A*/
#define MUX_PA27A_EIC_EXTINT15                     _L_(0)      
#define PINMUX_PA27A_EIC_EXTINT15                  ((PIN_PA27A_EIC_EXTINT15 << 16) | MUX_PA27A_EIC_EXTINT15)
#define PORT_PA27A_EIC_EXTINT15                    (_UL_(1) << 27)
#define PIN_PA27A_EIC_EXTINT_NUM                   _L_(15)      /**< EIC signal: PIN_PA27 External Interrupt Line */

#define PIN_PB15A_EIC_EXTINT15                     _L_(47)      /**< EIC signal: EXTINT15 on PB15 mux A*/
#define MUX_PB15A_EIC_EXTINT15                     _L_(0)      
#define PINMUX_PB15A_EIC_EXTINT15                  ((PIN_PB15A_EIC_EXTINT15 << 16) | MUX_PB15A_EIC_EXTINT15)
#define PORT_PB15A_EIC_EXTINT15                    (_UL_(1) << 15)
#define PIN_PB15A_EIC_EXTINT_NUM                   _L_(15)      /**< EIC signal: PIN_PB15 External Interrupt Line */

#define PIN_PB31A_EIC_EXTINT15                     _L_(63)      /**< EIC signal: EXTINT15 on PB31 mux A*/
#define MUX_PB31A_EIC_EXTINT15                     _L_(0)      
#define PINMUX_PB31A_EIC_EXTINT15                  ((PIN_PB31A_EIC_EXTINT15 << 16) | MUX_PB31A_EIC_EXTINT15)
#define PORT_PB31A_EIC_EXTINT15                    (_UL_(1) << 31)
#define PIN_PB31A_EIC_EXTINT_NUM                   _L_(15)      /**< EIC signal: PIN_PB31 External Interrupt Line */

#define PIN_PA15A_EIC_EXTINT15                     _L_(15)      /**< EIC signal: EXTINT15 on PA15 mux A*/
#define MUX_PA15A_EIC_EXTINT15                     _L_(0)      
#define PINMUX_PA15A_EIC_EXTINT15                  ((PIN_PA15A_EIC_EXTINT15 << 16) | MUX_PA15A_EIC_EXTINT15)
#define PORT_PA15A_EIC_EXTINT15                    (_UL_(1) << 15)
#define PIN_PA15A_EIC_EXTINT_NUM                   _L_(15)      /**< EIC signal: PIN_PA15 External Interrupt Line */

#define PIN_PA08A_EIC_NMI                          _L_(8)       /**< EIC signal: NMI on PA08 mux A*/
#define MUX_PA08A_EIC_NMI                          _L_(0)      
#define PINMUX_PA08A_EIC_NMI                       ((PIN_PA08A_EIC_NMI << 16) | MUX_PA08A_EIC_NMI)
#define PORT_PA08A_EIC_NMI                         (_UL_(1) << 8)

/* ========== PORT definition for GCLK peripheral ========== */
#define PIN_PB22H_GCLK_IO0                         _L_(54)      /**< GCLK signal: IO0 on PB22 mux H*/
#define MUX_PB22H_GCLK_IO0                         _L_(7)      
#define PINMUX_PB22H_GCLK_IO0                      ((PIN_PB22H_GCLK_IO0 << 16) | MUX_PB22H_GCLK_IO0)
#define PORT_PB22H_GCLK_IO0                        (_UL_(1) << 22)

#define PIN_PA14H_GCLK_IO0                         _L_(14)      /**< GCLK signal: IO0 on PA14 mux H*/
#define MUX_PA14H_GCLK_IO0                         _L_(7)      
#define PINMUX_PA14H_GCLK_IO0                      ((PIN_PA14H_GCLK_IO0 << 16) | MUX_PA14H_GCLK_IO0)
#define PORT_PA14H_GCLK_IO0                        (_UL_(1) << 14)

#define PIN_PA27H_GCLK_IO0                         _L_(27)      /**< GCLK signal: IO0 on PA27 mux H*/
#define MUX_PA27H_GCLK_IO0                         _L_(7)      
#define PINMUX_PA27H_GCLK_IO0                      ((PIN_PA27H_GCLK_IO0 << 16) | MUX_PA27H_GCLK_IO0)
#define PORT_PA27H_GCLK_IO0                        (_UL_(1) << 27)

#define PIN_PA30H_GCLK_IO0                         _L_(30)      /**< GCLK signal: IO0 on PA30 mux H*/
#define MUX_PA30H_GCLK_IO0                         _L_(7)      
#define PINMUX_PA30H_GCLK_IO0                      ((PIN_PA30H_GCLK_IO0 << 16) | MUX_PA30H_GCLK_IO0)
#define PORT_PA30H_GCLK_IO0                        (_UL_(1) << 30)

#define PIN_PA28H_GCLK_IO0                         _L_(28)      /**< GCLK signal: IO0 on PA28 mux H*/
#define MUX_PA28H_GCLK_IO0                         _L_(7)      
#define PINMUX_PA28H_GCLK_IO0                      ((PIN_PA28H_GCLK_IO0 << 16) | MUX_PA28H_GCLK_IO0)
#define PORT_PA28H_GCLK_IO0                        (_UL_(1) << 28)

#define PIN_PB15H_GCLK_IO1                         _L_(47)      /**< GCLK signal: IO1 on PB15 mux H*/
#define MUX_PB15H_GCLK_IO1                         _L_(7)      
#define PINMUX_PB15H_GCLK_IO1                      ((PIN_PB15H_GCLK_IO1 << 16) | MUX_PB15H_GCLK_IO1)
#define PORT_PB15H_GCLK_IO1                        (_UL_(1) << 15)

#define PIN_PB23H_GCLK_IO1                         _L_(55)      /**< GCLK signal: IO1 on PB23 mux H*/
#define MUX_PB23H_GCLK_IO1                         _L_(7)      
#define PINMUX_PB23H_GCLK_IO1                      ((PIN_PB23H_GCLK_IO1 << 16) | MUX_PB23H_GCLK_IO1)
#define PORT_PB23H_GCLK_IO1                        (_UL_(1) << 23)

#define PIN_PA15H_GCLK_IO1                         _L_(15)      /**< GCLK signal: IO1 on PA15 mux H*/
#define MUX_PA15H_GCLK_IO1                         _L_(7)      
#define PINMUX_PA15H_GCLK_IO1                      ((PIN_PA15H_GCLK_IO1 << 16) | MUX_PA15H_GCLK_IO1)
#define PORT_PA15H_GCLK_IO1                        (_UL_(1) << 15)

#define PIN_PB16H_GCLK_IO2                         _L_(48)      /**< GCLK signal: IO2 on PB16 mux H*/
#define MUX_PB16H_GCLK_IO2                         _L_(7)      
#define PINMUX_PB16H_GCLK_IO2                      ((PIN_PB16H_GCLK_IO2 << 16) | MUX_PB16H_GCLK_IO2)
#define PORT_PB16H_GCLK_IO2                        (_UL_(1) << 16)

#define PIN_PA16H_GCLK_IO2                         _L_(16)      /**< GCLK signal: IO2 on PA16 mux H*/
#define MUX_PA16H_GCLK_IO2                         _L_(7)      
#define PINMUX_PA16H_GCLK_IO2                      ((PIN_PA16H_GCLK_IO2 << 16) | MUX_PA16H_GCLK_IO2)
#define PORT_PA16H_GCLK_IO2                        (_UL_(1) << 16)

#define PIN_PA17H_GCLK_IO3                         _L_(17)      /**< GCLK signal: IO3 on PA17 mux H*/
#define MUX_PA17H_GCLK_IO3                         _L_(7)      
#define PINMUX_PA17H_GCLK_IO3                      ((PIN_PA17H_GCLK_IO3 << 16) | MUX_PA17H_GCLK_IO3)
#define PORT_PA17H_GCLK_IO3                        (_UL_(1) << 17)

#define PIN_PB17H_GCLK_IO3                         _L_(49)      /**< GCLK signal: IO3 on PB17 mux H*/
#define MUX_PB17H_GCLK_IO3                         _L_(7)      
#define PINMUX_PB17H_GCLK_IO3                      ((PIN_PB17H_GCLK_IO3 << 16) | MUX_PB17H_GCLK_IO3)
#define PORT_PB17H_GCLK_IO3                        (_UL_(1) << 17)

#define PIN_PA10H_GCLK_IO4                         _L_(10)      /**< GCLK signal: IO4 on PA10 mux H*/
#define MUX_PA10H_GCLK_IO4                         _L_(7)      
#define PINMUX_PA10H_GCLK_IO4                      ((PIN_PA10H_GCLK_IO4 << 16) | MUX_PA10H_GCLK_IO4)
#define PORT_PA10H_GCLK_IO4                        (_UL_(1) << 10)

#define PIN_PA11H_GCLK_IO5                         _L_(11)      /**< GCLK signal: IO5 on PA11 mux H*/
#define MUX_PA11H_GCLK_IO5                         _L_(7)      
#define PINMUX_PA11H_GCLK_IO5                      ((PIN_PA11H_GCLK_IO5 << 16) | MUX_PA11H_GCLK_IO5)
#define PORT_PA11H_GCLK_IO5                        (_UL_(1) << 11)

#define PIN_PA22H_GCLK_IO6                         _L_(22)      /**< GCLK signal: IO6 on PA22 mux H*/
#define MUX_PA22H_GCLK_IO6                         _L_(7)      
#define PINMUX_PA22H_GCLK_IO6                      ((PIN_PA22H_GCLK_IO6 << 16) | MUX_PA22H_GCLK_IO6)
#define PORT_PA22H_GCLK_IO6                        (_UL_(1) << 22)

#define PIN_PA23H_GCLK_IO7                         _L_(23)      /**< GCLK signal: IO7 on PA23 mux H*/
#define MUX_PA23H_GCLK_IO7                         _L_(7)      
#define PINMUX_PA23H_GCLK_IO7                      ((PIN_PA23H_GCLK_IO7 << 16) | MUX_PA23H_GCLK_IO7)
#define PORT_PA23H_GCLK_IO7                        (_UL_(1) << 23)

/* ========== PORT definition for PTC peripheral ========== */
#define PIN_PA08B_PTC_X0                           _L_(8)       /**< PTC signal: X0 on PA08 mux B*/
#define MUX_PA08B_PTC_X0                           _L_(1)      
#define PINMUX_PA08B_PTC_X0                        ((PIN_PA08B_PTC_X0 << 16) | MUX_PA08B_PTC_X0)
#define PORT_PA08B_PTC_X0                          (_UL_(1) << 8)

#define PIN_PA10B_PTC_X2                           _L_(10)      /**< PTC signal: X2 on PA10 mux B*/
#define MUX_PA10B_PTC_X2                           _L_(1)      
#define PINMUX_PA10B_PTC_X2                        ((PIN_PA10B_PTC_X2 << 16) | MUX_PA10B_PTC_X2)
#define PORT_PA10B_PTC_X2                          (_UL_(1) << 10)

#define PIN_PA11B_PTC_X3                           _L_(11)      /**< PTC signal: X3 on PA11 mux B*/
#define MUX_PA11B_PTC_X3                           _L_(1)      
#define PINMUX_PA11B_PTC_X3                        ((PIN_PA11B_PTC_X3 << 16) | MUX_PA11B_PTC_X3)
#define PORT_PA11B_PTC_X3                          (_UL_(1) << 11)

#define PIN_PA16B_PTC_X4                           _L_(16)      /**< PTC signal: X4 on PA16 mux B*/
#define MUX_PA16B_PTC_X4                           _L_(1)      
#define PINMUX_PA16B_PTC_X4                        ((PIN_PA16B_PTC_X4 << 16) | MUX_PA16B_PTC_X4)
#define PORT_PA16B_PTC_X4                          (_UL_(1) << 16)

#define PIN_PA17B_PTC_X5                           _L_(17)      /**< PTC signal: X5 on PA17 mux B*/
#define MUX_PA17B_PTC_X5                           _L_(1)      
#define PINMUX_PA17B_PTC_X5                        ((PIN_PA17B_PTC_X5 << 16) | MUX_PA17B_PTC_X5)
#define PORT_PA17B_PTC_X5                          (_UL_(1) << 17)

#define PIN_PA18B_PTC_X6                           _L_(18)      /**< PTC signal: X6 on PA18 mux B*/
#define MUX_PA18B_PTC_X6                           _L_(1)      
#define PINMUX_PA18B_PTC_X6                        ((PIN_PA18B_PTC_X6 << 16) | MUX_PA18B_PTC_X6)
#define PORT_PA18B_PTC_X6                          (_UL_(1) << 18)

#define PIN_PA19B_PTC_X7                           _L_(19)      /**< PTC signal: X7 on PA19 mux B*/
#define MUX_PA19B_PTC_X7                           _L_(1)      
#define PINMUX_PA19B_PTC_X7                        ((PIN_PA19B_PTC_X7 << 16) | MUX_PA19B_PTC_X7)
#define PORT_PA19B_PTC_X7                          (_UL_(1) << 19)

#define PIN_PA22B_PTC_X10                          _L_(22)      /**< PTC signal: X10 on PA22 mux B*/
#define MUX_PA22B_PTC_X10                          _L_(1)      
#define PINMUX_PA22B_PTC_X10                       ((PIN_PA22B_PTC_X10 << 16) | MUX_PA22B_PTC_X10)
#define PORT_PA22B_PTC_X10                         (_UL_(1) << 22)

#define PIN_PA23B_PTC_X11                          _L_(23)      /**< PTC signal: X11 on PA23 mux B*/
#define MUX_PA23B_PTC_X11                          _L_(1)      
#define PINMUX_PA23B_PTC_X11                       ((PIN_PA23B_PTC_X11 << 16) | MUX_PA23B_PTC_X11)
#define PORT_PA23B_PTC_X11                         (_UL_(1) << 23)

#define PIN_PB15B_PTC_X15                          _L_(47)      /**< PTC signal: X15 on PB15 mux B*/
#define MUX_PB15B_PTC_X15                          _L_(1)      
#define PINMUX_PB15B_PTC_X15                       ((PIN_PB15B_PTC_X15 << 16) | MUX_PB15B_PTC_X15)
#define PORT_PB15B_PTC_X15                         (_UL_(1) << 15)

#define PIN_PA06B_PTC_Y4                           _L_(6)       /**< PTC signal: Y4 on PA06 mux B*/
#define MUX_PA06B_PTC_Y4                           _L_(1)      
#define PINMUX_PA06B_PTC_Y4                        ((PIN_PA06B_PTC_Y4 << 16) | MUX_PA06B_PTC_Y4)
#define PORT_PA06B_PTC_Y4                          (_UL_(1) << 6)

#define PIN_PA08B_PTC_Y6                           _L_(8)       /**< PTC signal: Y6 on PA08 mux B*/
#define MUX_PA08B_PTC_Y6                           _L_(1)      
#define PINMUX_PA08B_PTC_Y6                        ((PIN_PA08B_PTC_Y6 << 16) | MUX_PA08B_PTC_Y6)
#define PORT_PA08B_PTC_Y6                          (_UL_(1) << 8)

#define PIN_PA10B_PTC_Y8                           _L_(10)      /**< PTC signal: Y8 on PA10 mux B*/
#define MUX_PA10B_PTC_Y8                           _L_(1)      
#define PINMUX_PA10B_PTC_Y8                        ((PIN_PA10B_PTC_Y8 << 16) | MUX_PA10B_PTC_Y8)
#define PORT_PA10B_PTC_Y8                          (_UL_(1) << 10)

#define PIN_PA11B_PTC_Y9                           _L_(11)      /**< PTC signal: Y9 on PA11 mux B*/
#define MUX_PA11B_PTC_Y9                           _L_(1)      
#define PINMUX_PA11B_PTC_Y9                        ((PIN_PA11B_PTC_Y9 << 16) | MUX_PA11B_PTC_Y9)
#define PORT_PA11B_PTC_Y9                          (_UL_(1) << 11)

/* ========== PORT definition for RSTC peripheral ========== */
#define PIN_PA04A_RSTC_EXTWAKE4                    _L_(4)       /**< RSTC signal: EXTWAKE4 on PA04 mux A*/
#define MUX_PA04A_RSTC_EXTWAKE4                    _L_(0)      
#define PINMUX_PA04A_RSTC_EXTWAKE4                 ((PIN_PA04A_RSTC_EXTWAKE4 << 16) | MUX_PA04A_RSTC_EXTWAKE4)
#define PORT_PA04A_RSTC_EXTWAKE4                   (_UL_(1) << 4)

#define PIN_PA05A_RSTC_EXTWAKE5                    _L_(5)       /**< RSTC signal: EXTWAKE5 on PA05 mux A*/
#define MUX_PA05A_RSTC_EXTWAKE5                    _L_(0)      
#define PINMUX_PA05A_RSTC_EXTWAKE5                 ((PIN_PA05A_RSTC_EXTWAKE5 << 16) | MUX_PA05A_RSTC_EXTWAKE5)
#define PORT_PA05A_RSTC_EXTWAKE5                   (_UL_(1) << 5)

#define PIN_PA06A_RSTC_EXTWAKE6                    _L_(6)       /**< RSTC signal: EXTWAKE6 on PA06 mux A*/
#define MUX_PA06A_RSTC_EXTWAKE6                    _L_(0)      
#define PINMUX_PA06A_RSTC_EXTWAKE6                 ((PIN_PA06A_RSTC_EXTWAKE6 << 16) | MUX_PA06A_RSTC_EXTWAKE6)
#define PORT_PA06A_RSTC_EXTWAKE6                   (_UL_(1) << 6)

#define PIN_PA07A_RSTC_EXTWAKE7                    _L_(7)       /**< RSTC signal: EXTWAKE7 on PA07 mux A*/
#define MUX_PA07A_RSTC_EXTWAKE7                    _L_(0)      
#define PINMUX_PA07A_RSTC_EXTWAKE7                 ((PIN_PA07A_RSTC_EXTWAKE7 << 16) | MUX_PA07A_RSTC_EXTWAKE7)
#define PORT_PA07A_RSTC_EXTWAKE7                   (_UL_(1) << 7)

/* ========== PORT definition for SERCOM0 peripheral ========== */
#define PIN_PA04D_SERCOM0_PAD0                     _L_(4)       /**< SERCOM0 signal: PAD0 on PA04 mux D*/
#define MUX_PA04D_SERCOM0_PAD0                     _L_(3)      
#define PINMUX_PA04D_SERCOM0_PAD0                  ((PIN_PA04D_SERCOM0_PAD0 << 16) | MUX_PA04D_SERCOM0_PAD0)
#define PORT_PA04D_SERCOM0_PAD0                    (_UL_(1) << 4)

#define PIN_PA08C_SERCOM0_PAD0                     _L_(8)       /**< SERCOM0 signal: PAD0 on PA08 mux C*/
#define MUX_PA08C_SERCOM0_PAD0                     _L_(2)      
#define PINMUX_PA08C_SERCOM0_PAD0                  ((PIN_PA08C_SERCOM0_PAD0 << 16) | MUX_PA08C_SERCOM0_PAD0)
#define PORT_PA08C_SERCOM0_PAD0                    (_UL_(1) << 8)

#define PIN_PA05D_SERCOM0_PAD1                     _L_(5)       /**< SERCOM0 signal: PAD1 on PA05 mux D*/
#define MUX_PA05D_SERCOM0_PAD1                     _L_(3)      
#define PINMUX_PA05D_SERCOM0_PAD1                  ((PIN_PA05D_SERCOM0_PAD1 << 16) | MUX_PA05D_SERCOM0_PAD1)
#define PORT_PA05D_SERCOM0_PAD1                    (_UL_(1) << 5)

#define PIN_PA06D_SERCOM0_PAD2                     _L_(6)       /**< SERCOM0 signal: PAD2 on PA06 mux D*/
#define MUX_PA06D_SERCOM0_PAD2                     _L_(3)      
#define PINMUX_PA06D_SERCOM0_PAD2                  ((PIN_PA06D_SERCOM0_PAD2 << 16) | MUX_PA06D_SERCOM0_PAD2)
#define PORT_PA06D_SERCOM0_PAD2                    (_UL_(1) << 6)

#define PIN_PA10C_SERCOM0_PAD2                     _L_(10)      /**< SERCOM0 signal: PAD2 on PA10 mux C*/
#define MUX_PA10C_SERCOM0_PAD2                     _L_(2)      
#define PINMUX_PA10C_SERCOM0_PAD2                  ((PIN_PA10C_SERCOM0_PAD2 << 16) | MUX_PA10C_SERCOM0_PAD2)
#define PORT_PA10C_SERCOM0_PAD2                    (_UL_(1) << 10)

#define PIN_PA07D_SERCOM0_PAD3                     _L_(7)       /**< SERCOM0 signal: PAD3 on PA07 mux D*/
#define MUX_PA07D_SERCOM0_PAD3                     _L_(3)      
#define PINMUX_PA07D_SERCOM0_PAD3                  ((PIN_PA07D_SERCOM0_PAD3 << 16) | MUX_PA07D_SERCOM0_PAD3)
#define PORT_PA07D_SERCOM0_PAD3                    (_UL_(1) << 7)

#define PIN_PA11C_SERCOM0_PAD3                     _L_(11)      /**< SERCOM0 signal: PAD3 on PA11 mux C*/
#define MUX_PA11C_SERCOM0_PAD3                     _L_(2)      
#define PINMUX_PA11C_SERCOM0_PAD3                  ((PIN_PA11C_SERCOM0_PAD3 << 16) | MUX_PA11C_SERCOM0_PAD3)
#define PORT_PA11C_SERCOM0_PAD3                    (_UL_(1) << 11)

/* ========== PORT definition for SERCOM1 peripheral ========== */
#define PIN_PA16C_SERCOM1_PAD0                     _L_(16)      /**< SERCOM1 signal: PAD0 on PA16 mux C*/
#define MUX_PA16C_SERCOM1_PAD0                     _L_(2)      
#define PINMUX_PA16C_SERCOM1_PAD0                  ((PIN_PA16C_SERCOM1_PAD0 << 16) | MUX_PA16C_SERCOM1_PAD0)
#define PORT_PA16C_SERCOM1_PAD0                    (_UL_(1) << 16)

#define PIN_PA17C_SERCOM1_PAD1                     _L_(17)      /**< SERCOM1 signal: PAD1 on PA17 mux C*/
#define MUX_PA17C_SERCOM1_PAD1                     _L_(2)      
#define PINMUX_PA17C_SERCOM1_PAD1                  ((PIN_PA17C_SERCOM1_PAD1 << 16) | MUX_PA17C_SERCOM1_PAD1)
#define PORT_PA17C_SERCOM1_PAD1                    (_UL_(1) << 17)

#define PIN_PA30D_SERCOM1_PAD2                     _L_(30)      /**< SERCOM1 signal: PAD2 on PA30 mux D*/
#define MUX_PA30D_SERCOM1_PAD2                     _L_(3)      
#define PINMUX_PA30D_SERCOM1_PAD2                  ((PIN_PA30D_SERCOM1_PAD2 << 16) | MUX_PA30D_SERCOM1_PAD2)
#define PORT_PA30D_SERCOM1_PAD2                    (_UL_(1) << 30)

#define PIN_PA18C_SERCOM1_PAD2                     _L_(18)      /**< SERCOM1 signal: PAD2 on PA18 mux C*/
#define MUX_PA18C_SERCOM1_PAD2                     _L_(2)      
#define PINMUX_PA18C_SERCOM1_PAD2                  ((PIN_PA18C_SERCOM1_PAD2 << 16) | MUX_PA18C_SERCOM1_PAD2)
#define PORT_PA18C_SERCOM1_PAD2                    (_UL_(1) << 18)

#define PIN_PA31D_SERCOM1_PAD3                     _L_(31)      /**< SERCOM1 signal: PAD3 on PA31 mux D*/
#define MUX_PA31D_SERCOM1_PAD3                     _L_(3)      
#define PINMUX_PA31D_SERCOM1_PAD3                  ((PIN_PA31D_SERCOM1_PAD3 << 16) | MUX_PA31D_SERCOM1_PAD3)
#define PORT_PA31D_SERCOM1_PAD3                    (_UL_(1) << 31)

#define PIN_PA19C_SERCOM1_PAD3                     _L_(19)      /**< SERCOM1 signal: PAD3 on PA19 mux C*/
#define MUX_PA19C_SERCOM1_PAD3                     _L_(2)      
#define PINMUX_PA19C_SERCOM1_PAD3                  ((PIN_PA19C_SERCOM1_PAD3 << 16) | MUX_PA19C_SERCOM1_PAD3)
#define PORT_PA19C_SERCOM1_PAD3                    (_UL_(1) << 19)

/* ========== PORT definition for SERCOM2 peripheral ========== */
#define PIN_PA08D_SERCOM2_PAD0                     _L_(8)       /**< SERCOM2 signal: PAD0 on PA08 mux D*/
#define MUX_PA08D_SERCOM2_PAD0                     _L_(3)      
#define PINMUX_PA08D_SERCOM2_PAD0                  ((PIN_PA08D_SERCOM2_PAD0 << 16) | MUX_PA08D_SERCOM2_PAD0)
#define PORT_PA08D_SERCOM2_PAD0                    (_UL_(1) << 8)

#define PIN_PA12C_SERCOM2_PAD0                     _L_(12)      /**< SERCOM2 signal: PAD0 on PA12 mux C*/
#define MUX_PA12C_SERCOM2_PAD0                     _L_(2)      
#define PINMUX_PA12C_SERCOM2_PAD0                  ((PIN_PA12C_SERCOM2_PAD0 << 16) | MUX_PA12C_SERCOM2_PAD0)
#define PORT_PA12C_SERCOM2_PAD0                    (_UL_(1) << 12)

#define PIN_PA10D_SERCOM2_PAD2                     _L_(10)      /**< SERCOM2 signal: PAD2 on PA10 mux D*/
#define MUX_PA10D_SERCOM2_PAD2                     _L_(3)      
#define PINMUX_PA10D_SERCOM2_PAD2                  ((PIN_PA10D_SERCOM2_PAD2 << 16) | MUX_PA10D_SERCOM2_PAD2)
#define PORT_PA10D_SERCOM2_PAD2                    (_UL_(1) << 10)

#define PIN_PA14C_SERCOM2_PAD2                     _L_(14)      /**< SERCOM2 signal: PAD2 on PA14 mux C*/
#define MUX_PA14C_SERCOM2_PAD2                     _L_(2)      
#define PINMUX_PA14C_SERCOM2_PAD2                  ((PIN_PA14C_SERCOM2_PAD2 << 16) | MUX_PA14C_SERCOM2_PAD2)
#define PORT_PA14C_SERCOM2_PAD2                    (_UL_(1) << 14)

#define PIN_PA11D_SERCOM2_PAD3                     _L_(11)      /**< SERCOM2 signal: PAD3 on PA11 mux D*/
#define MUX_PA11D_SERCOM2_PAD3                     _L_(3)      
#define PINMUX_PA11D_SERCOM2_PAD3                  ((PIN_PA11D_SERCOM2_PAD3 << 16) | MUX_PA11D_SERCOM2_PAD3)
#define PORT_PA11D_SERCOM2_PAD3                    (_UL_(1) << 11)

#define PIN_PA15C_SERCOM2_PAD3                     _L_(15)      /**< SERCOM2 signal: PAD3 on PA15 mux C*/
#define MUX_PA15C_SERCOM2_PAD3                     _L_(2)      
#define PINMUX_PA15C_SERCOM2_PAD3                  ((PIN_PA15C_SERCOM2_PAD3 << 16) | MUX_PA15C_SERCOM2_PAD3)
#define PORT_PA15C_SERCOM2_PAD3                    (_UL_(1) << 15)

/* ========== PORT definition for SERCOM3 peripheral ========== */
#define PIN_PA16D_SERCOM3_PAD0                     _L_(16)      /**< SERCOM3 signal: PAD0 on PA16 mux D*/
#define MUX_PA16D_SERCOM3_PAD0                     _L_(3)      
#define PINMUX_PA16D_SERCOM3_PAD0                  ((PIN_PA16D_SERCOM3_PAD0 << 16) | MUX_PA16D_SERCOM3_PAD0)
#define PORT_PA16D_SERCOM3_PAD0                    (_UL_(1) << 16)

#define PIN_PA22C_SERCOM3_PAD0                     _L_(22)      /**< SERCOM3 signal: PAD0 on PA22 mux C*/
#define MUX_PA22C_SERCOM3_PAD0                     _L_(2)      
#define PINMUX_PA22C_SERCOM3_PAD0                  ((PIN_PA22C_SERCOM3_PAD0 << 16) | MUX_PA22C_SERCOM3_PAD0)
#define PORT_PA22C_SERCOM3_PAD0                    (_UL_(1) << 22)

#define PIN_PA17D_SERCOM3_PAD1                     _L_(17)      /**< SERCOM3 signal: PAD1 on PA17 mux D*/
#define MUX_PA17D_SERCOM3_PAD1                     _L_(3)      
#define PINMUX_PA17D_SERCOM3_PAD1                  ((PIN_PA17D_SERCOM3_PAD1 << 16) | MUX_PA17D_SERCOM3_PAD1)
#define PORT_PA17D_SERCOM3_PAD1                    (_UL_(1) << 17)

#define PIN_PA23C_SERCOM3_PAD1                     _L_(23)      /**< SERCOM3 signal: PAD1 on PA23 mux C*/
#define MUX_PA23C_SERCOM3_PAD1                     _L_(2)      
#define PINMUX_PA23C_SERCOM3_PAD1                  ((PIN_PA23C_SERCOM3_PAD1 << 16) | MUX_PA23C_SERCOM3_PAD1)
#define PORT_PA23C_SERCOM3_PAD1                    (_UL_(1) << 23)

#define PIN_PA18D_SERCOM3_PAD2                     _L_(18)      /**< SERCOM3 signal: PAD2 on PA18 mux D*/
#define MUX_PA18D_SERCOM3_PAD2                     _L_(3)      
#define PINMUX_PA18D_SERCOM3_PAD2                  ((PIN_PA18D_SERCOM3_PAD2 << 16) | MUX_PA18D_SERCOM3_PAD2)
#define PORT_PA18D_SERCOM3_PAD2                    (_UL_(1) << 18)

#define PIN_PA24C_SERCOM3_PAD2                     _L_(24)      /**< SERCOM3 signal: PAD2 on PA24 mux C*/
#define MUX_PA24C_SERCOM3_PAD2                     _L_(2)      
#define PINMUX_PA24C_SERCOM3_PAD2                  ((PIN_PA24C_SERCOM3_PAD2 << 16) | MUX_PA24C_SERCOM3_PAD2)
#define PORT_PA24C_SERCOM3_PAD2                    (_UL_(1) << 24)

#define PIN_PA19D_SERCOM3_PAD3                     _L_(19)      /**< SERCOM3 signal: PAD3 on PA19 mux D*/
#define MUX_PA19D_SERCOM3_PAD3                     _L_(3)      
#define PINMUX_PA19D_SERCOM3_PAD3                  ((PIN_PA19D_SERCOM3_PAD3 << 16) | MUX_PA19D_SERCOM3_PAD3)
#define PORT_PA19D_SERCOM3_PAD3                    (_UL_(1) << 19)

#define PIN_PA25C_SERCOM3_PAD3                     _L_(25)      /**< SERCOM3 signal: PAD3 on PA25 mux C*/
#define MUX_PA25C_SERCOM3_PAD3                     _L_(2)      
#define PINMUX_PA25C_SERCOM3_PAD3                  ((PIN_PA25C_SERCOM3_PAD3 << 16) | MUX_PA25C_SERCOM3_PAD3)
#define PORT_PA25C_SERCOM3_PAD3                    (_UL_(1) << 25)

/* ========== PORT definition for SERCOM4 peripheral ========== */
#define PIN_PA12D_SERCOM4_PAD0                     _L_(12)      /**< SERCOM4 signal: PAD0 on PA12 mux D*/
#define MUX_PA12D_SERCOM4_PAD0                     _L_(3)      
#define PINMUX_PA12D_SERCOM4_PAD0                  ((PIN_PA12D_SERCOM4_PAD0 << 16) | MUX_PA12D_SERCOM4_PAD0)
#define PORT_PA12D_SERCOM4_PAD0                    (_UL_(1) << 12)

#define PIN_PA14D_SERCOM4_PAD2                     _L_(14)      /**< SERCOM4 signal: PAD2 on PA14 mux D*/
#define MUX_PA14D_SERCOM4_PAD2                     _L_(3)      
#define PINMUX_PA14D_SERCOM4_PAD2                  ((PIN_PA14D_SERCOM4_PAD2 << 16) | MUX_PA14D_SERCOM4_PAD2)
#define PORT_PA14D_SERCOM4_PAD2                    (_UL_(1) << 14)

#define PIN_PA15D_SERCOM4_PAD3                     _L_(15)      /**< SERCOM4 signal: PAD3 on PA15 mux D*/
#define MUX_PA15D_SERCOM4_PAD3                     _L_(3)      
#define PINMUX_PA15D_SERCOM4_PAD3                  ((PIN_PA15D_SERCOM4_PAD3 << 16) | MUX_PA15D_SERCOM4_PAD3)
#define PORT_PA15D_SERCOM4_PAD3                    (_UL_(1) << 15)

#define PIN_PB15C_SERCOM4_PAD3                     _L_(47)      /**< SERCOM4 signal: PAD3 on PB15 mux C*/
#define MUX_PB15C_SERCOM4_PAD3                     _L_(2)      
#define PINMUX_PB15C_SERCOM4_PAD3                  ((PIN_PB15C_SERCOM4_PAD3 << 16) | MUX_PB15C_SERCOM4_PAD3)
#define PORT_PB15C_SERCOM4_PAD3                    (_UL_(1) << 15)

/* ========== PORT definition for SERCOM5 peripheral ========== */
#define PIN_PA22D_SERCOM5_PAD0                     _L_(22)      /**< SERCOM5 signal: PAD0 on PA22 mux D*/
#define MUX_PA22D_SERCOM5_PAD0                     _L_(3)      
#define PINMUX_PA22D_SERCOM5_PAD0                  ((PIN_PA22D_SERCOM5_PAD0 << 16) | MUX_PA22D_SERCOM5_PAD0)
#define PORT_PA22D_SERCOM5_PAD0                    (_UL_(1) << 22)

#define PIN_PB02D_SERCOM5_PAD0                     _L_(34)      /**< SERCOM5 signal: PAD0 on PB02 mux D*/
#define MUX_PB02D_SERCOM5_PAD0                     _L_(3)      
#define PINMUX_PB02D_SERCOM5_PAD0                  ((PIN_PB02D_SERCOM5_PAD0 << 16) | MUX_PB02D_SERCOM5_PAD0)
#define PORT_PB02D_SERCOM5_PAD0                    (_UL_(1) << 2)

#define PIN_PB30D_SERCOM5_PAD0                     _L_(62)      /**< SERCOM5 signal: PAD0 on PB30 mux D*/
#define MUX_PB30D_SERCOM5_PAD0                     _L_(3)      
#define PINMUX_PB30D_SERCOM5_PAD0                  ((PIN_PB30D_SERCOM5_PAD0 << 16) | MUX_PB30D_SERCOM5_PAD0)
#define PORT_PB30D_SERCOM5_PAD0                    (_UL_(1) << 30)

#define PIN_PB16C_SERCOM5_PAD0                     _L_(48)      /**< SERCOM5 signal: PAD0 on PB16 mux C*/
#define MUX_PB16C_SERCOM5_PAD0                     _L_(2)      
#define PINMUX_PB16C_SERCOM5_PAD0                  ((PIN_PB16C_SERCOM5_PAD0 << 16) | MUX_PB16C_SERCOM5_PAD0)
#define PORT_PB16C_SERCOM5_PAD0                    (_UL_(1) << 16)

#define PIN_PA23D_SERCOM5_PAD1                     _L_(23)      /**< SERCOM5 signal: PAD1 on PA23 mux D*/
#define MUX_PA23D_SERCOM5_PAD1                     _L_(3)      
#define PINMUX_PA23D_SERCOM5_PAD1                  ((PIN_PA23D_SERCOM5_PAD1 << 16) | MUX_PA23D_SERCOM5_PAD1)
#define PORT_PA23D_SERCOM5_PAD1                    (_UL_(1) << 23)

#define PIN_PB03D_SERCOM5_PAD1                     _L_(35)      /**< SERCOM5 signal: PAD1 on PB03 mux D*/
#define MUX_PB03D_SERCOM5_PAD1                     _L_(3)      
#define PINMUX_PB03D_SERCOM5_PAD1                  ((PIN_PB03D_SERCOM5_PAD1 << 16) | MUX_PB03D_SERCOM5_PAD1)
#define PORT_PB03D_SERCOM5_PAD1                    (_UL_(1) << 3)

#define PIN_PB31D_SERCOM5_PAD1                     _L_(63)      /**< SERCOM5 signal: PAD1 on PB31 mux D*/
#define MUX_PB31D_SERCOM5_PAD1                     _L_(3)      
#define PINMUX_PB31D_SERCOM5_PAD1                  ((PIN_PB31D_SERCOM5_PAD1 << 16) | MUX_PB31D_SERCOM5_PAD1)
#define PORT_PB31D_SERCOM5_PAD1                    (_UL_(1) << 31)

#define PIN_PB17C_SERCOM5_PAD1                     _L_(49)      /**< SERCOM5 signal: PAD1 on PB17 mux C*/
#define MUX_PB17C_SERCOM5_PAD1                     _L_(2)      
#define PINMUX_PB17C_SERCOM5_PAD1                  ((PIN_PB17C_SERCOM5_PAD1 << 16) | MUX_PB17C_SERCOM5_PAD1)
#define PORT_PB17C_SERCOM5_PAD1                    (_UL_(1) << 17)

#define PIN_PA24D_SERCOM5_PAD2                     _L_(24)      /**< SERCOM5 signal: PAD2 on PA24 mux D*/
#define MUX_PA24D_SERCOM5_PAD2                     _L_(3)      
#define PINMUX_PA24D_SERCOM5_PAD2                  ((PIN_PA24D_SERCOM5_PAD2 << 16) | MUX_PA24D_SERCOM5_PAD2)
#define PORT_PA24D_SERCOM5_PAD2                    (_UL_(1) << 24)

#define PIN_PB00D_SERCOM5_PAD2                     _L_(32)      /**< SERCOM5 signal: PAD2 on PB00 mux D*/
#define MUX_PB00D_SERCOM5_PAD2                     _L_(3)      
#define PINMUX_PB00D_SERCOM5_PAD2                  ((PIN_PB00D_SERCOM5_PAD2 << 16) | MUX_PB00D_SERCOM5_PAD2)
#define PORT_PB00D_SERCOM5_PAD2                    (_UL_(1) << 0)

#define PIN_PB22D_SERCOM5_PAD2                     _L_(54)      /**< SERCOM5 signal: PAD2 on PB22 mux D*/
#define MUX_PB22D_SERCOM5_PAD2                     _L_(3)      
#define PINMUX_PB22D_SERCOM5_PAD2                  ((PIN_PB22D_SERCOM5_PAD2 << 16) | MUX_PB22D_SERCOM5_PAD2)
#define PORT_PB22D_SERCOM5_PAD2                    (_UL_(1) << 22)

#define PIN_PA25D_SERCOM5_PAD3                     _L_(25)      /**< SERCOM5 signal: PAD3 on PA25 mux D*/
#define MUX_PA25D_SERCOM5_PAD3                     _L_(3)      
#define PINMUX_PA25D_SERCOM5_PAD3                  ((PIN_PA25D_SERCOM5_PAD3 << 16) | MUX_PA25D_SERCOM5_PAD3)
#define PORT_PA25D_SERCOM5_PAD3                    (_UL_(1) << 25)

#define PIN_PB23D_SERCOM5_PAD3                     _L_(55)      /**< SERCOM5 signal: PAD3 on PB23 mux D*/
#define MUX_PB23D_SERCOM5_PAD3                     _L_(3)      
#define PINMUX_PB23D_SERCOM5_PAD3                  ((PIN_PB23D_SERCOM5_PAD3 << 16) | MUX_PB23D_SERCOM5_PAD3)
#define PORT_PB23D_SERCOM5_PAD3                    (_UL_(1) << 23)

/* ========== PORT definition for SUPC peripheral ========== */
#define PIN_PB02H_SUPC_OUT1                        _L_(34)      /**< SUPC signal: OUT1 on PB02 mux H*/
#define MUX_PB02H_SUPC_OUT1                        _L_(7)      
#define PINMUX_PB02H_SUPC_OUT1                     ((PIN_PB02H_SUPC_OUT1 << 16) | MUX_PB02H_SUPC_OUT1)
#define PORT_PB02H_SUPC_OUT1                       (_UL_(1) << 2)

#define PIN_PB00H_SUPC_PSOK                        _L_(32)      /**< SUPC signal: PSOK on PB00 mux H*/
#define MUX_PB00H_SUPC_PSOK                        _L_(7)      
#define PINMUX_PB00H_SUPC_PSOK                     ((PIN_PB00H_SUPC_PSOK << 16) | MUX_PB00H_SUPC_PSOK)
#define PORT_PB00H_SUPC_PSOK                       (_UL_(1) << 0)

#define PIN_PB03H_SUPC_VBAT                        _L_(35)      /**< SUPC signal: VBAT on PB03 mux H*/
#define MUX_PB03H_SUPC_VBAT                        _L_(7)      
#define PINMUX_PB03H_SUPC_VBAT                     ((PIN_PB03H_SUPC_VBAT << 16) | MUX_PB03H_SUPC_VBAT)
#define PORT_PB03H_SUPC_VBAT                       (_UL_(1) << 3)

/* ========== PORT definition for TC0 peripheral ========== */
#define PIN_PA22E_TC0_WO0                          _L_(22)      /**< TC0 signal: WO0 on PA22 mux E*/
#define MUX_PA22E_TC0_WO0                          _L_(4)      
#define PINMUX_PA22E_TC0_WO0                       ((PIN_PA22E_TC0_WO0 << 16) | MUX_PA22E_TC0_WO0)
#define PORT_PA22E_TC0_WO0                         (_UL_(1) << 22)

#define PIN_PA23E_TC0_WO1                          _L_(23)      /**< TC0 signal: WO1 on PA23 mux E*/
#define MUX_PA23E_TC0_WO1                          _L_(4)      
#define PINMUX_PA23E_TC0_WO1                       ((PIN_PA23E_TC0_WO1 << 16) | MUX_PA23E_TC0_WO1)
#define PORT_PA23E_TC0_WO1                         (_UL_(1) << 23)

/* ========== PORT definition for TC1 peripheral ========== */
#define PIN_PA24E_TC1_WO0                          _L_(24)      /**< TC1 signal: WO0 on PA24 mux E*/
#define MUX_PA24E_TC1_WO0                          _L_(4)      
#define PINMUX_PA24E_TC1_WO0                       ((PIN_PA24E_TC1_WO0 << 16) | MUX_PA24E_TC1_WO0)
#define PORT_PA24E_TC1_WO0                         (_UL_(1) << 24)

#define PIN_PA25E_TC1_WO1                          _L_(25)      /**< TC1 signal: WO1 on PA25 mux E*/
#define MUX_PA25E_TC1_WO1                          _L_(4)      
#define PINMUX_PA25E_TC1_WO1                       ((PIN_PA25E_TC1_WO1 << 16) | MUX_PA25E_TC1_WO1)
#define PORT_PA25E_TC1_WO1                         (_UL_(1) << 25)

#define PIN_PB15E_TC1_WO1                          _L_(47)      /**< TC1 signal: WO1 on PB15 mux E*/
#define MUX_PB15E_TC1_WO1                          _L_(4)      
#define PINMUX_PB15E_TC1_WO1                       ((PIN_PB15E_TC1_WO1 << 16) | MUX_PB15E_TC1_WO1)
#define PORT_PB15E_TC1_WO1                         (_UL_(1) << 15)

/* ========== PORT definition for TC2 peripheral ========== */
#define PIN_PB02E_TC2_WO0                          _L_(34)      /**< TC2 signal: WO0 on PB02 mux E*/
#define MUX_PB02E_TC2_WO0                          _L_(4)      
#define PINMUX_PB02E_TC2_WO0                       ((PIN_PB02E_TC2_WO0 << 16) | MUX_PB02E_TC2_WO0)
#define PORT_PB02E_TC2_WO0                         (_UL_(1) << 2)

#define PIN_PB16E_TC2_WO0                          _L_(48)      /**< TC2 signal: WO0 on PB16 mux E*/
#define MUX_PB16E_TC2_WO0                          _L_(4)      
#define PINMUX_PB16E_TC2_WO0                       ((PIN_PB16E_TC2_WO0 << 16) | MUX_PB16E_TC2_WO0)
#define PORT_PB16E_TC2_WO0                         (_UL_(1) << 16)

#define PIN_PB03E_TC2_WO1                          _L_(35)      /**< TC2 signal: WO1 on PB03 mux E*/
#define MUX_PB03E_TC2_WO1                          _L_(4)      
#define PINMUX_PB03E_TC2_WO1                       ((PIN_PB03E_TC2_WO1 << 16) | MUX_PB03E_TC2_WO1)
#define PORT_PB03E_TC2_WO1                         (_UL_(1) << 3)

#define PIN_PB17E_TC2_WO1                          _L_(49)      /**< TC2 signal: WO1 on PB17 mux E*/
#define MUX_PB17E_TC2_WO1                          _L_(4)      
#define PINMUX_PB17E_TC2_WO1                       ((PIN_PB17E_TC2_WO1 << 16) | MUX_PB17E_TC2_WO1)
#define PORT_PB17E_TC2_WO1                         (_UL_(1) << 17)

/* ========== PORT definition for TC3 peripheral ========== */
#define PIN_PB00E_TC3_WO0                          _L_(32)      /**< TC3 signal: WO0 on PB00 mux E*/
#define MUX_PB00E_TC3_WO0                          _L_(4)      
#define PINMUX_PB00E_TC3_WO0                       ((PIN_PB00E_TC3_WO0 << 16) | MUX_PB00E_TC3_WO0)
#define PORT_PB00E_TC3_WO0                         (_UL_(1) << 0)

#define PIN_PB22E_TC3_WO0                          _L_(54)      /**< TC3 signal: WO0 on PB22 mux E*/
#define MUX_PB22E_TC3_WO0                          _L_(4)      
#define PINMUX_PB22E_TC3_WO0                       ((PIN_PB22E_TC3_WO0 << 16) | MUX_PB22E_TC3_WO0)
#define PORT_PB22E_TC3_WO0                         (_UL_(1) << 22)

#define PIN_PB23E_TC3_WO1                          _L_(55)      /**< TC3 signal: WO1 on PB23 mux E*/
#define MUX_PB23E_TC3_WO1                          _L_(4)      
#define PINMUX_PB23E_TC3_WO1                       ((PIN_PB23E_TC3_WO1 << 16) | MUX_PB23E_TC3_WO1)
#define PORT_PB23E_TC3_WO1                         (_UL_(1) << 23)

/* ========== PORT definition for TC4 peripheral ========== */
#define PIN_PA18E_TC4_WO0                          _L_(18)      /**< TC4 signal: WO0 on PA18 mux E*/
#define MUX_PA18E_TC4_WO0                          _L_(4)      
#define PINMUX_PA18E_TC4_WO0                       ((PIN_PA18E_TC4_WO0 << 16) | MUX_PA18E_TC4_WO0)
#define PORT_PA18E_TC4_WO0                         (_UL_(1) << 18)

#define PIN_PA14E_TC4_WO0                          _L_(14)      /**< TC4 signal: WO0 on PA14 mux E*/
#define MUX_PA14E_TC4_WO0                          _L_(4)      
#define PINMUX_PA14E_TC4_WO0                       ((PIN_PA14E_TC4_WO0 << 16) | MUX_PA14E_TC4_WO0)
#define PORT_PA14E_TC4_WO0                         (_UL_(1) << 14)

#define PIN_PA19E_TC4_WO1                          _L_(19)      /**< TC4 signal: WO1 on PA19 mux E*/
#define MUX_PA19E_TC4_WO1                          _L_(4)      
#define PINMUX_PA19E_TC4_WO1                       ((PIN_PA19E_TC4_WO1 << 16) | MUX_PA19E_TC4_WO1)
#define PORT_PA19E_TC4_WO1                         (_UL_(1) << 19)

#define PIN_PA15E_TC4_WO1                          _L_(15)      /**< TC4 signal: WO1 on PA15 mux E*/
#define MUX_PA15E_TC4_WO1                          _L_(4)      
#define PINMUX_PA15E_TC4_WO1                       ((PIN_PA15E_TC4_WO1 << 16) | MUX_PA15E_TC4_WO1)
#define PORT_PA15E_TC4_WO1                         (_UL_(1) << 15)

/* ========== PORT definition for TCC0 peripheral ========== */
#define PIN_PA04E_TCC0_WO0                         _L_(4)       /**< TCC0 signal: WO0 on PA04 mux E*/
#define MUX_PA04E_TCC0_WO0                         _L_(4)      
#define PINMUX_PA04E_TCC0_WO0                      ((PIN_PA04E_TCC0_WO0 << 16) | MUX_PA04E_TCC0_WO0)
#define PORT_PA04E_TCC0_WO0                        (_UL_(1) << 4)

#define PIN_PA08E_TCC0_WO0                         _L_(8)       /**< TCC0 signal: WO0 on PA08 mux E*/
#define MUX_PA08E_TCC0_WO0                         _L_(4)      
#define PINMUX_PA08E_TCC0_WO0                      ((PIN_PA08E_TCC0_WO0 << 16) | MUX_PA08E_TCC0_WO0)
#define PORT_PA08E_TCC0_WO0                        (_UL_(1) << 8)

#define PIN_PB30E_TCC0_WO0                         _L_(62)      /**< TCC0 signal: WO0 on PB30 mux E*/
#define MUX_PB30E_TCC0_WO0                         _L_(4)      
#define PINMUX_PB30E_TCC0_WO0                      ((PIN_PB30E_TCC0_WO0 << 16) | MUX_PB30E_TCC0_WO0)
#define PORT_PB30E_TCC0_WO0                        (_UL_(1) << 30)

#define PIN_PA05E_TCC0_WO1                         _L_(5)       /**< TCC0 signal: WO1 on PA05 mux E*/
#define MUX_PA05E_TCC0_WO1                         _L_(4)      
#define PINMUX_PA05E_TCC0_WO1                      ((PIN_PA05E_TCC0_WO1 << 16) | MUX_PA05E_TCC0_WO1)
#define PORT_PA05E_TCC0_WO1                        (_UL_(1) << 5)

#define PIN_PB31E_TCC0_WO1                         _L_(63)      /**< TCC0 signal: WO1 on PB31 mux E*/
#define MUX_PB31E_TCC0_WO1                         _L_(4)      
#define PINMUX_PB31E_TCC0_WO1                      ((PIN_PB31E_TCC0_WO1 << 16) | MUX_PB31E_TCC0_WO1)
#define PORT_PB31E_TCC0_WO1                        (_UL_(1) << 31)

#define PIN_PA10F_TCC0_WO2                         _L_(10)      /**< TCC0 signal: WO2 on PA10 mux F*/
#define MUX_PA10F_TCC0_WO2                         _L_(5)      
#define PINMUX_PA10F_TCC0_WO2                      ((PIN_PA10F_TCC0_WO2 << 16) | MUX_PA10F_TCC0_WO2)
#define PORT_PA10F_TCC0_WO2                        (_UL_(1) << 10)

#define PIN_PA18F_TCC0_WO2                         _L_(18)      /**< TCC0 signal: WO2 on PA18 mux F*/
#define MUX_PA18F_TCC0_WO2                         _L_(5)      
#define PINMUX_PA18F_TCC0_WO2                      ((PIN_PA18F_TCC0_WO2 << 16) | MUX_PA18F_TCC0_WO2)
#define PORT_PA18F_TCC0_WO2                        (_UL_(1) << 18)

#define PIN_PA11F_TCC0_WO3                         _L_(11)      /**< TCC0 signal: WO3 on PA11 mux F*/
#define MUX_PA11F_TCC0_WO3                         _L_(5)      
#define PINMUX_PA11F_TCC0_WO3                      ((PIN_PA11F_TCC0_WO3 << 16) | MUX_PA11F_TCC0_WO3)
#define PORT_PA11F_TCC0_WO3                        (_UL_(1) << 11)

#define PIN_PA19F_TCC0_WO3                         _L_(19)      /**< TCC0 signal: WO3 on PA19 mux F*/
#define MUX_PA19F_TCC0_WO3                         _L_(5)      
#define PINMUX_PA19F_TCC0_WO3                      ((PIN_PA19F_TCC0_WO3 << 16) | MUX_PA19F_TCC0_WO3)
#define PORT_PA19F_TCC0_WO3                        (_UL_(1) << 19)

#define PIN_PA22F_TCC0_WO4                         _L_(22)      /**< TCC0 signal: WO4 on PA22 mux F*/
#define MUX_PA22F_TCC0_WO4                         _L_(5)      
#define PINMUX_PA22F_TCC0_WO4                      ((PIN_PA22F_TCC0_WO4 << 16) | MUX_PA22F_TCC0_WO4)
#define PORT_PA22F_TCC0_WO4                        (_UL_(1) << 22)

#define PIN_PB16F_TCC0_WO4                         _L_(48)      /**< TCC0 signal: WO4 on PB16 mux F*/
#define MUX_PB16F_TCC0_WO4                         _L_(5)      
#define PINMUX_PB16F_TCC0_WO4                      ((PIN_PB16F_TCC0_WO4 << 16) | MUX_PB16F_TCC0_WO4)
#define PORT_PB16F_TCC0_WO4                        (_UL_(1) << 16)

#define PIN_PA14F_TCC0_WO4                         _L_(14)      /**< TCC0 signal: WO4 on PA14 mux F*/
#define MUX_PA14F_TCC0_WO4                         _L_(5)      
#define PINMUX_PA14F_TCC0_WO4                      ((PIN_PA14F_TCC0_WO4 << 16) | MUX_PA14F_TCC0_WO4)
#define PORT_PA14F_TCC0_WO4                        (_UL_(1) << 14)

#define PIN_PA15F_TCC0_WO5                         _L_(15)      /**< TCC0 signal: WO5 on PA15 mux F*/
#define MUX_PA15F_TCC0_WO5                         _L_(5)      
#define PINMUX_PA15F_TCC0_WO5                      ((PIN_PA15F_TCC0_WO5 << 16) | MUX_PA15F_TCC0_WO5)
#define PORT_PA15F_TCC0_WO5                        (_UL_(1) << 15)

#define PIN_PA23F_TCC0_WO5                         _L_(23)      /**< TCC0 signal: WO5 on PA23 mux F*/
#define MUX_PA23F_TCC0_WO5                         _L_(5)      
#define PINMUX_PA23F_TCC0_WO5                      ((PIN_PA23F_TCC0_WO5 << 16) | MUX_PA23F_TCC0_WO5)
#define PORT_PA23F_TCC0_WO5                        (_UL_(1) << 23)

#define PIN_PB17F_TCC0_WO5                         _L_(49)      /**< TCC0 signal: WO5 on PB17 mux F*/
#define MUX_PB17F_TCC0_WO5                         _L_(5)      
#define PINMUX_PB17F_TCC0_WO5                      ((PIN_PB17F_TCC0_WO5 << 16) | MUX_PB17F_TCC0_WO5)
#define PORT_PB17F_TCC0_WO5                        (_UL_(1) << 17)

#define PIN_PA12F_TCC0_WO6                         _L_(12)      /**< TCC0 signal: WO6 on PA12 mux F*/
#define MUX_PA12F_TCC0_WO6                         _L_(5)      
#define PINMUX_PA12F_TCC0_WO6                      ((PIN_PA12F_TCC0_WO6 << 16) | MUX_PA12F_TCC0_WO6)
#define PORT_PA12F_TCC0_WO6                        (_UL_(1) << 12)

#define PIN_PA16F_TCC0_WO6                         _L_(16)      /**< TCC0 signal: WO6 on PA16 mux F*/
#define MUX_PA16F_TCC0_WO6                         _L_(5)      
#define PINMUX_PA16F_TCC0_WO6                      ((PIN_PA16F_TCC0_WO6 << 16) | MUX_PA16F_TCC0_WO6)
#define PORT_PA16F_TCC0_WO6                        (_UL_(1) << 16)

#define PIN_PA17F_TCC0_WO7                         _L_(17)      /**< TCC0 signal: WO7 on PA17 mux F*/
#define MUX_PA17F_TCC0_WO7                         _L_(5)      
#define PINMUX_PA17F_TCC0_WO7                      ((PIN_PA17F_TCC0_WO7 << 16) | MUX_PA17F_TCC0_WO7)
#define PORT_PA17F_TCC0_WO7                        (_UL_(1) << 17)

/* ========== PORT definition for TCC1 peripheral ========== */
#define PIN_PA06E_TCC1_WO0                         _L_(6)       /**< TCC1 signal: WO0 on PA06 mux E*/
#define MUX_PA06E_TCC1_WO0                         _L_(4)      
#define PINMUX_PA06E_TCC1_WO0                      ((PIN_PA06E_TCC1_WO0 << 16) | MUX_PA06E_TCC1_WO0)
#define PORT_PA06E_TCC1_WO0                        (_UL_(1) << 6)

#define PIN_PA10E_TCC1_WO0                         _L_(10)      /**< TCC1 signal: WO0 on PA10 mux E*/
#define MUX_PA10E_TCC1_WO0                         _L_(4)      
#define PINMUX_PA10E_TCC1_WO0                      ((PIN_PA10E_TCC1_WO0 << 16) | MUX_PA10E_TCC1_WO0)
#define PORT_PA10E_TCC1_WO0                        (_UL_(1) << 10)

#define PIN_PA30E_TCC1_WO0                         _L_(30)      /**< TCC1 signal: WO0 on PA30 mux E*/
#define MUX_PA30E_TCC1_WO0                         _L_(4)      
#define PINMUX_PA30E_TCC1_WO0                      ((PIN_PA30E_TCC1_WO0 << 16) | MUX_PA30E_TCC1_WO0)
#define PORT_PA30E_TCC1_WO0                        (_UL_(1) << 30)

#define PIN_PA07E_TCC1_WO1                         _L_(7)       /**< TCC1 signal: WO1 on PA07 mux E*/
#define MUX_PA07E_TCC1_WO1                         _L_(4)      
#define PINMUX_PA07E_TCC1_WO1                      ((PIN_PA07E_TCC1_WO1 << 16) | MUX_PA07E_TCC1_WO1)
#define PORT_PA07E_TCC1_WO1                        (_UL_(1) << 7)

#define PIN_PA11E_TCC1_WO1                         _L_(11)      /**< TCC1 signal: WO1 on PA11 mux E*/
#define MUX_PA11E_TCC1_WO1                         _L_(4)      
#define PINMUX_PA11E_TCC1_WO1                      ((PIN_PA11E_TCC1_WO1 << 16) | MUX_PA11E_TCC1_WO1)
#define PORT_PA11E_TCC1_WO1                        (_UL_(1) << 11)

#define PIN_PA31E_TCC1_WO1                         _L_(31)      /**< TCC1 signal: WO1 on PA31 mux E*/
#define MUX_PA31E_TCC1_WO1                         _L_(4)      
#define PINMUX_PA31E_TCC1_WO1                      ((PIN_PA31E_TCC1_WO1 << 16) | MUX_PA31E_TCC1_WO1)
#define PORT_PA31E_TCC1_WO1                        (_UL_(1) << 31)

#define PIN_PA08F_TCC1_WO2                         _L_(8)       /**< TCC1 signal: WO2 on PA08 mux F*/
#define MUX_PA08F_TCC1_WO2                         _L_(5)      
#define PINMUX_PA08F_TCC1_WO2                      ((PIN_PA08F_TCC1_WO2 << 16) | MUX_PA08F_TCC1_WO2)
#define PORT_PA08F_TCC1_WO2                        (_UL_(1) << 8)

#define PIN_PA24F_TCC1_WO2                         _L_(24)      /**< TCC1 signal: WO2 on PA24 mux F*/
#define MUX_PA24F_TCC1_WO2                         _L_(5)      
#define PINMUX_PA24F_TCC1_WO2                      ((PIN_PA24F_TCC1_WO2 << 16) | MUX_PA24F_TCC1_WO2)
#define PORT_PA24F_TCC1_WO2                        (_UL_(1) << 24)

#define PIN_PB30F_TCC1_WO2                         _L_(62)      /**< TCC1 signal: WO2 on PB30 mux F*/
#define MUX_PB30F_TCC1_WO2                         _L_(5)      
#define PINMUX_PB30F_TCC1_WO2                      ((PIN_PB30F_TCC1_WO2 << 16) | MUX_PB30F_TCC1_WO2)
#define PORT_PB30F_TCC1_WO2                        (_UL_(1) << 30)

#define PIN_PA25F_TCC1_WO3                         _L_(25)      /**< TCC1 signal: WO3 on PA25 mux F*/
#define MUX_PA25F_TCC1_WO3                         _L_(5)      
#define PINMUX_PA25F_TCC1_WO3                      ((PIN_PA25F_TCC1_WO3 << 16) | MUX_PA25F_TCC1_WO3)
#define PORT_PA25F_TCC1_WO3                        (_UL_(1) << 25)

#define PIN_PB31F_TCC1_WO3                         _L_(63)      /**< TCC1 signal: WO3 on PB31 mux F*/
#define MUX_PB31F_TCC1_WO3                         _L_(5)      
#define PINMUX_PB31F_TCC1_WO3                      ((PIN_PB31F_TCC1_WO3 << 16) | MUX_PB31F_TCC1_WO3)
#define PORT_PB31F_TCC1_WO3                        (_UL_(1) << 31)

/* ========== PORT definition for TCC2 peripheral ========== */
#define PIN_PA12E_TCC2_WO0                         _L_(12)      /**< TCC2 signal: WO0 on PA12 mux E*/
#define MUX_PA12E_TCC2_WO0                         _L_(4)      
#define PINMUX_PA12E_TCC2_WO0                      ((PIN_PA12E_TCC2_WO0 << 16) | MUX_PA12E_TCC2_WO0)
#define PORT_PA12E_TCC2_WO0                        (_UL_(1) << 12)

#define PIN_PA16E_TCC2_WO0                         _L_(16)      /**< TCC2 signal: WO0 on PA16 mux E*/
#define MUX_PA16E_TCC2_WO0                         _L_(4)      
#define PINMUX_PA16E_TCC2_WO0                      ((PIN_PA16E_TCC2_WO0 << 16) | MUX_PA16E_TCC2_WO0)
#define PORT_PA16E_TCC2_WO0                        (_UL_(1) << 16)

#define PIN_PA17E_TCC2_WO1                         _L_(17)      /**< TCC2 signal: WO1 on PA17 mux E*/
#define MUX_PA17E_TCC2_WO1                         _L_(4)      
#define PINMUX_PA17E_TCC2_WO1                      ((PIN_PA17E_TCC2_WO1 << 16) | MUX_PA17E_TCC2_WO1)
#define PORT_PA17E_TCC2_WO1                        (_UL_(1) << 17)

/* ========== PORT definition for USB peripheral ========== */
#define PIN_PA24G_USB_DM                           _L_(24)      /**< USB signal: DM on PA24 mux G*/
#define MUX_PA24G_USB_DM                           _L_(6)      
#define PINMUX_PA24G_USB_DM                        ((PIN_PA24G_USB_DM << 16) | MUX_PA24G_USB_DM)
#define PORT_PA24G_USB_DM                          (_UL_(1) << 24)

#define PIN_PA25G_USB_DP                           _L_(25)      /**< USB signal: DP on PA25 mux G*/
#define MUX_PA25G_USB_DP                           _L_(6)      
#define PINMUX_PA25G_USB_DP                        ((PIN_PA25G_USB_DP << 16) | MUX_PA25G_USB_DP)
#define PORT_PA25G_USB_DP                          (_UL_(1) << 25)

#define PIN_PA23G_USB_SOF_1KHZ                     _L_(23)      /**< USB signal: SOF_1KHZ on PA23 mux G*/
#define MUX_PA23G_USB_SOF_1KHZ                     _L_(6)      
#define PINMUX_PA23G_USB_SOF_1KHZ                  ((PIN_PA23G_USB_SOF_1KHZ << 16) | MUX_PA23G_USB_SOF_1KHZ)
#define PORT_PA23G_USB_SOF_1KHZ                    (_UL_(1) << 23)


#endif /* _WLR089U0_PIO_H_ */
