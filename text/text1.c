#include<stdio.h>
int main(void)
{
        int x,y,z;
        x = y = z = 3;
        y = x + 1;printf("%4d%4d",x,y);
        y = ++x - 1;printf("%4d%4d",x,y);
        y = z -+ 1;printf("%4d%4d",z,y);
        y = --z + 1;printf("%4d%4d",z,y);






        return 0;
}
