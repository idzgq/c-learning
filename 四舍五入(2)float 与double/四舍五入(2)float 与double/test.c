#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//    int a = 0;
//    float b = 0;//double���Ͳ���
//    float c = 0;//С�����ڴ��п��ܲ��ܾ�ȷ����
//    float d = 0;//float���͵ľ��Ⱥ�double���͵ľ��Ȳ�һ��
//    scanf("%d;%f,%f,%f", &a, &b, &c, &d);//һ��С���������룬���յó��Ľ��Ҳ��һ��
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", a, b, c, d);
//    return 0;
//}



//�Ż�(int���Զ�ȡ��������)
int main() 
{
    double d;
    scanf("%lf", &d);
    if (d >= 0) {
        int a = d + 0.5;
        printf("%d\n", a);
    }
    else
    {
        int a = d - 0.5;
        printf("%d\n", a);
    }
    return 0;
}

