#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
//char* myStrcpy(char* dest, const char* src);
//myStrcpy�ĺ���ָ�뼰�����ĸ��ú���ָ��ĺ���ָ�������Լ�ָ���������ָ�������ָ��
//����ָ��:char*(*pfp)(char*, const char*);
//����ָ������:char*(*pfp[4])(char*, const char*);
//����ָ������ָ��:char* (*(*pfpArrP)[4])(char*, const char*) = &pfp;

//void menu()
//{
//	printf("**************************\n");
//	printf("** 1.add          2.sub **\n");
//	printf("** 3.mul          4.div **\n");
//	printf("**         0.exit       **\n");
//	printf("**************************\n");
//}
//int _add(int a, int b)
//{
//	return a + b;
//}
//int _sub(int a, int b)
//{
//	return a - b;
//}
//int _mul(int a, int b)
//{
//	return a * b;
//}
//int _div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int choice = 0;
//	int a = 0;
//	int b = 0;
//	do
//	{
//		menu();
//		printf("please input your choice:>#");
//		scanf("%d", &choice);
		//�����е�СС������
//		//printf("please input two oprands;>#");
//		//scanf("%d%d", &a, &b);
//		switch (choice)
//		{
//		case 1:
			//�����Ż�����ʵ����,���Ǵ�������̫��
//			printf("please input two oprands;>#");
//			scanf("%d%d", &a, &b);
//			printf("%d\n",_add(a, b));
//			break;
//		case 2:
//			printf("please input two oprands;>#");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", _sub(a, b));
//			break;
//		case 3:
//			printf("please input two oprands;>#");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", _mul(a, b));
//			break;
//		case 4:
//			printf("please input two oprands;>#");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", _div(a, b));
//			break;
//		case 0:
//			printf("�˳�ing...\n");
//			break;
//		default:
//			printf("your choice is wrong!\n");
//			break;
//		}
//	} while (choice);
//	system("pause");
//	return 0;
//}
//����ָ�������Ӧ��:������-ת�Ʊ�
//��������������෽��һ:
//int _add(int a, int b)
//{
//	return a + b;
//}
//int _sub(int a, int b)
//{
//	return a - b;
//}
//int _mul(int a, int b)
//{
//	return a * b;
//}
//int _div(int a, int b)
//{
//	return a / b;
//}
//int  _xor(int a, int b)
//{
//	return a ^ b;
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("** 1._add         2._sub **\n");
//	printf("** 3._mul         4._div **\n");
//	printf("** 5._xor         0.exit **\n");
//	printf("***************************\n");
//}
//int main()
//{
//	int choice = 0;
//	int a = 0;
//	int b = 0;
//	int(*pfpArr[])(int, int) = { NULL, _add, _sub, _mul, _div, _xor };
//	int sz = (int)(sizeof(pfpArr) / sizeof(*pfpArr));
//	do
//	{
//		menu();
//		printf("please input your choice:>#");
//		scanf("%d", &choice);
//		if (choice >= 1 && choice <= sz - 1)
//		{
//			printf("please input two operands:>#");
//			scanf("%d%d", &a, &b);
//			printf("%d\n", pfpArr[choice](a, b));
//		}
//		else if (0 == choice)
//		{
//			printf("exiting...\n");
//		}
//		else
//		{
//			printf("your choice is wrong! Again:\n");
//		}
//	} while (choice);
//	system("pause");
//	return 0;
//}


