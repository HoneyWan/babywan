// 【程序2】 题目：输入某年某月某日，判断这一天是这一年的第几天？
// 程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天
// 特殊情况，闰年且输入月份大于3时需考虑多加一天。
#include <stdio.h>
int main(void)
{
    int year, month, day;
    printf("请输入一个日期（格式示例2019 03 05）：");
    scanf("%d%d%d", &year, &month, &day); // 输入日期
    //if ( ) // 判断闰年
    //printf("year = %d, month = %d, day = %d\n", year, month, day );
    system("pause");
    return 0;
}