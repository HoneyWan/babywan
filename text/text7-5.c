#include<stdio.h>
#include<string.h>
int average( int n[], int m[])
{
        int num = 0,num2 = 0,i,k;
        for( i = 0; i < 5 ; i ++)
        {
                scanf("%d",&n[i]);
        }
        for ( k = 0; k < 7 ; k ++)
        {
                scanf("%d",&m[k]);
        }
        for ( i = 0; i < 5 ; i ++)
        {
                num = n[i] + num;
        }
        for( k = 0; k < 7 ; k ++)
        {
                num2 = m[k] + num2;
        }
        num = num / 5;
        num2 = num2 / 7;
        printf("第一个数组的平均值为:%d,第二个:%d",num,num2);
}
int main(void)
{
        int i[5],k[7];
        /* printf("请输入几个数来平均数:"); */
        /* for(z = 0 ; z < 5 ; z ++) */
        /* { */
        /*         scanf("%d",&z); */
        /* } */
        /* printf("请输入另外几个数:"); */
        /* for( k = 0; k < 7 ; k ++) */
        /* { */
        /*         scanf("%d",&k); */
        /* } */
        average(i,k);
        return 0;
}
