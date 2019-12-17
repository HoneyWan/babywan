#include <math.h>
#include <stdio.h>
void main()
{
    int m;
    void prime(int n); /* 申明求素数函数 */
    printf("Please input a data m=:");
    scanf("%d", &m);
    prime(m); /* 调用求素数函数 */
}
void prime(int n)
{
    int i, k;
    k = sqrt(n);
    for (i = 2; i <= k; i++)
        if (n % i == 0)
            break;
    if (i >= k + 1)
        printf("This is a prime number");
    else
        printf("This isn't a prime number");
    system("pause");
}
