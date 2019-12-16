#include<stdio.h>
#include<math.h>
int main(void)
{
        float x,y;
        printf("请输入一个单精度浮点型:");
        scanf("%f",&x);
        if( x >= 0 && x <= 1)
        {
                y = exp( sqrt (x) ) - 1;
        }
        else if(x >= 3 && x <= 4)
        {
                y = abs(  x ) + 1;
        }
        else
        {
                y = sin(x * x);
        }
        printf("x = %f, y = %f",x,y);
        return 0;
}
