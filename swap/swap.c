#if 0
#include <stdio.h>
//�޲ν���

//�������κ�����������������ǽ������ݵ���߾���

//void mySwap(int* pa, int* pb)
//{
//    int t;
//    t = *pa;
//    *pa = *pb;
//    *pb = t;
//}

//+
//x,y��x+y ����������֪����������һ����
//void mySwap(int* pa, int* pb)//�˷����������
//{
//    *pa = *pa + *pb;
//    *pb = *pa - *pb;
//    *pa = *pa - *pb;
//}
// a + b = c;
// a = 3;  b = 5;

//^
//x,y��x^y ����������֪����������һ����
void mySwap(int* pa, int* pb)//�˷����������
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

void mySwap(int* pa, int* pb)//������������������,�������������
{
    *pa = *pa + *pb;
    *pb = *pa - *pb;
    *pa = *pa - *pb;
}
#endif
void mySwap(int* pa, int* pb)//�޲ν�������߾���:�����������,��δ������������
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
