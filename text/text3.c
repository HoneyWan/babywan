#include<stdio.h>
int main(void)
{
        float a,b,c,s,v;
        printf("input a,b,c:\n");
        scanf("%f%f%f",&a,&b,&c);
        s = a * b;
        v = a * b * c;
        printf("a = %f b = %f c = %f\n",a,b,c);
        printf("s = %f, v = %f",s,v);
        return 0;
}

