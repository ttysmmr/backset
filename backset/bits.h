#if !defined( BITS_H_20131007113556 )
#define BITS_H_20131007113556

/** @file
    Declaration on bit manipulation.
    
    Copyright (c) 2013 ttysmmr
    Distributed under the Boost Software License, Version 1.0.
    See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt
*/

/// Bit number of 1 byte.
#define NUMBER_OF_BITS_IN_A_BYTE 8

/// Bit number to byte number.
#define BYTE_NUMBER_OF( bits ) (bits / NUMBER_OF_BITS_IN_A_BYTE)

/// Convert to a number of specified type size unit a bit number.
#define INDEX_OF_EACH_TYPE_SIZE( type, bits ) (bits % (NUMBER_OF_BITS_IN_A_BYTE * sizeof(type)))

#endif // #if !defined( BITS_H_20131007113556 )
