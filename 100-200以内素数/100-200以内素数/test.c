#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	//100���ڵ���
	for (i = 101;i <= 200;i++)
	{
		int j = 0;
		//����һ����С����
		for (j = 2;j < i;j++)
		{
			//������������ȣ����ȡ��Ϊ0�ǿ϶����Ǹ�����������
			if (i % j == 0)
			{
				break;
			}
		}
		//������ʣ��������ȵľ�������
		if (j == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
