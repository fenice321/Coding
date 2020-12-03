#if 0
#include <stdio.h>
void quickSort(int* pa, int low, int high)
{
    int pivot = pa[low];
    int l = low;
    int h = high;
    if (low < high)//����low == highֱ��ֹͣ,����low == high��Ҫ��һ��
    {
        while (l < h)
        {
            while ((pa[h] >= pivot) && (l < h))//�ұ�:С����ֵ,����ƶ�
                h--;
            pa[l] = pa[h];
            while ((pa[l] <= pivot) && (l < h))//���:С���ƶ�,�����ֵ
                l++;
            pa[h] = pa[l];
        }
        pa[l] = pivot;
        quickSort(pa, low, h - 1);
        quickSort(pa, l + 1, high);
    }
}
int main()//����˼��:��������,�ҵ�����,�ֶ���֮
{
    int arr[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
    quickSort(arr, 0, 9);
    printf("after quickSort!\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    putchar(10);
    return 0;
}

#include <stdio.h>
void orPrintArr(int* pa, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", pa[i]);
    }
    putchar(10);
}
void rePrintArr(int* pa, int len)
{

    for (int i = 0 + len - 1; i >= 0; i--)
    {
        printf("%d ", pa[i]);
    }
    putchar(10);
}
int main()
{//������ӡ�������������
    int arr[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    orPrintArr(arr, 10);
    rePrintArr(arr, 10);
    return 0;
}


#include <stdio.h>

void recurReversePrintArr(int* pa, int i, int len)
{
    if (i != len - 1)
        recurReversePrintArr(pa, i + 1, len);
    printf("%d ", pa[i]);
}
void recurOrdinarPrintArr(int* pa, int i, int len)
{
    printf("%d ", pa[i]);
    if (i != len - 1)
        recurOrdinarPrintArr(pa, i + 1, len);
}
int main()
{
    int arr[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
    recurReversePrintArr(arr, 0, 10);
    putchar(10);
    recurOrdinarPrintArr(arr, 0, 10);
    return 0;
}
#endif

#include <stdio.h>
void quickSort(int* pa, int low, int high)
{
    int l = low;
    int h = high;
    int pivot = pa[low];
    if (low < high)
    {
        while (l < h)
        {
            while ((pa[h] >= pivot) && (l < h))
                h--;
            pa[l] = pa[h];
            while ((pa[l] <= pivot) && (l < h))
                l++;
            pa[h] = pa[l];
        }
        pa[l] = pivot;
        quickSort(pa, low, h - 1);
        quickSort(pa, l + 1, high);
    }
}
int main()
{
    int arr[10] = { 9, 3, 1, 5, 7, 4, 8, 2, 0, 6 };
    int low = 0;
    int high = 10 - 1;
    quickSort(arr, low, high);
    printf("after quickSort!\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    putchar(10);
    return 0;
}
