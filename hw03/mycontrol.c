#include "mycontrol.h"
#include <stdio.h>
#include <stdint.h>
#include <math.h>

static double setInitial = 0;
static double X = -1.0;
static double Y = -1.0;
static double A = -1.0; 

void initialize( double x, double y, double a)
{
    setInitial = 1;
    X = x;
    Y = y;
    A = a;
}

int32_t forward( double length )
{
    if ( setInitial == 0 )
    {
        return -1;
    }
    else
    {
        X += length * cos( A );
        Y += length * sin( A );
        return 0;
    }
}

int32_t clock_turn( double x )
{
    if ( setInitial == 0 )
    {
        return -1;
    }
    A -= x;
    return 0;
}

int32_t counterclock_turn( double x )
{
    if ( setInitial == 0 )
    {
        return -1;
    }
    A += x;
    return 0;
}

int32_t print()
{
    if ( setInitial == 0 )
    {
        return -1;
    }

    if ( A < 0 )
    {
        while ( A < 0 )
        {
            A += 2 * M_PI;
        }
    }
    if ( A >= 2 * M_PI )
    {
        while ( A >= 2)
        {
            A -= 2 * M_PI;
        }
        
    }
    
    
    printf( "position: (%.2f,%.2f), angle: %.2f\n" , round( X * 100 ) / 100  , round( Y * 100 ) / 100 , round( A / M_PI * 100 ) / 100 );
    return 0;
}