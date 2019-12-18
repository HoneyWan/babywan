#include <stdio.h>
void main()
{
    // 进制转换，10转2，8，16
    int m, k;
    void dtoo(int n, int r);
    printf("Pleae input the decimal number:");
    scanf("%d", &m);
    printf("\nPlease input  a number  in (2,8,16):");
    scanf("%d", &k);
    dtoo(m, k);
    system("pause");
}
void dtoo(int n, int r)
{
    if (n >= r)
        dtoo(n / r, r);
    printf("%d", n % r);
}
