#include<stdio.h>
#include<ctype.h>
void main()
{
        int num[26],i;
        char c;
        for(i = 0 ; i < 26 ; i ++)
                num[i] = 0;
        while( (c = getchar()) != '#')
                if( isupper(c))
                        num[c - 65] += 1;
        for ( i = 0; i < 26; i++ )
                if (num[i])
                        printf("%c:%d\n",i + 65,num[i]);
        return 0;
}
