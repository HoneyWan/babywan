#include <stdio.h>
#include <string.h>
void main()
{
    char a[10], b[10];
    int c, d, k, ch;
    // 之前 读入字符串输入空格时发生错误
    // 因为scanf遇到空格等字符就停止读入了
    // scanf("%s", a);
    // scanf("%s", b);
    // 改正后
    printf("输入字符串a:");
    gets(a);
    printf("输入字符串b:");
    gets(b);
    printf("a=%s,b=%s\n", a, b);
    c = strlen(a);
    d = strlen(b);
    if (c > d)
        for (k = 0; k < c; k++)
        {
            ch = a[k];
            a[k] = b[k];
            b[k] = ch;
        }
    printf("a=%s\n", a);
    printf("b=%s\n", b);
}
