#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main()
{
    uint32_t InitialInvestment; //投資金額
    uint32_t RecurringMonthlyInvestment; //每月存進去的錢
    uint32_t StartMonth; //開始月份
    uint32_t StartYear; // 開始年份
    uint32_t EndMonth; //結束月份
    uint32_t EndYear; //結束年份
    uint32_t Rate; // 年利率

    //InitialInvestment = 50000; //投資金額
    //RecurringMonthlyInvestment = 4000; //每月存進去的錢
    //StartMonth = 12; //開始月份
    //StartYear = 2023; // 開始年份
    //EndMonth = 2; //結束月份
    //EndYear = 2024; //結束年份
    //Rate = 12;

    printf( "Initial Investment:           " );
    scanf( "%u" , &InitialInvestment );
    if ( InitialInvestment < 1 || InitialInvestment > 10000000)
    { 
        printf( "Error input." );
        return 0;
    }
    

    printf( "Recurring Monthly Investment: " );
    scanf( "%u" , &RecurringMonthlyInvestment );
    if ( RecurringMonthlyInvestment < 0 || RecurringMonthlyInvestment > 100000000 )
    {
        printf( "Error input." );
        return 0;
    }
    

    printf( "Start Month:                  " );
    scanf( "%u" , &StartMonth );
    if ( StartMonth < 1 || StartMonth > 12 )
    {
        printf( "Error input." );
        return 0;
    }
    

    printf( "Start Year:                   " );
    scanf( "%u" , &StartYear );
    if ( StartYear < 1 || StartYear > 10000 )
    {
        printf( "Error input." );
        return 0;
    }
    

    printf( "End Month:                    " );
    scanf( "%u" , &EndMonth );
    if ( EndMonth < 1 || EndMonth > 12 )
    {
        printf( "Error input." );
        return 0;
    }
    

    printf( "End Year:                     " );
    scanf( "%u" , &EndYear );
    if( EndYear < 1 || EndYear > 10000 )
    {
        printf( "Error input." );
        return 0;
    }

    if ( StartYear == EndYear && StartMonth == EndMonth )
    {
        printf( "Error input. The time must be more than one month." );
        return 0;
    }
    

    printf( "Annual Rate of Return (%%):    " );
    scanf( "%u" , &Rate );
    if ( Rate < 1 || Rate > 100 )
    {
        printf( "Error input." );
        return 0;
    }
    
    double monthlyRate = Rate / 12.0;
    
    uint32_t numMonth = ( EndYear - StartYear ) * 12 + ( EndMonth - StartMonth + 1 );

    uint32_t year = StartYear;
    uint32_t month = StartMonth;
    uint64_t principal = InitialInvestment; //本金
    double total = InitialInvestment; //總金額
    double income = 0; //輸入
    double rateOfReturn = 0; //報酬率

    printf( "--- Output ---\n" );
    for (uint32_t i = numMonth ; i > 1 ; i-- )
    {
        printf( "%d." , year );
        
        if ( month < 10 )
        {
            printf( "0%d) " , month );
        }
        else
        {
            printf( "%d) " , month );
        }
        
        if ( principal >= 100000000000000 || total >= 100000000000000 || income >= 100000000000000 || rateOfReturn >= 100000000000000 )
        {
            printf( "*/*/*/*%%" );
        }
        else
        {
            printf( "%llu" , principal );
            printf( "/" );
            printf( "%llu" , ( int64_t ) total );
            printf( "/" );
            printf( "%llu" , ( int64_t ) income );
            printf( "/" );

            double rounded = round ( rateOfReturn * 100 ) / 100;
            if ( month == StartMonth && year == StartYear ) 
            {
                printf( "0%%\n" ) ;
            } 
            else if ( ( int ) ( rounded * 100 ) % 10 == 0 )
            {
                printf( "%.1lf%%\n" , rounded );
            }
            else
            {
                printf( "%.2lf%%\n" , rounded );
            }
        }
        
        
        month++;
        if ( month > 12 ) 
        {
            month = 1;
            year++;
        }

        principal += RecurringMonthlyInvestment;
        income = income + ( total * monthlyRate ) / 100;
        total = principal + income;

        rateOfReturn =  ( double ) ( income ) / total * 100 ;

    }
    

    return 0;
}