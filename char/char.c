#include<stdio.h>
#include<string.h>
int main(void)
{
        char i = 99,str[i];
        int n,count;
        printf("请输入一个字符串:");
        gets(str);
        printf("你需要打印出其中几个字符:\n");
        scanf("%d",&n);
        printf("按照你的要求，打印出来的字符为:");
        for( i = 0; i < n;i ++)
        {
                printf("%c", str[i]);
        }
        putchar('\n');
        return 0;
}
