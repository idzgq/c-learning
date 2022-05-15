#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char ch;
	int line, i, j = 0;
	printf("请输入打印字符: ");
	scanf("%c", &ch);
	printf("请输入行号: ");
	scanf("%d", &line);
	for (int i = 1;i <= line;i++)//外部循环控制行号
	{
		if (i <= (line + 1) / 2)//当行数为上半行走这个if
		{
			for (int j = 1;j <= (line - 1) / 2 - i + 1;j++)//打印空格
			{
				printf(" ");
			}
			for (int j = 1;j <= 2 * i - 1;j++)//打印符号
			{
				printf("%c", ch);
			}
			printf("\n");
		}
		if (i > (line + 1) / 2)//当行号到下半行走进这个if
		{
			for (int j = 1;j <= i - (line + 1) / 2;j++)//打印空格
			{
				printf(" ");
			}
			for (int j = 1;j <= 2 * (line - i) + 1;j++)//打印符号
			{
				printf("%c", ch);
			}
			printf("\n");//切割
		}
	}
	return 0;

}