#include <stdio.h>
void main()
{
    char c1, c2;
    int n1, n2;
    c1 = getchar();//一个字符
    c2 = getchar();
    n1 = c1 - '0';//49-48=1
    n2 = n1 * 10 + (c2 - '0');//1*10+(50-48)=12
    printf("%d\n", n2);
    system("pause");
    return 0;
}