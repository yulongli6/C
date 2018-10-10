#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include <assert.h>

void my_memmove(void *p1, void const *p2, size_t count)
{
	assert(p1);
	assert(p2);
	char *dest = (char *)p1;
	char *src = (char *)p2;
	if ((dest > src) && (dest < src + count))  //判断内存重叠时的情况
	{
		while (count--)
		{
			*(dest + count) = *(src + count);
		}
	}
	else       //判断不重叠是的情况
	{
		while (count--)
		{
			*dest++ = *src++;
		}

	}
	return p1;
}
