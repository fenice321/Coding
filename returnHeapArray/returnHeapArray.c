#if 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* foo(int n)
{
//    char arr[100];//栈上的空间是不可以返回
//    return arr;

    char* pa = (char*)malloc(n * sizeof(char));//堆上的空间是可以返回的
    if (NULL == pa)
    {
        printf("pa malloc error!\n");
        exit(-1);
    }
    return pa;
}

int getMem(char** p, int n)
{
    *p = (char*)malloc(n * sizeof(char));
    if (*p == NULL)
        return -1;
    else
        return 0;
}

int main()
{
    char* p = foo(100);
    strcpy(p, "china");
    puts(p);

//    FILE* fp = fopen("aa.txt", "w+");

    char* q = NULL;
    int ret = getMem(&q, 100);
    if (ret == 0)
    {
        strcpy(q, "abcdefg");
        printf("%s\n", q);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int getMem(char** qq, int n)
{
    *qq = (char*)malloc(n * sizeof(char));
    return *qq == NULL ? -1 : 0;
}

int main()//返回堆上的一维数组空间
{
    char* q = NULL;
    int rc = getMem(&q, 100);
    if (rc == -1)
    {
        printf("malloc error!\n");
        exit(-1);
    }
    strcpy(q, "abcdefghijklmn");
    printf("%s\n", q);
    free(q);
    q = NULL;
    return 0;
}
#endif
#include <stdio.h>
#define M 5
#define N 3
#define Z (M + N)
int main()
{
    int A[M] = { 1, 3, 5, 7, 9 };
    int B[N] = { 2, 4, 6 };
    int C[Z];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < M && j < N)
    {
        if (A[i] < B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }
    while (i < M)
        C[k++] = A[i++];
    while (j < N)
        C[k++] = B[j++];
    for (int i = 0; i < Z; i++)
    {
        printf("%d ", C[i]);
    }

    int maxValue = C[0];
    int minValue = C[0];
    for (int i = 1; i < Z; i++)
    {
        if (maxValue < C[i])
            maxValue = C[i];
        if (minValue > C[i])
            minValue = C[i];
    }
    printf("maxValue = %d\n", maxValue);
    printf("minValue = %d\n", minValue);
    return 0;
}
