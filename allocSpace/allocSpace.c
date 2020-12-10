#if 0
#include <stdio.h>
#include <stdlib.h>
enum
{
    Success, PppMallocErr, PppiMallocErr
};
int alloc2dSpace(int*** ppp, int row, int column, size_t unitSize)
{
    *ppp = (int**)malloc(row * sizeof(int*));
    if (*ppp == NULL)
    {
        printf("*ppp malloc error!\n");
        return PppMallocErr;
    }
    for (int i = 0; i < row; i++)
    {
        (*ppp)[i] = (int*)malloc(column * unitSize);
        if ((*ppp)[i] == NULL)
        {
            printf("(*ppp)[%d] malloc error!\n", i);
            return PppiMallocErr;
        }
    }
    return Success;
}
void free2dSpace(int** pp, int row)
{
    for (int i = 0; i < row; i++)
    {
        free(pp[i]);
        pp[i] = NULL;
    }
    free(pp);
    pp = NULL;
}
int main()
{
    int** pp = NULL;
    int rc = alloc2dSpace(&pp, 6, 5, sizeof(int));
    if (rc != Success)
    {
        printf("Err num: %d\n", rc);
        return -1;
    }
    printf("初始化成功!\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            pp[i][j] = i + j;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", pp[i][j]);
        }
        putchar(10);
    }
    free2dSpace(pp, 6);
    pp = NULL;
    printf("End!\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
void* allocSpace(int row, int column, size_t unitSize)
{
    void* p = (void*)malloc(row * column * unitSize);
    if (NULL == p)
    {
        printf("p malloc error!\n");
        exit(-1);
    }
    return p;
}
int main()
{
    int row = 6;
    int column = 5;
    int (*p)[5] = (int(*)[5])allocSpace(row, column, sizeof(int));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            p[i][j] = i + j;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", p[i][j]);
        }
        putchar(10);
    }
    free(p);
    p = NULL;
    return 0;
}

#include <stdlib.h>
#include <stdio.h>
int** alloc2dSpace(int row, int column, size_t unitSize)
{
    int** pp = (int**)malloc(row * sizeof(int*));
    if (pp == NULL)
    {
        printf("pp malloc error!\n");
        exit(-1);
    }
    for (int i = 0; i < row; i++)
    {
        pp[i] = (int*)malloc(column * unitSize);
        if (pp[i] == NULL)
        {
            printf("pp[%d] malloc error!\n", i);
            exit(-1);
        }
    }
    return pp;
}
void free2dSpace(int** pp, int row)
{
    for (int i = 0; i < row; i++)
    {
        free(pp[i]);
        pp[i] = NULL;
    }
    free(pp);
    pp = NULL;
}
int main()
{
    printf("Start!\n");
    int row = 6;
    int column = 5;
    int** pp = alloc2dSpace(row, column, sizeof(int));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            pp[i][j] = i + j;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", pp[i][j]);
        }
        putchar(10);
    }
    free2dSpace(pp, row);
    pp = NULL;
    printf("End!\n");
    return 0;
}
#endif

#include <stdlib.h>
#include <stdio.h>
enum
{
    Success, paMaErr, aMaErr
};
int alloc2dSpace(int*** ppp, int row, int column, size_t unitSize)
{
    *ppp = (int**)malloc(row * sizeof(int*));
    if (*ppp == NULL)
    {
        printf("*ppp malloc error!\n");
        return paMaErr;
    }
    for (int i = 0; i < row; i++)
    {
        (*ppp)[i] = (int*)malloc(column * unitSize);
        if ((*ppp)[i] == NULL)
        {
            printf("(*ppp)[%d] malloc error!\n", i);
            return aMaErr;
        }
    }
    return Success;
}
void free2dSpace(int** pp, int row)
{
    for (int i = 0; i < row; i++)
    {
        free(pp[i]);
        pp[i] = NULL;
    }
    free(pp);
    pp = NULL;
}
int main()
{
    int row = 6;
    int column = 5;
    int** pp = NULL;
    int rc = alloc2dSpace(&pp, row, column, sizeof(int));
    if (rc != Success)
    {
        printf("Err num :%d\n", rc);
        return -1;
    }
    printf("Start!\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            pp[i][j] = i + j;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", pp[i][j]);
        }
        putchar(10);
    }
    free2dSpace(pp, row);
    pp = NULL;
    printf("End!\n");
    return 0;
}
