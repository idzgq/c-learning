//����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�
// ����1461 ���Բ�ֳɣ�1��461��, ��14��61��, ��146��1), 
// ������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��
//���磺
//655 = 6 * 55 + 65 * 5
//
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//
//��� 5λ���е����� Lily Number
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����һ <����>
//int main()
//{
//	int i = 0;
//	for (i = 10000;i <= 99999;i++)
//	{
//		int a = (i / 10000) * (i % 10000);
//		int b = (i / 1000) * (i % 1000);
//		int c = (i / 100) * (i % 100);
//		int d = (i / 10) * (i % 10);
//		if (a + b + c + d == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
// 
// 
// 
// ������   <��>
//int main()
//{
//	for (int i = 10000;i <= 99999;i++)
//	{
//		int sum = 0;
//		for (int j = 10;j <= 10000;j *= 10)
//		{
//			sum += (i % j) * (i / j);
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//�ж��Ƿ�Ϊˮ�ɻ���
int main()
{
	printf("������һ���� : > ");
	int num = 0;
	int count = 10;
	scanf("%d", &num);
	int n = num;
	int i = 10;
	while (n!=0)
	{
		n=n/ 10;
		count*=10;
	}
	int sum = 0;
	for (i = 10;i < count;i *= 10)
	{
		sum += (num / i) * (num % i);
	}
	if (sum == num)
	{
		printf("ˮ�ɻ��� : %d\n", num);
	}
	else
	{
		printf("����ˮ�ɻ���\n");
	}
	return 0;
}