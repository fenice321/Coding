#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>//断言头文件
#pragma warning(disable:4996)
#pragma warning(disable:6031)
//Debug通常称为调试版本,可执行性文件较大,它包含调试信息,并且不做任何优化,,便于程序员的调试
//Release称为发布版本,可执行性文件较小,不包含调试信息,不能调试,它往往是进行了各种优化,
//使得程序在代码大小运行速度上都是最优的,以便用户很好的使用
//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//
//	return 0;
//}
//int main()
//{
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//for (int i = 0; i <= 12; i++)//Debug模式去编译结果是死循环
//	//{//Release模式去编译,没有死循环,优化导致不同的结果
//	//	arr[i] = 0;
//	//	printf("hehe\n");
//	//}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (int i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("ret = %d\n", ret);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	system("pause");
//
// 	return 0;
// }
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
//int Fact(int i)
//{
//	int fact = 1;
//	for (; i >= 1; i--)
//	{
//		fact *= i;
//	}
//	return fact;
//}
//int FactAdd(int i)
//{
//	int sum = 0;
//	for (int j = 1; j <= i; j++)
//	{
//		sum += Fact(j);
//	}
//	return sum;
//}
//int main()
//{
//	//写一段代码:计算1!+2!+3!+...+n!,不考虑溢出情况
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d\n", FactAdd(i));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int fact = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		//fact = 1;
//		for (int j = 1; j <= i; j++)
//		{
//			fact *= j;
//		}
//		sum += fact;
//	}
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}
//char* myStrcpy(char* dest, const char* src)
//{
//	char* d = dest;
//	while (*src)
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//	return d;
//}
//char* myStrcpy(char* str, const char* s)
//{
//	char* ctmp = str;
//	while (1)
//	{
//		*str = *s;
//		if (!(*str))
//		{
//			break;
//		}
//		str++;
//		s++;
//	}
//	return ctmp;
//}
//char* myStrcpy(char* dest, const char* src)
//{
//	char* d = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return d;
//}
//char* myStrcpy(char* dest, const char* src)
//{
//	if (dest != NULL && src != NULL)//做入参型检查
//	{
//		char* d = dest;
//		while (*dest++ = *src++)
//		{
//			;
//		}
//		return d;
//	}	
//}
//char* myStrcpy(char* dest, const char* src)
//{
//	assert(dest);//断言:进行入参型检查
//	assert(src);
//	char* d = dest;
//	//将src指向的字符串拷贝到dest指向的空间中去,包括'\0'
//	while (*dest++ = *src++);
//	return d;
//}
//int main()
//{
//	char str[20] = "###########";
//	const char* s = "I love you!";
//	//strcpy(str, s);
//	//myStrcpy(str, NULL);
//	//Assertion failed : 
//	//断言失败
//	//src, file E : \Workspace\bit\Ccode\zpw\debug\debug\debug.c, line 193
//	//myStrcpy(str, s);
//	//printf("%s\n", str);
//	//printf(myStrcpy(str, s));
//	printf("%s\n", myStrcpy(str, s));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//printf("a = %d\n", a);
//	//const放在指针变量*左边时,修饰的是*p,也就是说不能改变指针指向的内容,但是可以改变指针的指向
//	//const放在指针变量*右边时,修饰的是p，也就是说指针p的指向不可以改,但是指针指向的内容可以改
//	const int num = 10;
//	const int* p = &num;
//	//*p = 20;//语法错误
//	system("pause");
//	return 0;
//}
size_t myStrlen(const char* str)
{
	assert(str != NULL);
	size_t count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}
int main()
{
	const char* pc = "I love your!";
	printf("%u\n", myStrlen(pc));
	system("pause");
	return 0;
}