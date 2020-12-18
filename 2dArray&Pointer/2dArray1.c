#include <stdio.h>
//二维数组基础部分
//声明/定义  大小  初始化/赋值  访问
//三要素

//数据形态
int main()
{
//    int arr[3][4];//未初始化
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            printf("%5d ", arr[i][j]);
//        }
//        putchar(10);
//    }

//    int arr[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };//二维数组满初始化
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            printf("%3d ", arr[i][j]);
//        }
//        putchar(10);
//    }

//    int arr[3][4] = { { 1, 2 }, { 5, 6, 7, 8 }, { 9 } };//行部分初始化
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            printf("%3d ", arr[i][j]);
//        }
//        putchar(10);
//    }

//    int arr[3][4] = { 1, 2, 5, 6, 7, 8, 9 };//整体部分初始化
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            printf("%3d ", arr[i][j]);
//        }
//        putchar(10);
//    }

    //int[4] arr[3];
    //省3等价于省了一维数组的大小
    //省4等价于一维数组成员类型不完整
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
    {//i < sizeof(arr)/sizeof(arr[0]);或者i < sizeof(arr)/sizeof(int[2]);
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
    printf("sizeof(arr)    = %d\n", sizeof(arr));                                   //int[4]大小的东西有三个
    printf("sizeof(arr[0]) = %d\n", sizeof(arr[0]));
    //    printf("sizeof(int[4][3]) = %d\n", sizeof(int[4][3]));//int[4]大小的东西有三个//理解稍微有点不到位
    printf("sizeof(int[3][4]) = %d\n", sizeof(int[3][4]));
    return 0;
}
