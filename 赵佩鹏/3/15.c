#include <stdio.h>
void main()
{
    int choice;
    int value;
    printf("Convert:\n"); /* 显示菜单 */
    printf(" 1:decimal to hexadecimal\n ");
    printf(" 2:hexadecimal to decimal\n ");
    printf(" 3:decimal to octal\n ");
    printf(" 4:octal to decimal\n");
    printf("enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: /* 选中1时处理 */
        printf("enter decimal value:");
        scanf("%d", &value);
        printf("%d in hexadecimal is:%x\n", value, value);
        break;
    case 2: /* 选中2时处理 */
        printf("enter hexadecimal value:");
        scanf("%x", &value);
        printf("%x in decimal is:%d\n", value, value);
        break;
    case 3: /* 选中3时处理 */
        printf("enter decimal value:");
        scanf("%d", &value);
        printf("%d in octal is:%o\n", value, value);
        break;
    case 4: /* 选中4时处理 */
        printf("enter octal value:");
        scanf("%o", &value);
        printf("%o in decimal is:%d\n", value, value);
        break;
    }
    system("pause");
}