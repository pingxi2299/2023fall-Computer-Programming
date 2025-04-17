#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t S0 = 1; //yes
    int32_t S1 = 0; //no
    int32_t S2 = 0;
    int32_t S3 = 0;
    int32_t S4 = 0;
    int32_t S5 = 0;
    int32_t S6 = 0;
    int32_t tempS0 = 0;
    int32_t tempS1 = 0;
    int32_t tempS2 = 0;
    int32_t tempS3 = 0;
    int32_t tempS4 = 0;
    int32_t tempS5 = 0;
    int32_t tempS6 = 0;

    while (1)
    {
        int32_t input;

        printf( "Please enter an integer: " );
        scanf( "%d" , &input );
        //printf( "%d" , input );

        //input = -69;
        if ( input == 0 )
        {
            break;
        }
        if ( input < 0 )
        {
            input = input * (-1) ;
        }



        /*if ( input % 2 == 0 )
        {
            input = 0; // even number
        }
        else
        {
            input = 1; // odd number
        }
        */
        

        if ( S0 == 1 )
        {
            if ( input % 2 == 1 )
            {
                S0 = 0;
                tempS1 = 1;
                tempS2 = 1;
            }
            else
            {
                S0 = 0;
                tempS3 = 1;
            }
        }
        
        if ( S1 == 1 )
        {
            if ( input % 2 == 1 )
            {
                S1 = 0;
                tempS2 = 1;
            }
            else
            {
                S1 = 0;
                tempS4 = 1;
            }
        }

        if ( S2 == 1 )
        {
            if ( input % 2 == 1 )
            {
                S2 = 0;
                tempS3 = 1;
            }
            else
            {
                S2 = 0;
                tempS5 = 1;
            }
        }

        if ( S3 == 1 )
        {
            if ( input % 2 == 1 )
            {
                S3 = 0;
                tempS5 = 1;
            }
            else
            {
                S3 = 0;
                tempS0 = 1;
            }
            
        }

        if ( S4 == 1 )
        {
            if ( input % 2 == 1 )
            {
                S4 = 0;
                tempS5 = 1;
            }
            else
            {
                S4 = 0;
                tempS2 = 1;
                tempS6 = 1;
            }
            
        }

        if ( S5 == 1 )
        {
            if ( input % 2 == 1)
            {
                S5 = 0;
                tempS6 = 1;
            }
            else 
            {
                S5 = 0;
                tempS0 = 1;
            }
            
        }

        if ( S6 == 1 )
        {
            if ( input % 2 == 1 )
            {
                S6 = 0;
                tempS6 = 1;
            }
            else
            {
                S6 = 0;
                tempS1 = 1;
            }
        }

        if( tempS0 == 0 )
        {
            S0 = 0;
        }
        else if( tempS0 == 1 )
        {
            S0 = 1;
            tempS0 = 0;
        }

        if( tempS1 == 0 )
        {
            S1 = 0;
        }
        else if( tempS1 == 1 )
        {
            S1 = 1;
            tempS1 = 0;
        }

        if( tempS2 == 0 )
        {
            S2 = 0;
        }
        else if( tempS2 == 1 )
        {
            S2 = 1;
            tempS2 = 0;
        }

        if( tempS3 == 0 )
        {
            S3 = 0;
        }
        else if( tempS3 == 1 )
        {
            S3 = 1;
            tempS3 = 0;
        }

        if( tempS4 == 0 )
        {
            S4 = 0;
        }
        else if( tempS4 == 1 )
        {
            S4 = 1;
            tempS4 = 0;
        }

        if( tempS5 == 0 )
        {
            S5 = 0;
        }
        else if( tempS5 == 1 )
        {
            S5 = 1;
            tempS5 = 0;
        }

        if( tempS6 == 0 )
        {
            S6 = 0;
        }
        else if( tempS6 == 1 )
        {
            S6 = 1;
            tempS6 = 0;
        }
    }


    printf( "Possible States: " );
    if ( S0 == 1 )
    {
        printf( " S0," ); 
    }
    if ( S1 == 1 )
    {
        printf( " S1," ); 
    }
    if ( S2 == 1 )
    {
        printf( " S2," ); 
    }
    if ( S3 == 1 )
    {
        printf( " S3," ); 
    }
    if ( S4 == 1 )
    {
        printf( " S4," ); 
    }
    if ( S5 == 1 )
    {
        printf( " S5," ); 
    }
    if ( S6 == 1 )
    {
        printf( " S6," ); 
    }
    printf( "\b" );

    return 0 ;
}