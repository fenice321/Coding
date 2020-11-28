#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//去除非可见字符,以空格为代表的,去除空格
// a b c

//china****0

//s
//****china0
//    t

//name=wangguilin
//passwd=111111

//     s
//china
//chxixna0
//       t


//     s
//china0
//***chi*na***
//            t
void trimStrRightSpace(char* str)//去除右空格
{
    while (*str) str++;
    while (*(--str) == ' ') *str = '\0';
//    if (*(str - 1) == ' ')
//    {
//        str--;
//        while (*str == ' ')
//        {
//            str--;
//        }
//        *(str + 1) = '\0';
//    }
}
void trimStrLeftSpace(char* str)//去除做空格
{
    if (*str != ' ')
        return;
    char* t = str;
    char* s = t;
    while (*t == ' ') t++;
    while (*s++ = *t++);
}
//void trimStrAllSpace(char* str)
//{
//    char* t = str;
//    while (*str)
//    {
//        if (*str != ' ')
//            *t++ = *str;
//        str++;
//    }
//    *t = '\0';
//}

void trimStrAllSpace(char* str)
{
    char* t = str;
    while (*t)
    {
        if (*t != ' ')
            *str++ = *t;
        t++;
    }
    *str = '\0';
}

int main()
{
    char buf[1024] = "    ch  ina    ";
//    printf("***%s***\n", buf);
//    trimStrRightSpace(buf);
//    printf("***%s***\n", buf);
//    trimStrLeftSpace(buf);
    printf("***%s***\n", buf);
    trimStrAllSpace(buf);
    printf("***%s***\n", buf);
    return 0;
}

int main1()
{
    FILE* fp = fopen("login.conf", "r+");
    if (NULL == fp)
    {
        printf("fp login.conf open error!\n");
        exit(-1);
    }
    char name[100];
    fgets(name, 100, fp);
    if (!strcmp(name, "wangguilin"))
    {
        printf("welcom to login!\n");
    }
    else
    {
        printf("Err!\n");
    }
    fclose(fp);
    return 0;
}

