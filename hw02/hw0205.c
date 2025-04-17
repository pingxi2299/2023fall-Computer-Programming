#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t length;
    int32_t layer;

    printf( "Please input the length: " );
    scanf( "%d" , &length );
    if ( length < 3 )
    {
        printf( "Error input. Length is less than 3.");
        return 0;
    }
    
    printf( "Please input the number of layer: " );
    scanf( "%d" , &layer );
    if ( layer < 1 )
    {
        printf( "Error input. Layer is less than 1.");
        return 0;
    }

    if ( ( length - 1 ) * ( 4 * layer - 1 ) + 1 > 80 )
    {
        printf( "Error input. The width of the map is larger than 80.");
        return 0;
    }
    
    //layer = 1;
    //length = 3;

    int32_t currentLayer = 1;
    int32_t outerSpace = 0;
    int32_t insideSpace = 0;
    for( int32_t i = layer ; i > 0 ; i-- )
    {
        outerSpace = ( 2 * layer - ( 2 * currentLayer - 1 ) ) * ( length - 1 );
        for ( int32_t j = outerSpace ; j > 0 ; j-- ) //打島外的空格
        {
            printf( " " );
        }

        for ( int32_t k = currentLayer ; k > 0 ; k-- )
        {
            printf( "*" ); //邊長
            for ( int32_t j = length - 2 ; j > 0 ; j-- )
            {
                printf( "-" );
            }
            printf( "*" );

            for ( int32_t j = 3 * (length - 1) - 1 ; j > 0 ; j-- )
            {
                printf( " " );
            }
            
        }
        
        printf( "\n" );
        
        insideSpace = length;

        for ( int32_t k = length - 2 ; k > 0 ; k-- )
        {
            outerSpace--;

            for ( int32_t j = outerSpace ; j > 0 ; j-- ) //打島外的空格
            {
                printf( " " );
            }

            for ( int32_t k = currentLayer ; k > 0 ; k-- )
            {
                printf( "/" );
                for ( int32_t j = insideSpace ; j > 0 ; j-- )
                {
                    printf( " " );
                }
                printf( "\\" );

                for ( int32_t j = 4 * ( length - 1 ) - insideSpace - 2 ; j > 0 ; j-- )
                {
                    printf( " " );
                }
            }

            printf( "\n" );

            insideSpace += 2;
        }
        
        currentLayer = currentLayer + 1 ;
        
    }

    for ( int32_t i = layer ; i > 1 ; i-- ) //每一大塊
    {
        printf( "*" ); //一大塊裡的第一行
        for ( int32_t j = layer ; j > 1 ; j-- )
        {
            for ( int32_t k = 3 * ( length - 1 ) - 1 ; k > 0 ; k-- )
            {
                printf( " " );
            }
            printf( "*" );
            for ( int32_t k = length - 2 ; k > 0 ; k-- )
            {
                printf( "-" );
            }
            printf( "*" );
        }
        for ( int32_t k = 3 * ( length - 1 ) - 1 ; k > 0 ; k-- )
        {
            printf( " " );
        }
        printf( "*" ); // 第一行結束

        printf( "\n" );

        insideSpace = length; // 第二行 
        outerSpace = 1;
        for ( int32_t j = length - 2  ; j > 0 ; j-- ) //以邊長為單位
        {
            for ( int32_t l = outerSpace ; l > 0 ; l-- ) //打空格
            {
                printf( " " );
                
            }
            for ( int32_t k = layer ; k > 1 ; k-- ) //一小塊一小塊
            {
                printf( "\\" );
                for ( int32_t l = 4 * ( length - 1 ) - insideSpace - 2 ; l > 0 ; l-- )
                {
                    printf( " " );
                }
                printf( "/" );
                for ( int32_t l = insideSpace ; l > 0 ; l-- )
                {
                    printf( " " );
                }
            }
            printf( "\\" );
            for ( int32_t l = 4 * ( length - 1 ) - insideSpace - 2 ; l > 0 ; l-- )
            {
                printf( " " );
            }
            printf( "/" );
            printf( "\n" );
            insideSpace += 2;
            outerSpace++;
        } //第二行結束


        for ( int32_t l = outerSpace ; l > 0 ; l-- ) //第三行 
        {
            printf( " " );
        }
        for ( int32_t j = layer ; j > 1 ; j-- )
        {
            printf( "*" );
            for ( int32_t k = length - 2 ; k > 0 ; k-- )
            {
                printf( "-" );
            }
            printf( "*" );
            for ( int32_t k = 3 * ( length - 1 ) - 1 ; k > 0 ; k-- )
            {
                printf( " " );
            }
        }
        printf( "*" );
        for ( int32_t k = length - 2 ; k > 0 ; k-- )
        {
            printf( "-" );
        }
        printf( "*" );// 第三行結束

        printf( "\n" );
        
        outerSpace--;
        insideSpace = length;//第四行
        for ( int32_t j = length - 2  ; j > 0 ; j-- ) //每一小行
        {
            for ( int32_t l = outerSpace ; l > 0 ; l-- ) //打空格
            {
                printf( " " );
            }
            for ( int32_t k = layer ; k > 1 ; k-- ) //每一小塊
            {
                printf( "/" );
                for ( int32_t l = insideSpace ; l > 0 ; l-- )
                {
                    printf( " " );
                }
                printf( "\\" );
                for ( int32_t l = 4 * ( length - 1 ) - insideSpace - 2 ; l > 0 ; l-- )
                {
                    printf( " " );
                }
            }
            printf( "/" );
            for ( int32_t l = insideSpace ; l > 0 ; l-- )
            {
                printf( " " );
            }
            printf( "\\" );
            printf("\n");
            outerSpace--;
            insideSpace += 2;
            
        }
    }
    printf( "*" ); //一大塊裡的第一行
    for ( int32_t j = layer ; j > 1 ; j-- )
    {
        for ( int32_t k = 3 * ( length - 1 ) - 1 ; k > 0 ; k-- )
        {
            printf( " " );
        }
        printf( "*" );
        for ( int32_t k = length - 2 ; k > 0 ; k-- )
        {
            printf( "-" );
        }
        printf( "*" );
    }
    for ( int32_t k = 3 * ( length - 1 ) - 1 ; k > 0 ; k-- )
    {
        printf( " " );
    }
    printf( "*" );

    printf( "\n" );
    

    insideSpace = length;
    currentLayer = layer;
    outerSpace = 1;
    for ( int32_t i = layer ; i > 0 ; i-- )
    {
        //outerSpace = ( 2 * layer - ( 2 * currentLayer - 1 ) ) * ( length - 1 ); 
        insideSpace = length;
        
        for ( int32_t k = length - 2 ; k > 0 ; k-- )
        {
            for ( int32_t j = outerSpace ; j > 0 ; j-- ) //打島外的空格
            {
                printf( " " );
            }
            outerSpace++;
            for ( int32_t k = currentLayer ; k > 0 ; k-- )
            {
                printf( "\\" );
                for ( int32_t j = 4 * ( length - 1 ) - insideSpace - 2 ; j > 0 ; j-- )
                {
                    printf( " " );
                }
                printf( "/" );
                for ( int32_t j = insideSpace ; j > 0 ; j-- )
                {
                    printf( " " );
                }
            }

            printf( "\n" );
            insideSpace += 2;
        }

        for ( int32_t j = outerSpace ; j > 0 ; j-- )
        {
            printf( " " );
        }
        for ( int32_t k = currentLayer ; k > 0 ; k-- )
        {
            printf( "*" ); //邊長
            for ( int32_t j = length - 2 ; j > 0 ; j-- )
            {
                printf( "-" );
            }
            printf( "*" );
            for ( int32_t j = 3 * (length - 1) - 1 ; j > 0 ; j-- )
            {
                printf( " " );
            }
        }
        
        printf( "\n" );

        outerSpace += length  ;

        currentLayer--;
    }
    


}