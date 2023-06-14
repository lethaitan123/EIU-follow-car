/*This file is prepared for Doxygen automatic documentation generation.*/
/*! \file *********************************************************************
 *
 * \brief Standard part header file.
 *
 * This file includes the appropriate part header file according to the defined
 * MCU.
 *
 * - Compiler:           IAR EWAVR32 and GNU GCC for AVR32
 * - Supported devices:  All AVR32 devices can be used.
 * - AppNote:
 *
 * \author              Microchip Technology Inc.: http://www.microchip.com
 *                       Support: http://www.microchip.com/support
 *
 ******************************************************************************/

/* Copyright (c) 2020 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _AVR32_IO_H_
#define _AVR32_IO_H_


#if (defined (__AVR32_UC3A0256__) || defined (__AT32UC3A0256__))
#  include <avr32/uc3a0256.h>
#elif (defined (__AVR32_UC3A364S__) || defined (__AT32UC3A364S__))
#  include <avr32/uc3a364s.h>
#elif (defined (__AVR32_UC3A4256__) || defined (__AT32UC3A4256__))
#  include <avr32/uc3a4256.h>
#elif (defined (__AVR32_UC3A0512__) || defined (__AT32UC3A0512__))
#  include <avr32/uc3a0512.h>
#elif (defined (__AVR32_UC3A4256S__) || defined (__AT32UC3A4256S__))
#  include <avr32/uc3a4256s.h>
#elif (defined (__AVR32_UC3A464__) || defined (__AT32UC3A464__))
#  include <avr32/uc3a464.h>
#elif (defined (__AVR32_UC3A1512__) || defined (__AT32UC3A1512__))
#  include <avr32/uc3a1512.h>
#elif (defined (__AVR32_UC3A3128__) || defined (__AT32UC3A3128__))
#  include <avr32/uc3a3128.h>
#elif (defined (__AVR32_UC3A3256S__) || defined (__AT32UC3A3256S__))
#  include <avr32/uc3a3256s.h>
#elif (defined (__AVR32_UC3A3256__) || defined (__AT32UC3A3256__))
#  include <avr32/uc3a3256.h>
#elif (defined (__AVR32_UC3A364__) || defined (__AT32UC3A364__))
#  include <avr32/uc3a364.h>
#elif (defined (__AVR32_UC3A0128__) || defined (__AT32UC3A0128__))
#  include <avr32/uc3a0128.h>
#elif (defined (__AVR32_UC3A4128__) || defined (__AT32UC3A4128__))
#  include <avr32/uc3a4128.h>
#elif (defined (__AVR32_UC3A4128S__) || defined (__AT32UC3A4128S__))
#  include <avr32/uc3a4128s.h>
#elif (defined (__AVR32_UC3A1256__) || defined (__AT32UC3A1256__))
#  include <avr32/uc3a1256.h>
#elif (defined (__AVR32_UC3A1128__) || defined (__AT32UC3A1128__))
#  include <avr32/uc3a1128.h>
#elif (defined (__AVR32_UC3A464S__) || defined (__AT32UC3A464S__))
#  include <avr32/uc3a464s.h>
#elif (defined (__AVR32_UC3A3128S__) || defined (__AT32UC3A3128S__))
#  include <avr32/uc3a3128s.h>
#else
#  error No known AVR32 part defined
#endif

#endif /* _AVR32_IO_H_ */ 
