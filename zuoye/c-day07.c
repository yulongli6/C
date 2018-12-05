#define _CRT_SECURE_NO_DEPRECATE 1
//1.
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//

//
//#include<stdio.h>
//void MUL(int n)
//{
//	int i=0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i;j++)
//		{
//			printf(" %2d*%2d=%3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入你想打印的参数：");
//	scanf("%d", &n);
//	MUL(n);
//	return 0;
//}

//2.
//使用函数实现两个数的交换。
//
//#include "stdio.h"
//void swap(int* x, int* y)
//{
//	int z = *x;
//	*x = *y;
//	*y = z;
//}
//int main()
//{
//	int a = 0; 
//	int b = 0;
//	printf("请输入两个数：");
//	scanf("%d%d", &a, &b);
//	swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//3.
//实现一个函数判断year是不是润年。
//
//#include"stdio.h"
//int judge(int year)
//{
//	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	printf("please a year:");
//		scanf("%d", &year);
//		ret = judge(year);
//		if (ret == 1)
//		{
//			printf("yes");
//		}
//		else
//			printf("no");
//	return 0;
//}
//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//
//#include<stdio.h>
//void init(int arr[],int sz)
//{
//	int i = 0;
//	
//	for (i = 0; i < 5; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void empty(int arr[], int sz)
//{
//	init(arr, sz);
//}
//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz/2; i++)
//	{
//		int temp = arr[i];
//		arr[i] = arr[sz - i - 1];
//		arr[sz - i - 1]=temp;
//
//	}
//}
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);//输出初始化的数组
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)//还原数组
//	{
//		arr[i] = i + 1;
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	empty(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);//输出清空后的数组
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)//还原数组
//	{
//		arr[i] = i + 1;
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	reverse(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);//输出逆置后的数组
//	}
//	printf("\n");
//	return 0;
//}
//5.实现一个函数，判断一个数是不是素数。
//#include "stdio.h"
//#include "math.h"
//int judge(int n)
//{
//	int i = 0;
//	for ( i = 2; i < sqrt(n);i++)
//	{
//		if (n%i == 0)
//		{
//			break;
//		}
//
//	}
//	if (i>sqrt(n))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret=judge(n);
//	if (ret == 0)
//	{
//		printf("no");
//	}
//	else
//		printf("yes");
//	return 0;
//}