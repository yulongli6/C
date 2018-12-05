//1. 给定两个整形变量的值，将两个值的内容进行交换。
//2. 不允许创建临时变量，交换两个数的内容（附加题）
//3.求10 个整数中最大值。
//4.将三个数按从大到小输出。
//5.求两个数的最大公约数。



//#include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int i = 0;
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		int c;
//		c = a;
//		a = b;
//		b = c;
//	}
//	for (i = b; i >= 1; i--)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			printf("最大公约数is%d\n", i);
//			break;
//		}
//	}
//	
//	return 0;
//}


//#include<stdio.h>
//void swap(int *x,int *y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y =tmp;
//
//	return 0;
//}
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		swap(&a, &b);
//	}
//	if (a < c)
//	{
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		swap(&b, &c);
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1l, 23, 1, 0, 34, 11, 245, -7, -1000, 21 };
//	int i = 0;
//	int a;
//	for (i = 0; i <10;i++)
//		if (arr[0] <= arr[i])
//		{
//			a = arr[i];  
//			arr[i] = arr[0];
//			arr[0]= a;
//		}
//	printf("%d\n", arr[0]);
//	return 0;
//}



//
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 9;
//	a = b - a;
//	b = b - a;
//	a = b + a;
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}



// #include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	scanf("%d%d", &a, &b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}

