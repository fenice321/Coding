#include "c.h"
int main()
{
	int a = 10;
	int* lp = &a;//�鿴�ڴ�lp,a,&a,&lp
	system("pause");
	return 0;
}
#if 0
void func1()
{
	printf("hello bit!\n");
	return;
}
int main()
{
	//���������Ĺؼ�����static
	//static���ξֲ�����:�����򲻱����������ڵĴ������,�������������ڴ���鵽��������
	//static����ȫ�ֱ���:�������ɿ��Կ��ļ���ֻ�ܱ��ļ�ʹ��(�ı���������),�������ڲ���
	//static���κ���:�������ɿ��Կ��ļ�ʹ�ú�����ֻ�ܱ��ļ�ʹ��(�ı���������),�������ڲ���
	printf("g_num = %d\n", g_num);
	func1();
	//char* p; �ַ�ָ��
	//1.ָ��һ���ַ�,��������ַ��ĵ�ַ
	//2.ָ�����һ���ַ���,��������ַ������׵�ַ
	//����char��������,�������ʵĲ���(���������ʼ����ֽ�)
	printf("sizeof(char*) = %d\n", sizeof(char*));//4/8
	//char*��һ������->ָ������->�ַ�ָ������
	//char��һ������->�ַ�����
	char* p = "hello";//p-->ָ�����
	printf("%s\n", p);
	
	system("pause");
	return 0;
}
#endif
#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
#pragma warning(disable:6031)//��������scanf����ֵ����������
#pragma warning(disable:4996)
int myMax(int d1, int d2)
{
	int tmp = 111;
	if (d1 < d2)
	{
		return d2;
	}
	return d1;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("please input two integer number:>#");
	scanf("%d%d", &a, &b);
	if (a < b)
	{
		printf("max = %d\n", b);
	}
	else
	{
		printf("max = %d\n", a);
	}
	int iMax = myMax(a, b);
	printf("iMax = %d\n", iMax);
//begin:
	//code(1)
	//code(2)//����һ��˳��ִ��,���ϵ���
	//for (int i = 0; i < 10; i++)
	//{
	//	//code(i)
	//}
	//code(1)
	//code(2)
	//......
	//code(9)
	//goto begin;
	//code(3)
	//code(4)
	system("pause");
	return 0;
}
#endif
#if 0
int main()
{
	//"c:\test\121",'\t'ˮƽ�Ʊ��,'\121'ת���ַ�����'\ooo'1-3λ8���������ɵĶ���ת���ַ�,����'\xaa'1-2λ16���ƹ��ɵ�ת���ַ�
	//Ϊʲô'\n','\121','\xaa','\ooo'��ֻ��һ���ַ�?
	//��:����''�������˻���˵?
	printf("%d\n", strlen("c:\test\121"));//7
	printf("%d\n", strlen("c:\\test\\121"));//11
	printf("%d\n", strlen("c:\\\test\\\121"));//9 '\\'����һ���ַ����͵�����ճ��
	printf("%d\n", strlen("c:\\\\test\\\\121"));//13
	printf("%d\n", strlen("c:\\\\\test\\\\\121"));//11

	printf("%c - %d\n", '\060', '\060');//�����пմ�"",����û�п��ַ�''
	//'\t'ˮƽ�Ʊ�� '\n'�ǻ��� '\r'�ǻس� '\b'���˸�� '\0'��0Ҳ��'\0' '\n'��10Ҳ�ǻس�  '\060'��'0'Ҳ��48
	system("pause");
	return 0;
}
#endif
#if 0
//1.����
//1.1���鶨��: ���� ������[�����С]��
//1.2����Ķ���ͳ�ʼ��:
//����+��ʼ��:���Բ�ָ������Ĵ�С,��Ϊ���������Ը��������ʼ��ʱ��Ԫ�ؼ������
//ֻ���岻��ʼ��:����ָ������Ĵ�С,���������Сָ����ʱ����Ϊ����(������Ҳ����)ֻ��Ϊ����(��Ҳ����)
//char arr[] = { 'b', 'i', 't' }; arr[0] = 'b'; arr[1] = 'i'; arr[2] = 't';
//1.3����ķ��ʴ��±�0��ʼ

//2.C�ַ���
//C�ַ�����β�������һ��'\0',��Ϊ�������
void func()
{
	//ֻ�������鲻��ʼ��ʱ����ʡ���������,��Ϊ��������֪��Ҫ���ٶ��Ŀռ�
	//int a[];//����
	//int a[4];//��ȷ

	//int n = 4;
	//int a[n];//VLA-C99��׼�ӵĲ��ܱ���ʼ��,��ֻ��һ�α䳤�Ļ��ᵫ����VS�д���
	//const int n = 4;
	//int a[n];//const int n������,����Ҳ�Ǳ���ֻ�����˳���������
	int arr[4];
	//arr = { 1, 2, 3, 4 };//���ָ�ֵ��ʽ����
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	//��������ʱ���ֳ�ʼ�����������ʡ���������,����������ݳ�ʼ����Ԫ�ظ��������ٿռ�
	//int arr[] = { 1, 2, 3, 4, 5 };
}
//3.strlen
//strlen��sizeof֮�������
//sizeof�������ռ�õ��ֽ�����,strlen��������ַ�������
//sizeof(int)
//0x0000000a
//strlen--�����ַ����ĳ���
//strlen����--strlen("aabbcceedd\0");

//ע��C������'\0'�Ǻ���Ҫ��
int main()
{
	char arr[] = { 'b','i', 't' };
	//���Ȳ�ȷ��
	//��������ĳ��Ȳ�׼ȷ,���ܵ����ڴ����(��������ڴ�պñ���������ʹ��һ�������,������ܻ����)
	//printf("%d\n", strlen(arr));
	int a = 10;
	//printf("%d\n", strlen(a));//�д���,���ش���Ϊ: -1073741819
	system("pause");
	return 0;
}
#endif
#if 0
//�ֲ�����:��һ�Ի������ڲ�����ı��������ֲ�����
//��������:�ڻ������ڲ���"������"
//ȫ�ֱ���:�ڻ��������沢��û�������������ڲ�����ı�������ȫ�ֱ���
//��������:�������,����ʼ����ȫ�ֱ����ʹ���,���������ȫ�ֱ����ű�����
//���ֲ�������ȫ�ֱ�������һ��ʱ����ʹ�þֲ�����,"�عٲ����ֹ�"
void func()
{
	int num = 20;
	printf("num = %d\n", num);
	return;
}
//ȫ�ֱ���
int num = 10;
//int g_a = 111;
int main()
{
	//�ֲ�����
	int num = 1;
	printf("num = %d\n", num);
	system("pause");
	return 0;
}
#endif
#if 0//��������,��ͬ��ע��("��֧��Ƕ�׵�ע��")
//char short int long  long long -> 1 2 4 4/8 �ֽ� -> �������� -> ����С����
//float double -> 4 8 �ֽ� -> ���������� -> ��С�����
//long����ռ�ֽ�����4/8,�����ϵͳλ���й�,Ҳ�������λ���й�,
//32bitOS��long����ռ4�ֽ�,
//64λ����ռ4/8�ֽ�,64bitOS�е���������64λlong��ռ8�ֽ�,����������32λlong��ռ4�ֽ�

//�������ɵĿ�ִ���Գ����Ƿ����:1.32λ 2.64λ
int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(long));
	printf("heheheheh...C\n");
	system("pause");
	return 0;
}
#endif