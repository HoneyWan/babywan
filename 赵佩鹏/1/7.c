#include <stdio.h>
void main()
{
    int x=3,y=3,z=3;//(1)
    y = x++ - 1;
    printf("%4d%4d", x, y);//4个字符位
    y = ++x - 1;
    printf("%4d%4d", x, y);
    y = z - +1;
    printf("%4d%4d", z, y);
    y = -z + 1;
    printf("%4d%4d", z, y);
    getchar();
    return 0;
}
zhifu