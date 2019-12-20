// 【程序1】 题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少?
// 程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去掉不满足条件的排列。
#include <stdio.h>
int main(void)
{
    int i, u, k;
    int num, count = 0;
    for ( i = 1; i <= 4; i ++ ) // 使用循环找数
    {
        for ( u = 1; u <= 4; u ++ )
        {
            for ( k = 1; k <= 4; k ++ )
            {
                if ( i != u && i != k && k != u ) // 互不相同的条件
                {
                    num = i * 100 + u * 10 + k;
                    printf("num = %d\n", num);
                    count++; // 计数
                } 
            }
        }
    }
    printf("Total counts : %d\n", count);
    return 0;
}
