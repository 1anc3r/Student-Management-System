int Register();

int Register()
{
	int i=0;
	int tempower;
	usr *p;
	usr *phead,*pend,*pnew;
	char tempid[20],tempass[20],ch,id,word;
	system("cls");
	printf("┌─────────────────┐\n");
	printf("│┌───────────────┐│\n");
	printf("││    	注册		  ││\n");
	printf("│└───────────────┘│\n");
	printf("│┌───────────────┐│\n");
	printf("││                              ││\n");
	printf("││   ┌──────────┐   ││\n");
	printf("││   │ 请选择权限:        │   ││\n");
	printf("││   │ [1]---学生         │   ││\n");
	printf("││   │ [2]---老师         │   ││\n");
	printf("││   │ [3]---管理         │   ││\n");
	printf("││   └──────────┘   ││\n");
	printf("││                              ││\n");
	printf("│└───────────────┘│\n");
	printf("└─────────────────┘\n");
	scanf("%d",&tempower);
	system("cls");
	printf("┌─────────────────┐\n");
	printf("│┌───────────────┐│\n");
	printf("││    	注册		  ││\n");
	printf("│└───────────────┘│\n");
	printf("│┌───────────────┐│\n");
	printf("││                              ││\n");
	printf("││   ┌──────────┐   ││\n");
	printf("││   │帐号:               │   ││\n");
	printf("││   │                    │   ││\n");
	printf("││   │                    │   ││\n");
	printf("││   │密码:       	     │   ││\n");
	printf("││   └──────────┘   ││\n");
	printf("││                              ││\n");
	printf("│└───────────────┘│\n");
	printf("└─────────────────┘\n");
	Position(15,8);
	i=0;
	while((id=getch())!='\r') 
	{ 
		if(i<15&&id!='\b')
		{
			tempid[i++]=id; 
			printf("%c",id); 
		}
		if(i>0&&id=='\b')
		{
			--i;
			putchar('\b');
			putchar(' ');
			putchar('\b');
		}
		if(i==15)
		{
			break;
		}
	}
	putchar('\n');
	tempid[i]='\0';
	Position(15,11);
	i=0;
	while((word=getch())!='\r') 
	{ 
		if(i<15&&word!='\b')
		{
			tempasswd[i++]=word; 
			printf("*"); 
		}
		if(i>0&&word=='\b')
		{
			--i;
			putchar('\b');
			putchar(' ');
			putchar('\b');
		}
		if(i==15)
		{
			break;
		}
	}
	putchar('\n');
	tempasswd[i]='\0';
	Sleep(200);
	p=usrRead();
	while(p->next!=NULL)
	{
		if(strcmp(tempid,p->next->id)==0)
		{
			printf("[!]提示:该用户已存在!\n");
			getch();
			return 0;
		}
		else
		{
			p=p->next;
		}
	}    
	phead=(usr*)malloc(sizeof(usr));
	pend=phead;
	pnew=(usr*)malloc(sizeof(usr));
	pnew->power=tempower;
	strcpy(pnew->id,tempid);
	strcpy(pnew->password,tempass);
	pend->next=pnew;
	pend=pnew;
	pend->next=NULL;
	usraSave(phead);
	system("cls");
	return 1;
}
