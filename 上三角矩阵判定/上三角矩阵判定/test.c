#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0;j < n;j++)
		{
			if (i > j)
			{
				sum += arr[i][j];
			}

		}
	}
	if (sum == 0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}