#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����һ���������飬ʵ��һ��������
//
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//
//����ż��λ������ĺ�벿�֡�
void sort(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while (arr[left]%2 !=0)
		{
			left++;
		}
		while (arr[right] % 2 == 0)
		{
			right--;
		}
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr,sz);
	int i = 0;
	for(i=0;i<sz;i++)
		printf("%d ", arr[i]);
	return 0;
}