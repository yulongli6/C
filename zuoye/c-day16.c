#define _CRT_SECURE_NO_DEPRECATE 1
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//

//#include "stdio.h"
//int fbn(int n)
//{
//	int f = 0;
//	if (n<=2)
//	{
//		f=1;
//	}
//	else
//	{
//
//		f = fbn(n - 1) + fbn(n - 2);
//	}
//	return f;
//}
//int main()
//{
//	int n = 0;
//	printf("��������Ҫ���λ�ã�");
//	scanf("%d", &n);
//	int ret = fbn(n);
//	printf("%d\n", ret);
//	return 0;
//}
//#include "stdio.h"
//int fbn(int n)
//{
//		return (n <= 2 ? 1 : fbn(n - 1) + fbn(n - 2));
//}
//int main()
//{
//	int n = 0;
//	printf("��������Ҫ���λ�ã�");
//	scanf("%d", &n);
//	int ret = fbn(n);
//	printf("%d\n", ret);
//	return 0;
//}
//#include "stdio.h"
//int fbn(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//if (n<=2)
//{
//	return a;
//}
//else
//{
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}	
//}
//int main()
//{
//	int n = 0;
//	printf("��������Ҫ���λ�ã�");
//	scanf("%d", &n);
//	int ret = fbn(n);
//	printf("%d\n", ret);
//	return 0;
//}
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
////
////
//#include<stdio.h>
//int power(int n, int k)
//{
//	int s = 1;
//	if (k>0)
//	{
//		return power(n, k - 1)*n;
//	}
//	else
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	scanf("%d%d", &n, &k);
//	ret = power(n, k);
//	printf("%d^%d=%d\n", n, k, ret);
//	return 0;
//}
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ����磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//#include "stdio.h"
//int  DigitSum(int n)
//{
//	if (n > 9)
//		return n % 10 + DigitSum(n / 10);
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("������һ���Ǹ�������>");
//	scanf("%d",&n);
//	ret=DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}
////4. ��дһ������reverse_string(char * string)���ݹ�ʵ�֣�
////ʵ�֣��������ַ����е��ַ��������С�
////Ҫ�󣺲���ʹ��C��������
////���ַ�������������
//#include "stdio.h"
//#include "string.h"
//#include <assert.h>
//int my_strlen(char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//char*  reverse_string(char* string)
//{
//assert(string);
//	char* start = string;
//	char* end = string + my_strlen(string) - 1;
//    char temp;
//	if (my_strlen(string)>1)
//	{
//		 temp = *start;
//		*start = *end;
//		*end = '\0';
//		reverse_string(string + 1);
//		*end = temp;
//		
//	}
//	return string;
//}
//int main()
//{
//	char arr[]= "hello world";
//	printf("%s\n", reverse_string(arr));
//	return 0;
//}

//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//#include "stdio.h"
//int my_strlen( char* arr)
//{
//	char* p = arr;
//	while (*arr)
//	{
//		arr++;
//	}
//	return arr - p;
//}
//int main()
//{
//	int ret = 0;
//	char* arr = "hello world";
//	ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}
//#include "stdio.h"
//int my_strlen(const char* arr)
//{
//	if (*arr=='\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//}
//int main()
//{
//	int ret = 0;
//	char* arr = "hello world";
//	ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(const char* arr)
//{
//	int count = 0;
//    while (*arr)
//	 {
//		count++;
//		 arr++;
//      }
//	return count;
//}
//int main()
//{
//	int ret = 0;
//	char* arr = "hello world";
//	ret=my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//#include<stdio.h>
//int fun(int n)
//{
//	if (n>1)
//	{
//		return n*fun(n - 1);
//	}
//	else if (n==0||n==1)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fun(n);
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = n; i > 0;i--)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//		return 0;
//}
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//#include "stdio.h"
//void print(int n)
//{
//	if (n>10)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}