#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
void mySwap(char* buf1, char* buf2, size_t width)
{
	char tmp = 0;
	for (size_t i = 0; i < width; i++)
	{
		tmp = buf1[i];
		buf1[i] = buf2[i];
		buf2[i] = tmp;
	}
}
void myBubbleSort(void* base, size_t num, size_t width, int(*cmp)(const void*, const void*))
{
	int flag = 0;
	for (size_t i = 0; i < num - 1; i++)
	{
		flag = 0;
		for (size_t j = 0; j < num - 1 - i; j++)
		{
			if (cmp( (char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				flag = 1;
				mySwap( (char*)base + j * width, (char*)base + (j + 1) * width, width );
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
int cmpInt(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
void print1(int* pa, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *pa++);
	}
	putchar(10);
}
void test1()
{
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = (int)(sizeof(arr) / sizeof(*arr));
	print1(arr, sz);
	myBubbleSort(arr, sz, sizeof(*arr), cmpInt);
	printf("after myBubbleSort!\n");
	print1(arr, sz);
}
int cmpDouble(const void* e1, const void* e2)
{
	//return (int)( *(double*)e1 - *(double*)e2 );
	double x = pow(10, -6);
	if ((*(double*)e1 - *(double*)e2) - 0 >= -x &&
		(*(double*)e1 - *(double*)e2) - 0 <= x)
	{
		return 0;
	}
	else if ((*(double*)e1 - *(double*)e2) - 0 > x)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
void print2(double* pd, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%lf ", *pd++);
	}
	putchar(10);
}
void test2()
{
	double d[] = { 1.0, 1.000001, 1.0000011, 3.0, 5.0, 7.0, 9.0, 2.0, 8.0, 0.0, 4.0, 6.0 };
	int sz = (int)(sizeof(d) / sizeof(d[0]));
	print2(d, sz);
	myBubbleSort(d, sz, sizeof(*d), cmpDouble);
	printf("after myBubbleSort\n");
	print2(d, sz);
}
int cmpCP(const void* e1, const void* e2)
{
	return (strcmp(*(char**)e1, *(char**)e2));
}
void print3(char** ppcArr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%s ", *ppcArr++);
	}
	putchar(10);
}
void test3()
{
	char* cArr[] = { "MACOS", "ANDROID", "WINDOWS", "UNIX", "LINUX", "FREE BSD", "VxWORKS", "IOS" };
	int sz = (int)(sizeof(cArr) / sizeof(*cArr));
	print3(cArr, sz);
	myBubbleSort(cArr, sz, sizeof(*cArr), cmpCP);
	printf("after myBubbleSort\n");
	print3(cArr, sz);
}
typedef struct _Stu
{
	char name[30];
	int age;
	double score;
	char* relaName[4];
} Stu;
void print4(Stu* ps, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%s ", (ps++)->name);
	}
	putchar(10);
}
int cmpStuName(const void* e1, const void* e2)
{
	return (strcmp((((Stu*)e1)->name), (((Stu*)e2)->name)));
}
void test4()
{
	Stu s[] = { { "liudehua", 68, 99.9, { "liuda", "liuer", "liusan", "liuzai" } },
	{ "zhangxueyou", 66, 88.8, { "zhangsan", "lisi", "wangwu", "zhaosi" } },
	{ "chenbaiqiang", 38, 89.9, { "chenzong", "chenchen", "chenhu", "wd" } },
	{ "wangjie", 68, 93.8, { "wanggl", "taozhouhong", "liuzong", "renzhenfei" } } };
	int sz = (int)(sizeof(s) / sizeof(s[0]));
	print4(s, sz);
	myBubbleSort(s, sz, sizeof(s[0]), cmpStuName);
	printf("after myBubbleSort!\n");
	print4(s, sz);
}
void print5(Stu* ps, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", (ps++)->age);
	}
	putchar(10);
}
int cmpStuIntAge(const void* e1, const void* e2)
{
	return ((((Stu*)e1)->age) - (((Stu*)e2)->age));
}
void test5()
{
	Stu s[] = { { "liudehua", 68, 99.9, { "liuda", "liuer", "liusan", "liuzai" } },
	{ "zhangxueyou", 66, 88.8, { "zhangsan", "lisi", "wangwu", "zhaosi" } },
	{ "chenbaiqiang", 38, 89.9, { "chenzong", "chenchen", "chenhu", "wd" } },
	{ "wangjie", 68, 93.8, { "wanggl", "taozhouhong", "liuzong", "renzhenfei" } } };

	int sz = (int)(sizeof(s) / sizeof(*s));
	print5(s, sz);
	myBubbleSort(s, sz, sizeof(*s), cmpStuIntAge);
	printf("after myBubbleSort!\n");
	print5(s, sz);
}
void print6(Stu* ps, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%lf\n", (ps++)->score);
	}
	putchar(10);
}
int cmpStuDoubleScore(const void* e1, const void* e2)
{
	return -((int)(((Stu*)e1)->score + 0.0000002) - (int)(((Stu*)e2)->score + 0.0000002));
}
void test6()
{
	Stu s[] = { { "liudehua", 68, 99.9, { "liuda", "liuer", "liusan", "liuzai" } },
	{ "zhangxueyou", 66, 88.8, { "zhangsan", "lisi", "wangwu", "zhaosi" } },
	{ "chenbaiqiang", 38, 89.9, { "chenzong", "chenchen", "chenhu", "wd" } },
	{ "wangjie", 68, 93.8, { "wanggl", "taozhouhong", "liuzong", "renzhenfei" } } };
	int sz = (int)(sizeof(s) / sizeof(s[0]));
	print6(s, sz);
	myBubbleSort(s, sz, sizeof(*s), cmpStuDoubleScore);
	printf("after myBubbleSort!\n");
	print6(s, sz);
}
//void print7(Stu* ps, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%s\n", ps->relaName);
//		}
//	}
//	putchar(10);
//}
int cmpStuCP(const void* e1, const void* e2)
{
	return strcmp(*(char**)(((Stu*)e1)->relaName), *(char**)(((Stu*)e2)->relaName));
}
void test7()
{
	//Stu s[] = { { "liudehua", 68, 99.9, { "liuda", "liuer", "liusan", "liuzai" } },
	//{ "zhangxueyou", 66, 88.8, { "zhangsan", "lisi", "wangwu", "zhaosi" } },
	//{ "chenbaiqiang", 38, 89.9, { "chenzong", "chenchen", "chenhu", "wd" } },
	//{ "wangjie", 68, 93.8, { "wanggl", "taozhouhong", "liuzong", "renzhenfei" } } };
	Stu s[] = { { "liudehua", 68, 99.9, { "liuda", "liuer", "liusan", "liuzai" } },
{ "zhangxueyou", 66, 88.8, { "zhangsan", "lisi", "wangwu", "zhaosi" } },
{ "chenbaiqiang", 38, 89.9, { "chenzong", "chenchen", "chenhu", "wd" } },
{ "wangjie", 68, 93.8, { "wanggl", "taozhouhong", "liuzong", "renzhenfei" } } };
	int sz = (int)(sizeof(s) / sizeof(s[0]));
	//print7(s, sz);
	myBubbleSort(s, sz, sizeof(*s), cmpStuCP);
	//printf("after myBubbleSort!\n");
	//print7(s, sz);

}
int main()
{
	//test1();//排序整型数组
	//test2();//排序双精度浮点数组
	//test3();//排序字符指针数组
	//test4();//排序结构体数组按名字排序
	//test5();//排序结构体数组按年龄排序
	//test6();//排序结构体数组按成绩排序
	//test7();//排序结构体数组中的字符指针数组
	system("pause");
	return 0;
}
#endif
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#if 0
////三种方法自实现strlen库函数
////1.计数器法
////2.递归法:不创建临时变量求字符串长度
////3.指针-指针法
//size_t myStrlen1(const char* str)
//{
//	assert(str != NULL);
//	size_t count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//size_t myStrlen2(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//		return 0;
//	else
//		return (1 + myStrlen2(str + 1));
//}
//size_t myStrlen3(const char* str)
//{
//	assert(str);
//	const char* s = str;
//	const char* e = str;
//	while (*e)
//	{
//		e++;
//	}
//	return e - s;
//}
//int myStrlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("len = %d\n", len);
//
//	//错误示范
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//len = strlen(arr);
//	//printf("%d\n", len);
//	char arr[] = { 'a', 'b', 'c', '\0' };
//	printf("%d\n", myStrlen1(""));
//	printf("%d\n", myStrlen1("abcdef"));
//	printf("%d\n", myStrlen1(arr));
//	printf("%d\n", myStrlen2(""));
//	printf("%d\n", myStrlen2("abcdef"));
//	printf("%d\n", myStrlen2(arr));
//	printf("%d\n", myStrlen3(""));
//	printf("%d\n", myStrlen3("abcdef"));
//	printf("%d\n", myStrlen3(arr));
//
//	if (strlen("abc") - strlen("abcdef") > 0)//打印hehe
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (myStrlen1("abc") - myStrlen1("abcdef") > 0)//打印hehe:所以返回值是size_t类型容易有歧义
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (myStrlen("abc") - myStrlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n"); 
//	}
//	system("pause");
//	return 0;
//}
//char* myStrcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* d = dest;
//	//拷贝src指向的字符串到dest指向的空间,包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return d;
//}
//int main()
//{
//	//char arr1[] = "abcdefghijklmnopqrstuvwxyz";
//	//char arr2[] = "bit";
//	////printf("%s\n", strcpy(arr1, arr2));
//	////printf("%s\n", arr1);
//	//printf("%s\n", myStrcpy(arr1, arr2));
//	//printf("%s\n", arr1);
//
//	//char arr1[] = "a";
//	//char arr2[] = "bit";
//	//strcpy(arr1, arr2);//错误的示范:目标空间必须足够大,以确保能存放源字符串
//
//	//char arr1[] = "Abcdefas;lfjkl;ajlkfjlkjkl;jkl;jkl;jkl;";
//	//char arr2[] = { 'a', 'b', 'b', 'i', 't' };
//	//strcpy(arr1, arr2);//错误的示范:源字符串必须以'\0'结束
//
//	//char* arr1 = "akl;ajfkjl;kl;jkl;jkl;;";
//	//char arr2[] = "a;dlasfk;j;klajklfjkl;a";
//	//strcpy(arr1, arr2);//错误示范:目标空间必须可变
//	system("pause");
//	return 0;
//}
#endif
#if 0
char* myStrcat(char* dest, const char* src)
{
	assert(dest && src);
	char* d = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return d;
}
int main()
{
	//char arr1[] = "hello";
	//char arr2[] = "world";
	//strcat(arr1, arr2);
	//printf("%s\n", arr1);//错误示范:目标空间必须足够大,以确保能容纳下源字符串的内容
	//strcat函数还要注意:源字符串必须以'\0'结束,目标字符串也必须以'\0'结束
	//目标空间必须可以修改
	//char arr1[30] = "hello";
	//char arr2[] = "world";
	//printf("%s\n", strcat(arr1, arr2));
	//printf("%s\n", myStrcat(arr1, arr2));

	//字符串自己给自己追加,如何?
	//死循环,程序崩溃
	//char arr1[100] = "hello";
	//char* s1 = arr1;
	//char* s2 = arr1;
	//while (*s1)
	//{
	//	s1++;
	//}
	//while (*s1++ = *s2++);

	//myStrcat(arr1, arr1);
	system("pause");
	return 0;
}
#endif
#if 0
//int main()
//{
//	//vs2019/2013中 strcmp函数返回值
//	//s1字符串和s2字符串比较时
//	//s1 == s2  返回0
//	//s1 > s2   返回1
//	//s1 < s2   返回-1
//	//char* s1 = "abcdef";
//	//char* s2 = "abcdef";
//	//int ret = strcmp(s1, s2);
//	//printf("%d\n", ret);//0
//	//printf("%d\n", strcmp("abcdef", "xyvzwk"));//-1
//	//printf("%d\n", strcmp("xyz", ""));//1
//	//部分gcc版本中 strcmp函数返回值
//	//s1和s2进行比较时
//	//s1 == s2 返回0
//	//s1 > s2  返回大于0的数
//	//s1 < s2  返回小于0的数
//
//	//综上:如下这种判断方式是错误的
//
//	//if (strcmp("abc", "cde") == 1)
//	//{
//	//	printf("> \n");
//	//}
//	//else if (strcmp("abc", "cde") == 0)
//	//{
//	//	printf("==\n");
//	//}
//	//else if (strcmp("abc", "cde") == -1)
//	//{
//	//	printf("< \n");
//	//}
//	//else
//	//{
//	//	printf("....\n");
//	//}
//
//	//应改为
//	if (strcmp("abc", "cde") > 0)
//	{
//		printf("> \n");
//	}
//	else if (strcmp("abc", "cde") == 0)
//	{
//		printf("==\n");
//	}
//	else
//	{
//		printf("< \n");
//	}
//
//	system("pause");
//	return 0;
//}
#endif
#if 0
int myStrcmp1(const char* s1, const char* s2)
{
	assert(s1 != NULL && s2 != NULL);
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else if ((*s1) > (*s2))
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	if (*s1 != '\0' && *s2 == '\0')
	{
		return 1;;
	}
	else if (*s1 == '\0' && *s2 != '\0')
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
int myStrcmp2(const char* s1, const char* s2)
{
	assert(s1 && s2);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	if (*s1 > * s2)
		return 1;
	else
		return -1;
}
int myStrcmp3(const char* s1, const char* s2)
{
	assert(s1 && s2);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
int main()
{
	const char* s1 = "abcdef";
	const char* s2 = "abqwe";
	//int ret = strcmp(s1, s2);
	//printf("%d\n", ret);//<0
	//printf("%d\n", myStrcmp1("abcd", "a"));
	//printf("%d\n", myStrcmp1("", "abcde"));
	//printf("%d\n", myStrcmp1("", ""));
	//printf("%d\n", myStrcmp2("", ""));
	//printf("%d\n", myStrcmp2("abc", "abc"));
	//printf("%d\n", myStrcmp2("abc", ""));
	//printf("%d\n", myStrcmp2("", "a"));
	printf("%d\n", myStrcmp3("", ""));
	printf("%d\n", myStrcmp3("", "abcd"));
	printf("%d\n", myStrcmp3("abc", ""));
	printf("%d\n", myStrcmp3("abc", "q"));
	system("pause");
	return 0;
}
#endif
int main()
{
	//char arr1[5] = "abc";
	//char arr2[] = "hello bit";
	//strcpy(arr1, arr2);
	//printf("%s\n", arr1);//长度不受限制的字符串函数,以'\0'为结束标记,不安全
	system("pause");
	return 0;
}