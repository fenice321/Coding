//����Դ�ļ��ĵ�һ��
#define _CRT_SECURE_NO_WARNINGS 1
//scanf
//strcpy
//strcat
//strlen
//....
//��Щ����C��׼���ṩ�Ŀ⺯��,��ͳ�����϶��ǲ���ȫ��
//msvc�ṩ��Ӧ��ȫ�Ľӿ�scanf_s strcpy_s strcat_s...,����Ϊ�˿�ƽ̨��/����ֲ�����ǲ�����Щ��ȫ�İ汾
//���ǲ���#define _CRT_SECURE_NO_WARNINGS 1����#pragma warning(disable:4996)�����������
#include <stdio.h>
#include <string.h>
#include <windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
int main()
{
	printf("hello bit\n");
	system("pause");
	return 0;
}
//int main()
//{
//	//int arr[10] = { 0 };//10������Ԫ�ص�����
//	//int sz = 0;
//	////10 * sizeof(int) = 40;
//	//printf("%d\n", sizeof(arr));//40
//	////���������Ԫ�ظ���
//	////���� = �����ܴ�С / ����һ��Ԫ�صĴ�С
//	//sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	//printf("sz = %d\n", sz);
//
//	//int a = 10;
//	//sizeof������Ǳ�������������ռ�ռ�Ĵ�С,��λ���ֽ�
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int);//����:�﷨����:"����"
//	system("pause");
//	return 0;
//}
//��Ŀ������--->��һ��������
//˫Ŀ������--->������������
//��Ŀ������--->������������
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b; //+ ˫Ŀ������,������������
//
//	//C���������Ǳ�ʾ���:0��ʾ��,��0��ʾ��
//	//int a = 10;
//	//printf("%d\n", a);//10
//	//printf("%d\n", !a);//0
//	//a = 0;
//	//printf("%d\n", a);//0
//	//printf("%d\n", !a);//1
//
//	int a = -2;
//	int b = -a;
//	int c = +3;//+����ͨ������¶���ʡ��
//	printf("%d\n", a);//-2
//	printf("%d\n", b);//2
//	printf("%d\n", c);//3
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a = 20;//=��ֵ    ==�ж����
//	a = a + 10;//1
//	a += 10;//2
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	//���ϸ�ֵ������
//	//+= -= *= /= %= <<= >>= ^= &= |=
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//(������λ)λ����
//	//& ��λ��
//	//^ ��λ���
//	//�����������:��Ӧ�Ķ�������ͬ��Ϊ0,��Ӧ�Ķ�����������Ϊ1
//	//| ��λ��
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("c = %d\n", c);//1
//	c = a ^ b;
//	printf("c = %d\n", c);//6
//	c = a | b;
//	printf("c = %d\n", c);//7
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//��(������λ)λ������
//	//<<����
//	//>>����
//	int a = 1;//a������ռ�ĸ��ֽ�32��bitλ-0000 0000 0000 0000 0000 0000 0000 0001
//	int b = a << 1;
//	printf("%d\n", b);//2
//	b = a << 2;
//	printf("%d\n", b);//4
//	printf("a = %d\n", a);//1,a����
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 5 / 2;//2...1
//	printf("%d\n", a);
//	a = 5 % 2;//ȡģ
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//����:һ����ͬ����Ԫ�صļ���
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; //����һ���ܴ��10���������ݵ�����
//	//0-9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);//���±�ķ�ʽ����Ԫ��:arr[�±�]
//	//char ch[20];
//	//float arr2[5];
//	system("pause");
//	return 0;
//}
//�������ص���Ǽ򻯴���,���븴��
//int Add(int x, int y)//�Զ��庯��
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	printf("please input two integer numbers:>#");//�⺯��
//	scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	//sum = a + b;
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	sum = Add(2, 3);
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int line = 0;
//	//printf("�������\n");
//	//while (line < 20000)
//	//{
//	//	printf("��һ�д���\n");
//	//	line++;
//	//}
//	//printf("��offer\n");
//	//int line = 0;
//	//while (line < 20000)
//	//{
//	//	printf("��һ�д���,�ܵ�%d�д���\n",line);
//	//	line++;
//	//} 
//	//if (line >= 20000)
//	//{
//	//	printf("��offer\n");
//	//}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��?(1/0):>#");
//	scanf("%d", &input);//1 / 0
//	if (input == 1)
//	{
//		printf("����һ����offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	system("pause");
//	return 0;
//}
//ע��:
/*C����ע�ͷ��,ȱ�ݲ���Ƕ��ע��*/
#if 0
//������������֧��Ƕ��
/*
int main()
{
	/*
	int a = 10;
	*/
	system("pause");
	return 0;
}
*/
#endif
//C++ע�ͷ��,����ע��һ��Ҳ����ע�Ͷ���
/*
int main()
{
	//\xdd 1~2λʮ�����Ʊ�ʾ��ת���ַ�

	//printf("%c\n", '\x61');//'\x61'��һ���ַ�
	//printf("%c\n", '\X61');//�澯,X��д������Ϊת������
	//���������ó��������еĶ��������ַ�
	//\ddd 1~3λ�˽��Ʊ�ʾ��ת���ַ�
	//printf("%d\n", strlen("c:\test\32\test.c"));//13
	//printf("%d\n", strlen("c:\test\132\test.c"));//13
	//printf("%d\n", strlen("c:\test\8\test.c"));//13
	//printf("%d\n", strlen("\y"));//1
	//printf("%d\n", strlen("c:\test\382\test.c"));//15
	//printf("%d\n", strlen("c:\test\328\test.c"));//14
	//printf("%d\n", strlen("c:\\test\\328\\test.c"));//18
	//printf("%d\n", strlen("c:\\\test\\\328\\\test.c"));//17
	//printf("%d\n", strlen("c:\\\\test\\\\328\\\\test.c"));//21
	//\32---32�������˽�������
	//32��Ϊ�˽��ƴ�����Ǹ�ʮ����������ΪASCII��ֵ��Ӧ���Ǹ��ַ�
	//32--->ʮ����26--->ASCII��ֵ������ַ�
	//printf("%c", '\32');
	//printf("\n");
	//printf("%c", '\132');
	system("pause");
	return 0;
}
*/
//int main()
//{
//	//VC6.0�� ??) �ᱻת���']' ---> C������������ĸ��ת�� ?? + )Ϊ�����ַ�
//	//printf("(are you ok??)\n");//vc6.0�л��ӡ��(are you ok]
//	//printf("(are you ok\?\?)\n");//vc6.0����������˴�ӡ��(are you ok??)
//	//printf("c:\test\32\test.c");
//	//printf("\n");
//	//printf("c:\\test\\32\\test.c\n");
//	//printf("%c", 'a');
//	//putchar(10);
//	//printf("%c", 'b');
//	//putchar(10);
//	//printf("%c", ''');//����
//	//printf("%c", '\'');//��ȷ
//
//	printf("%s", "abc");
//	putchar(10);
//	printf("%s", "a");
//	putchar(10);
//	//printf("%s", """);//����
//	printf("%s", "\"");//��ȷ
//	system("pause");
//	return 0;
//}
//int main()
//{
//	printf("c:\test\32\test.c");
//	//'\t'ˮƽ�Ʊ��
//	system("pause");
//	return 0;
//}
//ת���ַ�---ת��ԭ������˼
//int main()
//{
//	printf("abc\n");
//	printf("abcn");
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	char arr3[] = { 'a', 'b', 'c', '\0' };
//	//strlen--string length-�����ַ������ȵĺ���,������string.hͷ�ļ���
//	printf("%d\n", strlen(arr1));//3
//	//printf("%d\n", strlen(arr2));//3+?---���ֵ
//	printf("%d\n", strlen(arr3));//3
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//�����ڼ�����ϴ洢��ʱ��,�洢���Ƕ�����
//	//#av$
//	//a - 97
//	//A - 65
//	//...
//	//ASCII����
//	//ASCII��ֵ
//	//char arr1[] = "abc";//����
//	////"abc"---'a' 'b' 'c' '\0'==0---�ַ����Ľ�����־
//	////ע��:�ַ����Ľ�����־��һ��'\0'��ת���ַ�.�ڼ����ַ������ȵ�ʱ��'\0'�ǽ�����־,�������ַ�������
//	////'\0' == 0 / '\5' == 5
//	//printf("%d\n", '\50');//40
//	//printf("%d\n", '\0');//0
//	//printf("%d\n", '\7');//7
//	//printf("%d %c\n", '\8', '\8');//56 8
//	////'a' == 97
//	//char arr2[] = { 'a', 'b', 'c', 0 };
//	//char arr3[] = { 'a', 'b', 'c', '\0' };
//	////'a' 'b' 'c' '\0'
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	//printf("%s\n", arr3);
//	system("pause");
//	return 0;
//}
//int float
//char
//C����û���ַ�������
//��˫����(double quote)��������һ���ַ���Ϊ�ַ�������ֵ(String Literal),���߼���ַ���
//int main()
//{
//	"abcdef";
//	"hello bit";
//	"";//���ַ���
//
//	system("pause");
//	return 0;
//}
//4.ö�ٳ���
//ö��-һһ�о�
//�Ա�:��,Ů,����
//��ԭɫ:������
//����:1 2 3 4 5 6 7

