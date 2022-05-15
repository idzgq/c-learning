#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double x = 0;
	int y = 0;
	scanf("%lf", &x);
	if (x >= 0)//输入值大于零
	{
		if (x - (int)x >= 0.5)//小数部分大于0.5
		{
			y = x - (x - (int)x) + 1;//整数部分
			printf("%d\n", y);
		}
		else
		{
			y = x - (x - (int)x);//小数部分小于0.5，整数部分
			printf("%d\n", y);
		}
	}
	if (x < 0)                 //输入值小于零
	{
		if ((x - (int)x) <= -0.5)//小数部分<-0.5
		{
			y = x + x - (int)x;//整数部分
			printf("%d\n", y);
		}
		else//小数部分<-0.5
		{
			y = x-(x - (int)x);
			printf("%d\n", y);
		}
	}
	return 0;
}