#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

#pragma warning(disable:4996)
#pragma warning(disable:6031)
int main()
{

	system("pause");
	return 0;
}
//int countOfDiffBit(int m, int n)
//{
//	int count = 0;
//	int tmp = m ^ n;//������Ӧ��������������ͬλȫ��Ϊ0��ͬλȫ��Ϊ1�洢��tmp��,Ȼ�����tmp���ֶ���1����
//	while (tmp)
//	{
//		count++;
//		tmp &= (tmp - 1);
//	}
//	return count;
//}
//int main()
//{
//	//��ҵ����:���������������в�ͬλ�ĸ���
//	//��ҵ����:���ʵ��:����int(32λ)����m��n�Ķ����Ʊ����,�ж��ٸ�λ(bit)��ͬ?
//	//��������:1999 2299
//	//�������:7
//	int m = 0;
//	int n = 0;
//	printf("please input two integer numbers:>#");
//	scanf("%d%d", &m, &n);
//	printf("%d\n", countOfDiffBit(m, n));
//	system("pause");
//	return 0;
//}
////�ú���-����
////ָ������-����-���ָ�������
////����ָ��-ָ��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	//��������-�洢����
//	//�ַ�����-�洢�ַ�
//	//ָ������-�洢ָ��
//	//int arr[10];
//	int* arr[] = { &a, &b, &c };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	int** ppa = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		//printf("%d\t", *(*ppa++));
//		printf("%d\t", *arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{//����ָ��
//	int a = 10;
//	int* pa = &a;//pa��һ��ָ��
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	printf("%d\n", **ppa);//10
//	printf("%d\n", *pa);//10
//	int b = 20;
//	*ppa = &b;
//	printf("%d\n", *pa);//20
//	printf("%d\n", **ppa);//20
//	**ppa = 30;
//	printf("%d\n", **ppa);//30
//	printf("%d\n", *pa);//30
//	printf("%d\n", b);//30
//	printf("%d\n", a);//10
//	//int*** pppa = &ppa;//pppa������ָ��
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int sz = (int)(sizeof(arr) / sizeof(*arr));
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d\t", *p++);
//	}
//	putchar(10);
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	printf("%d\t", *p++);
//	//}
//	//putchar(10);
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	printf("&arr[%d] = %p <====> p + %d = %p\n", i, &arr[i], i, p + i);
//	//}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	//arr-��Ԫ�صĵ�ַ�����������:1.sizeof(������) 2.&������
//	//�������������������ʾ������������ 1.�������������Ĵ�С 2.ȡ������������ĵ�ַ
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	//1.&arr-&������-������������Ԫ�صĵ�ַ-��������ʾ��������-&������ ȡ��������������ĵ�ַ
//	//2.sizeof(arr)-sizeof(������)-��������ʾ����������-sizeof(������)���������������Ĵ�С
//	system("pause");
//	return 0;
//}
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = values; vp < &values[N_VALUES];)
//	{//��׼�涨:ָ�������ڵ�Ԫ�ص�ָ�������ָ���������һ��Ԫ�غ�����ڴ�ռ��ָ��Ƚ�,
//		*vp++ = 0;
//	}
//	//vp = values;
//	vp -= 5;
//	for (int i = 0; i < N_VALUES; i++)
//	{
//		printf("%f\n", *vp++);
//	}
//
//	//float values[N_VALUES];
//	//float* vp;
//	//for (vp = &values[N_VALUES]; vp > values;)
//	//{//��׼�涨:ָ��������Ԫ�ص�ָ�������ָ���������һ��Ԫ�غ�����ڴ�ռ��ָ����бȽ�
//	//	//--vp;
//	//	//*vp = 0;
//	//	*--vp = 0;
//	//}
//	////vp = values;
//	//for (int i = 0; i < N_VALUES; i++)
//	//{
//	//	printf("%f\n", *vp++);
//	//}
//
//	//float values[N_VALUES];
//	//float* vp;
//	////ʵ���ھ�������������ǿ���˳����������,Ȼ�����ǵñ�������д,��Ϊ��׼������֤������
//	//for (vp = &values[N_VALUES - 1]; vp >= values; )
//	//{//��׼�涨:ָ��������Ԫ�ص�ָ�������ָ���������һ��Ԫ�غ����ڴ�ռ��ָ����бȽ�
//	//	*vp-- = 0;//���ǲ��ܺ�ָ�������һ��Ԫ��֮ǰ���ڴ�ռ��ָ����бȽ�
//	//}
//	////vp++;
//	//vp = values;
//	//for (int i = 0; i < N_VALUES; i++)
//	//{
//	//	printf("%f ", *vp++);
//	//}
//	system("pause");
//	return 0;
//}
//int myStrlen1(const char* str)//��������
//{
//	int len = 0;
//	while (*str++)
//	{
//		len++;
//	}
//	return len;
//}
//int myStrlen2(const char* str)//�ݹ���ⷨ
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return (1 + myStrlen2(str + 1));
//	}
//}
//int myStrlen3(const char* str)//ָ����ⷨ---ָ��-ָ�뷨
//{
//	const char* ph = str;
//	const char* pt = str;
//	while (*pt)
//	{
//		pt++;
//	}
//	return pt - ph;
//}
//int main()
//{
//	//strlen�⺯��---���ַ�������
//	//3�ַ���
//	//1.����������
//	//2.�ݹ鷨
//	//3.ָ�����㷨---ָ��-ָ��
//	const char* p1 = "I love China";
//	const char* p2 = "I love you";
//	const char* p3 = "Do you love me";
//	int len = 0;
//	len = myStrlen1(p1);
//	printf("len = %d\n", len);
//	len = myStrlen2(p2);
//	printf("len = %d\n", len);
//	len = myStrlen3(p3);
//	printf("len = %d\n", len);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char ch[5] = "";
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = (int)(sizeof(arr) / sizeof(*arr));
//	printf("%d\n", &arr[sz - 1] - arr);//9
//	printf("%d\n", arr - &arr[sz - 1]);//-9
//	//printf("%d\n", ch - arr);//errror ==+?  warning C4133: ��-��: �ӡ�int *������char *�������Ͳ�����
//	system("pause");
//	return 0;
//}
//#define N_VALUE 5
//int main()
//{
//	float value[N_VALUE];
//	float* vp;
//	for (vp = value; vp < &value[N_VALUE];)
//	{
//		*vp++ = 0;
//	}
//	vp = value;
//	for (int i = 0; i < N_VALUE; i++)
//	{
//		printf("%d ", *vp++);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//ָ������---ָ��+-����
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = (int)(sizeof(arr) / sizeof(*arr));
//	int* pa = &arr[9];
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d\n", *pa--);
//	}
//	//int* p = arr;
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	printf("%d ", *p); 
//	//	p += 2;
//	//}
//	//for (int i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *p++);
//	//	//printf("%d ", *p);
//	//	//p = p + 1;
//	//	//p++;
//	//}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int b = 0;
//	//int a = 10;
//	//int* pa = &a;//��ʼ��
//	//int* p = NULL;//NULL-((void*)0)������ʼ��ָ��,��ָ�븳ֵ
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;//NULLָ��Ȳ��ɶ�Ҳ����д
//	//*pa = 10;
//	if (pa != NULL)//ָ��ʹ��ǰ�����Ч��
//	{
//		*pa = 209;
//	}
//	system("pause");
//	return 0;
//}
//int* test()
//{
//	//int a = 10;
//	//return &a;//����:������һ���ֲ������ĵ�ַ
//	int arr[10] = { 0 };
//	return arr;//����:������һ���ֲ������ĵ�ַ
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);//Ұָ��Ƿ������ڴ�ռ�
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a[10] = { 0 };
//	int*p = a;
//	for (int i = 0; i <= 12; i++)
//	{
//		//*p = i;
//		//p++;
//		*p++ = i;
//		//ָ�������Խ����ʵ��µ�Ұָ������
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//δ��ʼ����ָ�����
//	int* p;//�ֲ���������ʼ�����Ĭ�Ϸŵ���һ�����ֵ
//	*p = 20;//�Ƿ����ʲ����ڴ�,p��Ұָ��
//	system("pause");
//	return 0;
//}
//��ι��Ұָ��
//1.ָ���ʼ��
//2.С��ָ��Խ��
//3.ָ��ָ��Ŀռ��ͷż���NULL
//4.ָ��ʹ��ǰ�����Ч��
//int* test()
//{
//	int a = 10;
//	return &a;//warning C4172: ���ؾֲ���������ʱ�����ĵ�ַ: a
//}
//int main()
//{
//	int* p = test();//���صĵ�ַָ��Ŀռ䱻OS����,�Ǹ�Ұָ��
//	*p = 20;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 12; i++)//ָ��Խ���������Ҳ��Ұָ��
//	{
//		*p++ = i;
//	}
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a;//�ֲ���������ʼ��,Ĭ��ֵ�����ֵ
//	int* p;//�ֲ�ָ���������ʼ��,Ĭ��ֵҲ�����ֵ--�������������ַ,ָ���ڴ��������һ�οռ�,���Ǻܿ��µ�
//	//*p = 20;//��Ұָ��Ĳ���Σ����û������
//	system("pause");
//	return 0;
//}
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))//�״���
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *p++);
//		printf("%d\n", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pi = &a;
//	char* pc = (char*)&a;
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	system("pause");
//	return 0;
//}
//int main()
//{
////	printf("%d\n", sizeof(char*));
////	printf("%d\n", sizeof(short*));
////	printf("%d\n", sizeof(int*));
////	printf("%d\n", sizeof(double*));
//	int a = 0x11223344;
//	//int* pi = &a;
//	//*pi = 0;
//	char* pc = &a;//warning C4133: ����ʼ����: �ӡ�int *������char *�������Ͳ�����
//	*pc = 0;
//	//printf("pi = %p\n", pi);
//	//printf("pc = %p\n", pc);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("*p = %d\n", *p);
//	system("pause");
//	return 0;
//}