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
		//����˵��retÿ���ظ�����Ϊһ����Ȼret������һ��
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