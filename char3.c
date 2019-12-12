#include<stdio.h>
#include<string.h>
#define MAX 1024
int main(void)
{
        char str[MAX];
        char str1[MAX];
        char *target1 = str;
        char *target2 = str1;
        char ch;
        int index = 0,n;
        printf("请输入一个字符串来与另一个字符串比较是否相同:");
        fgets(str,MAX,stdin);
        printf("请输入需要对比的字符串:");
        fgets(str1,MAX,stdin);
        printf("请问需要对比几个字符:");
        scanf("%d",&n);
        while( n  && *target1 != '\0' && *target2 != '\0')
        {
                ch = *target1;
                if( ch < 0 )
                {
                        if( *target1 ++ != *target2 ++ || *target1 ++ != *target2 ++)
                        {
                                break;
                        }
                }
                if( *target1 ++ != *target2 ++ )
                {
                        break;
                }
                index ++;
                n --;
        }
        if((n == 0) || ( *target1 == '\0' && *target2 == '\0'))
        {
                printf("两个字符串前%d个字符完全相同\n",index);
        }
        else
        {
                printf("两个字符串并不相同,第%d个字符出现不同",index);
        }












        /* while( *target1 != '\0' && *target2 != '\0') */
        /* { */
        /*         if( *target1 ++ != *target2 ++) */
        /*         { */
        /*                 break; */
        /*         } */
        /*         index ++; */
        /* } */
        /* if(*target1 == '\0' && *target2 == '\0') */
        /* { */
        /*         printf("两个字符串完全一致"); */
        /* } */
        /* else */
        /* { */
        /*         printf("两个字符串并不相同,且第%d个字符不同",index); */
        /* } */








        /* if(!strcmp(str,str1 )) */
        /* { */
        /*         printf("这两个字符串完全一致"); */
        /* } */
        /* else */
        /* { */
        /*         printf("两个字符串并不相同,第%d个字符出现不同"); */
        /* } */
        return 0;
}
