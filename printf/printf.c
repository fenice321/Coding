#include <stdio.h>
int main()
{//printf��������ֵ�����Ĵ�С
    int n = printf("1234");
    printf("%d\n", n);

    int  m = printf("1234");
    printf("\n%d\n", m);

    int nn = printf("%d", 10);
    printf("\n%d\n", nn);

    int mm = printf("%10d", 10);
    printf("\n%d\n", mm);

    int nnn = printf("%1d", 100000);
    printf("\n%d\n", nnn);

    int i = 43;//�ص�!!!
    printf("%d\n", printf("%d", printf("%d", i)));
    printf("%d\n", printf("%d\n", printf("%d\n", i)));
    return 0;
}

int main3()//�ص�!!!
{
    float fl = 0.3;//0.000001 0.299999-0.300001
    printf("%f\n", fl);
    printf("%d\n", (int)(fl * 10));

    double d = 0.3;
    printf("%f\n", d);
    printf("%d\n", (int)(d * 10));
    printf("%d\n", (int)((d + 0.000002) * 10));
    return 0;
}

int main2()//�ص�!!!
{//дһ��С����ֱ�Ƚϸ�����������0������5�Ĵ�С
    double tmp1 = 0.0;
    if (tmp1 >= 0 - 0.000002 && tmp1 <= 0 + 0.000002)
    {
        printf("tmp1 == 0\n");
    }
    else
    {
        printf("tmp1 != 0\n");
    }
    double tmp2 = 5.0;
    if (tmp2 >= 5 - 0.000002 && tmp2 <= 5 + 0.000002)
    {
        printf("tmp2 == 5\n");
    }
    else
    {
        printf("tmp2 != 5\n");
    }
    return 0;
}

int main1()
{
//    int data;
//    printf("please input an integer number:\n");
//    scanf("%d", &data);
//    printf("%d\n", data);

//    char ch1;
//    char ch2;
//    scanf(" %c %c", &ch1, &ch2);
//    printf("%c->%d, %c->%d\n", ch1, ch1, ch2, ch2);

//    char ch;
//    int in;
//    scanf("%d %c", &in, &ch);
//    printf("%d, %c->%d\n", in, ch, ch);

//    int in1;
//    int in2;
//    scanf("%d%d", &in1, &in2);
//    int in3;
//    char ch;
//    scanf("%d", &in3);
//    printf("%d\n", in3);

    int in1;
    int in2;
    scanf("%d%d", &in1, &in2);
    getchar();//getchar����һ���س�
    int in3;
    char ch;
    scanf("%c", &ch);
    printf("%c->%d\n", ch, ch);

//    int in1;
//    int in2;
//    scanf("%d%d", &in1, &in2);
//    int in3;
//    char ch;
//    scanf(" %c", &ch);
//    printf("%d->%c\n", ch, ch);
    return 0;
}
