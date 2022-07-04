#define _CRT_SECURE_NO_WARNINGS
//小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。
// 如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。
// 请你回答他最后得到的数是多少。
#include <stdio.h>
#include <math.h>
int main()
{
	int n = 0;
	//输入
	scanf("%d", &n);
	int i = 0;
	int sum = 0;
	while (n)
	{
		//算出每一位
		int m = n % 10;
		//判断奇偶并改值
		if (m % 2 == 0)
		{
			m = 0;
		}
		else
		{
			m = 1;
		}
		//重新求和
         sum += m * pow(10, i++);
		 n = n/10;
	}
	printf("%d\n", sum);
	return 0;
}