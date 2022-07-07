#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define m  4 
#define n  4
void set_triangle(int arr[m][n])
{
	int row = 0;
	int col = 0;
	for (row = 0;row < m;row++)
	{
		for (col = 0;col < n;col++)
		{
			arr[row][0] = 1;
			if (row >= 1 && col >= 1)
			{
				arr[row][col] = arr[row - 1][col - 1] + arr[row - 1][col];
			}
		}
	}
}
void print(int arr[m][n])
{
	for (int row = 0;row < m;row++)
	{
		for (int col = 0;col < n;col++)
		{
			printf("%3d ", arr[row][col]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[m][n] = { 0 };
	set_triangle(arr);
	print(arr);
	return 0;
}