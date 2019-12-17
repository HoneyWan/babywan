#include <stdio.h>
void main()
{
    long data;
    scanf("%ld", &data);
    while (data)
    {
        printf("%ld,", data % 10);
        data = data / 10;
    }
}
