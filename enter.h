/*¼��*/
stu *Enter();				

stu *Enter()
{
	int k;
	stu *p;
	stu *phead,*pend,*pnew;
	n=0;
	phead=(stu*)malloc(sizeof(stu));
	pend=phead;
	do
	{
		flag:
		pnew=(stu*)malloc(sizeof(stu));
		printf("��������������������������������������\n");
        printf("��������������������������������������\n");
        printf("����         ¼��ѧ����Ϣ         ����\n");
        printf("��������������������������������������\n");
        printf("��������������������������������������\n");
        printf("����������ѧ����ѧ��:             ����\n");
        printf("����������ѧ��������:             ����\n");
        printf("����������ѧ��������:             ����\n");
        printf("����������ѧ�����Ա�:             ����\n");
        printf("����������ѧ��������:             ����\n");
        printf("����������ѧ������ѧ:             ����\n");
        printf("����������ѧ����Ӣ��:             ����\n");
        printf("��������������������������������������\n");
        printf("����         [1]��������.         ����\n");
        printf("����         [0]�������.         ����\n");
        printf("��������������������������������������\n");
        printf("��������������������������������������\n");
		Position(22,6);
		scanf("%d",&pnew->num);
		Position(22,7);
		scanf("%s",pnew->name);
		Position(22,8);
		scanf("%d",&pnew->age);
		Position(22,9);
		scanf("%s",pnew->sex);
		Position(22,10);
		scanf("%lf",&pnew->chinese);
		Position(22,11);
		scanf("%lf",&pnew->math);
		Position(22,12);
		scanf("%lf",&pnew->english);
		Position(26,15);
		scanf("%d",&k);
		p=stuRead();
		while(p->next!=NULL)
		{
			if(p->next->num==pnew->num)
			{
				printf("[!]��ʾ:��ѧ���Ѵ���!\n");
				getch();
				goto flag;
			}
			else
			{
				p=p->next;
			}
		}
		pnew->point=pnew->chinese+pnew->math+pnew->english;
		pnew->average=pnew->point/3;		
		pend->next=pnew;
		pend=pnew;
		n++;						
		if(k==0)
			break;
		system("cls");
	}while(k==1);
	pend->next=NULL;
	system("cls");
	printf("��ʾ:¼��%d��ѧ����Ϣ!������������˵�...",n);
	getch();
	system("cls");
	return phead;
}
