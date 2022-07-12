#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
char* my_strcat(char* dest, const char* str)
{
	char* ret = dest;
	assert(dest && str);
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "Hello ";
	char* ret = my_strcat(arr1, "world");
	printf("%s\n", ret);
	return 0;
}