#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int num = 1;
	for (i = 1;i < 10;i++)
	{
		for (j = 1;j <= i;j++)
		{
			num = i * j;
			printf("%d*%d=%2d ", i, j, num);
		}
		printf("\n");
	}
	return 0;
}