#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE * fp;
    fp = fopen("a.txt", "r");
    if ( fp == NULL )
    {
        printf("Error");
        exit(1);
    }
    char ch;
    ch = getc(fp);
    while ( ch != EOF )
    {
        putc(ch, stdout);
        ch = getc(fp);
    }
    fclose(fp);
    system("pause");
    return 0;
}