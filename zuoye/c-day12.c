//4.有一个字符数组的内容为:"student a am i", 请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。只能开辟有限个空间（空间个数和字符串的长度无关）。

//#include<stdio.h>
//int main()
//{
//	char c[15] = "student a am i";
//	printf("%s\n", c);
//	char arr[15];
//	arr[6] = c[7];
//	arr[5] = c[8];
//	arr[4] = c[9];
//	arr[2] = c[10];
//	arr[3] = c[11];
//	arr[1] = c[12];
//	arr[0] = c[13];
//	int i;
//	int j = 7;
//	for (i = 0; i <= 6; i++)
//	{
//
//		arr[j] = c[i];
//		j++;
//	}
//	arr[14] = '\0';
//	printf("%s\n", arr);
//	return 0;
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算） 

//
//#include<stdio.h>
//int main()
//{
//	int a[5] = { 2, 3, 4, 3, 2 };
//	int i;
//	int j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (i == j)
//			{
//				continue;
//			}
//			if (((a[i] & a[j]) == a[i]) && ((a[i] & a[j]) == a[j]))
//				break;
//		}
//		if (j == 5)
//		{
//			printf("%d\n", a[i]);
//		}
//	}
//	return 0;
//}

//
//2.不使用（a + b） / 2这种方式，求两个数的平均值



// #include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 6;
//	float   c;
//	c = (a + b) >> 1;
//	printf("%2f\n", c);
//	return 0;
//}


//
//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回 值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//
//