#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
//�򵥵�������ָ���ַ�������ϰ��ϼ�
//int main()
//{
//	//���������׵�ַ
//	//1.sizeof(������)-��������ʾ��������
//	//2.&������-��������ʾ��������
//	//һά����
//	//int a[] = { 1, 2, 3, 4 };
//	//printf("%d\n", sizeof(a));//16
//	//printf("%d\n", sizeof(a + 0));//4/8
//	//printf("%d\n", sizeof(*a));//4
//	//printf("%d\n", sizeof(&*a));//4/8
//	//printf("%d\n", sizeof(a + 1));//4/8
//	//printf("%d\n", sizeof(a[1]));//4
//	//printf("%d\n", sizeof(&a));//4/8
//	//printf("%d\n", sizeof(*&a));//16
//	//printf("%d\n", sizeof(&a + 1));//4/8
//	//printf("%d\n", sizeof(&a[0]));//4/8
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8
//	//�ַ�����
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1));//4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	//printf("%d\n", strlen(arr));//���ֵ
//	//printf("%d\n", strlen(arr + 0));//���ֵ
//	//printf("%d\n", strlen(*arr));//err �����˷Ƿ���ַ0x61
//	//printf("%d\n", strlen(arr[1]));//err �����˷Ƿ���ַ0x62
//	//printf("%d\n", strlen(&arr));//���ֵ
//	//printf("%d\n", strlen(&arr + 1));//���ֵ
//	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ
//
//	//char arr[] = "abcdef";
//	//char(*p)[7] = &arr;
//	//printf("%d\n", strlen(*p));//6
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//4/8
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4/8
//	//printf("%d\n", sizeof(&arr + 1));//4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err �Ƿ�������0x61���ĵ�ַ
//	//printf("%d\n", strlen(arr[1]));//err �Ƿ�������0x62���ĵ�ַ
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr + 1));//err �Ƿ��������ַ��������һ��Ԫ�غ�����ڴ�ռ�
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//	//char* p = "abcdef";
//	//printf("%d\n", sizeof(p));//4/8
//	//printf("%d\n", sizeof(p + 1));//4/8
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(*p + 1));//4
//	//printf("%d\n", sizeof(p[0]));//1
//	//printf("%d\n", sizeof(&p));//4/8
//	//printf("%d\n", sizeof(&p + 1));//4/8
//	//printf("%d\n", sizeof(&p[0] + 1));//4/8
//	
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err �Ƿ����ʵ�ַ0x61
//	//printf("%d\n", strlen(p[0]));//err �Ƿ����ʵ�ַ0x61
//	//printf("%d\n", strlen(&p));//err �Ƿ����ʵ�ַ
//	//printf("%d\n", strlen(&p + 1));//err �Ƿ����ʵ�ַ
//	//printf("%d\n", strlen(&p[0] + 1));//5
//
//	//int a[3][4] = { 0 };
//
//	//printf("%d\n", sizeof(a));//48
//	//printf("%d\n", sizeof(a[0][0]));//4
//	//printf("%d\n", sizeof(a[0]));//16
//	//printf("%d\n", sizeof(a[0] + 1));//4/8
//	//printf("%d\n", sizeof(*(a[0] + 1)));//4
//	//printf("%d\n", sizeof(a + 1));//4/8
//	//printf("%d\n", sizeof(*(a + 1)));//16
//	//printf("%d\n", sizeof(&a[0] + 1));//4/8
//	//printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	//printf("%d\n", sizeof(*a));//16
//	//printf("%d\n", sizeof(a[3]));//16
//	//printf("%d\n", 0x01 << 2 + 3);
//	system("pause");
//	return 0;
//}
//ָ�뷽�泣��������
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//} *p;
//int main()
//{
//	printf("%p\n", p + 0x1);//00000014
//	printf("%p\n", (unsigned long)p + 0x1);//00000001
//	printf("%p\n", (unsigned int*)p + 0x1);//00000004
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x, %x", ptr1[-1], *ptr2);//4, 2000000
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//1
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//fffffffc, -4
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d, %d", *(ptr1 - 1), *(ptr2 - 1));//10, 5
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char* a[] = { "work", "at", "alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	system("pause");
//	return 0;
//}
int main()
{
	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char** cp[] = { c + 3, c + 2 , c + 1, c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	system("pause");
	return 0;
}