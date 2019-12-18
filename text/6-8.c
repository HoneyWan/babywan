#define POWER(x) ((x) * (x))
#define MAX(x, y) (x) > (y) ? (x) : (y)
#define PR printf
#include <stdio.h>
void main()
{
    int a, b, c, d, x;
    a = 5;
    b = 10;
    x = 200;
    c = POWER(a + b);
    x = x / POWER(a + b);
    d = MAX(a + 6, b);
    PR(" c=%d,d=%d,x=%d \n", c, d, x);
}