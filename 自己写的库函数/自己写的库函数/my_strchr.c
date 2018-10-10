#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include <assert.h>
char* my_strchr(const char* dest, char c)
{
	assert(dest != NULL);
	char* p = (char*)dest;
	if (*p == '\0')
	{
		return NULL;
	}
	while (*p)
	{
		if (*p == c)
		{
			return p;
		}
		p++;
	}
}
