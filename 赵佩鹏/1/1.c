#include <stdio.h>
int main()
{
	char c1 = 'a', c2 = 'b', c3 = 'c';
	char c4 = '\101', c5 = '\116';
	char c6 = '\x30', c7 = '\x41', c8 = '\x61';
	printf("H\tii\bj   k");
	printf("a=%c b=%c\t c=%c\t abc\n", c1, c2, c3);
	printf("c4=%c  c5=%c\n", c4, c5);
	printf("c6='%c'  c7='%c'  c8='%c'", c6, c7, c8);
	putchar('\n');
	getchar();
	return 0;
}