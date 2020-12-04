#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�Եݹ���������:����,����,��ֵ��
void quickSort(int* pa, int low, int high)
{
    int pivot = pa[low];
    int l = low;
    int h = high;
    if (low < high)
    {
        while (l < h)
        {
            while (pa[h] <= pivot && l < h)
                h--;
            pa[l] = pa[h];
            while (pa[l] >= pivot && l < h)
                l++;
            pa[h] = pa[l];
        }
        pa[l] = pivot;
        quickSort(pa, l + 1, high);
        quickSort(pa, low, h - 1);
    }
}
int linearSearch(int* pa, int size, int findData)
{

    for (int i = 0; i < size; i++)
    {
        if (findData == pa[i])
            return i;
    }
    return -1;
}
//int binarySearch(int* pa, int low, int high, int findData)
//{
//    int midIdx;
//    while (low <= high)
//    {
//        midIdx = (low + high) / 2;
//        if (findData == pa[midIdx])
//            return midIdx;
//        else if (findData > pa[midIdx])
//            high = midIdx - 1;
//        else
//            low = midIdx + 1;
//    }
//    return -1;
//}
//ѭ���������ǵݹ���ֹ����
int binarySearch(int* pa, int low, int high, int findData)
{
    int midIdx;
    if (low <= high)
    {
        midIdx = (low + high) / 2;
        if (findData == pa[midIdx])
            return midIdx;
        else if (findData > pa[midIdx])
            return binarySearch(pa, low, midIdx - 1, findData);
        else
            return binarySearch(pa, midIdx + 1, high, findData);
    }
    return -1;
}

int main()
{
//    srand(time(NULL));
    int arr[10] = { 1, 3, 5, 7, 9, 0, 4, 2, 8, 6 };
//    for (int i = 0; i < 10; i++)
//    {
//        arr[i] = rand() % 10;
//    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    putchar(10);
    quickSort(arr, 0, 10 - 1);//����:��������,�ҵ�����,�ֶ���֮
    printf("after quickSort!\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    putchar(10);
    int idx = linearSearch(arr, 10, 2);
    if (idx == -1)
        printf("find none!\n");
    else
        printf("idx = %d\n", idx);
    idx = binarySearch(arr, 0, 10 - 1, 2);
    if (idx == -1)
        printf("find none!\n");
    else
        printf("idx = %d\n", idx);
    return 0;
}
