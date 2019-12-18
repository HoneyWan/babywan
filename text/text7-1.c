#include<stdio.h>
int main(void)
{
        int a,b,c;
        int num,count = 0;
        for( a = 1; a <=4; a ++)
        {
                for( b = 1; b <= 4; b ++)
                {
                        for ( c = 1 ;c <= 4; c ++)
                        {
                                if( a != b && a != c && c != b)
                                {
                                        num = a * 100 + b * 10 + c;
                                        printf("num + %d\n",num);
                                        count ++;
                                }
                        }
                }
        }
        printf("%d\n",count);
        return 0;
}
