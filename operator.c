#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(-c));//4
	printf("%u\n", sizeof(!c));//1
	system("pause");
	return 0;
}
//int main()
//{
//	char a = 0xb6;     //1011 0110
//	short b = 0xb600;  //1011 0110 0000 0000
//	int c = 0xb6000000;//1011 0110 0000 0000 0000 0000 0000 0000
//	if (a == 0xb6)
//	{
//		printf("a");
//	}
//	if (b == 0xb600)
//	{
//		printf("b");
//	}
//	if (c == 0xb6000000)
//	{
//		printf("c");
//	}
//	//打印c
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//隐式类型转换:整型提升
//	char a = 3;
//	char b = 127;
//	char c = 0;
//	c = a + b;
//	printf("c = %d\n", c);//-126
//	system("pause");
//	return 0;
//}
//学生
//int float 
//创建一个结构体类型-struct Stu
//typedef struct _Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//} Stu;
//int main()
//{
//	int a = 10;
//	//使用Stu这个类型创建了一个学生对象s1,并初始化
//	Stu s1 = { "张三", 20, "20202020" };
//	Stu* ps = &s1;
//	printf("%s, %d, %s\n", (*ps).name, (*ps).age, (*ps).id);
//	//(*结构体指针).成员名;
//	printf("%s, %d, %s\n", ps->name, ps->age, ps->id);
//	//结构体指针->成员名;
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	//结构体变量.成员名
//	system("pause");
//	return 0;
//}
//int myMax(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//调用函数的时候()就是函数调用操作符
//	int iMax = myMax(a, b);//此处()为函数调用操作符 
//	printf("iMax = %d\n", iMax);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = (a > b, a = b + 10, a, b = a + 1);
//	////逗号表达式就是用逗号隔开的多个表达式.逗号表达式(也称顺序求值表达式,并不考虑各子表达式的运算符优先级问题),
//	////只是从左向右依次执行,整个表达式的结果是最后一个表达式的结果
//	//printf("c = %d\n", c);//13
//
//	//if (a = b + 1, c = a / 2, d > 0)
//
//	//a = get_val();
//	//count_val(a);
//	//while (a > 0)
//	//{
//	//	//业务处理
//	//	a = get_val();
//	//	count_val(a);
//	//}
//
//	//用逗号运算符改写为下面的表达式
//	//while (a = get_val(), count_val(a), a > 0)
//	//{
//	//	//业务处理
//	//}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int max = 0;
//	//if (a > b)
//	//{
//	//	max = a;
//	//}
//	//else
//	//{
//	//	max = b;
//	//}
//	//printf("max = %d\n", max);
//	//int x = 10;
//	//int y = 20;
//	//int max = 0;
//	//max = ((x > y) ? x : y);
//	//printf("max = %d\n", max);
//
//	//int a = 0;
//	//int b = 0;
//	//if (a > 5)
//	//{
//	//	b = 3;
//	//}
//	//else
//	//{
//	//	b = -3;
//	//}
//	//printf("b = %d\n", b);
//
//	//int a = 0;
//	//int b = 0;
//	//b = ((a > 5) ? 3 : -3);
//	//printf("b = %d\n", b);
//	int num1 = 1;
//	int num2 = 2;
//	printf("%d\n", num1 & num2);//0
//	printf("%d\n", num1 | num2);//3
//	printf("%d\n", num1 ^ num2);//3
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int i = 0, a = 1, b = 2, c = 3, d = 4;
//	////i = a++ && ++b && d++;
//	////printf("i = %d\na = %d\n b = %d\n c = %d\nd = %d\n", i, a, b, c, d);//1 2 3 3 5
//	//i = a++ || ++b || d++;
//	//printf("i = %d\na = %d\n b = %d\n c = %d\nd = %d\n", i, a, b, c, d);//1 2 2 3 4
//
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("i = %d\na = %d\n b = %d\n c = %d\nd = %d\n", i, a, b, c, d);//1 1 3 3 4
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	//int x = ++a;
//	//printf("x = %d\n", x);//11
//	//int y = --a;
//	//printf("y = %d\n", y);//10
//
//	//int a = 10;
//	//int x = a++;
//	//printf("x = %d\n", x);//10
//	//int y = a--;
//	//printf("y = %d\n", y);//11
//	//int a = 5;
//	//int b = 3;
//	//int c = a && b;
//	//printf("c = %d\n", c);
//	//b = 0;
//	//c = a && b;
//	//printf("c = %d\n", c);
//	int a = 5;
//	int b = 3;
//	int c = a || b;
//	printf("c = %d\n", c);//1
//	b = 0;
//	c = a || b;
//	printf("c = %d\n", c);//1
//	a = 0;
//	c = a || b;
//	printf("c = %d\n", c);//0
//	b = 3;
//	c = a || b;
//	printf("c = %d\n", c);//1
//	system("pause");
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//	return;
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//	return;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);//4
//	test2(ch);//4
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	char* p = NULL;
//	//printf("%d\n", !2);//0
//	//printf("%d\n", !0);//1
//	//a = -a;
//	p = &a;
//	printf("a = %d\n", a);//-1
//	printf("*p = %d\n", *p);//-1
//	*p = 32;
//	printf("a = %d\n", a);//-224
//	printf("*p = %d\n", *p);//32
//	printf("sizeof(*p) = %d\n", sizeof(*p));//1
//	//printf("sizeof(char*) = %d\n", sizeof(char*));//4
//	//printf("sizeof(int*) = %d\n", sizeof(int*));//4
//	//printf("sizeof(p) = %d\n", sizeof(p));//4
//	//printf("sizeof(NULL) = %d\n", sizeof(NULL));//4
//	//printf("sizeof(a) = %d\n", sizeof(a));//4
//	//printf("sizeof(int) = %d\n", sizeof(int));//4
//	//printf("sizeof(char) = %d\n", sizeof(char));//1
//	//printf("sizeof a = %d\n", sizeof a);//4
//	//printf("sizeof int = %d\n", sizeof int);//err
//	//printf("sizeof char = %d\n", sizeof char);//err
//	//int a = -10;
//	//int* p = NULL;
//	//printf("%d\n", !2);//0
//	//printf("%d\n", !0);//1
//	//a = -a;
//	//p = &a;
//	//printf("a = %d\n", a);//10
//	//*p = 20;
//	//printf("a = %d\n", a);//20
//	//printf("*p = %d\n", *p);//20
//	//printf("sizeof(*p) = %d\n", sizeof(*p));//4
//	//printf("sizeof(int*) = %d\n", sizeof(int*));//4
//	//printf("sizeof(p) = %d\n", sizeof(p));//4
//	//printf("sizeof(NULL) = %d\n", sizeof(NULL));//4
//	//printf("sizeof(a) = %d\n", sizeof(a));//4
//	//printf("sizeof(int) = %d\n", sizeof(int));//4
//	//printf("sizeof a = %d\n", sizeof a);//4 正常:sizeof后面跟变量时括号()可以省略
//	//printf("sizeof int = %d\n", sizeof int);//报错:sizeof后面算类型时括号()不可以省略
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	//printf("%d\n", ++a);//前置++,先++后使用
//	//printf("%d\n", a);
//	//int b = 10;
//	//printf("%d\n", b++);//后置++,先使用后++
//	//printf("%d\n", b);
//	int a = 3.14; //warning C4244: “初始化”: 从“double”转换到“int”，可能丢失数据
//	int b = 3.14f;//warning C4244: “初始化”: 从“float”转换到“int”，可能丢失数据
//	int c = (int)3.14;//正常,不报警告
//	//int d = int(3.14);//报错,(类型)
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 11;
//	printf("a = %d\n", a);
//	a |= (1 << 2);
//	printf("a = %d\n", a);
//	a &= (~(1 << 2));
//	printf("a = %d\n", a);
//	//0000 0000 0000 0000 0000 0000 0000 1011
//	//0000 0000 0000 0000 0000 0000 0000 0100 |
//	//0000 0000 0000 0000 0000 0000 0000 1111
//
//	//0000 0000 0000 0000 0000 0000 0000 0100 ~
//	//1111 1111 1111 1111 1111 1111 1111 1011
//	//0000 0000 0000 0000 0000 0000 0000 1111 &
//
//	//0000 0000 0000 0000 0000 0000 0000 1011
//	//int a = 0;
//	//printf("%d\n", a);//0
//	//printf("%d\n", ~a);//-1
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//short s = 0;
//	//int a = 10;
//	////sizeof(s = a + 5);中a是整型,5是整型,加起来也是整型,s是短整型,发生截断,s为短整型字节数为2
//	////sizeof内部的表达式不参与"真正"运算,只是一个摆设
//	//printf("%d\n", sizeof(s = a + 5));//2
//	//printf("%d\n", s);//0
//	//int a = 0;
//	//char ch = 'w';
//	//int arr[10] = { 0 };
//	//printf("sizeof(a) = %d\n", sizeof(a));//4
//	//printf("sizeof(int) = %d\n", sizeof(int));//4
//
//	//printf("sizeof(ch) = %d\n", sizeof(ch));//1
//	//printf("sizeof(char) = %d\n", sizeof(char));//1
//
//	//printf("sizeof(arr) = %d\n", sizeof(arr));//40
//	//printf("sizeof(int[10]) = %d\n", sizeof(int[10]));//40
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//作业标题:打印整数二进制的奇数位和偶数位
//	//作业内容:获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//
//	//作业标题:求两个数二进制中不同位的个数
//	//作业内容:编程实现:两个int(32位)整数m和n的二进制表达中,有多少个位(bit)不同?
//	//输入例子:1999 2299
//	//输出例子:7
//	
//
//		
//
//		
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);//9 23 8
//	system("pause");
//	return 0;
//}
//int getCountOfNumberOneStart(int* pnum)
//{//简单的实现,只能计算正数的二进制中1的个数,对于负数不行
//	int count = 0;
//	while (*pnum)
//	{
//		if ((*pnum) % 2 == 1)
//		{
//			count++;
//		}
//		(*pnum) /= 2;
//	}
//	return count;
//}
//int getCountOfNumberOneMid(int* pnum)
//{
//	//int count = 0;
//	//for (int i = 0; i < 32; i++)//右移实现,比较方便,但是循环次数有点多,可以优化
//	//{
//	//	if (((*pnum) >> i) & 1)
//	//	{
//	//		count++;
//	//	}
//	//}
//	//return count;
//
//	int count = 0;//左移实现,比较方便,但是循环次数有点多,可以优化
//	int i = 0;
//	while (i < 32)
//	{
//		if ((*pnum) & (1 << 31))
//		{
//			count++;
//		}
//		(*pnum) <<= 1;
//		i++;
//	}
//	return count;
//}
//int getCountOfNumberOneEnd(int* pnum)
//{//循环次数减少,但是比较难想到
//	int count = 0;
//	while (*pnum != 0)
//	{
//		count++;
//		(*pnum) &= ((*pnum) - 1);
//	}
//	return count;
//}
//int main()
//{
//	//作业标题:统计二进制中1的个数
//	//作业内容:写一个函数返回参数二进制中 1 的个数.
//	//比如:15    0000 1111    4 个 1
//	int num = 0;
//	int count = 0;
//	printf("please input an integer number:>#");
//	scanf("%d", &num);
//	count = getCountOfNumberOneStart(&num);
//	printf("count = %d\n", count);
//	printf("please input an integer number:>#");
//	scanf("%d", &num);
//	count = getCountOfNumberOneMid(&num);
//	printf("count = %d\n", count);
//	printf("please input an integer number:>#");
//	scanf("%d", &num);
//	count = getCountOfNumberOneEnd(&num);
//	printf("count = %d\n", count);
//	system("pause");
//	return 0;
//}
//void mySwapStart(int* pa, int* pb)
//{//引入了第三个变量,不符合题意,但是可读性好效率高,一般使用的最多
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//	return;
//}
//void mySwapMid(int* pa, int* pb)
//{//不引入第三个变量,符合题意,可读性较差有溢出风险,一般使用的也不多
//	*pa = *pa + *pb;
//	*pb = *pa - *pb;
//	*pa = *pa - *pb;
//	return;
//}
//void mySwapEnd(int* pa, int* pb)
//{//不引进第三个变量,符合题意,不会造成进位溢出,但是可读性差,效率也不高,一般使用的不多
//	*pa ^= *pb;
//	*pb ^= *pa;
//	*pa ^= *pb;
//	return;
//}
//int main()
//{
//	//作业标题:交换两个变量（不创建临时变量）
//	//作业内容:不允许创建临时变量，交换两个整数的内容
//	int a = 0;
//	int b = 0;
//	printf("please input two integer numbers:>#");
//	scanf("%d%d", &a, &b);
//	printf("before: a = %d, b = %d\n", a, b);
//	mySwapStart(&a, &b);
//	printf("after : a = %d, b = %d\n", a, b);
//	mySwapMid(&a, &b);
//	printf("after : a = %d, b = %d\n", a, b);
//	mySwapEnd(&a, &b);
//	printf("after : a = %d, b = %d\n", a, b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* pc = &c;
//	int arr[10] = { 0 };//数组名:arr,数组也是有类型的:去除数组名剩下的就是数组类型--int[10]
//	//int a[3][4] = { 0 };//数组名:a,数组类型是int[3][4]
//	//sizeof操作符计算变量/类型/常数/...所占空间的大小,单位是字节
//	//注意:sizeof不是函数,是操作符/关键字,理由主要有两点,
//	//其一,sizeof()后面的括号可以省略,而函数调用时括号不可省略
//	//其二,sizeof运算符可以计算类型如sizeof(int),而函数调用入参(实参)不可能为类型
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof int);//报错
//	//printf("%d\n", sizeof(pc));//4
//	//printf("%d\n", sizeof pc);//4
//	//printf("%d\n", sizeof(char*));//4
//	//printf("%d\n", sizeof char*);//报错
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof arr);//40
//	printf("%d\n", sizeof(int[10]));//40
//	//printf("%d\n", sizeof int[10]);//报错
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;//&取地址操作符
//	*p = 20;//*解引用操作符
//	printf("*p = %d\n", *p);
//	printf("a = %d\n", a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = -5;
//	printf("a = %d\n", a);
//	a = -a;
//	printf("a = %d\n", a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int weight = 120;
//	//weight = 89;
//	//double salary = 10000.0;
//	//salary = 20000.0;
//	//printf("weight = %d, salary = %lf\n", weight, salary);
//	//int a = 10;
//	//int x = 0;
//	//int y = 20;
//	//a = x = y + 1;
//	//printf("a = %d, x = %d, y = %d\n", a, x, y);
//	//x = y + 1;
//	//a = x;
//	//printf("a = %d, x = %d, y = %d\n", a, x, y);
//
//	//int x = 10;
//	//x = x + 10;
//	//x += 10;
//	//printf("x = %d\n", x);
//
//	//int a = 10;
//	//a = a + 2;
//	//a += 2;
//	//printf("a = %d\n", a);//14
//	//a = a >> 1;
//	//a >>= 1;
//	//printf("a = %d\n", a);//3
//
//	int a = 10;
//	printf("a = %d\n", !a);//a = 0
//	printf("a = %d\n", !!a);//a = 1
//	printf("a = %d\n", a);//a = 10
//	a = 0;
//	printf("a = %d\n", !a);//a = 1
//	printf("a = %d\n", !!a);//a = 0
//
//	if (a)
//	{
//		printf("hehe\n");
//	}
//	if (!a)
//	{
//		printf("heihei\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//练习:编写代码实现:求一个整数存储在内存中的二进制中1的个数
//
//	//法一:类似10进制求解方法,但是只能解决一部分问题,负数问题无法解决
//	//int num = 0;
//	//int count = 0;
//	//printf("please input an integer number:>#");
//	//scanf("%d", &num);
//	//while (num)
//	//{
//	//	if (1 == (num % 2))
//	//	{
//	//		count++;
//	//	}
//	//	num /= 2;
//	//}
//	//printf("二进制中1的个数是---%d\n", count);
//
//	//法二:数据底层规律求解:解决所有情况,但是必须循环32次,能否优化呢?
//	//int num = 0;
//	//int count = 0;
//	//printf("please input an integer number:>#");
//	//scanf("%d", &num);
//	//for (int i = 0; i < 32; i++)
//	//{
//	//	if (1 == ((num >> i) & 1))
//	//	{
//	//		count++;
//	//	}
//	//}
//	//printf("count = %d\n", count);
//
//	//法三:底层数据规律,方法很好,达到了优化效果但是难以想到
//	int num = 0;
//	int count = 0;
//
//	printf("please input an integer number:>#");
//	scanf("%d", &num);
//	while (num != 0)
//	{
//		count++;
//		num &= num - 1;
//	}
//	printf("count = %d\n", count);
//	system("pause");
//	return 0;
//}
#if 0
int main()
{
	//int num1 = 1;
	//int num2 = 2;
	//printf("%d\n", num1 & num2);//0
	//printf("%d\n", num1 | num2);//3
	//printf("%d\n", num1 ^ num2);//3

	//不能创建临时变量(第三个变量),实现两个数的交换

	//法一:引入第三个变量:虽说交换过来了,但是该法不满足题意要求
	//但是工作中日常使用经常使用,原因主要有二,其一,可读性好,其二,效率较高
	//int a = 3;
	//int b = 5;
	//int tmp = 0;
	//printf("before: a = %d, b = %d\n", a, b);
	//tmp = a;
	//a = b;
	//b = tmp;
	//printf("after : a = %d, b = %d\n", a, b);

	//法二:不引入第三个变量完成交换,但是这种交换有隐患,即如果两个交换的数很大时,会溢出导致交换结果超出预期
	//int a = 3;
	//int b = 5;
	//printf("a = %d, b = %d\n", a, b);
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("a = %d, b = %d\n", a, b);

	//法三:底层数据规律实现两个整型数据交换,因为没有产生进位,所以不会有溢出可能,完美解答了题意,但是只是在笔试时面试官爱考,
	//该法用的不多,缺点主要有两个,其一,可读性差,其二,效率较低
	//int a = 3;
	//int b = 5;
	//printf("a = %d, b = %d\n", a, b);
	//a = a ^ b;
	//b = a ^ b;
	//a = a ^ b;
	//printf("a = %d, b = %d\n", a, b);

	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	////i = a++ && ++b && d++;
	////printf("i = %d\n", i);//0
	////printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	////a = 1
	//// b = 2
	//// c = 3
	////d = 4

	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ || ++b || d++;
	//printf("i = %d\n", i);//1
	//printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	////a = 1
	//// b = 2
	//// c = 3
	////d = 5
	system("pause");
	return 0;
}
#endif
//int main()
//{
//	//^ & |
//	//注意:他们的操作数必须是整型,因为如果是浮点数存储方式与整型不同得不到正确的结果,干脆就不允许浮点数进行这样的运算了
//	//&-按二进制位与
//	//int a = 3;
//	//int b = 5;
//	//int c = a & b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101&
//	//00000000000000000000000000000001
//	//1
//	//printf("c = %d\n", c);//1
//
//	//|-按二进制位或 
//	//int a = 3;
//	//int b = 5;
//	//int c = a | b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101 |
//	//00000000000000000000000000000111 
//	//7
//	//printf("c = %d\n", c);//7
//
//	//^-按二进制位异或
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101 ^
//	//00000000000000000000000000000110
//	//6
//	printf("c = %d\n", c);//6
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//注意:>> <<右移左移操作符操作数只能是整型,因为浮点数存储与整型存储不同,强行进行浮点数的话也只会出错
//	int a = 5;
//	int b = a << 1;//左移操作符,二进制位左移,左边丢弃,右边补0
//	printf("b = %d\n", b);//10
//	int c = 10;
//	//printf("%d\n", c >> -1);//警告:对于移位操作符,不要移动负数位,这个是标准未定义的
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	printf("%d\n", a >> 2);//-1
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//<< >>
//	//>>右移操作符
//	//分为:
//	//算术右移:低位丢失,高位补1/0(当是负数的时候符号位为1,高位补1,当是正数的时候符号位为0,高位补0)
//	//逻辑右移:低位丢失,高位直接补0
//	//16->00000000000000000000000000010000
//	int a = 16 >> 1;
//	printf("a = %d\n", a);//16 >> 1 === /2 = 8
//	int b = -1 >> 1;
//	//-1->11111111111111111111111111111111
//	printf("b = %d\n", b);//-1,说明本机属于算术右移,右移虽说有两种移位方式,但我们通常见到的是算数右移s
//	printf("%d\n", 16 >> 2);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 5 / 2;//商2余1
//	printf("a = %d\n", a);
//	a = 5 % 2;
//	printf("a = %d\n", a);
//	double d = 5 / 2.0;
//	printf("d = %lf\n", d);
//	//d = 5 % 2.0;//报错:%的两个操作数必须是整数
//	system("pause");
//	return 0;
//}