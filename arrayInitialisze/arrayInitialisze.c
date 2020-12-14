#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//如果数组大小是N,那么访问下标是0 - N-1 / for (int i = 0; i < N; i++)

//对于构造类型来说我们研究的套路是
//定义/声明 / 大小 / 初始化/赋值 / 访问

//两个凡是
int main()
{
//    int a = 10;定义的时候给值:初始化
//    a = 100;   :赋值

//    int arr[10];//未初始化
//    for (int i = 0; i < 10; i++)
//    {
//        printf("arr[%d] = %d\n", i, arr[i]);
//    }

//    int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };//满初始化
//    for (int i = 0; i < 10; i++)
//    {
//        printf("arr[%d] = %d\n", i, arr[i]);
//    }

//    int arr[10] = { 1 };//部分初始化,其他部分自动清零
//    for (int i = 0; i < 10; i++)
//    {
//        printf("arr[%d] = %d\n", i, arr[i]);
//    }

//    int arr[10] = { 0 };//初始化清零操作,第一个元素初始化为0,其余未初始化的元素自动清零
//    for (int i = 0; i < 10; i++)
//    {
//        printf("arr[%d] = %d\n", i, arr[i]);
//    }

//    int arr[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 ,11, 33, 55, 77, 99 };
//    for (int i = 0; i < 10; i++)//越界初始化:应该被禁止,但是C语言有一个现象对越界不检(这在一定程度上带来了灵活性)
//    {
//        printf("arr[%d] = %d\n", i, arr[i]);
//    }

//    int arr[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0, 11, 33, 55, 77, 99};
//    for (int i = 0; i < 15; i++)
//    {//越界初始化并越界访问,应该被禁止,但是C语言有一个现象对于越界不检(一定程度上带来了灵活性)
//        printf("arr[%d] = %d\n", i, arr[i]);
//    }

//两个凡是
//凡是基本类型,既可以在定义的时候初始化,又可以在定义后以初始化的方式来赋值
//凡是构造类型,要么在定义的时候初始化,要么在定义后单个单个的初始化,不能先定义再以初始化的方式赋值
//    int arr[10];
//    arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8 };//错误:arr[10]是越界的元素而{ 1, 2, 3, 4, 5, 6, 7, 8 }是数组

//    struct Stu
//    {
//        int in;
//        char ch;
//    } S = { 10, 'a' };//正确

//    struct Stu
//    {
//        int in;
//        char ch;
//    } S;
//    S = { 10, 'a' };//错误

//    srand(time(NULL));
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//    for (int i = 0; i < 10; i++)
//    {
//        arr[i] = rand() % 100;
//    }
//    for (int i = 0; i < 10; i++)
//    {
//        printf("arr[%d] = %2d\n", i, arr[i]);
//    }

    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 11, 22, 33, 44 };
    for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++)//int[10] arr ----- 10=sizeof(arr)/sizeof(int)
    {//sizeof(arr)/sizeof(arr[0]) ----- sizeof(arr)/sizeof(*arr)
        printf("arr[%2d] = %2d\n", i, arr[i]);
    }
    return 0;
}
