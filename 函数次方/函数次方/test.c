#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>//��������ͷ�ļ�
int main()
{
    int a, b = 0;
    scanf("%d %d", &a, &b);
    printf("%.0lf\n", pow(a, b));//pow(x,y)������Ҫ��double
    return 0;
}