#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
//char* myStrcpy(char* dest, const char* src);
//myStrcpy的函数指针及包含四个该函数指针的函数指针数组以及指向这个函数指针数组的指针
//函数指针:char*(*pfp)(char*, const char*);
//函数指针数组:char*(*pfp[4])(char*, const char*);
//函数指针数组指针:char* (*(*pfpArrP)[4])(char*, const char*) = &pfp;

//void menu()
//{
//	printf("**************************\n");
//	printf("** 1.add          2.sub **\n");
//	printf("** 3.mul          4.div **\n");
//	printf("**         0.exit       **\n");
//	printf("**************************\n");
//}
//int _add(int a, int b)
//{
//	return a + b;
//}
//int _sub(int a, int b)
//{
//	return a - b;
//}
//int _mul(int a, int b)
//{
//	return a * b;
//}
//int _div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int choice = 0;
//	int a = 0;
//	int b = 0;
//	do
//	{
//		menu();
//		printf("please input your choice:>#");
//		scanf("%d", &choice);
		//功能有点小小的问题
//		//printf("please input two oprands;>#");
//		//scanf("%d%d", &a, &b);
//		switch (choice)
//		{
//		case 1:
			//这样优化功能实现了,但是代码冗余太多
//			printf("please input two oprands;>#");
//			scanf("%d%d", &a, &b);
//			printf("%d\n",_add(a, b));
//			break;
//		case 2:
//			printf("please input two oprands;>#");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", _sub(a, b));
//			break;
//		case 3:
//			printf("please input two oprands;>#");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", _mul(a, b));
//			break;
//		case 4:
//			printf("please input two oprands;>#");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", _div(a, b));
//			break;
//		case 0:
//			printf("退出ing...\n");
//			break;
//		default:
//			printf("your choice is wrong!\n");
//			break;
//		}
//	} while (choice);
//	system("pause");
//	return 0;
//}
//函数指针数组的应用:计算器-转移表
//解决上述代码冗余方法一:
//int _add(int a, int b)
//{
//	return a + b;
//}
//int _sub(int a, int b)
//{
//	return a - b;
//}
//int _mul(int a, int b)
//{
//	return a * b;
//}
//int _div(int a, int b)
//{
//	return a / b;
//}
//int  _xor(int a, int b)
//{
//	return a ^ b;
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("** 1._add         2._sub **\n");
//	printf("** 3._mul         4._div **\n");
//	printf("** 5._xor         0.exit **\n");
//	printf("***************************\n");
//}
//int main()
//{
//	int choice = 0;
//	int a = 0;
//	int b = 0;
//	int(*pfpArr[])(int, int) = { NULL, _add, _sub, _mul, _div, _xor };
//	int sz = (int)(sizeof(pfpArr) / sizeof(*pfpArr));
//	do
//	{
//		menu();
//		printf("please input your choice:>#");
//		scanf("%d", &choice);
//		if (choice >= 1 && choice <= sz - 1)
//		{
//			printf("please input two operands:>#");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", pfpArr[choice](a, b));
//		}
//		else if (0 == choice)
//		{
//			printf("exiting...\n");
//		}
//		else
//		{
//			printf("your choice is wrong! Again:\n");
//		}
//	} while (choice);
//	system("pause");
//	return 0;
//}


//解决上述代码冗余方法二:回调函数法
//void menu()
//{
//	printf("********************************\n");
//	printf("** 1._add              2._sub **\n");
//	printf("** 3._mul              4._div **\n");
//	printf("** 5._xor              0.exit **\n");
//	printf("********************************\n");
//}
//int _add(int a, int b)
//{
//	return a + b;
//}
//int _sub(int a, int b)
//{
//	return a - b;
//}
//int _mul(int a, int b)
//{
//	return a * b;
//}
//int _div(int a, int b)
//{
//	return a / b;
//}
//int _xor(int a, int  b)
//{
//	return a ^ b;
//}
//void Calc(int(*pfp)(int, int))
//{
//	int a = 0;
//	int b = 0;
//	printf("please input two integer oprands:>#");
//	scanf("%d%d", &a, &b);
//	printf("%d\n", pfp(a, b));
//}
//int main()
//{
//	int choice = 0;
//	do
//	{
//		menu();
//		printf("please input your choice:>$");
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1:
//			Calc(_add);
//			break;
//		case 2:
//			Calc(_sub);
//			break;
//		case 3:
//			Calc(_mul);
//			break;
//		case 4:
//			Calc(_div);
//			break;
//		case 5:
//			Calc(_xor);
//			break;
//		case 0:
//			printf("exiting...\n");
//			break;
//		default:
//			printf("your choice is wrong! Again:>\n");
//			break;
//		}
//	} while (choice);
//	system("pause");
//	return 0;
//}
//int _add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;//取出数组的地址--数组指针
//	int(*pfpArr[4])(int, int) = { _add };//pfpArr是一个有4个元素,每个元素是一个指向入参是int和int,返回值是int的函数的函数指针的数组
//	int(*(*pfpArrP)[4])(int, int)  = &pfpArr;
//	//pfpArrP是一个数组指针,该数组指针指向一个数组,有4个元素,每个元素是int(*)(int, int)型的函数指针,
//	//该型函数指针指向一个入参分别是int, int型返回值是int型的函数
//	system("pause");
//	return 0;
//}
//void print(const char* str)
//{
//	printf("bit:%s\n", str);
//}
//void test(void(*pfp)(const char*))
//{
//	printf("xxxxxxxxxxxxxxx\n");
//	pfp("ooooooooooooooooo\n");
//}
//int main()
//{
//	print("hello world!");
//	test(print);
//	system("pause");
//	return 0;
//}
//void print(const char* str)
//{
//	printf("hehe:%s\n", str);
//}
//int main()
//{
//	//int a = 20;
//	//int* pa = &a;
//	//*pa = 200;
//	//printf("a = %d\n", a);
//	void(*pfp)(const char*) = print;
//	(*pfp)("hello world!");
//	print("hello world!");
//	(*print)("hello world!");
//	pfp("hello world!");
//	(**pfp)("hello world!");
//	(*****************pfp)("hello world!");
//	system("pause");
//	return 0;
//}

