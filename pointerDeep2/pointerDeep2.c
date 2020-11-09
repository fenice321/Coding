#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#pragma warning(disable:6384)
//void test(int arr[])
//{
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	test(arr);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char ch = 't';
//	char* p = &ch;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* p = arr;
//	printf("%s\n", arr);
//	printf("%s\n", p);
//	printf(p);
//	putchar(10);
//	printf(arr);
//	putchar(10);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//char* p = "abcdef";//"abcdef"是字符串常量,只可读不可写
//	//printf("%c\n", *p);
//	//printf("%s\n", p);
//	//printf(p);
//	//putchar(10);
//	//*p = 'S';//Err: Segmentation fault(core dumped):段错误(内存倾倒)
//	//www.stackoverflow.com
//	//www.segmentfault.com
//	//printf(p);
//	const char* pc = "I love you";
//	//*pc = 's';
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char* str3 = "hello bit.";
//	char* str4 = "hello bit.";
//	const char* str5 = "hello bit.";
//	const char* str6 = "hello bit.";
//	if (str1 == str2)
//	{
//		printf("str1 and str2 are same\n");
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");
//	}
//
//	if (str3 == str4)
//	{
//		printf("str3 and str4 are same\n");
//	}
//	else
//	{
//		printf("str3 and str4 are not same\n");
//	}
//
//	if (str5 == str6)
//	{
//		printf("str5 and str6 are same\n");
//	}
//	else
//	{
//		printf("str5 and str6 are not same\n");
//	}
//
//	if (str4 == str6)
//	{
//		printf("str4 and str6 are same\n");
//	}
//	else
//	{
//		printf("str4 and str6 are not same\n");
//	}
//	system("pause");
//	return 0;
//}
//指针数组 - 是数组 - 存放指针的数组
//int main()
//{
//	int arr[10] = { 0 };//整型数组,有10个元素,每个元素是int型,存放整型的数组
//	char ch[5] = "";//字符数组,有5个元素,每个元素是char型,存放字符的数组
//	char* parr[15] = { NULL };//字符指针数组,有15个元素,每个元素是char*类型的,存放字符指针的数组
//	int* pArr[4] = { NULL };//整型指针数组,有4个元素,每个元素是int*型的,存放整型指针的数组
//	int* (*prr)[4] = &pArr;//指针数组指针,指针指向一个有4个元素每个元素类型是int*的数组
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* pArr[] = { &a, &b, &c, &d };
//	int** ppa = pArr;
//	int sz = (int)(sizeof(pArr) / sizeof(pArr[0]));
//	for (int i = 0; i < sz; i++)
//	{
//		//printf("%d ", *pArr[i]);
//		//printf("%d ", **(ppa + i));
//		printf("%d ", *(*ppa++));
//	}
//	putchar(10);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 2, 3, 4, 5, 6 };
//	int arr3[5] = { 3, 4, 5, 6, 7 };
//	int* pArr[] = { arr1, arr2, arr3 };
//	int sz = (int)(sizeof(pArr) / sizeof(pArr[0]));
//	int** ppa = pArr;
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			//printf("%d ", ppa[i][j]);
//			printf("%d ", pArr[i][j]);
//		}
//		putchar(10);
//	}
//	system("pause");
//	return 0;
//}
//数组指针-是指针-指向数组的指针
//int main()
//{
//	//int* p = NULL;//p是整型指针-指向整型的指针-可以存放整型变量的地址
//	//char* pc = NULL;//pc是字符指针-指向字符的指针-可以存放字符变量的地址
//	//数组指针-指向数组的指针-可以存放数组的地址
//	//int arr[10] = { 0 };
//	//arr-数组名大多数情景代表首元素地址即代表&arr[0]
//	//除了sizeof(arr)和&arr时都是代表整个数组,前者代表求整个数组占字节数的大小,后者代表取整个数组的地址
//	//arr-首元素的地址
//	//&arr[0] - 首元素的地址
//	//&arr 整个数组的地址
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//arr的类型是int[10] 对arr取地址 推断应该为int[10] *p,但是不对,而应该int*p[10];但是这样就构成了指针数组,int(*p)[10]才是正确的
//	int (*pa)[10] = &arr;//数组的元素要存起来
//	//上面的pa就是数组指针,指向的一个有10个元素每个元素类型是int型的数组
//	system("pause");
//	return 0;
//
//int main()
//{
//	//数组指针的写法
//	char* arr[4] = { NULL };
//	char* (*pa)[4] = &arr;
//	int arr1[10] = { 0 };
//	int(*pa1)[10] = &arr1;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	//int(*pa)[10] = &arr;
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *((*pa) + i));
//	//}
//	//putchar(10);
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*pa)[i]);
//	//}
//	//putchar(10);
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	int* p = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	putchar(10);
//	system("pause");
//	return 0;
//}
////数组参数传参
//void print1(int arr[3][5], int x, int y)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		putchar(10);
//	}
//}
////指针参数传参
//void print2(int(*p)[5], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			//printf("%d ", p[i][j]);
//			//printf("%d ", (*(p + i))[j]);
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", *(p[i] + j));
//		}
//		putchar(10);
//	}
//}
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print1(arr, 3, 5);
//	print2(arr, 3);
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	//int* p = arr;
//	//for (int i = 0; i < sz; i++)
//	//{
//	//	//printf("%d ", *p++);
//	//	//printf("%d ", *(p + i));
//	//	//printf("%d ", p[i]);
//	//	//printf("%d ", arr[i]);
//	//	printf("%d ", *(arr + i));
//	//}
//	//putchar(10);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("arr  = %p, arr + 1  = %p\n", arr, arr + 1);
//	printf("&arr = %p, &arr + 1 = %p\n", &arr, &arr + 1);
//	system("pause");
//	return 0;
//}
int main()
{
	//字符指针
	//char ch = 't';
	//char* p = &ch;
	//const char* p2 = "abcdef";

	//指针数组-数组-存放指针的数组
	//int* arr[10];
	//char* ch[5];

	//数组指针-指针-指向数组的指针
	//int* p = NULL;//整型指针-指向整型的指针
	//char* p1 = NULL;//字符指针-指向字符的指针
	//int arr[10] = { 0 };
	//int(*pa)[10] = &arr;//数组指针-指向数组的指针
	int(*parr[10])[5] = { NULL };
	system("pause");
	return 0;
}