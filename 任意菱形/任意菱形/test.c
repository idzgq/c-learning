#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char ch;
	int line, i, j = 0;
	printf("�������ӡ�ַ�: ");
	scanf("%c", &ch);
	printf("�������к�: ");
	scanf("%d", &line);
	for (int i = 1;i <= line;i++)//�ⲿѭ�������к�
	{
		if (i <= (line + 1) / 2)//������Ϊ�ϰ��������if
		{
			for (int j = 1;j <= (line - 1) / 2 - i + 1;j++)//��ӡ�ո�
			{
				printf(" ");
			}
			for (int j = 1;j <= 2 * i - 1;j++)//��ӡ����
			{
				printf("%c", ch);
			}
			printf("\n");
		}
		if (i > (line + 1) / 2)//���кŵ��°����߽����if
		{
			for (int j = 1;j <= i - (line + 1) / 2;j++)//��ӡ�ո�
			{
				printf(" ");
			}
			for (int j = 1;j <= 2 * (line - i) + 1;j++)//��ӡ����
			{
				printf("%c", ch);
			}
			printf("\n");//�и�
		}
	}
	return 0;

}