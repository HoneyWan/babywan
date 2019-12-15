#include<stdio.h>
#include<string.h>
int main(void)
{
        int i,n;
        char str1[256];
        char str2[256];
        printf("请输入第一个字符串:");
        gets(str1);
        printf("请输入需要连接的第二个字符串(有空格的连接呦!):\n");
        gets(str2);
        printf("请选择需要连接几个字符:");
        scanf("%d",&i);
        printf("按照你的要求,需要连接的字符为:");
        for(n = 0; n < i; n ++)
        {
                printf("%c",str2[n]);
        }
        strcat(str1," ");
        strncat(str1,str2,n);
        printf("连接之后的内容为:%s\n",str1);
        /* strcat(str1," "); */
        /* strcat(str1,str2); */
        /* printf("连接之后的字符串为:%s(呕尼酱)",str1); */

        return 0;
}
