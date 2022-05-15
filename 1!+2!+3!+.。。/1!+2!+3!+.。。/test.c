#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 3;
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (n = 1;n <= 3;n++)
	{
		ret = 1;
		//必须说明ret每次重更新来为一，不然ret就是上一个
		for (i = 1;i <= n;i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("%d\n", sum);
	return 0;
}



int main()
{
	int n = 3;
	int ret = 1;
	int sum = 0;
	for (n = 1;n <= 3;n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("%d\n", sum);
	return 0;
}