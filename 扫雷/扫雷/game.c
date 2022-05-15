#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	//����һ��ʹ���еط���� ' 0 '
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j] = set;
		}
	}
}
//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------ɨ����Ϸ-----\n");
	//��ӡ�б�
	for (j = 0; j <= col; j++)
	{
		printf("%d |", j);
	}
	printf("\n");
	//��ӡ����
	for (i = 1;i <= row;i++)
	{	
		//��ӡ�б�
		printf("%d |", i);
		for (j = 1;j <= col;j++)
		{
			printf("%c |", board[i][j]);
		}
		printf("\n");
	}
	printf("-------ɨ����Ϸ-----\n");
}
//������
void Set_T(char board[ROWS][COLS], int row, int col)
{
	//����������
	int count = EASY_COUNT;
	//��������Ϊ��ֹͣѭ��
	while (count)
	{
		//�����к��е����ֵ
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
		}
		count--;
	}
}
//�õ��м�����ʾ��Χ�ж�����
int get_mine_count(char board[ROWS][COLS], int x,int y)
{
	return (board[x - 1][y] + board[x + 1][y] +
		board[x - 1][y + 1] + board[x][y + 1] + board[x - 1][y + 1] + 
		board[x - 1][y - 1] + board[x][y - 1] + board[x + 1][y - 1]-8*'0');
}

//ɨ��
void Find_T(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//�����������ױ�����
	while (win < row * col - EASY_COUNT)
	{
		printf("��������Ҫ�Ų������ : >");
		scanf("%d %d", &x, &y);
		//���ж��Ƿ�Ϸ�
		if (x >= 1 && x <= col && y >= 1 && y <= row)
		{
			//�Ƿ��Ѿ����Ų��
			if (show[x][y] != '*')
			{
				printf("������������Ѿ����Ų��\n");
			}
			else
			{
				//���ף���ը��
				if (mine[x][y] == '1')
				{
					printf("���ź����㱻ը����\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else//���������
				{
					win++;
					//ͳ��mine������x,y������Χ�м�����
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';//ת���������ַ�
					DisplayBoard(show, ROW, COL);
				}
			}
		}
		else
		{
			printf("���������Ƿ�,����������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, ROW, COL);
	}
}

