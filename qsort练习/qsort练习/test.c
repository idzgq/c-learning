#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//模仿qsort的功能实现一个通用的冒泡排序
void int_cmp(void* p1, void* p2)
{
	return *(char*)p1 - *(char*)p2;
}

void my_swap(void* p1, void* p2,int size)
{
	int i = 0;
	char tmp = *((char*)p1 + i);
	*((char*)p1 + i) = *((char*)p2 + i);
	*((char*)p2 + i) = tmp;
}
void my_qsort(void* base, int count, int size, int(*cmp)(void*, void*))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				my_swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int i = 0;
	my_qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}