//��������������෽����:�ص�������
//void menu()
//{
//	printf("********************************\n");
//	printf("** 1._add              2._sub **\n");
//	printf("** 3._mul              4._div **\n");
//	printf("** 5._xor              0.exit **\n");
//	printf("********************************\n");
//}
//int _add(int a, int b)
//{
//	return a + b;
//}
//int _sub(int a, int b)
//{
//	return a - b;
//}
//int _mul(int a, int b)
//{
//	return a * b;
//}
//int _div(int a, int b)
//{
//	return a / b;
//}
//int _xor(int a, int  b)
//{
//	return a ^ b;
//}
//void Calc(int(*pfp)(int, int))
//{
//	int a = 0;
//	int b = 0;
//	printf("please input two integer oprands:>#");
//	scanf("%d%d", &a, &b);
//	printf("%d\n", pfp(a, b));
//}
//int main()
//{
//	int choice = 0;
//	do
//	{
//		menu();
//		printf("please input your choice:>$");
//		scanf("%d", &choice);
//		switch (choice)
//		{
//		case 1:
//			Calc(_add);
//			break;
//		case 2:
//			Calc(_sub);
//			break;
//		case 3:
//			Calc(_mul);
//			break;
//		case 4:
//			Calc(_div);
//			break;
//		case 5:
//			Calc(_xor);
//			break;
//		case 0:
//			printf("exiting...\n");
//			break;
//		default:
//			printf("your choice is wrong! Again:>\n");
//			break;
//		}
//	} while (choice);
//	system("pause");
//	return 0;
//}
//int _add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*pa)[10] = &arr;//ȡ������ĵ�ַ--����ָ��
//	int(*pfpArr[4])(int, int) = { _add };//pfpArr��һ����4��Ԫ��,ÿ��Ԫ����һ��ָ�������int��int,����ֵ��int�ĺ����ĺ���ָ�������
//	int(*(*pfpArrP)[4])(int, int)  = &pfpArr;
//	//pfpArrP��һ������ָ��,������ָ��ָ��һ������,��4��Ԫ��,ÿ��Ԫ����int(*)(int, int)�͵ĺ���ָ��,
//	//���ͺ���ָ��ָ��һ����ηֱ���int, int�ͷ���ֵ��int�͵ĺ���
//	system("pause");
//	return 0;
//}
//void print(const char* str)
//{
//	printf("bit:%s\n", str);
//}
//void test(void(*pfp)(const char*))
//{
//	printf("xxxxxxxxxxxxxxx\n");
//	pfp("ooooooooooooooooo\n");
//}
//int main()
//{
//	print("hello world!");
//	test(print);
//	system("pause");
//	return 0;
//}
//void print(const char* str)
//{
//	printf("hehe:%s\n", str);
//}
//int main()
//{
//	//int a = 20;
//	//int* pa = &a;
//	//*pa = 200;
//	//printf("a = %d\n", a);
//	void(*pfp)(const char*) = print;
//	(*pfp)("hello world!");
//	print("hello world!");
//	(*print)("hello world!");
//	pfp("hello world!");
//	(**pfp)("hello world!");
//	(*****************pfp)("hello world!");
//	system("pause");
//	return 0;
//}

//void print(int* pa, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", *pa++);
//	}
//	putchar(10);
//}
//void mySwap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
////ð��������
////ð��������"ֻ��"������������
////����C���Ա�׼���ṩ�Ŀ⺯��qsort���������������͵�����(Ҫ�õ��ص�����)
////�������C��׼��Ŀ⺯��qsortģ��ʵ��һ���������������������͵�ð��������
//void bubbleSort(int* pa, int len)
//{
//	int flag = 0;
//	for (int i = 0; i < len - 1; i++)
//	{
//		flag = 0;
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (pa[j] > pa[j + 1])
//			{
//				flag = 1;
//				mySwap(&pa[j], &pa[j + 1]);
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	print(arr, sz);
//	bubbleSort(arr, sz);
//	print(arr, sz);
//	system("pause");
//	return 0;
//}
#endif
#if 0
//����Ӣ������еĵ���:I like china. ==> china. like I
#include <stdio.h>
#include <math.h>
#include <string.h>
//�ַ�����ת
int reverse_str(char* begin, char* end)
{
	if (begin == NULL || end == NULL)
	{
		return -1;
	}
	while (begin < end)
	{
		char tmp = *begin;
		*begin = *end;
		*end = tmp;
		begin++;
		end--;
	}
	return 0;
}
int main()
{
	char str[100] = { 0 };
	fgets(str, sizeof(str) - 1, stdin);
	str[strlen(str) - 1] = '\0';

	char* begin = str;
	char* end = str;
	while (*end != '\0')
	{
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse_str(begin, end - 1);
		if (*end != '\0')
		{
			end++;
		}
		begin = end;
	}
	reverse_str(str, str + strlen(str) - 1);
	printf("%s\n", str);
	return 0;
}

