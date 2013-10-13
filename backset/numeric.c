/** @file
    Declaration on numeric values.
    
    Copyright (c) 2013 ttysmmr
    Distributed under the Boost Software License, Version 1.0.
    See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt
*/

#include <numeric.h>
#include <algorithm.h>

#define DEFINE_ACCUMULATE_FUNCTION( suffix, type ) \
    type accumulate_##suffix( type const* first, type const* last, type init ) \
    { \
        type sum = init; \
        while( first != last ) { sum += *first++; } \
        return sum; \
    }

DEFINE_ACCUMULATE_FUNCTION( char, char )
DEFINE_ACCUMULATE_FUNCTION( uchar, unsigned char )
DEFINE_ACCUMULATE_FUNCTION( short, short )
DEFINE_ACCUMULATE_FUNCTION( ushort, unsigned short )
DEFINE_ACCUMULATE_FUNCTION( int, int )
DEFINE_ACCUMULATE_FUNCTION( uint, unsigned int )
DEFINE_ACCUMULATE_FUNCTION( long, long )
DEFINE_ACCUMULATE_FUNCTION( ulong, unsigned long )
DEFINE_ACCUMULATE_FUNCTION( float, float )
DEFINE_ACCUMULATE_FUNCTION( double, double )

#undef DEFINE_ACCUMULATE_FUNCTION

int half_open_interval_elements( int a, int b )
{
    if( 0 <= a )
    {
        return ( 0 < b ) ? MAX( a, b ) - MIN( a, b ):  a + (-b);
    }
    else
    {
        return ( 0 < b ) ? b + (-a): MAX( a, b ) - MIN( a, b );
    }
}

