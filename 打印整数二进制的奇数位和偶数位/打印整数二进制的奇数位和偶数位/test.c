#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Printbit(num)
{
	int i = 0;
	//for (i = 31;i >= 0;i -= 2)
	//{
	//	printf("%d ", (num >> i) & 1);
	//}
	//printf("\n");
	//for (i = 30;i >= 0;i -= 2)
	//{
	//	printf("%d ", (num >> i) & 1);
	//}
	for (i = 31;i >= 0;i -= 2)
	{
		/*if ((1 << i) & num)
		{
			printf("%d ", 1);
		}
		else
		{
			printf("%d ", 0);
		}*/
		printf("%d ", (1 << i) & num);
	}
	printf("\n");
	for (i = 30;i >= 0;i -= 2)
	{
		if ((1 << i) & num)
		{
			printf("%d ", 1);
		}
		else
		{
			printf("%d ", 0);
		}
	}
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	Printbit(num);
	return 0;
}