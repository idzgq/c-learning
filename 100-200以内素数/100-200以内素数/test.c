#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	//100以内的数
	for (i = 101;i <= 200;i++)
	{
		int j = 0;
		//比那一个数小的数
		for (j = 2;j < i;j++)
		{
			//两个数不会相等，如果取余为0那肯定不是个素数，跳出
			if (i % j == 0)
			{
				break;
			}
		}
		//遍历完剩下来的相等的就是素数
		if (j == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
