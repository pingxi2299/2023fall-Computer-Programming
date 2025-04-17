#include <stdio.h>
#include "mycontrol.h"

int main() {

    initialize(348403.4, 384, 34);
    forward(2934);
    print();
    clock_turn(-M_PI / 7);
    print();
    forward(456);
    print();
    clock_turn(32);
    print();
    forward(-384);
    print(); 

    return 0;
}


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
        while ( A >= 2 )
        {
            A -= 2 * M_PI;
        }
        
    }
    
    
    printf( "position: (%.2f,%.2f), angle: %.2f\n" , round( X * 100 ) / 100  , round( Y * 100 ) / 100 , round( A / M_PI * 100 ) / 100 );
    return 0;
}