#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
    char name[30];
    char sex;
    int age;
    float score;
} Stu;
typedef struct _StuNode
{
    Stu data;
    struct _StuNode* next;
} StuNode;
void initData2File()
{
    Stu s[4] =
    {
        { "liudehua", 'f', 59, 100 },
        { "zhangxueyou", 'f', 60, 98 },
        { "guofucheng", 'f', 56, 90 },
        { "liming", 'f', 54, 88 }
    };
    FILE* fp = fopen("stu.data", "w+");
    if (fp == NULL)
    {
        printf("open error!\n");
        exit(-1);
    }
    fwrite((void*)s, sizeof(s), 1, fp);
    fclose(fp);
}
StuNode* createListFromFile(char* filePath)
{
    StuNode* head = (StuNode*)malloc(1 * sizeof(StuNode));
    if (NULL == head)
    {
        printf("head malloc error!\n");
        exit(-1);
    }
    head->next = NULL;
    FILE* fp = fopen(filePath, "r+");
    if (fp == NULL)
    {
        printf("open error!\n");
        exit(-1);
    }
    StuNode* cur = (StuNode*)malloc(1 * sizeof(StuNode));
    if (cur == NULL)
    {
        printf("cur malloc error!\n");
        exit(-1);
    }
    while (fread((void*)&cur->data, sizeof(Stu), 1, fp))
    {
        cur->next = head->next;
        head->next = cur;
        cur = malloc(1 * sizeof(StuNode));
        if (cur == NULL)
        {
            printf("cur malloc error!\n");
            exit(-1);
        }
    }
    free(cur);
    fclose(fp);
    return head;
}
void traverseListStu(StuNode* head)
{
    head = head->next;
    printf("\t\t\t\t\t Student Management System  \t\t\t\t\t\t\n\n");
    printf("\t\t\t\t\t\t\t\t\t\tCopyLeft@2020  \t\t\t\t\t\t\n\n");
    printf("\t\t\t\tname\t\tsex\t\tage\t\tscore\n\n");
    while (head != NULL)
    {
        printf("\t\t\t\t%-10s\t%c\t\t%d\t\t%.1f\n\n",
               head->data.name, head->data.sex, head->data.age, head->data.score);
        head = head->next;
    }
    putchar(10);
}
void addListStu(StuNode* head)
{
    StuNode* cur = (StuNode*)malloc(1 * sizeof(StuNode));
    if (cur == NULL)
    {
        printf("cur malloc error!\n");
        exit(-1);
    }
    printf("please input name:\n");
    scanf("%s", cur->data.name);
    printf("please input sex:\n");
    scanf(" %c", &cur->data.sex);
    printf("please input age:\n");
    scanf("%d", &cur->data.age);
    printf("please input score:\n");
    scanf("%f", &cur->data.score);
    cur->next = head->next;
    head->next = cur;
}
StuNode* searchStuNodeList(StuNode* head)
{
    char name[1024];
    head = head->next;
    printf("please input your find name:\n");
    scanf("%s", name);
    while (head != NULL)
    {
        if (strcmp(name, head->data.name) == 0)
        {
            break;
        }
        head = head->next;
    }
    return head;
}
void deleteStuNodeList(StuNode* head)
{
    StuNode* pfind = searchStuNodeList(head);
    if (pfind == NULL)
    {
        printf("您要删除的人不存在!\n");
        getchar();
        getchar();
    }
    while (head->next != pfind)
    {
        head = head->next;
    }
    head->next = pfind->next;
    free(head);
    head = NULL;
}
int lenStuNodeList(StuNode* head)
{
    int len = 0;
    head = head->next;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}
void sortStuNodeList(StuNode* head)
{
    int len = lenStuNodeList(head);
    StuNode *prep, *p, *q;
    int flag;
    for (int i = 0; i < len - 1; i++)
    {
        flag = 0;
        prep = head;
        p = prep->next;
        q = p->next;
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (strcmp(p->data.name, q->data.name) > 0)
            {
                prep->next = p;
                p->next = q->next;
                q->next = p;
                prep = q;
                q = p->next;
                flag = 1;
                continue;
            }
            prep = prep->next;
            p = p->next;
            q = q->next;
        }
        if (flag == 0)
            break;
    }
}
void saveData2File(StuNode* head, char* filePath)
{
    FILE* fp = fopen(filePath, "w+");
    if (fp == NULL)
    {
        printf("open error!\n");
        exit(-1);
    }
    head = head->next;
    while (head != NULL)
    {
        fwrite((void*)&head->data, sizeof(Stu), 1, fp);
        head = head->next;
    }
    fclose(fp);
}
void destroyStuNodeList(StuNode* head)
{
    StuNode* pt;
    while (head != NULL)
    {
        pt = head;
        head = head->next;
        free(pt);
        pt = NULL;
    }
}

int main()//MVC模型(Model Veiew Control)
{//内存模型:链表实现  数据库模型:文件读写实现  人机交互界面:终端控制台实现
//    initData2File();
    StuNode* head = createListFromFile("stu.data");
    StuNode* pfind = NULL;
    while (1)
    {
        system("cls");
        traverseListStu(head);
        printf("1->add  2->search   3->delete   4->sort    5->exit\n");
        int choice;
        printf("please input your an integer choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                addListStu(head);
                break;
            case 2:
                if (pfind = searchStuNodeList(head))
                {
                    printf("your find name is found!\n");
                    printf("\t\t\t\t%-10s\t%c\t\t%d\t\t%.1f\n\n",
                           pfind->data.name, pfind->data.sex, pfind->data.age, pfind->data.score);
                }
                else
                {
                    printf("your find name is not exist!\n");
                }
                getchar();
                getchar();
                break;
            case 3:
                deleteStuNodeList(head);
                break;
            case 4:
                sortStuNodeList(head);
                break;
            case 5:
                saveData2File(head, "stu.data");
                destroyStuNodeList(head);
                return 0;
                break;
            default:
                printf("您的输入有误!\n");
                getchar();
                getchar();
        }
    }
    return 0;
}
