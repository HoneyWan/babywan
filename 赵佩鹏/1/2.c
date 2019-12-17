#include <stdio.h>
void main()
{
    float a1, a2;
    double b1, b2;
    int c1, c2;
    unsigned int d1, d2;
    long f1, f2;
    a1 = 3.65;
    a2 = -6.123456789;
    b1 = 3456.98765;
    b2 = -6.123456789;
    c1 = -50;
    c2 = 32768;
    d1 = -50;
    d2 = 32768;
    f1 = 50000;
    f2 = 50000L;
    printf("a1=%f,a2=%f\n a1=%8.10f,a2=%8.10f\n a1=%e,a2=%e\n", a1, a2, a1, a2, a1, a2);
    printf("b1=%f,b2=%f\n b1=%8.10f,b2=%8.10f\n b1=%e,b2=%e\n", b1, b2, b1, b2, b1, b2);
    printf("c1=%d,c2=%d\n", c1, c2);
    printf("d1=%u,d2=%u\n", d1, d2);
    printf("f1=%ld,f2=%ld\n", f1, f2);
    getchar();
    return 0;
}