//��С������
#if 0
int max_div_num(int max, int min)
{
	int z = 0;
	while (1)
	{
		z = max % min;
		if (z <= 0)
		{
			break;
		}
		max = min;
		min = z;
	}
	return min;
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	printf("%d\n", (a * b) / (max_div_num(a, b)));
	return 0;
}
#endif


//ˮ�ɻ�
#if 0
int main()
{
	for (int i = 1; i < 100000; i++)
	{
		int tmp = i;
		int count = 0;
		while (tmp)
		{
			count++;
			tmp = tmp / 10;
		}

		tmp = i;
		int sum = 0;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}

		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
#endif

//�������������е�Ԫ��,ʹ����ȫ��λ����������,ż��ȫ��λ��������Ҳ�
//eg. 1 2 3 4 5 ==> 1 5 3 4 2
#endif
#define _CRT_SECURE_NO_WARNINGSS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
//int _add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	////ָ������
//	//int* arr[10] = { NULL };//����ָ������,������,��10��Ԫ��,ÿ��Ԫ��ʹint*��ָ��,��ָ��ָ��һ�����ͱ���
//	////����ָ��
//	//int*(*pa)[10] = &arr;//����ָ��,��ָ��,ָ��ָ��һ������,ָ���������10��Ԫ��,��ÿ��Ԫ����int*ָ��
//	////ָ������ָ���ָ��
//	//int* (**ppa)[10] = &pa;//ppa�Ǹ�����ָ��,��ָ��ָ��һ������ָ��,����ָ��ָ��������10��Ԫ��,��ÿ��Ԫ����int*��ָ��
//	//����ָ��-��ָ��-ָ��ָ��������
//	int(*pfp)(int, int) = _add;//&_add
//	//printf("%d\n", (*pfp)(1, 2));
//	//printf("%d\n", (****************************pfp)(1, 2));
//	//printf("%d\n", _add(1, 2));
//	//printf("%d\n", pfp(1, 2));
//
//	//����ָ������-Ӧ��-ת�Ʊ�
//	int(*pfpArr[4])(int, int) = { NULL, pfp };
//	//int(*(*p)[4])(int, int) = { NULL, pfp };
//	//ָ����ָ�������ָ��-��ָ��-������ָ��
//	int(*(*ppfpArr)[4])(int, int) = &pfpArr;
//	system("pause");
//	return 0;
//}
//typedef struct stu
//{
//	char name[20];
//	int age;
//} Stu;
//void mySwap(int* pa, int* pb)
//{//��������
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//void bubbleSort(int* pa, int sz)
//{
//	//����ð��������ֻ��������������
//	//C��׼���ṩ�Ŀ⺯��qsort,��������������������
//	//qsort�㷨ԭ����quick sort
//	int flag = 0;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		//����
//		flag = 0;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			//һ��ð������
//			if (pa[j] > pa[j + 1])
//			{
//				flag = 1;
//				mySwap(&pa[j], &pa[j + 1]);
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}
//void print(int* pa, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *pa++);
//	}
//	putchar(10);
//}
//void qsort(
//	void* base,
//	size_t num,
//	size_t width,
//	int(*compare)(const void*, const void*));// /* _cdecl */_cdecl C declaration��д
//
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	//print(arr, sz);
//	Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	float f[] = { 9.0f, 8.0f, 7.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f, 0.0f };
//	int szf = (int)(sizeof(f) / sizeof(f[0]));
//	bubbleSort(arr, sz);
//	bubbleSort(f, szf);
//	//printf("after bubbleSort!\n");
//	//print(arr, sz);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//����void��void*��
//	int a = 10;
//	//int* pa = &a;
//	//char* pc = &a;//warnings
//	void* p = &a;//void*��ָ����Խ����������͵ĵ�ַ
//	//p = &pa;//void*��ָ����Խ����������͵ĵ�ַ
//	//char ch = 'w';
//	//p = &ch;//void*��ָ����Խ����������͵ĵ�ַ,ͬʱvoid*��ָ��Ҳ���Ը�ֵ���������͵�ָ��
//	//(*p);//void*��ָ�벻�ܽ�����
//	//*p = 20;//void*��ָ�벻�ܽ��н����ò���:������void*��ָ����void����,�����ֽ�����ȷ��
//	//p++;//void*��ָ�벻�ܽ��������Լ�����,��Ϊָ�����+-��������ʵ��+-������ָ��ָ������,�˴�+-������void���Ͳ�ȷ������
//	*(int*)p = 200;
//	printf("a = %d\n", a);
//	p = (int*)p + 1;
//	system("pause");
//	return 0;
//}

