#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#if 0
//typedef unsigned int     size_t;
//int myStrlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//size_t myStrlen2(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return (1 + myStrlen2(str + 1));
//}
//int main()
//{
//	if (myStrlen2("abc") - myStrlen2("abcdef") > 0)
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
//	if (strlen("abc") - strlen("abcdef") > 0)
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
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return d;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//	myStrcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}

//char* myStrcat(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* d = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return d;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	printf(myStrcat(arr1, arr2));
//	//strcat(arr1, arr2);
//	system("pause");
//	return 0;
//}

//int myStrcmp(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	while (*p1 == *p2)
//	{
//		if (*p1 == '\0')
//		{
//			return 0;
//		}
//		p1++;
//		p2++;
//	}
//	if ((*p1) > (*p2))
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
////此法更符合标准给出的定义
//int myStrcmp1(const char* s1, const char* s2)
//{
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return (*s1 - *s2);
//}
//int myStrcmp2(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 != '\0' && *s2 != '\0')
//	{
//		if (*s1 == *s2)
//		{
//			++s1;
//			++s2;
//		}
//		else if (*s1 > * s2)
//		{
//			return 1;
//		}
//		else
//		{
//			return -1;
//		}
//	}
//	if (*s1 > * s2)
//	{
//		return 1;
//	}
//	else if (*s1 < *s2)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	const char* p1 = "ab";
//	const char* p2 = "abc";
//	int ret = myStrcmp1(p1, p2);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//size_t myStrlen1(const char* str)
//{
//	assert(str != NULL);
//	const char* pt = str;
//	while (*pt++)
//	{
//		;
//	}
//	return (pt - str - 1);
//}
//size_t myStrlen2(const char* str)
//{
//	assert(str != NULL);
//	size_t count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//size_t myStrlen3(const char* str)
//{
//	assert(str != NULL);
//	if (*str == '\0')
//		return 0;
//	else
//		return (1 + myStrlen3(1 + str));
//}
//int main()
//{
//	printf("%d\n", myStrlen1(""));
//	printf("%d\n", myStrlen1("abc"));
//	printf("%d\n", myStrlen1("abc\0defg"));
//	printf("%d\n", myStrlen2(""));
//	printf("%d\n", myStrlen2("abc"));
//	printf("%d\n", myStrlen2("abc\0defg"));
//	printf("%d\n", myStrlen3(""));
//	printf("%d\n", myStrlen3("abc"));
//	printf("%d\n", myStrlen3("abc\0defg"));
//	printf("%d\n", sizeof("abc\0desfg"));
//	system("pause");
//	return 0;
//}
//char* myStrcpy(char* dest, const char* src)
//{
//	assert(dest != NULL && src != NULL);
//	char* cp = dest;
//	while ((*cp++ = *src++) != '\0')
//	{
//		;
//	}
//	return (dest);
//}
//int main()
//{
//	char arr1[30] = "hello";
//	const char* str = " world!";
//	printf("%s\n", myStrcpy(arr1, str));
//	printf(myStrcpy(arr1, str));
//	puts("");
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}
int myStrcmp1(const char* s1, const char* s2)
{
	assert(s1 != NULL && s2 != NULL);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		++s1;
		++s2;
	}
	if (*s1 > * s2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int myStrcmp2(const char* s1, const char* s2)
{
	assert(s1 != NULL && s2 != NULL);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}
int myStrcmp3(const char* s1, const char* s2)
{
	assert(s1 != NULL && s2 != NULL);
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			++s1;
			++s2;
		}
		else if (*s1 > * s2)
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
		return 1;
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
int main()
{
	printf("%d\n", myStrcmp1("", ""));
	printf("%d\n", myStrcmp1("", "abc"));
	printf("%d\n", myStrcmp1("abc", ""));
	printf("%d\n", myStrcmp1("abc\0abc", "abc"));
	printf("%d\n", myStrcmp2("", ""));
	printf("%d\n", myStrcmp2("", "abc"));
	printf("%d\n", myStrcmp2("abc", ""));
	printf("%d\n", myStrcmp2("abc\0abc", "abc"));
	printf("%d\n", myStrcmp3("", ""));
	printf("%d\n", myStrcmp3("", "abc"));
	printf("%d\n", myStrcmp3("abc", ""));
	printf("%d\n", myStrcmp3("abc\0abc", "abc"));
	system("pause");
	return 0;
}
#endif
#if 0
char* myStrcat(char* dest, const char* src)
{
	assert(dest != NULL && src != NULL);
	char* cp = dest;
	while (*cp)
	{
		cp++;
	}
	while ((*cp++ = *src++) != '\0')
	{
		;
	}
	return (dest);
}
int main()
{
	char arr1[20] = "abcd\0xxxx";
	const char* pc = "ab";
	printf(myStrcat(arr1, pc));
	puts("");
	const char* p = "%s\n";
	printf(p, myStrcat(arr1, pc));
	printf("%s\n", arr1);
	system("pause");
	return 0;
}

int main()
{
	char arr1[5] = "abc";
	char arr2[] = "hello bit";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}

char* myStrncpy(char* dest, const char* src, size_t count)
{
	assert(dest != NULL && src != NULL);
	char* cp = dest;
	while (count && (*cp++ = *src++) != '\0')
	{
		count--;
	}
	if (count)
	{
		while (--count)
		{
			*cp++ = '\0';
		}
	}
	return (dest);
}
int main()
{
	char arr1[] = "abcdefghijk";
	char arr2[] = "hello";
	//strncpy拷贝字符串时以字节为单位,不会默认添加'\0'
	//当拷贝字节大于源字符串所给字节时,后面全部添加'\0
	//即:sizeof(源字符串) < count时,拷贝count个字节(前sizeof(源字符串)原样拷贝,后面多出来的全部添加'\0');
	//sizeof(源字符串) > count时,拷贝count个字节,不会添加'\0'
	//strncpy(arr1, arr2, 4);
	//strncpy(arr1, "bit", 6);
	myStrncpy(arr1, arr2, 4);
	myStrncpy(arr1, "bi", 6);
	system("pause");
	return 0;
}
#endif
#if 0
//模拟实现strncat
char* myStrncat(char* dest, const char* src, size_t count)
{
	assert(dest != NULL && src != NULL);
	char* cp = dest;
	while (*cp)
	{
		cp++;
	}
	while (count--)
	{
		if ((*cp++ = *src++) == 0)
		{
			return (dest);
		}
	}
	*cp = '\0';
	return (dest);
}
int main()
{
#if 0
	char arr1[20] = "hello\0xxxx";
	char arr2[] = "world";
	//strncat:指定数目的字符串拼接
	//当给定count>sizeof(源字符串)时,只拼接sizeof(源字符串)个字符,后面不补'\0'
	//当给定count<sizeof(源字符串)时,只拼接count个字符,并且在后面补'\0'
	//strncat(arr1, arr2, 3);
	strncat(arr1, "bi", 4);
#endif
	char str1[20];
	char str2[20];
	strcpy(str1, "To be ");
	strcpy(str2, "or not to be");
	myStrncat(str1, str2, 6);
	puts(str1);
	system("pause");
	return 0;
}
//int strncmp(const char* str1, const char* str2, size_t count);
int main()
{
	//strncmp-字符串比较
	//const char* p1 = "abczef";
	//const char* p2 = "abcqwer";
	////int ret = strcmp(p1, p2);
	//int ret = strncmp(p1, p2, 4);
	//printf("%d\n", ret);
	char str[][5] = { "R2D2", "C3PO", "R2A6" };
	int sz = (int)(sizeof(str) / sizeof(str[1]));
	for (int i = 0; i < sz; i++)
	{
		if (0 == strncmp(str[i], "R2xx", 2))
		{
			printf("found %s\n", str[i]);
		}
	}
	//printf("%d\n", sz);
	system("pause");
	return 0;
}
#endif
//char* strstr(const char* str1, const char* str2);
//KMP算法
//自实现strstr
char* myStrstr(const char* p1, const char* p2)
{
	assert(p1 != NULL && p2 != NULL);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = (char*)p1;
	if (!*p2)
	{
		return (char*)p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;//找到子串
		}
		if (*s1 == '\0')
		{
			return (NULL);//找不到子串,提前终止查找
		}
		cur++;
	}
	return (NULL);//找不到子串
}
int main()
{
	const char* s1 = "abbbcdefabcdef";
	const char* s2 = "bb";
	char* p = myStrstr(s1, s2);
	//如果s1中没找到子串s2则返回NULL指针,如果找到了返回找到的位置的地址,如果有多个匹配的子串,返回从左开始的第一个子串的地址
	if (p == NULL)
	{
		printf("没找到子串!\n");
	}
	else
	{
		printf("%s\n", p);
	}
	//char str[] = "This is a simple string";
	//char* pch = strstr(str, "simple");

	//strncpy(pch, "sample", 6);
	//puts(str);
	system("pause");
	return 0;
}