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
    int sum2 = 0;
    int sum = 0;
    for ( i = 0; i < 3; i ++)
    {
        for ( j = i; j <= i; j ++ )
        {
            sum = sum + a[i][j]; // 9+5+1
        }
    }
    for ( i = 2; i >= 0; i -- )
    {
        for ( j = i; j <= i; j ++ )
        {
                sum2 = sum2 + a[j][i]; // 7+5+3
        }
    }
    
    printf("对角线之和是%d 和 %d\n", sum, sum2);
}
