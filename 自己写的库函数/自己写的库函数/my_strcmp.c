#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include <assert.h>
int my_strcmp(const char* dest, const char* src)
{
	assert(dest && src);
	while ((*dest == *src) && *dest&&*src)
	{
		if ((*dest == '\0') || (*src == '\0'))
		{
			return 0;
		}
		dest++;
		src++;
	}
	if (*dest > *src)
	{
		return 1;
	}
	else
		return -1;

}

