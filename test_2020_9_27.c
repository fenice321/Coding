#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
/*
��VC��Sleep�еĵ�һ��Ӣ���ַ�Ϊ��д��"S"�ڱ�׼C����sleep(S��Ҫ��д),����ʹ�ô�д����˵��,
������ʲô������ʲô������.�򵥵�˵VC��Sleep,���һ��ʹ��sleep.
Sleep������һ����ʽ:Sleep(unsigned long);
����,Sleep()����ĵ�λ,���Ժ���Ϊ��λ,����������ú�������1��Ļ�,Ӧ����Sleep(1000);
��Linux��,sleep�е�"s"����д
sleep()��λΪ��,usleep()����ĵ�λ��΢��.���ں���,sleep��ʵ������pause������alarm��������ʵ�ֵ�.
�ر�ע����Codeblocks���������޷�ʹ��sleep������,
��Ϊ��windows��Codeblocks����mingw(Gnu��Window�����µı�����,
���Գ��ʹ��WindowsApi)��Ϊ������,����stdlib.h��sleep��˵������:
_CRTIMP void __cdecl __MINGW_NOTHROW _sleep (unsigned long) __MINGW_ATTRIB_DEPRECATED;
������Ϊmingw������sleep����,������Sleepʵ��sleep.
1�� ����10^3����
1�������10^3΢��
1΢�����10^3����
1�������10^3Ƥ��
*/
//#define MAX 600

