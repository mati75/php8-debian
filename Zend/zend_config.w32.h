/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2018 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   +----------------------------------------------------------------------+
*/

#ifndef ZEND_CONFIG_W32_H
#define ZEND_CONFIG_W32_H

#include <../main/config.w32.h>

#define _CRTDBG_MAP_ALLOC

#include <malloc.h>
#include <stdlib.h>
#include <crtdbg.h>

#include <string.h>

#ifndef ZEND_INCLUDE_FULL_WINDOWS_HEADERS
#define WIN32_LEAN_AND_MEAN
#endif
#include <winsock2.h>
#include <windows.h>

#include <float.h>

typedef unsigned long ulong;
typedef unsigned int uint;

#define HAVE_STDIOSTR_H 1
#define HAVE_CLASS_ISTDIOSTREAM
#define istdiostream stdiostream

#if _MSC_VER < 1900
#define snprintf _snprintf
#endif
#define strcasecmp(s1, s2) _stricmp(s1, s2)
#define strncasecmp(s1, s2, n) _strnicmp(s1, s2, n)
#define zend_isinf(a)	((_fpclass(a) == _FPCLASS_PINF) || (_fpclass(a) == _FPCLASS_NINF))
#define zend_finite(x)	_finite(x)
#define zend_isnan(x)	_isnan(x)

#define zend_sprintf sprintf

#ifndef __cplusplus
/* This will cause the compilation process to be MUCH longer, but will generate
 * a much quicker PHP binary
 */
#ifdef ZEND_WIN32_FORCE_INLINE
# undef inline
# define inline __forceinline
#endif
#endif

#ifdef LIBZEND_EXPORTS
#	define ZEND_API __declspec(dllexport)
#else
#	define ZEND_API __declspec(dllimport)
#endif

#define ZEND_DLEXPORT		__declspec(dllexport)
#define ZEND_DLIMPORT		__declspec(dllimport)

#endif /* ZEND_CONFIG_W32_H */

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 * vim600: sw=4 ts=4 fdm=marker
 * vim<600: sw=4 ts=4
 */
