// 【程序5】 有两个小组，分别有5人和7人，调用average函数，分别求这两个组的学生的平均成绩。
#include <stdio.h>
float average( int [], int );
int main(void)
{
    int a[5];
    int b[7];
    float ave1 = 0.0, ave2 = 0.0;
    int i;
    printf("请输入第一个小组学生的成绩：\n");
    for ( i = 0; i < 5; i ++ )
    {
        scanf("%d", &a[i] );
    }
    printf("请输入第二个小组学生的成绩：\n");
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &b[i]);
    }
    ave1 = average( a, 5 );
    ave2 = average( b, 7 );
    printf("第一个小组学生的平均成绩：%f\n第二个小组学生的平均成绩：%f\n", ave1, ave2);
    return 0;
}
float average( int c[], int n )
{
    float ave = 0.0;
    int i, sum;
    for ( i = 0; i < n; i ++ )
    {
        sum = sum + c[i];
    }
    ave = (float) sum / n;
    return ave;
}