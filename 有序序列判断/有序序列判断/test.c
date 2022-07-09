#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int N = 0;
	scanf("%d", &N);
	int arr[55] = { 0 };
	int i = 0;
	int count = 0;
	int flag1 = 0;
	int flag2 = 0;
	int flag3 = 0;

	for (i = 0;i < N;i++)
	{
		scanf("%d", &arr[i]);
		if (i >= 1)
		{
		if (arr[i-1] < arr[i])
		{
			flag1 = 1;
		}
		else if (arr[i-1] > arr[i])
		{
			flag2 = 1;
		}
		else if (arr[i-1] == arr[i])

		{
			flag3 = 1;
		}
	}
}

	if (flag1 + flag2 == 2)
	{
		printf("unsorted\n");
	}
	else if((flag1+flag3==2)||(flag2+flag3==2))
	{
		printf("sorted\n");
	}
	else
	{
		printf("sorted\n");
	}
	return 0;
}