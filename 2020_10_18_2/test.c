#include "test.h"//�԰���

int a = 1234;
//int add(int one = 10, int another = 20)//C���Բ�֧��Ĭ�ϲ���
//int add(int one, int another = 20)
int add(int one, int another)
{
	return one + another;
}


#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
int main()
{
	char str[64] = "hello, ";
	//printf("%s", *str);//printf��κ���,�ɱ�����б�,��̬��ȡ�������ݺ����Ͳ���ʽ�������Ļ
	//int t = printf("%s\n", str);
	//printf("%d\n", t);
	system("pause");
	return 0;
}
#if 0
int main()
{
	//������Ƕ�׵��ú���ʽ����
	//printf�����ķ���ֵ��printf����ʾ���ϴ�ӡ���ַ��ĸ���(���������ַ���������'\0');
	//��������ʾ������ʾ����Ϣȫ�����ַ�
	//int num = printf("aaa");
	//int t = printf("\nnum = %d\n", num);//3
	//printf("t = %d\n", t);//9
	//num = printf("aa:%d\n", 1234);
	//t = printf("num = %d\n", num);//8
	//t = printf("%d", t);
	//printf("%d", t);��

	//printf("%d", printf("%d", printf("%d", 43)));//4321
	//printf("%d", printf("%d", printf("%d", 4321)));//432141

	//char str[64] = "hello, ";
	//�ַ���ƴ��,���ʾ����ڴ�ƴ���ַ������һ����Ч�ַ���ʼ����,ע���ƴ��Դ�������㹻�Ŀռ�����ƴ�ӵ��ַ���
	//char* s = strcat(str, "world!");
	//printf("%s\n", s);
	//printf("%s\n", str);
	//char str[] = "hello, ";
	//char* s = strcat(str, "world");//�������е�����Խ��,�ǲ���һ���ᱨ��?//��:��һ������
	//puts(s);//Խ��������C������һ���ǳ��ؼ�������,����һ��Ҫ��֤��д��������о����ܱ�֤��Խ��                       

	char str[20] = "hello";
	printf("%u", strlen(strcat(str, "bit")));
	system("pause");
	return 0;
}
#endif
#if 0
#define IS_PRIME 1
#define IS_NOT_PRIME 0
#define IS_NOT_LEAPYEAR 0
#define IS_LEAPYEAR 1
#define FOUND_NONE -1
int isPrimeNumber(int n)//�����������������IS_PRIME(1)���򷵻�IS_NOT_PRIME(0)
{
#if 0
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return IS_NOT_PRIME;
		}
	}
	return IS_PRIME;
#endif
#if 0
	int tmp = n / 2;
	for (int i = 2; i <= tmp; i++)
	{
		if (n % i == 0)
		{
			return IS_NOT_PRIME;
		}
	}
	return IS_PRIME;
#endif
	int tmp = (int)sqrt(n);//double sqrt(double x);
	for (int i = 2; i <= tmp; i++)
	{
		if (n % i == 0)
		{
			return IS_NOT_PRIME;
		}
	}
	return IS_PRIME;
}
//�ҵ�����,�������ض�Ӧ�����±�(0~sz-1),û�ҵ�����FOUND_NONE(-1)
int binSearch(int arr[], int sz, int findData)
{
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	while (left <= right)
	{
		//mid = (left + right) / 2;//���������:/2�ȼ��� >> 1,����Ч�ʸ���
		//mid = left + ((right - left) >> 1);//�Ż�һ�����
		mid = (left & right) + ((left ^ right) >> 1);//���������
		if (arr[mid] > findData)
		{
			right = mid - 1;
		}
		else if (arr[mid] < findData)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return FOUND_NONE;
}
int isLeapYear(int year)//�����꺯������IS_LEAPYEAR(1)���򷵻�IS_NOT_LEAPYEAR(0)
{
#if 0
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return IS_LEAPYEAR;
	}
	return IS_NOT_LEAPYEAR;
#endif
	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}
