#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
//1.Ϊʲô��ָ��?
//�������ѧУ����û������Ų���һ���˵�Ч�ʵö�ô�Ͱ�!�κ�һ�����ᶼ������ŵĴ�������˲���Ч��
//ͬ��:Ϊ�˷������,���Ч�ʺͲ���׼ȷ��,���Ǹ��ڴ��е�ÿ���ֽڶ������˱��,������ν��"���"�ڼ������
//���ǳ�֮Ϊ��ַ,��һ��ĵ�ַ�������Ե�ָ����(��������һ�����Ϸ,������������������11��1¥11��,�ҵ�֪
//����������һ��11��1¥11�޸���,�����ϳ���ȥ�Ǹ���ַ����ȥ����Ϸ),������һ��ѵ�ַ����ָ��
//ָ�� VS ָ�����
//ָ����ǵ�ַ�˴�ָ���ǳ���,����һ�����:����һ��ָ��,�˴�ָ��ָ���Ƕ�����һ������,����������ָ������,�Ǽ��
//ָ���������һ�ֱ���---�洢ָ��/��ַ�ı���
//ָ�����:Ҫ���ٿռ�,Ҫ�б�����,�б�������,�е�ַ
#define STARTYEAR 1000
#define ENDYEAR 2000
//�����жϷ���:����һ����,���겻��,�İ�������
void displayLeapYear()
{
	for (int year = STARTYEAR; year <= ENDYEAR; year++)
	{
		if (((0 == (year % 4)) && (0 != (year % 100))) || (0 == (year % 400)))
		{
			printf("leap year: %d\n", year);
		}
	}
	return;
}
int main()
{
	//��ҵ����: ��ӡ����
	//��ҵ����: ��ӡ1000�굽2000��֮�������
	displayLeapYear();
	//for (int year = STARTYEAR; year <= ENDYEAR; year++)
	//{
	//	if (((0 == (year % 4)) && (0 != (year % 100))) || (0 == (year % 400)))
	//	{
	//		printf("leap year: %d\n", year);
	//	}
	//}
	system("pause");
	return 0;
}
#define ARRLENGTH 10
int binSearch(int* pa, int len, int findData)
{
	int idx = -1;
	int l = 0;
	int h = len - 1;
	int mid = 0;
	while (l <= h)
	{
		//mid = (l + h) / 2;
		//mid = l + (h - l) / 2;
		mid = (l & h) + ((l ^ h) >> 1);
		if (pa[mid] == findData)
		{
			return mid;
		}
		else if (pa[mid] > findData)
		{
			h = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return idx;
}
int main6()
{
	//��ҵ����:���ֲ��� 
	//��ҵ����:��д������һ����������(����)�����в��Ҿ����ĳ���� 
	//Ҫ��:�ҵ��˾ʹ�ӡ�������ڵ��±�,�Ҳ��������:�Ҳ�����
	int arr[ARRLENGTH] = { 0, 1, 3, 5, 7, 9, 11, 33, 55, 77 };
	int findData = 0;
	printf("please input your findData:>#");
	scanf("%d", &findData);
	int flag = binSearch(arr, ARRLENGTH, findData);
	if (-1 == flag)
	{
		printf("�Ҳ���%d\n", findData);
	}
	else
	{
		printf("�ҵ���%d,�±�Ϊ%d\n", findData, flag);
	}
	system("pause");
	return 0;
}
int main5()
{
	//��ҵ����:�˷��ھ��� ��ҵ����:����Ļ�����9*9�˷��ھ���
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d * %d = %2d ", j, i, j * i);
		}
		//putchar(10);����:�ȼ���putchar('\n');/printf("\n");/puts("");
		putchar(10);
	}
	system("pause");
	return 0;
}
void mySwap(int* pa, int* pb)//����
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int myArrMax(int* pa, int len)
{
	int iMax = pa[0];
	for (int i = 1; i < len; i++)
	{
		if (iMax < pa[i])
		{
			mySwap(&iMax, &pa[i]);
		}
	}
	return iMax;
}
int main4()
{
//��ҵ����:�����ֵ ��ҵ����:��10 �����������ֵ
	int arr[ARRLENGTH] = { 0 };//��ʼ������
	for (int i = 0; i < ARRLENGTH; i++)//���븳ֵ
	{
		printf("please input an integer array element:>#");
		scanf("%d", &arr[i]);
	}
	int iMax = myArrMax(arr, ARRLENGTH);//�ҵ����ֵ
	printf("%d�������е����ֵ��%d\n", ARRLENGTH, iMax);
	system("pause");
	return 0;
}
#define ERR -1
int greatestComDiv(int num1, int num2)
{
	if (num1 != 0 && num2 != 0)
	{
		int r = 0;
		while (r = num1 % num2)
		{
			num1 = num2;
			num2 = r;
		}
		return num2;
	}
	else
	{
		printf("Error!\n");
		return ERR;
	}
}
int main9()
{
	//printf("%d", 1 % 0);//����:C2124������������ģ	


	int num1 = 0;
	int num2 = 0;
	printf("please input two integer numbers:>#");
	scanf("%d%d", &num1, &num2);
	int res = greatestComDiv(num1, num2);
	if (res != ERR)
	{
		printf("%d��%d�����Լ����%d\n", num1, num2, res);
	}
	else
	{
		printf("������������,����������\n");
	}
	system("pause");
	return 0;
}
int main8()
{
	//�����Լ��,��С������
	//˼·:���Լ����շת�����,��С��������������˳������Լ��
	//���Ž�:
	int num1 = 0;
	int num2 = 0;
	int r = 0;
	printf("please input two integer numbers:>#");
	scanf("%d%d", &num1, &num2);
	int n1 = num1;
	int n2 = num2;
	while (r = num1 % num2)
	{
		num1 = num2;
		num2 = r;
	}
	printf("%d��%d���Լ����%d\n", n1, n2, num2);
	printf("%d��%d��С��������%d\n", n1, n2, (n1 * n2) / num2);
	//int num1 = 0;
	//int num2 = 0;
	//int r = 0;
	//int tmp = 0;
	//printf("please input two integer numbers:>#");
	//scanf("%d%d", &num1, &num2);
	//int n1 = num1;
	//int n2 = num2;
	//if (num1 < num2)
	//{
	//	tmp = num1;
	//	num1 = num2;
	//	num2 = tmp;
	//}
	//while (num1 % num2)
	//{
	//	r = num1 % num2;
	//	num1 = num2;
	//	num2 = r;
	//}
	//printf("���Լ����%d\n", num2);
	//printf("��С��������%d\n", (n1 * n2) / num2);
	return 0;
}
int main2()
{
	//�����Լ��
	int num1 = 0;
	int num2 = 0;
	printf("please input two integer num:>#");
	scanf("%d%d", &num1, &num2);
	int tmp = 0;
	while ((tmp = num1 % num2))
	{
		num1 = num2;
		num2 = tmp;
	}
	printf("���Լ����%d\n", num2);
	//����С������:(num1 * num2) / ���Լ��; 
	//int tmp = 0;
	//if (num1 < num2)
	//{
	//	tmp = num1;
	//	num1 = num2;
	//	num2 = tmp;
	//}
	//while (num1 % num2)
	//{
	//	int r = num1 % num2;
	//	num1 = num2;
	//	num2 = r;
	//}
	//printf("���Լ����%d\n", num2);
	//int a = 0, b = 0;
	//for (a = 1, b = 1; a <= 100; a++)
	//{
	//	if (b >= 20)
	//		break;
	//	if (b % 3 == 1)
	//	{
	//		b = b + 3;
	//		continue;
	//	}
	//	b = b - 5;
	//}
	//printf("%d\n", a);
	system("pause");
	return 0;
}
int main1(void)
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'q';
	printf("ch = %c\n", ch);
	printf("sizeof(char*) = %d\n", sizeof(char*));
	printf("sizeof(short*) = %d\n", sizeof(short*));
	printf("sizeof(int*) = %d\n", sizeof(int*));
	printf("sizeof(double*) = %d\n", sizeof(double*));
	//int a = 10;
	//printf("%d\n", 10);
	//printf("%d\n", a);//��ӡa������
	//int* p = &a;
	//printf("0x%p\n", &a);
	//printf("0x%p\n", p);//��ӡp������
	//printf("*p = %d\n", *p);
	//������,��ָ�������,����ָ����ָ���"Ŀ��"�����ݻ��߿ռ�,�˴�������
	//�˴�*p����a;
	//*p = 100;//�õ���*p�Ŀռ�,ͨ��p��Ӹ���a������
	//printf("a = %d\n", a);
	//printf("*p = %d\n", *p);
	//int a = 10;
	//int b = 20;
	//a�ֱ����ʲô����
	//a = b;
	//b = a;
	//int a = 10;
	//int* p = &a;
	//int *q = &a;
	//int a = 10;
	//int b = 20;
	//int* p = &a;
	//p�ֱ����ʲô����
	//p;//�����p��ʲô��˼��?�����,Ҫ��Ͼ����ﾳ����
	//p = &b;//��ʱʹ�õ���p�Ŀռ�,p��ʱ��ָ��������Ը���һЩ,��ֵ
	//int* q = p;//��ʱʹ�õ���p�����ݵ�ַ&b,p��ʱ��ָ��/��ַ���Զ�һЩ,��ֵ
	//int a = 10;
	//a;//��:�����aָ�������ݻ��ǿռ�?
	//��	:�˴��޷��ж������ݻ��ǿռ�
	//a�ֱ����ʲô����
	//a = 20;//�˴�ʹ�õ�a�ǿռ�,��ֵ
	//int b = a;//��a�����ݳ�ʼ���ն���ı���b,�˴�ʹ�õ�a������,��ֵ
	//int* a = NULL;//#define NULL (void*)0
	//char* b = NULL;
	//double* c = NULL;
	//printf("sizeof(a) = %d\n", sizeof(a));//32λ�����κ����͵�ָ�붼��4�ֽ�
	//printf("sizeof(b) = %d\n", sizeof(b));
	//printf("sizeof(c) = %d\n", sizeof(c));
	//int a = 10;
	//int b = 20;//�����˿ռ�
	//int* p = &a;//����ָ��(����)����ʼ��:Ҫ���ٿռ�4�ֽ�,�б�����p,�б�������&a,�б�����ַ&p(int**����)
	system("pause");
	return 0;
}
//#define MAX 1234
//#define add(a, b) a + b
//#define ADD(x, y) ((x) + (y))
//int main()
//{//д�����ʱ��ҪӲ�������泣��
//	//int i = MAX;
//	//printf("i = %d\n", i);
//	printf("%d\n", add(10, 20));
//	printf("%d\n", 10 * add(10, 20));
//	printf("%d\n", ADD(10, 20));
//	printf("%d\n", 10 * ADD(10, 20));
//	system("pause");
//	return 0;
//}
//ע��:������ͬ�ļ��л��ǲ�ͬ�ļ��к����ȵ��ú�����Ա���ͨ��,ֻ�����о���,����������ȡ������
//��������ʹ�ú���������ͨ�������������Ա���ͨ��
//extern void show();//��������Ҳ������extern
//static void show1()
//{
//	printf("hello bit!\n");
//}
//int main()
//{
//	show1();
//	show();
//	system("pause");
//	return 0;
//}
//static int g_val1 = 4321;
//extern int g_val;//extern��"ͨ�����",extern���������ͺ���,��������ʱֻ������ȫ�ֱ���
//int main()
//{
//	extern int g;
//	printf("g_val = %d\n", g_val);
//	printf("g_val1 = %d\n", g_val1);
//	printf("g = %d\n", g);
//	system("pause");
//	return 0;
//}
//int g = 10;
//int* pa;
//void test()
//{//��������ֻ���ʼ��һ��,���ǿ��Ա���θ�ֵ
//  //static���ξֲ������������ڱ��ȫ�ֵ�,����������ֻ�ڱ����������Ч
//	//static���ξֲ���������ͳ��ĳ������ʷ�ϱ������˶��ٴ�,����������Ż�����
//	static int i = 0;//10��1��1-10
//	pa = &i;
//	i++;
//	printf("%d\n", i);
//	return;
//}
//int main()
//{
//	//for (int j = 0; j < 10; j++)
//	//{
//	//	test();
//	//	//printf("%d\n", i);//����
//	//}
//	//printf("*pa = %d\n", *pa);
//	//test();
//	system("pause");
//	return 0;
//}