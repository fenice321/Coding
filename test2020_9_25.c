#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//基本上必须写
#include <windows.h>//仅仅是为了让程序暂停一下,让我们看到结果
#pragma warning(disable:4996)//VS2013上只有这一种解决方法
//计算机只认识2进制
//程序(二进制文件(文件在硬盘上))运行的时候都要先从硬盘被加载到内存
//在代码中定义变量的本质:变量是在内存中被定义(开辟内存空间)的

//为何存在变量?
//答:变量的存在是为了合理的使用内存

//C语言没有字符串类型,C语言中用字符数组/字符指针来存储/表示字符串

// //是C++风格的注释,单行注释
// /*是C语言风格的注释,多行注释,不支持嵌套*/

//int g_value = 2019;//g在代码块的外部,叫做全局的
//{代码块}
//void show()
//{
//	int a = 10;
//	printf("show run!\n");
//	return;
//}
//#define MAX 100
//#define RED 10//宏定义:1.见名知意 2.便于维护

//枚举本身是整型的集合,便于我们维护代码
//enum
//{	//0开始
//	RED = -100, YELLOW, BLACK = 300, BLUE
//};
int main()//main函数是程序的入口函数,有且只有一个
{
	char str1[16] = "bit";
	char str2[16] = { 'b', 'i', 't' };
	char str3[16] = { 'b', 'i', 't', '\0' };
	printf("%s\n", str1);//bit
	printf("%s\n", str2);//bit
	printf("%s\n", str3);//bit
	//char str[16] = "hello";
	//str[6] = 'X';
	//printf("%s\n", str);
	//printf("%s\n", "hello");
	//字符串常量
	//"hello";
	//字符常量
	//'x';
	//"x";
	//"";
	//1;
	//'a';
	//printf("hello");
	//printf("%s\n", "hello");
	//C字符串默认以'\0'结尾  ('\0',0,NULL,'0')?
	//printf("%d\n", sizeof("abcd"));
	//printf("%d\n", sizeof("a"));
	//printf("%d\n", sizeof(""));

	//printf("sizeof(RED) = %d\n", sizeof(RED));//4
	//printf("%d\n", RED);
	//printf("%d\n", YELLOW);
	//printf("%d\n", BLACK);
	//printf("%d\n", BLUE);
	//const int a = 10;
	//int arr[a];//VS中不支持variable-length array
	//const关键字修饰的常变量(有常量的属性,本质是变量)
	//用const修饰的变量定义,被修饰的变量不能被直接修改
	//const int a = 100;
	int const a = 100;//等价于const int a = 100;
	//a = 200;//a不能被直接修改
	//int* p = &a;//const int*丢失了类型为int*
	//*p = 200;//间接修改了a
	//printf("*p = %d, a = %d\n", *p, a);
	//定义变量:分两步
	//1.开辟空间
	//2.写入对应的数据
	//初始化:空间开辟好里面的数据与生俱来是某个值
	//初始化和赋值在C语言中貌似区别不大,实则区别特别大(C++中看的出来)
	//int a = 100;//初始化
	//赋值:第二次进行主动赋值
	//a = 200;//赋值
	//printf("a = %d\n", a);
	//BLUE = 200;//错误/BLUE是常量,不能被赋值
	//int a = RED;
	//int b = YELLOW;
	//printf("a = %d\n", a);
	//printf("b = %d\n", b);
	//int c = RED;
	//int a = RED;
	//int b = RED;
	//int d = RED;
	//int a = MAX;
	//int a = 100;//不建议这样写
	//printf("a = %d\n", a);
	//printf("MAX = %d\n", MAX);
	//MAX = 200;//错误/不能给常量赋值

	//1;
	//'A';
	//"Hello World!";//字面常量加分号可以编过,但是没有什么意义,因为找不到它,不能修改
	//int a = 1;
	//float pi = 3.14;
	//show();
	//int num1 = 0;
	//int num2 = 0;
	//printf("请输入两个数据: ");
	//int n = scanf("%d%d", &num1, &num2);//&变量名?变量的地址
	//printf("n = %d\n", n);//函数scanf的返回值是成功输入的变量的个数
	//int result = num1 + num2;
	//printf("%2d + %2d = %2d\n", num1, num2, result);
	//printf("num1 = %d, num2 = %d\n", num1, num2);
	//变量:变量名,变量空间,变量地址
	//不建议将全局变量名和局部变量名设置为同名的!!!
	//命名建议:在命名全局变量时加个前缀g_name,表示是全局变量名global
	//int g = 2020;
	//g = 2021;
	//printf("vlaue: %d\n", g);//全局变量名和局部变量名重名了,使用时局部变量优先,就近原则

	//sizeof();是一个操作符/关键字,用来计算数据类型类型所占字节的大小,返回值类型是size_t
	//不同的数据类型所占用的字节大小是不同的
	//printf("char:        %d\n", sizeof(char));//1
	//printf("short:       %d\n", sizeof(short));//2
	//printf("int:         %d\n", sizeof(int));//4
	//printf("long:        %d\n", sizeof(long));//4
	//printf("long long:   %d\n", sizeof(long long));//8
	//printf("float:       %d\n", sizeof(float));//4
	//printf("double:      %d\n", sizeof(double));//8
	//printf("long double: %d\n", sizeof(long double));//8/10/12

	//char c = 'x';
	//int i = 10;
	//double d = 3.14;//代码块内部:局部变量/临时变量/自动变量
	//printf("Hello World!\n");
	system("pause");//仅仅是为了让程序暂停一下,让我们看到结果
	return 0;
}