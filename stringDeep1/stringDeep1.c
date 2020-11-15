#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <assert.h>
#include <string.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#if 0
void print1(int* pa, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *pa++);
	}
	putchar(10);
}
int cmpInt(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void mySwap(char* s1, char* s2, size_t width)
{
	char tmp = '\0';
	while (width)
	{
		tmp = *s1;
		*s1 = *s2;
		*s2 = tmp;
		width--;
		s1++;
		s2++;
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
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				flag = 1;
				mySwap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
		if (0 == flag)
		{
			break;
		}
	}
}
void test1()
{
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
	print1(arr, sz);
	myBubbleSort(arr, sz, sizeof(*arr), cmpInt);
	printf("after myBubbleSort!\n");
	print1(arr, sz);
}
void print2(char** ppcArr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%s\n", *ppcArr++);
	}
}
int cmpCPARR(const void* e1, const void* e2)
{
	return (strcmp(*(char**)e1, *(char**)e2));
}
void test2()
{
	char* cArr[] = { "MacOS", "VxWorks", "Android", "Linux", "Unix", "Minix", "Windows", "CentOS",
	"Ubuntu", "Debian", "Kali", "Free BSD" };
	int sz = (int)(sizeof(cArr) / sizeof(*cArr));
	print2(cArr, sz);
	myBubbleSort(cArr, sz, sizeof(*cArr), cmpCPARR);
	printf("after myBubbleSort!\n");
	print2(cArr, sz);
}

typedef struct _Stu
{
	char name[30];
	int age;
	char sex;
} Stu;
int cmpStuName(const void* e1, const void* e2)
{
	return (strcmp(((Stu*)e1)->name, ((Stu*)e2)->name));
}
void print3(Stu* ps, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%s\n", (ps++)->name);
	}
}
void test3()
{
	Stu s[] = { { "zhangsan", 20, 'm' }, { "lisi", 13, 's' }, { "wangwu", 111, 'f' } };
	int sz = (int)(sizeof(s) / sizeof(s[0]));
	print3(s, sz);
	myBubbleSort(s, sz, sizeof(*s), cmpStuName);
	printf("after myBubbleSort!\n");
	print3(s, sz);
}
int main()
{
	test1();
	test2();
	test3();
	system("pause");
	return 0;
}

