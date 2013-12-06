#if !defined( DEFINITE_CAST_H_20131129000752 )
#define DEFINITE_CAST_H_20131129000752

/** @file
    Declaration on C cast.
    In C, the macro definitions for describing the same classification as
    the cast operators in C++.
    
    Copyright (c) 2013 ttysmmr
    Distributed under the Boost Software License, Version 1.0.
    See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt
*/

#include <stddef.h>

#if defined( __cplusplus )
    #define STATIC_CAST( type , exp )       static_cast< type >( exp )
    #define REINTERPRET_CAST( type , exp )  reinterpret_cast< type >( exp )
    #define CONST_CAST( type , exp )        const_cast< type >( exp )
    #define DOWN_CAST( derived, base, p )   dynamic_cast< derived* >( p )

#else// defined( __cplusplus )
    /// static_cast substitute.
    #define STATIC_CAST( type , exp )       (( type )( exp ))

    /// reinterpret_cast substitute.
    #define REINTERPRET_CAST( type , exp )  (( type )( exp ))

    /// const_cast substitute.
    #define CONST_CAST( type , exp )        (( type )( exp ))

    /**
        dynamic_cast substitute.
        The adjust the offset if you declared at the top of the structure
        other than the base class.
        
        @param derived Derived class name
        @param base Member name of the base class in the derived class.
        @param p Pointer to base class member
        @pre p != 0
        @return Pointer to derived class.
    */
    #define DOWN_CAST( derived , base , p ) \
        ( REINTERPRET_CAST( derived* , REINTERPRET_CAST( char* , p ) \
            - offsetof( derived , base ) ) )
#endif// defined( __cplusplus )

#endif // #if !defined( DEFINITE_CAST_H_20131129000752 )
