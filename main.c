#include <stdio.h>
#include <stdlib.h>
//Node* head = createList();

//FILE结构体和FILE*指针

//通过fopen打开一个文件,返回一个FILE*指针
//以后,我们所有对文件的操作即操作FILE*指针fp
//句柄

#if 0
r 以只读的方式打开,如果文件不存在则报错,文件不可写
w 如果文件不存在则创建,如果文件存在,清空,文件不可读
a 如果文件不存在则创建,如果文件存在追加写,文件不可读

r+
w+
a+
#endif
int main()
{
    FILE* fp = fopen("data.txt", "w");
    if (NULL == fp)
    {
        printf("fp open error!\n");
        exit(-1);
    }
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        fputc(ch, fp);
    }
    fclose(fp);//fclose具有主动刷缓冲的功能
    return 0;
}
