#include <stdio.h>
int main()
{
	int a,a1,a2,a3,a4,a5,n;
	printf("请输入不多于5位的整数:");
	scanf("%d",&a);
	if(a > 99999)
		{
			printf("输入错误，请重新输入一个不多于五位数的整数:");
			scanf("%d",&a);
		}

	if(a >= 10000 && a <= 99999);
		n = 5;
	if(a>999 && a <= 9999)
		n = 4;
	if(a>99 && a <= 999)
		n = 3;
	if(a>9 && a <= 99)
		n = 2;
	if(a <= 9 && a >= 0)
		n = 1;
	printf("是%d位数\n",n);


	a1 = a/10000;
	a2 = (a - a1 * 10000)/1000;
	a3 = (a - a1 * 10000 - a2 * 1000)/100;
	a4 = (a - a1 * 10000 - a2 * 1000 - a3 * 100)/10;
	a5 = (a - a1 * 10000 - a2 * 1000 - a3 * 100 - a4 * 10);
	printf("每个位数分别是%d%d%d%d%d",a1,a2,a3,a4,a5);



	switch(n)
	{
		case 1:
			//个位数
			printf("逆序输出：%d\t", a5);
		       break;
		case 2:
		       //十位数
			printf("逆序输出：%d\t%d\t", a5, a4);
		       break;
		case 3:
		       //百位数
			printf("逆序输出：%d\t%d\t%d\t", a5, a4, a3);
		       break;
		case 4:
		       //千位数
			printf("逆序输出：%d\t%d\t%d\t%d\t", a5, a4, a3, a2);
			break;
		case 5:
		       //万位数
			printf("逆序输出：%d\t%d\t%d\t%d\t%d\t", a5, a4, a3, a2, a1);
			break;
	}
	//printf("%d%d%d%d%d",a5,a4,a3,a2,a1);
	return 0 ;
}
