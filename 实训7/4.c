// 【程序4】 定义一个含有 30 个整型元素的数组，按顺序分别赋予从 2 开始的偶数；
// 然后按顺序每五个数求出一个平均值，放在另一个数组中并输出。试编程。
#include <stdio.h>
int main(void)
{
    int a[30];
    int b[6];
    int i, j;
    int sum = 0;
    for ( i = 1; i <= 30; i ++ ) // 进行赋值
    {
        a[i-1] = i * 2;
    }
    putchar('\n');
    i = 0;
    for ( j = 0; j < 30; j ++ ) // 累加数组a，计算平均值
    {
        sum = sum + a[j];
        if ( (j + 1 ) % 5 == 0)
        {
            b[i] = sum / 5; // 赋值给另一个数组
            i ++;
            sum = 0; // 清空累加值，进行下一次累加
        }
    }
    printf("每5个数的平均值分别是："); // 输出
    for ( i = 0; i < 6; i ++ )
    {
        printf("%d ", b[i] );
    }
    return 0;
}
