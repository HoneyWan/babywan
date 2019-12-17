// 从键盘输入一个数，输出与该值相同的数组元素下标
#include <stdio.h>
void main()
{
    int a[10] = {4, 8, 1, 2, 6, 5, 0, 9, 7, 3};
    int n, i, k;
    printf("请输入一个数：");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (n == a[i])
        {
            k = 1;
            break;
        }
        else
        {
            k = -1;
        }
    }
    if (k == 1)
    {
        printf("找到与%d相同的数组下标是：%d\n", n, i);
    }
    else
    {
        printf("没有找到%d\n", n);
    }
    system("pause");
}