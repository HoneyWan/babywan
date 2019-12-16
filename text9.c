#include<stdio.h>
int main(void)
{
        int s,i;
        s = 0;
        i = 1;
        while( i <= 100 )
        {
                s = s + i;
                i ++;
        }
        printf("%d",s);

        










        /* int s,i; */
        /* s = 0; */
        /* for( i = 0; i <= 100; i ++) */
        /* { */
        /*         s = s + i; */
        /*         printf("1 + ... + 100 = %d\n",s); */
        /* } */
        return 0;
}
