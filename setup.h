/*开始*/
int Setup();

int Setup()
{
    int bar=0,i,j,o,m=1,n=1,u=1;
    usr *p;
    char tempid[20],tempass[20];
    while(bar<=95)
    {
        bar+=5;
        printf("┌─────────────────┐\n");
        printf("│┌───────────────┐│\n");
        printf("││   欢迎使用学生信息管理系统   ││\n");
        printf("│└───────────────┘│\n");
        printf("│┌───────────────┐│\n");
        printf("││                              ││\n");
        printf("││                              ││\n");
        printf("││            %4d%c             ││\n",bar,37);
        printf("││                              ││\n");
        printf("││                              ││\n");
        printf("││");
        for(i=0;i<bar/3-3;i++)
        {
            printf(">");
        }
        for(j=0;j<30-i;j++)
        {
            printf(" ");
        }                 
        printf("││\n");
        printf("││                              ││\n");
        printf("││                              ││\n");
        printf("│└───────────────┘│\n");
        printf("└─────────────────┘\n");
        Sleep(50);
        system("cls");
    }
    while(1)
    {
        flag1:
        system("cls");
        printf("┌─────────────────┐\n");
        printf("│┌───────────────┐│\n");
        printf("││   欢迎使用学生信息管理系统   ││\n");
        printf("│└───────────────┘│\n");
        printf("│┌───────────────┐│\n");
        printf("││                              ││\n");
        printf("││   ┌──────────┐   ││\n");
        printf("││   │ [1]----登录        │   ││\n");
        printf("││   │ [2]----注册        │   ││\n");
        printf("││   │ [3]----忘记密码    │   ││\n");
        printf("││   │ [0]----退出        │   ││\n");
        printf("││   └──────────┘   ││\n");
        printf("││                              ││\n");
        printf("│└───────────────┘│\n");
        printf("└─────────────────┘\n");
        scanf("%d",&o);
        system("cls");
        switch(o)
        {
            case 0 :
                printf("┌─────────────────┐\n");
                printf("│┌───────────────┐│\n");
                printf("││   感谢使用学生信息管理系统!  ││\n");
                printf("│└───────────────┘│\n");
                printf("└─────────────────┘\n");
                Sleep(200);
                exit(0);
            case 1 : 
                m=Login();  
                if(m>0)
                    goto flag3;
                else
                    goto flag1;
            case 2 :
                flag2:
                n=Register();
                if(n)
                    goto flag1;
                else
                    goto flag2;
            case 3 :
                u=Forget();
                if(u)
                    goto flag1;
                else
                    goto flag2;
            default:
                printf("提示:无效选项!任意键返回主菜单...\n");
                getch();
                system("cls");
                goto flag1;
        }
    }
    flag3:
    system("cls");
    return m;
}
