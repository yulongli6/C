#define _CRT_SECURE_NO_DEPRECATE 1
#include "Contact.h"


void menu()
{
	printf("********************************\n");
	printf("***  1.add         2.search  ***\n");
	printf("***  3.del         4.empty   ***\n");
	printf("***  5.sort        6.revise  ***\n");
	printf("***  7.show        0.exit    ***\n");
	printf("********************************\n");
}



enum
{
	EXIT,
	ADD,
	SEARCH,
	DEL,
	EMPTY,
	SORT,
	REVISE,
	SHOW
};

Contact con;

void test()
{
	int input = 0;
	InintContact(&con);
	do
	{
		menu();
		printf("���������ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case EMPTY:
			EmptyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case REVISE:
			ReverseContact(&con);
			break;
		case EXIT:
			break;
		default:
			printf("�����������������룺>\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}

