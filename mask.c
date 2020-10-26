#include <stdio.h>
//mask���,����
void dis32Binary(int data)
{
    int i = 32;
    while (i--)
    {
        if (((1 << i) & data) != 0)
            printf("1");
        else
            printf("0");
        if (i % 4 == 0)
        {
            if (i % 8 == 0)
                printf(" ");
            else
                printf("-");
        }
    }
    putchar(10);
}
//λ��������·
//1.��Ҫ�����ļ�λ
//2.�ҵ����ʵ�����
//3.λ����õ����
int main()
{
    //0101-0101  �жϵ�5յ�ƵĿ���״̬(����������)
    int ch = 0x55;
    dis32Binary(ch);
    int mask = 1 << 4;
    if (ch & mask)
        printf("��λ����!\n");
    else
        printf("��λ����!\n");
    return 0;
}

int main4()
{
    //1�� 0�� 0101-0101 ����3,4,5,6յ�Ʒ�ת(����������)
    int ch = 0x55;
    dis32Binary(ch);
    int mask = ((1 << 2) | (1 << 3) | (1 << 4) | (1 << 5));
    dis32Binary(mask);
    ch ^= mask;
    dis32Binary(ch);
    return 0;
}

int main3()
{
    //1�� 0�� 0101-0101 ͬʱ�ص���3յ�ƺ͵�5յ��(����������)
    int ch = 0x55;
    dis32Binary(ch);
//    int mask = ~((1 << 2) + (1 << 4));
    int mask = ~((1 << 2) | (1 << 4));
    dis32Binary(mask);
    ch &= mask;
    dis32Binary(ch);
    return 0;
}
int main2()
{
    //1�� 0�� 0101-0101 �ص���5յ��(����������)
    int ch = 0x55;
    dis32Binary(ch);
    int mask = ~(1 << 4);
    ch &= mask;
    dis32Binary(ch);
    return 0;
}

int main1()
{
    //1�� 0�� 0101-0101�����4յ��(����������)
    int ch = 0x55;
    dis32Binary(ch);
    int mask = 1 << 3;
//    ch = ch ^ mask;
    ch |= mask;
    dis32Binary(ch);
    return 0;
}
