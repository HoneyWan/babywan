// ʵѵ4��6����ӳ���
#include <stdio.h>
int main(void)
{
    int peach = 1;
    int index;
    for ( index = 10; index > 0; index -- )
    {
        peach = peach + 1;
        peach = peach * 2;
    }
    printf("%d��ǰ��%d������\n", index, peach);
    system("pause");
    return 0;
}