#include <stdio.h>
#include <stdint.h>

int main()
{
    uint64_t num1;
    uint64_t num2;
    
    printf( "Please enter the first  number: " );
    scanf( "%llu" , &num1 );

    printf( "Please enter the second number: " );
    scanf( "%llu" , &num2 );

    uint64_t product; //計算乘積
    product = num1 * num2;


    uint64_t max; //找最大值
    if ( num1 >= num2 && num1 >= product )
    { 
        max = num1;
    }else if ( num2 >= num1 && num2 >= product )
    { 
        max = num2;
    }else
    { 
        max = product;
    }
    

    uint16_t space = 1; //計算直式的整體寬度
    if ( num1 == 0 && num2 == 0 )
    {
        space = 3;
    }
    else
    {
        for (uint64_t i = max ; i > 0 ; i /= 10 )
        {
            space = space + 2;
        }
    }


    //打第一行
    uint16_t spaceOfNum1 = -1; // 找空格
    uint64_t digitNum1 = 0; // 找位數
    for ( uint64_t i = num1 ; i > 0 ; i /= 10)
    {
        spaceOfNum1 = spaceOfNum1 + 2;
        digitNum1 ++;
    }
    //printf( "%u" , spaceOfNum1);
    if ( num1 == 0 )
    {
        for ( uint16_t i = space-1 ; i > 0 ; i-- ) // 打空格
        {
            printf( " " );
        }
        printf( "0" );
    }
    else
    {
        for ( uint16_t i = space-spaceOfNum1 ; i > 0 ; i-- ) // 打空格
        {
            printf( " " );
        }

        //printf("-");

        uint64_t maskNum1 = 1;
        for (uint64_t i = digitNum1-1 ; i > 0 ; i-- )
        {
            maskNum1 *= 10;
        }
        //printf( "%u" , maskNum1 );
    
        uint64_t tempNum1 = num1;
        for (uint64_t i = digitNum1 ; i > 0 ; i-- )
        {
            printf ( "%llu" , tempNum1 / maskNum1 );
        
            tempNum1 %= maskNum1;
            maskNum1 /= 10;
         //printf( "%u " , tempNum1 );
            //printf( "%u " , maskNum1 );
            if ( i > 0 )
            {
                printf ( " " );
            }
        
        }//打完第一行
    }

    printf( "\n" );

    //開始打第二行
    printf( "*)" );
    uint16_t spaceOfNum2 = -1; // 找空格
    uint64_t digitNum2 = 0; // 找位數
    for ( uint64_t i = num2 ; i > 0 ; i /= 10)
    {
        spaceOfNum2 = spaceOfNum2 + 2;
        digitNum2 ++;
    }
    //printf( "%u" , spaceOfNum1);
    if ( num2 == 0 )
    {
        for ( uint16_t i = space-spaceOfNum2 - 4 ; i > 0 ; i-- ) // 打空格
        {
            printf( " " );
        }
        printf( "0" );
    }
    else
    {
        for ( uint16_t i = space-spaceOfNum2 - 2 ; i > 0 ; i-- ) // 打空格
        {
            printf( " " );
        }

        //printf("-");

        uint64_t maskNum2 = 1;
        for (uint64_t i = digitNum2-1 ; i > 0 ; i-- )
        {
            maskNum2 *= 10;
        }
        //printf( "%u" , maskNum2 );
    
        uint64_t tempNum2 = num2;
        for (uint64_t i = digitNum2 ; i > 0 ; i-- )
        {
            printf ( "%llu" , tempNum2 / maskNum2 );

            tempNum2 %= maskNum2;
            maskNum2 /= 10;
            //printf( "%u " , tempNum2 );
            //printf( "%u " , maskNum2 );
            if ( i > 0 )
            {
                printf ( " " );
            }

        }// 打完第二行
    }

    printf( "\n" );

    //dash 
    for(uint64_t i = space ; i > 0 ; i--)  
    {
        printf("-");
    }

    printf( "\n" );


    if ( num1 == 0 || num2 == 0 )
    {
        for ( uint16_t i = space-1 ; i > 0 ; i-- ) // 打空格
        {
            printf( " " );
        }
        printf( "0" );
        return 0 ;
    }
    
    //開始打過程與結果ㄌ
    uint16_t spaceOfProdut = -1; // 找空格
    uint64_t digitProduct = 0; // 找位數
    if ( num2 < 10 )
    {
        for ( uint64_t i = product ; i > 0 ; i /= 10)
        {
            spaceOfProdut = spaceOfProdut + 2;
            digitProduct ++;
        }
        //printf( "%u" , spaceOfNum1);
    
        for ( uint16_t i = space-spaceOfProdut ; i > 0 ; i-- ) // 打空格
        {
            printf( " " );
        }

        //printf("-");

        uint64_t maskProduct = 1;
        for (uint64_t i = digitProduct-1 ; i > 0 ; i-- )
        {
            maskProduct *= 10;
        }
        //printf( "%u" , maskNum1 );
    
        uint64_t tempProduct = product;
        for (uint64_t i = digitProduct ; i > 0 ; i-- )
        {
            printf ( "%llu" , tempProduct / maskProduct );
        
            tempProduct %= maskProduct;
            maskProduct /= 10;
         //printf( "%u " , tempNum1 );
            //printf( "%u " , maskNum1 );
            if ( i > 0 )
            {
                printf ( " " );
            }
        
        }
    }
    else
    {
        uint64_t tempNum2 = num2;
        uint16_t tempSpace = space;
        uint16_t spaceOfPass;
        uint64_t digitPass;
        uint64_t maskPass;
        for ( uint64_t i = tempNum2 ; i > 0 ; i /= 10)
        {
            uint64_t multiplier = i % 10;
            uint64_t tempProduct = num1 * multiplier;
            uint64_t temptempProduct = tempProduct;
            spaceOfPass = -1;
            digitPass = 0;
            maskPass = 1;
            
            if ( multiplier == 0 )
            {
                for ( uint16_t i = tempSpace - 1 ; i > 0 ; i-- ) // 打空格
                {
                    printf( " " );
                }
                printf( "0\n" );
                tempSpace = tempSpace - 2;
            }
            else
            {
            for ( uint64_t i = tempProduct ; i > 0 ; i /= 10)
            {
                spaceOfPass = spaceOfPass + 2;
                digitPass ++;
            }
            for ( uint16_t i = tempSpace-spaceOfPass ; i > 0 ; i-- ) // 打空格
            {
                printf( " " );
            }
            for (uint64_t i = digitPass-1 ; i > 0 ; i-- )
            {
                maskPass *= 10;
            }
            for (uint64_t i = digitPass ; i > 0 ; i-- )
            {
                printf ( "%llu" , temptempProduct / maskPass );
        
                temptempProduct %= maskPass;
                maskPass /= 10;
             //printf( "%u " , tempNum1 );
                //printf( "%u " , maskNum1 );
                if ( i > 0 )
                {
                    printf ( " " );
                }
            }
            printf( "\n" );
            tempSpace = tempSpace - 2;
            }
        }

        //dash 
    for(uint16_t i = space ; i > 0 ; i--)  
    {
        printf("-");
    }

    printf( "\n" );
    //printf( "%llu" , product);
    uint16_t spaceOfProdut = -1; // 找空格
    uint64_t digitProduct = 0; // 找位數
        for ( uint64_t i = product ; i > 0 ; i /= 10)
        {
            spaceOfProdut = spaceOfProdut + 2;
            digitProduct ++;
        }
        //printf( "%u" , spaceOfNum1);
    
        for ( uint16_t i = space-spaceOfProdut ; i > 0 ; i-- ) // 打空格
        {
            printf( " " );
        }

        //printf("-");

        uint64_t maskProduct = 1;
        for (uint64_t i = digitProduct-1 ; i > 0 ; i-- )
        {
            maskProduct = 10 * maskProduct;
        }
        //printf( "%llu" , maskProduct );
    
        uint64_t tempProduct = product;
        for (uint64_t i = digitProduct ; i > 0 ; i-- )
        {
            printf ( "%llu" , tempProduct / maskProduct );
        
            tempProduct %= maskProduct;
            maskProduct /= 10;
            //printf( "%llu " , tempProduct );
            //printf( "%hhu " , maskProduct );
            if ( i > 0 )
            {
                printf ( " " );
            }
        
        }
        
    }
    printf( "\n" );
    return 0;
    
}