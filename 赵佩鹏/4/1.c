#include <stdio.h>
void main()
{
    int s, i;
    s = 0; /*  第5行 */
    for (i = 1; i <= 100; i ++)
        s = s + i;
    /*
    s = 0;
    i = 1;
    while(i <= 100)
    {
        s = s + i;
        i ++;
    }
    */
    printf("1+...+100=%d\n", s);
}
