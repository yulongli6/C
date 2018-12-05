#define _CRT_SECURE_NO_DEPRECATE 1
//1.实现strcpy
//#include <assert.h>
//#include <stdio.h>
//char* my_strcpy(char* dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest&&src);
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20];
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//2.实现strcat
//
//#include <stdio.h>
//#include <assert.h>
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest&&src);
//	while (*dest)
//	{
//		dest++;
//	}
//	while ((*dest++=*src++))
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "welcome to bite";
//	char arr2[50] = "my baby ";
//	my_strcat(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
////3.实现strstr
//
//#include<stdio.h>
//#include <assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str2&&str1);
//	char* p1 = (char*)str1;
//	char* p2 = (char*)str2;
//	char *s1 = NULL;
//	if (*str2 == '\0')
//		return NULL;
//	while (*p1)
//	{
//		s1 = p1;
//		p2 = (char*)str2;
//		while (*s1&&*p2 && (*s1==*p2))
//		{
//			s1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return p1;
//		}
//		p1++;
//	}
//}
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbcd";
//	char* ret=my_strstr(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}
////4.实现strchr
//#include<stdio.h>
//#include <assert.h>
//char* my_strchr(const char* dest, char c)
//{
//	assert(dest!=NULL);
//	char* p = (char*)dest;
//	if (*p == '\0')
//	{
//		return NULL;
//	}
//	while (*p)
//	{
//		if (*p==c)
//		{
//			return p;
//		}
//		p++;
//	}
//}
//int main()
//{
//	char arr[] = "abcfcfac";
//	char c = 'f';
//	char* ret = my_strchr(arr, c);
//	printf("%s\n", ret);
//	return 0;
//}
////5.实现strcmp
//#include<stdio.h>
//#include <assert.h>
//int my_strcmp(const char* dest, const char* src)
//{
//	assert(dest&&src);
//	while ((*dest == *src) && *dest&&*src)
//	{
//	if ((*dest=='\0')||(*src=='\0'))
//	{
//		return 0;
//	}
//		dest++;
//		src++;
//	}
//	if (*dest>*src)
//	{
//	return 1;
//	}
//	else
//	return -1;
//
//}
//int main()
//{
//	char arr1[] = "dfgy";
//	char arr2[] = "gygyy";
//	int ret =my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}
////6.实现memcpy
//#include<stdio.h>
//#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	assert(dest&&src);
//	void* ret=dest;
//	while (count)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest+1;
//		src = (char*)src + 1;
//		count--;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[50];
//	char arr2[] = "abcdef";
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	my_memcpy(arr1, arr2, sz);
//	printf("%s\n", arr1);
//	return 0;
//}
////7.实现memmove

//#include<stdio.h>
//#include <assert.h>
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest&&src);
//	void* ret = dest;
//	if (dest <= src || (char*)dest >= ((char*)src+count))
//	{
//		while (count)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest+1;
//			src = (char*)src + 1;
//			count--;
//		}
//	}
//	else
//	{
//		dest = (char*)dest + count - 1;
//		src = (char*)src + count - 1;
//		while (count)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest - 1;
//			src = (char*)src - 1;
//			count--;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdef";
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	my_memmove(arr1, arr2, sz);
//	printf("%s\n", arr1);
//	return 0;
//}