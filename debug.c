#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>//����ͷ�ļ�
#pragma warning(disable:4996)
#pragma warning(disable:6031)
//Debugͨ����Ϊ���԰汾,��ִ�����ļ��ϴ�,������������Ϣ,���Ҳ����κ��Ż�,,���ڳ���Ա�ĵ���
//Release��Ϊ�����汾,��ִ�����ļ���С,������������Ϣ,���ܵ���,�������ǽ����˸����Ż�,
//ʹ�ó����ڴ����С�����ٶ��϶������ŵ�,�Ա��û��ܺõ�ʹ��
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
//	//for (int i = 0; i <= 12; i++)//Debugģʽȥ����������ѭ��
//	//{//Releaseģʽȥ����,û����ѭ��,�Ż����²�ͬ�Ľ��
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
//	//дһ�δ���:����1!+2!+3!+...+n!,������������
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
//	if (dest != NULL && src != NULL)//������ͼ��
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
//	assert(dest);//����:��������ͼ��
//	assert(src);
//	char* d = dest;
//	//��srcָ����ַ���������destָ��Ŀռ���ȥ,����'\0'
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
//	//����ʧ��
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
//	//const����ָ�����*���ʱ,���ε���*p,Ҳ����˵���ܸı�ָ��ָ�������,���ǿ��Ըı�ָ���ָ��
//	//const����ָ�����*�ұ�ʱ,���ε���p��Ҳ����˵ָ��p��ָ�򲻿��Ը�,����ָ��ָ������ݿ��Ը�
//	const int num = 10;
//	const int* p = &num;
//	//*p = 20;//�﷨����
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