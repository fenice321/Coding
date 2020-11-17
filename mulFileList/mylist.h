#ifndef __MY_LIST_H__
#define __MY_LIST_H__
//避免头文件重复包含
typedef struct node
{
    int data;
    struct node* next;
} Node;
Node* createList();
void insertList(Node* head, int nodeData);
void traverseList(Node* head);
int lenOfList(Node* head);
Node* searchNodeOfList(Node* head, int findData);
void deleteNodeOfList(Node* head, Node* pFind);
void popSortList(Node* head, int len);
void reverseList(Node* head);
void destroyList(Node* head);
#endif
