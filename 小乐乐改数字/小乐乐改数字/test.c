#define _CRT_SECURE_NO_WARNINGS
//С����ϲ�����֣�����ϲ��0��1�������ڵõ���һ���������ÿλ�������0��1��
// ���ĳһλ���������Ͱ������1�������ż������ô�Ͱ������0��
// ����ش������õ������Ƕ��١�
#include <stdio.h>
#include <math.h>
int main()
{
	int n = 0;
	//����
	scanf("%d", &n);
	int i = 0;
	int sum = 0;
	while (n)
	{
		//���ÿһλ
		int m = n % 10;
		//�ж���ż����ֵ
		if (m % 2 == 0)
		{
			m = 0;
		}
		else
		{
			m = 1;
		}
		//�������
         sum += m * pow(10, i++);
		 n = n/10;
	}
	printf("%d\n", sum);
	return 0;
}