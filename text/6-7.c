#include "stdio.h"
#define N 2
#define M N + 1
#define NUM (M + 1) * M / 2
main()
{
    int i, n = 0;
    for (i = 1; i <= NUM; i++)
    {
        n++;
        printf("%d\n", n);
    }
    printf("\n");
}