/*读取信息*/
stu *stuRead();

stu *stuRead() 
{
	FILE *fp;
	stu *phead,*pend,*pnew;
	if((fp=fopen("student.txt","rt+"))==NULL)
	{
		printf("文件打开失败!\n");
		getch();
		exit(0);
	}
	pnew=0;
	n=0;
	phead=(stu*)malloc(sizeof(stu));
	phead->next=NULL;
	pend=phead;
	while(!feof(fp)) 
	{
		pnew=(stu*)malloc(sizeof(stu));
		fscanf(fp,"%d %s %d %s %lf %lf %lf %lf %lf\n",&pnew->num,pnew->name,&pnew->age,pnew->sex,&pnew->chinese,&pnew->math,&pnew->english,&pnew->point,&pnew->average);
		pend->next=pnew;
		pend=pnew;
		n++;
	}
	pend->next=NULL;
	fclose(fp);
	system("cls");
	return phead;
}
