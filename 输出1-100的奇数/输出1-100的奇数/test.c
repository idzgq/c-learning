#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num = 1;
	/*while (num <= 100)
	{
		if (num % 2 == 1)
		{
			printf("%d\n", num);
		}
		num++;
	}*/
	for (int num=1;num <= 100;num++)
	{
		if (num % 2 == 1)
		{
			printf("%d\n", num);
		}
	}
	return 0;
}


