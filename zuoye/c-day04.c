#define _CRT_SECURE_NO_DEPRECATE 1
//1.����Ļ���������ͼ����
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


//2.���0��999֮������С�ˮ�ɻ��������������ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
//�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
//����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
//153 = 1^3 + 5^3 + 3^3��
//370 = 3^3 + 7^3 + 0^3��
//371 = 3^3 + 7^3 + 1^3��
//407 = 4^3 + 0^3 + 7^3��
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
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2 + 22 + 222 + 2222 + 22222
//


//#include "stdio.h"
//#include "math.h"
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 1;
//	printf("������һ��һλ����>");
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



//4.��дһ���������ӱ�׼�����ȡCԴ���룬����֤���еĻ����Ŷ���ȷ�ĳɶԳ��֡�
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
//				printf("��ƥ��\n");
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
//			printf("ƥ��\n");
//		}
//		else
//			printf("��ƥ��\n");
//	return  0; 
//}