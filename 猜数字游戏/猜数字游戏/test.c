#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <time.h>
//�˵�����
 void menu()
{
	printf("****************    1. play    *****************\n");
	printf("************************************************\n");
	printf("****************    0. exit    *****************\n");
}
 //��Ϸ������
 void game()
 {
	 //��ʼ������ֵ
	 int guess = 0;
	 //���������
	 int ret = rand() % 100 + 1;//�����1-100
	 //ѭ������
	 while (1)
	 {
		 printf("�������: \n");
		 scanf("%d", &guess);
		 //�ж�����ֵ�����ɵ��������С
		 if(guess>ret)
		 {
			 printf("�´���!!!\n");
		 }
		 else if (guess < ret)
		 {
			 printf("��С��\n");
		 }
		 else if (guess == ret)
		 {
			 printf("��ϲ��,�����\n");
			 break;
		 }
	 }
 }
int main()
{
	int input = 0;
	//���������
	srand((unsigned int)time(NULL));
	do
	{
		//�˵�
		menu();
		//����ѡ��˵���һ��
		scanf("%d", &input);
		//ѡ�����
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��!!!\n");
			break;
		}
	} 
	//�ж�
	while (input);
	return 0;
}