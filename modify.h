/*�޸�*/
void Modify(stu *p);			

void Modify(stu *p)
{
	int num;
	int k;
	if(n!=0)
	{
		printf("����������������������������������\n");
		printf("��������Ҫ�޸ĵ�ѧ����ѧ��(0.ȡ��):\n");
		printf("����������������������������������\n");
		Position(36,2);
		scanf("%ld", &num);
		if(num==0)
		{
			goto flag;
		}
		printf("\n");
		while(p->next!=NULL&&p->num!=num)
		{
			p=p->next;
		}
		if(p->num==num)
		{
			do
			{
				system("cls");
				printf("��������������������������������������\n");
				printf("��������������������������������������\n");
				printf("����    	�޸�		  ����\n");
				printf("��������������������������������������\n");
				printf("��������������������������������������\n");
				printf("���� ѧ��                  �밴 1 ����\n");
				printf("���� ����                  �밴 2 ����\n");
				printf("���� ����                  �밴 3 ����\n");
				printf("���� �Ա�                  �밴 4 ����\n");
				printf("���� ����                  �밴 5 ����\n");
				printf("���� ��ѧ                  �밴 6 ����\n");
				printf("���� Ӣ��                  �밴 7 ����\n");
				printf("���� ȡ��                  �밴 0 ����\n");
				printf("��������������������������������������\n");
				printf("��������������������������������������\n"); 
				scanf("%d", &k);
				system("cls");
				switch(k)
				{
					case 0: 
						goto flag;
						break;
					case 1:
						printf("����������������������������������\n");
						printf("��������ѧ��:\n");
						printf("����������������������������������\n");
						Position(14,2);
						scanf("%d",&p->num);
					break;
					case 2:
						printf("����������������������������������\n");
						printf("������������:\n");
						printf("����������������������������������\n");
						Position(14,2);
						scanf("%s",p->name);
					break;
					case 3:
						printf("����������������������������������\n");
						printf("������������:");
						printf("����������������������������������\n");
						Position(14,2);
						scanf("%d",&p->age);
					break;
					case 4:
						printf("����������������������������������\n");
						printf("���������Ա�:\n");
						printf("����������������������������������\n");
						Position(14,2);
						scanf("%s",p->sex);
					break;
					case 5:
						printf("����������������������������������\n");
						printf("������������:\n");
						printf("����������������������������������\n");
						Position(14,2);
						scanf("%lf",&p->chinese);
					break;
					case 6:
						printf("����������������������������������\n");
						printf("����������ѧ:\n");
						printf("����������������������������������\n");
						Position(14,2);
						scanf("%lf",&p->math);
					break;
					case 7:
						printf("����������������������������������\n");
						printf("��������Ӣ��:\n");
						printf("����������������������������������\n");
						Position(14,2);
						scanf("%lf",&p->english);
					break;
					default:
						printf("[!]��Чѡ��!\n");
    		        break;
				}
				getch();
				system("cls");
			}while(k!= 0);
		}
		else
			printf("[!]��ʾ:û�и�ѧ����¼,��˶�!\n");
			getch();
            system("cls");
	}
	else
		printf("[!]��ʾ:��ѧ������,����������!\n");
		getch();
        system("cls");
	flag:printf("[!]��ʾ:�޸����!������������˵�...\n");
	getch();
	system("cls");
}
