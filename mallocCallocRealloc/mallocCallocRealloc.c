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
//	struct S arr[50];//50��struct S���͵�����
//	//30-�˷�
//	//60-����
//	system("pause");
//	return 0;
//}

//C�����ǿ��Դ����䳤����-C99��������
//gcc test.c -std=c99
int main()
{
	//���ڴ�����10�����Ϳռ�
	int* pi = (int*)malloc(/*INT_MAX*/10 * sizeof(int));
	if (NULL == pi)
	{
		//��ӡ����ԭ���һ����ʽ
		printf("Error:%s\n", strerror(errno));
		return errno;
	}
	else
	{
		//��ȷ��ʹ�ÿռ�
		for (int i = 0; i < 10; i++)
		{
			*(pi + i) = i;
		}
		for (int i = 0; i < 10; i++)
		{
			printf("%d\t", *(pi + i));
		}
	}
	//����̬����Ŀռ䲻��ʹ�õ�ʱ���Ӧ�û�������ϵͳ
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
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ��
//	free(pi);
//	pi = NULL;
//	system("pause");
//	return 0;
//}


//realloc������̬�����ڴ�ռ�Ĵ�С
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
	//������ʹ��malloc���ٳ�����40���ֽڵĿռ�
	//��������40���ֽڵĿռ䲻���������ǵ�Ҫ��
	//ϣ����������80���ֽڵĿռ�
	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�ռ�

	//realloc����ʹ��ʱע������
	//1.���pָ��Ŀռ�����㹻������Ҫ��Ŀռ����׷��,��ֱ��׷��,�󷵻�p
	//2.���pָ��Ŀռ��û���㹻������Ҫ��Ŀռ����׷��,��������һ���㹻������Ҫ���С�Ŀռ�
	//�������ɹ�,��ԭ����pָ��Ŀռ��е����ݿ�����������Ŀռ�����,Ȼ���ͷ�ԭ��pָ��Ŀռ�,�����¿��ٳ�����
	//�ռ�ĵ�ַ,�������ʧ��,�򷵻�NULLָ��,Ҫע��,��ʱԭ�ռ�û���ͷ�
	//3.����һ���µı���������realloc�����ķ���ֵ

	int* ptr = (int*)realloc(p, 20 * sizeof(int));
	if (ptr == NULL)
	{
		printf("Error:%s\n", strerror(errno));
		//����ʹ�þɵĿռ�
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
//��NULLָ��Ľ����ò���
//NULL��һ��������ڶ�,���ܶ�Ҳ����д
//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;
//	free(p);//free��ָ��ʱ,����ʲô�¶�����
//}
int main()
{
	//��NULLָ��Ľ����ò���
	//int* p = (int*)malloc(10 * sizeof(int));
	////��һ����ռ�ʧ����,p�ͱ���ֵΪNULL
	//*p = 20;//err
	//for (int i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;

	//�Զ�̬�ڴ濪�ٿռ��Խ�����
	//int* p = (int*)malloc(5 * sizeof(int));
	//if (NULL == p)
	//{
	//	printf("Error:%s\n", strerror(errno));
	//	return errno;
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;//ERR:Խ����ʶ�̬�ڴ濪�ٵĿռ�
	//}
	//free(p);
	//p = NULL;

	//�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
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
	//��һ:
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
	//����:
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

	//��һ���Աȷ�����
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