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
//	//char* p = "abcdef";//"abcdef"���ַ�������,ֻ�ɶ�����д
//	//printf("%c\n", *p);
//	//printf("%s\n", p);
//	//printf(p);
//	//putchar(10);
//	//*p = 'S';//Err: Segmentation fault(core dumped):�δ���(�ڴ��㵹)
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
//ָ������ - ������ - ���ָ�������
//int main()
//{
//	int arr[10] = { 0 };//��������,��10��Ԫ��,ÿ��Ԫ����int��,������͵�����
//	char ch[5] = "";//�ַ�����,��5��Ԫ��,ÿ��Ԫ����char��,����ַ�������
//	char* parr[15] = { NULL };//�ַ�ָ������,��15��Ԫ��,ÿ��Ԫ����char*���͵�,����ַ�ָ�������
//	int* pArr[4] = { NULL };//����ָ������,��4��Ԫ��,ÿ��Ԫ����int*�͵�,�������ָ�������
//	int* (*prr)[4] = &pArr;//ָ������ָ��,ָ��ָ��һ����4��Ԫ��ÿ��Ԫ��������int*������
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
//����ָ��-��ָ��-ָ�������ָ��
//int main()
//{
//	//int* p = NULL;//p������ָ��-ָ�����͵�ָ��-���Դ�����ͱ����ĵ�ַ
//	//char* pc = NULL;//pc���ַ�ָ��-ָ���ַ���ָ��-���Դ���ַ������ĵ�ַ
//	//����ָ��-ָ�������ָ��-���Դ������ĵ�ַ
//	//int arr[10] = { 0 };
//	//arr-������������龰������Ԫ�ص�ַ������&arr[0]
//	//����sizeof(arr)��&arrʱ���Ǵ�����������,ǰ�ߴ�������������ռ�ֽ����Ĵ�С,���ߴ���ȡ��������ĵ�ַ
//	//arr-��Ԫ�صĵ�ַ
//	//&arr[0] - ��Ԫ�صĵ�ַ
//	//&arr ��������ĵ�ַ
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//arr��������int[10] ��arrȡ��ַ �ƶ�Ӧ��Ϊint[10] *p,���ǲ���,��Ӧ��int*p[10];���������͹�����ָ������,int(*p)[10]������ȷ��
//	int (*pa)[10] = &arr;//�����Ԫ��Ҫ������
//	//�����pa��������ָ��,ָ���һ����10��Ԫ��ÿ��Ԫ��������int�͵�����
//	system("pause");
//	return 0;
//
//int main()
//{
//	//����ָ���д��
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
////�����������
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
////ָ���������
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
	//�ַ�ָ��
	//char ch = 't';
	//char* p = &ch;
	//const char* p2 = "abcdef";

	//ָ������-����-���ָ�������
	//int* arr[10];
	//char* ch[5];

	//����ָ��-ָ��-ָ�������ָ��
	//int* p = NULL;//����ָ��-ָ�����͵�ָ��
	//char* p1 = NULL;//�ַ�ָ��-ָ���ַ���ָ��
	//int arr[10] = { 0 };
	//int(*pa)[10] = &arr;//����ָ��-ָ�������ָ��
	int(*parr[10])[5] = { NULL };
	system("pause");
	return 0;
}