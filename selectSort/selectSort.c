#if 0
#include <stdio.h>
void mySwap(int* pa, int* pb)
{
    *pa ^= *pb;
    *pb ^= *pa;
    *pa ^= *pb;
}
void selectSort(int* pa, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (pa[i] > pa[j])
                mySwap(&pa[i], &pa[j]);
        }
    }
}
int main()
{
    int arr[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//    printf("%p\n", selectSort);
    selectSort(arr, 10);
//    ((void (*)(int*, int))0x00401630)(arr, 10);
//    void (*pf)(int*, int) = &selectSort;
//    (*pf)(arr, 10);

//    void (*pf)(int*, int) = (void (*)(int*, int))0x00401630;
//    pf(arr, 10);
    printf("after selectSort!\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    putchar(10);
    return 0;
}

#include <stdio.h>
void mySwap(int* pa, int* pb)
{
    *pa ^= *pb;
    *pb ^= *pa;
    *pa ^= *pb;
}
void selectSort2(int* pa, int n)
{
    int idx;
    for (int i = 0; i < n - 1; i++)
    {
        idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (pa[idx] > pa[j])
                idx = j;
        }
        if (idx != i)
            mySwap(&pa[idx], &pa[i]);
    }
}
int main()//选择排序优化思想:比而不换,只记下标(比较次数不可以减少,但是交换次数可以减少到1次)
{         //交换影响计算机性能,我们减少交换次数以提高计算机性能达到优化的目的
    int arr[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
    selectSort2(arr, 10);
    printf("after selectSort2!\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    putchar(10);
    return 0;
}
#endif
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void initRandArr(int* pa, int n);
void disPlayArr(int* pa, int n);
void selectSort(int* pa, int n);
int getSmallestIdx(int* pa, int n, int i);
void mySwap(int* pa, int* pb);
int main()//支解选则法排序
{
    int arr[10];
    initRandArr(arr, 10);
    disPlayArr(arr, 10);
    selectSort(arr, 10);
    printf("after selectSort!\n");
    disPlayArr(arr, 10);
    return 0;
}
void initRandArr(int* pa, int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        *pa++ = rand() % 100;
    }
}
void disPlayArr(int* pa, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *pa++);
    }
    putchar(10);
}
int getSmallestIdx(int* pa, int n, int i)
{
    int idx = i;
    for (int j = i + 1; j < n; j++)
    {
        if (pa[idx] > pa[j])
            idx = j;
    }
    return idx;
}
void mySwap(int* pa, int* pb)
{
    *pa ^= *pb;
    *pb ^= *pa;
    *pa ^= *pb;
}
void selectSort(int* pa, int n)
{
    int idx;
    for (int i = 0; i < n - 1; i++)
    {
        idx = getSmallestIdx(pa, n, i);
        if (idx != i)
            mySwap(&pa[idx], &pa[i]);
    }
}
