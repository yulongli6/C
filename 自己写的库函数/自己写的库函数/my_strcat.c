#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <assert.h>
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest&&src);
	while (*dest)
	{
		dest++;
	}
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}
