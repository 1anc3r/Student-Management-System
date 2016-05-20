/*修改*/
void Modify(stu *p);			

void Modify(stu *p)
{
	int num;
	int k;
	if(n!=0)
	{
		printf("─────────────────\n");
		printf("请输入您要修改的学生的学号(0.取消):\n");
		printf("─────────────────\n");
		Position(36,2);
		scanf("%ld", &num);
		if(num==0)
		{
			goto flag;
		}
		printf("\n");
		while(p->next!=NULL&&p->num!=num)
		{
			p=p->next;
		}
		if(p->num==num)
		{
			do
			{
				system("cls");
				printf("┌─────────────────┐\n");
				printf("│┌───────────────┐│\n");
				printf("││    	修改		  ││\n");
				printf("│└───────────────┘│\n");
				printf("│┌───────────────┐│\n");
				printf("││ 学号                  请按 1 ││\n");
				printf("││ 姓名                  请按 2 ││\n");
				printf("││ 年龄                  请按 3 ││\n");
				printf("││ 性别                  请按 4 ││\n");
				printf("││ 语文                  请按 5 ││\n");
				printf("││ 数学                  请按 6 ││\n");
				printf("││ 英语                  请按 7 ││\n");
				printf("││ 取消                  请按 0 ││\n");
				printf("│└───────────────┘│\n");
				printf("└─────────────────┘\n"); 
				scanf("%d", &k);
				system("cls");
				switch(k)
				{
					case 0: 
						goto flag;
						break;
					case 1:
						printf("─────────────────\n");
						printf("请输入新学号:\n");
						printf("─────────────────\n");
						Position(14,2);
						scanf("%d",&p->num);
					break;
					case 2:
						printf("─────────────────\n");
						printf("请输入新姓名:\n");
						printf("─────────────────\n");
						Position(14,2);
						scanf("%s",p->name);
					break;
					case 3:
						printf("─────────────────\n");
						printf("请输入新年龄:");
						printf("─────────────────\n");
						Position(14,2);
						scanf("%d",&p->age);
					break;
					case 4:
						printf("─────────────────\n");
						printf("请输入新性别:\n");
						printf("─────────────────\n");
						Position(14,2);
						scanf("%s",p->sex);
					break;
					case 5:
						printf("─────────────────\n");
						printf("请输入新语文:\n");
						printf("─────────────────\n");
						Position(14,2);
						scanf("%lf",&p->chinese);
					break;
					case 6:
						printf("─────────────────\n");
						printf("请输入新数学:\n");
						printf("─────────────────\n");
						Position(14,2);
						scanf("%lf",&p->math);
					break;
					case 7:
						printf("─────────────────\n");
						printf("请输入新英语:\n");
						printf("─────────────────\n");
						Position(14,2);
						scanf("%lf",&p->english);
					break;
					default:
						printf("[!]无效选项!\n");
    		        break;
				}
				getch();
				system("cls");
			}while(k!= 0);
		}
		else
			printf("[!]提示:没有该学生记录,请核对!\n");
			getch();
            system("cls");
	}
	else
		printf("[!]提示:无学生数据,请输入数据!\n");
		getch();
        system("cls");
	flag:printf("[!]提示:修改完毕!任意键返回主菜单...\n");
	getch();
	system("cls");
}
