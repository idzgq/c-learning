#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <time.h>
//菜单函数
 void menu()
{
	printf("****************    1. play    *****************\n");
	printf("************************************************\n");
	printf("****************    0. exit    *****************\n");
}
 //游戏程序函数
 void game()
 {
	 //初始化输入值
	 int guess = 0;
	 //生成随机数
	 int ret = rand() % 100 + 1;//随机数1-100
	 //循环输入
	 while (1)
	 {
		 printf("请猜数字: \n");
		 scanf("%d", &guess);
		 //判断输入值与生成的随机数大小
		 if(guess>ret)
		 {
			 printf("猜大了!!!\n");
		 }
		 else if (guess < ret)
		 {
			 printf("猜小了\n");
		 }
		 else if (guess == ret)
		 {
			 printf("恭喜你,答对了\n");
			 break;
		 }
	 }
 }
int main()
{
	int input = 0;
	//生成随机数
	srand((unsigned int)time(NULL));
	do
	{
		//菜单
		menu();
		//输入选择菜单哪一项
		scanf("%d", &input);
		//选择语句
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新选择!!!\n");
			break;
		}
	} 
	//判断
	while (input);
	return 0;
}