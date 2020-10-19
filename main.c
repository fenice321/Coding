#include <stdio.h>//C语言所有的函数要求先声明后使用

int main()//main入口函数
{
  printf("Hello World!!!\n");//error warning
  return 0;
}
//C
//厂商差异:Microsoft vc   Borland turbo c   Gnu gcc
//平台差异:Windows   Linux
//IDE 一般引入了一个概念叫工程
//从源文件到可执行文件经历了什么
//linux   --- main.c a.out
//windows --- main.c xxx.exe
//gcc -E main.c -o main.i预处理
//gcc -S main.i -o main.s编译
//gcc -c main.s -o main.o汇编
//gcc    main.o -o hello 链接


//单行注释
//多行注释 不支持嵌套
//条件编译 实现多行注释

#if 0
/*
afjafjlkafj
aglja;la;f
*/
/*
alkfhahjklfhjka
*/
afjlkaflk;ajkfjk
#endif
