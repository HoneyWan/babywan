#include <stdio.h>
void main()
{
    int i;
    int s[10], max;
    /*  Findmax()函数的申明 */
    int Findmax( int x[], int n);
    printf("Input 10 number : \n");
    /* 输入10个数据到s数组中 */
    for ( i = 0; i < 10; i ++ )
    {
        printf("请输入第%d个数：", i + 1);
        scanf("%d", &s[i]);
    }
    /* 调用Findmax函数 */
    max = Findmax( s, 10);
    for (i = 0; i < 10; i++)
        printf("%4d", s[i]);
    printf("\nthe  max  is %d ", max);
    system("pause");
}
int Findmax(int x[], int n)
{
    int max, i;
    max = x[0];
    for (i = 1; i < n; i++)
        if (max < x[i])
            max = x[i];
    return max;
}
