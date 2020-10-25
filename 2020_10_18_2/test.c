#include "test.h"//自包含

int a = 1234;
//int add(int one = 10, int another = 20)//C语言不支持默认参数
//int add(int one, int another = 20)
int add(int one, int another)
{
	return one + another;
}


#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
int main()
{
	char str[64] = "hello, ";
	//printf("%s", *str);//printf变参函数,可变参数列表,动态获取参数内容和类型并格式输出到屏幕
	//int t = printf("%s\n", str);
	//printf("%d\n", t);
	system("pause");
	return 0;
}
#if 0
int main()
{
	//函数的嵌套调用和链式调用
	//printf函数的返回值是printf往显示屏上打印的字符的个数(包括控制字符但不包括'\0');
	//任意往显示器上显示的信息全部是字符
	//int num = printf("aaa");
	//int t = printf("\nnum = %d\n", num);//3
	//printf("t = %d\n", t);//9
	//num = printf("aa:%d\n", 1234);
	//t = printf("num = %d\n", num);//8
	//t = printf("%d", t);
	//printf("%d", t);、

	//printf("%d", printf("%d", printf("%d", 43)));//4321
	//printf("%d", printf("%d", printf("%d", 4321)));//432141

	//char str[64] = "hello, ";
	//字符串拼接,本质就是在待拼接字符串最后一个有效字符后开始拷贝,注意待拼接源必须有足够的空间容纳拼接的字符串
	//char* s = strcat(str, "world!");
	//printf("%s\n", s);
	//printf("%s\n", str);
	//char str[] = "hello, ";
	//char* s = strcat(str, "world");//凡是所有的数据越界,是不是一定会报错?//答:不一定报错
	//puts(s);//越界问题是C语言中一个非常关键的问题,我们一定要保证在写代码过程中尽可能保证不越界                       

	char str[20] = "hello";
	printf("%u", strlen(strcat(str, "bit")));
	system("pause");
	return 0;
}
#endif
#if 0
#define IS_PRIME 1
#define IS_NOT_PRIME 0
#define IS_NOT_LEAPYEAR 0
#define IS_LEAPYEAR 1
#define FOUND_NONE -1
int isPrimeNumber(int n)//函数设计是素数返回IS_PRIME(1)否则返回IS_NOT_PRIME(0)
{
#if 0
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return IS_NOT_PRIME;
		}
	}
	return IS_PRIME;
#endif
#if 0
	int tmp = n / 2;
	for (int i = 2; i <= tmp; i++)
	{
		if (n % i == 0)
		{
			return IS_NOT_PRIME;
		}
	}
	return IS_PRIME;
#endif
	int tmp = (int)sqrt(n);//double sqrt(double x);
	for (int i = 2; i <= tmp; i++)
	{
		if (n % i == 0)
		{
			return IS_NOT_PRIME;
		}
	}
	return IS_PRIME;
}
//找到数据,函数返回对应数组下标(0~sz-1),没找到返回FOUND_NONE(-1)
int binSearch(int arr[], int sz, int findData)
{
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	while (left <= right)
	{
		//mid = (left + right) / 2;//有溢出风险:/2等价于 >> 1,后者效率更高
		//mid = left + ((right - left) >> 1);//优化一点溢出
		mid = (left & right) + ((left ^ right) >> 1);//无溢出风险
		if (arr[mid] > findData)
		{
			right = mid - 1;
		}
		else if (arr[mid] < findData)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return FOUND_NONE;
}
int isLeapYear(int year)//是闰年函数返回IS_LEAPYEAR(1)否则返回IS_NOT_LEAPYEAR(0)
{
#if 0
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return IS_LEAPYEAR;
	}
	return IS_NOT_LEAPYEAR;
#endif
	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}
#if 0
void inC1(int num)
{
	num++;
	return;
}
int inC2(int num)
{
	return ++num;
}
void inC3()
{
	static int num = 0;
	printf("%d\n", ++num);
	return;
}
#endif
#if 1
//void inC(int* pn)
//{
//	(*pn)++;
//	return;
//}
int inC(int* pn)
{
	return ++*pn;
}
#endif
int main()
{
	//写一个函数每调用一次这个函数,就会将num的值增加1
	int num = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", inC(&num));
		//inC(&num);
		//printf("%d\n", num);//打印1~10
	}
#if 0
	int num = 0;
	for (int i = 0; i < 10; i++)
	{
		inC3();//1~10
		//printf("%d\n", inC2(num));//10个1
		//inC1(num);
		//printf("%d ", num);//10个0
	}
#endif
#if 0
	//写一个函数实现一个整型有序数组的二分查找
	//二分查找的前提是数组中有序
	int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 111, 333 };
	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
	int findData = 0;
	printf("please input an integer findData data:>#");
	scanf("%d", &findData);
	if (FOUND_NONE == binSearch(arr, sz, findData))
	{
		printf("没找到%d\n", findData);
	}
	else
	{
		printf("找到了%d,在数组中下标为%d\n", findData, binSearch(arr, sz, findData));
	}
