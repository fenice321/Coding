#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//�����ϱ���д
#include <windows.h>//������Ϊ���ó�����ͣһ��,�����ǿ������
#pragma warning(disable:4996)//VS2013��ֻ����һ�ֽ������
//�����ֻ��ʶ2����
//����(�������ļ�(�ļ���Ӳ����))���е�ʱ��Ҫ�ȴ�Ӳ�̱����ص��ڴ�
//�ڴ����ж�������ı���:���������ڴ��б�����(�����ڴ�ռ�)��

//Ϊ�δ��ڱ���?
//��:�����Ĵ�����Ϊ�˺����ʹ���ڴ�

//C����û���ַ�������,C���������ַ�����/�ַ�ָ�����洢/��ʾ�ַ���

// //��C++����ע��,����ע��
// /*��C���Է���ע��,����ע��,��֧��Ƕ��*/

//int g_value = 2019;//g�ڴ������ⲿ,����ȫ�ֵ�
//{�����}
//void show()
//{
//	int a = 10;
//	printf("show run!\n");
//	return;
//}
//#define MAX 100
//#define RED 10//�궨��:1.����֪�� 2.����ά��

//ö�ٱ��������͵ļ���,��������ά������
//enum
//{	//0��ʼ
//	RED = -100, YELLOW, BLACK = 300, BLUE
//};
int main()//main�����ǳ������ں���,����ֻ��һ��
{
	char str1[16] = "bit";
	char str2[16] = { 'b', 'i', 't' };
	char str3[16] = { 'b', 'i', 't', '\0' };
	printf("%s\n", str1);//bit
	printf("%s\n", str2);//bit
	printf("%s\n", str3);//bit
	//char str[16] = "hello";
	//str[6] = 'X';
	//printf("%s\n", str);
	//printf("%s\n", "hello");
	//�ַ�������
	//"hello";
	//�ַ�����
	//'x';
	//"x";
	//"";
	//1;
	//'a';
	//printf("hello");
	//printf("%s\n", "hello");
	//C�ַ���Ĭ����'\0'��β  ('\0',0,NULL,'0')?
	//printf("%d\n", sizeof("abcd"));
	//printf("%d\n", sizeof("a"));
	//printf("%d\n", sizeof(""));

	//printf("sizeof(RED) = %d\n", sizeof(RED));//4
	//printf("%d\n", RED);
	//printf("%d\n", YELLOW);
	//printf("%d\n", BLACK);
	//printf("%d\n", BLUE);
	//const int a = 10;
	//int arr[a];//VS�в�֧��variable-length array
	//const�ؼ������εĳ�����(�г���������,�����Ǳ���)
	//��const���εı�������,�����εı������ܱ�ֱ���޸�
	//const int a = 100;
	int const a = 100;//�ȼ���const int a = 100;
	//a = 200;//a���ܱ�ֱ���޸�
	//int* p = &a;//const int*��ʧ������Ϊint*
	//*p = 200;//����޸���a
	//printf("*p = %d, a = %d\n", *p, a);
	//�������:������
	//1.���ٿռ�
	//2.д���Ӧ������
	//��ʼ��:�ռ俪�ٺ��������������������ĳ��ֵ
	//��ʼ���͸�ֵ��C������ò�����𲻴�,ʵ�������ر��(C++�п��ĳ���)
	//int a = 100;//��ʼ��
	//��ֵ:�ڶ��ν���������ֵ
	//a = 200;//��ֵ
	//printf("a = %d\n", a);
	//BLUE = 200;//����/BLUE�ǳ���,���ܱ���ֵ
	//int a = RED;
	//int b = YELLOW;
	//printf("a = %d\n", a);
	//printf("b = %d\n", b);
	//int c = RED;
	//int a = RED;
	//int b = RED;
	//int d = RED;
	//int a = MAX;
	//int a = 100;//����������д
	//printf("a = %d\n", a);
	//printf("MAX = %d\n", MAX);
	//MAX = 200;//����/���ܸ�������ֵ

	//1;
	//'A';
	//"Hello World!";//���泣���ӷֺſ��Ա��,����û��ʲô����,��Ϊ�Ҳ�����,�����޸�
	//int a = 1;
	//float pi = 3.14;
	//show();
	//int num1 = 0;
	//int num2 = 0;
	//printf("��������������: ");
	//int n = scanf("%d%d", &num1, &num2);//&������?�����ĵ�ַ
	//printf("n = %d\n", n);//����scanf�ķ���ֵ�ǳɹ�����ı����ĸ���
	//int result = num1 + num2;
	//printf("%2d + %2d = %2d\n", num1, num2, result);
	//printf("num1 = %d, num2 = %d\n", num1, num2);
	//����:������,�����ռ�,������ַ
	//�����齫ȫ�ֱ������;ֲ�����������Ϊͬ����!!!
	//��������:������ȫ�ֱ���ʱ�Ӹ�ǰ׺g_name,��ʾ��ȫ�ֱ�����global
	//int g = 2020;
	//g = 2021;
	//printf("vlaue: %d\n", g);//ȫ�ֱ������;ֲ�������������,ʹ��ʱ�ֲ���������,�ͽ�ԭ��

	//sizeof();��һ��������/�ؼ���,����������������������ռ�ֽڵĴ�С,����ֵ������size_t
	//��ͬ������������ռ�õ��ֽڴ�С�ǲ�ͬ��
	//printf("char:        %d\n", sizeof(char));//1
	//printf("short:       %d\n", sizeof(short));//2
	//printf("int:         %d\n", sizeof(int));//4
	//printf("long:        %d\n", sizeof(long));//4
	//printf("long long:   %d\n", sizeof(long long));//8
	//printf("float:       %d\n", sizeof(float));//4
	//printf("double:      %d\n", sizeof(double));//8
	//printf("long double: %d\n", sizeof(long double));//8/10/12

	//char c = 'x';
	//int i = 10;
	//double d = 3.14;//������ڲ�:�ֲ�����/��ʱ����/�Զ�����
	//printf("Hello World!\n");
	system("pause");//������Ϊ���ó�����ͣһ��,�����ǿ������
	return 0;
}