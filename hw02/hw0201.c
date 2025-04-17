#include <stdio.h>
#include <stdint.h>

int main() 
{
    uint64_t n;
    long double squareRootTwo = 1.41421356237309504880L;

    printf("Please enter n (16-bits unsigned): ");
    scanf("%llu", &n);

    long double l;
    long double j = 0.5;
    //__int128_t k = 1;
    //__int128_t temp = 0;

    for (uint64_t i = 1; i <= n; i++ )
    {
        if ( i == 1 )
        {
            printf( "n = 1: 1.000000000000000(-0.414213562373095)\n" );
        }
        else
        {
            printf("n = %llu", i);
            printf(": ");

            //l = (long double)(j) / k;
            printf("%0.15Lf", j + 1.0 );
            printf("(%0.15Lf)\n", j + 1.0 - squareRootTwo );

            j = 1.0 / ( 2.0 + j );
        }
        
        
    }
    
    return 0;
}