#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>//函数调用头文件
int main()
{
    int a, b = 0;
    scanf("%d %d", &a, &b);
    printf("%.0lf\n", pow(a, b));//pow(x,y)函数需要用double
    return 0;
}