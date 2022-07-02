#define _CRT_SECURE_NO_WARNINGS
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
#include <stdio.h>
int main()
{
	int money = 20;     //钱
	int empty = 0;      //空瓶子 
	int drink = 0;      //喝的
	int sy = 0;         //剩余
	empty = money;
	while (empty >= 1)
	{
		drink += empty + sy;
		sy = empty % 2;
		empty /= 2;
	}
	printf("%d\n", drink);
	return 0;
}