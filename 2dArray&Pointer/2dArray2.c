#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//һά����������������һ��ָ��,��ά��������������������ָ��
//& reference  * dereference
int main()
{
//    int arr[3][4];
//    printf("arr        = %p\n", arr);
//    printf("&arr[0]    = %p\n", &arr[0]);
//    printf("arr = %p, arr + 1 = %p\n", arr, arr + 1);

//    printf("arr[0]     = %p\n", arr[0]);
//    printf("&arr[0][0] = %p\n", &arr[0][0]);
//    printf("arr[0] = %p, arr[0] + 1 = %p\n", arr[0], arr[0] + 1);

    int arr[3][4] = { { 0 }, { 1, 2, 3, 4 }, { 0 } };
    printf("arr  = %p\n", arr);
    printf("arr  = %p, arr + 1  = %p\n", arr, arr + 1);
    printf("*arr = %p\n", *arr);
    printf("*arr = %p, *arr + 1 = %p\n", *arr, *arr + 1);

    printf("%d\n", *(*(arr + 1) + 2));
    return 0;
}

int main2()
{
    srand(time(NULL));
    int arr[3][4] = { { 0 }, { 0 }, { 0 } };//int[4] arr[3]; T arr[3];
    printf("arr     = %p\n", arr);    //��ʼ��ַ
    printf("&arr[0] = %p\n", &arr[0]);

    printf("arr = %p, arr + 1 = %p\n", arr, arr + 1);//����
//    for (int i = 0; i < 3; i++)
//    {
//        arr[i];//arr[i]��Ƕһά����������
//    }

    //��Ƕһά����Ĳ���
    printf("arr[0] = %p, arr[0] + 1 = %p\n", arr[0], arr[0] + 1);//arr[0]��Ƕһά����������
    printf("&arr[0][0] = %p, &arr[0][0] + 1= %p\n", &arr[0][0], &arr[0][0] + 1);//�ȼ�����Ƕһά�����׵�ַ

//    for (int i = 0; i < 3; i++)
//    {
//        printf("%p\n", arr[i]);
//    }
#if 0
    for (int i = 0; i < 3; i++)
    {
//        printf("%p\n", arr[i]);
        for (int j = 0; j < 4; j++)
        {
            printf("%3d ", arr[i][j]);
        }
        putchar(10);
    }
#endif
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%3d ", arr[i][j]);
        }
        putchar(10);
    }
    return 0;
}

int main1()
{
    int arr[4] = { 1, 2, 3, 4 };
    printf("arr     = %p\n", arr);                  //��ʼ��ַ
    printf("&arr[0] = %p\n", &arr[0]);
    printf("arr = %p, arr + 1 = %p\n", arr, arr + 1);//����
    for (int i = 0; i < 4; i++)                      //��Χ
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
