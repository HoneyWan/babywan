//(1)
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    scanf("%d", &i);
    n = i;
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    printf("sum=%d", sum);
}


//(2)
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    scanf("%d", &i);
    n = i;
    do
    {
        sum += i;
        i++;
    } while (i <= 10);
    printf("sum=%d", sum);
}
