#include<stdio.h>
int main(void)
{
        printf( "1 2 3\n" 
                "4 5 6\n"
                "7 8 9\n");
        int a[3][3] = {
                {1,2,3},
                {4,5,6},
                {7,8,9}
        };
        int i,j;
        int sum = 0;
        for ( i = 0; i <3 ; i ++)
        {
                for( j = i ; j <= i ; j ++)
                {
                        sum = sum + a[i][j];
                }
        }
        printf("这个三位数组对角线之和为:%d\n",sum);
        return 0;
}
