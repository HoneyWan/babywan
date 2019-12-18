#include<stdio.h>
int main(void)
{
        int a[30];
        int b[6];
        int i,j;
        int sum = 0;
        for(i = 1; i <= 30; i++)
        {
                a[i - 1] = i * 2;
        }
        putchar('\n');
        i = 0;
        for(j = 0;j <30 ; j ++)
        {
                sum = sum +a[j];
                if((j+1) % 5 == 0)
                {
                        b[i] = sum / 5;
                        i ++;
                        sum = 0;
                }
        }
        printf("每5个数的平均值分别为:");
        for( i =0; i < 6; i ++)
        {
                printf("%d",b[i]);
        }
        return 0;
}
