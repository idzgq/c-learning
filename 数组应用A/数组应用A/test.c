#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//    while (i < 12)
//    {
//        printf("%c", arr[i]);
//        i++;
//    }
//    return 0;
//}



int main()
{
    int i = 0;
    int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
    int a = sizeof(arr) / sizeof(arr[0]);//整个数组的字节 除以 单个的字节 得到数组个数
    for (int i = 0;i <a;i++)
    {
        printf(" % c",arr[i]);
    }
    return 0;
}
