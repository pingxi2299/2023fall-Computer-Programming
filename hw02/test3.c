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

    uint64_t product; //计算乘积
    product = num1 * num2;

    __uint128_t space;
    space = 1;

    for (uint64_t i = product; i > 0; i /= 10)  //计算空格
    {
        space = space + 2;
    }

    uint64_t spaceOfNum1;
    spaceOfNum1 = -1;
    for (uint64_t i = num1; i > 0; i /= 10)  //计算被乘数所需空格
    {
        spaceOfNum1 = spaceOfNum1 + 2;
    }

    uint64_t spaceOfNum2;
    spaceOfNum2 = -1;
    for (uint64_t i = num2; i > 0; i /= 10)  //计算乘数所需空格
    {
        spaceOfNum2 = spaceOfNum2 + 2;
    }

    for (__uint128_t i = space - spaceOfNum1; i > 0 ; i--) //被乘数那行前面的空格
    {
        printf( " " );
    }
    
    uint64_t reversenum1 = 0;
    for (uint64_t i = 0 , j = num1; j > 0 ; j /= 10) //先计算反向数字
    {
        i = j % 10; 
        reversenum1 = reversenum1 * 10 + i; 
    }

    for (uint64_t i = 0 , j = reversenum1; j > 0 ; j /= 10) // 再转回来 顺便加个空格
    {
        i = j % 10; 
        printf( "%llu " , i );
    }
    printf( "\n" );

    printf( "*)" );

    for (__uint128_t i = space - spaceOfNum2-2; i > 0 ; i--) //乘数那行前面的空格
    {
        printf( " " );
    }

    uint64_t reversenum2 = 0;
    for (uint64_t i = 0 , j = num2; j > 0 ; j /= 10) //先计算反向数字
    {
        i = j % 10; 
        reversenum2 = reversenum2 * 10 + i; 
    }

    for (uint64_t i = 0 , j = reversenum2; j > 0 ; j /= 10) // 再转回来 顺便加个空格
    {
        i = j % 10; 
        printf( "%llu " , i );
    }
    printf( "\n" );

    for(__uint128_t i = space ; i > 0 ; i--)  //打出dash
    {
        printf("-");
    }
    
    if( num1 == 0 || num2 == 0 )
    {
        /*for (__uint128_t i = 1 ; i < space ; i++ ) //乘数那行前面的空格
        {
            printf( "-" );
        }
        */
        printf("0");
    }
    
    return 0;
}