#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//数组下标
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz ;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//指针
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	return 0;
}