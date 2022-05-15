#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int DigitSum(int n)
{
	if (n > 9)
		return DigitSum(n / 10) + n % 10;
	else
		return n;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = DigitSum(num);
	printf("%d \n", ret);
	return 0;
}
//int DigitSum(int n)
//{
//	int sum = 0;
//	while (n)
//	{
//		int a = n % 10;
//		sum += a;
//		n = n / 10;
//	}
//	return sum;
//}