#if 0
//定义了一个枚举类型
//enum Sex
//{
//	//枚举的可能取值-枚举常量
//	MALE = 2,
//	FEMALE = 9,
//	SECRET
//};
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
#define RED 0
#define GREEN 1
#define BLUE 2
enum Day
{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};
//枚举的优点:
//我们可以使用#define定义常量符号,为什么非要使用枚举,枚举的优点有如下几个
//1.增加了代码的可读性和可维护性
//2.和#define定义的标识符比较枚举有类型检查,更加严谨
//3.防止了命名污染(封装)
//4.便于调试
//5.使用方便,一次可以定义多个常量
int main()
{
	//enum Sex s = MALE;
	//s = FEMALE;
	//enum Color c = RED;
	//c = GREEN;
	//c = BLUE;
	//enum Color c1 = 2;//这样的写法严格来说是不符合语法的,C++中会报错,因为左侧是enum Color类型,右侧是int型
	//类型不匹配
	//printf("%d, %d, %d\n", RED, GREEN, BLUE);
	//printf("%d, %d, %d\n", MALE, FEMALE, SECRET);
	int color = RED;
	system("pause");
	return 0;
}
#endif

#if 0
//联合-联合体/共用体
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//
//	//以下三个地址相同
//	printf("%p\n", &u);
//	printf("%p\n", &u.c);
//	printf("%p\n", &u.i);
//	u.i = 0x11223344;
//	u.c = 0x55;
//	printf("%x\n", u.i);
//	system("pause");
//	return 0;
//}

typedef union un
{
	char c;
	int i;
} UN;
int checkSysEndian1()
{
	UN U;
	U.i = 0x1;
	return U.c;
}
int checkSysEndian2()
{
	int data = 0x1;
	return (*(char*)&data);
}
int main()
{
	//判断当前机器的大小端存储
	//大端字节序:数据高权值位位于低地址处,低权值位位于高地址处
	//小端字节序:数据高权值位位于高地址处,低权值位位于低地址处
	int ret = checkSysEndian1();
	if (ret == 0)
	{
		printf("大端序!\n");
	}
	else if (ret == 0x1)
	{
		printf("小端序!\n");
	}
	ret = checkSysEndian2();
	if (ret == 0)
	{
		printf("大端序!\n");
	}
	else if (ret == 0x1)
	{
		printf("小端序!\n");
	}
	system("pause");
	return 0;
}
#endif
#if 0
enum Color
{
	RED,
	GREEN,
	BLUE,
	YELLOW,
	WHITE,
	BLACK,
	PINK
} c;
int main()
{
	printf("%d\n", sizeof(c));//4
	printf("%d\n", sizeof(enum Color));//大小是4
	printf("%d\n", sizeof(enum Color { RED, GREEN, BLUE, YELLOW, WHITE, BLACK, PINK }));//4
	system("pause");
	return 0;
}
#endif
union u1
{
	char c[5];
	int i;
};
union u2
{
	short c[7];
	int i;
};
int main()
{
	printf("%d\n", sizeof(union u1));//8
	printf("%d\n", sizeof(union u2));//16
	system("pause");
	return 0;
}