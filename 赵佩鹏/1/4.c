#include <stdio.h>
void main()
{
    int x, y, z;
    x = 4;
    y = 5;
    z = 0;
    x += y += z;
    printf("x<y:%d\n", x > y);
    z = y = x++ * 10;
    printf("y>=z:%d,z=%d\n", y >= z, z);
    x = y > z >= 8;
    printf("x=%d,y=%d,,z=%d\n", x, y, z);
    getchar();
    return 0;
}