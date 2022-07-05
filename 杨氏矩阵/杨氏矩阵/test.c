#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Find(int arr[3][3], int k)
{
	int row = 3;
	int col = 3;
	int i = 0;
	int count = 0;
	for (i = 0;i < row; i++)
	{
		int j = 0;
		for (j = 0;j < col;j++)
		{
			if (arr[i][j] == k)
			{
				printf("这是第 %d 行，第 %d 列\n", i + 1, j + 1);
				count++;
			}
		}
	}
	if (count == 0)
	{
		printf("找不到\n");
	}
}
int main()
{
	int arr[3][3] = { 1,2,3,2,3,4,3,4,5 };
	int k = 0;
	printf("请输入需要查找的数 ：> ");
	scanf("%d", &k);
	Find(arr, k);
	return 0;
}