#include <stdio.h>
#include <string.h>

//""引起的一堆字符,"AF;AJLKFKL;\0"
//int t = 23;
//C语言是如何处理常量字符串的
//data rodata / const char* const

//字符数组
//等价
int main()
{
#if 0
//    char buf[6] = "china";

    char bf1[10];
    char bf2[10];
    for (int i = 0; i < 10; i++)
    {
        bf1[i] = 'a';
    }
//    strcpy(bf2, bf1);
    strncpy(bf2, bf1, 9);
    bf2[9] = '\0';

    puts(bf2);


    char* buf = "to be or not to be";
    char buf2[40];
//    strncpy(buf2, buf, sizeof(buf2));
//    strncpy(buf2, buf, sizeof(buf2) - 1);
//    buf2[sizeof(buf2) - 1] = '\0';
//    printf("%s\n", buf2);
    strncpy(buf2, buf, 5);
    buf2[5] = '\0';
    puts(buf2);
#endif

    char* buf1 = "to be honest";
    char* buf2[40];
//    strncpy(buf2, buf1, sizeof(buf2) - 1);
//    buf2[sizeof(buf2) - 1] = '\0';
    strncpy(buf2, buf1, 5);
    buf2[5] = '\0';
    printf("%s\n", buf2);
    return 0;
}

int main2()
{
    char buf[] = "china";
    printf("sizeof(buf) = %d\n", sizeof(buf));
    printf("buf         = %p\n", buf);
    printf("buf + 1     = %p\n", buf + 1);

    printf("buf = %s\n", buf);

    printf("sizeof(\"china\") = %d\n", sizeof("china"));
    printf("\"china\"     = %p\n", "china");
    printf("\"china\" + 1 = %p\n", "china" + 1);

    printf("buf = %s\n", "china");
    return 0;
}
int main1()
{
    printf("%s, %p, %c, %c\n", "china", "china", *"china", "china"[3]);
    return 0;
}