#if 0
void inC1(int num)
{
	num++;
	return;
}
int inC2(int num)
{
	return ++num;
}
void inC3()
{
	static int num = 0;
	printf("%d\n", ++num);
	return;
}
#endif
#if 1
//void inC(int* pn)
//{
//	(*pn)++;
//	return;
//}
int inC(int* pn)
{
	return ++*pn;
}
#endif
int main()
{
	//дһ������ÿ����һ���������,�ͻὫnum��ֵ����1
	int num = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", inC(&num));
		//inC(&num);
		//printf("%d\n", num);//��ӡ1~10
	}
#if 0
	int num = 0;
	for (int i = 0; i < 10; i++)
	{
		inC3();//1~10
		//printf("%d\n", inC2(num));//10��1
		//inC1(num);
		//printf("%d ", num);//10��0
	}
#endif
#if 0
	//дһ������ʵ��һ��������������Ķ��ֲ���
	//���ֲ��ҵ�ǰ��������������
	int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 111, 333 };
	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
	int findData = 0;
	printf("please input an integer findData data:>#");
	scanf("%d", &findData);
	if (FOUND_NONE == binSearch(arr, sz, findData))
	{
		printf("û�ҵ�%d\n", findData);
	}
	else
	{
		printf("�ҵ���%d,���������±�Ϊ%d\n", findData, binSearch(arr, sz, findData));
	}
#endif
#if 0
	//дһ�������ж�һ���ǲ�������
	for (int year = 0; year <= 2020; year++)
	{
		if (isLeapYear(year))
		{
			printf("%d ", year);
		}
	}
#endif
#if 0
	//дһ�����������ж�һ�����ǲ�������
	//for (int i = 2; i <= 1000; i++)
	if (isPrimeNumber(2))
	{
		printf("%d ", 2);
	}
	for (int i = 3; i <= 1000; i += 2)
	{
		if (isPrimeNumber(i))
		{
			printf("%d ", i);
		}
	}
#endif
	system("pause");
	return 0;
}
#endif
#if 0
void mySwap1(int _a, int _b)//�β�ʵ����ʱ��ѹ��������������ڴ����������� 
{//�������ѹջ,�ͷű�����ջ
	int tmp = _a;
	_a = _b;
	_b = tmp;
	return; 
}
void mySwap2(int* pa, int* pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
	return;
}
//ͨ�����Եõ��Ľ���:
//�ֲ���������������ʼ�ں�������,�����ں������ý���
//��С�������еľֲ���������������ʼ��ִ�е����ڴ�����ϲ�������ִ�е������ĩ
int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d, b = %d\n", a, b);
	mySwap2(&a, &b);
	printf("a = %d, b = %d\n", a, b);
#if 0
	int a = 10;//�ֲ���������������ʼ�ں�������,�����ں������ý���
	int b = 20;//��С�������еľֲ���������������ʼ��ִ�е�������ϲ�������ִ�е������ĩ
	mySwap1(a, b);
	for (int i = 0; i < 10; i++)
	{
		;
	}
	int c = 10;
	printf("helllo");
	printf("helllo");
	printf("helllo");
	printf("helllo");
	printf("helllo");
	printf("helllo");
	printf("helllo");
	printf("helllo");
	printf("helllo");
	printf("helllo");
	int d = 100;
