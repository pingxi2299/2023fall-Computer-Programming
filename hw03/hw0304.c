#include "hw0304-1.h"
#include <stdint.h>
#include <stdio.h>

int main()
{
    int32_t n;
    printf( "Please enter the disk number (2-20): " );
    scanf( "%d" , &n );

    recursive( n , 1 , 2 , 3 );
}

#include "hw0304-1.h"
#include <stdio.h>
#include <stdint.h>

static int32_t totalDisk;
static int32_t moveDisk;
static int32_t moveRod;



void recursive( int32_t n , int32_t source , int32_t target , int32_t helper )
{
    if ( n > 0 )
    /*{
        printf("move disk ");
        printf( "1" );
        printf(" to rod %d " , target);
    }

    else*/
    {
        recursive( n - 1 , source , helper , target );
        printf("move disk ");
        printf( "%d" , n );
        printf(" to rod %d " , target );
        printf( "\n" );
        recursive( n - 1 , helper , target , source );
        
    } 
    

}