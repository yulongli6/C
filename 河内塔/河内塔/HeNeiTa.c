#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <math.h>

int Heneita(int n, char a, char b, char c)
{
	if (n == 1)
	{
		printf("%c-->%c\n", a, c);
	}
	else
	{
		Heneita(n - 1, a, c, b);
		Heneita(1, a, b, c);
		Heneita(n - 1, b, a, c);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	Heneita(n, 'A', 'B', 'C');
	printf("%d\n", (int)pow(2, n) - 1);
	return 0;
}
