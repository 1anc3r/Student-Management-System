/*删除*/
void Delete(stu *p);			

void Delete(stu *p)
{
	int num;
	stu *q;
	q=p->next;
	if(n!=0)
	{
		printf("─────────────────\n");
		printf("请输入您要删除的学生的学号(0.取消):\n");
		printf("─────────────────\n");
		Position(36,2);
		scanf("%ld", &num);
		if(num==0)
		{
			goto flag;
		}
		printf("\n");
		while(q->next!=NULL&&q->num!=num)
		{
			p=p->next;
			q=p->next;
		}
		if(q->num==num)
		{
			p->next=q->next;
			free(q);
			n--;
			goto flag;
		}
		else
		{
			printf("[!]提示:没有该学生记录,请核对!\n");
		}
	}
	else
		printf("[!]提示:无学生数据,请输入数据!\n");
		getch();
        system("cls");
	flag:
	system("cls");
	printf("[!]提示:删除完毕!任意键返回主菜单...\n");
	getch();
	system("cls");
}
