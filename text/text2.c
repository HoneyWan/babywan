#include<stdio.h>
int main(void)
{
        int A,B,C;
        printf("请输入你的成绩:");
        scanf("%d",&A);
        A > 90 ? printf("优秀") : A < 60 ? printf("未及格") : printf("及格");
        return 0;
}