//����ֵ ������(�β�, �β�, �β�...)
//{
//	//�����Ĵ���
//}
//myAddС�շ�,MyAdd���շ�
//int myAdd(int x, int y)//д���������������,д������������
//{					   //�����������һ����һ������ѧ
//	int result = x + y;//��Ҫʲô,��дʲô,�ҵ�ʲô
//	return result;
//	//return x + y;
//}
//myAdd(int x, int y)//C����ʡ�Ժ�������ֵ���Ա����,������������ֵĬ����int����,���Ƽ�����д
//{
//	int result = x + y;
//	return result;
//}
int myAdd(int x, int y)
{
	int result = x + y;
	return result;
}
int mySub(int x, int y)
{
	int result = x - y;
	return result;
}
int myMul(int x, int y)
{
	int result = x * y;
	return result;
}
int myDiv(int x, int y)
{
	int result = x / y;
	return result;
}
int main()
{
	//vs��.sln�ļ����ش���͹�����Ŀ
	//printf("\x66\n");
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("please input two data:>#");
		scanf("%d%d", &x, &y);
		//printf("%d + %d = %d\n", x, y, myAdd(x, y));//ʹ�ú���:����
		char op = 'x';
		printf("please input your op:<+-*/>#");
		scanf(" %c", &op);
		if ('+' == op)
		{
			printf("%d + %d = %d\n", x, y, myAdd(x, y));
		}
		else if ('-' == op)
		{
			printf("%d - %d = %d\n", x, y, mySub(x, y));
		}
		else if ('*' == op)
		{
			printf("%d * %d = %d\n", x, y, myMul(x, y));
		}
		else if ('/' == op)
		{
			if (0 != y)
			{
				printf("%d / %d = %d\n", x, y, myDiv(x, y));
			}
			else
			{
				printf("Div Zero! Error!\n");
			}
		}
		else
		{
			//TODO
			printf("your input op Error!\n");
		}
	}
	//int result = x + y;
	//printf("%d + %d = %d\n", x, y, result);
	//int i = 0;
	//do
	//{
	//	printf("bit\n");
	//	i++;
	//} while (1);
	//int i = 0;
	//while (0)//һ��bitҲ����ӡ
	//{
	//	printf("bit\n");
	//	i++;
	//}
	//int i = 0;
	//do
	//{
	//	printf("bit\n");
	//	i++;
	//} while (0);//��ӡһ��bit
	//int i = 0;
	//do
	//{
	//	printf("bit\n");
	//	i++;
	//} while (i < 10);//��ִ��,���ж�
	//for (;;)//for����ѭ��,for(;;)�ȼ���while (1)
	//{
	//	printf(".");
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("i: %d\n", i);
	//	Sleep(1000);
	//}
	//int i = 0;
	//for (i = 1; i < 10; i++)
	//{
	//	printf("i: %d\n", i);
	//	Sleep(1000);
	//}
	//int i = 0;
	//for (; i < 10; i++)
	//{
	//	printf("i: %d\n", i);
	//	Sleep(1000);
	//}
	//for (��������; �����ж�; ��������)
	//{
	//	//��ִ�еĴ���
	//}
	//printf("�������");
	//int line = 0;
	//Sleep(3000);
	//while (line <= MAX)
	//{
	//	printf("coding...\n");
	//	line++;
	//}
	//if (line > MAX)
	//{
	//	printf("���������߷�!\n");
	//}
	//1. while (1.�������� 2.�����ж� 3.��������)
	//2. while (���) 1.ִ��()�ڲ������õ���� 2.�ж�
	//3. while (1)��ѭ��
	//int i = 1;//��������
	//while (i <= 10)//�����ж� 1.��ִ���ڲ��������� 2.�ٽ���whileѭ���ж�
	//{
	//	printf("i = %d\n", i);
	//	i = i + 1;//i += 1; i++; ++i;//��������
	//	Sleep(1000);//Sleep();������λ�Ǻ���,1��=1000����=1000000΢��=1000000000����
	//}
	//while (1)//while����ѭ��.while (1)�ȼ���for (;;)
	//{
	//	printf(".");
	//}
	//while (����[�仯��])
	//{
	//	//ִ�ж�Ӧ�����
	//}
	//printf("%d\n", 11 == 11);//1
	//printf("%d\n", 11 == 10);//0

	//bool true/false C����û��bool����
	//1.if() {} else {},��ʶ��()����ı��ʽ,�õ����(1,0),Ȼ�����ж�
	//2.==����д��=,����д������0 == x����ʽ
	//3.if(0),if(1)д���������,����һ�㲻����д,ǰ�߿�������ע�ʹ���(���Ƽ�)
	//int select = 0;
	//while (1)
	//{
	//	printf("����û�кú�coding��?<0:yes 1:int 2:no>#");
	//	scanf("%d", &select);
	//	if (0 == select)
	//	{
	//		printf("��ϲ,�����õ��õ�offer!\n");
	//	}
	//	else if (1 == select)
	//	{
	//		printf("��ϲ,�����ú�offer��·��!\n");
	//	}
	//	else
	//	{
	//		printf("��Ǹ......!\n");
	//	}
	//}
	//if (����)
	//{
	//	//��������
	//	//ִ�иô�����еĴ���
	//}
	//else
	//{
	//	//����������
	//	//ִ�иô�����еĴ���
	//}
	//char c = '\'';
	//printf("%c\n", c);
	//7:0~6
	//2:0~1
	//8:0~7
	//16:0 1 2 3 4 5 6 7 8 9 a b c d e f
	//\x3f����\xdd����ʮ�����Ƶ�ת���ַ�
	//11->1*10+1
	//11->1*2^1+1*2^0->3
	//3f->3*16^1+15*16^0->48+15->63
	//printf("\c");//c
	//putchar(10);
	//printf("%d\n", sizeof("\c"));//2
	//printf("%d\n", strlen("\c"));//1
	//printf("%d\n", sizeof("\t"));//2
	//printf("%d\n", strlen("\t"));//1
	/*C���ע��,����ע��,����֧��Ƕ��*/
	//C++���ע��,����ע��
	//����ʹ��C++����ע��,�Ƚ�����һЩ
	//printf("%d\n", sizeof("abcdef"));//7/�ַ�����С
	//printf("%d\n", strlen("abcdef"));//6/�ַ�������
	//\32����������Ϊһ��ת���ַ�'\32',ռһ���ַ����Ⱥʹ�С
	//printf("%d\n", strlen("c:\test\328\test.c"));//14
	//printf("%c\n", '\'');
	//printf("%c\n", '\"');
	//printf("%s\n", "\'");
	//printf("%s\n", "\"");
	//printf("\'");
	//printf("\"");
	//printf("c:\code\test.c\n");
	//ת��:�����⺬��ת����ͨ������߰���ͨ����ת�����⺬��
	//printf("��\n��\n");
	//printf("��n��\n");//ת���ַ�
	//printf("��\��\n");//����/��������ת��
	//printf("��\\��\n");
	//char str1[] = "bit";
	//printf("sizeof(str1) = %d\n", sizeof(str1));
	//char str2[] = { 'b', 'i', 't' };
	//char str3[] = { 'b', 'i', 't', '\0' };
	//printf("%s\n", str1);
	//printf("%s\n", str2);
	//printf("%s\n", str3);
	//char str1[16] = "bit";
	//char str2[16] = { 'b', 'i', 't' };
	//char str3[16] = { 'b', 'i', 't', '\0' };
	//printf("%s\n", str1);
	//printf("%s\n", str2);
	//printf("%s\n", str3);
	//"hello bit";
	//char str[16] = "hello bit!";
	//printf("%s\n", str);
	//printf("%d\n", sizeof(""));
	system("pause");//���Ǳ����,������Ϊ�˱��ڹ۲�,���ô�������
	return 0;
}

//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));//8 10 12 14 
//	}
//}