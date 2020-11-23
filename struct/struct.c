#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <assert.h>

#if 0
//声明一个结构体类型
//声明一个学生类型,是想通过学生类型来创建一个学生变量(对象)
//描述学生:属性-名字+电话+性别+年龄
//struct _Stu
//{
//	//成员列表
//	char name[20];//名字
//	char tele[12];//电话
//	char sex[10];//性别
//	int age;
//} s4, s5, s6;//变量列表,此处全是学生类型定义的全局结构体变量
//struct _Stu s3;//学生类型定义的全局结构体变量
//int main()
//{
//	//s1和s2是学生类型定义的局部结构体变量
//	struct _Stu s1;
//	struct _Stu s2;
//	system("pause");
//	return 0;
//}
struct
{
	int a;
	char b;
	float c;
} x;
struct
{
	int a;
	char b;
	float c;
} a[10], *p;
int main()
{
	//此处会有警告,编译器会将上述的两个声明当成完全不同的两个类型,所以是不符合规矩的
	p = &x;
	//匿名/无名结构体,就算是两个一模一样的,编译器也不会将其看成等价的,
	system("pause");
	return 0;
}
#endif
#if 0
////错误的结构体自引用类型
////struct node
////{
////	int data;
////	struct node next;
////};
//
////正确的结构体自引用方法
//struct node
//{
//	int data;
//	struct node* next;
//};
//int main()
//{
//
//	system("pause");
//	return 0;
//}

//错误
//typedef struct
//{
//	int data;
//	Node* next;
//} Node;
//正确的自引用
//typedef struct node
//{
//	int data;
//	struct node* next;
//} Node;
//int main()
//{
//
//	system("pause");
//	return 0;
//}

//结构体变量的定义与初始化
//初始化和赋值是不一样的:
//初始化是走的构造器,在生成变量后就给定初值,叫做初始化
//赋值走的是赋值运算符重载,在生成变量后,通过=赋值,叫做赋值
struct T
{
	double d;
	short age;
};
struct S
{
	char c;
	struct T st;
	int a;
	double d;
	char arr[20];
};
struct S1
{
	char c1;
	int in;
	char c2;
};
struct S2
{
	char c1;
	char c2;
	int in;
};
struct Point
{
	int x;
	int y;
} p1;
struct Stu
{
	char name[15];
	int age;
};
struct node
{
	int data;
	struct Point p;
	struct node* next;
} n1 = { 10, { 10, 20 }, NULL };
int main()
{
	//struct S s = { 'c', 20, 3.14, "hello world!" };
	//printf("%c, %d, %.2lf, %s\n", s.c, s.a, s.d, s.arr);
	//struct S s = { 'c', { 45.6, 20 }, 30, 4.14, "I love you China!" };
	//printf("%c, %.2lf, %hd, %d, %.2lf, %s\n", s.c, s.st.d, s.st.age, s.a, s.d, s.arr);
	//struct Point p2;
	struct Point p3 = { 'x', 'y' };
	struct Stu s = { "zhangsan", 20 };
	struct node n2 = { 20, { 20, 30 }, NULL };
#if 0
	struct S1 s1;
	struct S2 s2;
	printf("%d\n", sizeof(s1));//12
	printf("%d\n", sizeof(s2));//8
#endif
	system("pause");
	return 0;
}
#endif
#if 0
//结构体内存对齐
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
struct S3
{
	char ch[13];
	short sh;
};
struct S4
{
	char c1;
	struct S3 s3;
	double d;
};
int main()
{
	printf("%d\n", sizeof(struct S3));
	printf("%d\n", sizeof(struct S4));
	system("pause");
	return 0;
}
#endif

