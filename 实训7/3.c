// 【程序3】 题目：有一分数序列：2/1  3/2  5/3  8/5  13/8  21/13...
// 求出这个数列的前20项之和。
#include <stdio.h>
int main(void)
{
    int a = 2, b = 1, i;
    float result, c = 0;
    for ( i = 0; i < 20; i ++) // 循环相加
    {
        c = (float) a / b;
        result = result + c; // 计算结果
        a = a + b; // 分数的规律
        b = a - b;
    }
    printf("Result = %f\n", result);
    return 0;
}
