#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	for (i = 1;i <= 99999;i++)
	{
		int count = 0;
		int sum = 0;
		int tmp = i;
		while (tmp)
		{
			tmp = tmp / 10;
			count++;
		}
		tmp = i;
		while (tmp)
		{
			sum += pow((tmp % 10), count);
			tmp = tmp / 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
		
	}
	return 0;
}
