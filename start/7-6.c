#include<stdio.h>
#define Month 12
int main(void)
{
        printf("打印每个月份的天数:\n");
        int Years[Month] = {31,28,31,30,31,30,31,31,30,31,30,31};
        int i;
        for ( i = 0; i < Month; i ++ )
        {
                printf("Month %d has %d day\n",i+1,Years[i]);
                
        }
        return 0;
}
