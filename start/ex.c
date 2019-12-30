#include<stdio.h>
int max( int a, int b)
{
        int max;
        max = a > b ? a:b;
        return max;
}
int main(void)
{
        int n,m;
        printf("请输入两个数来比较大小:");
        scanf("%d%d", &n,&m);
        m = max(n,m);
        printf("%d", m);
        
        return 0;
}
