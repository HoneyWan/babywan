
#include <stdio.h>
int main(void)
{
    int peach = 1;
    int index;
    for ( index = 0; index < 10; index ++ )
    {
        peach = peach + 1;
        peach = peach * 2;
    }
    printf("%d天前有%d个桃子\n", index, peach);
    return 0;
}
