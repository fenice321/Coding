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
	//����ָ��-ָ��-ָ�������ָ��
	//����ָ��-ָ��-ָ������ָ��

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
//	//����ָ�봫��
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
//	//һ��ָ�봫��
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
//	//һά���鴫��
//	//int arr[10] = { 0 };
//	//int* arr2[20] = { 0 };
//	//test1(arr);
//	//test2(arr);
//	//test3(arr);
//	//test4(arr2);
//	//test5(arr2);
//	//test6(arr2);
//	//��ά���鴫��
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
//	//�ַ�ָ��
//	//char ch = 'w';
//	//char* p = &ch;
//	//*p = 't';
//	//printf("%c\n", ch);
//	//const char* p = "abcdefg";
//	//ָ������-����-���ָ�������
//	//int* arr[10];
//	//char* ch[5];
//	//����ָ��-ָ��-ָ�������ָ��
//	//int* p3;//����ָ��-ָ�����͵�ָ��
//	//char* p4;//�ַ�ָ��-ָ���ַ���ָ��
//	//int arr2[5];//����
//	//int(*p2)[5] = &arr2;//ȡ������ĵ�ַ,pa����һ������ָ��
//	//int(*parr3[10])[5];
//	system("pause");
//	return 0;
//}
//����һ�¶���ĺ���
//int arr[5];
//��:��ʾ����һ����������,��������5��Ԫ��,ÿ��Ԫ����int��
//int *parr1[10];
//��:��ʾ����һ������ָ������,��������10��Ԫ��,ÿ��Ԫ����int*��
//int(*parr2)[10];
//��:��ʾ����һ������ָ��,������ָ��ָ��һ����10��int��Ԫ�ص�����
//int(*parr3[10])[5];
//��:��ʾ����һ����10��Ԫ��,ÿ��Ԫ����ָ��һ����5��int�����������ָ���ָ������
//void print1(int arr[3][5], int x, int y)
//{//�������������ʽ
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
//{//����������ָ����ʽ
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
//	//print1(arr, 3, 5);//arr-����������������Ԫ�ص�ַ-��int[5] arr[3]�е���Ԫ�ص�ַ��int[5]*��ָ��-int(*)[5]��
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
//����ָ����ָ��-ָ������ĵ�ָ��
//int main()
//{
//	//int* p = NULL;//p������ָ��-ָ�����ε�ָ��-���Դ�����εĵ�ַ
//	//char* pc = NULL; //pc���ַ�ָ��-ָ���ַ���ָ��-���Դ���ַ��ĵ�ַ
//	////����ָ��-ָ�������ָ��-���Դ������ĵ�ַ
//	//int arr[10] = { 0 };
//	//arr-���������������¾���������׵�ַ���ȼ���&arr[0]
//	//����&arr�е�arr������������,&arr��˼������������ĵ�ַ
//	//sizeof(arr);�е�arr�����Ҳ����������,sizeof(arr)��˼������������Ĵ�С
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int (*p)[10] = &arr;//����ĵ�ַ������
//	//�����p��������ָ��,ָ��10��Ԫ��ÿ��Ԫ����int�͵������ָ��
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
//ָ�������������������ָ���
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ�������-ָ������
//	char* pch[6];//����ַ�ָ�������-ָ������
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
//	const char* p = "abcdef";//"abcdef"��һ�������ַ���
//	//*p = 'w';//�δ���
//
//	printf("%s\n", p);
//	//printf("%c\n", *p);
//	//printf("%s\n", p);
//	//www.stackoverflow.com
//	//Segmentation fault(core dump)�δ���,�ڴ��㵹
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

//��ҵ����:��������ż��˳��
//��ҵ����:��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ:����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�
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
//	//��ҵ����:strcpyʵ��
//	//��ҵ����:ģ��ʵ�ֿ⺯��strcpy
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
//	//��ҵ����:strlenʵ��
//	//��ҵ����:ģ��ʵ�ֿ⺯��strlen
//	const char* pc = "I love you!";
//	printf("%d\n", myStrlen(pc));
//	system("pause");
//	return 0;
//}