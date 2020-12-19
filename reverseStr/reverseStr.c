#if 0
#include <stdio.h>
#include <string.h>

void ordinaryReverseStr(char* str)
{
    char* sHead = str;
    char* sTail = str + strlen(str) - 1;
    while (sHead < sTail)
    {
        *sHead ^= *sTail;
        *sTail ^= *sHead;
        *sHead ^= *sTail;
        sHead++;
        sTail--;
    }
}
void recursiveReverseStr(char* p)
{
    if (*p != '\0')
    {
        recursiveReverseStr(p + 1);
        printf("%c", *p);
    }
}
int main()
{
    char buf[1024] = "china";
    printf("%s\n", buf);
    ordinaryReverseStr(buf);
    printf("%s\n", buf);
    recursiveReverseStr(buf);
    return 0;
}
#endif
#if 0
#include <stdio.h>
#include <string.h>
char bufRev[1024];
char* pb = bufRev;
void recursiveReverseStr(char* p)
{//递归实现将逆置的字符串保存起来 (全局版)
    if (*p != '\0')
    {
        recursiveReverseStr(p + 1);
        *pb++ = *p;
    }
}
int main()
{
    char buf[1024] = "china";
    recursiveReverseStr(buf);
    *pb = '\0';
    printf("%s\n", bufRev);
    return 0;
}
#endif
#if 0
#include <stdio.h>
#include <string.h>
//递归实现将逆置的字符串保存起来 (全局版)
char buf[1024] = { 0 };
void recursiveReverse(char* str)
{
    if (*str != '\0')
    {
        recursiveReverse(str + 1);
//        printf("%c", *str);
        strncat(buf, str, 1);
    }
}
int main()
{
    char arr[] = "china";
    recursiveReverse(arr);
    printf("%s\n", buf);
    return 0;
}
#endif
#if 0
#include <stdio.h>
#include <string.h>
//递归实现将逆置的字符串保存起来 (局部版)
void recursiveReverseStr(char* str, char* buf)
{
    if (*str != '\0')
    {
        recursiveReverseStr(str + 1, buf);
//        printf("%c", *str);
        strncat(buf, str, 1);
    }
}
int main()
{
    char buf[1024] = { 0 };
    char arr[] = "china";
    recursiveReverseStr(arr, buf);
    printf("%s\n", buf);
    return 0;
}
#endif
