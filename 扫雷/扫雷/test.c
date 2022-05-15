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
	//存放地雷的棋盘
	char mine[ROWS][COLS] = { 0 };
	//展示给用户的棋盘
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印
	DisplayBoard(show, ROW, COL);
	//放置地雷
	Set_T(mine, ROW, COL);
	//开始扫雷
	Find_T(mine,show, ROW, COL);
}
int main()
{
	//设计随机数
	srand((unsigned int)time(NULL));
	int input = 0;	
	do
	{
		//菜单
		menu();
		printf("请选择 : >");
		scanf("%d", &input);
		//判断输入
		switch (input)
		{
		case 1:
			printf("进入游戏！！！\n");
			//进入游戏
			game();
			break;
		case 0:
			printf("退出游戏！！！\n");
			break;
		default:
			printf("输入错误，请重新输入！！！\n");
			break;
		}
	} while (input);
	return 0;
}