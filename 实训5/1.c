#include <stdio.h>
#define N 10
void main()
{
    int i, a[N], av;
    for (i = 0; i < N; i++)
        // 之前
        // scanf("%d",a[i])；
        // 改正后
        scanf("%d", &a[i]);
    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
        if (i % 3 == 0)
            printf("\n");
    }
    // 之前
    // for(i=0；i!=N；i++)
    // 改正后
    for (i = 0; i < N; i++)
        av += a[i];
    // 之前
    // printf("av=%f\n",av)；
    // 改正后
    printf("av = %f\n", (float)av / 10.0);
    system("pause");
}
// 有中文分号，已改正
// 输入的scanf语句少了&符号，已改正
// 累加的for循环中条件错误，已改正
// 输出平均值没有计算且类型有问题，已改正