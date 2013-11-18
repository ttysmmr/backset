#if !defined( ALGORITHM_H_20131014001917 )
#define ALGORITHM_H_20131014001917

/** @file
    Defines a collection of functions especially designed to be used on ranges of elements.
    
    Copyright (c) 2013 ttysmmr
    Distributed under the Boost Software License, Version 1.0.
    See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt
*/

/// Return the smallest.
#define MIN( a, b ) ((a < b) ? a: b)

/// Return the largest
#define MAX( a, b ) ((a < b) ? b: a)

/// limit a number between two values.
#define LIMIT( min, max, value ) (MAX( min, MIN( max, value ) ))

#endif // #if !defined( ALGORITHM_H_20131014001917 )
