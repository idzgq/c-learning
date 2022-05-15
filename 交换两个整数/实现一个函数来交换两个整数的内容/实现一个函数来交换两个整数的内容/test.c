#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Swap(int *pa, int *pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	Swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}