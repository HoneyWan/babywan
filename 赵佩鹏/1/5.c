#include <stdio.h>
void main()
{
    int x, y, z;
    x = y = z = 1;
    ++x && ++y || -z;
    printf("x=%d,y=%d,z=%d\n", x, y, z);
    -x || ++y &&z++;
    printf("x=%d,y=%d,z=%d\n", x, y, z);
    -x && -y || ++z;
    printf("x=%d,y=%d,z=%d\n", x, y, z);
    -x || -y || -z;
    printf("x=%d,y=%d,z=%d\n", x, y, z);
    getchar();
    return 0;
}