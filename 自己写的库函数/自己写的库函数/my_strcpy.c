#define _CRT_SECURE_NO_DEPRECATE 1
#include <assert.h>
#include <stdio.h>
char* my_strcpy(char* dest, const char*src)
{
	char* ret = dest;
	assert(dest && src);
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}

