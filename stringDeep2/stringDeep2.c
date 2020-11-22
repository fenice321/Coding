#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <assert.h>
#include <string.h>
#if 0
//void* myMemcpy(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* cp = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return (cp);
//}
//void* myMemmove(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	void* cp = dest;
//	if ((dest <= src) || (dest >= (void*)((char*)src + count)))
//	{
//		//ǰ->��
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//��->ǰ
//		dest = (char*)dest + count - 1;
//		src = (char*)src + count - 1;
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest - 1;
//			src = (char*)src - 1;
//		}
//	}
//	return cp;
//}
void* myMemmove(void* dest, const void* src, size_t count)
{
	assert(dest && src);
	void* cp = dest;
	if (cp < src)
	{
		while (count--)
		{
			*(char*)cp = *(char*)src;
			cp = (char*)cp + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)cp + count) = *((char*)src + count);
		}
	}
	return (dest);
}
int main()
{
	//int arr1[] = { 1, 2, 3, 4, 5 };
	//int arr2[10] = { 0 };
	//myMemcpy(arr2, arr1, sizeof(arr1));
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr2[i]);
	//}

	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//myMemcpy(arr3 + 2, arr3, 20);
	//1 2 1 2 1 2 1 8 9 10 �ص��ڴ濽��ʧ��
	//myMemcpy��������ʵ�ֿ����ڴ��ص����龰
	
	//memmove��������ʵ�ֿ����ڴ��ص����龰
	//memmove(arr3 + 2, arr3, 20);

	//memcpy(arr3 + 2, arr3, 20);
	//VS2013/VS2019�����µ�C������msvc�е�memcpy�����ȿ���ʵ���ڴ治�ص����ֵĿ����ֿ���ʵ���ڴ��ص����ֵĿ���
	
	//C��׼�涨:memcpy�������Խ��в��ص����ڴ濽���Ϳ�����
	//���·���:VS2013/VS2019�����µ�memcpy���Դ����ڴ��ص��Ŀ���
	//myMemmove(arr3 + 2, arr3, 20);
	myMemmove(arr3, arr3 + 2, 20);
	system("pause");
	return 0;
}
#endif
#if 0
//int memcmp(const void* p1, const void* p2, size_t count);
int myMemcmp(const void* buf1, const void* buf2, size_t count)
{
	assert(buf1 && buf2);
	if (!count)
		return 0;
	while (*(char*)buf1 == *(char*)buf2)
	{
		count--;
		if (!count)
			return 0;
		buf1 = (char*)buf1 + 1;
		buf2 = (char*)buf2 + 1;
	}
	return (*(char*)buf1 - *(char*)buf2);
}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[] = { 1, 2, 3, 4, 100, 5, 7, 8, 9, 10 };
	printf("%d\n", myMemcmp(arr1, arr2, 16));//0
	printf("%d\n", myMemcmp(arr1, arr2, 17));//<0
	printf("%d\n", myMemcmp(arr2, arr1, 17));//>0
	printf("%d\n", myMemcmp(arr1, arr2, 24));//<0
	system("pause");
	return 0;
}
#endif
#if 0
//void* memset(void* ptr, int value, size_t count);
//memset�ڴ����ú���,��ʼ���ڴ�ռ�,���ֽ�Ϊ��λ

//��ʵ��memset����
void* myMemset(void* ptr, int value, size_t count)
{
	assert(ptr);
	void* ptrCpy = ptr;
	for (size_t i = 0; i < count; i++)
	{
		*(char*)ptrCpy = value;
		ptrCpy = (char*)ptrCpy + 1;
	}
	return ptr;
}
int main()
{
	//char arr[10] = "";
	//memset(arr, '#', sizeof(arr));
	int arr[10] = { 0 };
	int * p = myMemset(arr, 1, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);
	}
	putchar(10);
	system("pause");
	return 0;
}
#endif

//ʵ��memset memmove memcpy memcmp

void* myMemset(void* ptr, int value, size_t count)
{
	assert(ptr);
	void* cp = ptr;
	for (int i = 0; i < count; i++)
	{
		*(char*)ptr = value;
		ptr = (void*)((char*)ptr + 1);
	}
	return (cp);
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
	return (cp);
}
int myMemcmp(const void* buf1, const void* buf2, size_t count)
{
	assert(buf1 && buf2);
	if (!count)
		return 0;
	while (*(char*)buf1 == *(char*)buf2)
	{
		count--;
		if (!count)
			return 0;
		buf1 = (char*)buf1 + 1;
		buf2 = (char*)buf2 + 1;
	}
	return (*(char*)buf1) - (*(char*)buf2);
}
void* myMemmove(void* dest, const void* src, size_t count)
{
	assert(dest && src);
	void* cp = dest;
	if (dest <= src || dest >= (void*)((char*)src + count))
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		dest = (char*)dest + count - 1;
		src = (char*)src + count - 1;
		while (count--)
		{
			//*((char*)dest + count) = *((char*)src + count);
			*(char*)dest = *(char*)src;
			dest = (char*)dest - 1;
			src = (char*)src - 1;
		}
	}
	return (cp);
}