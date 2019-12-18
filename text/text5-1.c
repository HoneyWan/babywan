#include<stdio.h>
#define N 10
void main()
{
        int i,av;
        int a[N];
        for( i = 0 ; i < N ; i ++)
                scanf("%d",&a[i]);
        for( i = 0; i < N ; i ++)
        {
                printf("%d",a[i]);
                if( i % 3 == 0)
                        printf("\n");
        }
        for( i = 0; i < N ; i ++)
                av += a[i];
        printf("av=%f\n",(float)av / 10.0);
        return 0;
}
