#include <stdio.h>
//��ά�����������
//����/����  ��С  ��ʼ��/��ֵ  ����
//��Ҫ��

//������̬
int main()
{
//    int arr[3][4];//δ��ʼ��
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            printf("%5d ", arr[i][j]);
//        }
//        putchar(10);
//    }

//    int arr[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };//��ά��������ʼ��
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            printf("%3d ", arr[i][j]);
//        }
//        putchar(10);
//    }

//    int arr[3][4] = { { 1, 2 }, { 5, 6, 7, 8 }, { 9 } };//�в��ֳ�ʼ��
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            printf("%3d ", arr[i][j]);
//        }
//        putchar(10);
//    }

//    int arr[3][4] = { 1, 2, 5, 6, 7, 8, 9 };//���岿�ֳ�ʼ��
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            printf("%3d ", arr[i][j]);
//        }
//        putchar(10);
//    }

    //int[4] arr[3];
    //ʡ3�ȼ���ʡ��һά����Ĵ�С
    //ʡ4�ȼ���һά�����Ա���Ͳ�����
//    int arr[][4] = { { 1, 2 }, 3, 4, 5, 6 , 7, 8, 9, 10 };
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            printf("%3d ", arr[i][j]);
//        }
//        putchar(10);
//    }
//    int arr[][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//    for (size_t i = 0; i < sizeof(arr)/sizeof(int[3]); i++)
//    {
//        for (size_t j = 0; j < 3; j++)
//        {
//            printf("%3d ", arr[i][j]);
//        }
//        putchar(10);
//    }
    int arr[][2] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (size_t i = 0; i < sizeof(arr)/sizeof(*arr); i++)
    {//i < sizeof(arr)/sizeof(arr[0]);����i < sizeof(arr)/sizeof(int[2]);
        for (size_t j = 0; j < 2; j++)
        {
            printf("%3d ", arr[i][j]);
        }
        putchar(10);
    }
    return 0;
}

int main1()
{
    //    int arr[10]; int[10] arr;
    int arr[3][4];//int[4] arr[3] --- T arr[3]; (arr[0] arr[1] arr[2]) --- T[3] arr; --- int[4][3] arr;
    printf("sizeof(arr)    = %d\n", sizeof(arr));                                   //int[4]��С�Ķ���������
    printf("sizeof(arr[0]) = %d\n", sizeof(arr[0]));
    //    printf("sizeof(int[4][3]) = %d\n", sizeof(int[4][3]));//int[4]��С�Ķ���������//�����΢�е㲻��λ
    printf("sizeof(int[3][4]) = %d\n", sizeof(int[3][4]));
    return 0;
}
