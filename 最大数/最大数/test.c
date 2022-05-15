#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int e = (a > b ? a : b);//Ìõ¼þ²Ù×÷·û
    int f = (c > d ? c : d);
    int g = (e > f ? e : f);
    printf("%d\n", g);
    return 0;
}