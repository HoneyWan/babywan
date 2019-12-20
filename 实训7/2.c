// 【程序2】 题目：输入某年某月某日，判断这一天是这一年的第几天？
// 程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天
// 特殊情况，闰年且输入月份大于3时需考虑多加一天。
#include <stdio.h>
int main(void)
{
        int year, month, day, days = 0;
        int a[12] = { 31, 28, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        printf("请输入一个日期（格式示例2019 03 05）：");
        scanf("%d%d%d", &year, &month, &day); // 输入日期
        if ( (year % 4 == 0 && year % 100 != 0 || year % 100 == 0 || year % 400 == 0) && month >= 2 )
        {
                days = days + day;
                for ( int i = 0; i < month - 1; i ++ )
                {
                        days = days + a[i];
                }
                days = days + 1;
        }
        else
        {
                for ( int i = 0; i < month - 1; i ++ )
                {
                        days = days + a[i];
                }
                days = days + day;
        }
        printf("Days = %d\n", days);
        return 0;
}
