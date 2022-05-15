#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	//遍历一遍使所有地方变成 ' 0 '
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			board[i][j] = set;
		}
	}
}
//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------扫雷游戏-----\n");
	//打印列标
	for (j = 0; j <= col; j++)
	{
		printf("%d |", j);
	}
	printf("\n");
	//打印棋盘
	for (i = 1;i <= row;i++)
	{	
		//打印行标
		printf("%d |", i);
		for (j = 1;j <= col;j++)
		{
			printf("%c |", board[i][j]);
		}
		printf("\n");
	}
	printf("-------扫雷游戏-----\n");
}
//放置雷
void Set_T(char board[ROWS][COLS], int row, int col)
{
	//设置雷数量
	int count = EASY_COUNT;
	//当雷数量为零停止循环
	while (count)
	{
		//设置行和列的随机值
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
		}
		count--;
	}
}
//得到中间数显示周围有多少雷
int get_mine_count(char board[ROWS][COLS], int x,int y)
{
	return (board[x - 1][y] + board[x + 1][y] +
		board[x - 1][y + 1] + board[x][y + 1] + board[x - 1][y + 1] + 
		board[x - 1][y - 1] + board[x][y - 1] + board[x + 1][y - 1]-8*'0');
}

//扫雷
void Find_T(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//条件是所有雷被发现
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入想要排查的坐标 : >");
		scanf("%d %d", &x, &y);
		//先判断是否合法
		if (x >= 1 && x <= col && y >= 1 && y <= row)
		{
			//是否已经被排查过
			if (show[x][y] != '*')
			{
				printf("你输入的坐标已经被排查过\n");
			}
			else
			{
				//是雷，被炸死
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else//如果不是雷
				{
					win++;
					//统计mine数组中x,y坐标周围有几个雷
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';//转换成数字字符
					DisplayBoard(show, ROW, COL);
				}
			}
		}
		else
		{
			printf("输入的坐标非法,请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}

