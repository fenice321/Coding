#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

#pragma warning(disable:4996)
int main()
{
	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char** cp[] = { c + 3, c + 2, c + 1 , c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	//char* a[] = { "work", "at", "alibaba" };
	//char** pa = a;
	//pa++;
	//printf("%s\n", *pa);//at
	//int a[5][5];
	//int(*p)[4];
	//p = a;
	//printf("%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFFC -4
	//int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int* ptr1 = (int*)(&aa + 1);
	//int* ptr2 = (int*)(*(aa + 1));
	//printf("%d %d\n", *(ptr1 - 1), *(ptr2 - 1));//10 5
	//int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	//int* p = a[0];
	//printf("%d\n", p[0]);//1
	//int  a[4] = { 1 ,2, 3, 4 };
	//int* ptr1 = (int*)(&a + 1);
	//int* ptr2 = (int*)((int)a + 1);
	//printf("%x, %x\n", ptr1[-1], *ptr2);
	system("pause");
	return 0;
}
#if 0
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sDa[4];
}* p;
int main()
{
	//p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);
	printf("%p\n", (struct Test*)((unsigned long)p + 0x1));
	printf("%p\n", (unsigned int*)p + 0x1);

	//int a[5] = { 1, 2, 3, 4, 5 };
	//int* ptr = (int*)(&a + 1);
	//printf("%d, %d\n", *(a + 1), *(ptr - 1));

	//int a[3][4] = { 0 };
	//printf("%d", sizeof(a));
	//printf("%d\n", sizeof(a[0][0]));
	//printf("%d\n", sizeof(a[0]));
	//printf("%d\n", sizeof(a[0] + 1));
	//printf("%d\n", sizeof(*a[0] + 1));
	//printf("%d\n", sizeof(a + 1));
	//printf("%d\n", sizeof(*(a + 1)));
	//printf("%d\n", sizeof(&a[0] + 1));
	//printf("%d\n", sizeof(*(&a[0] + 1)));
	//printf("%d\n", sizeof(*a));
	//printf("%d\n", sizeof(a[3]));
	system("pause");
	return 0;
}
#endif