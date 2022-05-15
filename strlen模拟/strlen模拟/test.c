#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int my_strlen(char* str)
{
	/*if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;*/
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}