//qsort����ʹ��
//������������,float��������,�ַ�ָ������,�ṹ�������а���������,����������,���ɼ�����(float)
//qsort��������
//void qsort(void* base, size_t num, size_t width, int( /*_cdecl */ * comare)(const void*, const void*) );
typedef struct _Stu
{
	char name[20];
	int age;
	float mathScore;
} Stu;
int cmpInt(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void print1(int* pa, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *pa++);
	}
	putchar(10);
}
void test1()
{
	//������������
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
	qsort(arr, sz, sizeof(arr[0]), cmpInt);
	print1(arr, sz);
}
int cmpFloat(const void* e1, const void* e2)
{
	//return (int)(*(float*)e1 - *(float*)e2);
	if (*(float*)e1 > *(float*)e2)
	{
		return 1;
	}
	else if (*(float*)e1 == *(float*)e2)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}
void print2(float* pfloat, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%.2f\n", *pfloat++);
	}
}
void test2()
{
	//���򵥾��ȸ�������
	float f[] = { 9.0f, 8.0f, 7.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f, 0.0f };
	int sz = (int)(sizeof(f) / sizeof(*f));
	qsort(f, sz, sizeof(*f), cmpFloat);
	print2(f, sz);
}
int cmpCP(const void* e1, const void* e2)
{
	return (strcmp(*(char**)e1, *(char**)e2));
}
void print3(char** ppcA, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%s ", *ppcA++);
	}
	putchar(10);
}
void test3()
{
	char* cArr[] = { "APPLE", "HUAWEI", "BIT", "BAIDU", "GOOGLE", "GNU", "MICROSOFT", "IBM", "INTEL", "ORACLE" };
	int sz = (int)(sizeof(cArr) / sizeof(cArr[0]));
	qsort(cArr, sz, sizeof(*cArr), cmpCP);
	print3(cArr, sz);
}
int cmpStuName(const void* e1, const void* e2)
{
	return (strcmp(((Stu*)e1)->name, ((Stu*)e2)->name));
}
void print4(Stu* ps, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%s ", ps->name);
	}
}
void test4()
{
	Stu s[] = { { "simaguang", 45,  19.5f }, { "caocao", 59, 48.5f }, { "lishiming", 43, 23.5f }, { "liuche", 60, 55.5f } };
	int sz = (int)(sizeof(s) / sizeof(*s));
	qsort(s, sz, sizeof(*s), cmpStuName);
	print4(s, sz);
}
int main()
{
	//test1();//������������
	//test2();//���򵥾��ȸ�������
	//test3();//�����ַ�ָ������
	test4();//����ṹ���а�������
	//test5();//�ṹ���а���������
	//test6();//�ṹ���а���ѧ�ɼ�����
	system("pause");
	return 0;
}