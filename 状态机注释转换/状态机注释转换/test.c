#define _CRT_SECURE_NO_DEPRECATE 1
#include "CommentConvert.h"

void test()
{
	FILE* pfread = NULL;
	FILE* pfwrite = NULL;
	pfread = fopen("input.c", "r");
	if (pfread == NULL)
	{
		perror("open file for read");
		exit(EXIT_FAILURE);
	}
	pfwrite = fopen("output.c", "w");
	if (pfwrite == NULL)
	{
		perror("open file for write");
		exit(EXIT_FAILURE);
	}
	CommentConvert(pfread, pfwrite);
	fclose(pfread);
	pfread = NULL;
	fclose(pfwrite);
	pfwrite = NULL;
}


int main()
{
	test();
	return 0;
}