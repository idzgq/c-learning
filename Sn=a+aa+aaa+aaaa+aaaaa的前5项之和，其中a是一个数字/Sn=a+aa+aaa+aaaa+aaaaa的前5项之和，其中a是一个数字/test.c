#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int i = 0;
	int temp = 0;
	int sum = 0;
	scanf("%d", &a);
	for (i = 1; i <= 5; i++)
	{
		temp = temp * 10 + a;
		sum += temp;
	}
	printf("%d\n", sum);
	return 0;
}