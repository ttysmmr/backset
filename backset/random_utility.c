/** @file
    Declaration on random generator.
    
    Copyright (c) 2013 ttysmmr
    Distributed under the Boost Software License, Version 1.0.
    See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt
*/

#include <random_utility.h>

#include <stdlib.h>

#include <numeric.h>
#include <algorithm.h>

int random_zero_to( int const x )
{
    return ( rand() / (RAND_MAX / x + 1) );
}

int random_between( int a, int b )
{
    return MIN( a, b ) + random_zero_to( half_open_interval_elements( a, b ) );
}

