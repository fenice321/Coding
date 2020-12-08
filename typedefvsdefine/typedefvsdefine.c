#include <stdio.h>
//typedef typedefine类型定义 typerename类型重命名
//typedef对现有类型取别名,不能创造新的类型
//C++中能创造新的类型的只有struct

//typedef使用方法:
//1.先用原类型定义变量;
//2.在定义前加typedef
//3.将定义的原变量的名字改为你需要的别名
typedef char int8;  //typedef char int8;
typedef short int16;//typedef short int16;
typedef int int32;  //typedef int INT;
typedef long long int64;//typedef long long int64;//在使用前重命名都可以
int main()
{
    int8  i8;  //比char short int long long更形象
    int16 i16;
    int32 i32;
    int64 i64;
    int arr[10];
    printf("sizeof(arr)     = %d\n", sizeof(arr));
    printf("sizeof(int[10]) = %d\n", sizeof(int[10]));
    typedef int ARRAY[10];//typedef int ARRAY[10];//在使用前重命名都可以
    ARRAY arr2;
    printf("sizeof(ARRAY)   = %d\n", sizeof(ARRAY));
    printf("sizeof(arr2)    = %d\n", sizeof(arr2));
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#if 0
typedef typerename只能对已有类型取别名,不能创造新的类型
1.用现有类型生成变量
2.在变量定义之前加typedef
3.将定义的变量换成你要的别名

面试:
#define
typedef
typedef是C语言语句(以;结尾),参与编译
#define是宏定义,在预处理阶段处理完成
#endif
#define DINT int
#define DpChar char*
malloc(size_t _Size);
int main()
{
    char *p, q;
    printf("sizeof(p) = %d\n", sizeof(p));
    printf("sizeof(q) = %d\n", sizeof(q));
    typedef char* pChar;
    pChar a, b;
    printf("sizeof(a) = %d\n", sizeof(a));
    printf("sizeof(b) = %d\n", sizeof(b));
    DpChar x, y;
    printf("sizeof(x) = %d\n", sizeof(x));
    printf("sizeof(y) = %d\n", sizeof(y));
    return 0;
}

int main2()
{
    DINT a, b, c, d;
    printf("sizeof(DINT) = %d\n", sizeof(DINT));
    printf("sizeof(a)    = %d\n", sizeof(a));
    printf("sizeof(b)    = %d\n", sizeof(b));
    printf("sizeof(c)    = %d\n", sizeof(c));
    printf("sizeof(d)    = %d\n", sizeof(d));
    return 0;
}

int main1()
{
    typedef int INT;
    INT a, b, c, d;
    printf("sizeof(INT)   = %d\n", sizeof(INT));
    printf("sizeof(int)   = %d\n", sizeof(int));
    printf("sizeof(a)     = %d\n", sizeof(a));
    printf("sizeof(b)     = %d\n", sizeof(b));
    printf("sizeof(c)     = %d\n", sizeof(c));
    printf("sizeof(d)     = %d\n", sizeof(d));
    typedef int Array[10];
    Array arr;
    printf("sizeof(Array) = %d\n", sizeof(Array));
    printf("sizeof(arr)   = %d\n", sizeof(arr));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
        printf("%d\n", arr[i]);
    }
    return 0;
}

