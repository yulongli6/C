#define _CRT_SECURE_NO_DEPRECATE 1
//1.ʹ��main�����Ĳ�����ʵ��һ��������������������Խ���������������һ�������� - a��ѡ��ִ�мӷ����� - s��ѡ��ִ�м������� - m��ѡ��ִ�г˷����� - d��ѡ��ִ�г�����������������Ϊ��������
//
//���磺�����в������룺test.exe - a 1 2
//ִ��1 + 2���3
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
//		printf("����,���ܳ���0 \n");
//	}
//	return a / b;
//}
//int main(int argc, char*argv[], char*envp[])
//{
//	int ret = 0;
//	if (argc != 4)
//	{
//		printf("��������\n");
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
//		printf("�������\n");
//		break;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//2.дð����������������ַ�����
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
//����һ���ַ���
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