#include <stdio.h>
#include <stdlib.h>
#include "dlist.h"
Dnode* createDlist()
{
    Dnode* head = (Dnode*)malloc(1 * sizeof(Dnode));
    if (NULL == head)
    {
        printf("head malloc error!\n");
        exit(-1);
    }
    head->next = head;
    head->pre = head;
    return head;
}
void insertDlist(Dnode* head, int dnodeData)
{
    Dnode* cur = (Dnode*)malloc(1 * sizeof(Dnode));
    if (NULL == cur)
    {
        printf("cur malloc error!\n");
        exit(-1);
    }
    cur->data = dnodeData;
    cur->next = head->next;
    cur->pre = head;
    head->next = cur;
    cur->next->pre = cur;
}
void traverseDlistNext(Dnode* head)
{
    Dnode* sh = head->next;
    while (sh != head)
    {
        printf("%d ", sh->data);
        sh = sh->next;
    }
    putchar(10);
}
void traverseDlistPre(Dnode* head)
{
    Dnode* sh = head->pre;
    while (sh != head)
    {
        printf("%d ", sh->data);
        sh = sh->pre;
    }
    putchar(10);
}
int lenOfDlist(Dnode* head)
{
    int len = 0;
    Dnode* sh = head->next;
    while (sh != head)
    {
        len++;
        sh = sh->next;
    }
    return len;
}
Dnode* searchDnodeOfDlist(Dnode* head, int dfindData)
{
    Dnode* clock = head->next;
    Dnode* unclock = head->pre;
    while (unclock != clock->pre)
    {
        if (clock->data == dfindData)
            return clock;
        if (unclock->data == dfindData)
            return unclock;
        if (unclock == clock)
            break;
        clock = clock->next;
        unclock = unclock->pre;
    }
    return NULL;
}
void deleteDnodeOfDlist(Dnode* pFind)
{
    pFind->pre->next = pFind->next;
    pFind->next->pre = pFind->pre;
    free(pFind);
    pFind = NULL;
}
void popSortDlist(Dnode* head, int len)
{
    Dnode *prep, *p, *q;
    int flag;
    for (int i = 0; i < len - 1; i++)
    {
        flag = 0;
        prep = head;
        p = prep->next;
        q = p->next;
        for (int j = 0; j < len - 1 - i; j++)
        {
            if ((p->data) > (q->data))
            {
                flag = 1;
                prep->next = q;
                q->pre = prep;
                p->next = q->next;
                p->pre = q;
                q->next = p;
                p->next->pre = p;
                prep = q;
                q = p->next;
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
void destroyDlist(Dnode* head)
{
    head->pre->next = NULL;
    Dnode* pt;
    while (head != NULL)
    {
        pt = head;
        head = head->next;
        free(pt);
        pt = NULL;
    }
}
