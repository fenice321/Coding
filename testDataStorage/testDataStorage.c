#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <assert.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
//#define ARRLEN 10
//void initArr(int* pa, int len)
//{
//	assert(pa);
//	printf("please input an integer number, 10 times:>#");
//	for (int i = 0; i < len; i++)
//	{
//		scanf("%d", &pa[i]);
//	}
//}
//void displayArr(int* pa, int len)
//{
//	assert(pa);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", *pa++);
//	}
//	putchar(10);
//}
//void setArr(int* pa, int len)
//{
//	assert(pa);
//	int left = 0;
//	int right = len - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		while ((pa[left] & 1) && (left < right))
//		{
//			left++;
//		}
//		while ((!(pa[right] & 1)) && (left < right))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = pa[left];
//			pa[left] = pa[right];
//			pa[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	//作业标题:调整奇数偶数顺序
//	//作业内容:调整数组使奇数全部都位于偶数前面
//	//题目:输入一个整数数组,实现一个函数,来调整该数组中数字的顺序
//	//使得数组中所有的奇数位于数组的前半部分,所有偶数位于数组的后半部分
//	//int arr[ARRLEN] = { 0 };
//	//initArr(arr, ARRLEN);
//	//displayArr(arr, ARRLEN);
//	//setArr(arr, ARRLEN);
//	//displayArr(arr, ARRLEN);
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	displayArr(arr, sz);
//	setArr(arr, sz);
//	displayArr(arr, sz);
//	system("pause");
//	return 0;
//}
//#define SIZE 1024
//#define _STR "我是: 尼古拉斯.赵四"
//char* myStrcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* d = dest;
//	while ((*dest++ = *src++) != '\0')
//	{
//		;
//	}
//	return d;
//}
//int main()
//{
//	//作业内容:模拟实现库函数strcpy
//	//作业标题:strcpy实现
//	char arr[SIZE] = "";
//	const char* str = _STR;
//	printf("%s\n", myStrcpy(arr, str));
//	printf(myStrcpy(arr, str));
//	system("pause");
//}
#if 0
作业标题:程序死循环解释
作业内容:VS开发环境调试下面的代码，画图解释下面代码的问题
int i = 0;
int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
for (i = 0; i <= 12; i++)
{
	arr[i] = 0;
	printf("hello bit\n");
}
答:局部变量i和局部数组arr的空间开辟都是在栈上的,而我们知道一般的地址空间中栈是从高地址向低地址下发展的,按照
代码所写栈先开辟变量i空间再开辟数组arr空间,i的地址高于arr数组的地址,数组又是整体开辟空间,最小下标元素所在地址
最低,最大下标元素所在地址最高,即随着元素下标增长,从低地址到高地址,综上i变量的地址比整个数组的高地址还要高,当
执行代码for循环时越界访问,C语言对越界不检,导致访问越界的某个元素时这个元素既是越界元素又是i变量,执行对数组元素
赋值为0的操作的同时将i(循环变量)的内容改成了0,使得i<=12这个循环条件又成立了,如此循环,循环条件i<=12永远成立,
死循环也就产生了
#endif
#if 0
作业标题:strlen实现
作业内容:模拟实现库函数strlen
#endif
#if 0
size_t myStrlen1(const char* str)
{
	assert(str);
	const char* end = str;
	while (*end)
	{
		end++;
	}
	return end - str;
}
size_t myStrlen2(const char* str)
{
	assert(str);
	size_t count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}
size_t myStrlen3(const char* str)
{
	assert(str);
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return (1 + myStrlen3(1 + str));
	}
}
int main()
{
	const char* p = "I love you!";
	printf("%u\n", myStrlen1(p));
	printf("%u\n", myStrlen2(p));
	printf("%u\n", myStrlen3(p));
	p = "";
	printf("%u\n", myStrlen1(p));
	printf("%u\n", myStrlen2(p));
	printf("%u\n", myStrlen3(p));
	system("pause");
	return 0;
}
#endif
//int main()
//{
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//int main()
//{
//	//unsigned char a = 200;
//	//unsigned char b = 100;
//	//unsigned char c = 0;
//	//c = a + b;
//	//printf("%d %d", a + b, c);
//	unsigned int a = 0x1234; 
//	unsigned char b = *(unsigned char*)(&a);
//	system("pause");
//	return 0;
//}