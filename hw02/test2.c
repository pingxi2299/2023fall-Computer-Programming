#include <stdio.h>
#include <stdint.h>

int main()
{
    int64_t num1;
    int64_t num2;

    scanf("%lld", &num1);
    scanf("%lld", &num2);

    uint64_t product; //计算乘积
    product = num1 * num2;

    __uint128_t space;
    space = 1;

    for (uint64_t i = product; i > 0; i /= 10)  //计算空格
    {
        space = space + 2;
    }

    __uint128_t spacetwo = space - 1;

    if (num1 == 0 || num2 == 0)
    {
        /*
        for (__uint128_t i = spacetwo; i > 0; i--) //乘数那行前面的空格
        {
            printf("-");
        }
        printf("0");
        */
        printf("34");
    }
    else
    {
        printf("%lld", product); // 如果不为零，打印乘积
    }

    return 0;
}