#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b, c;;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d%8d%8d", a, b, c);
    //printf("%-8d%-8d%d",a,b,c);也可以这样，-8d表示在第一位数字靠左然后再后面补齐7位
    //%nd表示右对齐
    //%-nd表示左对齐
    return 0;
}
