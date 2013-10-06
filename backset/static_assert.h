#if !defined( STATIC_ASSERT_H_20131006183239 )
#define STATIC_ASSERT_H_20131006183239

/** @file
    Declaration on static_assert be added in C1X.
    
    Copyright (c) 2013 ttysmmr
    Distributed under the Boost Software License, Version 1.0.
    See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt
*/

/// Declaration to detect and diagnose common usage errors at compile time.
#define STATIC_ASSERT( expr ) extern void assert_function( int[(expr)?1:-1] )

#endif // #if !defined( STATIC_ASSERT_H_20131006183239 )