void print1(int* pa, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *pa++);
	}
	putchar(10);
}
int cmpInt(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
	print1(arr, sz);
	qsort(arr, sz, sizeof(*arr), cmpInt);
	print1(arr, sz);
}
void print2(double* pd, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%lf ", *pd++);
	}
	putchar(10);
}
int cmpDouble(const void* e1, const void* e2)
{
	if (*(double*)e1 - *(double*)e2 > 0.0000002)
	{
		return 1;
	}
	else if (*(double*)e1 - *(double*)e2 < -0.0000002)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
void test2()
{
	double d[] = { 10.0, 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0 };
	int sz = (int)(sizeof(d) / sizeof(d[0]));
	print2(d, sz);
	qsort(d, sz, sizeof(*d), cmpDouble);
	printf("after qsort!\n");
	print2(d, sz);
}
void print3(char** ppcArr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%s\n", *ppcArr++);
	}
}
int cmpCPARR(const void* e1, const void* e2)
{
	return strcmp(*(char**)e1, *(char**)e2);
}
void test3()
{
	char* cArr[] = { "MacOS", "VxWorks", "Android", "Linux", "Unix", "Minix", "Windows", "CentOS",
	"Ubuntu", "Debian", "Kali", "Free BSD" };
	int sz = (int)(sizeof(cArr) / sizeof(*cArr));
	print3(cArr, sz);
	qsort(cArr, sz, sizeof(*cArr), cmpCPARR);
	printf("after myBubbleSort!\n");
	print3(cArr, sz);
}
typedef struct _Stu
{
	char name[20];
	int age;
} Stu;
void print4(Stu* ps, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%s\n", (ps++)->name);
	}
}
int cmpStuName(const void* e1, const void* e2)
{
	return strcmp(((Stu*)e1)->name, ((Stu*)e2)->name);
}
void test4()
{
	Stu s[] = { { "zhangsan", 20 }, { "lisi", 40 }, { "wangwu", 30 } };
	int sz = (int)(sizeof(s) / sizeof(s[0]));
	print4(s, sz);
	qsort(s, sz, sizeof(s[0]), cmpStuName);
	printf("after qsort!\n");
	print4(s, sz);
}
int main()
{
	//test1();//排序整型数组
	//test2();//排序双精度浮点型数组
	//test3();//排序字符指针数组
	test4();//排序结构体数组按名字排序
	system("pause");
	return 0;
}
#endif
#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#define LENGTH 10
void initArr(int* pa, int len)
{
	for (int i = 0; i < len; i++)
	{
		*pa++ = rand() % 100;
	}
}
void print(int* pa, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", *pa++);
	}
	putchar(10);
}
void moveArr(int* pa, int len)
{
	int left = 0;
	int right = len - 1;
	int tmp = 0;
	while (left < right)
	{
		while ((pa[left] & 1) && (left < right))
		{
			left++;
		}
		while ((!(pa[right] & 1)) && (left < right))
		{
			right--;
		}
		if (left < right)
		{
			tmp = pa[left];
			pa[left] = pa[right];
			pa[right] = tmp;
		}
	}
}
int main()
{
	srand((size_t)time(NULL));
	int arr[LENGTH] = { 0 };
	initArr(arr, LENGTH);
	print(arr, LENGTH);
	moveArr(arr, LENGTH);
	printf("after moveArr!\n");
	print(arr, LENGTH);

	system("pause");
	return 0;
}
#endif
#if 0
#include <stdio.h>
#include <math.h>
#include <string.h>
void swap(char* head, char* tail)
{
	while (head < tail)
	{
		char temp = *head;
		*head++ = *tail;
		*tail-- = temp;
	}
}
//实现字符串逆序
int main()
{
	//char str[] = "I am from shanghai";
	char str[101] = "";
	fgets(str, 101, stdin);
	char* p1 = str;
	char* p2 = str + strlen(str) - 1;
	char* p3 = str;
	//字符串整体逆序
	swap(p1, p2);
	while (*p1)
	{
		if (*p1 == ' ')
		{
			//每个单词逆序
			swap(p3, p1 - 1);
			p3 = p1 + 1;
		}
		p1++;
	}
	//最后一个单词逆序
	swap(p3, p2);
	printf("%s\n", str);
	return 0;
}
#endif
#if 0
//字符串翻转
//int reverse_str(char* begin, char* end)
//{
//	if (begin == NULL || end == NULL)
//	{
//		return -1;
//	}
//	while (begin < end)
//	{
//		char tmp = *begin;
//		*begin = *end;
//		*end = tmp;
//		begin++;
//		end--;
//	}
//	return 0;
//}
//int main()
//{
//	char str[100] = { 0 };
//	fgets(str, sizeof(str) - 1, stdin);
//	str[strlen(str) - 1] = '\0';
//	char* begin = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse_str(begin, end - 1);
//		if (*end != '\0')
//		{
//			end++;
//		}
//		begin = end;
//	}
//	reverse_str(str, str + strlen(str) - 1);
//	printf("%s\n", str);
//	return 0;
//}
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d, %d\n", a + b, c);//300 44
//	system("pause");
//	return 0;
//}
#endif
void strLeftMove1(char* str, int k)
{
	//法一:暴力破解法
	assert(str);
	int len = (int)strlen(str);
	char tmp = '\0';
	for (int i = 0; i < k; i++)
	{
		tmp = str[0];
		for (int j = 0; j < len - 1; j++)
		{
			str[j] = str[j + 1];
		}
		str[len - 1] = tmp;
	}
}
//法二:三翻转法
//第一翻:前k个字符逆序
//第二翻:后len-k个字符逆序
//第三翻:整个逆序
//abcdef
//bafedc
//cdefab
void reverse(char* pl, char* pr)
{
	assert(pl && pr);
	char tmp = '\0';
	while (pl < pr)
	{
		tmp = *pl;
		*pl = *pr;
		*pr = tmp;
		pl++;
		pr--;
	}
}
void strLeftMove(char* str, int k)
{
	assert(str);
	int len = (int)strlen(str);
	k %= len;
	int right = len - 1;
	reverse(str, str + k - 1);
	reverse(str + k, str + right);
	reverse(str, str + right);
}
int main()
{
	//作业标题:字符串左旋
	//作业内容:实现一个函数,可以左旋字符串中的k个字符
	//例如:ABCD左旋一个字符得到BCDA  ABCD左旋两个字符得到CDAB
	//附加题:字符串右转
	char arr[] = "abcdef";
	int k = 0;
	printf("please input a plus integer number:>#");
	scanf("%d", &k);
	if (k < 0)
	{
		printf("输入数据不符合要求! error!!!\n");
		return -1;
	}
	printf(arr);
	strLeftMove(arr, k);
	printf("\nafter strLeftMove!\n");
	printf(arr);
	system("pause");
	return 0;
}