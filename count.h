/*统计*/
void Count(stu *p);			

void Count(stu *p)
{
	double csum=0,cave=0,msum=0,mave=0,esum=0,eave=0,psum=0,pave=0;
	double cmax=0,cmin=9999,mmax=0,mmin=9999,emax=0,emin=9999,pmax=0,pmin=9999;
	stu *pcmax=NULL,*pcmin=NULL,*pmmax=NULL,*pmmin=NULL,*pemax=NULL,*pemin=NULL,*ppmax=NULL,*ppmin=NULL;
	if(n!=0)
	{ 
		printf("学生总数:%d\n", n);
		while(p!=NULL)
		{
			if(p->chinese>cmax)
			{
				cmax=p->chinese;
				pcmax=p;
			}
			if(p->chinese<cmin)
			{
				cmin=p->chinese;
				pcmin=p;
			}
			csum+=p->chinese,cave=csum/n;

			if(p->math>mmax)
			{
				mmax=p->math;
				pmmax=p;
			}
			if(p->math<mmin)
			{
				mmin=p->math;
				pmmin=p;
			}
			msum+=p->math,mave=msum/n;

			if(p->english>emax)
			{
				emax=p->english;
				pemax=p;
			}
			if(p->english<emin)
			{
				emin=p->english;
				pemin=p;
			}
			esum+=p->english,eave=esum/n;

			if(p->point>pmax)
			{
				pmax=p->point;
				ppmax=p;
			}
			if(p->point<pmin)
			{
				pmin=p->point;
				ppmin=p;
			}
			psum+=p->point,pave=psum/n;
			
			p=p->next;
		}
	}
	else 
		printf("[!]提示:无学生数据,请输入数据!\n");
	printf("\n学号\t姓名\t年龄\t性别\t语文\t数学\t英语\t总分\t平均\n");
	printf("───────────────────────────────────────\n");
	printf("语文最高分:\n");
	printf(PT,pcmax->num,pcmax->name,pcmax->age,pcmax->sex,pcmax->chinese,pcmax->math,pcmax->english,pcmax->point,pcmax->average);
	printf("语文最低分:\n");
	printf(PT,pcmin->num,pcmin->name,pcmin->age,pcmin->sex,pcmin->chinese,pcmin->math,pcmin->english,pcmin->point,pcmin->average);
	printf("数学最高分:\n");
	printf(PT,pmmax->num,pmmax->name,pmmax->age,pmmax->sex,pmmax->chinese,pmmax->math,pmmax->english,pmmax->point,pmmax->average);
	printf("数学最低分:\n");
	printf(PT,pmmin->num,pmmin->name,pmmin->age,pmmin->sex,pmmin->chinese,pmmin->math,pmmin->english,pmmin->point,pmmin->average);
	printf("英语最高分:\n");
	printf(PT,pemax->num,pemax->name,pemax->age,pemax->sex,pemax->chinese,pemax->math,pemax->english,pemax->point,pemax->average);
	printf("英语最低分:\n");
	printf(PT,pemin->num,pemin->name,pemin->age,pemin->sex,pemin->chinese,pemin->math,pemin->english,pemin->point,pemin->average);
	printf("总分最高分:\n");
	printf(PT,ppmax->num,ppmax->name,ppmax->age,ppmax->sex,ppmax->chinese,ppmax->math,ppmax->english,ppmax->point,ppmax->average);
	printf("总分最低分:\n");
	printf(PT,ppmin->num,ppmin->name,ppmin->age,ppmin->sex,ppmin->chinese,ppmin->math,ppmin->english,ppmin->point,ppmin->average);
	printf("───────────────────────────────────────\n");
	printf("语文平均分为:%.2lf\t数学平均分为:%.2lf\t英语平均分为:%.2lf\n总分平均分为:%.2lf\n",cave,mave,eave,pave);
	printf("───────────────────────────────────────\n");
	getch();
	system("cls");
}
