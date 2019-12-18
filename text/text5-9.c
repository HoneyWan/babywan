#include<stdio.h>
void main()
{
        char str1[100],str2[100];
        int i,s;
        printf("\n Input string 1:\n");
        gets(str1);
        printf("\n Input string 2:\n");
        gets(str2);
        i = 0;
        while((str1[i] == str2[i]) && (str1[i] != '\0'))
                i ++;
        s = str2[i - 1] - str1[i];
        printf("%d\n",s);
        return 0;
}
