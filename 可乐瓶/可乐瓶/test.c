#define _CRT_SECURE_NO_WARNINGS
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
#include <stdio.h>
int main()
{
	int money = 20;     //Ǯ
	int empty = 0;      //��ƿ�� 
	int drink = 0;      //�ȵ�
	int sy = 0;         //ʣ��
	empty = money;
	while (empty >= 1)
	{
		drink += empty + sy;
		sy = empty % 2;
		empty /= 2;
	}
	printf("%d\n", drink);
	return 0;
}