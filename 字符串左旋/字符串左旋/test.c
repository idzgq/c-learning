#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//��һ
//void diao(char arr[], int k)
//{
//	int i = 0;
//	for (i = k;i < strlen(arr);i++)
//	{
//		printf("%c", arr[i]);
//	}
//	char arr1[10] = "0";
//	strncpy(arr1, arr, k);
//	printf("%s", arr1);
//}

//����
//void diao(char arr[], int k)
//{
//	int i = 0;
//	for (i = 0;i < k; i++)
//	{
//		//��Ҫ������һ��һ���ó���
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0;j < strlen(arr) - 1;j++)
//		{
//			//���г����ó�����������ǰ���ƶ�һλ
//			arr[j] = arr[j + 1];
//		}
//		//���ó����ĸ�ֵ������ȥ
//		arr[strlen(arr) - 1] = tmp;
//	}
//
//}


void Reverse(char *left,char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void Swap(char arr[], int k)
{
	int len = strlen(arr);
	//�Ȼ�ǰ������
	Reverse(&arr[0], &arr[0] + k - 1);
	//����������
	Reverse(&arr[k], &arr[len - 1]);
	//���彻��
	Reverse(&arr[0], &arr[len - 1]);
}
int main()
{
	int k = 0;
	scanf("%d", &k);
	char arr[] = "ABCD";
	Swap(arr, k);
	printf("%s\n", arr);
	return 0;
}

