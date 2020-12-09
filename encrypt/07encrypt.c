#if 0
#include <stdio.h>
#include <string.h>

void encode(char* buf, char ch)
{
    int len = strlen(buf);
    for (int i = 0; i < len; i++)
    {
        if (buf[i] == ch)
            continue;
        buf[i] ^= ch;
    }
}

void decode(char* buf, char ch)
{
    int len = strlen(buf);
    for (int i = 0; i < len; i++)
    {
        if (buf[i] == ch)
            continue;
        buf[i] ^= ch;
    }
}

int main()
{//������:ע�������������
    char buf[] = "i love xxx";
    printf("buf = %s\n", buf);
    char ch = 'x';
    encode(buf, ch);
    printf("buf = %s\n", buf);
    decode(buf, ch);
    printf("buf = %s\n", buf);

#if 0
    int a;
    a ^= a;
    printf("a = %d\n", a);

    //    int a = 0;
    //    printf("a = %d\n", a);
#endif
    return 0;
}


#include <stdio.h>
#include <string.h>

void encode(char* buf, char ch)
{
    int len = strlen(buf);
    for (int i = 0; i < len; i++)
    {//������:ע������������0,0���ַ�����'\0'���ַ����ý������,������Ҫ��������
        if (buf[i] == ch)
            continue;
        buf[i] ^= ch;
    }
}
void decode(char* buf, char ch)
{
    int len = strlen(buf);
    for (int i = 0; i < len; i++)
    {//������:ע������������0,0���ַ�����'\0'���ַ����ý������,������Ҫ��������
        if (buf[i] == ch)
            continue;
        buf[i] ^= ch;
    }
}
int main()//������:ע������������0,0���ַ�����'\0'���ַ����ý������,������Ҫ��������
{
    char buf[] = "i love xxx";
    printf("%s\n", buf);
    char ch = 'o';
    encode(buf, ch);
    printf("%s\n", buf);
    decode(buf, ch);
    printf("%s\n", buf);

//    int a;
//    a ^= a;//ע������������0
//    printf("a = %d\n", a);

//    int a = 0;
//    printf("a = %d\n", a);
    return 0;
}
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>//δ֪
void encode(char* buf, char ch, int n)
{
    for (int i = 0; i < n; i++)
    {
        buf[i] ^= ch;
    }
}
void decode(char* buf, char ch, int n)
{
    for (int i = 0; i < n; i++)
    {
        buf[i] ^= ch;
    }
}

int main(int argc, char* argv[])
{
    if (argc != 4)
    {
        printf("use ./a.out -e[-d] src dest format!\n");
        exit(-1);
    }
    char ch = 'a';
    if (strcmp(argv[1], "-e") == 0)
    {
        FILE* fpr = fopen(argv[2], "rb+");
        if (fpr == NULL)
        {
            printf("fpr open error!\n");
            exit(-1);
        }
        FILE* fpw = fopen(argv[3], "wb+");
        if (fpw == NULL)
        {
            fclose(fpr);
            printf("fpw open error!\n");
            exit(-1);
        }
        char buf[1024];
        int n;
        while ((n = fread((void*)buf, 1, 1024, fpr)) > 0)
        {
            encode(buf, ch, n);
            fwrite((void*)buf, 1, n, fpw);
        }
        fclose(fpr);
        fclose(fpw);
    }
    else if (strcmp(argv[1], "-d") == 0)
    {
        FILE* fpr = fopen(argv[2], "rb+");
        if (fpr == NULL)
        {
            printf("fpr open error!\n");
            exit(-1);
        }
        FILE* fpw = fopen(argv[3], "wb+");
        if (fpw == NULL)
        {
            fclose(fpr);
            printf("fpw open error!\n");
            exit(-1);
        }
        char buf[1024];
        int n;
        while ((n = fread((void*)buf, 1, 1024, fpr)) > 0)
        {
            decode(buf, ch, n);
            fwrite((void*)buf, 1, n, fpw);
        }
        fclose(fpr);
        fclose(fpw);
    }
    else
    {
        printf("command-line argument error!\n");
        exit(-1);
    }
    return 0;
}
