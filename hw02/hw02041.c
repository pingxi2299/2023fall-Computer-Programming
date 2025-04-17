#include <stdio.h>

int main() {
    double principal = 50000.0; // 初始本金
    double monthly_contribution = 4000.0; // 每月投入金額
    int start_month = 12; // 開始月份
    int start_year = 2023; // 開始年份
    int end_month = 8; // 結束月份
    int end_year = 2043; // 結束年份
    double annual_rate_of_return = 0.12; // 年化報酬率（以小數表示）

    int current_month = start_month;
    int current_year = start_year;
    double current_balance = principal;

    while (current_year < end_year || (current_year == end_year && current_month <= end_month)) 
    {
        double monthly_return = current_balance * (annual_rate_of_return / 12);
        current_balance += monthly_return + monthly_contribution;

        printf("%d.%02d) %.2lf/%.2lf/%.2lf/%.2lf%%\n", current_year, current_month, principal, current_balance, monthly_return, (monthly_return / principal) * 100);

        current_month++;
        if (current_month > 12) {
            current_month = 1;
            current_year++;
        }
        principal += monthly_contribution;
    }

    return 0;
}



