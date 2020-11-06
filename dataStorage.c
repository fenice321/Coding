#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	//float a = 5.5f;
//	double a = 5.5;
//	
//	system("pause");
//	return 0;
//}
int main()
{
	int n = 9;
	float* pFloat = (float*)(&n);
	printf("n = %d\n", n);//9
	printf("*pFloat = %f\n", *pFloat);//
	*pFloat = 9.0f;
	printf("n = %d\n", n);//
	printf("*pFloat = %f\n", *pFloat);//9.000000
	system("pause");
	return 0;
}
//int main()
//{
//	char arr1[] = "abc";
//	int arr2[10] = { 1, 3, 4, 5, 6, 7, 4, 3, 3, 3 };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", sizeof(arr2));//40
//	printf("%d\n", strlen(arr2));//1
//	system("pause");
//	return 0;
//}
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world!\n");//死循环
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//死循环
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	char b = 128;
//	printf("%u\n", b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a = %d, b = %d, c = %d\n", a, b, c);//-1 -1 255
//	system("pause");
//	return 0;
//}
//#define BIG_ENDIAN 0
//#define SMALL_ENDIAN 1
//typedef union _un
//{
//	int in;
//	char ch;
//} Un;
//int checkSysEndian()
//{
//	Un u;
//	u.in = 0x1;
//	if (u.ch == 0x1)
//	{
//		return SMALL_ENDIAN;
//	}
//	else
//	{
//		return BIG_ENDIAN;
//	}
//}
//int main()
//{
//	//写一个小程序判断当前主机大小端
//	int ret = checkSysEndian();
//	if (ret == BIG_ENDIAN)
//	{
//		printf("大端序!\n");
//	}
//	else
//	{
//		printf("小端序!\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	//int* p = &a;
//	//*p = 0;
//	char* pc = (char*)(&a);
//	*pc = 0;
//	system("pause");
//	return 0;
//}
//#define BIG_ENDIAN 0
//#define SMALL_ENDIAN 1
//int checkSysEndian()
//{
//	int data = 0x11223344;
//	if (*((char*)(&data)) == 0x44)
//	{
//		return SMALL_ENDIAN;
//	}
//	else
//	{
//		return BIG_ENDIAN;
//	}
//}
//int checkSysEndian()
//{
//	int data = 0x1;
//	//返回1->小端序
//	//返回0->大端序
//	//指针类型的意义:
//	//1.指针类型决定了指针解引用操作符能访问几个字节:char*p;*p访问1个字节,int*p,*p访问4个字节
//	//2.指针类型决定了指针+1/-1,加的/减的是几个字节,char*p, p+1跳过1个字节,int*p, p+1跳过一个整型4个字节
//	return *((char*)(&data));
//}
//int main()
//{
//	//写一段代码告诉我们当前机器的字节序是什么
//	//int ret = checkSysEndian();
//	//if (ret == SMALL_ENDIAN)
//	//{
//	//	printf("小端序!\n");
//	//}
//	//else
//	//{
//	//	printf("大端序!\n");
//	//}
//	int ret = checkSysEndian();
//	if (ret == 1)
//	{
//		printf("小端序!\n");
//	}
//	else
//	{
//		printf("大端序!\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 20;
//	int b = -10;
//	int x = 0x11223344;
//	system("pause");
//	return 0;
//}
//void test()
//void test(void)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	//test();
//	//test(100);//传参无事发生
//	test(100);//warning:“test”: 用“void”参数列表声明
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;//4
//	float b = 10.0;//4
//	short c;
//	short int d;//short == short [int]
//	system("pause");
//	return 0;
//}