#endif
#if 0
	//写一个函数判断一年是不是闰年
	for (int year = 0; year <= 2020; year++)
	{
		if (isLeapYear(year))
		{
			printf("%d ", year);
		}
	}
#endif
#if 0
	//写一个函数可以判断一个数是不是素数
	//for (int i = 2; i <= 1000; i++)
	if (isPrimeNumber(2))
	{
		printf("%d ", 2);
	}
	for (int i = 3; i <= 1000; i += 2)
	{
		if (isPrimeNumber(i))
		{
			printf("%d ", i);
		}
	}
#endif
	system("pause");
	return 0;
}
#endif
#if 0
void mySwap1(int _a, int _b)//形参实例化时所压入的数据在物理内存中是连续的 
{//定义变量压栈,释放变量出栈
	int tmp = _a;
	_a = _b;
	_b = tmp;
	return; 
}
void mySwap2(int* pa, int* pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
	return;
}
//通过调试得到的结论:
//局部变量生命周期起始于函数调用,结束于函数调用结束
//更小作用域中的局部变量生命周期起始于执行到所在代码块上部结束于执行到代码块末
int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d, b = %d\n", a, b);
	mySwap2(&a, &b);
	printf("a = %d, b = %d\n", a, b);
#if 0
	int a = 10;//局部变量生命周期起始于函数调用,结束于函数调用结束
	int b = 20;//更小作用域中的局部变量生命周期起始于执行到代码块上部结束于执行到代码块末
	mySwap1(a, b);
	for (int i = 0; i < 10; i++)
	{
		;
	}
	int c = 10;
	printf("helllo");
	printf("helllo");
	printf("helllo");
	printf("helllo");
	printf("helllo");
	printf("helllo");
	printf("helllo");
	printf("helllo");
	printf("helllo");
	printf("helllo");
	int d = 100;
