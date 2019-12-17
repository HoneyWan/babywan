#include <stdio.h>
#include <windows.h>
int main()
{
    float a, b, c, s, v;
    printf("input a,b,c:");
    scanf("%f%f%f", &a, &b, &c);
    s = a * b;
    v = a * b * c;
    printf("a = %.6f  b = %.6f,c = %.6f\n", a, b, c);
    printf("s = %.6f,v = %.6f\n", s, v);
    system("pause");
    // getchar();
    // getchar();
    return 0;
}
