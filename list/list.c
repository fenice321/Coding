#include "list.h"
#include <stdlib.h>
#include <stdio.h>
Node* createList()
{
    Node* head = (Node*)malloc(1 * sizeof(Node));
    if (NULL == head)
    {
        printf("head malloc error!\n");
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
        printf("cur malloc error!\n");
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
            break;
    }
}
void reverseList(Node* head)
{
    Node* cur = head->next;
    head->next = NULL;
    Node* pt;
    while (cur != NULL)
    {
        pt = cur;
        cur = cur->next;
        pt->next = head->next;
        head->next = pt;
    }
}
void destroyList(Node* head)
{
    Node* pt;
    while (head != NULL)
    {
        pt = head;
        head = head->next;
        free(pt);
        pt = NULL;
    }
}