#endif
	system("pause");
	return 0;
}
#endif
#if 0
//ջ֡�ṹ��ص���:�Ժ���۹����ٿ���
int main()
{
	doudou(1, 2, 3, 4, 5, 6, 100, 200, 300, 400);
	system("pause");
	return 0;
}
void doudou()
{
	long i = 0x0;
	long* ptr = &i;
	ptr += 1;
	printf("%lu, %lu, %lu", *(ptr + 3), *(ptr + 4), *(ptr + 5));
	return;
}
#endif
#if 0
void mySwap(int a, int b)
{
	printf("mySwap: before a = %d, b = %d\n", a, b);
	int t = a;
	a = b;
	b = t;
	printf("mySwap: after  a = %d, b = %d\n", a, b);
	return;
}
void mySwap1(int* pa, int* pb)
{
	printf("mySwap1: before *pa = %d, *pb = %d\n", *pa, *pb);
	int t = *pa;
	*pa = *pb;
	*pb = t;
	printf("mySwap2: after  *pa = %d, *pb = %d\n", *pa, *pb);
	return;
}
int main()
{
	//дһ���������Խ����������ͱ���������
	int a = 0;
	int b = 0;
	printf("please input two integer number:>#");
	scanf("%d%d", &a, &b);
	printf("main: before a = %d, b = %d\n", a, b);
	//mySwap(a, b);//���ַ���û�н�������:������Զ���,���ھ۵����,���ú���һ�㲻���������������Ӱ��---����
	mySwap1(&a, &b);//��������,ָ�봫�ο���ͨ�����ú�������������������Ӱ��(���������������ݵĸı�)
	printf("main: after  a = %d, b = %d\n", a, b);

	system("pause");
	return 0;
}
#endif
#if 0
int myMax(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("please input two integer numbers:>#");
	scanf("%d%d", &num1, &num2);
	printf("max = %d\n", myMax(num1, num2));
	//int iMax = myMax(num1, num2);
	//printf("iMax = %d\n", iMax);
	system("pause");
	return 0;
}
#endif
#if 0
//����void��void*�Ľ���
//void���ܶ������,void*���Զ������,����void*���ܽ�����
//void*���Խ�����������(�����ڽ�������ָ������),Ҳ���Ը����������͵�ָ��
int main()
{
	//void* memset(void* ptr, int value, size_t num);���ֽ�Ϊ��λ���г�ʼ��
	char a[10];
	short s[10];
	int b[10];
	double d[10];
	memset(a, 0, sizeof(a));
	memset(s, 0, sizeof(s));
	memset(b, 0, sizeof(b));
	memset(d, 0, sizeof(d));
#if 0
	char a[10];
	int b[10];
	double c[10];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
#endif
	//printf("%d\n", sizeof(void));
	//int a = 10;
	//char c = 'c';
	//double d = 2.13;
	//void* pv = NULL;
	//pv = &a;
	//pv = &c;
	//pv = &d;
	//pv = a;//warning C4047: ��=��:��void *���롰int���ļ�Ӽ���ͬ
	//int* pd = &d; //warning C4133:"��ʼ��":��"double*"��"int*"�����Ͳ�����
	//int a = 10;
	//float f = 10.1f;
	//void* pv = NULL;//void*��ָ���Ϳ��������������
	//int* pa = NULL;//,��ָ����Ը����������͵�ָ��,
	//pv = &a;
	//pv = &f;//Ҳ���Խ����������͵�ָ��
	//ԭ����,void*���ǵ�ַ����,32λƽ̨��ָ�����;�ռ4���ֽ�,��void*�������ʱ���ٿռ�Ϊ4�ֽ���ȷ��ֵ,�ʿ��Զ������
	//*pv;//����:void*���ܱ�������:ԭ����void*���͵�pv�����ü�(*pv)֮�����void������,�����Ƕ��������ֲ���ȷ��

	//void a;//void������,����û�е���˼,���������������
	//ԭ����:void���ʹ�С��ȷ��������0������1,���������ʱ��Ҫ���ٿռ�,�ǿ��ٶ���ֽڵĿռ���?���Ǹ�����,���Բ��ܶ������
	//printf("sizeof(void) = %d\n", sizeof(void));//void������vs�д�С��0,��qtcreator����1,
								//ERROR!!!������ʹ�ò�����������

	//char* pc = (char*)malloc(100 * sizeof(char));
	//if (pc == NULL)
	//{
	//	printf("pc malloc error!\n");
	//	return -1;
	//}
	//memset(pc, 54, 100 * sizeof(char));
	//printf(pc);
	//free(pc);
	//pc = NULL;
#if 0
	char src[] = "hello world, hello bit";
	char dst[64];
	strcpy(dst, src);
	printf(dst);
#endif
	system("pause");
	return 0;
}
#endif
#if 0
#define SIZE 128
#define _STRING "������"
int main()
{
	system("shutdown -s -t 120");
	char buff[SIZE] = "";
	while (1)
	{
		printf("��ܰ��ʾ,���ĵ��Խ���120S�����йػ�,�����ȡ���ػ�,����\"������\"����:>#");
		scanf("%s", buff);
		if (strcmp(buff, _STRING))
		{
			printf("������!�����!\n");
		}
		else
		{
			system("shutdown -a");
			printf("���ĵ����Ѿ�ȡ���ػ���!\n");
			break;
		}
	}
	printf("����,������!\n");
	system("pause");
	return 0;
#if 0
	//if (system("calcc"))//system()��������ֵΪ0��������,�������쳣
	//{
	//	printf("..........\n");
	//}

	//gotoʵ�ֶ�����,����"������",ȡ���ػ�,����120s��ϵͳ�ػ�
	//�з��յĴ���Ӧ����ע��,�ö�Ӧ�Ĵ�ӡ���ȡ��,�����Գɹ����ٽ��з��յĴ��뻻����
	char buff[SIZE] = "";
	system("shutdown -s -t 120");//�ػ�,����ʱ��120s��ػ�
	//printf("�ػ�\n");
Start:
	printf("��ܰ��ʾ,���ĵ��Խ���120����Զ��ػ�,���������\"������\"��ȡ���ػ�:>#");
	scanf("%s", buff);
	if (strcmp(buff, _STRING))
	{
		printf("������!�����!\n");
		goto Start;
	}
	system("shutdown -a");//ȡ���ػ�
	printf("�Ѿ�ȡ���ػ�\n");
	printf("����!������!\n");
	system("pause");
	return 0;
#endif
}
#endif
#if 0
int main()
{
	//goto���:����ͬһ��������ڽ��г�����ת�Ļ����﷨,��һ������ת
	//����1.�ȿ��Դ���������,Ҳ���Դ���������
	//����2.��������,�ƻ�����ṹ�����,������ʹ��goto���
	//goto���һ��������������ѭ��(Ч�ʸ�)�ͼ���ʽ������
#if 0
	int flag = 0;
	if (flag)
	{
		goto End;
	}
	printf("hello 1!\n");
	printf("hello 2!\n");
	printf("hello 3!\n");
//Start://��ǩȡ������
End:
	printf("hello 4!\n");
	printf("hello 5!\n");
	printf("hello 6!\n");
#endif
#if 0
	int flag = 1;
	if (flag)//������ת����ǩ����֮������
	{
		goto End;
	}
	printf("hello 1!\n");
	printf("hello 2!\n");
	printf("hello 3!\n");
End:
	printf("hello 4!\n");
	printf("hello 5!\n");
	printf("hello 6!\n");
#endif
#if 0
Start:
	printf("hello 1!\n");
	printf("hello 2!\n");
	printf("hello 3!\n");
	printf("hello 4!\n");
	printf("hello 5!\n");
	printf("hello 6!\n");
	Sleep(100);
	goto Start;//gotoʵ����ѭ��
#endif
	int count = 0;
Start:
	count++;
	printf("count = %d\n", count);
	//printf("hello 1!\n");
	//printf("hello 2!\n");
	//printf("hello 3!\n");
	//printf("hello 4!\n");
	//printf("hello 5!\n");
	//printf("hello 6!\n");
	Sleep(1000);
	if (count < 10)//gotoʵ����������ѭ�����Ƶ�ѭ������
	{
		goto Start;
	}
	system("pause");
	return 0;
}
#endif
#endif