#define _CRT_SECURE_NO_WARNINGS
//https ://www.nowcoder.com/practice/da13e0cf321e4df9acd0fdf0a433cbb0?tpId=107&&tqId=33396&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
#include <stdio.h>
int main()
{
    long long n, m;
    scanf("%lld %lld", &n, &m);
    long long a = n;
    long long b = m;
    long long tmp;
    //先将n和m进行保存，防止下面使用辗转相除的方法影响n和m的值
    //辗转相除法
    while (tmp = n % m)
    {
        n = m;
        m = tmp;
    }
    long long max = m;
    //最小公倍数=n*m/max
    long long min = a * b / max;
    printf("%lld", min + max);
    return 0;
}