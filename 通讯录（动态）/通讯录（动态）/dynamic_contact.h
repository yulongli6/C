#ifndef __CONTACT_H__
#define __CONTACT_H__


#include <stdio.h>
#include "string.h"
#include <assert.h>
#include <stdlib.h>


#define MAX_NAME 25
#define MAX_TELE 12
#define MAX_ADDR 25
#define MAX_SEX 10
#define DEFAULT_SZ 3//Ĭ������
#define DEFAULT_INC 2//Ĭ����������



typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	char sex[MAX_SEX];
}PeoInfo;

typedef struct Contact
{
	PeoInfo *date;
	int sz;//ʵ�ʸ���
	int capacity;//����
}Contact, *pCon;

void InitContact(Contact *p);//��ʼ��
void AddContact(Contact *p);//�����ϵ��
void ShowContact(Contact *p);//��ʾ��ϵ��
void SearchContact(Contact *p);//������ϵ��
void DelContact(Contact *p);//ɾ����ϵ��
void EmptyContact(Contact *p);//�����ϵ��
void SortContact(Contact *p);//������ϵ��
void ReverseContact(Contact *p);//�޸���ϵ��
void DestroyContact(Contact *p);//����




#endif // __CONTACT_H__