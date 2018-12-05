#define _CRT_SECURE_NO_DEPRECATE 1
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
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
//	printf("请输入左旋字符的个数：");
//	scanf("%d", &k);
//	swap(arr,z,k);
//	printf("左旋后的排列：");
//	for (int i = 0; i < z-1;i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 ＝ AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

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