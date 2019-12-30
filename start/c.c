#include<stdio.h>
int main( void )
{
        int ch[ 6 ] = { 1, 2, 3, 4, 5, 6};
        int i;
        printf("请输入你想要访问的字符讯号( 0-5 ):");
        scanf("%d",&i);
        if( i >= 0 && i <= 5)
        printf( "%d\n",ch[ i ]);
        else
                printf( "输入错误:");
        return 0;
}
