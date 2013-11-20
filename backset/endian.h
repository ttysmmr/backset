#if !defined( ENDIAN_H_20131011004339 )
#define ENDIAN_H_20131011004339

/** @file
     Declaration on endian.
     
    Copyright (c) 2013 ttysmmr
    Distributed under the Boost Software License, Version 1.0.
    See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt
*/

#include <stdbool.h>

/// big endian checker.
bool IsBigEndian(void);

/// little endian checker.
bool IsLittleEndian(void);

#endif // #if !defined( ENDIAN_H_20131011004339 )
