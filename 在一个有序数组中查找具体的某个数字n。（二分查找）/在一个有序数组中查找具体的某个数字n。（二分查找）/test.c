#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 10;
//	//��������
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//�������鳤��  
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�����������������
//	for (i = 0;i < sz; i++)
//	{
//		//�ҵ��˱���±꣬����ѭ��
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±���%d\n", i);
//			break;
//		}
//	}
//	//���ѭ��������δ�ҵ�����������Ҳ���
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


int main()
{
	//������������
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//����Ѱ�������е�����һ��
	int k = 3;
	//�������鳤��
	int sz = sizeof(arr) / sizeof(arr[0]);
	//������±�Ϊ0
	int left = 0;
	//���ұ��±�Ϊ���鳤�ȼ�һ
	int right = sz - 1;
	//�����С���ұ��������м�һ�������֣��������Ϊѭ������
	while (left <= right)
	{
		//���ַ��м������±�
		int mid = (left + right) / 2;
		//����м�����Ҫ�ҵ���С
		if (arr[mid] < k)
		{
			//����±��Ϊ�м�����һ
			left = mid + 1;
		}
		//����м�����Ҫ�ҵ�����
		else if(arr[mid] > k)
		{
			//�ұ����±��Ϊ���м���Сһ
			right = mid - 1;
		}
		else
		{
			printf("�ҵ���,�±���%d\n", mid);
			//����ѭ��
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���!!!");
	}
	return 0;
}