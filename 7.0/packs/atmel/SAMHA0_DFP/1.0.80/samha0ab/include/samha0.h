/**
 * \file
 *
 * \brief Top header file for SAMHA0
 *
 * Copyright (c) 2018 Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAMHA0_
#define _SAMHA0_

/**
 * \defgroup SAMHA0_definitions SAMHA0 Device Definitions
 * \brief SAMHA0 CMSIS Definitions.
 */

#if   defined(__SAMHA0E14AB__) || defined(__ATSAMHA0E14AB__)
  #include "samha0e14ab.h"
#elif defined(__SAMHA0E15AB__) || defined(__ATSAMHA0E15AB__)
  #include "samha0e15ab.h"
#elif defined(__SAMHA0E16AB__) || defined(__ATSAMHA0E16AB__)
  #include "samha0e16ab.h"
#elif defined(__SAMHA0G14AB__) || defined(__ATSAMHA0G14AB__)
  #include "samha0g14ab.h"
#elif defined(__SAMHA0G14RB__) || defined(__ATSAMHA0G14RB__)
  #include "samha0g14rb.h"
#elif defined(__SAMHA0G14WB__) || defined(__ATSAMHA0G14WB__)
  #include "samha0g14wb.h"
#elif defined(__SAMHA0G15AB__) || defined(__ATSAMHA0G15AB__)
  #include "samha0g15ab.h"
#elif defined(__SAMHA0G15RB__) || defined(__ATSAMHA0G15RB__)
  #include "samha0g15rb.h"
#elif defined(__SAMHA0G15WB__) || defined(__ATSAMHA0G15WB__)
  #include "samha0g15wb.h"
#elif defined(__SAMHA0G16AB__) || defined(__ATSAMHA0G16AB__)
  #include "samha0g16ab.h"
#elif defined(__SAMHA0G16RB__) || defined(__ATSAMHA0G16RB__)
  #include "samha0g16rb.h"
#elif defined(__SAMHA0G16WB__) || defined(__ATSAMHA0G16WB__)
  #include "samha0g16wb.h"
#else
  #error Library does not support the specified device.
#endif

#endif /* _SAMHA0_ */
