//1.将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
//#include<stdio.h>
//int main()
//{
//	int A[10] = { 1, 3, 7, 5, 7, 9, 5, -100, -2, 2};
//	int B[10] = { 7, 8, 9, 4, 5, 6, 1, 2, 3, 0 };
//	int tmp;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		tmp = A[i];  
//		A[i] = B[i];
//		B[i] = tmp;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%4d ", A[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%4d ", B[i]);
//	}
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	float add = 1;
//	int i = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		if (i%2==0)
//		add = add - 1.0 / i;
//		else
//		add = add + 1.0 / i;
//	}
//	printf("add=%5f", add);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i / 10 == 9) || (i % 10 == 9))
//		{
//			count++;	
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}