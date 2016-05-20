/*主函数*/
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
                    printf("[!]您没有权限!\n");
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
                    printf("[!]您没有权限!\n");
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
                    printf("[!]您没有权限!\n");
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
                    printf("[!]您没有权限!\n");
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
                    printf("[!]您没有权限!\n");
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
                    printf("[!]您没有权限!\n");
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
                    printf("[!]您没有权限!\n");
                    getch();
                }
                break; 
            case 8 :
                if(power==3)
                {
                    printf("┌──────┐\n");
                    printf("│[1]追加保存.│\n│[2]覆盖保存.│\n");
                    printf("└──────┘\n");
                    printf("请选择:");
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
                    printf("[!]数据保存成功!任意键返回主菜单...\n");
                    getch();
                    system("cls");       
                }
                else
                {
                    printf("[!]您没有权限!\n");
                    getch();
                }
                break; 
            case 9 :
                if(power==3)
                {
                    phead=stuRead();
                    printf("[!]数据读取成功!任意键返回主菜单...\n");
                    getch();
                    system("cls");
                }
                else
                {
                    printf("[!]您没有权限!\n");
                    getch();
                }
                break; 
            case 10 :
                printf("是否保存数据?\n[1]保存退出.\n[2]不保存退出.\n");
                scanf("%d",&op);
                if(op==1)
                {
                    stuwSave(phead);
                }
                printf("┌─────────────────┐\n");
                printf("│┌───────────────┐│\n");
                printf("││   感谢使用学生信息管理系统!  ││\n");
                printf("│└───────────────┘│\n");
                printf("└─────────────────┘\n");                
                exit(0);
            default:
                printf("[!]提示:无效选项!任意键返回主菜单...\n");
                getch();
                system("cls");
        }
    }
    getch();
    return 0;
}
