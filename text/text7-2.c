//求某年的第几天
#include<stdio.h>
int main(void)
{
        int year,month,day,i,n,days = 0;
        int mon[12] = { 31, 28 ,31 ,30 ,31 ,30 ,31 ,31 ,30 ,31 , 30 ,31};
        printf("请输入年月日(用空格隔开)");
        scanf("%d%d%d",&year,&month,&day);
        if( year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
                if(month > 2)
                {
                        mon[1] += 1;
                        for( i = 0; i < month - 1 ; i ++)
                        {
                                days = mon[i] + days;
                        }
                        days = days + day;
                        printf("%d",days);
                }
                else
                {
                        if( month == 1)
                        {
                                days = day;
                                printf("%d",days);
                        }
                        else
                        {
                                days = 31 + day;
                        }
                }
        }
        else
        {
                for( i = 0; i < month - 1; i ++)
                {
                        days = mon[i] + days;
                }
                days = days + day;
                printf("%d",days);
        }

        return 0;
}
