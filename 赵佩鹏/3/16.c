#include <stdio.h>
int main(void)
{
    int choise;
    printf("Enter a number:");
    scanf("%d", &choise);
    switch ( choise )
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuseday");
            break;
        case 3:
            printf("Wensday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Error!");
            break;
    }
    return 0;
}
