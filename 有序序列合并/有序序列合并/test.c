#define _CRT_SECURE_NO_WARNINGS
//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//输入描述：
//输入包含三行，
//第一行包含两个正整数n, m，用空格分隔。
//n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//
//第二行包含n个整数，用空格分隔。
//
//第三行包含m个整数，用空格分隔。
//输出描述：
//输出为一行，输出长度为n + m的升序序列，
//即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。
#include <stdio.h>
int main() {
    int n, m = 0;
    int arr1[1000] = { 0 };
    int arr2[1000] = { 0 };
    int arr3[2000] = { 0 };
    //输入两个数列的长度
    scanf("%d %d", &n, &m);
    int i = 0;
    int j = 0;
    int tmp = 0;
    //输入第一个数列的元素
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
        //把这个数列里的数赋值到第三个数列
        arr3[i] = arr1[i];
    }
    //输入第二个数列的元素
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
        //把这个数列里的数放到第 n 开始的地方
        arr3[i + n] = arr2[i];
    }
    //对合并的新数列进行排序
    for (i = 0; i < n + m; i++)
    {
        for (j = 0; j < n + m - i - 1; j++)
        {
            if (arr3[j] > arr3[j + 1])
            {
                tmp = arr3[j];
                arr3[j] = arr3[j + 1];
                arr3[j + 1] = tmp;
            }
        }
    }
    //打印
    for (i = 0; i < m + n; i++)
        printf("%d ", arr3[i]);
    return 0;
}
