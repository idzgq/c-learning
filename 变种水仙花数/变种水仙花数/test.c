//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，
// 比如1461 可以拆分成（1和461）, （14和61）, （146和1), 
// 如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//例如：
//655 = 6 * 55 + 65 * 5
//
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//
//求出 5位数中的所有 Lily Number
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//方法一 <繁琐>
//int main()
//{
//	int i = 0;
//	for (i = 10000;i <= 99999;i++)
//	{
//		int a = (i / 10000) * (i % 10000);
//		int b = (i / 1000) * (i % 1000);
//		int c = (i / 100) * (i % 100);
//		int d = (i / 10) * (i % 10);
//		if (a + b + c + d == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
// 
// 
// 
// 方法二   <简化>
//int main()
//{
//	for (int i = 10000;i <= 99999;i++)
//	{
//		int sum = 0;
//		for (int j = 10;j <= 10000;j *= 10)
//		{
//			sum += (i % j) * (i / j);
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//判断是否为水仙花数
int main()
{
	printf("请输入一个数 : > ");
	int num = 0;
	int count = 10;
	scanf("%d", &num);
	int n = num;
	int i = 10;
	while (n!=0)
	{
		n=n/ 10;
		count*=10;
	}
	int sum = 0;
	for (i = 10;i < count;i *= 10)
	{
		sum += (num / i) * (num % i);
	}
	if (sum == num)
	{
		printf("水仙花数 : %d\n", num);
	}
	else
	{
		printf("不是水仙花数\n");
	}
	return 0;
}