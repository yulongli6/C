#define _crt_secure_no_deprecate 1

#include "stdio.h"


//ָ��ʵ��
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


//�ݹ�ʵ��
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


//����ʵ��
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
