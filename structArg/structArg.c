#include <stdio.h>
#include <stdlib.h>
//C���Զ�������Ĵ�����Ǵ�ָ��
//���ڽṹ������Ҳ�Ƽ���ָ��:��������ǧ���Ч��
//struct _data
//{
//    int a;
//    int b;
//    char c;
//    double d;
//    int a;
//    int b;
//    char c;
//    double d;
//    int a;
//    int b;
//    char c;
//    double d;
//    int a;
//    int b;
//    char c;
//    double d;
//    int a;
//    int b;
//    char c;
//    double d;
//    int a;
//    int b;
//    char c;
//    double d;
//    int a;
//    int b;
//    char c;
//    double d;
//    int a;
//    int b;
//    char c;
//    double d;
//};
#if 0
//���κͷ��صı��ʾ���һ�θ�ֵ
typedef struct _MyComplex
{
    float real;
    float image;
} MyComplex;
MyComplex addMyComplex(MyComplex c1, MyComplex c2);
//Ҫʵ��һ��������������������
int main()
{
    MyComplex c1 = { 1.0, 2.0 };
    MyComplex c2 = { 3.0, 4.0 };
    MyComplex c3 = addMyComplex(c1, c2);
    printf("(%.2f, %.2f)\n", c3.real, c3.image);
    return 0;
}
MyComplex addMyComplex(MyComplex c1, MyComplex c2)
{
    MyComplex t;
    t.real = c1.real + c2.real;
    t.image = c1.image + c2.image;
    return t;
}

typedef struct _MyComplex
{
   float real;
   float imag;
} MyComplex;
MyComplex addMyComplex(MyComplex *pc1, MyComplex *pc2);
int main()
{
    MyComplex c1 = { 1.0, 2.0 };
    MyComplex c2 = { 3.0, 4.0 };
    MyComplex c3 = addMyComplex(&c1, &c2);
    printf("(%.2f, %.2f)\n", c3.real, c3.imag);
    return 0;
}
MyComplex addMyComplex(MyComplex* pc1, MyComplex* pc2)
{
    MyComplex t;
    t.real = pc1->real + pc2->real;
    t.imag = pc1->imag + pc2->imag;
    return t;
}

typedef struct _MyComplex
{
   float real;
   float imag;
} MyComplex;
MyComplex* addMyComplex(MyComplex* pc1, MyComplex* pc2);
int main()
{
    MyComplex c1 = { 1.0, 2.0 };
    MyComplex c2 = { 3.0, 4.0 };
    MyComplex* pm = addMyComplex(&c1, &c2);//�����״��:ջ�ϵĿռ䲻���Է���
    printf("(%.2f, %.2f)\n", pm->real, pm->imag);
    return 0;
}
MyComplex* addMyComplex(MyComplex* pc1, MyComplex* pc2)
{
    MyComplex t;
    MyComplex* pt = &t;//�����״��:ջ�ϵĿռ䲻���Է��ز����״���Ұָ��
    pt->real = pc1->real + pc2->real;
    pt->imag = pc1->imag + pc2->imag;
    return pt;
}
#endif
typedef struct _MyComplex
{
    float real;
    float imag;
} MyComplex;
MyComplex* addMyComplex(MyComplex* pc1, MyComplex* pc2);
int main()
{
    MyComplex c1 = { 1.0, 2.0 };
    MyComplex c2 = { 3.0, 4.0 };
    MyComplex* pm = addMyComplex(&c1, &c2);
    printf("(%.2f, %.2f)\n", pm->real, pm->imag);
    free(pm);
    pm = NULL;
    return 0;
}
MyComplex* addMyComplex(MyComplex* pc1, MyComplex* pc2)
{
    MyComplex* pt = (MyComplex*)malloc(1 * sizeof(MyComplex));
    if (NULL == pt)
    {
        printf("pt malloc error!!!\n");
        exit(-1);
    }
    pt->real = pc1->real + pc2->real;
    pt->imag = pc1->imag + pc2->imag;
    return pt;
}
