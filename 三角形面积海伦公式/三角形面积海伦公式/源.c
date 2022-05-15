#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float cir, area, p;
    cir = a + b + c;
    p = cir / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("circumference=%.2f area=%.2f\n", cir, area);
    return 0;
}