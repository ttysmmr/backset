#if !defined( ARRAYSIZE_H_20131006114856 )
#define ARRAYSIZE_H_20131006114856

/** @file
    Declaration on get a array size.
    
    Copyright (c) 2013 ttysmmr
    Distributed under the Boost Software License, Version 1.0.
    See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt
*/

#ifdef __cplusplus
    /// Check pointer to an array type.
    /// Argument is expecting a pointer to array type. Compile error does not
    /// occur even in the case of any other type. To check the type using the
    /// template.
    template<typename T, std::size_t N> 
    char (&lengthof_helper_char_array(T (&a)[N]))[N];
    
    /// get a array size.
    #define ARRAY_SIZE( array ) (sizeof(lengthof_helper_char_array(array)))
#else
    /// get a array size.
    #define ARRAY_SIZE( array ) (sizeof(array)/sizeof(array[0]))
#endif

#endif // #if !defined( ARRAYSIZE_H_20131006114856 )

