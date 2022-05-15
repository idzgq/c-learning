#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//    int a = 0;
//    float b = 0;//double类型不行
//    float c = 0;//小数在内存中可能不能精确保存
//    float d = 0;//float类型的精度和double类型的精度不一样
//    scanf("%d;%f,%f,%f", &a, &b, &c, &d);//一旦小数四舍五入，最终得出的结果也不一样
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", a, b, c, d);
//    return 0;
//}



//优化(int会自动取整数部分)
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

