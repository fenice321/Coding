#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
/*
在VC中Sleep中的第一个英文字符为大写的"S"在标准C中是sleep(S不要大写),下面使用大写的来说明,
具体用什么看你用什么编译器.简单的说VC用Sleep,别的一律使用sleep.
Sleep函数的一般形式:Sleep(unsigned long);
其中,Sleep()里面的单位,是以毫秒为单位,所以如果想让函数滞留1秒的话,应该是Sleep(1000);
在Linux下,sleep中的"s"不大写
sleep()单位为秒,usleep()里面的单位是微秒.在内核中,sleep的实现是由pause函数和alarm函数两个实现的.
特别注意在Codeblocks环境下是无法使用sleep函数的,
因为在windows上Codeblocks采用mingw(Gnu在Window环境下的编译器,
可以充分使用WindowsApi)作为编译器,而在stdlib.h中sleep的说明如下:
_CRTIMP void __cdecl __MINGW_NOTHROW _sleep (unsigned long) __MINGW_ATTRIB_DEPRECATED;
可以认为mingw舍弃了sleep函数,建议用Sleep实现sleep.
1秒 等于10^3毫秒
1毫秒等于10^3微秒
1微秒等于10^3纳秒
1纳秒等于10^3皮秒
*/
//#define MAX 600

