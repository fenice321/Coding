#if 0
#include <stdio.h>
int getAge(int n)
{
    if (n == 1)
        return 10;
    else
        return (getAge(n - 1) + 2);
}

int main()
{
    int age = getAge(5);
    printf("age = %2d\n", age);
    return 0;
}


#include <stdio.h>
//�����ӡһ������
void reverseArr(int* pa, int i, int len)
{
    if (i != len - 1)
        reverseArr(pa, i + 1, len);
    printf("%d ", pa[i]);
}
//void Arr(int* pa, int i, int len)
//{
//    for (; i < len; i++)
//        printf("%d ", pa[i]);
//    putchar(10);
//}
void reArr(int* pa, int i, int len)
{
    printf("%d ", pa[i]);
    if (i != len - 1)
        reArr(pa, i + 1, len);
}

int main()
{
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    reArr(arr, 0, 10);
    putchar(10);
    reverseArr(arr, 0, 10);
    return 0;
}
#endif

#include <stdio.h>
//��Ŀ:��(��ͨ����/�ݹ鷽��)����/�����ӡһ������
void recurReverArr(int* pa, int i, int len)
{
    if (i != len - 1)
        recurReverArr(pa, i + 1, len);
    printf("%d ", pa[i]);
}
void recurOrderArr(int* pa, int i, int len)
{
    printf("%d ", pa[i]);
    if (i != len - 1)
        recurOrderArr(pa, i + 1, len);
}
int main()//�ص�
{
    int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    recurReverArr(arr, 0, 10);
    putchar(10);
    recurOrderArr(arr, 0, 10);
    putchar(10);

    int a[10] = { 1, 2, 3 };
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    putchar(10);
    int a1[10] = { [3] = 10 };
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a1[i]);
    }
    putchar(10);
    int a2[10] = { 0 };
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a2[i]);
    }
    putchar(10);
    int a3[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4 };//C��Խ�粻��,��ҪԽ�����
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a3[i]);
    }
    putchar(10);
    return 0;
}

#if 0
void disArr(int* pa, int i, int len)
{
    for (; i < len; i++)
    {
        printf("%d ", pa[i]);
    }
    putchar(10);
}
void reverseArr(int* pa, int i, int len)
{
    int t = i;
    for (; i >= len - t - 1; i--)
    {
        printf("%d ", pa[i]);
    }
    putchar(10);
}

int main()
{
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    disArr(arr, 0, 10);
    reverseArr(arr, 9, 10);
    return 0;
}
#endif
