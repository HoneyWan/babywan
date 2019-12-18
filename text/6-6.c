#include <stdio.h>
void main()
{
    int i;
    int f(int);
    for (i = 1; i <= 5; i++)
        printf("(%d):% d\n", i, f(i));
    printf(" \n");
}
int f(int n)
{
    static int j = 1;
    j = j * n;
    return (j);
}
