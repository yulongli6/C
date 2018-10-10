#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include <assert.h>

void* my_memcpy(void* dest, const void* src, size_t count)
{
	assert(dest && src);
	void* ret = dest;
	while (count--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}


