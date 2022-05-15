#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//×î´óÖµ
int Max(x, y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = Max(a,b);
	printf("%d\n", c);
	return 0;
}
