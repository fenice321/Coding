#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <assert.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
//#define ARRLEN 10
//void initArr(int* pa, int len)
//{
//	assert(pa);
//	printf("please input an integer number, 10 times:>#");
//	for (int i = 0; i < len; i++)
//	{
//		scanf("%d", &pa[i]);
//	}
//}
//void displayArr(int* pa, int len)
//{
//	assert(pa);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", *pa++);
//	}
//	putchar(10);
//}
//void setArr(int* pa, int len)
//{
//	assert(pa);
//	int left = 0;
//	int right = len - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		while ((pa[left] & 1) && (left < right))
//		{
//			left++;
//		}
//		while ((!(pa[right] & 1)) && (left < right))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = pa[left];
//			pa[left] = pa[right];
//			pa[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	//��ҵ����:��������ż��˳��
//	//��ҵ����:��������ʹ����ȫ����λ��ż��ǰ��
//	//��Ŀ:����һ����������,ʵ��һ������,�����������������ֵ�˳��
//	//ʹ�����������е�����λ�������ǰ�벿��,����ż��λ������ĺ�벿��
//	//int arr[ARRLEN] = { 0 };
//	//initArr(arr, ARRLEN);
//	//displayArr(arr, ARRLEN);
//	//setArr(arr, ARRLEN);
//	//displayArr(arr, ARRLEN);
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	displayArr(arr, sz);
//	setArr(arr, sz);
//	displayArr(arr, sz);
//	system("pause");
//	return 0;
//}
//#define SIZE 1024
//#define _STR "����: �����˹.����"
//char* myStrcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* d = dest;
//	while ((*dest++ = *src++) != '\0')
//	{
//		;
//	}
//	return d;
//}
//int main()
//{
//	//��ҵ����:ģ��ʵ�ֿ⺯��strcpy
//	//��ҵ����:strcpyʵ��
//	char arr[SIZE] = "";
//	const char* str = _STR;
//	printf("%s\n", myStrcpy(arr, str));
//	printf(myStrcpy(arr, str));
//	system("pause");
//}
#if 0
��ҵ����:������ѭ������
��ҵ����:VS����������������Ĵ��룬��ͼ����������������
int i = 0;
int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
for (i = 0; i <= 12; i++)
{
	arr[i] = 0;
	printf("hello bit\n");
}
��:�ֲ�����i�;ֲ�����arr�Ŀռ俪�ٶ�����ջ�ϵ�,������֪��һ��ĵ�ַ�ռ���ջ�ǴӸߵ�ַ��͵�ַ�·�չ��,����
������дջ�ȿ��ٱ���i�ռ��ٿ�������arr�ռ�,i�ĵ�ַ����arr����ĵ�ַ,�����������忪�ٿռ�,��С�±�Ԫ�����ڵ�ַ
���,����±�Ԫ�����ڵ�ַ���,������Ԫ���±�����,�ӵ͵�ַ���ߵ�ַ,����i�����ĵ�ַ����������ĸߵ�ַ��Ҫ��,��
ִ�д���forѭ��ʱԽ�����,C���Զ�Խ�粻��,���·���Խ���ĳ��Ԫ��ʱ���Ԫ�ؼ���Խ��Ԫ������i����,ִ�ж�����Ԫ��
��ֵΪ0�Ĳ�����ͬʱ��i(ѭ������)�����ݸĳ���0,ʹ��i<=12���ѭ�������ֳ�����,���ѭ��,ѭ������i<=12��Զ����,
��ѭ��Ҳ�Ͳ�����
#endif
#if 0
��ҵ����:strlenʵ��
��ҵ����:ģ��ʵ�ֿ⺯��strlen
#endif
#if 0
size_t myStrlen1(const char* str)
{
	assert(str);
	const char* end = str;
	while (*end)
	{
		end++;
	}
	return end - str;
}
size_t myStrlen2(const char* str)
{
	assert(str);
	size_t count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}
size_t myStrlen3(const char* str)
{
	assert(str);
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return (1 + myStrlen3(1 + str));
	}
}
int main()
{
	const char* p = "I love you!";
	printf("%u\n", myStrlen1(p));
	printf("%u\n", myStrlen2(p));
	printf("%u\n", myStrlen3(p));
	p = "";
	printf("%u\n", myStrlen1(p));
	printf("%u\n", myStrlen2(p));
	printf("%u\n", myStrlen3(p));
	system("pause");
	return 0;
}
#endif
//int main()
//{
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//int main()
//{
//	//unsigned char a = 200;
//	//unsigned char b = 100;
//	//unsigned char c = 0;
//	//c = a + b;
//	//printf("%d %d", a + b, c);
//	unsigned int a = 0x1234; 
//	unsigned char b = *(unsigned char*)(&a);
//	system("pause");
//	return 0;
//}