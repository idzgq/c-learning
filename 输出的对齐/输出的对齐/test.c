#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b, c;;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d%8d%8d", a, b, c);
    //printf("%-8d%-8d%d",a,b,c);Ҳ����������-8d��ʾ�ڵ�һλ���ֿ���Ȼ���ٺ��油��7λ
    //%nd��ʾ�Ҷ���
    //%-nd��ʾ�����
    return 0;
}
