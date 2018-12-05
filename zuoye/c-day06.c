#define _CRT_SECURE_NO_DEPRECATE 1
//1.写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}
//


//#include<stdio.h>
//int count_one_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n&(n - 1);
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	scanf("%d", &num);
//	ret = count_one_bit(num);
//	printf("%d\n", ret);
//	return 0;
//}
//2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。
//

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int count=0;
//	scanf("%d", &num);
//	printf("偶数序列：");
//	for (i = 31; i>0;i-=2)
//	{
//		count = (num >> i) & 1;
//		printf("%d", count);
//	}
//	printf("\n");
//	printf("奇数序列：");
//	for (i = 30; i >=0; i-=2)
//	{
//		count = (num >> i) & 1;
//		printf("%d", count);
//	}
//	return 0;
//}
//3. 输出一个整数的每一位。
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	printf("请输入一个数：");
//	scanf("%d", &num);
//	while (num!=0)
//	{
//		if (num < 0)
//		{
//			num = -num;
//		}
//		printf("%d", num % 10);
//		num/=10;
//	}
//	return 0;
//}
//
//#include "stdio.h"
//void fun(int n)
//{
//	if  (n != 0)
//	{
//		if (n < 0)
//		{
//			n = -n;
//		}
//		printf("%d", n % 10);
//		fun(n/10);
//	}
//}
//
//int main()
//{
//	int num = 0;
//	printf("请输入一个数：");
//	scanf("%d", &num);
//	fun(num);
//	return 0;
//}
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

//#include "stdio.h"
//int fun(int x,int y)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32;i++)
//	{
//		if (((x >> i) & 1) != ((y >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int m = 0; 
//	int n = 0;
//	int ret = 0;
//	printf("请输入两个数：");
//	scanf("%d%d", &m,&n);
//	ret=fun(m, n);
//	printf("%d\n", ret);
//	return 0;
//}
