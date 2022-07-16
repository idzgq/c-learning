#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p!='\0')
	{
		s1 = p;
		s2 = str2;
		while (*s1!='\0'&& *s2 != '\0' &&* s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return p;
		}
		p++;
	}
	return NULL;
}
int main()
{
	char email[] = "zgqqwertyuiop.com";
	char substr[] = "qwertyuiop";
	char* ret = my_strstr(email, substr);
	if (ret == NULL)
	{
		printf("×Ö´®²»´æÔÚ\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}