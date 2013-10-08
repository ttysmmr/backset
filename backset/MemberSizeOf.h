#if !defined( MEMBERSIZE_OF_H_20131008123324 )
#define MEMBERSIZE_OF_H_20131008123324

/** @file
    Declaration on MEMBERSIZE_OF macro.
    
    Copyright (c) 2013 ttysmmr
    Distributed under the Boost Software License, Version 1.0.
    See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt
*/

/// Get the size of a specific member of the structure
/// @param type structure name
/// @param member member name
#define MEMBERSIZE_OF( type, member ) (sizeof( ((type*)0)->member))

#endif // #if !defined( MEMBERSIZE_OF_H_20131008123324 )
