#define LOW 10
#define HIGH 5
#define CHANGE 2
int i = LOW;
#include <stdio.h>
void main()
{
    int workover(int i), reset(int i);
    int i = HIGH;
    reset(i / 2);
    printf(" i = %d \n ", i);
    reset(i = i / 2);
    printf(" i = %d \n ", i);
    reset(i / 2);
    printf(" i = %d \n ", i);
    workover(i);
    printf(" i = %d \n ", i);
}
int workover(int i)
{
    i = (i % i) * ((i * i) / (2 * i) + 4);
    printf(" i = %d \n ", i);
    return (i);
}
int reset(int i)
{
    i = i <= CHANGE ? HIGH : LOW;
    return (i);
}
