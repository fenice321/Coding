#include <stdio.h>
#include <stdlib.h>
#if 0
//const增加了程序的健壮性
char* myStrcpy(char* dest, const char* src)
{
    char* d = dest;
//    while (1)
//    {
//        *dest = *src;
//        if (*dest == '\0')
//            break;
//        dest++;
//        src++;
//    }

//    while (*src++ = *dest++);
    while (*dest++ = *src++);
    return d;
}
int main()
{
    char buf[1024];
    char* s1 = "china";
    myStrcpy(buf, s1);
    puts(buf);
    return 0;
}
#endif
void func(int b[100])
{
    printf("%d\n", sizeof(b));//4
}
int main1()
{
    int* p = NULL;
    printf("sizeof(p) = %d\n", sizeof(p));//4
    printf("sizeof(*p)= %d\n", sizeof(*p));//4

    int a[100];
    printf("sizeof(a) = %d\n", sizeof(a));//400
    printf("sizeof(a[100]) = %d\n", sizeof(a[100]));//4
    printf("sizeof(&a[0]) = %d\n", sizeof(&a[0]));//4

    int b[100];
    func(b);//4
    int c[2][3];
    printf("sizeof(c) = %d\n", sizeof(c));//24
    printf("sizeof(c[0]) = %d\n", sizeof(c[0]));//12
    int (*d)[3];
    printf("sizeof(d) = %d\n", sizeof(d));//4
    char* q = (char*)malloc(100 * sizeof(char));
    if (NULL == q)
    {
        printf("q malloc error!\n");
        exit(-1);
    }
    printf("sizeof(q) = %d\n", sizeof(q));//4
    printf("sizeof(&a) = %d\n", sizeof(&a));//4
    return 0;
}
enum
{
    Success, quoFailure
};
int funcOper(int* psum, int* pdif, int* pquo, int a, int b)
{
    *psum = a + b;
    *pdif = a - b;
    if (b == 0)
    {
        printf("Operator Error!\n");
        return quoFailure;
    }
    *pquo = a / b;
    return Success;
}
int main()
{
    int sum;
    int dif;
    int quo;
    int a;
    int b;
    printf("please input an integer number a:\n");
    scanf("%d", &a);
    printf("please input an integer number b:\n");
    scanf("%d", &b);
    int rc = funcOper(&sum, &dif, &quo, a, b);
    printf("sum = %d\n", sum);
    printf("dif = %d\n", dif);
    if (rc == quoFailure)
    {
        printf("Err num:%d\n", quoFailure);
        return -1;
    }
    printf("quo = %d\n", quo);
    return 0;
}
