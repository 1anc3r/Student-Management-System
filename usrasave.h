/*�����û�*/
void usraSave(usr *p);

void usraSave(usr *p)
{
	FILE *fp;
	usr *usr=NULL;
	if((fp=fopen("usr.txt","ab+"))==NULL)
	{
		printf("�ļ���ʧ��!\n");
		getch();
		exit(0);
	}
	for(usr=p->next;usr!=NULL;usr=usr->next)
	{
		fprintf(fp,"%d %s %s\n",usr->power,usr->id,usr->password);
	}
	fclose(fp);
}
