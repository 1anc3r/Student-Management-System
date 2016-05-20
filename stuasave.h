/*追加信息*/
void stuaSave(stu *p);

void stuaSave(stu *p)
{
	FILE *fp;
	stu *stu=NULL;
	if((fp=fopen("student.txt","at+"))==NULL)
	{
		printf("文件打开失败!\n");
		getch();
		exit(0);
	}
	for(stu=p->next;stu!=NULL;stu=stu->next)
	{
		fprintf(fp,"%d %s %d %s %.2lf %.2lf %.2lf %.2lf %.2lf\n",stu->num,stu->name,stu->age,stu->sex,stu->chinese,stu->math,stu->english,stu->point,stu->average);
	}
	fclose(fp);
	system("cls");
}
