#define _CRT_SECURE_NO_DEPRECATE 1
//1.дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ�� 
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
//2.��ȡһ�������������������е�ż��λ������λ���ֱ�������������С�
//

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int count=0;
//	scanf("%d", &num);
//	printf("ż�����У�");
//	for (i = 31; i>0;i-=2)
//	{
//		count = (num >> i) & 1;
//		printf("%d", count);
//	}
//	printf("\n");
//	printf("�������У�");
//	for (i = 30; i >=0; i-=2)
//	{
//		count = (num >> i) & 1;
//		printf("%d", count);
//	}
//	return 0;
//}
//3. ���һ��������ÿһλ��
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	printf("������һ������");
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
//	printf("������һ������");
//	scanf("%d", &num);
//	fun(num);
//	return 0;
//}
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7

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
//	printf("��������������");
//	scanf("%d%d", &m,&n);
//	ret=fun(m, n);
//	printf("%d\n", ret);
//	return 0;
//}
