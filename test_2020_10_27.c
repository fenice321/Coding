//加在源文件的第一行
#define _CRT_SECURE_NO_WARNINGS 1
//scanf
//strcpy
//strcat
//strlen
//....
//这些都是C标准库提供的库函数,传统意义上都是不安全的
//msvc提供相应安全的接口scanf_s strcpy_s strcat_s...,但是为了跨平台性/可移植性我们不用这些安全的版本
//而是采用#define _CRT_SECURE_NO_WARNINGS 1或者#pragma warning(disable:4996)忽略这个问题
#include <stdio.h>
#include <string.h>
#include <windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
int main()
{
	printf("hello bit\n");
	system("pause");
	return 0;
}
//int main()
//{
//	//int arr[10] = { 0 };//10个整型元素的数组
//	//int sz = 0;
//	////10 * sizeof(int) = 40;
//	//printf("%d\n", sizeof(arr));//40
//	////计算数组的元素个数
//	////个数 = 数组总大小 / 数组一个元素的大小
//	//sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	//printf("sz = %d\n", sz);
//
//	//int a = 10;
//	//sizeof计算的是变量或者类型所占空间的大小,单位是字节
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int);//报错:语法错误:"类型"
//	system("pause");
//	return 0;
//}
//单目操作符--->有一个操作数
//双目操作符--->有两个操作数
//三目操作符--->有三个操作数
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b; //+ 双目操作符,有两个操作数
//
//	//C语言中我们表示真假:0表示假,非0表示真
//	//int a = 10;
//	//printf("%d\n", a);//10
//	//printf("%d\n", !a);//0
//	//a = 0;
//	//printf("%d\n", a);//0
//	//printf("%d\n", !a);//1
//
//	int a = -2;
//	int b = -a;
//	int c = +3;//+正号通常情况下都会省略
//	printf("%d\n", a);//-2
//	printf("%d\n", b);//2
//	printf("%d\n", c);//3
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a = 20;//=赋值    ==判断相等
//	a = a + 10;//1
//	a += 10;//2
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	//复合赋值操作符
//	//+= -= *= /= %= <<= >>= ^= &= |=
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//(二进制位)位操作
//	//& 按位与
//	//^ 按位异或
//	//异或的运算规律:对应的二进制相同则为0,对应的二进制相异则为1
//	//| 按位或
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("c = %d\n", c);//1
//	c = a ^ b;
//	printf("c = %d\n", c);//6
//	c = a | b;
//	printf("c = %d\n", c);//7
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//移(二进制位)位操作符
//	//<<左移
//	//>>右移
//	int a = 1;//a是整型占四个字节32个bit位-0000 0000 0000 0000 0000 0000 0000 0001
//	int b = a << 1;
//	printf("%d\n", b);//2
//	b = a << 2;
//	printf("%d\n", b);//4
//	printf("a = %d\n", a);//1,a不变
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 5 / 2;//2...1
//	printf("%d\n", a);
//	a = 5 % 2;//取模
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//数组:一组相同类型元素的集合
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; //定义一个能存放10个整型数据的数组
//	//0-9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);//用下标的方式访问元素:arr[下标]
//	//char ch[20];
//	//float arr2[5];
//	system("pause");
//	return 0;
//}
//函数的特点就是简化代码,代码复用
//int Add(int x, int y)//自定义函数
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	printf("please input two integer numbers:>#");//库函数
//	scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	//sum = a + b;
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	sum = Add(2, 3);
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int line = 0;
//	//printf("加入比特\n");
//	//while (line < 20000)
//	//{
//	//	printf("敲一行代码\n");
//	//	line++;
//	//}
//	//printf("好offer\n");
//	//int line = 0;
//	//while (line < 20000)
//	//{
//	//	printf("敲一行代码,总第%d行代码\n",line);
//	//	line++;
//	//} 
//	//if (line >= 20000)
//	//{
//	//	printf("好offer\n");
//	//}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗?(1/0):>#");
//	scanf("%d", &input);//1 / 0
//	if (input == 1)
//	{
//		printf("给你一个好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	system("pause");
//	return 0;
//}
//注释:
/*C语言注释风格,缺陷不能嵌套注释*/
#if 0
//但是条件编译支持嵌套
/*
int main()
{
	/*
	int a = 10;
	*/
	system("pause");
	return 0;
}
*/
#endif
//C++注释风格,可以注释一行也可以注释多行
/*
int main()
{
	//\xdd 1~2位十六进制表示的转义字符

	//printf("%c\n", '\x61');//'\x61'是一个字符
	//printf("%c\n", '\X61');//告警,X大写不能作为转义序列
	//键盘上能敲出来的所有的东西都是字符
	//\ddd 1~3位八进制表示的转义字符
	//printf("%d\n", strlen("c:\test\32\test.c"));//13
	//printf("%d\n", strlen("c:\test\132\test.c"));//13
	//printf("%d\n", strlen("c:\test\8\test.c"));//13
	//printf("%d\n", strlen("\y"));//1
	//printf("%d\n", strlen("c:\test\382\test.c"));//15
	//printf("%d\n", strlen("c:\test\328\test.c"));//14
	//printf("%d\n", strlen("c:\\test\\328\\test.c"));//18
	//printf("%d\n", strlen("c:\\\test\\\328\\\test.c"));//17
	//printf("%d\n", strlen("c:\\\\test\\\\328\\\\test.c"));//21
	//\32---32是两个八进制数字
	//32作为八进制代表的那个十进制数字作为ASCII码值对应的那个字符
	//32--->十进制26--->ASCII码值代表的字符
	//printf("%c", '\32');
	//printf("\n");
	//printf("%c", '\132');
	system("pause");
	return 0;
}
*/
//int main()
//{
//	//VC6.0中 ??) 会被转义成']' ---> C语言早期三字母词转义 ?? + )为其他字符
//	//printf("(are you ok??)\n");//vc6.0中会打印出(are you ok]
//	//printf("(are you ok\?\?)\n");//vc6.0中这才正常了打印出(are you ok??)
//	//printf("c:\test\32\test.c");
//	//printf("\n");
//	//printf("c:\\test\\32\\test.c\n");
//	//printf("%c", 'a');
//	//putchar(10);
//	//printf("%c", 'b');
//	//putchar(10);
//	//printf("%c", ''');//出错
//	//printf("%c", '\'');//正确
//
//	printf("%s", "abc");
//	putchar(10);
//	printf("%s", "a");
//	putchar(10);
//	//printf("%s", """);//报错
//	printf("%s", "\"");//正确
//	system("pause");
//	return 0;
//}
//int main()
//{
//	printf("c:\test\32\test.c");
//	//'\t'水平制表符
//	system("pause");
//	return 0;
//}
//转义字符---转变原来的意思
//int main()
//{
//	printf("abc\n");
//	printf("abcn");
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	char arr3[] = { 'a', 'b', 'c', '\0' };
//	//strlen--string length-计算字符串长度的函数,声明在string.h头文件中
//	printf("%d\n", strlen(arr1));//3
//	//printf("%d\n", strlen(arr2));//3+?---随机值
//	printf("%d\n", strlen(arr3));//3
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//数据在计算机上存储的时候,存储的是二进制
//	//#av$
//	//a - 97
//	//A - 65
//	//...
//	//ASCII编码
//	//ASCII码值
//	//char arr1[] = "abc";//数组
//	////"abc"---'a' 'b' 'c' '\0'==0---字符串的结束标志
//	////注意:字符串的结束标志是一个'\0'的转义字符.在计算字符串长度的时候'\0'是结束标志,不算做字符串内容
//	////'\0' == 0 / '\5' == 5
//	//printf("%d\n", '\50');//40
//	//printf("%d\n", '\0');//0
//	//printf("%d\n", '\7');//7
//	//printf("%d %c\n", '\8', '\8');//56 8
//	////'a' == 97
//	//char arr2[] = { 'a', 'b', 'c', 0 };
//	//char arr3[] = { 'a', 'b', 'c', '\0' };
//	////'a' 'b' 'c' '\0'
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	//printf("%s\n", arr3);
//	system("pause");
//	return 0;
//}
//int float
//char
//C语言没有字符串类型
//由双引号(double quote)引起来的一串字符称为字符串字面值(String Literal),或者简称字符串
//int main()
//{
//	"abcdef";
//	"hello bit";
//	"";//空字符串
//
//	system("pause");
//	return 0;
//}
//4.枚举常量
//枚举-一一列举
//性别:男,女,保密
//三原色:红绿蓝
//星期:1 2 3 4 5 6 7

