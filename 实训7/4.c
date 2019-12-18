// 【程序4】 定义一个含有 30 个整型元素的数组，按顺序分别赋予从 2 开始的偶数；
// 然后按顺序每五个数求出一个平均值，放在另一个数组中并输出。试编程。
#include <stdio.h>
int main(void)
{
    int a[30];
    int b[6];
    int i, j;
    int sum = 0;
    float result;
    for ( i = 1; i <= 30; i ++ )
    {
        a[i-1] = i * 2;
    }
    putchar('\n');
    for ( i = 0; i < 6; i ++ ) // 计算5个数的和，平均值
    {
        for ( j = 0; j < 30; j ++ )
        {
            sum = sum + a[i];
            if ( i%5 == 0)
            {
                b[i] = sum;
                sum = 0;
            }
        }
    }
    for ( i = 0; i < 6; i ++ )
    {
        printf("%d ", b[i] );
    }
    system("pause");
    return 0;
}
