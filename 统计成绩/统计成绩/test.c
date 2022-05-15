/*描述
输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。

数据范围： 1≤n≤100  ， 成绩使用百分制且不可能出现负数
输入描述：
两行，

第1行，正整数n（1≤n≤100）

第2行，n科成绩（范围0.0~100.0），用空格分隔。
输出描述：
输出一行，三个浮点数，分别表示，最高分，最低分以及平均分（小数点后保留2位），用空格分隔。
示例1
输入：
5
99.5 100.0 22.0 60.0 88.5

输出：

100.00 22.00 74.00
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n = 0;
    int i = 0;
    double min, max, aver, sum = 0;
    double a[100];//定义数组大小
    scanf("%d", &n);

    //决定输入的数和个数

    for (int i = 0;i < n;i++)
    {
        scanf("%lf", &a[i]);
    }

    //赋值给最大最小
    min = max = a[i];
    //遍历数组里的数
    for (int i = 0;i < n;i++)
    {
        //将数组中的数与之比较比它大的就是最大值
        if (a[i] > max)
        {
            max = a[i];
        }
        //将数组中的数与之比较比它小的就是最小值
        if (a[i] < min)
        {
            min = a[i];
        }
        sum += a[i];
    }
    //平均值
    aver = sum / n;
    printf("%.2lf %.2lf %.2lf\n", max, min, aver);
    return 0;
}