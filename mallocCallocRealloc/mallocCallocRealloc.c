#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#if 0
typedef struct _S
{
	char name[20];
	int age;
} S;
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct S arr[50];//50个struct S类型的数组
//	//30-浪费
//	//60-不够
//	system("pause");
//	return 0;
//}

//C语言是可以创建变长数组-C99中增加了
//gcc test.c -std=c99
int main()
{
	//向内存申请10个整型空间
	int* pi = (int*)malloc(/*INT_MAX*/10 * sizeof(int));
	if (NULL == pi)
	{
		//打印错误原因的一个方式
		printf("Error:%s\n", strerror(errno));
		return errno;
	}
	else
	{
		//正确的使用空间
		for (int i = 0; i < 10; i++)
		{
			*(pi + i) = i;
		}
		for (int i = 0; i < 10; i++)
		{
			printf("%d\t", *(pi + i));
		}
	}
	//当动态申请的空间不再使用的时候就应该还给操作系统
	free(pi);
	pi = NULL;
	system("pause");
	return 0;
}
#endif

#if 0
//int main()
//{
//	//malloc(10 * sizeof(int));
//	int* pi = (int*)calloc(10, sizeof(int));
//	if (NULL == pi)
//	{
//		printf("Error:%s\n", strerror(errno));
//		return errno;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\t", *(pi + i));
//	}
//	//释放空间
//	//free函数是用来释放动态开辟的空间的
//	free(pi);
//	pi = NULL;
//	system("pause");
//	return 0;
//}


//realloc调整动态靠谱内存空间的大小
int main()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (NULL == p)
	{
		printf("Error:%s\n", strerror(errno));
		return errno;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
		//printf("%d\t", *(pi + i));
	}
	//就是在使用malloc开辟出来的40个字节的空间
	//假设这里40个字节的空间不能满足我们的要求
	//希望我们能有80个字节的空间
	//这里就可以使用realloc来调整动态开辟的内存空间

	//realloc函数使用时注意事项
	//1.如果p指向的空间后有足够的满足要求的空间可以追加,则直接追加,后返回p
	//2.如果p指向的空间后没有足够的满足要求的空间可以追加,则新申请一块足够的满足要求大小的空间
	//如果申请成功,则将原来的p指向的空间中的数据拷贝到新申请的空间中来,然后释放原来p指向的空间,返回新开辟出来的
	//空间的地址,如果申请失败,则返回NULL指针,要注意,此时原空间没有释放
	//3.得用一个新的变量来接收realloc函数的返回值

	int* ptr = (int*)realloc(p, 20 * sizeof(int));
	if (ptr == NULL)
	{
		printf("Error:%s\n", strerror(errno));
		//继续使用旧的空间
		free(p);
		p = NULL;
		return errno;
	}
	p = ptr;
	for (int i = 10; i < 20; i++)
	{
		p[i] = i;
	}
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", p[i]);
	}
	free(p);
	p = NULL;
	system("pause");
	return 0;
}
#endif

#if 0
//对NULL指针的解引用操作
//NULL是一个计算机黑洞,不能读也不能写
//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;
//	free(p);//free空指针时,函数什么事都不做
//}
int main()
{
	//对NULL指针的解引用操作
	//int* p = (int*)malloc(10 * sizeof(int));
	////万一申请空间失败了,p就被赋值为NULL
	//*p = 20;//err
	//for (int i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;

	//对动态内存开辟空间的越界访问
	//int* p = (int*)malloc(5 * sizeof(int));
	//if (NULL == p)
	//{
	//	printf("Error:%s\n", strerror(errno));
	//	return errno;
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;//ERR:越界访问动态内存开辟的空间
	//}
	//free(p);
	//p = NULL;

	//对非动态开辟内存使用free释放
	int a = 10;
	int* p = &a;
	*p = 20;
	free(p);
	p = NULL;
	system("pause");
	return 0;
}
#endif
#if 0
int main()
{
#if 0
	//法一:
	char* p = (char*)malloc(100 * sizeof(char));
	if (p == NULL)
	{
		printf("p malloc err:%s\n", strerror(errno));
		return errno;
	}
	printf(strcpy(p, "abcdefg"));
	char* ptr = (char*)realloc(p, 1000 * sizeof(char));
	if (ptr == NULL)
	{
		printf("ptr realloc err%s\n", strerror(errno));
		//
		printf(strcat(p, "china"));
		free(p);
		p = NULL;
		return errno;
	}
	p = ptr;
	printf(strcat(p, "ajkl;fffffffffffffffffffffffffffffffsdhjklasdfh;aklhjkjl;fdjkl;jkl;jkl;jkl;faaaa\
	aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaask"));
	free(p);
	p = NULL;
#endif
	//法二:
	char* p = (char*)malloc(100 * sizeof(char));
	if (NULL == p)
	{
		printf("p malloc err%s\n", strerror(errno));
		return errno;
	}
	printf(strcpy(p, "CHIAN"));
	char* ptr = (char*)realloc(p, 1000 * sizeof(char));
	if (ptr != NULL)
	{
		p = ptr;
	}
	printf(strcat(p, "CHIANCHIANCHIANCHIANCHIANCHIANCHIANCHIANCHIANCHIANCHIANCHIANCHIANCHIANCHIANCHIANCHIAN\
	CHIANCHIANCHIANCHIANCHIANCHIANCHIANCHIANCHIANCHIANCHIANCHIANCHIAN"));
	free(p);
	p = NULL;

	//法一明显比法二好
	system("pause");
	return 0;
}
#endif

#if 0
void mySwap(char* buf1, char* buf2, size_t width)
{
	char tmp = 0;
	for (size_t i = 0; i < width; i++)
	{
		tmp = buf1[i];
		buf1[i] = buf2[i];
		buf2[i] = tmp;
	}
}
void myBubbleSort(void* base, size_t num, size_t width, int (*cmp)(const void*, const void*))
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
		if (flag == 0)
			break;
	}
}
#endif