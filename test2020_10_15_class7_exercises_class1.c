#include "c.h"
int main()
{
	int a = 10;
	int* lp = &a;//查看内存lp,a,&a,&lp
	system("pause");
	return 0;
}
#if 0
void func1()
{
	printf("hello bit!\n");
	return;
}
int main()
{
	//面试中最常面的关键字是static
	//static修饰局部变量:作用域不变依旧是所在的代码块内,生命周期由所在代码块到整个进程
	//static修饰全局变量:作用域由可以跨文件到只能本文件使用(改变链接属性),生命周期不变
	//static修饰函数:作用域由可以跨文件使用函数到只能本文件使用(改变链接属性),生命周期不变
	printf("g_num = %d\n", g_num);
	func1();
	//char* p; 字符指针
	//1.指向一个字符,保存的是字符的地址
	//2.指向的是一个字符串,保存的是字符串的首地址
	//类型char的作用是,决定访问的步长(决定向后访问几个字节)
	printf("sizeof(char*) = %d\n", sizeof(char*));//4/8
	//char*是一个类型->指针类型->字符指针类型
	//char是一个类型->字符类型
	char* p = "hello";//p-->指针变量
	printf("%s\n", p);
	
	system("pause");
	return 0;
}
#endif
#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
#pragma warning(disable:6031)//消除忽略scanf返回值的那条警告
#pragma warning(disable:4996)
int myMax(int d1, int d2)
{
	int tmp = 111;
	if (d1 < d2)
	{
		return d2;
	}
	return d1;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("please input two integer number:>#");
	scanf("%d%d", &a, &b);
	if (a < b)
	{
		printf("max = %d\n", b);
	}
	else
	{
		printf("max = %d\n", a);
	}
	int iMax = myMax(a, b);
	printf("iMax = %d\n", iMax);
//begin:
	//code(1)
	//code(2)//程序一般顺序执行,从上到下
	//for (int i = 0; i < 10; i++)
	//{
	//	//code(i)
	//}
	//code(1)
	//code(2)
	//......
	//code(9)
	//goto begin;
	//code(3)
	//code(4)
	system("pause");
	return 0;
}
#endif
#if 0
int main()
{
	//"c:\test\121",'\t'水平制表符,'\121'转义字符形如'\ooo'1-3位8进制数构成的都是转义字符,形如'\xaa'1-2位16进制构成的转义字符
	//为什么'\n','\121','\xaa','\ooo'都只算一个字符?
	//答:都用''引起来了还用说?
	printf("%d\n", strlen("c:\test\121"));//7
	printf("%d\n", strlen("c:\\test\\121"));//11
	printf("%d\n", strlen("c:\\\test\\\121"));//9 '\\'看做一个字符不和第三个粘连
	printf("%d\n", strlen("c:\\\\test\\\\121"));//13
	printf("%d\n", strlen("c:\\\\\test\\\\\121"));//11

	printf("%c - %d\n", '\060', '\060');//可以有空串"",但是没有空字符''
	//'\t'水平制表符 '\n'是换行 '\r'是回车 '\b'是退格符 '\0'是0也是'\0' '\n'是10也是回车  '\060'是'0'也是48
	system("pause");
	return 0;
}
#endif
#if 0
//1.数组
//1.1数组定义: 类型 数组名[数组大小]；
//1.2数组的定义和初始化:
//定义+初始化:可以不指定数组的大小,因为编译器可以根据数组初始化时的元素计算出来
//只定义不初始化:必须指定数组的大小,并且数组大小指定的时候不能为变量(常变量也不行)只能为常量(宏也可以)
//char arr[] = { 'b', 'i', 't' }; arr[0] = 'b'; arr[1] = 'i'; arr[2] = 't';
//1.3数组的访问从下标0开始

//2.C字符串
//C字符串结尾后面会有一个'\0',作为结束标记
void func()
{
	//只定义数组不初始化时不能省略数组个数,因为编译器不知道要开辟多大的空间
	//int a[];//错误
	//int a[4];//正确

	//int n = 4;
	//int a[n];//VLA-C99标准加的不能被初始化,且只有一次变长的机会但是在VS中错误
	//const int n = 4;
	//int a[n];//const int n常变量,本质也是变量只是有了常量的属性
	int arr[4];
	//arr = { 1, 2, 3, 4 };//这种赋值方式错误
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	//定义数组时随手初始化数组则可以省略数组个数,编译器会根据初始化的元素个数来开辟空间
	//int arr[] = { 1, 2, 3, 4, 5 };
}
//3.strlen
//strlen和sizeof之间的区别
//sizeof计算的是占用的字节数量,strlen计算的是字符串长度
//sizeof(int)
//0x0000000a
//strlen--计算字符串的长度
//strlen函数--strlen("aabbcceedd\0");

//注意C语言中'\0'是很重要的
int main()
{
	char arr[] = { 'b','i', 't' };
	//长度不确定
	//计算出来的长度不准确,可能导致内存崩溃(若后面的内存刚好被其他进程使用一定会崩溃,否则可能会崩溃)
	//printf("%d\n", strlen(arr));
	int a = 10;
	//printf("%d\n", strlen(a));//有错误,返回代码为: -1073741819
	system("pause");
	return 0;
}
#endif
#if 0
//局部变量:在一对花括号内部定义的变量叫做局部变量
//生命周期:在花括号内部才"有生命"
//全局变量:在花括号外面并且没在其他花括号内部定义的变量叫做全局变量
//生命周期:跟随程序,程序开始运行全局变量就创建,程序结束了全局变量才被销毁
//当局部变量和全局变量名称一致时优先使用局部变量,"县官不如现管"
void func()
{
	int num = 20;
	printf("num = %d\n", num);
	return;
}
//全局变量
int num = 10;
//int g_a = 111;
int main()
{
	//局部变量
	int num = 1;
	printf("num = %d\n", num);
	system("pause");
	return 0;
}
#endif
#if 0//条件编译,等同于注释("可支持嵌套的注释")
//char short int long  long long -> 1 2 4 4/8 字节 -> 整型数据 -> 不带小数点
//float double -> 4 8 字节 -> 浮点型数据 -> 带小数点的
//long类型占字节数是4/8,与操作系统位数有关,也与编译器位数有关,
//32bitOS中long就是占4字节,
//64位可能占4/8字节,64bitOS中当编译器是64位long就占8字节,当编译器是32位long就占4字节

//编译生成的可执行性程序是分类的:1.32位 2.64位
int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(long));
	printf("heheheheh...C\n");
	system("pause");
	return 0;
}
#endif