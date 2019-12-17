#include<stdio.h>
int main(void)
{
       int n,s,z,y;
       z = 1;
       for( n = 0; n < 9; n ++)
       {
               s = (z + 1) * 2;
               y = s;
               z = y;
       }
       printf("%d",z);
        return 0;
}
