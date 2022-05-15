#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 10;
//	//定义数组
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//计算数组长度  
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//遍历数组里的所有数
//	for (i = 0;i < sz; i++)
//	{
//		//找到了标出下标，跳出循环
//		if (arr[i] == k)
//		{
//			printf("找到了，下边是%d\n", i);
//			break;
//		}
//	}
//	//如果循环结束还未找到并且相等则找不到
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


int main()
{
	//定义有序数组
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//定义寻找数组中的数哪一个
	int k = 3;
	//计算数组长度
	int sz = sizeof(arr) / sizeof(arr[0]);
	//最左边下标为0
	int left = 0;
	//最右边下标为数组长度减一
	int right = sz - 1;
	//当左边小于右边两个数中间一定有数字，所以这个为循环条件
	while (left <= right)
	{
		//二分法中间数的下标
		int mid = (left + right) / 2;
		//如果中间数比要找的数小
		if (arr[mid] < k)
		{
			//左边下标变为中间数加一
			left = mid + 1;
		}
		//如果中间数比要找的数大
		else if(arr[mid] > k)
		{
			//右边数下标变为比中间数小一
			right = mid - 1;
		}
		else
		{
			printf("找到了,下标是%d\n", mid);
			//跳出循环
			break;
		}
	}
	if (left > right)
	{
		printf("找不到!!!");
	}
	return 0;
}