/*������*/
#include "func.h"

int main(void)
{
    int k,op,power;
    stu *phead;
    phead=stuRead();
    power=Setup();
    while(1)
    {
        k=Menu();
        system("cls");
        switch(k-5)
        {
            case 1 :
                if(power==2||power==3)
                {
                    phead=Enter();
                }
                else
                {
                    printf("[!]��û��Ȩ��!\n");
                    getch();
                }
                break;
            case 2 :
                if(power==1||power==2||power==3)
                {
                    Browse(phead->next);
                }
                else
                {
                    printf("[!]��û��Ȩ��!\n");
                    getch();
                }
                break;
            case 3 :
                if(power==1||power==2||power==3)
                {
                    Query(phead);
                }
                else
                {
                    printf("[!]��û��Ȩ��!\n");
                    getch();
                }
                break;
            case 4 :
                if(power==2||power==3)
                {
                    Modify(phead);
                }
                else
                {
                    printf("[!]��û��Ȩ��!\n");
                    getch();
                }
                break;
            case 5 :
                if(power==2||power==3)
                {
                    Delete(phead);
                }
                else
                {
                    printf("[!]��û��Ȩ��!\n");
                    getch();
                }
                break;
            case 6 :
                if(power==1||power==2||power==3)
                {
                    phead=Sort(phead);
                    Browse(phead->next);
                }
                else
                {
                    printf("[!]��û��Ȩ��!\n");
                    getch();
                }
                break;    
            case 7 :
                if(power==2||power==3)
                {
                    Count(phead->next);
                }
                else
                {
                    printf("[!]��û��Ȩ��!\n");
                    getch();
                }
                break; 
            case 8 :
                if(power==3)
                {
                    printf("����������������\n");
                    printf("��[1]׷�ӱ���.��\n��[2]���Ǳ���.��\n");
                    printf("����������������\n");
                    printf("��ѡ��:");
                    scanf("%d",&op);
                    system("cls");
                    if(op==1)
                    {
                        stuaSave(phead);
                    }
                    if(op==2)
                    {
                        stuwSave(phead);
                    }
                    else
                    {
                        break;
                    }
                    printf("[!]���ݱ���ɹ�!������������˵�...\n");
                    getch();
                    system("cls");       
                }
                else
                {
                    printf("[!]��û��Ȩ��!\n");
                    getch();
                }
                break; 
            case 9 :
                if(power==3)
                {
                    phead=stuRead();
                    printf("[!]���ݶ�ȡ�ɹ�!������������˵�...\n");
                    getch();
                    system("cls");
                }
                else
                {
                    printf("[!]��û��Ȩ��!\n");
                    getch();
                }
                break; 
            case 10 :
                printf("�Ƿ񱣴�����?\n[1]�����˳�.\n[2]�������˳�.\n");
                scanf("%d",&op);
                if(op==1)
                {
                    stuwSave(phead);
                }
                printf("��������������������������������������\n");
                printf("��������������������������������������\n");
                printf("����   ��лʹ��ѧ����Ϣ����ϵͳ!  ����\n");
                printf("��������������������������������������\n");
                printf("��������������������������������������\n");                
                exit(0);
            default:
                printf("[!]��ʾ:��Чѡ��!������������˵�...\n");
                getch();
                system("cls");
        }
    }
    getch();
    return 0;
}
