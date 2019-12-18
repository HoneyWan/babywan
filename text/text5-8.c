//连接字符串
#include<stdio.h>
#include<string.h>
void main()
{
        char s1[80],s2[40];
        int i = 0, j = 0;
        printf("\n Please input string1:");
        scanf("%s",s1);
        printf("\n Please input string2;");
        scanf("%s",s2);
        while( s1[i] != '\0')
                        i ++;
        while( s2[j] != '\0')
        s1[i ++ ] = s2[j ++];
        s1[i] = '\0';
        printf("\nNew string:%s",s1);
        return 0;
}
