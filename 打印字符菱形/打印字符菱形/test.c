#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char ch;
	int i, j;
	scanf("%c", &ch);//��ӡ�����ȴ�ӡ�ϰ벿������
	for (i = 1;i <=3; i++)
	{
		for (j = 1;j <= 3-i;j++)
		{
			printf(" ");
		}
		for (j = 1;j <= 2*i-1;j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	for (i = 1;i <= 3; i++)
	{
		for (j = 1;j <= i;j++)
		{
			printf(" ");
		}
		for (j = 1;j <= 2 * (3-i) - 1;j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int line = 0;
	int i = 0;
	int j = 0;
	printf("��������Ҫ��ӡ������\n");
	scanf("%d", &line);
	//�ȴ�ӡ�ϲ��ֵ�������
	for (i = 1; i <= line; i++) //��ӡ�ϰ벿�ֵ�line��
	{
		//��ӡÿһ�е�ǰ��Ŀո�
		for (j = 1; j <= line - i; j++)
		{
			printf(" ");
		}
		//��ӡÿһ�пո������Ǻ�
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n"); //ÿһ����ɺ�ǵ�Ҫ����
	}

	//����һ ͨ��i++������ӡ�����°벿��
	for (i = 1; i <= line - 1; i++)  // ע���°벿���� line - 1��
	{
		//��ӡÿһ��ǰ��Ŀո�
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		//��ӡÿһ�пո������Ǻ�
			for (j = 1; j <= 2 * (line - i) - 1; j++)
			{
				printf("*");
			}
		printf("\n"); //ÿһ�����Ҫ����
	}
	return 0;
}
