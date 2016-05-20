/*菜单*/
int Menu();

int Menu()
{
    int line=6,ch;
    while(1)
    {
        system("cls");
        printf("┌─────────────────┐\n");
        printf("│┌───────────────┐│\n");
        printf("││            主菜单            ││\n");
        printf("│└───────────────┘│\n");
        printf("│┌───────────────┐│\n");
        printf("││     [1]----录入学生信息      ││\n");
        printf("││     [2]----浏览学生信息      ││\n");
        printf("││     [3]----查询学生信息      ││\n");
        printf("││     [4]----修改学生信息      ││\n");
        printf("││     [5]----删除学生信息      ││\n");
        printf("││     [6]----排序学生信息      ││\n");
        printf("││     [7]----统计学生信息      ││\n");
        printf("││     [8]----导出学生信息      ││\n");
        printf("││     [9]----导入学生信息      ││\n");
        printf("││     [0]----退出管理系统      ││\n");
        printf("│└───────────────┘│\n");
        printf("└─────────────────┘\n");
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
