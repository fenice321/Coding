#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}
//int main() 
//{
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	if (i = 5)//死循环打印5
//	//		printf("%d ", i);
//	//	Sleep(100);
//	//}
//	//printf("%d\n", func(1));//0
//	//int x = 3;
//	//int y = 3;
//	//switch (x % 2) 
//	//{
//	//case 1:
//	//	switch (y)
//	//	{
//	//	case 0:
//	//		printf("first");
//	//	case 1:
//	//		printf("second");
//	//		break;
//	//	default: printf("hello");
//	//	}
//	//case 2:
//	//	printf("third");
//	//}//hellothird
//	return 0;
//}
//C函数返回值没有带,则系统默认返回类型是整型,但是绝对不准忽略C函数的返回值
//函数只有在被调用的时候才会被运行,否则不运行内部的所有临时变量都不存在
//函数在调用的时候,如果传参了要发生了形参实例化,也就是说函数调用要形成参数的拷贝
//myAdd(int _a, int _b)
//{
//	int _res = _a + _b;
//	return _res;
//}
//函数的声明与定义
//int myAdd(int _a, int _b)//形式参数
//{
//	printf("after: _a: %d, _b: %d\n", _a, _b);
//	printf("after: _a: %p, _b: %p\n", &_a, &_b);
//	int _res = _a + _b;
//	return _res;
//}
//int myAdd()//int myAdd(void)无参数这样写也可以
//{
//	return 0;
//}
//#define SIZE 5
//int main1()
//{
//	int data = 0;
//	printf("please input an integer data:>#");
//	scanf("%d", &data);
//	//if (data % 2 == 0)
//	//	printf("%d 是偶数\n", data);
//	//else
//	//	printf("%d 是奇数\n", data);
//	//if (1 & data)//新的判断奇数偶数方法,1&上要判断的数,得到的结果是0则是偶数,是1则是奇数
//	//{
//	//	printf("%d 是奇数\n", data);
//	//}
//	//else
//	//{
//	//	printf("%d 是偶数\n", data);
//	//}
//	system("pause");
//}
//int myMax(int x, int y)
//{
//	return x > y ? x : y;//三目运算符 
//
//	//if (x > y)
//	//{
//	//	return x;
//	//}
//	//else
//	//{
//	//	return y;
//	//}
//	//if (x > y)
//	//{
//	//	return x;
//	//}
//	//return y;
//}
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//#define SIZE 3
//void mySort(int* pa, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (pa[i] < pa[j])
//			{
//				pa[i] = pa[i] ^ pa[j];
//				pa[j] = pa[i] ^ pa[j];
//				pa[i] = pa[i] ^ pa[j];
//			}
//		}
//	}
//	return;
//}
//int main()
//{
//	int arr[SIZE];
//	printf("please input SIZE integer datas:>#");
//	for (int i = 0; i < SIZE; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("before sort!\n");
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	mySort(arr, SIZE);
//	printf("\nafter sort!\n");
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//int get_max(int num1, int num2)
//{
//	if (num1 > num2)
//	{
//		return num1;
//	}
//	else
//	{
//		return num2;
//	}
//}
//typedef unsigned long long int un_llint;
//void show(void)
//{
//	int i = 0;//i是临时变量具有临时性
//	i++;
//	printf("i = %d\n", i);
//	return;
//}
void show()
{
	//static在修饰局部变量的时候有如下两个作用:
	//1.scope作用域:在本代码块内有效,用static修饰这个作用域不变
	//2.duration生命周期:临时性,static修饰则该变量的生命周期变成全局属性
	//3.注意事项:int i = 0;定义变量并初始化,任何一个变量都只会初始化一次!!!
	//即:static int i = 0;这条语句只执行一次
	static int i = 0;
	++i;
	printf("i = %d\n", i);
	return;
}
int main()//局部变量作用域在本代码块内有效
{
	for (int j = 0; j < 10; j++)
	{
		show();//打印1-10
	}
	//for (int i = 0; i < 10; i++)
	//{
	//	show();//全是1
	//}
	//typedef顾名思义想到是类型定义,名字取得有问题,应该取为typerename,实际意思是类型重命名
	//unsigned long long int x = 100;
	//printf("%llu\n", x);
	//un_llint a = 200;
	//printf("%llu\n", a);
	//int num1 = 0;
	//int num2 = 0;
	//printf("please input two integer data:>#");
	//scanf("%d%d", &num1, &num2);
	//int iMax = get_max(num1, num2);
	//printf("iMax = %d\n", iMax);
	//printf("%d\n", '\060');
	//printf("%c\n", '\060');
	//printf("%d\n", -10 % 3);//-1
	//printf("%d\n", -10 % -3);//-1
	//printf("%d\n", !10);
	//printf("%d\n", !(-10));
	//printf("%d\n", !10);
	//printf("%d\n", !11);
	//printf("%d\n", !12);
	//printf("%d\n", !100);
	//printf("%d\n", !1000);
	//int x = 0;
	//int y = 0;
	//printf("please input two integer data:>#");
	//scanf("%d%d", &x, &y);
	//printf("Max: %d\n", myMax(x, y));
	//int a = 10;
	//int b = 20;
	//if ((a == 20) || (b == 30))
	//{
	//	printf("yes!\n");
	//}
	//else
	//{
	//	printf("no!\n");
	//}
	//int a = 10;
	//int b = 20;
	//if ((a == 20) && (b == 20))
	//{
	//	printf("yes!\n");
	//}
	//else
	//{
	//	printf("no!\n");
	//}
	//if ((a == 10) && (b == 20))
	//{
	//	printf("yes!\n");
	//}
	//else
	//{
	//	printf("no!\n");
	//}
	//printf("%d\n", (1 == 2) && (2 == 2));
	//10 != 20;//1
	//10 == 20;//0
	//关系运算符: > < >= <= == !=,只能用来比较整数和部分浮点数
	//例如:==和!=只能用来检测整数不能用来检测浮点数(浮点数表示不准确,精度有差别)
	//判断两个字符串是否相等,不能使用==,C语言中判断字符串相等使用strcmp函数判断
	//int a = 10;
	//int b = a++;
	//printf("%d\n", b);
	//printf("%d\n", a);
	//int a = 10;
	//int b = ++a;
	//printf("%d\n", b);
	//int a = 10;
	//a++;//后置++:先使用,再自增
	//++a;//前置++:先自增,再使用
	//a--
	//--a
	//printf("%d\n", a);
	//a += 1;//a++,++a;
	//int a = 0;
	//printf("%d\n", ~a);
	//printf("%u\n", ~a);
	//a = 1;
	//printf("%d\n", ~a);
	//printf("%u\n", ~a);
	//int a = -10;
	//printf("%d\n", sizeof(a));
	//面试题:sizeof是函数吗?
	//答:sizeof();不是函数!!!和函数没有关系,sizeof是一个关键字/操作符/运算符
	//证明如下:
	//printf("%d\n", sizeof a);
	//sizeof a;这样写法没带()证明了sizeof这不是函数
	//printf("%d\n", sizeof(int));
	//若是函数,sizeof(int),该调用实参是一种数据类型,离谱,反证得sizeof不是函数
	//printf("%d\n", sizeof int);//语法错误,sizeof int;报错,必须sizeof(int)才能使用
	//strlen是函数,

	//int a = -10;
	//printf("%d\n", &a);
	//printf("0X%p\n", &a);
	//printf("%#X\n", &a);
	//32位机地址本质是一个无符号的int数据,可以用%d,%x打印,但是一般打印地址用%p,
	//printf("%x\n", &a);
	//int a = -10;
	//int b = +a;
	//printf("b = %d\n", b);
	//b = -a;
	//printf("b = %d\n", b);
	//int a = 10;
	//int b = a;
	//printf("b = %d\n", b);
	//b = -a;
	//printf("b = %d\n", b);
	//b = +a;
	//printf("b = %d\n", b);
	//printf("%d\n", 10 == 10);
	//printf("%d\n", !(10 == 10));
	//int x = 100;
	//if (!(100 == x))
	//{
	//	printf("yes x is 100!\n");
	//}
	//else
	//{
	//	printf("no!\n");
	//}
	//赋值操作符和复合赋值操作符:简洁的需要
	//int a = 10;//初始化
	//a = 20;//赋值
	//int a = 10;
	//a += 5;//a = a + 5;
	//printf("%d\n", a);//15
	//a -= 5;//a = a - 5;
	//printf("%d\n", a);//10
	//a *= 5;//a = a * 5;
	//printf("%d\n", a);//50
	//a /= 5;//a = a / 5;
	//printf("%d\n", a);//10
	//a %= 5;//a = a % 5;
	//printf("%d\n", a);//0
	//a &= 5;//a = a & 5;
	//printf("%d\n", a);//0
	//a ^= 5;//a = a ^ 5;
	//printf("%d\n", a);//5
	//a |= 5;//a = a | 5;
	//printf("%d\n", a);//5
	//& ^ |
	//&按位与
	//^按位异或
	//|按位或
	//printf("%d\n", 10 & 12);
	//printf("%d\n", 10 | 12);
	//printf("%d\n", 10 ^ 12);
	//int a = 10;
	//printf("%d\n", a << 1);
	//printf("%d\n", a >> 1);//1010
	//printf("%d\n", a);
	//printf("%d\n", a >>= 1);
	//printf("%d\n", a);
	//int a = 10;
	//a >> 1;等价于原值除以2 a / 2 = 5
	//a << 1;等价于原值乘以2 a * 2 = 20
	//1 -> 1
	//2 -> 10
	//4 -> 100
	//8 -> 1000
	//16-> 10000
	//2^n -> 1...0(1后面有n个0)
	//10 -> 1010 -> 1000 + 10 -> 2^3 + 2^1 -> 10
	//17 -> 16 + 1 -> 2^4 + 2^0 -> 10000 + 1 -> 10001
	//37 -> 32 + 4 + 1 -> 2^5 + 2^2 + 2^0 -> 100000 + 100 + 1 -> 100101
	//10 -> 1010
	//10 / 3 = 3...1
	//printf("%d\n", 10 / 3);
	//printf("%d\n", 10 % 3);
	//操作符/运算符operator 操作数operand
	//int a = 0;
	//int b = 0;
	//int c = a + b;
	//char cArr[] = "hello world";
	//int arr[] = { 11, 22, 33, 44, 55, 66, 33, 55, 0 };
	//printf("%d\n", sizeof(arr));//求数组的总大小
	//printf("%d\n", sizeof(arr[0]));//求数组的一个元素的大小

	//动态的求出数组的个数
	//int num = sizeof(arr) / sizeof(arr[0]);
	//printf("num: %d\n", num);
	//int a = 0;
	//int b = 0;
	//数组是具有相同类型数据的集合
	//int arr[5] = { 11, 22, 33 };//数组定义与初始化
	//for (int i = 0; i < 5; i++)//数组遍历
	//{
	//	printf("arr[%d]: %d\n", i, arr[i]);
	//}
	//int arr[SIZE];
	//const int n = 10;//常变量有常量的属性,本质还是变量
	//int arr[n];
	//VS中不支持VLA,有些编译器支持VLA(qtcreator/gcc),VLA不能初始化且只有一次边长的机会
	//int a = 10;
	//int b = 20;
	//printf("before: a: %d, b: %d\n", a, b);
	//printf("before: a: %p, b: %p\n", &a, &b);
	//int result = myAdd();
	//int result = myAdd(a, b);//实参
	//printf("result = %d\n", result);
	system("pause");//仅仅是让对话框停下来
	return 0;
}