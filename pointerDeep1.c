#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
int main()
{
	//数组指针-指针-指向数组的指针
	//函数指针-指针-指向函数的指针

	system("pause");
	return 0;
}
//void test1(int** pp)
//{
//	printf("%d\n", **pp);
//}
//void test2(int** pp)
//{
//	printf("%d\n", **pp);
//}
//void test3(char** ppc)
//{
//	printf("%c\n", **ppc);
//}
//void test4(char** ppc)
//{
//	printf("%c\n", **ppc);
//}
//void displayCarr(char** ppc, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s\n", *ppc++);
//	}
//}
//int main()
//{
//	//二级指针传参
//	//int n = 10;
//	//int* p = &n;
//	//int** pp = &p;
//	//test1(pp);
//	//test2(&p);
//	//char c = 't';
//	//char* pc = &c;
//	//char** ppc = &pc;
//	//test3(&pc);
//	//test4(ppc);
//	char* cArr[] = { "Apple", "Intel", "Space", "Microsoft", "Google", "Facebook", "Android", "Huawei" };
//	int sz = (int)(sizeof(cArr) / sizeof(cArr[0]));
//	displayCarr(cArr, sz);
//	system("pause");
//	return 0;
//}
//void test1(int* pa)
//{
//	printf("%d\n", *pa);
//}
//void displayArr(int* pa, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", *pa++);
//	}
//	putchar(10);
//}
//void test2(char* pc)
//{
//	printf("%c\n", *pc);
//}
//int main()
//{
//	//一级指针传参
//	int a = 10;
//	int* pa = &a;
//	test1(&a);
//	test1(pa);
//	char ch = 't';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int* p = arr;
//	//int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	//displayArr(arr, sz);
//	//displayArr(p, sz);
//	system("pause");
//	return 0;
//}
//void test1(int arr[10])
//{}
//void test2(int arr[])
//{}
//void test3(int* pa)
//{}
//void test4(int* arr2[20])
//{}
//void test5(int* arr2[])
//{}
//void test6(int** ppa)
//{}
//void test7(int arr[3][5])
//{}
//void test8(int arr[3][])//err
//{};
//void test9(int arr[][5])
//{}
//void test10(int arr[][])//err
//{}
//void test11(int(*pa)[5])
//{}
//void test12(int* arr[5])//err
//{}
//void test13(int** ppa)//err
//{}
//void test14(int* pa)//err
//{}
//int main()
//{
//	//一维数组传参
//	//int arr[10] = { 0 };
//	//int* arr2[20] = { 0 };
//	//test1(arr);
//	//test2(arr);
//	//test3(arr);
//	//test4(arr2);
//	//test5(arr2);
//	//test6(arr2);
//	//二维数组传参
//	//int arr[3][5];
//	//test7(arr);
//	//test8(arr);
//	//test9(arr);
//	//test10(arr);
//	//test11(arr);
//	//test12(arr);
//	//test13(arr);
//	//test14(arr);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//字符指针
//	//char ch = 'w';
//	//char* p = &ch;
//	//*p = 't';
//	//printf("%c\n", ch);
//	//const char* p = "abcdefg";
//	//指针数组-数组-存放指针的数组
//	//int* arr[10];
//	//char* ch[5];
//	//数组指针-指针-指向数组的指针
//	//int* p3;//整型指针-指向整型的指针
//	//char* p4;//字符指针-指向字符的指针
//	//int arr2[5];//数组
//	//int(*p2)[5] = &arr2;//取出数组的地址,pa就是一个数组指针
//	//int(*parr3[10])[5];
//	system("pause");
//	return 0;
//}
//解释一下定义的含义
//int arr[5];
//答:表示定义一个整型数组,该数组有5个元素,每个元素是int型
//int *parr1[10];
//答:表示定义一个整型指针数组,该数组有10个元素,每个元素是int*型
//int(*parr2)[10];
//答:表示定义一个数组指针,该数组指针指向一个有10个int型元素的数组
//int(*parr3[10])[5];
//答:表示定义一个有10个元素,每个元素是指向一个有5个int型数组的数组指针的指针数组
//void print1(int arr[3][5], int x, int y)
//{//参数是数组的形式
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		putchar(10);
//	}
//}
//void print2(int(*p)[5], int len)
//{//参数是数组指针形式
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", p[i][j]);
//			//printf("%d ", *(p[i] + j));
//			//printf("%d ", *(*(p + i) + j));
//			//printf("%d ", (*(p + i))[j]);
//		}
//		putchar(10);
//	}
//}
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	//print1(arr, 3, 5);//arr-数组名就是数组首元素地址-即int[5] arr[3]中的首元素地址即int[5]*型指针-int(*)[5]型
//	print2(arr, 3);
//	//int(*p)[5] = arr;
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	for (int j = 0; j < 5; j++)
//	//	{
//	//		printf("%d ", p[i][j]);
//	//	}
//	//	putchar(10);
//	//}
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int* p = arr;
//	//int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	//for (int i = 0; i < sz; i++)
//	//{
//	//	//printf("%d ", arr[i]);
//	//	//printf("%d ", p[i]);
//	//	//printf("%d ", *(arr + i));
//	//	printf("%d ", *(p + i));//arr[i] == *(arr + i) == *(p + i) == p[i]
//	//}
//	//putchar(10);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*pa)[10] = &arr;
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *p++);
//	}
//	putchar(10);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	putchar(10);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*pa) + i));
//	}
//	putchar(10);
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char* arr1[5] = { NULL };
//	char* (*pa1)[5] = &arr1;
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	system("pause");
//	return 0;
//}
//数组指针是指针-指向数组的的指针
//int main()
//{
//	//int* p = NULL;//p是整型指针-指向整形的指针-可以存放整形的地址
//	//char* pc = NULL; //pc是字符指针-指向字符的指针-可以存放字符的地址
//	////数组指针-指向数组的指针-可以存放数组的地址
//	//int arr[10] = { 0 };
//	//arr-数组名大多数情况下就是数组的首地址即等价于&arr[0]
//	//除了&arr中的arr代表整个数组,&arr意思是求整个数组的地址
//	//sizeof(arr);中的arr代表的也是整个数组,sizeof(arr)意思是求整个数组的大小
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int (*p)[10] = &arr;//数组的地址存起来
//	//上面的p就是数组指针,指向10个元素每个元素是int型的数组的指针
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//int d = 40;
//	//int* arr[4] = { &a, &b, &c, &d };
//	//int i = 0;
//	//for (i = 0; i < 4; i++)
//	//{
//	//	printf("%d\n", *arr[i]);
//	//}
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[] = { 2, 3, 4, 5 };
//	int arr3[] = { 3, 4, 5, 6 };
//	int* parr[] = { arr1, arr2, arr3 };
//	int sz = (int)(sizeof(parr) / sizeof(parr[0]));
//	int** p = parr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		putchar(10);
//	}
//	system("pause");
//	return 0;
//}
//指针数组是数组用来存放指针的
//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整型指针的数组-指针数组
//	char* pch[6];//存放字符指针的数组-指针数组
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");//
//	}
//	if (p1 == p2)
//	{
//		printf("hehe\n");//
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	const char* p = "abcdef";//"abcdef"是一个常量字符串
//	//*p = 'w';//段错误
//
//	printf("%s\n", p);
//	//printf("%c\n", *p);
//	//printf("%s\n", p);
//	//www.stackoverflow.com
//	//Segmentation fault(core dump)段错误,内存倾倒
//	//www.segmentfault.com
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	*p = 'z';
//	printf("%c\n", *p);
//	system("pause");
//	return 0;
//}
//void test(int arr[])
//{
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//作业标题:调整奇数偶数顺序
//作业内容:调整数组使奇数全部都位于偶数前面。
//题目:输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。
//char* myStrcpy(char* pa, const char* p)
//{
//	assert(pa && p);
//	char* d = pa;
//	while (*pa++ = *p++)
//	{
//		;
//	}
//	return d;
//}
//int main()
//{
//	//作业标题:strcpy实现
//	//作业内容:模拟实现库函数strcpy
//	char arr[20] = "";
//	const char* p = "hello world";
//	printf("%s\n", myStrcpy(arr, p));
//	system("pause");
//	return 0;
//}
//int myStrlen(const char* pc)
//{
//	assert(pc != NULL);
//	int count = 0;
//	while (*pc)
//	{
//		count++;
//		pc++;
//	}
//	return count;
//}
//int main()
//{
//	//作业标题:strlen实现
//	//作业内容:模拟实现库函数strlen
//	const char* pc = "I love you!";
//	printf("%d\n", myStrlen(pc));
//	system("pause");
//	return 0;
//}