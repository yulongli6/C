#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include <assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	assert(str2 && str1);
	char* p1 = (char*)str1;
	char* p2 = (char*)str2;
	char *s1 = NULL;

	if (*str2 == '\0')
		return NULL;

	while (*p1)
	{
		s1 = p1;
		p2 = (char*)str2;
		while (*s1 && *p2 && (*s1 == *p2))
		{
			s1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return p1;
		}
		p1++;
	}
	return NULL;
}

