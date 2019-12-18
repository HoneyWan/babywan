// 输出字符中每个大写字母的个数
#include <stdio.h>
#include <ctype.h>
void main()
{
    int num[26], i;
    char c;
    'A';
    for (i = 0; i < 26; i++)
        num[i] = 0;
    while ( ( c = getchar() ) /*(1)*/!= '#') /* 统计从终端输入的大写字母个数*/
    {
        if (isupper(c))
            num[c - 65] += 1; // (2)
    } 
    for (i = 0; i < 26; i++) /* 输出大写字母和该字母的个数*/
    {
        if (num[i])
        {
            printf("%c:%d\n", i + 65/*(3)*/, num[i]);
        }
    }
}
