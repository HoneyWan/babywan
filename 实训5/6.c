// 统计成绩，计算平均成绩，输出低于平均成绩的，复数结束
#include <stdio.h>
void main()
{
    float x[100], sum = 0.0, ave, a;
    int n = 0, i;
    printf("输入学生成绩(0-100之间):\n输入负数退出");
    scanf("%f", &a);
    while ( a >= 0.0 && a <= 100.00 )
    {
        sum += a; // 累加成绩
        x[n] = a;
        n ++;
        scanf("%f", &a);
    }
    ave = sum / n; // 计算平均成绩
    printf("ave = %f\n", ave);
    for ( i = 0; i < n; i ++ )
    {
        if ( x[i] < ave ) // 找出低于平均成绩的数，打印
        {
            printf("%f\n", x[i] );
        }
    }
    system("pause");
}