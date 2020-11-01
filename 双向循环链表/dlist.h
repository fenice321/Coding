#ifndef __DLIST_H__
#define __DLIST_H__
typedef struct _dnode
{
    int data;
    struct _dnode* next;
    struct _dnode* pre;
}Dnode;

Dnode* createDlist();
void insertDlist(Dnode* head, int dnodeData);
void traverseDlistNext(Dnode* head);
void traverseDlistPre(Dnode* head);
int lenOfDlist(Dnode* head);
Dnode* searchDnodeOfDlist(Dnode* head, int dfindData);
void deleteDnodeOfDlist(Dnode* pFind);
void popSortDlist(Dnode* head, int len);
void destroyDlist(Dnode* head);
#endif
