#define _CRT_SECURE_NO_DEPRECATE 1
//1.使用main函数的参数，实现一个整数计算器，程序可以接受三个参数，第一个参数“ - a”选项执行加法，“ - s”选项执行减法，“ - m”选项执行乘法，“ - d”选项执行除法，后面两个参数为操作数。
//
//例如：命令行参数输入：test.exe - a 1 2
//执行1 + 2输出3
//

//#include<stdio.h>
//#include<stdlib.h>
//
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int Sub(int a, int b)
//{
//	return a - b;
//}
//
//int Mul(int a, int b)
//{
//	return a * b;
//}
//
//int Div(int a, int b)
//{
//	if (0 == b)
//	{
//		printf("错误,不能除以0 \n");
//	}
//	return a / b;
//}
//int main(int argc, char*argv[], char*envp[])
//{
//	int ret = 0;
//	if (argc != 4)
//	{
//		printf("参数错误\n");
//		return 0;
//	}
//	switch (argv[1][1])
//	{
//	case 'a':
//		ret = Add(atoi(argv[2]), atoi(argv[3]));
//		break;
//	case 's':
//		ret = Sub(atoi(argv[2]), atoi(argv[3]));
//		break;
//	case 'm':
//		ret = Mul(atoi(argv[2]), atoi(argv[3]));
//		break;
//	case 'd':
//		ret = Div(atoi(argv[2]), atoi(argv[3]));
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//2.写冒泡排序可以排序多个字符串。
//#include<stdio.h>
//#include <string.h>
//void bubble_sort(char** p, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i;j++)
//		{
//			if (strcmp(p[j], p[j+1]) > 0)
//			{
//				char* temp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	char* arr[] = { "ssssssss", "aaaaa" ,"ccccccc","bbbbbbbb" };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}
//排序一个字符串
//#include <stdio.h>
//#include <string.h>
//char* rank(char* arr)
//{
//	char* start = arr;
//	char* end = arr+1;
//	char* right =arr+strlen(arr) - 1;
//	char* left = arr;
//	char* ret = arr;
//	while (right>left)
//	{
//		char* start = arr;
//		char* end = arr + 1;
//		while (*end!='\0')
//		{
//			if (*start < *end)
//			{
//				char* p = *start;
//				*start = *end;
//				*end = p;
//			}
//			start++;
//			end++;
//		}
//		right--;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[] = "gdfjjfhffug";
//	rank(arr);
//	printf("%s\n",arr);
//	return 0;
//}