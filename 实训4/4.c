#include <stdio.h>
void main()
{
    int i, j, x;
    for (i = 0, x = 0; i < 2; i++)
    {
        x++;
        for (j = 0; j < 3; j++)
        {
            if (j % 2) // j = 1的时候不执行x++
                continue;
            x++;
        }
        x++;
    }
    printf("x=%d\n", x);
}
