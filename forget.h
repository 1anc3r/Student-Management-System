/*����*/
int Forget();			

int Forget()
{
	int i;
	usr *p,*q;
	char tempid[20],tempass[20],ch;
	printf("��������Ҫ�޸ĵ��û��ʺ�:");
	scanf("%s", &tempid);
	q=usrRead();
	p=q;
	while(p!=NULL)
	{
		if(strcmp(tempid,p->id)==0)
		{
			printf("��������Ҫ�޸ĵ��û�����:");
			while(1) 
			{ 
				ch=getch();
				if(ch=='\r')
				{
					tempass[i]='\0';
					break;
				}
				tempass[i]=ch; 
				printf("*"); 
				i++;
			}
			strcpy(p->password,tempass);
			usrwSave(q);
			Sleep(200); 
			return 1;
		}
		else
		{
			p=p->next;
		}
	}
	printf("���û�,��ע��!\n");
	getch();
	return 0;
}
