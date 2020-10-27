#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
int g_a = 10;
int main()
{
	//duration:
	//局部变量的生命周期是:进入作用域生命周期开始,出作用域生命周期结束
	//全局变量的生命周期是:和main函数生命周期等同也等同于整个程序的生命周期
	{
		int a = 10;
		printf("a = %d\n", a);//correct
	}
	//printf("a = %d\n", a);//error
	system("pause");
	return 0;
}
//int main()
//{
//	//printf("g_val = %d\n", g_val);//报错:未声明的标识符
//	//声明:extern声明外部符号的
//	extern int g_val;//scope:全局变量的作用域是整个工程
//	printf("g_val = %d\n", g_val);
//	system("pause");
//	return 0;
//}
//int global = 2020;//全局变量
//void func()
//{
//	printf("func()---global = %d\n", global);
//	return;
//}
//int main()
//{
//	//scope:全局变量的作用域是整个工程:任何地方都可以用
//	printf("%d\n", global);
//	func();
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//scope:局部变量的作用域就是所在的局部代码块的内部
//	{
//		int num = 10;
//		int local = 100;
//		printf("num = %d\n", num);
//	}
//	//printf("local = %d\n", local);//报错,未定义的标识符local
//	int num = 0;
//	printf("num = %d\n", num);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//计算两个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//标准格式输出函数printf-输出数据
//	printf("please input two integer numbers:>#");
//	//标准格式输入函数scanf-输入数据
//	scanf("%d%d", &num1, &num2);//&-取地址符号
//	//C语言语法规定,变量要定义在当前代码块的最前面
//	//C++语法支持变量哪里使用哪里定义(随处使用随处定义)
//	//int sum = 0;
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}
//int a = 10;//global
//int main()
//{
//	printf("%d\n", a);//10
//#if 0
//	//{
//	//	int a = 10;//local
//	//}
//	//printf("%d\n", a);//错误:a未声明的标识符
//#endif
//	system("pause");
//	return 0;
//}
//int a = 100;//global
//int main()
//{
//	printf("%d\n", a);//100
//	int a = 10;//local
//	//局部变量和全局变量的名字建议不要相同-容易误会产生bug
//	//当局部变量和全局变量的名字相同的时候局部变量优先
//	printf("%d\n", a);//10
//	system("pause");
//	return 0;
//}
//int num2 = 20;//num2是全局变量-定义在函数代码块之外{}的变量叫做全局变量
//int main()
//{
//	int num1 = 10;//num1是局部变量-定义在代码块内部{}的变量叫做局部变量
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//定义变量:类型 变量名;
//	//年龄
//	//20
//	short age = 20;//向内存申请2个字节=16个比特位 用来存储20
//	float weight = 95.6f;//向内存申请4个字节,存放小数
//	char ch = 'w';//向内存申请1个字节,存放'w'字符
//	system("pause");
//	return 0;
//}
//int main()//ByteDance/字节跳动 抖音/西瓜视频/今日头条 30w+
//{
//	//二进制0 1
//	//八进制0 1 2 3 4 5 6 7
//	//十进制0 1 2 3 4 5 6 7 8 9
//	//计算机是硬件--通电--电信号--正电/负电--1/0
//	//bit-比特位-计算机中的最小的存储单位
//	//一个字节是八个比特位
//	//byte-字节-计算机中的单位-计算机中的最小的编址单位
//	//kb = 1024bytes
//	//mb = 1024kbs
//	//gb = 1024mbs
//	//tb = 1024gbs
//	//pb = 1024tbs
//	printf("sizeof(char)        = %d\n", sizeof(char));//1
//	printf("sizeof(short)       = %d\n", sizeof(short));//2
//	printf("sizeof(int)         = %d\n", sizeof(int));//4
//C语言标准规定sizeof(long) >= sizeof(int)
//	printf("sizeof(long)        = %d\n", sizeof(long));//4/8
//	printf("sizeof(long long)   = %d\n", sizeof(long long));//8
//	printf("sizeof(float)       = %d\n", sizeof(float));//4
//	printf("sizeof(double)      = %d\n", sizeof(double));//8
//	printf("sizeof(long double) = %d\n", sizeof(long double));//8/10
//	system("pause");
//	return 0;
//}
//char字符类型
//%d-打印整型
//%c-打印字符
//%f-打印浮点型数字-打印小数
//%p-以地址的形式打印
//%x-打印十六进制
//%o-打印八进制
//int main()
//{
//	//'A';//向内存申请一块空间来存放字符'A'
//	//char ch = 'A';//
//	//printf("%c\n", ch);//%c打印字符格式的数据
//	//20;
//	//short int--短整型
//	//int--整型
//	//int age = 20;
//	//printf("%d\n", age);//%d -- 打印整型十进制数据
//	//long int--长整型
//	//long int num = 100;
//	//printf("%d\n", num);
//	//float f = 5.0;
//	//printf("%f\n", f);
//	//double d = 3.14;
//	//打印double型数据用%f打印可以是可以但是不合适,最准确的写法是用%lf去打印双精度浮点数
//	//printf("%f\n", d);
//	//printf("%lf\n", d);
//
//	system("pause");
//	return 0;
//}
//20
//55.5
//int main()//C程序都是从main函数开始执行的
//{
//	printf("hehe\n");
//	system("pause");
//	return 0;
//}
//#include <windows.h>
////包含一个叫stdio.h的头文件
////std->标准->standard io->input/output->输入/输出
////.h是头文件扩展名,代表文件类型是头文件,h->head->头
//#include <stdio.h>
//一个解决方案有多个项目工程,一个项目工程有多个.c,.h文件也有多个函数,但只有一个main函数,
//编译生成时一个项目工程生成一个.exe/a.out可执行性文件
////main函数->主函数->C程序的入口,所有C程序从main函数的第一行开始执行
//int main()//一个工程中main函数有且仅有一个
//{	
//	//这里完成任务
//	//在屏幕上输出hello world
//	//函数->printf->打印函数/格式打印输出 print->打印 f->format/function->格式/功能,函数
//	//库函数-C语言本身提供给我们使用的函数
//	//别人的东西,使用时要打招呼
//	//#include #预处理指令 include包含 <头文件名.h>系统提供的头文件包含用<>,自己的头文件名用""包含
//	//#include <stdio.h>包含头文件
//	printf("hello 比特!\n");
//	//printf("hello world!\n");
//	//printf("hello world!\n");
//	//printf("hello world!\n");
//	//printf("hello world!\n");
//	//printf("hello world!\n");
//	//printf("hello world!\n");
//	//printf("hello world!\n");
//	//printf("hello world!\n");
//	//printf("hello world!\n");
//	//printf("hello world!\n"); 
//	//printf("hehe!\n");
//	//system("pause");
//	return 0;
//}

//int 是整型的意思
//main前面的int表示操作系统调用main函数之后返回一个整型值
//int main()
//{
//	return 0;//返回0(int整型类型)
//}

//这种写法是过时的写法
//void main()
//{
//	return;
//}