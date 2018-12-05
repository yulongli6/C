#define _CRT_SECURE_NO_DEPRECATE 1
//2.使用可变参数，实现函数，求函数参数的平均值。

//
//#include "stdio.h"
//#include<stdarg.h>
//int average(int n, ...)
//{
//	va_list arg;
//	int i = 0;
//	int sum = 0;
//	va_start(arg, n);
//	for ( i = 0; i < n; i++)
//	{
//		sum+=va_arg(arg, int);
//	}
//	return sum / n;
//	va_end(arg);
//}
//int main()
//{
//	int avg1 = average(3, 2, 2, -4);
//	int avg2 = average(5, 2, 5, 0, 4, 4);
//	printf("avg1=%d\n", avg1);
//	printf("avg2=%d\n", avg2);
//	return 0;
//}
//3.使用可变参数，实现函数，求函数参数的最大值。
//


//
//#include "stdio.h"
//#include "stdarg.h"
//int MAX(int *format, ...)
//{
//	va_list arg;
//	int i = 0;
//	va_start(arg, format);
//	int max = va_arg(arg, int);
//	for (i = 1; i < format; i++)
//	{
//		int m=va_arg(arg, int);
//		if (max < m)
//		{
//			int temp = m;
//			m = max;
//			max = temp;
//		}
//	}
//	return max;
//	va_end(arg);
//}
//int main()
//{
//	int max = MAX(4, -4, 1, 2, 3);
//	printf("max=%d\n", max);
//	return 0;
//}
//4.1.模拟实现printf函数，可完成下面的功能

//4.1.模拟实现printf函数，可完成下面的功能
//
//// 
////能完成下面函数的调用。 
////print("s ccc d.\n","hello",'b','i','t'，100); 
////函数原型： 
////print(char *format, ...) 
//// 
//#include "stdio.h"
//#include "stdarg.h"
//void show(int n)
//{
//	if (n > 9)
//	{
//		show(n / 10);
//	}
//	putchar(n % 10 + '0');
//}
//void print(const char *format, ...)
//{
//	va_list arg;
//	va_start(arg, format);
//	while (*format)
//	{
//		switch (*format)
//		{
//		case 's':
//		{
//			char* ret = va_arg(arg, char*);
//			while (*ret)
//			{
//				putchar(*ret);
//				ret++;
//			}
//			break;
//		}
//		case 'c':
//		{
//			int ch = va_arg(arg, char);
//			putchar(ch);
//		}
//		break;
//		case 'd':
//		{
//			int ret = va_arg(arg, int);
//			show(ret);
//		}
//		break;
//		default:
//			putchar(*format);
//			break;
//		}
//		format++;
//	}
//}
//
//int main()
//{
//	print("s ccc d.\n", "hello", 'b', 'i', 't', 100);
//	return 0;
//}

