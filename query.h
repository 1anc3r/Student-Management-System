/*查找*/
void Query(stu *p);				

void Query(stu *p)
{
	int k;
	int num;
	char name[20];
	if(n!=0)
	{
		do
		{   
			system("cls");
			printf("┌─────────────────┐\n");
			printf("│┌───────────────┐│\n");
			printf("││             查询             ││\n");
			printf("│└───────────────┘│\n");
			printf("│┌───────────────┐│\n");
			printf("││                              ││\n");
			printf("││   ┌──────────┐   ││\n");
			printf("││   │ 学号        请按 1 │   ││\n");
			printf("││   │ 姓名        请按 2 │   ││\n");
			printf("││   │                    │   ││\n");
			printf("││   │ 取消        请按 0 │   ││\n");
			printf("││   └──────────┘   ││\n");
			printf("││                              ││\n");
			printf("│└───────────────┘│\n");
			printf("└─────────────────┘\n"); 
			scanf("%d", &k);
			system("cls");
			switch(k)
			{
				case 0 :
					goto flag;
					break;
				case 1 :
					printf("─────────────────\n");
					printf("请输入学生的学号:\n");
					printf("─────────────────\n");
					Position(18,2);
					scanf("%d", &num);
					while(p->next!=NULL&&p->num!=num)
					{
						p=p->next;
					}
					if(p->num==num)
					{
						printf("\n学号\t姓名\t年龄\t性别\t语文\t数学\t英语\t总分\t平均\n");
						printf("───────────────────────────────────────\n");
						printf(PT,p->num,p->name,p->age,p->sex,p->chinese,p->math,p->english,p->point,p->average);
					}
					else
						printf("[!]提示:没有该学生记录,请核对!\n");
				break;
				case 2 :
					printf("─────────────────\n");
					printf("请输入学生的姓名:\n");
					printf("─────────────────\n");
					Position(18,2);
					scanf("%s", name);
					while(p->next!=NULL&&(strcmp(name,p->name)!=0))
					{
						p=p->next;
					}
					if(strcmp(name,p->name)==0)
					{
						printf("\n学号\t姓名\t年龄\t性别\t语文\t数学\t英语\t总分\t平均\n");
						printf("───────────────────────────────────────\n");
						printf(PT,p->num,p->name,p->age,p->sex,p->chinese,p->math,p->english,p->point,p->average);
					}
					else
						printf("[!]提示:没有该学生记录,请核对!\n");
				break;
				default :
					printf("\n[!]提示:无效选项!\n");
				break;
			}
			getch();
			system("cls");
    	}while(k!=0);
   	}
	else
		printf("[!]提示:无学生数据,请输入数据!\n");
		getch();
        system("cls");
    flag:printf("[!]提示:查询完毕!任意键返回主菜单...\n");
    getch();
    system("cls");
}
