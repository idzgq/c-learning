#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to league!!!!";
//	char arr2[] = "#####################";
//	//���±�
//	int left = 0;
//	//���±�
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
	//���±�
	int left = 0;
	//���±�
	int right = strlen(arr1) - 1;
	//�����±�С�ڵ������±�ʱѭ��ֹͣ
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//�ӳٺ���
		Sleep(1000);
		//��������
		system("cls");//system��һ���⺯��������ִ��ϵͳ����
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}