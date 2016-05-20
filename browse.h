/*浏览*/
void Browse(stu *p);			

void Browse(stu *p)
{
	if(n!=0)
	{ 
		printf("学生总数:%d\n", n);
		printf("\n学号\t姓名\t年龄\t性别\t语文\t数学\t英语\t总分\t平均\n");
		printf("───────────────────────────────────────\n");
		while(p!=NULL)
		{
			printf(PT,p->num,p->name,p->age,p->sex,p->chinese,p->math,p->english,p->point,p->average);
			p=p->next;
		}
		printf("───────────────────────────────────────\n");
	}
	else 
		printf("提示:无学生数据,请输入数据!\n");
	getch();
	system("cls");
}
