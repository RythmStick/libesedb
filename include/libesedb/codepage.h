/*
 * Codepage definitions for libesedb
 *
 * Copyright (C) 2009-2020, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( _LIBESEDB_CODEPAGE_H )
#define _LIBESEDB_CODEPAGE_H

#include <libesedb/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBESEDB_CODEPAGES
{
	LIBESEDB_CODEPAGE_ASCII				= 20127,

	LIBESEDB_CODEPAGE_ISO_8859_1			= 28591,
	LIBESEDB_CODEPAGE_ISO_8859_2			= 28592,
	LIBESEDB_CODEPAGE_ISO_8859_3			= 28593,
	LIBESEDB_CODEPAGE_ISO_8859_4			= 28594,
	LIBESEDB_CODEPAGE_ISO_8859_5			= 28595,
	LIBESEDB_CODEPAGE_ISO_8859_6			= 28596,
	LIBESEDB_CODEPAGE_ISO_8859_7			= 28597,
	LIBESEDB_CODEPAGE_ISO_8859_8			= 28598,
	LIBESEDB_CODEPAGE_ISO_8859_9			= 28599,
	LIBESEDB_CODEPAGE_ISO_8859_10			= 28600,
	LIBESEDB_CODEPAGE_ISO_8859_11			= 28601,
	LIBESEDB_CODEPAGE_ISO_8859_13			= 28603,
	LIBESEDB_CODEPAGE_ISO_8859_14			= 28604,
	LIBESEDB_CODEPAGE_ISO_8859_15			= 28605,
	LIBESEDB_CODEPAGE_ISO_8859_16			= 28606,

	LIBESEDB_CODEPAGE_KOI8_R			= 20866,
	LIBESEDB_CODEPAGE_KOI8_U			= 21866,

	LIBESEDB_CODEPAGE_WINDOWS_874			= 874,
	LIBESEDB_CODEPAGE_WINDOWS_932			= 932,
	LIBESEDB_CODEPAGE_WINDOWS_936			= 936,
	LIBESEDB_CODEPAGE_WINDOWS_949			= 949,
	LIBESEDB_CODEPAGE_WINDOWS_950			= 950,
	LIBESEDB_CODEPAGE_WINDOWS_1250			= 1250,
	LIBESEDB_CODEPAGE_WINDOWS_1251			= 1251,
	LIBESEDB_CODEPAGE_WINDOWS_1252			= 1252,
	LIBESEDB_CODEPAGE_WINDOWS_1253			= 1253,
	LIBESEDB_CODEPAGE_WINDOWS_1254			= 1254,
	LIBESEDB_CODEPAGE_WINDOWS_1255			= 1255,
	LIBESEDB_CODEPAGE_WINDOWS_1256			= 1256,
	LIBESEDB_CODEPAGE_WINDOWS_1257			= 1257,
	LIBESEDB_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBESEDB_CODEPAGE_US_ASCII			LIBESEDB_CODEPAGE_ASCII

#define LIBESEDB_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBESEDB_CODEPAGE_ISO_8859_1
#define LIBESEDB_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBESEDB_CODEPAGE_ISO_8859_2
#define LIBESEDB_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBESEDB_CODEPAGE_ISO_8859_3
#define LIBESEDB_CODEPAGE_ISO_NORTH_EUROPEAN		LIBESEDB_CODEPAGE_ISO_8859_4
#define LIBESEDB_CODEPAGE_ISO_CYRILLIC			LIBESEDB_CODEPAGE_ISO_8859_5
#define LIBESEDB_CODEPAGE_ISO_ARABIC			LIBESEDB_CODEPAGE_ISO_8859_6
#define LIBESEDB_CODEPAGE_ISO_GREEK			LIBESEDB_CODEPAGE_ISO_8859_7
#define LIBESEDB_CODEPAGE_ISO_HEBREW			LIBESEDB_CODEPAGE_ISO_8859_8
#define LIBESEDB_CODEPAGE_ISO_TURKISH			LIBESEDB_CODEPAGE_ISO_8859_9
#define LIBESEDB_CODEPAGE_ISO_NORDIC			LIBESEDB_CODEPAGE_ISO_8859_10
#define LIBESEDB_CODEPAGE_ISO_THAI			LIBESEDB_CODEPAGE_ISO_8859_11
#define LIBESEDB_CODEPAGE_ISO_BALTIC			LIBESEDB_CODEPAGE_ISO_8859_13
#define LIBESEDB_CODEPAGE_ISO_CELTIC			LIBESEDB_CODEPAGE_ISO_8859_14

#define LIBESEDB_CODEPAGE_ISO_LATIN_1			LIBESEDB_CODEPAGE_ISO_8859_1
#define LIBESEDB_CODEPAGE_ISO_LATIN_2			LIBESEDB_CODEPAGE_ISO_8859_2
#define LIBESEDB_CODEPAGE_ISO_LATIN_3			LIBESEDB_CODEPAGE_ISO_8859_3
#define LIBESEDB_CODEPAGE_ISO_LATIN_4			LIBESEDB_CODEPAGE_ISO_8859_4
#define LIBESEDB_CODEPAGE_ISO_LATIN_5			LIBESEDB_CODEPAGE_ISO_8859_9
#define LIBESEDB_CODEPAGE_ISO_LATIN_6			LIBESEDB_CODEPAGE_ISO_8859_10
#define LIBESEDB_CODEPAGE_ISO_LATIN_7			LIBESEDB_CODEPAGE_ISO_8859_13
#define LIBESEDB_CODEPAGE_ISO_LATIN_8			LIBESEDB_CODEPAGE_ISO_8859_14
#define LIBESEDB_CODEPAGE_ISO_LATIN_9			LIBESEDB_CODEPAGE_ISO_8859_15
#define LIBESEDB_CODEPAGE_ISO_LATIN_10			LIBESEDB_CODEPAGE_ISO_8859_16

#define LIBESEDB_CODEPAGE_KOI8_RUSSIAN			LIBESEDB_CODEPAGE_KOI8_R
#define LIBESEDB_CODEPAGE_KOI8_UKRAINIAN		LIBESEDB_CODEPAGE_KOI8_U

#define LIBESEDB_CODEPAGE_WINDOWS_THAI			LIBESEDB_CODEPAGE_WINDOWS_874
#define LIBESEDB_CODEPAGE_WINDOWS_JAPANESE		LIBESEDB_CODEPAGE_WINDOWS_932
#define LIBESEDB_CODEPAGE_WINDOWS_CHINESE_SIMPLIFIED	LIBESEDB_CODEPAGE_WINDOWS_936
#define LIBESEDB_CODEPAGE_WINDOWS_KOREAN		LIBESEDB_CODEPAGE_WINDOWS_949
#define LIBESEDB_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBESEDB_CODEPAGE_WINDOWS_950
#define LIBESEDB_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBESEDB_CODEPAGE_WINDOWS_1250
#define LIBESEDB_CODEPAGE_WINDOWS_CYRILLIC		LIBESEDB_CODEPAGE_WINDOWS_1251
#define LIBESEDB_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBESEDB_CODEPAGE_WINDOWS_1252
#define LIBESEDB_CODEPAGE_WINDOWS_GREEK			LIBESEDB_CODEPAGE_WINDOWS_1253
#define LIBESEDB_CODEPAGE_WINDOWS_TURKISH		LIBESEDB_CODEPAGE_WINDOWS_1254
#define LIBESEDB_CODEPAGE_WINDOWS_HEBREW		LIBESEDB_CODEPAGE_WINDOWS_1255
#define LIBESEDB_CODEPAGE_WINDOWS_ARABIC		LIBESEDB_CODEPAGE_WINDOWS_1256
#define LIBESEDB_CODEPAGE_WINDOWS_BALTIC		LIBESEDB_CODEPAGE_WINDOWS_1257
#define LIBESEDB_CODEPAGE_WINDOWS_VIETNAMESE		LIBESEDB_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBESEDB_CODEPAGE_H ) */