//枚举关键字:enum
//enum COLOR
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum COLOR c = BLUE;
//	printf("%d\n", sizeof(enum COLOR));
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(RED));
//	printf("%d\n", RED);
//	printf("%d\n", YELLOW);
//	printf("%d\n", BLUE);
//	printf("%d\n", c);//2
//	c = YELLOW;//枚举变量c可以改变
//	printf("%d\n", c);//1
//	//BLUE = 4；//枚举常量不可以更改
//	system("pause");
//	return 0;
//}
//enum Sex//创建的枚举类型
//{
//	MALE,
//	FEMALE,
//	SECRET//枚举常量
//};
////MALE,FEMALE,SECRET-枚举常量是有值的,并且不可被改变的
//int main()
//{
//	enum Sex s = FEMALE;//用枚举类型enum Sex定义枚举变量s并初始化为FEMALE
//	printf("%d\n", sizeof(enum Sex));//sizeof(enum Sex) = 4;
//	printf("%d\n", sizeof(s));//sizeof(s) = 4;
//	printf("%d\n", sizeof(MALE));//sizeof(MALE) = 4;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	system("pause");
//	return 0;
//}
//3.#define定义的标识符常量
//define->定义
//#define MAX 10//MAX就是常量
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);//10
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//2.const修饰的常变量
//	//int num1 = 4;
//	//printf("num1 = %d\n", num1);
//	//num1 = 8;
//	//printf("num1 = %d\n", num1); 
//	//const-常属性
//	//const int num2 = 4;//const修饰变量,变量不能直接被修改,具有一定的常属性,但是本质属性还是变量
//	//num2 = 8;//报错:左值指定const对象
//	//int arr[10] = { 0 };
//	//int n = 10;
//	//int a[n] = { 0 };//报错:应输入常量表达式
//	//const int len = 10;//len是变量,但是又有常属性,len本质还是一个变量,所以我们说len是常变量
//	//int a[len] = { 0 };//报错:应输入常量表达式
//	//int num = 4;
//	//3;//字面常量
//	//100;
//	//3.14;//1.字面常量
//	//'A';
//	//"China";
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("please input two integer numbers:>#");
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}