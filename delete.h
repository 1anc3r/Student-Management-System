/*ɾ��*/
void Delete(stu *p);			

void Delete(stu *p)
{
	int num;
	stu *q;
	q=p->next;
	if(n!=0)
	{
		printf("����������������������������������\n");
		printf("��������Ҫɾ����ѧ����ѧ��(0.ȡ��):\n");
		printf("����������������������������������\n");
		Position(36,2);
		scanf("%ld", &num);
		if(num==0)
		{
			goto flag;
		}
		printf("\n");
		while(q->next!=NULL&&q->num!=num)
		{
			p=p->next;
			q=p->next;
		}
		if(q->num==num)
		{
			p->next=q->next;
			free(q);
			n--;
			goto flag;
		}
		else
		{
			printf("[!]��ʾ:û�и�ѧ����¼,��˶�!\n");
		}
	}
	else
		printf("[!]��ʾ:��ѧ������,����������!\n");
		getch();
        system("cls");
	flag:
	system("cls");
	printf("[!]��ʾ:ɾ�����!������������˵�...\n");
	getch();
	system("cls");
}
