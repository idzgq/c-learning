#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char ch;
	int i, j;
	scanf("%c", &ch);//打印五行先打印上半部分三行
	for (i = 1;i <=3; i++)
	{
		for (j = 1;j <= 3-i;j++)
		{
			printf(" ");
		}
		for (j = 1;j <= 2*i-1;j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	for (i = 1;i <= 3; i++)
	{
		for (j = 1;j <= i;j++)
		{
			printf(" ");
		}
		for (j = 1;j <= 2 * (3-i) - 1;j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int line = 0;
	int i = 0;
	int j = 0;
	printf("请输入你要打印的行数\n");
	scanf("%d", &line);
	//先打印上部分的三角形
	for (i = 1; i <= line; i++) //打印上半部分的line行
	{
		//打印每一行的前面的空格
		for (j = 1; j <= line - i; j++)
		{
			printf(" ");
		}
		//打印每一行空格后面的星号
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n"); //每一行完成后记得要换行
	}

	//方法一 通过i++方法打印菱形下半部分
	for (i = 1; i <= line - 1; i++)  // 注意下半部分有 line - 1行
	{
		//打印每一行前面的空格
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		//打印每一行空格后面的星号
			for (j = 1; j <= 2 * (line - i) - 1; j++)
			{
				printf("*");
			}
		printf("\n"); //每一行完成要换行
	}
	return 0;
}
