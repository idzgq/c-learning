#pragma once
#include <stdio.h>
//内行
#define ROW 9
//内列
#define COL 9
//外行
#define ROWS ROW+2
//外列
#define COLS COL+2
//雷的数量
#define EASY_COUNT 80


//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
//展示棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//放置雷
void Set_T(char board[ROWS][COLS], int row, int col);
//发现雷
void Find_T(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);

