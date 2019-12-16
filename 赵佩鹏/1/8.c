#include <stdio.h>
void main()
{
    int score;
    printf("please input a score\n");
    scanf("%d", &score);
    printf("%c\n", score >= 90 ? 'A' : score >= 60 ? 'B' : 'C');
    system("pause");
    return 0;
}