// 求一个3*3 矩阵对角线元素之和
#include <stdio.h>
void main()
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int i,j;
    int sum = 0;
    for ( i = 0; i < 3; i ++)
    {
        for ( j = i; j <= i; j ++ )
        {
            sum = sum + a[i][j];
        }
    }
    printf("对角线之和是%d\n", sum);
    system("pause");
}