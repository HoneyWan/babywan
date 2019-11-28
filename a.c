#include<stdio.h>
int main(void)
{
        printf("请输入三行英文:\n");
        
        char n[3][80];
        gets(n[0]);
        gets(n[1]);
        gets(n[2]);
        int big,small,space;
        int t,y,i;
        big = 0,small = 0,space = 0;
        printf("请选择需要判断第几行:");
        scanf("%d", &t);
        t =t-1;
        for ( y = 0; y < 80 && n[t][y] != '\0'; y ++ )
        {
                if ( n[t][y] >= 'a' && n[t][y] <= 'z')
                {
                        small ++;
                }
                else if ( n[t][y] >= 'A' && n[t][y] <= 'Z' )
                {
                        big ++;
                }
                else if ( n[t][y] == ' ' )
                {
                        space ++;
                }
                
        }
        printf("%d\n%d\n%d\n", small,big,space);
        
        
        return 0;
}
