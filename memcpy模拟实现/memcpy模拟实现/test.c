#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
void* my_memcpy(void* dest,const void* str, size_t num)
{
	assert(dest && str);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)str;
		dest = (char*)dest + 1;
		str = (char*)str + 1;
	}
	return ret;
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[5] = { 0 };
	my_memcpy(arr2, arr1, 20);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}