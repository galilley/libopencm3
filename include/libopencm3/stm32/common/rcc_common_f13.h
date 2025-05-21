/** @addtogroup rcc_defines
 *
 * @author @htmlonly &copy; @endhtmlonly 2013
 * Frantisek Burian <BuFran@seznam.cz>
 */
/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2013 Frantisek Burian <BuFran@seznam.cz>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA RCC.H
 * The order of header inclusion is important. rcc.h defines the device
 * specific enumerations before including this header file.
 */

/** @cond */
#ifdef LIBOPENCM3_RCC_H
/** @endcond */

#ifndef LIBOPENCM3_RCC_COMMON_F13_H
#define LIBOPENCM3_RCC_COMMON_F13_H

/* --- RCC_CFGR values ----------------------------------------------------- */

#define RCC_CFGR_ADCPRE_SHIFT			14
#define RCC_CFGR_ADCPRE				(3 << RCC_CFGR_ADCPRE_SHIFT)

#define RCC_CFGR_ADCPRE_MASK			0x3
#define RCC_CFGR_ADCPRE_PCLK2_DIV2			0x0
#define RCC_CFGR_ADCPRE_PCLK2_DIV4			0x1
#define RCC_CFGR_ADCPRE_PCLK2_DIV6			0x2
#define RCC_CFGR_ADCPRE_PCLK2_DIV8			0x3

/**@{*/

BEGIN_DECLS

void rcc_set_adcpre(uint32_t adcpre);

END_DECLS
/**@}*/

#endif
/** @cond */
#else
#warning "rcc_common_v13.h should not be included explicitly, only via rcc.h"
#endif
/** @endcond */

