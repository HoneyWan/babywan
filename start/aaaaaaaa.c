#include<stdio.h>
#include<stdbool.h>
int main(void)
{
        int i,j,n,count,cubed,sum = 0;
        bool result = true;//用于存放验证结果
        char answer;
        printf("请输入一个整数:");
        scanf("%d",&count);
        /* getc(answer, stdin); */

        /* scanf("%c", &answer); */
        /* printf("%c", answer); */
        int array[count][4];
        //变长数组无法再定义初始化
        for( n = 0; n < count ; n ++)
        {
                array[n][0] = 0;//初始化第一列,因为后面用于验证
        }
//检查
        for( n = 0; n < count; n ++)
        {
                if( array[n][0] != 0)
                {
                        result = false;
                        break;
                }
        }
        if(result)
        {
                printf("经验证,3 ～%d 之间所有的整数均符合尼科彻斯定理!\n\n",count);
                printf("是否打印所有式子(y/n):");
                getchar();
                scanf("%c", &answer);
                /* if ( answer == '\n' ) */
                /* { */
                /*         answer = 'y'; */
                /* } */
                printf("%d", answer);
        }
        else
        {
                printf("验证失败:整数 %d 无法找到对应的连续奇数!\n");
        }

        for( n = 3 ; n <= count ; n ++)
        {
                cubed = n * n * n;
                for( i = 1; i < cubed; i += 2)
                {
                        for( j = i; j < cubed; j += 2)
                        {
                                sum += j;
                                if( sum == cubed )
                                {
                                        array[n][0] = cubed;
                                        array[n][1] = i;
                                        array[n][2] = i + 2;
                                        array[n][3] = j;
                                        goto FINDIT;
                                }
                                if( sum > cubed )
                                {
                                        sum = 0;
                                        break;
                                }
                        }
                }
                FINDIT:
                sum = 0;
        }
        if ( answer != 'n' )
        {
                printf("kaishidayin\n");
                for( n = 3; n <= count; n ++)
                {
                        if( array[n][3] - array[n][1] > 4 )
                        {
                                printf("%d^3 == %d == %d + %d +...+ %d\n",n,array[n][0],array[n][1],array[n][2],array[n][3]);
                        }
                        else
                        {
                                printf("%d^3 == %d == %d + %d + %d\n",n,array[n][0],array[n][1],array[n][2],array[n][3]);
                        }
                }
        }
        return 0;
}
