#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//是素数返回1
//不是素数返回0
int is_prime(int n)
{
	int j =0;
	for (j = 2;j <= sqrt(n);j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 101;i <= 200; i += 2)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}



//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2;j <= sqrt(i);j ++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag = 1)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}