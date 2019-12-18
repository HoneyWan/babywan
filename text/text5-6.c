#include<stdio.h>
int main(void)
{
        float x[1000],sum = 0.0,ave,a;
        int n= 0,i;
        printf("Enter mark:\n");
        scanf("%f",&a);
        while( a > 0.0 && n < 1000)
        {
                sum += a;
                x[n]= a;
                n ++;
                scanf("%f",&a);
        }
        ave = sum / n ;
        printf("Outpout\n");
        printf("ave = %f\n",ave);
        for( i = 0 ;i < n ;i ++)
        {
                if( x[i] < ave )
                {
                    printf("%f\n",x[i]);
                }
        }
        return 0;
}
