#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <assert.h>
#if 0
//int main()
//{
//	const char* s1 = "abcdafg";
//	const char* s2 = "abcdqwer";
//	//int ret = strcmp(s1, s2);
//	int ret = strncmp(s1, s2, 5);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//char* strstr(const char* s1, const char* s2);
//NULL/null
//NUL/Null
//int main()
//{
//	const char* s1 = "abcdefgabcdef";
//	const char* s2 = "def";
//	//strstr����,��s1�ַ�����s2�Ӵ��Ƿ����,�������򷵻��ҵ���s2�Ӵ����׵�ַ,�粻����,�򷵻�NULL��ָ��
//	//s1����s2����ж��s2,���ص�һ���Ӵ����ֵ��׵�ַ��ַ
//	char* p = strstr(s1, s2);
//	if (NULL == p)
//	{
//		printf("û�ҵ��Ӵ�s2\n");
//	}
//	else
//	{
//		printf("%s\n", p);
//	}
//	system("pause");
//	return 0;
//}

//char* myStrstr(const char* s1, const char* s2)
//{
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//	if (!*s2)
//		return ((char*)s1);
//	char* p1 = NULL;
//	char* p2 = NULL;
//	char* cur = (char*)s1;
//	while (*cur)
//	{
//		p1 = cur;
//		p2 = (char*)s2;
//		while (*p1 && *p2 && !(*p1 - *p2))
//		{
//			p1++;
//			p2++;
//		}
//		if (!*p2)
//			return cur;
//		cur++;
//	}
//	return (NULL);
//}
#endif
#if 0
#include <assert.h>
char* myStrstr(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	if (!*str2)
		return ((char*)str1);
	char* cur = (char*)str1;
	char* s1 = NULL;
	char* s2 = NULL;
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)str2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (!*s2)
		{
			return cur;
		}
		cur++;
	}
	return NULL;
}
int main()
{
	const char* s1 = "abbbcdefg";
	const char* s2 = "bb";
	char* p = myStrstr(s1, s2);
	if (p)
	{
		printf("%s\n", p);
	}
	else
	{
		printf("û�ҵ�!\n");
	}
	system("pause");
	return 0;
}
#endif
#if 0
int main()
{
	//192.168.30.54
	//192 168 30 54 --- �и��ַ�����strtok�����и�
	//char* strtok(char* str, const char* sep);
	//char arr[] = "zpw@bitedu.tech";
	//char* sep = "@.";
	//char buff[1024] = "";
	//strcpy(buff, arr);
	//char* p = strtok(buff, sep);
	//printf("%s\n", p);
	//p = strtok(NULL, sep);
	//printf("%s\n", p);
	//p = strtok(NULL, sep);
	//printf("%s\n", p);
	//char ipAdrr[] = "192.168.30.54. ";
	//char buff[1024] = "";
	//strcpy(buff, ipAdrr);
	//const char* sep = ".";
	//int count = 0;
	//for (char* p = strtok(buff, sep); p != NULL; p = strtok(NULL, sep))
	//{
	//	printf("%s ", p);
	//	count++;
	//}
	//printf("\n%d\n", count);

	//char str[] = "- This, a sample string.";
	//char* pch = NULL;
	//int count = 0;
	//char buff[1024] = "";
	//strcpy(buff, str);
	//printf("Splitting string \"%s\" into tokens:\n", buff);
	//for (char* pc = strtok(buff, " -,."); pc != NULL; pc = strtok(NULL, " -,."))
	//{
	//	count++;
	//	printf("%s\n", pc);
	//}
	//printf("\ncount = %d\n", count);
	//pch = strtok(buff, " -,.");
	//while (pch != NULL)
	//{
	//	printf("%s\n", pch);
	//	pch = strtok(NULL, " -,.");
	//	count++;
	//}
	//printf("\ncount = %d\n", count);

	//const char* p = "zhangpengwei@bitedu.tech";
	//const char* sep = "@.";
	//char buff[1024] = "";
	//strcpy(buff, p);
	//int count = 0;
	//for (char* pc = strtok(buff, sep); pc != NULL; pc = strtok(NULL, sep))
	//{
	//	count++;
	//	printf("%s", pc);
	//}
	//printf("\n%d\n", count);
	//const char* ipAd = "192.168.20.54";
	//int count = 0;
	//char buf[1024] = "";
	//strcpy(buf, ipAd);
	//char* p = strtok(buf, ".");
	//while (p != NULL)
	//{
	//	printf("%s ", p);
	//	p = strtok(NULL, ".");
	//	count++;
	//}
	//printf("\n%d\n", count);
	system("pause");
	return 0;
}
#endif
#if 0
#include <errno.h>
//char* strerror(int errnum);
int main()
{
	//char* str = strerror(0);
	//puts(str);
	//puts(strerror(1));
	//puts(strerror(2));
	//FILE* fp = fopen("unexitst.ent", "r");
	//if (NULL == fp)
	//{
	//	printf("Error opening file unexist.ent:%s\n", strerror(errno));
	//	return errno;
	//}

	//������  ������Ϣ
	//0    -  No error
	//1    -  Operation not permitted
	//2    -  No such file or directory
	//...
	//errno��һ��ȫ�ֵĴ��������
	//��C���ԵĿ⺯����ִ�й�����,�����˴���,�ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
	//char* strerror(int errnum);
	//ʹ��errnoȫ�ִ��������Ҫ����ͷ�ļ�<errno.h>
	//puts(strerror(errno));

	//���ļ�
	FILE* fp = fopen("test.txt", "r");
	if (NULL == fp)
	{
		printf("Err:%s\n", strerror(errno));
		return errno;
	}
	else
	{
		printf("file open successful\n");
	}
	fclose(fp);
	system("pause");
	return 0;
}
#endif
#if 0
#include <ctype.h>
int main()
{
	//�ַ����ຯ��
	//iscntrl
	//isspace
	//isdigit
	//isxdigit
	//islower
	//isupper
	//isalpha
	//isalnum
	//ispunct
	//isgraph
	//isprint

	//����ֵ�ص�:��Сд�ķ��ط�0����,���򷵻�0
	//char ch = 'q';
	//printf("%d\n", islower(ch));
	//ch = 'Q';
	//printf("%d\n", islower(ch));
	//ch = '1';
	//printf("%d\n", islower(ch));
	char ch = '2';
	int ret = islower(ch);
	printf("%d\n", ret);
	ret = isdigit(ch);
	printf("%d\n", ret);
	ret = isdigit('011');
	printf("%d\n", ret);
	//�ַ�ת������
	//putchar(tolower('w'));
	//putchar(tolower('W'));
	//putchar(toupper('q'));
	//putchar(toupper('Q'));
	//char arr[] = "I Am A Student";
	//for (int i = 0; arr[i]; i++)
	//{
	//	if (isupper(arr[i]))
	//	{
	//		arr[i] = tolower(arr[i]);
	//	}
	//}
	//printf("%s\n", arr);
	system("pause");
	return 0;
}
#endif
#if 0
//strlen
//strcpy/strncpy
//strcat/strncat
//strcmp/strncmp
//memset
//memcmp
//memmove
//memcpy
void print1(int* pa, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", *pa++);
	}
	putchar(10);
}
void* myMemcpy(void* dest, const void* src, size_t count)
{
	assert(dest && src);
	void* cp = dest;
	while (count--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return cp;
}
void print2(double* pd, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%lf ", *pd++);
	}
	putchar(10);
}
typedef struct _Stu
{
	char name[20];
	int age;
} Stu;
void print3(Stu* ps, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%s %d\n", ps->name, ps->age);
		ps++;
	}
}
int main()
{
#if 0
	//int arr1[] = { 1, 2, 3, 4, 5 };
	//int arr2[5] = { 0 };
	////strcpy(arr2, arr1);
	////strcpyһ���ֻ�ܿ����ַ���,�о�����,�����ڴ��������memcpy���Կ���������������
	////��������,����������,�ַ���,�ṹ�����鶼����:����
	//myMemcpy(arr2, arr1, sizeof(arr1));
	//print1(arr2, 5);
	//double d1[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };
	//double d2[10] = { 0.0 };
	//myMemcpy(d2, d1, sizeof(d1));
	//print2(d2, 10);
#endif
	Stu s1[] = { { "taozhouhong", 20 }, { "meinv", 18 } };
	Stu s2[2] = { { "", 0 }, { "", 0 } };
	myMemcpy(s2, s1, sizeof(s1));
	print3(s2, 2);
	system("pause");
	return 0;
}
#endif
void print(int* pa, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", *pa++);
	}
	putchar(10);
}
void* myMemcpy(void* dest, const void* src, size_t count)
{
	assert(dest && src);
	void* cp = dest;
	while (count--)
	{
		*(char*)cp = *(char*)src;
		cp = (char*)cp + 1;
		src = (char*)src + 1;
	}
	return dest;
}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 0 };
	//��ʵ��һ����������memcpy
	print(arr2, 5);
	myMemcpy(arr2, arr1, sizeof(arr1));
	print(arr2, 5);
	system("pause");
	return 0;
}