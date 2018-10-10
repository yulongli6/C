#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3


void menu()
{
	printf("***************************************\n");
	printf("**********      1.play       **********\n");
	printf("**********      0.exit       **********\n");
	printf("***************************************\n");
}


int IsFull(char arr[ROW][COL], int  row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


char IsWin(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if ((arr[i][0] == arr[i][1]) && (arr[i][1] == arr[i][2]) && (arr[i][0] != ' '))
		{
			return arr[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		if ((arr[0][i] == arr[1][i]) && (arr[1][i] == arr[2][i]) && (arr[0][i] != ' '))
		{
			return arr[0][i];
		}
	}
	if ((arr[0][0] == arr[1][1]) && (arr[1][1] == arr[2][2]) && (arr[0][0] != ' '))
	{
		return arr[1][1];
	}
	if ((arr[0][2] == arr[1][1]) && (arr[1][1] == arr[2][0]) && (arr[2][0] != ' '))
	{
		return arr[1][1];
	}
	if (IsFull(arr, row, col))
	{
		return 'q';
	}
	return ' ';
}


void PlaverMove(char arr[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("ÇëÊäÈë×ø±ê£º>");
		scanf("%d%d", &x, &y);
		x--;
		y--;
		if ((x <= 2) && (x >= 0) && (y <= 2) && (y >= 0))
		{
			if (arr[x][y] == ' ')
			{
				arr[x][y] = 'X';
				return;
			}
		}
		printf("×ø±êÓÐÎó\n");
	}
}


void ComputerMove(char arr[ROW][COL])
{
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % 3;
		y = rand() % 3;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '0';
			break;
		}
	}
}


// void Initboard(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			arr[i][j] = ' ';
//			
//		}
//	}
//}


void Display(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n", arr[i][0], arr[i][1], arr[i][2]);
		if (i != row - 1)
		{
			printf("---|---|---\n");
		}
	}
	printf("\n-------------------------------------\n");
}


void game()
{
	char arr[ROW][COL];
	char ret = 0;
	int	input = 0;
	memset(arr, ' ', ROW* COL* sizeof(arr[0][0]));//³õÊ¼»¯ÆåÅÌ
	//Initboard(arr, ROW, COL);
	Display(arr, ROW, COL);//´òÓ¡ÆåÅÌ
	do
	{
		ComputerMove(arr);//µçÄÔ×ß
		Display(arr, ROW, COL);
		ret = IsWin(arr, ROW, COL);//ÅÐ¶ÏÊäÓ®
		if (ret != ' ')
		{
			break;
		}
		PlaverMove(arr, ROW, COL);
		Display(arr, ROW, COL);//Íæ¼Ò×ß
		ret = IsWin(arr, ROW, COL);//ÅÐ¶ÏÊäÓ®
	} while (ret == ' ');
	if (ret == 'X')
	{
		printf("Íæ¼ÒÓ®\n");
	}
	else if (ret == '0')
	{
		printf("µçÄÔÓ®\n");
	}
	else if (ret == 'q')
	{
		printf("Æ½¾Ö\n");
	}
}


void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ£º>");
		scanf("%d", &input);
		switch (input)//Ñ¡Ôñ²Ëµ¥
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("Ñ¡Ôñ´íÎó\n");
			break;
		}

	} while (input);
}


int main()
{
	test();//²âÊÔº¯Êý
	return 0;
}
