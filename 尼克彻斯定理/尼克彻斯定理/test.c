#define _CRT_SECURE_NO_WARNINGS
//验证尼科彻斯定理，即：任何一个整数m的立方都可以写成m个连续奇数之和。
//
//例如：
//
//1 ^ 3 = 1
//
//2 ^ 3 = 3 + 5
//
//3 ^ 3 = 7 + 9 + 11
//
//4 ^ 3 = 13 + 15 + 17 + 19
//
//输入一个正整数m（m≤100），将m的立方写成m个连续奇数之和的形式输出。


//输入：  6
//
//输出：  31 + 33 + 35 + 37 + 39 + 41
#include <stdio.h>
int main()
{
    int m = 0;
    scanf("%d", &m);
    int i = 0;
    int x = 0;
    for (i = 0; i < m; i++)
    {

        x = m * m - m + (2 * i + 1);
        if (i == m - 1)
        {
            printf("%d", m * m - m + (2 * i + 1));
            continue;
        }
        printf("%d+", x);
    }
    return 0;
}