#if 0
struct S
{
	int a;
	char c;
	double d;
};
//void initS(struct S tmp)
//{
//	tmp.a = 100;
//	tmp.c = 'Z';
//	tmp.d = 3.14;
//}
void initS(struct S* ps)
{
	ps->a = 100;
	ps->c = 't';
	ps->d = 3.14;
}
//传值:只是打印,效率较低,但是相对安全
void Print1(struct S tmp)
{
	printf("%d, %c, %.2lf\n", tmp.a, tmp.c, tmp.d);
}
//传址:只是打印,效率较高,但是相对不那么安全
void Print2(struct S* ps)
{
	printf("%d, %c, %.2lf\n", ps->a, ps->c, ps->d);
}
//传址:只是打印,效率较高,相对安全-----终极方案
void Print3(const struct S* const ps)
{
	printf("%d, %c, %.2lf\n", ps->a, ps->c, ps->d);
}

//函数传参的时候参数是需要压栈的,会有时间和空间上的系统开销
//如果传递一个结构体对象的时候,结构体过大,参数压栈的系统开销比较大,所以会导致性能的下降
//结论:结构体传参要传结构体指针
int main()
{
	struct S s = { 0 };
	//initS(s);//传值初始化失败
	initS(&s);//传址初始化成功
	Print1(s);//传值打印成功
	Print2(&s);//传址打印成功
	Print3(&s);
	//s.a = 100;
	//s.c = 'T';
	//s.d = 3.14;
	//printf("%d, %c, %.2lf\n", s.a, s.c, s.d);
	system("pause");
	return 0;
}
#endif
#if 0
//修改默认对齐数
//Windows中默认对齐参数是8 #pragma pack(8)
//Linux中没有默认对齐参数,或者说默认对齐参数是4,且最大是4字节对齐

//#pragma pack(8)
//struct S1
//{
//	char c1;
//	int in;
//	char c2;
//} s1;
//#pragma pack()
//#pragma pack(1)
//struct S2
//{
//	char c1;
//	char c2;
//	int in;
//} s2;
//#pragma pack()
//int main()
//{
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	system("pause");
//	return 0;
//}

//struct S0
//{
//	char c1;
//	double d;
//};
////设置默认对齐数为4
//#pragma pack(4)
//struct S1
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////取消设置的对齐数,还原为系统的默认对齐数
//
////设置默认对齐数为1
//#pragma pack(1)
//struct S2
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////取消设置的对齐数,还原为系统的默认对齐数
//int main()
//{
//	printf("%d\n", sizeof(struct S0));
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	system("pause");
//	return 0;
//}
#endif
#if 0
#include <stddef.h>
//offset是偏移量的意思
//offsetof是一个宏,定义在<stddef.h>头文件中
//size_t offsetof(structName, memberName);
//offsetof是一个宏,只是看起来像函数而已,但是若是函数没有入参是类型的函数啊,
//第一个参数是结构类型名,第二个参数是结构中的成员变量名,返回值是成员变量的相对于首地址的偏移量
struct S
{
	char a;
	int b;
	double c;
};
int main()
{
	printf("%d\n", offsetof(struct S, a));
	printf("%d\n", offsetof(struct S, b));
	printf("%d\n", offsetof(struct S, c));
	system("pause");
	return 0;
}
#endif
struct T
{
	int a;
	int b;
	int c;
	int d;
};

//结构体实现位段,位段声明和结构体类似,有两个不同
//1.位段的成员必须是signed int/short int/char/ungined int/unsigned short int/unsigned char
//但是位段的成员不能是double/float这种东西,一般位段类型成员是int就全部是int,是char就是全部是char,最好不要
//既有int又有char的使用,那样不好
//2.位段的成员名后有一个冒号后面跟一个数字

//位段-一种特殊的结构体类型-位-二进制位
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;//位域冒号后面的数字不能大于32/8(int/char)
//};
//int main()
//{
//	printf("%d\n", (int)sizeof(struct T));//16
//	printf("%d\n", (int)sizeof(struct A));//8
//	system("pause");
//	return 0;
//}

//位段涉及很多不确定的因素,位段是不跨平台的,注重可移植性的程序应该避免使用位段
struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
int main()
{
	struct S s = { 0 };
	printf("%d\n", (int)sizeof(s));//3
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

	system("pause");
	return 0;
}