#define _CRT_SECURE_NO_DEPRECATE 1
//1.完成猜数字游戏。
//

//#include "stdio.h"
//#include "stdlib.h"
//#include "time.h"
//int main()
//{
//	int ret = 0;
//	int num = 101;
//	int con =1;
//	while (con == 1)
//	{
//		srand((unsigned)time(NULL));
//		ret = rand() % 101;
//		printf("请猜一个数:>\n");
//		while (ret != num)
//		{
//			scanf("%d", &num);
//			if (num > ret)
//			{
//				printf("你猜的大了!\n");
//			}
//			else if (num<ret)
//			{
//				printf("你猜的小了!\n");
//			}
//			if (ret == num)
//			{
//				printf("恭喜你猜对了!\n输入1：再玩一次\n输入0：退出游戏\n");
//			}
//		}
//		printf("请输入你的选择:\n");
//		scanf("%d", &con);
//	}
//	return 0;
//}
//2.写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回 - 1.（折半查找）
//
//#include "stdio.h"
//int bin_search(int arr[], int x, int len)
//{
//	int left = 0;
//	int right = len - 1; 
//	while (left<=right)
//	{
//		int mid = (left&right) + ((left^right) >> 1);
//		if (x>arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (x < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10];
//	int i = 0;
//	printf("请按从小到大输入10个数字:>");
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int a = 0;
//	int ret=0 ;
//	printf("请输入你想查找的数字:>");
//	scanf("%d", &a);
//	ret= bin_search(arr, a, sizeof(arr) / sizeof(arr[0]));
//	if (ret==-1)
//	{
//		printf("not exist\n");
//	}
//	else
//	{
//		printf("ret=%d\n", ret);
//	}
//	return 0;
//}
//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。
//

//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[7];
//	int i = 0;
//	for(i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		//gets(input);
//		scanf("%s", input);
//		if (0 == strcmp(input, "123456"))
//		{
//			break;
//		}
//		flushall();
//	}
//	if (i == 3)
//	{
//		printf("你忘记密码了吧.\n");
//		exit(0);
//	}else
//	{
//		printf("login success\n");
//	}
//	return 0;
//}

//4.编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。


//#include "stdio.h"
//int main()
//{
//	char ch = getchar();
//	if (ch<='z'&&ch>='a')
//	{
//		printf("%c\n", ch - 32);
//	}
//	else if (ch<='Z'&&ch>='A')
//	{
//		printf("%c\n", ch + 32);
//	}
//	if (ch <= '9'&&ch >= '0')
//	{
//	}
//	return 0;
//}
