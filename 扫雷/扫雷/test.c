#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("********************************\n");
	printf("******* 1.play    0.exit *******\n");
	printf("********************************\n");
}
void game()
{
	//��ŵ��׵�����
	char mine[ROWS][COLS] = { 0 };
	//չʾ���û�������
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ
	DisplayBoard(show, ROW, COL);
	//���õ���
	Set_T(mine, ROW, COL);
	//��ʼɨ��
	Find_T(mine,show, ROW, COL);
}
int main()
{
	//��������
	srand((unsigned int)time(NULL));
	int input = 0;	
	do
	{
		//�˵�
		menu();
		printf("��ѡ�� : >");
		scanf("%d", &input);
		//�ж�����
		switch (input)
		{
		case 1:
			printf("������Ϸ������\n");
			//������Ϸ
			game();
			break;
		case 0:
			printf("�˳���Ϸ������\n");
			break;
		default:
			printf("����������������룡����\n");
			break;
		}
	} while (input);
	return 0;
}