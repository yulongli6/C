#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <math.h>
//问题1：一只青蛙一次可以跳上1个台阶，也可以跳上2个台阶。求青蛙跳上n级台阶总共有多少种跳法？
int frog_jump_steps1(int n)
{
	if (n <= 0)
	{
		printf("输入错误\n");
		return 0;
	}
	else if (n == 1 || n == 2)
	{
		return 1;
	}
	else if (n > 2)
	{
		return frog_jump_steps1(n - 1) + frog_jump_steps1(n - 2);
	}
}

//问题2：每次可以跳1--n个台阶；
#include <stdio.h>
int frog_jump_steps2(int n)
{
	if (n <= 0)
	{
		printf("输入错误\n");
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return 2 * frog_jump_steps2(n - 1);
	}
}



int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = frog_jump_steps1(n);
	printf("%d\n", ret);

	ret = frog_jump_steps2(n);
	printf("%d\n", ret);
	return 0;
}
