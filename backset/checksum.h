#if !defined( CHECKSUM_H_20131118225925 )
#define CHECKSUM_H_20131118225925

/** @file
    Declaration on Checksum.
    
    Copyright (c) 2013 ttysmmr
    Distributed under the Boost Software License, Version 1.0.
    See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt
*/

/**
    Calculate 16 bit one's complement of the one's complement sum of all
    16 bit words.

    @param top Top address of data list
    @param bytes Even Number of bytes
    @return 1's complement sum
*/
unsigned short Checksum( void const* top, int bytes );

#endif // #if !defined( CHECKSUM_H_20131118225925 )

