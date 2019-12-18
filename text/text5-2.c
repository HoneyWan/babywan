#include<stdio.h>
void main()
{
        int i,a[5];
        int sum = 0;
        for( i = 0; i <= 4; i ++)//地址符,且数组只能一个一个读取
        {
                scanf("%d",&a[i]);
        }
        for ( i = 0 ; i < 5 ; i ++)
        {
                sum += a[i];
        }
        printf("sum = %d\n",sum);
        return 0;
}
