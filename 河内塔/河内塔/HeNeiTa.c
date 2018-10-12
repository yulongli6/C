#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <math.h>

int Heneita(int n, char a, char b, char c,int *count)
{
	if (n == 1)
	{
		*count = 1;
		printf("%c-->%c\n", a, c);
		return 1;
	}
	int count1;
	int count2;
	int count3;
	Heneita(n - 1, a, c, b, &count1);
    Heneita(1, a, b, c, &count2);
	Heneita(n - 1, b, a, c, &count3);
	*count = count1 + count2 + count3;
	return *count;
}

int main()
{
	int n = 0;
	int count;
	scanf("%d", &n);
	Heneita(n, 'A', 'B', 'C', &count);
	printf("%d\n", count);
	return 0;
}
