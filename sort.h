/*排序*/
stu *Sort(stu *p);          

stu *Sort(stu *p)
{ 
    int y;
    stu *post,*card,*temp,*i,*j;
    if(n!=0)
    {
        system("cls");
        printf("┌─────────────────┐\n");
        printf("│┌───────────────┐│\n");
        printf("││             排序             ││\n");
        printf("│└───────────────┘│\n");
        printf("│┌───────────────┐│\n");
        printf("││                              ││\n");
        printf("││ 语文                  请按 1 ││\n");
        printf("││ 数学                  请按 2 ││\n");
        printf("││ 英语                  请按 3 ││\n");
        printf("││ 总分                  请按 4 ││\n");
        printf("││ 平均                  请按 5 ││\n");
        printf("││                              ││\n");
        printf("││ 取消                  请按 0 ││\n");
        printf("│└───────────────┘│\n");
        printf("└─────────────────┘\n");
        scanf("%d", &y);
        system("cls");
        if(y==1||y==2||y==3||y==4||y==5||y==0)
        {
            post=(stu*)malloc(sizeof(stu));
            post->next=p;
            card=post;
            while(card->next->next!=NULL)
            {
                for(i=card,j=card->next;j->next!=NULL;j=j->next)
                {
                    switch(y)
                    {
                        case 1 :
                            if((j->next->chinese)<(i->next->chinese)) i=j;
                            break;
                        case 2 :
                            if((j->next->math)<(i->next->math)) i=j;
                            break;
                        case 3 :
                            if((j->next->english)<(i->next->english)) i=j;
                            break;
                        case 4 :
                            if((j->next->point)<(i->next->point)) i=j;
                        break;
                        case 5 :
                            if((j->next->average)<(i->next->average)) i=j;
                        break;
                        case 0 :
                            goto flag;
                    }
                }
                if(i!=j)
                {
                    temp=i->next;
                    i->next=temp->next;
                    temp->next=card->next;
                    card->next=temp;
                }
                card=card->next;
            }
            p=post->next;
            free(post);
            return p;
        }
        printf("[!]提示:无效选项!排序失败\n");
    }
    else
        printf("[!]提示:无学生数据,请输入数据!\n");
        getch();
        system("cls");
    flag:
    return p;
} 
