#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c, d, e, f;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (b>d)
	{
		f = d + 60 - b;
		e = c - 1 - a;
	}
	else
	{
		f = d - b;
		e = c - a;
	}
	printf("%d,%d\n", e, f%60);
	return 0;
}



int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int e = (c * 60 + d) - (a * 60 + b);
	printf("%d,%d\n",e/60,e%60);
	return 0;
}
