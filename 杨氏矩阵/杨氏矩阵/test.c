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
				printf("���ǵ� %d �У��� %d ��\n", i + 1, j + 1);
				count++;
			}
		}
	}
	if (count == 0)
	{
		printf("�Ҳ���\n");
	}
}
int main()
{
	int arr[3][3] = { 1,2,3,2,3,4,3,4,5 };
	int k = 0;
	printf("��������Ҫ���ҵ��� ��> ");
	scanf("%d", &k);
	Find(arr, k);
	return 0;
}