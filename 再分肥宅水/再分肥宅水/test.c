#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double t = 0;       //�ܺ���
	int n = 0;          //ѧ������
	double a = 0;       //�ֵõ�����
	int b = 0;          //��Ҫ����
	scanf("%lf %d", &t, &n);
	a = t / n;
	b = n * 2;
	printf("%.3lf\n%d\n", a, b);
	return 0;
}
