#define _CRT_SECURE_NO_DEPRECATE 1
//1.һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�
//#include <stdio.h>
//
//void find_diff_num(int arr[], int sz, int* px, int* py)
//{
//	int i = 0;
//	int num = 0;
//	int pos = 0;
//	for (i = 0; i < sz; i++)
//	{
//		num ^= arr[i];
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if ((arr[i]>>pos)&1==1)
//		{
//			*px ^= arr[i];
//		}
//		else
//			*py ^= arr[i];
//	}
//	
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 2, 1, 3, 3, 5, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n1 = 0;
//	int n2 = 0;
//	find_diff_num(arr, sz, &n1, &n2);
//	printf("%d %d\n", n1, n2);
//	return 0;
//}




//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֡�
//
//#include <stdio.h>
//int main()
//{
//	int a =20 ; 
//	int count = 0;
//	for (int i = 1; i <= a;i++)
//	{
//		count = 2 * i-1;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int total = 0;
//	int empty = 0;
//	int money = 0;
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}
//3.ģ��ʵ��strcpy
//#include <assert.h>
//#include <stdio.h>
//char* my_strcpy(char* dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest&&src);
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20];
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//4.ģ��ʵ��strcat
//
//#include <stdio.h>
//#include <assert.h>
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest&&src);
//	while (*dest)
//	{
//		dest++;
//	}
//	while ((*dest++=*src++))
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "welcome to bite";
//	char arr2[50] = "my baby ";
//	my_strcat(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}