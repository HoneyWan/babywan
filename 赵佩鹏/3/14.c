#include <stdio.h>
int main(void)
{
    float y, x;
    printf("Enter x value:");
    scanf("%f", &x);
    if ( x < 1 )
    {
        y = x;
    }
    else if ( 1 <= x && x < 10 )
    {
        y = 2 * x - 1;
    }
    else
    {
        y = 3 * x - 11;
    }
    printf("y = %.3f\n", y);
    return 0;
}
