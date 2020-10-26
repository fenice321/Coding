#include <stdio.h>
//mask面具,掩码
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
//位操作的套路
//1.你要操作哪几位
//2.找到合适的掩码
//3.位运算得到结果
int main()
{
    //0101-0101  判断第5盏灯的开关状态(从右往左数)
    int ch = 0x55;
    dis32Binary(ch);
    int mask = 1 << 4;
    if (ch & mask)
        printf("此位灯亮!\n");
    else
        printf("此位灯灭!\n");
    return 0;
}

int main4()
{
    //1开 0关 0101-0101 将第3,4,5,6盏灯反转(从右往左数)
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
    //1开 0关 0101-0101 同时关掉第3盏灯和第5盏灯(从右往左数)
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
    //1开 0关 0101-0101 关掉第5盏灯(从右往左数)
    int ch = 0x55;
    dis32Binary(ch);
    int mask = ~(1 << 4);
    ch &= mask;
    dis32Binary(ch);
    return 0;
}

int main1()
{
    //1开 0关 0101-0101亮起第4盏灯(从右往左数)
    int ch = 0x55;
    dis32Binary(ch);
    int mask = 1 << 3;
//    ch = ch ^ mask;
    ch |= mask;
    dis32Binary(ch);
    return 0;
}
