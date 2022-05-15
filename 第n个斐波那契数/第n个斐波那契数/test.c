#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//非递归
int Fac(int n)
{
	//int a = 1;
	//int b = 1;
	//int c = 0;
	////每一次都等于前面的两个数相加
	//while (n >= 3)
	//{
	//	c = a + b;
	//	a = b;
	//	b = c;
	//	n--;
	//}
	/*return c;*/
	if (n < 3)
		return 1;
	else
	{
		return Fac(n - 1) + Fac(n - 2);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	return 0;
 }