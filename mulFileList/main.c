#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mylist.h"
//Ë­ÓÃË­°üº¬
int main()
{
    srand(time(NULL));
    Node* head = createList();
    for (int i = 0; i < 10; i++)
    {
        insertList(head, rand() % 100);
    }
    traverseList(head);
    printf("length = %2d\n", lenOfList(head));
    Node* pFind = searchNodeOfList(head, 29);
    if (pFind == NULL)
    {
        printf("find none\n");
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

