#define _CRT_SECURE_NO_DEPRECATE 1
//1.在屏幕上输出以下图案：
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*
//
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	char arr1[14] = { '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*' };
//	char arr2[14] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
//	char arr3[14] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
//		for (i = 0; i <7; i++)
//		{
//			for (j=0; j <2*i+1; j ++)
//			{
//				arr2[j] = arr1[j];
//			}
//		 printf("%s\n", arr2);	
//		}
//		for (i = 0; i <6; i++)
//		{
//			for (j = 0; j < 2*i+ 2; j++)
//			{
//				arr1[12-j] = arr3[12-j];
//			}
//			printf("%s\n", arr1);
//		}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr1[] = "*************";
//	char arr2[] = "             ";
//	char arr3[] = "             ";
//	int len =strlen(arr1);
//	int left = 0;
//	int right = len - 1;
//	while (left <len)
//	{
//			arr2[left] = arr1[left];
//			printf("%s\n", arr2);
//			arr2[left + 1] = arr1[left + 1];
//			left += 2;
//	}
//	while (right>1)
//	{
//		arr2[right] = arr3[right];
//		arr2[right-1] = arr3[right-1];
//		right-=2;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 7; i++)
//	{
//		for (j = 0; j < 2*i+1;j++)
//		{
//			printf("*");
//
//
//		}
//		printf("\n");
//	}
//	for (i = 1; i < 7; i++)
//	{
//		for (j =1; j<=13-2*i; j++)
//		{
//			printf("*");
//
//		}
//		printf("\n");
//	}
//	return 0;
//}


//2.求出0～999之间的所有“水仙花数”并输出。“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
//在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
//例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
//153 = 1^3 + 5^3 + 3^3。
//370 = 3^3 + 7^3 + 0^3。
//371 = 3^3 + 7^3 + 1^3。
//407 = 4^3 + 0^3 + 7^3。
//*/
//
//


//#include<stdio.h>
//int main()
//{
//	int one = 0;
//	int ten = 0;
//	int hun = 0;
//	int i = 0;
//	for (i = 1; i <= 999;i++)
//	{
//		one= i% 10;
//		ten = i / 10 % 10;
//		hun = i / 10 / 10;
//		if (i==one*one*one+ten*ten*ten+hun*hun*hun)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//3.
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，例如：2 + 22 + 222 + 2222 + 22222
//


//#include "stdio.h"
//#include "math.h"
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 1;
//	printf("请输入一个一位数：>");
//	scanf("%d", &a);
//	int sum = a;
//	int Sn = a;
//	for (i = 1; i < 5; i++)
//	{
//		b = b*10;
//		sum = sum + a * b;
//	    Sn = Sn + sum ;
//	}
//	printf("Sn=%d\n", Sn);
//	return 0;
//}



//4.编写一个程序，它从标准输入读取C源代码，并验证所有的花括号都正确的成对出现。
//#include "stdio.h"
//#include "stdlib.h"
//int main()
//{
//	char input[10];
//	int count = 0;
//    gets(input);
//	int left = 0;
//	
//	for (left = 0; left < 10; left++)
//		{
//			if ((input[left] == '}') && count == 0)
//			{
//				printf("不匹配\n");
//				return 0;
//			}
//			else if (input[left] == '{')
//			{
//				count++;
//			}
//			else if (input[left] == '}')
//			{
//				count--;
//			}
//		}
//		if (count == 0)
//		{
//			printf("匹配\n");
//		}
//		else
//			printf("不匹配\n");
//	return  0; 
//}