#include <stdio.h>
#include <stdint.h>

int main() 
{
    uint16_t n;
    long double squareRootTwo = 1.41421356237309504880L;

    printf("Please enter n (16-bits unsigned):\n ");
    scanf("%hu", &n);

    long double l = 1.0L; // 初始化 l

    uint16_t j = 1;
    uint16_t k = 1;

    for (uint16_t i = 1; i <= n; i++)
    {
        printf("n = %hu", i);
        printf(": ");

        // 計算 l
        long double l;
        l = (long double)j / k;
        
        printf("%0.20Lf", l);
        printf("(%0.20Lf)\n", l - squareRootTwo);
        
        // 更新 j 和 k
        uint32_t temp;
        temp = k;
        k = j + k;
        j = temp + k;

    }
    
    return 0;
}