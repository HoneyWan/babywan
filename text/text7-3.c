#include<stdio.h>
int main(void)
{
        int a = 2 , b = 1,i;
        float result,c = 0;
        for (i = 0; i < 20; i ++)
        {
                c = (float)a / b;
                result = result + c;
                a = a + b;
                b = a - b;
        }
        printf("Result = %f\n",result);
        return 0;
}