//返回值 函数名(形参, 形参, 形参...)
//{
//	//正常的代码
//}
//myAdd小驼峰,MyAdd大驼峰
//int myAdd(int x, int y)//写函数就是面向过程,写类就是面向对象
//{					   //面向过程是走一步看一步的哲学
//	int result = x + y;//我要什么,我写什么,我调什么
//	return result;
//	//return x + y;
//}
//myAdd(int x, int y)//C语言省略函数返回值可以编译过,但是这样返回值默认是int类型,不推荐这样写
//{
//	int result = x + y;
//	return result;
//}
int myAdd(int x, int y)
{
	int result = x + y;
	return result;
}
int mySub(int x, int y)
{
	int result = x - y;
	return result;
}
int myMul(int x, int y)
{
	int result = x * y;
	return result;
}
int myDiv(int x, int y)
{
	int result = x / y;
	return result;
}
int main()
{
	//vs中.sln文件加载代码和工程项目
	//printf("\x66\n");
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("please input two data:>#");
		scanf("%d%d", &x, &y);
		//printf("%d + %d = %d\n", x, y, myAdd(x, y));//使用函数:解耦
		char op = 'x';
		printf("please input your op:<+-*/>#");
		scanf(" %c", &op);
		if ('+' == op)
		{
			printf("%d + %d = %d\n", x, y, myAdd(x, y));
		}
		else if ('-' == op)
		{
			printf("%d - %d = %d\n", x, y, mySub(x, y));
		}
		else if ('*' == op)
		{
			printf("%d * %d = %d\n", x, y, myMul(x, y));
		}
		else if ('/' == op)
		{
			if (0 != y)
			{
				printf("%d / %d = %d\n", x, y, myDiv(x, y));
			}
			else
			{
				printf("Div Zero! Error!\n");
			}
		}
		else
		{
			//TODO
			printf("your input op Error!\n");
		}
	}
	//int result = x + y;
	//printf("%d + %d = %d\n", x, y, result);
	//int i = 0;
	//do
	//{
	//	printf("bit\n");
	//	i++;
	//} while (1);
	//int i = 0;
	//while (0)//一个bit也不打印
	//{
	//	printf("bit\n");
	//	i++;
	//}
	//int i = 0;
	//do
	//{
	//	printf("bit\n");
	//	i++;
	//} while (0);//打印一个bit
	//int i = 0;
	//do
	//{
	//	printf("bit\n");
	//	i++;
	//} while (i < 10);//先执行,再判定
	//for (;;)//for的死循环,for(;;)等价于while (1)
	//{
	//	printf(".");
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("i: %d\n", i);
	//	Sleep(1000);
	//}
	//int i = 0;
	//for (i = 1; i < 10; i++)
	//{
	//	printf("i: %d\n", i);
	//	Sleep(1000);
	//}
	//int i = 0;
	//for (; i < 10; i++)
	//{
	//	printf("i: %d\n", i);
	//	Sleep(1000);
	//}
	//for (条件设置; 条件判定; 条件更新)
	//{
	//	//待执行的代码
	//}
	//printf("加入比特");
	//int line = 0;
	//Sleep(3000);
	//while (line <= MAX)
	//{
	//	printf("coding...\n");
	//	line++;
	//}
	//if (line > MAX)
	//{
	//	printf("走向人生高峰!\n");
	//}
	//1. while (1.条件设置 2.条件判定 3.条件更新)
	//2. while (语句) 1.执行()内部的语句得到真假 2.判定
	//3. while (1)死循环
	//int i = 1;//条件设置
	//while (i <= 10)//条件判定 1.先执行内部条件运算 2.再进行while循环判定
	//{
	//	printf("i = %d\n", i);
	//	i = i + 1;//i += 1; i++; ++i;//条件更新
	//	Sleep(1000);//Sleep();参数单位是毫秒,1秒=1000毫秒=1000000微秒=1000000000纳秒
	//}
	//while (1)//while的死循环.while (1)等价于for (;;)
	//{
	//	printf(".");
	//}
	//while (条件[变化的])
	//{
	//	//执行对应的语句
	//}
	//printf("%d\n", 11 == 11);//1
	//printf("%d\n", 11 == 10);//0

	//bool true/false C语言没有bool类型
	//1.if() {} else {},先识别()里面的表达式,得到真假(1,0),然后再判定
	//2.==容易写成=,建议写成类似0 == x的样式
	//3.if(0),if(1)写法是允许的,但是一般不这样写,前者可以用来注释代码(不推荐)
	//int select = 0;
	//while (1)
	//{
	//	printf("你有没有好好coding呢?<0:yes 1:int 2:no>#");
	//	scanf("%d", &select);
	//	if (0 == select)
	//	{
	//		printf("恭喜,你能拿到好的offer!\n");
	//	}
	//	else if (1 == select)
	//	{
	//		printf("恭喜,你在拿好offer的路上!\n");
	//	}
	//	else
	//	{
	//		printf("抱歉......!\n");
	//	}
	//}
	//if (条件)
	//{
	//	//条件成立
	//	//执行该代码块中的代码
	//}
	//else
	//{
	//	//条件不成立
	//	//执行该代码块中的代码
	//}
	//char c = '\'';
	//printf("%c\n", c);
	//7:0~6
	//2:0~1
	//8:0~7
	//16:0 1 2 3 4 5 6 7 8 9 a b c d e f
	//\x3f符合\xdd两个十六进制的转义字符
	//11->1*10+1
	//11->1*2^1+1*2^0->3
	//3f->3*16^1+15*16^0->48+15->63
	//printf("\c");//c
	//putchar(10);
	//printf("%d\n", sizeof("\c"));//2
	//printf("%d\n", strlen("\c"));//1
	//printf("%d\n", sizeof("\t"));//2
	//printf("%d\n", strlen("\t"));//1
	/*C风格注释,多行注释,但不支持嵌套*/
	//C++风格注释,单行注释
	//建议使用C++风格的注释,比较优秀一些
	//printf("%d\n", sizeof("abcdef"));//7/字符串大小
	//printf("%d\n", strlen("abcdef"));//6/字符串长度
	//\32被单独解释为一个转义字符'\32',占一个字符长度和大小
	//printf("%d\n", strlen("c:\test\328\test.c"));//14
	//printf("%c\n", '\'');
	//printf("%c\n", '\"');
	//printf("%s\n", "\'");
	//printf("%s\n", "\"");
	//printf("\'");
	//printf("\"");
	//printf("c:\code\test.c\n");
	//转义:把特殊含义转成普通含义或者把普通含义转成特殊含义
	//printf("比\n特\n");
	//printf("比n特\n");//转义字符
	//printf("比\特\n");//错误/不能这样转义
	//printf("比\\特\n");
	//char str1[] = "bit";
	//printf("sizeof(str1) = %d\n", sizeof(str1));
	//char str2[] = { 'b', 'i', 't' };
	//char str3[] = { 'b', 'i', 't', '\0' };
	//printf("%s\n", str1);
	//printf("%s\n", str2);
	//printf("%s\n", str3);
	//char str1[16] = "bit";
	//char str2[16] = { 'b', 'i', 't' };
	//char str3[16] = { 'b', 'i', 't', '\0' };
	//printf("%s\n", str1);
	//printf("%s\n", str2);
	//printf("%s\n", str3);
	//"hello bit";
	//char str[16] = "hello bit!";
	//printf("%s\n", str);
	//printf("%d\n", sizeof(""));
	system("pause");//不是必须的,仅仅是为了便于观察,不让窗口闪屏
	return 0;
}

//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));//8 10 12 14 
//	}
//}