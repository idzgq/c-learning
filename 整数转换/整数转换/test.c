#define _CRT_SECURE_NO_WARNINGS
//https ://leetcode.cn/problems/convert-integer-lcci/
#include <stdio.h>
int convertInteger(int A, int B)
{
    unsigned int c = A ^ B;
    int d = A ^ B;
    int count = 0;
    while (c)
    {
        if (c % 2 == 1)
        {
            count++;
        }
        c = c / 2;
    }
    return count;

}
//int convertInteger(int A, int B)
//{
//    unsigned int c = A ^ B;
//    int count = 0;
//     while(c)
//     {
//      count++;
//      c = c & (c - 1);
//     }
//    return count;
//}
//int convertInteger(int A, int B)
//{
//    int c = A ^ B;
//    int count = 0;
//    int i = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if ((c >> i) & 1)
//            count++;
//    }
//    return count;
//}
int main()
{
	int A = 0;
	int B = 0;
	scanf("%d %d", &A, &B);
	int ret = convertInteger(A, B);
	printf("%d\n", ret);
	return 0;
}
