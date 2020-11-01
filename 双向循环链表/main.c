#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "dlist.h"
int main()
{
    srand(time(NULL));
    Dnode* head = createDlist();
    for (int i = 0; i < 10; i++)
    {
        insertDlist(head, rand() % 100);
    }
    traverseDlistNext(head);
    traverseDlistPre(head);
    printf("len = %2d\n", lenOfDlist(head));
    Dnode* pFind = searchDnodeOfDlist(head, 9);
    if (NULL == pFind)
    {
        printf("find none!\n");
    }
    else
    {
        printf("in the Dlist!\n");
        pFind->data = 888;
        printf("after change!\n");
        traverseDlistNext(head);
        deleteDnodeOfDlist(pFind);
        printf("after deleteDnodeOfDlist!\n");
        traverseDlistNext(head);
    }
    popSortDlist(head, lenOfDlist(head));
    printf("after popSortDlist!\n");
    traverseDlistNext(head);
//    reverseDlist(head);//´ý¶¨
//    printf("after reverseDlist!\n");
//    traverseDlistNext(head);
    destroyDlist(head);
    head = NULL;
    return 0;
}
