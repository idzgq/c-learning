#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
//计数器方法
size_t my_strlen(const char *str)
{
	assert(str);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
////指针 - 指针
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	char* ret = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - ret;
//}
////递归
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	return 1+my_strlen(str+1);
//}
int main()
{
	char arr[] = "abcdef";
	size_t n = my_strlen(arr);
	printf("%u\n",n);
	return 0;
}

