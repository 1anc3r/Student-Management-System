/*录入*/
stu *Enter();				

stu *Enter()
{
	int k;
	stu *p;
	stu *phead,*pend,*pnew;
	n=0;
	phead=(stu*)malloc(sizeof(stu));
	pend=phead;
	do
	{
		flag:
		pnew=(stu*)malloc(sizeof(stu));
		printf("┌─────────────────┐\n");
        printf("│┌───────────────┐│\n");
        printf("││         录入学生信息         ││\n");
        printf("│└───────────────┘│\n");
        printf("│┌───────────────┐│\n");
        printf("││请输入学生的学号:             ││\n");
        printf("││请输入学生的名字:             ││\n");
        printf("││请输入学生的年龄:             ││\n");
        printf("││请输入学生的性别:             ││\n");
        printf("││请输入学生的语文:             ││\n");
        printf("││请输入学生的数学:             ││\n");
        printf("││请输入学生的英语:             ││\n");
        printf("││───────────────││\n");
        printf("││         [1]继续输入.         ││\n");
        printf("││         [0]输入完毕.         ││\n");
        printf("│└───────────────┘│\n");
        printf("└─────────────────┘\n");
		Position(22,6);
		scanf("%d",&pnew->num);
		Position(22,7);
		scanf("%s",pnew->name);
		Position(22,8);
		scanf("%d",&pnew->age);
		Position(22,9);
		scanf("%s",pnew->sex);
		Position(22,10);
		scanf("%lf",&pnew->chinese);
		Position(22,11);
		scanf("%lf",&pnew->math);
		Position(22,12);
		scanf("%lf",&pnew->english);
		Position(26,15);
		scanf("%d",&k);
		p=stuRead();
		while(p->next!=NULL)
		{
			if(p->next->num==pnew->num)
			{
				printf("[!]提示:该学生已存在!\n");
				getch();
				goto flag;
			}
			else
			{
				p=p->next;
			}
		}
		pnew->point=pnew->chinese+pnew->math+pnew->english;
		pnew->average=pnew->point/3;		
		pend->next=pnew;
		pend=pnew;
		n++;						
		if(k==0)
			break;
		system("cls");
	}while(k==1);
	pend->next=NULL;
	system("cls");
	printf("提示:录入%d个学生信息!任意键返回主菜单...",n);
	getch();
	system("cls");
	return phead;
}
