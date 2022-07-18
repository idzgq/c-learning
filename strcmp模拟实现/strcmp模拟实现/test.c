#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
int my_strcmp(const char* str1, char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	/*if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}*/
	return (*str1 - *str2);
}
int main()
{
	char arr1[] = "hello";
	char arr2[] = "world";
	int ret = my_strcmp(arr1, arr2);
	if (ret == 0)
	{
		printf("==\n");
	}
	else if (ret == 1)
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}
