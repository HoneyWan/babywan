#include<stdio.h>
#include<string.h>
int main(void)
{
        char a[10],b[10];
        int c,d,k,ch;
        scanf("%s",a);
        scanf("%s",b);
        printf("a = %s, b = %s\n",a,b);
        c = strlen(a);
        d = strlen(b);
        if(c > d)
        {
                for ( k = 0; k < c ;k ++)
                {
                        ch = a[k];
                        a[k] = b[k];
                        b[k] = ch;
                }
                        printf("a = %s\n",a);
                        printf("b = %s\n",b);
        }
        return 0;
}
