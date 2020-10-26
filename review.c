#if 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//加入头节点的目的就是对于链表的所有操作都不需要更新头指针
//手机通讯录本质就是一个链表
typedef struct _ContacksData
{
    char name[30];
    char mobileNum[12];
    char fixedNum[12];
    char companyName[30];
} ContacksData;

typedef struct _ContacksNode
{
    ContacksData data;
    struct _ContacksNode* next;
} ContacksNode;
int main()
{
    printf("sizeof(ContacksData) = %d\n", sizeof(ContacksData));
    printf("sizeof(ContacksNode) = %d\n", sizeof(ContacksNode));
    ContacksNode* head = (ContacksNode*)malloc(1 * sizeof(ContacksNode));
    if (NULL == head)
    {
        printf("head malloc error!\n");
        exit(-1);
    }
    strcpy(head->data.name, "zhouhong");
    strcpy(head->data.mobileNum, "18827988888");
    strcpy(head->data.fixedNum, "123-7088393");
    strcpy(head->data.companyName, "HuaWei");
    printf("Name:%s\n", head->data.name);

    return 0;
}
#endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct node
{
    int data;
    struct node* next;
} Node;
Node* createList()
{
    Node* head = (Node*)malloc(1 * sizeof(Node));
    if (NULL == head)
    {
        printf("head malloc error!!!\n");
        exit(-1);
    }
    head->next = NULL;
    return head;
}
void insertList(Node* head, int nodeData)
{
    Node* cur = (Node*)malloc(1 * sizeof(Node));
    if (NULL == cur)
    {
        printf("cur malloc error!!!\n");
        exit(-1);
    }
    cur->data = nodeData;
    cur->next = head->next;
    head->next = cur;
}
void traverseList(Node* head)
{
    head = head->next;
    while (head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    putchar(10);
}
int lenOfList(Node* head)
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
Node* searchNodeOfList(Node* head, int findData)
{
    head = head->next;
    while (head)
    {
        if (head->data == findData)
            break;
        head = head->next;
    }
    return head;
}
void deleteNodeOfList(Node* head, Node* pFind)
{
    if (pFind->next != NULL)
    {
        Node* pt = pFind->next;
        pFind->data = pFind->next->data;
        pFind->next = pFind->next->next;
        free(pt);
        pt = NULL;
    }
    else
    {
        while (head->next != pFind)
        {
            head = head->next;
        }
        head->next = pFind->next;
        free(pFind);
        pFind = NULL;
    }
}
void popSortList(Node* head, int len)
{
    Node *prep, *p, *q;
    int flag;
    for (int i = 0; i < len - 1; i++)
    {
        prep = head;
        p = prep->next;
        q = p->next;
        flag = 0;
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (p->data > q->data)
            {
                prep->next = q;
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
        {
            break;
        }
    }
}
void reverseList(Node* head)
{
    Node*cur = head->next;
    head->next = NULL;
    Node* t;
    while (cur)
    {
        t = cur;
        cur = cur->next;
        t->next = head->next;
        head->next = t;
    }
}
void destroyList(Node* head)
{
    Node* t;
    while (head != NULL)
    {
        t = head;
        head = head->next;
        free(t);
        t = NULL;
    }
}

int main()
{
    Node* head = createList();
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        insertList(head, rand() % 100);
    }
    traverseList(head);
    printf("length = %2d\n", lenOfList(head));
    Node* pFind = searchNodeOfList(head, 29);
    if (NULL == pFind)
    {
        printf("find none!\n");
    }
    else
    {
        printf("your findData is exist in the list!\n");
        pFind->data = 666;
        printf("after change:\n");
        traverseList(head);
        deleteNodeOfList(head, pFind);
        printf("after delete:\n");
        traverseList(head);
    }
    popSortList(head, lenOfList(head));
    printf("after popSort:\n");
    traverseList(head);
    reverseList(head);
    printf("after reverse:\n");
    traverseList(head);
    destroyList(head);
    head = NULL;
    return 0;
}
