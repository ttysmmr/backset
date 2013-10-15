/** @file
    Declaration on random generator.
    
    Copyright (c) 2013 ttysmmr
    Distributed under the Boost Software License, Version 1.0.
    See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt
*/

#include <random_utility.h>

#include <stdlib.h>
#include <math.h>

#include <numeric.h>
#include <algorithm.h>

int random_zero_to( int const x )
{
    return ( rand() / (RAND_MAX / x + 1) );
}

int random_between( int a, int b )
{
    return MIN( a, b ) + random_zero_to( half_open_interval_elements( a, b ) );
}

double gaussrand(double mean, double stddev)
{
    static double v2, s;
    static int phase = 0;
    double value;
    if( phase == 0 )
    {
        static double v1;
        do
        {
            double U1 = (double)rand() / RAND_MAX;
            double U2 = (double)rand() / RAND_MAX;
            v1 = 2 * U1 - 1;
            v2 = 2 * U2 - 1;
            s = v1 * v1 + v2 * v2;

            // Normal random number is must be uniform distribution between (0, 1].
        } while( s >= 1 || s == 0 );
        value = v1 * sqrt( -2 * log( s ) / s );
    }
    else
    {
        value = v2 * sqrt( -2 * log( s ) / s );
    }
    phase = 1 - phase;

    // Convert random number from N(0, 1) into N( u, É–^2 )
    return value * stddev + mean;
}

