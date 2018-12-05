#define _CRT_SECURE_NO_DEPRECATE 1
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：

//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。
//
//
//#include "stdio.h"
//int fun(int *arr1,int sz)
//{
//	int i=0;
//	int j =0;
//	for (i= 0; i<(sz-1);i++)
//	{
//		if (arr1[i]%2!=0)
//		{
//			continue;
//		}
//		else
//		{
//			for (j = i + i; j<(sz - 1); j++)
//			{
//				if (arr1[j]%2!=0)
//				{
//					int t = arr1[i];
//					arr1[i] = arr1[j];
//					arr1[j] = t;
//				}
//				else
//				{
//					continue;
//				}
//			}
//			
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	fun(arr,sz);
//	for (int i = 0; i < sz - 1;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	
//	return 0;
//}

//2.
//
////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6

//#include "stdio.h"
//int main()
//{
//	int i = 0;
//	int j=0;
//	int a[3][3] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 } };
//	int x = 1;
//	for ( i = 0; i < 3; i++)
//	{
//		for ( j = 0; j < 3; j++)
//		{
//			if (a[i][j] == x)
//			{
//				printf("存在\n");
//				break;
//			}
//		}
//		break;
//	}
//	if (j==3)
//	{
//		printf("不存在\n");
//	}
//	return 0;
//}