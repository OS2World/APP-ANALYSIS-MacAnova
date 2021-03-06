/*
*(C)* The file is part of the source distribution of MacAnova
*(C)* version 4.06 or later
*(C)*
*(C)* Copyright (c) 1998 by Gary Oehlert and Christopher Bingham
*(C)* unless indicated otherwise
*(C)*
*(C)* You may give out copies of this software;  for conditions see the
*(C)* file COPYING included with this distribution
*(C)*
*(C)* This file is distributed WITHOUT ANY WARANTEE; without even
*(C)* the implied warantee of MERCHANTABILITY or FITNESS FOR
*(C)* A PARTICULAR PURPOSE
*(C)*
*/

/* 
   Defines for x86 Linux
   980714 Removed #undef DISABLECONTROLY which is no longer defined
          in genunix.h
*/

#ifndef UNIX
#define UNIX
#endif /*UNIX*/

/* Defines for generic Unix platforms. */
#include "genunix.h"

/* OS/2 has different text mode and binary mode */

#undef  BINARYREADMODE
#undef  BINARYWRITEMODE
#undef  BINARYAPPENDMODE

#define BINARYREADMODE   "rb"
#define BINARYWRITEMODE  "wb"
#define BINARYAPPENDMODE "ab"


/*
   Defines for Linux (2.0.24) contributed by Jan Erik Backlund 
   backl003@gold.tc.umn.edu
*/
#define PLATFORM       PLATFORM_OS2EMX
#define PLATFORM_ALT1  PLATFORM_LINUX86
#define PLATFORM_ALT2  PLATFORM_DJGPP
#define PLATFORM_ALT3  PLATFORM_WXBCPP
#define PLATFORM_ALT4  PLATFORM_BCPP

#define NOVALUESH 
#define NOFLOATH 
#define HASGETTIMEOFDAY 
#define BDOUBLELOWHI
#define HASINFINITY
#define HASNAN
#define SIGNALARG
#undef  USEPOW
#undef  DEFINEEDIT
#undef  DEFINEMORE
#define _STRUCT_TIMEVAL /*structure timeval type defd in headers*/
#define NOLGAMMA    /* no function lgamma() */
