#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double x = 0;
	int y = 0;
	scanf("%lf", &x);
	if (x >= 0)//����ֵ������
	{
		if (x - (int)x >= 0.5)//С�����ִ���0.5
		{
			y = x - (x - (int)x) + 1;//��������
			printf("%d\n", y);
		}
		else
		{
			y = x - (x - (int)x);//С������С��0.5����������
			printf("%d\n", y);
		}
	}
	if (x < 0)                 //����ֵС����
	{
		if ((x - (int)x) <= -0.5)//С������<-0.5
		{
			y = x + x - (int)x;//��������
			printf("%d\n", y);
		}
		else//С������<-0.5
		{
			y = x-(x - (int)x);
			printf("%d\n", y);
		}
	}
	return 0;
}