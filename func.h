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
	int num;					//学号
	int age;					//年龄
	char name[10];				//姓名
	char sex[10];				//性别
	double chinese;				//语文
	double english;				//英语
	double math;				//数学
	double point;				//总分
	double average;				//平均
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

#include "position.h"			//坐标
#include "usread.h"				//读取用户
#include "usrasave.h"			//追加用户
#include "usrwsave.h"			//覆盖用户
#include "sturead.h"			//读取信息
#include "stuasave.h"			//追加信息
#include "stuwsave.h"			//覆盖信息
#include "login.h"				//登录
#include "register.h"			//注册
#include "forget.h"				//改密
#include "setup.h"				//开始
#include "menu.h"				//菜单
#include "enter.h"				//录入
#include "browse.h"				//浏览
#include "query.h"				//查找
#include "modify.h"				//修改
#include "delete.h"				//删除
#include "sort.h"				//排序
#include "count.h"				//统计

#endif
