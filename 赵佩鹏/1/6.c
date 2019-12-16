#include <stdio.h>
int main()
{
    int a, b, c;
    a = 1;
    b = 2;
    c = 3;
    printf("%d\n", b > c ? b++ : c++);
    printf("%d\n", b > c ? b++ : c++);
    //a < b ? printf("%d\n", c) : printf("%d", b);
    printf("%d\n",a<b?c:b);
    getchar();
    return 0;
}