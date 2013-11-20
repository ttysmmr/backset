/** @file
     Declaration on endian.
     
    Copyright (c) 2013 ttysmmr
    Distributed under the Boost Software License, Version 1.0.
    See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt
*/

#include <endian.h>

#include <stdbool.h>

bool IsBigEndian(void)
{
    int const i = 1;
    return (*(char*)&i) == 0;
}

bool IsLittleEndian(void)
{
    return !IsBigEndian();
}
