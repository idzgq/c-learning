//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
//��ʾ��¼�ɣ�������ξ�����������˳�����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int count = 0;
	char password[20] = { 0 };
	for (count = 0;count < 3;count++)
	{
		scanf("%s", password);
		//�Ƚ�2���ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��һ���⺯����strcmp
        //�������ֵ��0����ʾ2���ַ������
		if (strcmp(password, "123456") == 0)
		{
			printf("��½�ɹ�!!!");
			break;
		}
		else
		{
			printf("�������,����������\n");
		}
	}
	if (count == 3)
	{
		printf("�������������,�˳�����!!!");
	}
	return 0;
}