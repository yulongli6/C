#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <math.h>
//����1��һֻ����һ�ο�������1��̨�ף�Ҳ��������2��̨�ס�����������n��̨���ܹ��ж�����������
int frog_jump_steps1(int n)
{
	if (n <= 0)
	{
		printf("�������\n");
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

//����2��ÿ�ο�����1--n��̨�ף�
#include <stdio.h>
int frog_jump_steps2(int n)
{
	if (n <= 0)
	{
		printf("�������\n");
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
