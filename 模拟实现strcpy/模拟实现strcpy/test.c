#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* dest, const char* str)
{
	assert(dest && str);
	int ret = dest;
	while (*str)
	{
		*dest = *str;
		str++;
		dest++;
	}
	*dest = *str;
	return ret;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[20] = { 0 };
	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	return 0;
}