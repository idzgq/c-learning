#define _CRT_SECURE_NO_WARNINGS
//#include <math.h>
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n,&k);
//	int x = pow(n, k);
//	printf("%d\n", x);
//	return 0;
//}
#include <stdio.h>
int pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k > 0)
	{
		return n * pow(n, k - 1);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	int ret = pow(n, k);
	printf("%d\n", ret);
	return 0;
}