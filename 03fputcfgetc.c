#include <stdio.h>
#include <stdlib.h>
#define F_PRINT_ERR(e)\
    do\
{\
    if (e == NULL)\
{\
    printf("open error!\n");\
    exit(-1);\
    }\
    }\
    while (0)
int main()
{//#define EOF (-1)
    FILE* fp = fopen("xx.txt", "r+");
    F_PRINT_ERR(fp);
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
#if 0
    char ch = fgetc(fp);
    putchar(ch);
    printf("%x\n", ch);

    ch = fgetc(fp);
    putchar(ch);
    printf("%x\n", ch);

    ch = fgetc(fp);
    putchar(ch);
    printf("%x\n", ch);

    ch = fgetc(fp);
    putchar(ch);
    printf("%x\n", ch);

    ch = fgetc(fp);
    putchar(ch);
    printf("%x\n", ch);


    ch = fgetc(fp);
    putchar(ch);
    printf("%x\n", ch);
#endif
    fclose(fp);
    return 0;
}

int main1()
{
    FILE* fp = fopen("xx.txt", "w+");
    F_PRINT_ERR(fp);
//    if (fputc('a', fp) == EOF)
//    {
//        printf("write error!\n");
//        exit(-1);
//    }
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(fputc(ch, fp));
    }
    fclose(fp);
    return 0;
}
