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
    //�Ƚ�n��m���б��棬��ֹ����ʹ��շת����ķ���Ӱ��n��m��ֵ
    //շת�����
    while (tmp = n % m)
    {
        n = m;
        m = tmp;
    }
    long long max = m;
    //��С������=n*m/max
    long long min = a * b / max;
    printf("%lld", min + max);
    return 0;
}