/*����*/
void Query(stu *p);				

void Query(stu *p)
{
	int k;
	int num;
	char name[20];
	if(n!=0)
	{
		do
		{   
			system("cls");
			printf("��������������������������������������\n");
			printf("��������������������������������������\n");
			printf("����             ��ѯ             ����\n");
			printf("��������������������������������������\n");
			printf("��������������������������������������\n");
			printf("����                              ����\n");
			printf("����   ������������������������   ����\n");
			printf("����   �� ѧ��        �밴 1 ��   ����\n");
			printf("����   �� ����        �밴 2 ��   ����\n");
			printf("����   ��                    ��   ����\n");
			printf("����   �� ȡ��        �밴 0 ��   ����\n");
			printf("����   ������������������������   ����\n");
			printf("����                              ����\n");
			printf("��������������������������������������\n");
			printf("��������������������������������������\n"); 
			scanf("%d", &k);
			system("cls");
			switch(k)
			{
				case 0 :
					goto flag;
					break;
				case 1 :
					printf("����������������������������������\n");
					printf("������ѧ����ѧ��:\n");
					printf("����������������������������������\n");
					Position(18,2);
					scanf("%d", &num);
					while(p->next!=NULL&&p->num!=num)
					{
						p=p->next;
					}
					if(p->num==num)
					{
						printf("\nѧ��\t����\t����\t�Ա�\t����\t��ѧ\tӢ��\t�ܷ�\tƽ��\n");
						printf("������������������������������������������������������������������������������\n");
						printf(PT,p->num,p->name,p->age,p->sex,p->chinese,p->math,p->english,p->point,p->average);
					}
					else
						printf("[!]��ʾ:û�и�ѧ����¼,��˶�!\n");
				break;
				case 2 :
					printf("����������������������������������\n");
					printf("������ѧ��������:\n");
					printf("����������������������������������\n");
					Position(18,2);
					scanf("%s", name);
					while(p->next!=NULL&&(strcmp(name,p->name)!=0))
					{
						p=p->next;
					}
					if(strcmp(name,p->name)==0)
					{
						printf("\nѧ��\t����\t����\t�Ա�\t����\t��ѧ\tӢ��\t�ܷ�\tƽ��\n");
						printf("������������������������������������������������������������������������������\n");
						printf(PT,p->num,p->name,p->age,p->sex,p->chinese,p->math,p->english,p->point,p->average);
					}
					else
						printf("[!]��ʾ:û�и�ѧ����¼,��˶�!\n");
				break;
				default :
					printf("\n[!]��ʾ:��Чѡ��!\n");
				break;
			}
			getch();
			system("cls");
    	}while(k!=0);
   	}
	else
		printf("[!]��ʾ:��ѧ������,����������!\n");
		getch();
        system("cls");
    flag:printf("[!]��ʾ:��ѯ���!������������˵�...\n");
    getch();
    system("cls");
}
