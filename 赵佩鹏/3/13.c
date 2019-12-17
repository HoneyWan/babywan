#include <stdio.h>
#include <math.h>
int main(void)
{

    float x, y;
    scanf("%f", &x);
    if ( 0 <= x && x <= 1 )
        y = exp(sqrt(x));
    else if ( 3 <= x && x <= 4 )
        y = fabs(x) + 2;
    else
        y = sin(pow(x, 2));
    printf("x = %f, y = %f\n", x, y);
    return 0;
}
