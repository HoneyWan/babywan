#include<stdio.h>
int main(void)
{
        int a,b,c;
        a = 1,b = 2,c = 3;
        printf("%d\n",b>c?b++:c++);
        printf("%d\n",b>c?b++:c++);
        /* a<b?printf("%d\n",c):printf("%d",b); */
        if ( a< b )
        {
                printf("%d\n", c);
        }
        else
        {
                printf("%d", b);
        }
        

        return 0;
}
