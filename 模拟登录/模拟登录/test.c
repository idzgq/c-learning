//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int count = 0;
	char password[20] = { 0 };
	for (count = 0;count < 3;count++)
	{
		scanf("%s", password);
		//比较2个字符串是否相等，不能使用==，而应该使用一个库函数：strcmp
        //如果返回值是0，表示2个字符串相等
		if (strcmp(password, "123456") == 0)
		{
			printf("登陆成功!!!");
			break;
		}
		else
		{
			printf("密码错误,请重新输入\n");
		}
	}
	if (count == 3)
	{
		printf("三次输入均错误,退出程序!!!");
	}
	return 0;
}