//void print(int* pa, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", *pa++);
//	}
//	putchar(10);
//}
//void mySwap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
////冒泡排序函数
////冒泡排序函数"只能"排序整型数组
////但是C语言标准库提供的库函数qsort可以排序任意类型的数据(要用到回调函数)
////后面根据C标准库的库函数qsort模拟实现一个可以排序任意数据类型的冒泡排序函数
//void bubbleSort(int* pa, int len)
//{
//	int flag = 0;
//	for (int i = 0; i < len - 1; i++)
//	{
//		flag = 0;
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (pa[j] > pa[j + 1])
//			{
//				flag = 1;
//				mySwap(&pa[j], &pa[j + 1]);
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	print(arr, sz);
//	bubbleSort(arr, sz);
//	print(arr, sz);
//	system("pause");
//	return 0;
//}
#endif
#if 0
//逆置英语句子中的单词:I like china. ==> china. like I
#include <stdio.h>
#include <math.h>
#include <string.h>
//字符串翻转
int reverse_str(char* begin, char* end)
{
	if (begin == NULL || end == NULL)
	{
		return -1;
	}
	while (begin < end)
	{
		char tmp = *begin;
		*begin = *end;
		*end = tmp;
		begin++;
		end--;
	}
	return 0;
}
int main()
{
	char str[100] = { 0 };
	fgets(str, sizeof(str) - 1, stdin);
	str[strlen(str) - 1] = '\0';

	char* begin = str;
	char* end = str;
	while (*end != '\0')
	{
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse_str(begin, end - 1);
		if (*end != '\0')
		{
			end++;
		}
		begin = end;
	}
	reverse_str(str, str + strlen(str) - 1);
	printf("%s\n", str);
	return 0;
}

//最小公倍数
#if 0
int max_div_num(int max, int min)
{
	int z = 0;
	while (1)
	{
		z = max % min;
		if (z <= 0)
		{
			break;
		}
		max = min;
		min = z;
	}
	return min;
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	printf("%d\n", (a * b) / (max_div_num(a, b)));
	return 0;
}
#endif


