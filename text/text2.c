#include<stdio.h>
int main(void)
{
        int A,B,C;
        printf("请输入你的成绩:");
        scanf("%d",&A);
        A > 90 ? printf("a") : A < 60 ? printf("b") : printf("c");
        return 0;
}
