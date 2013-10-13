#if !defined( NUMERIC_H_20131009191253 )
#define NUMERIC_H_20131009191253

/** @file
    Declaration on numeric values.
    
    Copyright (c) 2013 ttysmmr
    Distributed under the Boost Software License, Version 1.0.
    See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt
*/

/// Accumulate values in range.
/// @return The result of accumulating init and all the elements in the range [first,last).
char accumulate_char( char const* first, char const* last, char init );

/// @overload accumulate_char
unsigned char accumulate_uchar( unsigned char const* first, unsigned char const* last, unsigned char init );

/// @overload accumulate_char
short accumulate_short( short const* first, short const* last, short init );

/// @overload accumulate_char
unsigned short accumulate_ushort( unsigned short const* first, unsigned short const* last, unsigned short init );

/// @overload accumulate_char
int accumulate_int( int const* first, int const* last, int init );

/// @overload accumulate_char
unsigned int accumulate_uint( unsigned int const* first, unsigned int const* last, unsigned int init );

/// @overload accumulate_char
long accumulate_long( long const* first, long const* last, long init );

/// @overload accumulate_char
unsigned long accumulate_ulong( unsigned long const* first, unsigned long const* last, unsigned long init );

/// @overload accumulate_char
float accumulate_float( float const* first, float const* last, float init );

/// @overload accumulate_char
double accumulate_double( double const* first, double const* last, double init );

/// Get a integer elements number between [a, b).
int half_open_interval_elements( int a, int b );

#endif // #if !defined( NUMERIC_H_20131009191253 )