//ö�ٹؼ���:enum
//enum COLOR
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//	enum COLOR c = BLUE;
//	printf("%d\n", sizeof(enum COLOR));
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(RED));
//	printf("%d\n", RED);
//	printf("%d\n", YELLOW);
//	printf("%d\n", BLUE);
//	printf("%d\n", c);//2
//	c = YELLOW;//ö�ٱ���c���Ըı�
//	printf("%d\n", c);//1
//	//BLUE = 4��//ö�ٳ��������Ը���
//	system("pause");
//	return 0;
//}
//enum Sex//������ö������
//{
//	MALE,
//	FEMALE,
//	SECRET//ö�ٳ���
//};
////MALE,FEMALE,SECRET-ö�ٳ�������ֵ��,���Ҳ��ɱ��ı��
//int main()
//{
//	enum Sex s = FEMALE;//��ö������enum Sex����ö�ٱ���s����ʼ��ΪFEMALE
//	printf("%d\n", sizeof(enum Sex));//sizeof(enum Sex) = 4;
//	printf("%d\n", sizeof(s));//sizeof(s) = 4;
//	printf("%d\n", sizeof(MALE));//sizeof(MALE) = 4;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	system("pause");
//	return 0;
//}
//3.#define����ı�ʶ������
//define->����
//#define MAX 10//MAX���ǳ���
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);//10
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//2.const���εĳ�����
//	//int num1 = 4;
//	//printf("num1 = %d\n", num1);
//	//num1 = 8;
//	//printf("num1 = %d\n", num1); 
//	//const-������
//	//const int num2 = 4;//const���α���,��������ֱ�ӱ��޸�,����һ���ĳ�����,���Ǳ������Ի��Ǳ���
//	//num2 = 8;//����:��ֵָ��const����
//	//int arr[10] = { 0 };
//	//int n = 10;
//	//int a[n] = { 0 };//����:Ӧ���볣�����ʽ
//	//const int len = 10;//len�Ǳ���,�������г�����,len���ʻ���һ������,��������˵len�ǳ�����
//	//int a[len] = { 0 };//����:Ӧ���볣�����ʽ
//	//int num = 4;
//	//3;//���泣��
//	//100;
//	//3.14;//1.���泣��
//	//'A';
//	//"China";
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("please input two integer numbers:>#");
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}