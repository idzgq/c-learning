#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void menu()
{
	printf("************   �������    ********\n");
	printf("************ ����60s�ڹػ� ********\n");
}
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("���������� (1---100) : > ");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´��ˣ����� \n");
		}
		else if (guess < ret)
		{
			printf("��С�ˣ����� \n");
		}
		else if (guess == ret)
		{
			printf("��ϲ��,�¶��ˣ����� \n");
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