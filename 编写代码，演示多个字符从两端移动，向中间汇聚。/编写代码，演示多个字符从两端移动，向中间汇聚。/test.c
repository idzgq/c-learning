#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to league!!!!";
//	char arr2[] = "#####################";
//	//左下标
//	int left = 0;
//	//右下标
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//
//	return 0;
//}



int main()
{
	char arr1[] = "welcome to league!!!!";
	char arr2[] = "#####################";
	//左下标
	int left = 0;
	//右下标
	int right = strlen(arr1) - 1;
	//当左下标小于等于右下标时循环停止
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//延迟函数
		Sleep(1000);
		//清屏函数
		system("cls");//system是一个库函数，可以执行系统命令
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}