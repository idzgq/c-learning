#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//从第一个走起
	for (i = 0;i < sz-1;i++)
	{
		int j = 0;
		//把那个数和后面的数比较，大的就往后面放
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 5,8,4,9,3,6,2,1,0,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}