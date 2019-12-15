#include<stdio.h>
#include<string.h>
int main(void)
{
        int i,n,y;
        char str2[n];
        char str1[256];
        printf("请输入一个字符串放在str1字符串数组中:");
        fgets(str1,256,stdin);
        printf("你需要把str1中的前几个字符拷贝到str2中去？\n:");
        scanf("%d",&y);
        printf("按照你的要求,拷贝至str2里面的内容为:\n");
        strncpy(str2,str1, y);
        for( i = 0; i < y; y ++)
        {
                printf("%c",str1[y]);
        }
        printf("现在str2的内容为%s\n",str2);
        
        /* printf("开始拷贝str1中你所选定的内容范围至str2中..."); */
        /* strcpy(str2,str1); */
        /* printf("拷贝完毕!,现在str2的内容是%s",str2); */
        return 0;
}