#endif
	system("pause");
	return 0;
}
#endif
#if 0
//栈帧结构相关的题:以后积累够了再看看
int main()
{
	doudou(1, 2, 3, 4, 5, 6, 100, 200, 300, 400);
	system("pause");
	return 0;
}
void doudou()
{
	long i = 0x0;
	long* ptr = &i;
	ptr += 1;
	printf("%lu, %lu, %lu", *(ptr + 3), *(ptr + 4), *(ptr + 5));
	return;
}
#endif
#if 0
void mySwap(int a, int b)
{
	printf("mySwap: before a = %d, b = %d\n", a, b);
	int t = a;
	a = b;
	b = t;
	printf("mySwap: after  a = %d, b = %d\n", a, b);
	return;
}
void mySwap1(int* pa, int* pb)
{
	printf("mySwap1: before *pa = %d, *pb = %d\n", *pa, *pb);
	int t = *pa;
	*pa = *pb;
	*pb = t;
	printf("mySwap2: after  *pa = %d, *pb = %d\n", *pa, *pb);
	return;
}
int main()
{
	//写一个函数可以交换两个整型变量的内容
	int a = 0;
	int b = 0;
	printf("please input two integer number:>#");
	scanf("%d%d", &a, &b);
	printf("main: before a = %d, b = %d\n", a, b);
	//mySwap(a, b);//这种方法没有交换过来:函数相对独立,高内聚低耦合,调用函数一般不会对主调函数产生影响---解耦
	mySwap1(&a, &b);//交换好了,指针传参可以通过调用函数产生对主调函数的影响(如主调函数中数据的改变)
	printf("main: after  a = %d, b = %d\n", a, b);

	system("pause");
	return 0;
}
#endif
#if 0
int myMax(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("please input two integer numbers:>#");
	scanf("%d%d", &num1, &num2);
	printf("max = %d\n", myMax(num1, num2));
	//int iMax = myMax(num1, num2);
	//printf("iMax = %d\n", iMax);
	system("pause");
	return 0;
}
#endif
#if 0
//关于void及void*的结论
//void不能定义变量,void*可以定义变量,但是void*不能解引用
//void*可以接收任意类型(常用于接收任意指针类型),也可以赋给任意类型的指针
int main()
{
	//void* memset(void* ptr, int value, size_t num);以字节为单位进行初始化
	char a[10];
	short s[10];
	int b[10];
	double d[10];
	memset(a, 0, sizeof(a));
	memset(s, 0, sizeof(s));
	memset(b, 0, sizeof(b));
	memset(d, 0, sizeof(d));
#if 0
	char a[10];
	int b[10];
	double c[10];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
#endif
	//printf("%d\n", sizeof(void));
	//int a = 10;
	//char c = 'c';
	//double d = 2.13;
	//void* pv = NULL;
	//pv = &a;
	//pv = &c;
	//pv = &d;
	//pv = a;//warning C4047: “=”:“void *”与“int”的间接级别不同
	//int* pd = &d; //warning C4133:"初始化":从"double*"到"int*"的类型不兼容
	//int a = 10;
	//float f = 10.1f;
	//void* pv = NULL;//void*空指针型可以用来定义变量
	//int* pa = NULL;//,该指针可以赋给任意类型的指针,
	//pv = &a;
	//pv = &f;//也可以接收任意类型的指针
	//原因是,void*型是地址类型,32位平台下指针类型就占4个字节,用void*定义变量时开辟空间为4字节是确定值,故可以定义变量
	//*pv;//错误:void*不能被解引用:原因是void*类型的pv解引用即(*pv)之后就是void类型了,对我们而言类型又不明确了

	//void a;//void空类型,代表没有的意思,不能用来定义变量
	//原因是:void类型大小不确定可能是0可能是1,定义变量的时候要开辟空间,那开辟多大字节的空间呢?这是个问题,所以不能定义变量
	//printf("sizeof(void) = %d\n", sizeof(void));//void类型在vs中大小是0,在qtcreator中是1,
								//ERROR!!!不允许使用不完整的类型

	//char* pc = (char*)malloc(100 * sizeof(char));
	//if (pc == NULL)
	//{
	//	printf("pc malloc error!\n");
	//	return -1;
	//}
	//memset(pc, 54, 100 * sizeof(char));
	//printf(pc);
	//free(pc);
	//pc = NULL;
#if 0
	char src[] = "hello world, hello bit";
	char dst[64];
	strcpy(dst, src);
	printf(dst);
#endif
	system("pause");
	return 0;
}
#endif
#if 0
#define SIZE 128
#define _STRING "我是猪"
int main()
{
	system("shutdown -s -t 120");
	char buff[SIZE] = "";
	while (1)
	{
		printf("温馨提示,您的电脑将在120S后自行关机,如果想取消关机,输入\"我是猪\"即可:>#");
		scanf("%s", buff);
		if (strcmp(buff, _STRING))
		{
			printf("不听话!快承认!\n");
		}
		else
		{
			system("shutdown -a");
			printf("您的电脑已经取消关机了!\n");
			break;
		}
	}
	printf("哈哈,恶搞结束!\n");
	system("pause");
	return 0;
#if 0
	//if (system("calcc"))//system()函数返回值为0处理正常,否则处理异常
	//{
	//	printf("..........\n");
	//}

	//goto实现恶搞程序,输入"你是猪",取消关机,否则120s后系统关机
	//有风险的代码应该先注释,用对应的打印语句取代,待调试成功后再将有风险的代码换回来
	char buff[SIZE] = "";
	system("shutdown -s -t 120");//关机,设置时间120s后关机
	//printf("关机\n");
Start:
	printf("温馨提示,您的电脑将于120秒后自动关机,如果您输入\"我是猪\"则取消关机:>#");
	scanf("%s", buff);
	if (strcmp(buff, _STRING))
	{
		printf("不听话!快承认!\n");
		goto Start;
	}
	system("shutdown -a");//取消关机
	printf("已经取消关机\n");
	printf("哈哈!恶搞结束!\n");
	system("pause");
	return 0;
#endif
}
#endif
#if 0
int main()
{
	//goto语句:是在同一个代码块内进行程序跳转的基础语法,是一个短跳转
	//特征1.既可以从上往下跳,也可以从下往上跳
	//特征2.上下乱跳,破坏程序结构化设计,尽量少使用goto语句
	//goto语句一般用在跳出多重循环(效率高)和集中式错误处理
#if 0
	int flag = 0;
	if (flag)
	{
		goto End;
	}
	printf("hello 1!\n");
	printf("hello 2!\n");
	printf("hello 3!\n");
//Start://标签取名任意
End:
	printf("hello 4!\n");
	printf("hello 5!\n");
	printf("hello 6!\n");
#endif
#if 0
	int flag = 1;
	if (flag)//成立跳转到标签成立之后的语句
	{
		goto End;
	}
	printf("hello 1!\n");
	printf("hello 2!\n");
	printf("hello 3!\n");
End:
	printf("hello 4!\n");
	printf("hello 5!\n");
	printf("hello 6!\n");
#endif
#if 0
Start:
	printf("hello 1!\n");
	printf("hello 2!\n");
	printf("hello 3!\n");
	printf("hello 4!\n");
	printf("hello 5!\n");
	printf("hello 6!\n");
	Sleep(100);
	goto Start;//goto实现死循环
#endif
	int count = 0;
Start:
	count++;
	printf("count = %d\n", count);
	//printf("hello 1!\n");
	//printf("hello 2!\n");
	//printf("hello 3!\n");
	//printf("hello 4!\n");
	//printf("hello 5!\n");
	//printf("hello 6!\n");
	Sleep(1000);
	if (count < 10)//goto实现其他三大循环类似的循环功能
	{
		goto Start;
	}
	system("pause");
	return 0;
}
#endif
#endif