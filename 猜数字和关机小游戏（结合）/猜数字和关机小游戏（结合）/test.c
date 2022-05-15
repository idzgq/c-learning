#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void menu()
{
	printf("************   请猜数字    ********\n");
	printf("************ 否则60s内关机 ********\n");
}
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("请输入数字 (1---100) : > ");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了！！！ \n");
		}
		else if (guess < ret)
		{
			printf("猜小了！！！ \n");
		}
		else if (guess == ret)
		{
			printf("恭喜你,猜对了！！！ \n");
			system("shutdown -a");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	system("shutdown -s -t 60");
	menu();
	game();
	return 0;
}