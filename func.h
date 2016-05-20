#ifndef _FUNC_
#define _FUNC_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>

#define PT "%d\t%s\t%d\t%s\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n"

typedef struct student   
{
	int num;					//ѧ��
	int age;					//����
	char name[10];				//����
	char sex[10];				//�Ա�
	double chinese;				//����
	double english;				//Ӣ��
	double math;				//��ѧ
	double point;				//�ܷ�
	double average;				//ƽ��
	struct student *next;
}stu;

typedef struct user
{
	int power;
	char id[15];
	char password[15];
	struct user *next;
}usr;

int n=0;
int m=0;

#include "position.h"			//����
#include "usread.h"				//��ȡ�û�
#include "usrasave.h"			//׷���û�
#include "usrwsave.h"			//�����û�
#include "sturead.h"			//��ȡ��Ϣ
#include "stuasave.h"			//׷����Ϣ
#include "stuwsave.h"			//������Ϣ
#include "login.h"				//��¼
#include "register.h"			//ע��
#include "forget.h"				//����
#include "setup.h"				//��ʼ
#include "menu.h"				//�˵�
#include "enter.h"				//¼��
#include "browse.h"				//���
#include "query.h"				//����
#include "modify.h"				//�޸�
#include "delete.h"				//ɾ��
#include "sort.h"				//����
#include "count.h"				//ͳ��

#endif
