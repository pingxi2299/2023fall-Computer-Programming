#include <stdio.h>
#include <stdint.h>

void BinaryForm( int32_t n , int32_t shift ) ;

int main() 
{
    int64_t num;
    printf("Please enter the number: ");
    scanf("%d", &num);
    if ( num > 2147483647 || num < -2147483647 )
    {
        printf( "Error input." );
        return 0;
    }
    else
    {
        BinaryForm(num, 32);
        printf("\n");
    }

    return 0;
}

void BinaryForm( int32_t n , int32_t shift ) 
{
    if ( shift == 0 ) 
    {
        return;
    }
    
    BinaryForm( n >> 1 , shift - 1 );
    
    if ( n & 1 ) 
    {
        printf( "1" );
    } 
    else 
    {
        printf( "0" );
    }
    
    if (shift % 8 == 0) 
    {
        printf(" ");
    }
}