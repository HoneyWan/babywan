// 数组中插入一个数
#include <stdio.h>
void main()
{
    int a[] = { 1, 2, 7, 9, 13, 18 };
    int n, i;
    int a_end, a_middle, a_start, a_lenth;
    a_lenth = sizeof(a) / sizeof(a[0]); // 计算出数组的长度
    a_end = a[a_lenth - 1]; // 找到最后那个数
    a_middle = a_lenth / 2; // 找到中间的数
    for ( i = 0; i < a_lenth; i ++ )
    {
        printf("%d ", a[i]);
    }
    printf("Enter a number:");
    scanf("%d", &n);
    if ( n > a_end )
    {
        a_lenth = a_lenth + 1;
        a[a_lenth - 1] = n; 
    }
    else if ( n > a[a_middle])
    {
        // printf("%d", a[a_lenth / 2 - 1]); // a[2] = 7
        // 往后移动一位
        a_lenth = a_lenth + 1;
        for ( i = 1; i < a_middle; i ++ )
        {
            // 存放原来的数int a[] = { 1, 2, 7, 9, 13, 18 };
            //            int a[] = { 1, 2, 7, 8, 9, 13, 18 };
            a[a_lenth] = a[a_lenth - i];// 最后一个数
            printf("%d ", a[a_lenth]);
            a_lenth = a_lenth - i;
            
        }
    }


    for ( i = 0; i < a_lenth; i ++ )
    {
        printf("%d ", a[i]);
    }
    system("pause");
}