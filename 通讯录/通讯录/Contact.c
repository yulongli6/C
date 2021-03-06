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
		printf("通讯录已满\n");
		return;
	}
	printf("请输入姓名：> ");
	scanf("%s", p->date[p->sz].name);
	printf("请输入年龄：> ");
	scanf("%d", &(p->date[p->sz].age));
	printf("请输入性别：> ");
	scanf("%s", p->date[p->sz].sex);
	printf("请输入电话：> ");
	scanf("%s", p->date[p->sz].tele);
	printf("请输入地址：> ");
	scanf("%s", p->date[p->sz].addr);
	p->sz++;
	printf("添加成功\n");
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
	printf("请输入要查找人的姓名：>");
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
		printf("你找的联系人不存在\n");
}
void DelContact(Contact *p)
{
	assert(p);
	char name[MAX_NAME] = { 0 };
	int ret = 0;
	int input = 0;
	printf("请输入你要删除的姓名：>");
	scanf("%s", name);
	ret = Find(p, name);
	if (ret != -1)
	{
		printf("是否删除该联系人?\n");
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
			printf("删除成功\n");
		}
		else
			printf("删除失败\n");
	}
	else
		printf("你删除的联系人不存在\n");
}



void EmptyContact(Contact *p)
{
	p->sz = 0;
	printf("已清空\n");
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
	printf("已完成排序\n");
}



void ReverseContact(Contact *p)
{
	char name[MAX_NAME] = { 0 };
	int ret = 0;
	printf("请输入要修改的联系人姓名：>");
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
			printf("请输入你要修改的项目;>");
			scanf("%d", &input);
			switch (input)
			{
			case 0:
				break;
			case 1:
				printf("请输入修改的姓名：>");
				scanf("%s", p->date[ret].name);
				break;
			case 2:
				printf("请输入修改的年龄：>");
				scanf("%s", p->date[ret].age);
				break;
			case 3:
				printf("请输入修改的性别：>");
				scanf("%s", p->date[ret].sex);
				break;
			case 4:
				printf("请输入修改的电话：>");
				scanf("%s", p->date[ret].tele);
				break;
			case 5:
				printf("请输入修改的地址：>");
				scanf("%s", p->date[ret].addr);
				break;
			default:
				printf("输入错误\n");
				break;
			}
			printf("修改成功\n");
		} while (input);
	}
	else
		printf("你要修改的联系人不存在");
}

