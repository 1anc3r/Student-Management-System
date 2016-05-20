int Login();

int Login()
{
	int i=0;
	user *p;
	int tempmod;
	char tempid[20],tempass[20],ch;
	system("cls");
	printf("©°©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©´\n");
	printf("©¦©°©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©´©¦\n");
	printf("©¦©¦    	µÇÂ¼		  ©¦©¦\n");
	printf("©¦©¸©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¼©¦\n");
	printf("©¦©°©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©´©¦\n");
	printf("©¦©¦                              ©¦©¦\n");
	printf("©¦©¦   ©°©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©´   ©¦©¦\n");
	printf("©¦©¦   ©¦ÕÊºÅ:               ©¦   ©¦©¦\n");
	printf("©¦©¦   ©¦                    ©¦   ©¦©¦\n");
	printf("©¦©¦   ©¦                    ©¦   ©¦©¦\n");
	printf("©¦©¦   ©¦ÃÜÂë:       	     ©¦   ©¦©¦\n");
	printf("©¦©¦   ©¸©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¼   ©¦©¦\n");
	printf("©¦©¦                              ©¦©¦\n");
	printf("©¦©¸©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¼©¦\n");
	printf("©¸©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¼\n");
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
		if((strcmp(tempid,p->next->id)==0)&&(strcmp(tempass,p->next->password)==0))
		{
			tempower=p->next->power;
			return tempower;
		}
		else
		{
			p=p->next;
		}
	}
	printf("[!]ÎÞÓÃ»§,Çë×¢²á!\n");
	getch();
	return 0;
}
