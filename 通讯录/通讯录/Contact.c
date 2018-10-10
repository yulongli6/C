#define _CRT_SECURE_NO_DEPRECATE 1
#define _CRT_SECURE_NO_DEPRECATE 1
#include "Contact.h"


void InintContact(Contact *p)
{
	assert(p);
	memset(p->date, '0', sizeof(p->date));
}


int Find(Contact *p, char* pname)
{
	assert(p&&pname);
	for (int i = 0; i < p->sz; i++)
	{
		if (strcmp(p->date[i].name, pname) == 0)
		{
			return i;
		}
	}
	return -1;
}




void menu1()
{
	printf("*****************************\n");
	printf("***  1.name        2.age  ***\n");
	printf("***  3.sex         4.tel  ***\n");
	printf("***  5.addr        0.exit ***\n");
	printf("*****************************\n");
}



void AddContact(Contact *p)
{
	assert(p);
	if ((p->sz) == MAX)
	{
		printf("ͨѶ¼����\n");
		return;
	}
	printf("������������> ");
	scanf("%s", p->date[p->sz].name);
	printf("���������䣺> ");
	scanf("%d", &(p->date[p->sz].age));
	printf("�������Ա�> ");
	scanf("%s", p->date[p->sz].sex);
	printf("������绰��> ");
	scanf("%s", p->date[p->sz].tele);
	printf("�������ַ��> ");
	scanf("%s", p->date[p->sz].addr);
	p->sz++;
	printf("��ӳɹ�\n");
}


void ShowContact(Contact *p)
{
	assert(p);
	int i = 0;
	printf("%11s\t%5s\t%5s\t%10s\t%10s\n",
		"name", "age", "sex", "tele", "addr");
	for (i = 0; i < (p->sz); i++)
	{
		printf("%10s\t%5d\t%5s\t%10s\t%10s\n",
			p->date[i].name,
			p->date[i].age,
			p->date[i].sex,
			p->date[i].tele,
			p->date[i].addr);
		printf("\n");
	}
}



void SearchContact(Contact *p)
{
	assert(p);
	char name[MAX_NAME] = { 0 };
	int ret = 0;
	printf("������Ҫ�����˵�������>");
	scanf("%s", name);
	ret = Find(p, name);
	if (ret != -1)
	{
		printf("%10s\t%5d\t%5s\t%10s\t%10s\n",
			p->date[ret].name,
			p->date[ret].age,
			p->date[ret].sex,
			p->date[ret].tele,
			p->date[ret].addr);
	}
	else
		printf("���ҵ���ϵ�˲�����\n");
}
void DelContact(Contact *p)
{
	assert(p);
	char name[MAX_NAME] = { 0 };
	int ret = 0;
	int input = 0;
	printf("��������Ҫɾ����������>");
	scanf("%s", name);
	ret = Find(p, name);
	if (ret != -1)
	{
		printf("�Ƿ�ɾ������ϵ��?\n");
		printf("-----------------------------\n");
		printf("---  1.yes         0.no   ---\n");
		printf("-----------------------------\n");
		scanf("%d", &input);
		if (input == 1)
		{
			for (int i = ret; i < p->sz - 1; i++)
			{
				p->date[i] = p->date[i + 1];
			}
			p->sz--;
			printf("ɾ���ɹ�\n");
		}
		else
			printf("ɾ��ʧ��\n");
	}
	else
		printf("��ɾ������ϵ�˲�����\n");
}



void EmptyContact(Contact *p)
{
	p->sz = 0;
	printf("�����\n");
}



void SortContact(Contact *p)
{
	int i = 0;
	int j = 0;
	int flag = 0;
	for (i = 0; i < p->sz - 1; i++)
	{
		for (j = 0; j < p->sz - 1 - i; j++)
		{
			if (strcmp(p->date[j].name, p->date[j + 1].name)>0)
			{

				PeoInfo	tmp = p->date[j];
				p->date[j] = p->date[j + 1];
				p->date[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
	printf("���������\n");
}



void ReverseContact(Contact *p)
{
	char name[MAX_NAME] = { 0 };
	int ret = 0;
	printf("������Ҫ�޸ĵ���ϵ��������>");
	scanf("%s", name);
	ret = Find(p, name);
	if (ret != -1)
	{
		printf("%10s\t%5d\t%5s\t%10s\t%10s\n",
			p->date[ret].name,
			p->date[ret].age,
			p->date[ret].sex,
			p->date[ret].tele,
			p->date[ret].addr);
		int input = 0;
		do
		{
			menu1();
			printf("��������Ҫ�޸ĵ���Ŀ;>");
			scanf("%d", &input);
			switch (input)
			{
			case 0:
				break;
			case 1:
				printf("�������޸ĵ�������>");
				scanf("%s", p->date[ret].name);
				break;
			case 2:
				printf("�������޸ĵ����䣺>");
				scanf("%s", p->date[ret].age);
				break;
			case 3:
				printf("�������޸ĵ��Ա�>");
				scanf("%s", p->date[ret].sex);
				break;
			case 4:
				printf("�������޸ĵĵ绰��>");
				scanf("%s", p->date[ret].tele);
				break;
			case 5:
				printf("�������޸ĵĵ�ַ��>");
				scanf("%s", p->date[ret].addr);
				break;
			default:
				printf("�������\n");
				break;
			}
			printf("�޸ĳɹ�\n");
		} while (input);
	}
	else
		printf("��Ҫ�޸ĵ���ϵ�˲�����");
}

