/*�˵�*/
int Menu();

int Menu()
{
    int line=6,ch;
    while(1)
    {
        system("cls");
        printf("��������������������������������������\n");
        printf("��������������������������������������\n");
        printf("����            ���˵�            ����\n");
        printf("��������������������������������������\n");
        printf("��������������������������������������\n");
        printf("����     [1]----¼��ѧ����Ϣ      ����\n");
        printf("����     [2]----���ѧ����Ϣ      ����\n");
        printf("����     [3]----��ѯѧ����Ϣ      ����\n");
        printf("����     [4]----�޸�ѧ����Ϣ      ����\n");
        printf("����     [5]----ɾ��ѧ����Ϣ      ����\n");
        printf("����     [6]----����ѧ����Ϣ      ����\n");
        printf("����     [7]----ͳ��ѧ����Ϣ      ����\n");
        printf("����     [8]----����ѧ����Ϣ      ����\n");
        printf("����     [9]----����ѧ����Ϣ      ����\n");
        printf("����     [0]----�˳�����ϵͳ      ����\n");
        printf("��������������������������������������\n");
        printf("��������������������������������������\n");
        Position(9,line);
        printf(">");
        Position(29,line);
        printf("<");        
        while((ch=getch())!=0x0d)
        {
            while(ch==0x48)
            { 
                if(line==6)
                {
                    break;
                }
                else
                {
                    Position(9,line);
                    printf(" ");
                    Position(29,line);
                    printf(" ");
                    line--;
                    Position(9,line);
                    printf(">");
                    Position(29,line);
                    printf("<");
                    break;
                }           
            }
            while(ch==0x50)
            {
                if(line==15)
                {
                    break;
                }
                else
                {
                    Position(9,line);
                    printf(" ");
                    Position(29,line);
                    printf(" ");
                    line++;
                    Position(9,line);
                    printf(">");
                    Position(29,line);
                    printf("<");
                    break;
                }
            }
        }
        break;
    }
    return line;
}
