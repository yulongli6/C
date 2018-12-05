//1. 打印100~200 之间的素数
//2. 输出乘法口诀表
//3. 判断1000年-- - 2000年之间的闰年
//#include<stdio.h>
//#include<math.h>
//int main()
//
//{
//	
//	int i=0;
//	int j = 0;
//	int count=0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <sqrt(i); j++)
//		{
//			if ((i%j) == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d  ", i);
//		}
//			
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %2d  ", i, j, i*j);
//
//		}
//		printf("\n");
//	}
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int year;
//	int i = 1;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//		{
//			count++;
//			printf("%d  ", year);
//			if (i % 5 == 0)
//				printf("\n");
//			i++;
//		}
//		
//	}	
//	printf("\ncount=%d\n", count);
//	return 0;
//}