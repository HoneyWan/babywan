#include <stdio.h>
void main()
{
    int i, a[5], sum = 0;
    // 之前
    // scanf("%d,%d,%d,%d,%d", a);
    // 改正后
    for ( i = 0; i < 5; i ++ )
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 4; i++)
        sum += a[i];
    printf("sum = %d \n", sum);
}
// 输入数据时错误
