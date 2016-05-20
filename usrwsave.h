/*保存用户*/
void usrwSave(usr *p);

void usrwSave(usr *p)
{
	FILE *fp;
	usr *usr=NULL;
	if((fp=fopen("usr.txt","wb+"))==NULL)
	{
		printf("文件打开失败!\n");
		getch();
		exit(0);
	}
	for(usr=p->next;usr!=NULL;usr=usr->next)
	{
		fprintf(fp,"%d %s %s\n",usr->power,usr->id,usr->password);
	}
	fclose(fp);
}
