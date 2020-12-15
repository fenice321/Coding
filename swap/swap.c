#if 0
#include <stdio.h>
//无参交换

//不引入任何其它参数且无溢出是交换数据的最高境界

//void mySwap(int* pa, int* pb)
//{
//    int t;
//    t = *pa;
//    *pa = *pb;
//    *pb = t;
//}

//+
//x,y和x+y 此三者任意知其二可求得另一个数
//void mySwap(int* pa, int* pb)//此法有溢出风险
//{
//    *pa = *pa + *pb;
//    *pb = *pa - *pb;
//    *pa = *pa - *pb;
//}
// a + b = c;
// a = 3;  b = 5;

//^
//x,y和x^y 此三者任意知其二可求得另一个数
void mySwap(int* pa, int* pb)//此法无溢出风险
{
//    *pa = *pa ^ *pb;
//    *pb = *pa ^ *pb;
//    *pa = *pa ^ *pb;

    *pa ^= *pb;
    *pb ^= *pa;
    *pa ^= *pb;
}

int main()
{
    int a = 3;
    int b = 5;
    printf("a = %d, b = %d\n", a, b);
    mySwap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
#endif

#include <stdio.h>
#if 0
void mySwap(int* pa, int* pb)
{
    int t;
    t = *pa;
    *pa = *pb;
    *pb = t;
}

void mySwap(int* pa, int* pb)//不引入其他参数交换,但是有溢出风险
{
    *pa = *pa + *pb;
    *pb = *pa - *pb;
    *pa = *pa - *pb;
}
#endif
void mySwap(int* pa, int* pb)//无参交换的最高境界:既无溢出风险,又未引入其他变量
{
//    *pa = *pa ^ *pb;
//    *pb = *pa ^ *pb;
//    *pa = *pa ^ *pb;

    *pa ^= *pb;
    *pb ^= *pa;
    *pa ^= *pb;
}

int main()
{
    int a = 3;
    int b = 5;
    printf("a = %d, b = %d\n", a, b);
    mySwap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
