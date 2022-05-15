#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_run_year(int i)
{
	if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int year = 0;
	int i = 0;
	for (year = 1000;year <= 2000;year++)
	{
		if (is_run_year(year))
		{
			printf("%d ", year);
		}
	}
	return 0;
}