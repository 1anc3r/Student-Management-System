/*读取用户*/
usr *usrRead();

usr *usrRead() 
{
	FILE *fp;
	usr *phead,*pend,*pnew;
	if((fp=fopen("usr.txt","rb+"))==NULL)
	{
		printf("文件打开失败!\n");
		getch();
		exit(0);
	}
	pnew=0;
	phead=(usr*)malloc(sizeof(usr));
	phead->next=NULL;
	pend=phead;
	while(!feof(fp)) 
	{
		pnew=(usr*)malloc(sizeof(usr));
		fscanf(fp,"%d %s %s\n",&pnew->power,pnew->id,pnew->password);
		pend->next=pnew;
		pend=pnew;
	}
	pend->next=NULL;
	fclose(fp);
	return phead;
}
