/** @file
    Declaration on Checksum.
    
    Copyright (c) 2013 ttysmmr
    Distributed under the Boost Software License, Version 1.0.
    See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt
*/

#include <checksum.h>

#include <static_assert.h>

#include <definite_cast.h>
#include <report.h>

static unsigned short OnesComplementSum( unsigned short const* first
    , unsigned short const* last, unsigned short init )
{
    unsigned long sum = init;
    while( first != last )
    {
        sum += *first++;
    }

    if( sum > 0x00ffff )
    {
        // 0x0000 and 0xFFFF represents 0 to 1's complement. Therefore
        // adding a late one carry.
        sum = (sum & 0xffff) + (sum >> 16);
    }
    return STATIC_CAST( unsigned short, sum );
}

unsigned short Checksum( void const* top, int bytes )
{
    if( top )
    {
        if( 0 < bytes )
        {
            if( bytes % 2 == 0 )
            {
                // unsigned short is 2 bytes following code.
                STATIC_ASSERT( 2 == sizeof(unsigned short) );
                unsigned short const* u_top
                    = STATIC_CAST( unsigned short const*, top );

                // Order to calculate two bytes, and dividing by two the
                // number of bytes.
                unsigned short sum = OnesComplementSum( &u_top[0]
                    , &u_top[bytes / 2], 0 );

                // Return the 16 bit one's complement of the one's
                // complement sum.
                return ~sum;
            }
            else
            {
                REPORT_ERROR("bytes must be even number");
            }
        }
        else
        {
            REPORT_ERROR( "bytes must be greater than 0" );
        }
    }
    else
    {
        REPORT_ERROR( "top is null" );
    }
    return 0;
}
