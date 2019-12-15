#include<stdio.h>
#include<string.h>
int main(void)
{
        char *array[5] = { "FishC", "Five", "Star", "Good", "WoW"};
        char *(*p)[5] = &array;
        int i,j;
        for(i = 0; i < 5; i ++)
        {
                for(j = 0 ; j < 5 ; j ++)
                {
                        if(i > strlen((*p)[j]) - 1)
                        {
                                break;
                        }
                        printf("%c",(*p)[j][i]);
                }
                printf("\n");
                
        }


























        /* char *array[5] = { "FishC", "Five", "Star","Good","WoW"}; */
        /* char *(*p)[5] = &array; */
        /* int i,j; */
        /* for(i = 0; i < 5 ; i ++) */
        /* { */
        /*         for(j = 0; (*p)[i][j] != '\0'; j ++) */
        /*         { */
        /*                 printf("%c",(*p)[i][j]); */
        /*         } */
        /*         printf("\n"); */
        /* } */
        return 0;
}
