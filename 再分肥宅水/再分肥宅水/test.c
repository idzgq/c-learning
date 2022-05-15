#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double t = 0;       //总毫升
	int n = 0;          //学生人数
	double a = 0;       //分得的饮料
	int b = 0;          //需要杯子
	scanf("%lf %d", &t, &n);
	a = t / n;
	b = n * 2;
	printf("%.3lf\n%d\n", a, b);
	return 0;
}
