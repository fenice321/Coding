#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	//float a = 5.5f;
//	double a = 5.5;
//	
//	system("pause");
//	return 0;
//}
int main()
{
	int n = 9;
	float* pFloat = (float*)(&n);
	printf("n = %d\n", n);//9
	printf("*pFloat = %f\n", *pFloat);//
	*pFloat = 9.0f;
	printf("n = %d\n", n);//
	printf("*pFloat = %f\n", *pFloat);//9.000000
	system("pause");
	return 0;
}
//int main()
//{
//	char arr1[] = "abc";
//	int arr2[10] = { 1, 3, 4, 5, 6, 7, 4, 3, 3, 3 };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", sizeof(arr2));//40
//	printf("%d\n", strlen(arr2));//1
//	system("pause");
//	return 0;
//}
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world!\n");//��ѭ��
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//��ѭ��
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	char b = 128;
//	printf("%u\n", b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a = %d, b = %d, c = %d\n", a, b, c);//-1 -1 255
//	system("pause");
//	return 0;
//}
//#define BIG_ENDIAN 0
//#define SMALL_ENDIAN 1
//typedef union _un
//{
//	int in;
//	char ch;
//} Un;
//int checkSysEndian()
//{
//	Un u;
//	u.in = 0x1;
//	if (u.ch == 0x1)
//	{
//		return SMALL_ENDIAN;
//	}
//	else
//	{
//		return BIG_ENDIAN;
//	}
//}
//int main()
//{
//	//дһ��С�����жϵ�ǰ������С��
//	int ret = checkSysEndian();
//	if (ret == BIG_ENDIAN)
//	{
//		printf("�����!\n");
//	}
//	else
//	{
//		printf("С����!\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	//int* p = &a;
//	//*p = 0;
//	char* pc = (char*)(&a);
//	*pc = 0;
//	system("pause");
//	return 0;
//}
//#define BIG_ENDIAN 0
//#define SMALL_ENDIAN 1
//int checkSysEndian()
//{
//	int data = 0x11223344;
//	if (*((char*)(&data)) == 0x44)
//	{
//		return SMALL_ENDIAN;
//	}
//	else
//	{
//		return BIG_ENDIAN;
//	}
//}
//int checkSysEndian()
//{
//	int data = 0x1;
//	//����1->С����
//	//����0->�����
//	//ָ�����͵�����:
//	//1.ָ�����;�����ָ������ò������ܷ��ʼ����ֽ�:char*p;*p����1���ֽ�,int*p,*p����4���ֽ�
//	//2.ָ�����;�����ָ��+1/-1,�ӵ�/�����Ǽ����ֽ�,char*p, p+1����1���ֽ�,int*p, p+1����һ������4���ֽ�
//	return *((char*)(&data));
//}
//int main()
//{
//	//дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
//	//int ret = checkSysEndian();
//	//if (ret == SMALL_ENDIAN)
//	//{
//	//	printf("С����!\n");
//	//}
//	//else
//	//{
//	//	printf("�����!\n");
//	//}
//	int ret = checkSysEndian();
//	if (ret == 1)
//	{
//		printf("С����!\n");
//	}
//	else
//	{
//		printf("�����!\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 20;
//	int b = -10;
//	int x = 0x11223344;
//	system("pause");
//	return 0;
//}
//void test()
//void test(void)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	//test();
//	//test(100);//�������·���
//	test(100);//warning:��test��: �á�void�������б�����
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;//4
//	float b = 10.0;//4
//	short c;
//	short int d;//short == short [int]
//	system("pause");
//	return 0;
//}