#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
int g_a = 10;
int main()
{
	//duration:
	//�ֲ�����������������:�����������������ڿ�ʼ,���������������ڽ���
	//ȫ�ֱ���������������:��main�����������ڵ�ͬҲ��ͬ�������������������
	{
		int a = 10;
		printf("a = %d\n", a);//correct
	}
	//printf("a = %d\n", a);//error
	system("pause");
	return 0;
}
//int main()
//{
//	//printf("g_val = %d\n", g_val);//����:δ�����ı�ʶ��
//	//����:extern�����ⲿ���ŵ�
//	extern int g_val;//scope:ȫ�ֱ���������������������
//	printf("g_val = %d\n", g_val);
//	system("pause");
//	return 0;
//}
//int global = 2020;//ȫ�ֱ���
//void func()
//{
//	printf("func()---global = %d\n", global);
//	return;
//}
//int main()
//{
//	//scope:ȫ�ֱ���������������������:�κεط���������
//	printf("%d\n", global);
//	func();
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//scope:�ֲ�������������������ڵľֲ��������ڲ�
//	{
//		int num = 10;
//		int local = 100;
//		printf("num = %d\n", num);
//	}
//	//printf("local = %d\n", local);//����,δ����ı�ʶ��local
//	int num = 0;
//	printf("num = %d\n", num);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//�����������ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��׼��ʽ�������printf-�������
//	printf("please input two integer numbers:>#");
//	//��׼��ʽ���뺯��scanf-��������
//	scanf("%d%d", &num1, &num2);//&-ȡ��ַ����
//	//C�����﷨�涨,����Ҫ�����ڵ�ǰ��������ǰ��
//	//C++�﷨֧�ֱ�������ʹ�����ﶨ��(�洦ʹ���洦����)
//	//int sum = 0;
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}
//int a = 10;//global
//int main()
//{
//	printf("%d\n", a);//10
//#if 0
//	//{
//	//	int a = 10;//local
//	//}
//	//printf("%d\n", a);//����:aδ�����ı�ʶ��
//#endif
//	system("pause");
//	return 0;
//}
//int a = 100;//global
//int main()
//{
//	printf("%d\n", a);//100
//	int a = 10;//local
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-����������bug
//	//���ֲ�������ȫ�ֱ�����������ͬ��ʱ��ֲ���������
//	printf("%d\n", a);//10
//	system("pause");
//	return 0;
//}
//int num2 = 20;//num2��ȫ�ֱ���-�����ں��������֮��{}�ı�������ȫ�ֱ���
//int main()
//{
//	int num1 = 10;//num1�Ǿֲ�����-�����ڴ�����ڲ�{}�ı��������ֲ�����
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//�������:���� ������;
//	//����
//	//20
//	short age = 20;//���ڴ�����2���ֽ�=16������λ �����洢20
//	float weight = 95.6f;//���ڴ�����4���ֽ�,���С��
//	char ch = 'w';//���ڴ�����1���ֽ�,���'w'�ַ�
//	system("pause");
//	return 0;
//}
//int main()//ByteDance/�ֽ����� ����/������Ƶ/����ͷ�� 30w+
//{
//	//������0 1
//	//�˽���0 1 2 3 4 5 6 7
//	//ʮ����0 1 2 3 4 5 6 7 8 9
//	//�������Ӳ��--ͨ��--���ź�--����/����--1/0
//	//bit-����λ-������е���С�Ĵ洢��λ
//	//һ���ֽ��ǰ˸�����λ
//	//byte-�ֽ�-������еĵ�λ-������е���С�ı�ַ��λ
//	//kb = 1024bytes
//	//mb = 1024kbs
//	//gb = 1024mbs
//	//tb = 1024gbs
//	//pb = 1024tbs
//	printf("sizeof(char)        = %d\n", sizeof(char));//1
//	printf("sizeof(short)       = %d\n", sizeof(short));//2
//	printf("sizeof(int)         = %d\n", sizeof(int));//4
//C���Ա�׼�涨sizeof(long) >= sizeof(int)
//	printf("sizeof(long)        = %d\n", sizeof(long));//4/8
//	printf("sizeof(long long)   = %d\n", sizeof(long long));//8
//	printf("sizeof(float)       = %d\n", sizeof(float));//4
//	printf("sizeof(double)      = %d\n", sizeof(double));//8
//	printf("sizeof(long double) = %d\n", sizeof(long double));//8/10
//	system("pause");
//	return 0;
//}
//char�ַ�����
//%d-��ӡ����
//%c-��ӡ�ַ�
//%f-��ӡ����������-��ӡС��
//%p-�Ե�ַ����ʽ��ӡ
//%x-��ӡʮ������
//%o-��ӡ�˽���
//int main()
//{
//	//'A';//���ڴ�����һ��ռ�������ַ�'A'
//	//char ch = 'A';//
//	//printf("%c\n", ch);//%c��ӡ�ַ���ʽ������
//	//20;
//	//short int--������
//	//int--����
//	//int age = 20;
//	//printf("%d\n", age);//%d -- ��ӡ����ʮ��������
//	//long int--������
//	//long int num = 100;
//	//printf("%d\n", num);
//	//float f = 5.0;
//	//printf("%f\n", f);
//	//double d = 3.14;
//	//��ӡdouble��������%f��ӡ�����ǿ��Ե��ǲ�����,��׼ȷ��д������%lfȥ��ӡ˫���ȸ�����
//	//printf("%f\n", d);
//	//printf("%lf\n", d);
//
//	system("pause");
//	return 0;
//}
//20
//55.5
//int main()//C�����Ǵ�main������ʼִ�е�
//{
//	printf("hehe\n");
//	system("pause");
//	return 0;
//}
//#include <windows.h>
////����һ����stdio.h��ͷ�ļ�
////std->��׼->standard io->input/output->����/���
////.h��ͷ�ļ���չ��,�����ļ�������ͷ�ļ�,h->head->ͷ
//#include <stdio.h>
//һ����������ж����Ŀ����,һ����Ŀ�����ж��.c,.h�ļ�Ҳ�ж������,��ֻ��һ��main����,
//��������ʱһ����Ŀ��������һ��.exe/a.out��ִ�����ļ�
////main����->������->C��������,����C�����main�����ĵ�һ�п�ʼִ��
//int main()//һ��������main�������ҽ���һ��
//{	
//	//�����������
//	//����Ļ�����hello world
//	//����->printf->��ӡ����/��ʽ��ӡ��� print->��ӡ f->format/function->��ʽ/����,����
//	//�⺯��-C���Ա����ṩ������ʹ�õĺ���
//	//���˵Ķ���,ʹ��ʱҪ���к�
//	//#include #Ԥ����ָ�� include���� <ͷ�ļ���.h>ϵͳ�ṩ��ͷ�ļ�������<>,�Լ���ͷ�ļ�����""����
//	//#include <stdio.h>����ͷ�ļ�
//	printf("hello ����!\n");
//	//printf("hello world!\n");
//	//printf("hello world!\n");
//	//printf("hello world!\n");
//	//printf("hello world!\n");
//	//printf("hello world!\n");
//	//printf("hello world!\n");
//	//printf("hello world!\n");
//	//printf("hello world!\n");
//	//printf("hello world!\n");
//	//printf("hello world!\n"); 
//	//printf("hehe!\n");
//	//system("pause");
//	return 0;
//}

//int �����͵���˼
//mainǰ���int��ʾ����ϵͳ����main����֮�󷵻�һ������ֵ
//int main()
//{
//	return 0;//����0(int��������)
//}

//����д���ǹ�ʱ��д��
//void main()
//{
//	return;
//}