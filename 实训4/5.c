#include<stdio.h>
int main(void)
{
        int num;
        int min_primer; // 最小的质数
        int n=0;
        scanf("%d", &num);
        for ( min_primer = 2;  min_primer * min_primer < num; min_primer ++ )
        {
                if ( (num % min_primer) == 0 )
                {
                        /* printf("primer = %d", min_primer); */
                        n=min_primer;
                        break;
                }
        }
        if ( n!= 0)
        {
                printf("%d=",num);
                while ( num!=n )
                {
                        if ( num%n==0 )
                        {
                                printf("%d*",n);
                                num=num/n;       
                        }
                        else
                                n++;
                        if ( num==n )
                        {
                            printf("%d",n);
                        }
                }
                
        }
        else
        {
                printf("meiyou zhi yinshu");
        }
        /* printf("min_primer = %d", min_primer); */
        return 0;
}
