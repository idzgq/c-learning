#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double a = 0;
	int b = 0;
	int  c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	double sum = 0;
	scanf("%lf", &a);
	b = a * 10;              //使小数变成整数
	c = b % 10;              //4
	d = (b / 10) % 10;       //3
	e = (b / 100) % 10;      //2
	f = b / 1000;            //1
	sum = (c * 1000 + d * 100 + e * 10 + f)*0.001;
	printf("%.3lf\n", sum);
	return 0;
}


int main()            //循环但是较死
{
	double x = 0;
	int  a = 0;
	int num = 0;
	scanf("%lf",&x);
	num = x * 10;
	while(num)                
	{
		a = num % 10;
		if (num==123)
		{
			printf(".");
		}
		printf("%d", a);
		num = num / 10;
	}
	return 0;
}


int main()
{
	char a = '.';
	char b;
	char c;
	char d;
	char e;
	scanf("%c %c %c %c %c", &b, &c, &d, &a, &e);
	printf("%c%c%c%c%c\n",e,a,d,c,b);
	return 0;
}