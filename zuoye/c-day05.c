#define _CRT_SECURE_NO_DEPRECATE 1
//1.��ɲ�������Ϸ��
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
//		printf("���һ����:>\n");
//		while (ret != num)
//		{
//			scanf("%d", &num);
//			if (num > ret)
//			{
//				printf("��µĴ���!\n");
//			}
//			else if (num<ret)
//			{
//				printf("��µ�С��!\n");
//			}
//			if (ret == num)
//			{
//				printf("��ϲ��¶���!\n����1������һ��\n����0���˳���Ϸ\n");
//			}
//		}
//		printf("���������ѡ��:\n");
//		scanf("%d", &con);
//	}
//	return 0;
//}
//2.д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
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
//	printf("�밴��С��������10������:>");
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]);i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int a = 0;
//	int ret=0 ;
//	printf("������������ҵ�����:>");
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
//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, ������󣬿����������룬����������Ρ����ξ�������ʾ�˳�����
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
//		printf("���������룺>");
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
//		printf("�����������˰�.\n");
//		exit(0);
//	}else
//	{
//		printf("login success\n");
//	}
//	return 0;
//}

//4.��дһ�����򣬿���һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������


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
