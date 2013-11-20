#if !defined( RANDOM_H_20131029003743 )
#define RANDOM_H_20131029003743

/** @file
    Declaration on random generator.
    
    Copyright (c) 2013 ttysmmr
    Distributed under the Boost Software License, Version 1.0.
    See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt
*/

/// Generate a random number between [0, x).
int RandomZeroTo( int x );

/// Generate a random number between [a, b).
int RandomBetween( int a, int b );

/// Generate a random number from a Gaussian distribution.
/// This function uses a Box-Muller transform.
/// @param mean 
/// @param stddev standard devuation
double GaussRand(double mean, double stddev);

#endif // #if !defined( RANDOM_H_20131029003743 )

