#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1;i <= n;i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret=fac(num);
//	printf("%d\n", ret);
//}


#include <stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	int ret = 1;
	for (i = 1;i <= num;i++)
	{
		ret = ret * i;
	}
	printf("%d\n", ret);
	return 0;
}