#include<stdio.h>
#include<string.h>
int main(void)
{
        char str1[256];
        char str2[256];
        printf("请输入第一个字符串:");
        gets(str1);
        printf("请输入需要连接的第二个字符串(有空格的连接呦!):\n");
        gets(str2);
        strcat(str1," ");
        strcat(str1,str2);
        printf("连接之后的字符串为:%s(呕尼酱)",str1);

        return 0;
}
