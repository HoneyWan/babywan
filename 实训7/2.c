// 【程序2】 题目：输入某年某月某日，判断这一天是这一年的第几天？
// 程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天
// 特殊情况，闰年且输入月份大于3时需考虑多加一天。
#include <stdio.h>
int main(void)
{
    int year, month, day, days = 0;
    int a[12] = { 31, 28, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int b[12] = { 31, 29, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    printf("请输入一个日期（格式示例2019 03 05）：");
    scanf("%d%d%d", &year, &month, &day); // 输入日期
    if ( month <= 2 )
    {
        days = 31 + day;
    }
    else
    {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) // 判断闰年
        {
            // 闰年用数组b
            for ( int i = 0; i < month; i ++ )
            {
                days = days + b[i];
            }
            days = days + day;
        }
        else
        {
            // 平年
        }
    }
    //printf("year = %d, month = %d, day = %d\n", year, month, day );
    printf("Days = %d\n", days);
    system("pause");
    return 0;
}