#if 0
#include <stdio.h>
typedef struct node
{
    int data;
    struct node* next;
} Node;
void traverseList(Node* head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    putchar(10);
}

int main()
{//静态单项链表模拟
    Node a, b, c, d, e;
    Node* head= &a;
    a.data = 1;
    b.data = 2;
    c.data = 3;
    d.data = 4;
    e.data = 5;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;
    Node* pHead = head;
    while (pHead != NULL)
    {
        printf("%d ", pHead->data);
        pHead = pHead->next;
    }
    putchar(10);
    traverseList(head);
    pHead = head;
    traverseList(pHead);
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
Node* createList();
void insertList(Node*, int);
void traverseList(Node*);
int lenOfList(Node*);
Node* searchNodeOfList(Node*, int);
void deleteNodeOfList(Node*, Node*);
void popSortList(Node*, int);
void reverseList(Node*);
void destroyList(Node*);
int main()
{
    srand(time(NULL));
    Node* head = createList();
    for (int i = 0; i < 10; i++)
    {
        insertList(head, rand() % 100);
    }
    traverseList(head);
    printf("lenth = %2d\n", lenOfList(head));
    Node* pFind = searchNodeOfList(head, 29);
    if (NULL == pFind)
    {
        printf("find none!\n");
    }
    else
    {
        printf("your findData is exist in the list!\n");
        pFind->data = 888;
        printf("after change:\n");
        traverseList(head);
        deleteNodeOfList(head, pFind);
        printf("after deleteNodeOfList:\n");
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
    while (head != NULL)
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
    while (head != NULL)
    {
        if (head->data == findData)
        {
            break;
        }
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
    Node* cur = head->next;
    head->next = NULL;
    Node* t;
    while (cur != NULL)
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
