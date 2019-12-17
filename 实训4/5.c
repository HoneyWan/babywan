#include<stdio.h>
int main(void)
{
        int num;
        int min_primer; // 最小的质数
        int n=0;
        scanf("%d", &num);
        for ( min_primer = 2;  min_primer * min_primer <= num; min_primer ++ )
        {
                if ( (num % min_primer) == 0 ) // 找到最小质数
                {
                        /* printf("primer = %d", min_primer); */
                        /* n=min_primer; */
                        break;
                }
        }
        if ( min_primer != 0) // 判断有没有找出最小质数
        {
                printf("%d = ",num);
                while ( num != min_primer)
                {
                        if ( num % min_primer == 0 )
                        {
                                printf("%d * ",min_primer);
                                num = num / min_primer;       
                        }
                        else
                                min_primer ++;
                        if ( num == min_primer )
                        {
                            printf("%d",min_primer);
                        }
                }
        }
        else
        {
                printf("meiyou zhi yinshu");
        }
        /* printf("min_primer = %d", min_primer); */
        putchar('\n');
        return 0;
}
