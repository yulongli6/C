#define _CRT_SECURE_NO_DEPRECATE 1
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//
//#include "stdio.h"
//#include "stdlib.h"
//void swap(char arr[], int z,int k)
//{
//	
//	int i = 0;
//	int j = 0;
//	char t = 0;
//	while (k>0)
//	{
//		t = arr[0];
//		for ( j = 0; j < z-1; j++)
//		{
//			arr[j]	=arr[j + 1];
//			arr[z-1 ] = t;
//		}
//		k--;
//	}
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int k = 0;
//	int z = sizeof(arr) / sizeof(arr[0]);
//	printf("�����������ַ��ĸ�����");
//	scanf("%d", &k);
//	swap(arr,z,k);
//	printf("����������У�");
//	for (int i = 0; i < z-1;i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 �� AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC

//#include "stdio.h"
//#include "string.h"
//int swap(char arr1[], char arr2[])
//{
//	int i = 0;
//	int j = 0;
//	int len = strlen(arr1);
//	for (i = 0;  i < len; i++)
//	{
//		int t = arr1[0];
//		for (j = 0; j < len - 1;j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = t;
//		if (0==strcmp(arr1,arr2))
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int ret = 0;
//	char arr1[10] = "AABCD";
//	char arr2[10] = "BCDAA";
//	ret=swap(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}