//水仙花
#if 0
int main()
{
	for (int i = 1; i < 100000; i++)
	{
		int tmp = i;
		int count = 0;
		while (tmp)
		{
			count++;
			tmp = tmp / 10;
		}

		tmp = i;
		int sum = 0;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}

		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
#endif

//交换整型数组中的元素,使奇数全部位于数组的左侧,偶数全部位于数组的右侧
//eg. 1 2 3 4 5 ==> 1 5 3 4 2
#endif
#define _CRT_SECURE_NO_WARNINGSS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
//int _add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	////指针数组
//	//int* arr[10] = { NULL };//整型指针数组,是数组,有10个元素,每个元素使int*型指针,该指针指向一个整型变量
//	////数组指针
//	//int*(*pa)[10] = &arr;//数组指针,是指针,指针指向一个数组,指向的数组有10个元素,且每个元素是int*指针
//	////指向数组指针的指针
//	//int* (**ppa)[10] = &pa;//ppa是个二级指针,该指针指向一个数组指针,数组指针指向数组有10个元素,且每个元素是int*型指针
//	//函数指针-是指针-指针指向函数而已
//	int(*pfp)(int, int) = _add;//&_add
//	//printf("%d\n", (*pfp)(1, 2));
//	//printf("%d\n", (****************************pfp)(1, 2));
//	//printf("%d\n", _add(1, 2));
//	//printf("%d\n", pfp(1, 2));
//
//	//函数指针数组-应用-转移表
//	int(*pfpArr[4])(int, int) = { NULL, pfp };
//	//int(*(*p)[4])(int, int) = { NULL, pfp };
//	//指向函数指针数组的指针-是指针-是数组指针
//	int(*(*ppfpArr)[4])(int, int) = &pfpArr;
//	system("pause");
//	return 0;
//}
//typedef struct stu
//{
//	char name[20];
//	int age;
//} Stu;
//void mySwap(int* pa, int* pb)
//{//交换函数
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//void bubbleSort(int* pa, int sz)
//{
//	//这种冒泡排序函数只能排序整型数组
//	//C标准库提供的库函数qsort,可以排序任意类型数据
//	//qsort算法原型是quick sort
//	int flag = 0;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		//趟数
//		flag = 0;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			//一趟冒泡排序
//			if (pa[j] > pa[j + 1])
//			{
//				flag = 1;
//				mySwap(&pa[j], &pa[j + 1]);
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}
//void print(int* pa, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *pa++);
//	}
//	putchar(10);
//}
//void qsort(
//	void* base,
//	size_t num,
//	size_t width,
//	int(*compare)(const void*, const void*));// /* _cdecl */_cdecl C declaration缩写
//
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	//print(arr, sz);
//	Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	float f[] = { 9.0f, 8.0f, 7.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f, 0.0f };
//	int szf = (int)(sizeof(f) / sizeof(f[0]));
//	bubbleSort(arr, sz);
//	bubbleSort(f, szf);
//	//printf("after bubbleSort!\n");
//	//print(arr, sz);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//关于void与void*型
//	int a = 10;
//	//int* pa = &a;
//	//char* pc = &a;//warnings
//	void* p = &a;//void*型指针可以接收任意类型的地址
//	//p = &pa;//void*型指针可以接收任意类型的地址
//	//char ch = 'w';
//	//p = &ch;//void*型指针可以接收任意类型的地址,同时void*型指针也可以赋值给任意类型的指针
//	//(*p);//void*型指针不能解引用
//	//*p = 20;//void*型指针不能进行解引用操作:解引用void*型指针是void类型,访问字节数不确定
//	//p++;//void*型指针不能进行自增自减操作,因为指针进行+-整数操作实际+-整数个指针指向类型,此处+-整数个void类型不确定类型
//	*(int*)p = 200;
//	printf("a = %d\n", a);
//	p = (int*)p + 1;
//	system("pause");
//	return 0;
//}

//qsort函数使用
//排序整型数组,float浮点数组,字符指针数组,结构体数组中按名字排序,按年龄排序,按成绩排序(float)
//qsort函数声明
//void qsort(void* base, size_t num, size_t width, int( /*_cdecl */ * comare)(const void*, const void*) );
typedef struct _Stu
{
	char name[20];
	int age;
	float mathScore;
} Stu;
int cmpInt(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
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
	//排序整型数组
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
	qsort(arr, sz, sizeof(arr[0]), cmpInt);
	print1(arr, sz);
}
int cmpFloat(const void* e1, const void* e2)
{
	//return (int)(*(float*)e1 - *(float*)e2);
	if (*(float*)e1 > *(float*)e2)
	{
		return 1;
	}
	else if (*(float*)e1 == *(float*)e2)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}
void print2(float* pfloat, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%.2f\n", *pfloat++);
	}
}
void test2()
{
	//排序单精度浮点数组
	float f[] = { 9.0f, 8.0f, 7.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f, 0.0f };
	int sz = (int)(sizeof(f) / sizeof(*f));
	qsort(f, sz, sizeof(*f), cmpFloat);
	print2(f, sz);
}
int cmpCP(const void* e1, const void* e2)
{
	return (strcmp(*(char**)e1, *(char**)e2));
}
void print3(char** ppcA, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%s ", *ppcA++);
	}
	putchar(10);
}
void test3()
{
	char* cArr[] = { "APPLE", "HUAWEI", "BIT", "BAIDU", "GOOGLE", "GNU", "MICROSOFT", "IBM", "INTEL", "ORACLE" };
	int sz = (int)(sizeof(cArr) / sizeof(cArr[0]));
	qsort(cArr, sz, sizeof(*cArr), cmpCP);
	print3(cArr, sz);
}
int cmpStuName(const void* e1, const void* e2)
{
	return (strcmp(((Stu*)e1)->name, ((Stu*)e2)->name));
}
void print4(Stu* ps, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%s ", ps->name);
	}
}
void test4()
{
	Stu s[] = { { "simaguang", 45,  19.5f }, { "caocao", 59, 48.5f }, { "lishiming", 43, 23.5f }, { "liuche", 60, 55.5f } };
	int sz = (int)(sizeof(s) / sizeof(*s));
	qsort(s, sz, sizeof(*s), cmpStuName);
	print4(s, sz);
}
int main()
{
	//test1();//排序整型数组
	//test2();//排序单精度浮点数组
	//test3();//排序字符指针数组
	test4();//排序结构体中按名字排
	//test5();//结构体中按年龄排序
	//test6();//结构体中按数学成绩排序
	system("pause");
	return 0;
}