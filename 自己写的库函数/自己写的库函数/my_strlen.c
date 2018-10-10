#define _crt_secure_no_deprecate 1

#include "stdio.h"


//指针实现
int my_strlen(char* arr)
{
	char* p = arr;
	while (*arr)
	{
		arr++;
	}
	return arr - p;
}


int my_strlen(const char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}


//递归实现
int my_strlen(const char* arr)
{
	if (*arr == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen(arr + 1);
	}
}


//算术实现
#include<stdio.h>
int my_strlen(const char* arr)
{
	int count = 0;
	while (*arr)
	{
		count++;
		arr++;
	}
	return count;
}
