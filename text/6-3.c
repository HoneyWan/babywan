#include <stdio.h>
void main()
{
    void sort(int x[], int n); // 定义函数
    int i, k;
    int s[100], j; // 匹配相应类型，因为函数里是int类型
    printf(" Input number : \n");
    for (i = 0; scanf("%d", &j); i++) // 输入不是数字的时候停止输入，开始排序
        s[i] = j;
    sort(s, i);
    for (k = 0; k < i; k++)
        printf("%d ", s[k]);
    printf("\n");
    system("pause");
}
void sort(int x[], int n)
{
    int i, j, temp, min;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (x[j] < x[min])
                min = j;
        if (min != i)
        {
            temp = x[i];
            x[i] = x[min];
            x[min] = temp;
        }
    }
}
