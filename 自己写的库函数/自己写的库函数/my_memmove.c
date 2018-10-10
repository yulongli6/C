#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include <assert.h>

void my_memmove(void *p1, void const *p2, size_t count)
{
	assert(p1);
	assert(p2);
	char *dest = (char *)p1;
	char *src = (char *)p2;
	if ((dest > src) && (dest < src + count))  //�ж��ڴ��ص�ʱ�����
	{
		while (count--)
		{
			*(dest + count) = *(src + count);
		}
	}
	else       //�жϲ��ص��ǵ����
	{
		while (count--)
		{
			*dest++ = *src++;
		}

	}
	return p1;
}
