/*���*/
void Browse(stu *p);			

void Browse(stu *p)
{
	if(n!=0)
	{ 
		printf("ѧ������:%d\n", n);
		printf("\nѧ��\t����\t����\t�Ա�\t����\t��ѧ\tӢ��\t�ܷ�\tƽ��\n");
		printf("������������������������������������������������������������������������������\n");
		while(p!=NULL)
		{
			printf(PT,p->num,p->name,p->age,p->sex,p->chinese,p->math,p->english,p->point,p->average);
			p=p->next;
		}
		printf("������������������������������������������������������������������������������\n");
	}
	else 
		printf("��ʾ:��ѧ������,����������!\n");
	getch();
	system("cls");
}
