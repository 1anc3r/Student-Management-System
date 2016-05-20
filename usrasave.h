/*保存用户*/
void usraSave(usr *p);

void usraSave(usr *p)
{
	FILE *fp;
	usr *usr=NULL;
	if((fp=fopen("usr.txt","ab+"))==NULL)
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
