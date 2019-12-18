#include<stdio.h>
int main(void)
{
        int i,x,k = -1;
        int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        printf("请输入一个整数来从数组中找出相对应的下标:");
        scanf("%d",&x);
        for( i = 0; i < 10 ; i ++)
        {
                if( x == a[i])
                {
                        k = 1;
                        break;
                }
        }
        if( k == 1)
        {
                printf("k = %d ,且%d相对应的下标为:%d",k,x,i);
        }
        else
        {
                printf("你输入的值不在这个数组范围内");
        }
        return 0;
}
