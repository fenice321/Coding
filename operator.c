#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(-c));//4
	printf("%u\n", sizeof(!c));//1
	system("pause");
	return 0;
}
//int main()
//{
//	char a = 0xb6;     //1011 0110
//	short b = 0xb600;  //1011 0110 0000 0000
//	int c = 0xb6000000;//1011 0110 0000 0000 0000 0000 0000 0000
//	if (a == 0xb6)
//	{
//		printf("a");
//	}
//	if (b == 0xb600)
//	{
//		printf("b");
//	}
//	if (c == 0xb6000000)
//	{
//		printf("c");
//	}
//	//��ӡc
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//��ʽ����ת��:��������
//	char a = 3;
//	char b = 127;
//	char c = 0;
//	c = a + b;
//	printf("c = %d\n", c);//-126
//	system("pause");
//	return 0;
//}
//ѧ��
//int float 
//����һ���ṹ������-struct Stu
//typedef struct _Stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//} Stu;
//int main()
//{
//	int a = 10;
//	//ʹ��Stu������ʹ�����һ��ѧ������s1,����ʼ��
//	Stu s1 = { "����", 20, "20202020" };
//	Stu* ps = &s1;
//	printf("%s, %d, %s\n", (*ps).name, (*ps).age, (*ps).id);
//	//(*�ṹ��ָ��).��Ա��;
//	printf("%s, %d, %s\n", ps->name, ps->age, ps->id);
//	//�ṹ��ָ��->��Ա��;
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	//�ṹ�����.��Ա��
//	system("pause");
//	return 0;
//}
//int myMax(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//���ú�����ʱ��()���Ǻ������ò�����
//	int iMax = myMax(a, b);//�˴�()Ϊ�������ò����� 
//	printf("iMax = %d\n", iMax);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = (a > b, a = b + 10, a, b = a + 1);
//	////���ű��ʽ�����ö��Ÿ����Ķ�����ʽ.���ű��ʽ(Ҳ��˳����ֵ���ʽ,�������Ǹ��ӱ��ʽ����������ȼ�����),
//	////ֻ�Ǵ�����������ִ��,�������ʽ�Ľ�������һ�����ʽ�Ľ��
//	//printf("c = %d\n", c);//13
//
//	//if (a = b + 1, c = a / 2, d > 0)
//
//	//a = get_val();
//	//count_val(a);
//	//while (a > 0)
//	//{
//	//	//ҵ����
//	//	a = get_val();
//	//	count_val(a);
//	//}
//
//	//�ö����������дΪ����ı��ʽ
//	//while (a = get_val(), count_val(a), a > 0)
//	//{
//	//	//ҵ����
//	//}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int max = 0;
//	//if (a > b)
//	//{
//	//	max = a;
//	//}
//	//else
//	//{
//	//	max = b;
//	//}
//	//printf("max = %d\n", max);
//	//int x = 10;
//	//int y = 20;
//	//int max = 0;
//	//max = ((x > y) ? x : y);
//	//printf("max = %d\n", max);
//
//	//int a = 0;
//	//int b = 0;
//	//if (a > 5)
//	//{
//	//	b = 3;
//	//}
//	//else
//	//{
//	//	b = -3;
//	//}
//	//printf("b = %d\n", b);
//
//	//int a = 0;
//	//int b = 0;
//	//b = ((a > 5) ? 3 : -3);
//	//printf("b = %d\n", b);
//	int num1 = 1;
//	int num2 = 2;
//	printf("%d\n", num1 & num2);//0
//	printf("%d\n", num1 | num2);//3
//	printf("%d\n", num1 ^ num2);//3
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int i = 0, a = 1, b = 2, c = 3, d = 4;
//	////i = a++ && ++b && d++;
//	////printf("i = %d\na = %d\n b = %d\n c = %d\nd = %d\n", i, a, b, c, d);//1 2 3 3 5
//	//i = a++ || ++b || d++;
//	//printf("i = %d\na = %d\n b = %d\n c = %d\nd = %d\n", i, a, b, c, d);//1 2 2 3 4
//
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("i = %d\na = %d\n b = %d\n c = %d\nd = %d\n", i, a, b, c, d);//1 1 3 3 4
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	//int x = ++a;
//	//printf("x = %d\n", x);//11
//	//int y = --a;
//	//printf("y = %d\n", y);//10
//
//	//int a = 10;
//	//int x = a++;
//	//printf("x = %d\n", x);//10
//	//int y = a--;
//	//printf("y = %d\n", y);//11
//	//int a = 5;
//	//int b = 3;
//	//int c = a && b;
//	//printf("c = %d\n", c);
//	//b = 0;
//	//c = a && b;
//	//printf("c = %d\n", c);
//	int a = 5;
//	int b = 3;
//	int c = a || b;
//	printf("c = %d\n", c);//1
//	b = 0;
//	c = a || b;
//	printf("c = %d\n", c);//1
//	a = 0;
//	c = a || b;
//	printf("c = %d\n", c);//0
//	b = 3;
//	c = a || b;
//	printf("c = %d\n", c);//1
//	system("pause");
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//	return;
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//	return;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);//4
//	test2(ch);//4
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	char* p = NULL;
//	//printf("%d\n", !2);//0
//	//printf("%d\n", !0);//1
//	//a = -a;
//	p = &a;
//	printf("a = %d\n", a);//-1
//	printf("*p = %d\n", *p);//-1
//	*p = 32;
//	printf("a = %d\n", a);//-224
//	printf("*p = %d\n", *p);//32
//	printf("sizeof(*p) = %d\n", sizeof(*p));//1
//	//printf("sizeof(char*) = %d\n", sizeof(char*));//4
//	//printf("sizeof(int*) = %d\n", sizeof(int*));//4
//	//printf("sizeof(p) = %d\n", sizeof(p));//4
//	//printf("sizeof(NULL) = %d\n", sizeof(NULL));//4
//	//printf("sizeof(a) = %d\n", sizeof(a));//4
//	//printf("sizeof(int) = %d\n", sizeof(int));//4
//	//printf("sizeof(char) = %d\n", sizeof(char));//1
//	//printf("sizeof a = %d\n", sizeof a);//4
//	//printf("sizeof int = %d\n", sizeof int);//err
//	//printf("sizeof char = %d\n", sizeof char);//err
//	//int a = -10;
//	//int* p = NULL;
//	//printf("%d\n", !2);//0
//	//printf("%d\n", !0);//1
//	//a = -a;
//	//p = &a;
//	//printf("a = %d\n", a);//10
//	//*p = 20;
//	//printf("a = %d\n", a);//20
//	//printf("*p = %d\n", *p);//20
//	//printf("sizeof(*p) = %d\n", sizeof(*p));//4
//	//printf("sizeof(int*) = %d\n", sizeof(int*));//4
//	//printf("sizeof(p) = %d\n", sizeof(p));//4
//	//printf("sizeof(NULL) = %d\n", sizeof(NULL));//4
//	//printf("sizeof(a) = %d\n", sizeof(a));//4
//	//printf("sizeof(int) = %d\n", sizeof(int));//4
//	//printf("sizeof a = %d\n", sizeof a);//4 ����:sizeof���������ʱ����()����ʡ��
//	//printf("sizeof int = %d\n", sizeof int);//����:sizeof����������ʱ����()������ʡ��
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	//printf("%d\n", ++a);//ǰ��++,��++��ʹ��
//	//printf("%d\n", a);
//	//int b = 10;
//	//printf("%d\n", b++);//����++,��ʹ�ú�++
//	//printf("%d\n", b);
//	int a = 3.14; //warning C4244: ����ʼ����: �ӡ�double��ת������int�������ܶ�ʧ����
//	int b = 3.14f;//warning C4244: ����ʼ����: �ӡ�float��ת������int�������ܶ�ʧ����
//	int c = (int)3.14;//����,��������
//	//int d = int(3.14);//����,(����)
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 11;
//	printf("a = %d\n", a);
//	a |= (1 << 2);
//	printf("a = %d\n", a);
//	a &= (~(1 << 2));
//	printf("a = %d\n", a);
//	//0000 0000 0000 0000 0000 0000 0000 1011
//	//0000 0000 0000 0000 0000 0000 0000 0100 |
//	//0000 0000 0000 0000 0000 0000 0000 1111
//
//	//0000 0000 0000 0000 0000 0000 0000 0100 ~
//	//1111 1111 1111 1111 1111 1111 1111 1011
//	//0000 0000 0000 0000 0000 0000 0000 1111 &
//
//	//0000 0000 0000 0000 0000 0000 0000 1011
//	//int a = 0;
//	//printf("%d\n", a);//0
//	//printf("%d\n", ~a);//-1
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//short s = 0;
//	//int a = 10;
//	////sizeof(s = a + 5);��a������,5������,������Ҳ������,s�Ƕ�����,�����ض�,sΪ�������ֽ���Ϊ2
//	////sizeof�ڲ��ı��ʽ������"����"����,ֻ��һ������
//	//printf("%d\n", sizeof(s = a + 5));//2
//	//printf("%d\n", s);//0
//	//int a = 0;
//	//char ch = 'w';
//	//int arr[10] = { 0 };
//	//printf("sizeof(a) = %d\n", sizeof(a));//4
//	//printf("sizeof(int) = %d\n", sizeof(int));//4
//
//	//printf("sizeof(ch) = %d\n", sizeof(ch));//1
//	//printf("sizeof(char) = %d\n", sizeof(char));//1
//
//	//printf("sizeof(arr) = %d\n", sizeof(arr));//40
//	//printf("sizeof(int[10]) = %d\n", sizeof(int[10]));//40
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//��ҵ����:��ӡ���������Ƶ�����λ��ż��λ
//	//��ҵ����:��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//
//	//��ҵ����:���������������в�ͬλ�ĸ���
//	//��ҵ����:���ʵ��:����int(32λ)����m��n�Ķ����Ʊ����,�ж��ٸ�λ(bit)��ͬ?
//	//��������:1999 2299
//	//�������:7
//	
//
//		
//
//		
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);//9 23 8
//	system("pause");
//	return 0;
//}
//int getCountOfNumberOneStart(int* pnum)
//{//�򵥵�ʵ��,ֻ�ܼ��������Ķ�������1�ĸ���,���ڸ�������
//	int count = 0;
//	while (*pnum)
//	{
//		if ((*pnum) % 2 == 1)
//		{
//			count++;
//		}
//		(*pnum) /= 2;
//	}
//	return count;
//}
//int getCountOfNumberOneMid(int* pnum)
//{
//	//int count = 0;
//	//for (int i = 0; i < 32; i++)//����ʵ��,�ȽϷ���,����ѭ�������е��,�����Ż�
//	//{
//	//	if (((*pnum) >> i) & 1)
//	//	{
//	//		count++;
//	//	}
//	//}
//	//return count;
//
//	int count = 0;//����ʵ��,�ȽϷ���,����ѭ�������е��,�����Ż�
//	int i = 0;
//	while (i < 32)
//	{
//		if ((*pnum) & (1 << 31))
//		{
//			count++;
//		}
//		(*pnum) <<= 1;
//		i++;
//	}
//	return count;
//}
//int getCountOfNumberOneEnd(int* pnum)
//{//ѭ����������,���ǱȽ����뵽
//	int count = 0;
//	while (*pnum != 0)
//	{
//		count++;
//		(*pnum) &= ((*pnum) - 1);
//	}
//	return count;
//}
//int main()
//{
//	//��ҵ����:ͳ�ƶ�������1�ĸ���
//	//��ҵ����:дһ���������ز����������� 1 �ĸ���.
//	//����:15    0000 1111    4 �� 1
//	int num = 0;
//	int count = 0;
//	printf("please input an integer number:>#");
//	scanf("%d", &num);
//	count = getCountOfNumberOneStart(&num);
//	printf("count = %d\n", count);
//	printf("please input an integer number:>#");
//	scanf("%d", &num);
//	count = getCountOfNumberOneMid(&num);
//	printf("count = %d\n", count);
//	printf("please input an integer number:>#");
//	scanf("%d", &num);
//	count = getCountOfNumberOneEnd(&num);
//	printf("count = %d\n", count);
//	system("pause");
//	return 0;
//}
//void mySwapStart(int* pa, int* pb)
//{//�����˵���������,����������,���ǿɶ��Ժ�Ч�ʸ�,һ��ʹ�õ����
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//	return;
//}
//void mySwapMid(int* pa, int* pb)
//{//���������������,��������,�ɶ��Խϲ����������,һ��ʹ�õ�Ҳ����
//	*pa = *pa + *pb;
//	*pb = *pa - *pb;
//	*pa = *pa - *pb;
//	return;
//}
//void mySwapEnd(int* pa, int* pb)
//{//����������������,��������,������ɽ�λ���,���ǿɶ��Բ�,Ч��Ҳ����,һ��ʹ�õĲ���
//	*pa ^= *pb;
//	*pb ^= *pa;
//	*pa ^= *pb;
//	return;
//}
//int main()
//{
//	//��ҵ����:����������������������ʱ������
//	//��ҵ����:����������ʱ������������������������
//	int a = 0;
//	int b = 0;
//	printf("please input two integer numbers:>#");
//	scanf("%d%d", &a, &b);
//	printf("before: a = %d, b = %d\n", a, b);
//	mySwapStart(&a, &b);
//	printf("after : a = %d, b = %d\n", a, b);
//	mySwapMid(&a, &b);
//	printf("after : a = %d, b = %d\n", a, b);
//	mySwapEnd(&a, &b);
//	printf("after : a = %d, b = %d\n", a, b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* pc = &c;
//	int arr[10] = { 0 };//������:arr,����Ҳ�������͵�:ȥ��������ʣ�µľ�����������--int[10]
//	//int a[3][4] = { 0 };//������:a,����������int[3][4]
//	//sizeof�������������/����/����/...��ռ�ռ�Ĵ�С,��λ���ֽ�
//	//ע��:sizeof���Ǻ���,�ǲ�����/�ؼ���,������Ҫ������,
//	//��һ,sizeof()��������ſ���ʡ��,����������ʱ���Ų���ʡ��
//	//���,sizeof��������Լ���������sizeof(int),�������������(ʵ��)������Ϊ����
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof int);//����
//	//printf("%d\n", sizeof(pc));//4
//	//printf("%d\n", sizeof pc);//4
//	//printf("%d\n", sizeof(char*));//4
//	//printf("%d\n", sizeof char*);//����
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof arr);//40
//	printf("%d\n", sizeof(int[10]));//40
//	//printf("%d\n", sizeof int[10]);//����
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;//&ȡ��ַ������
//	*p = 20;//*�����ò�����
//	printf("*p = %d\n", *p);
//	printf("a = %d\n", a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = -5;
//	printf("a = %d\n", a);
//	a = -a;
//	printf("a = %d\n", a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int weight = 120;
//	//weight = 89;
//	//double salary = 10000.0;
//	//salary = 20000.0;
//	//printf("weight = %d, salary = %lf\n", weight, salary);
//	//int a = 10;
//	//int x = 0;
//	//int y = 20;
//	//a = x = y + 1;
//	//printf("a = %d, x = %d, y = %d\n", a, x, y);
//	//x = y + 1;
//	//a = x;
//	//printf("a = %d, x = %d, y = %d\n", a, x, y);
//
//	//int x = 10;
//	//x = x + 10;
//	//x += 10;
//	//printf("x = %d\n", x);
//
//	//int a = 10;
//	//a = a + 2;
//	//a += 2;
//	//printf("a = %d\n", a);//14
//	//a = a >> 1;
//	//a >>= 1;
//	//printf("a = %d\n", a);//3
//
//	int a = 10;
//	printf("a = %d\n", !a);//a = 0
//	printf("a = %d\n", !!a);//a = 1
//	printf("a = %d\n", a);//a = 10
//	a = 0;
//	printf("a = %d\n", !a);//a = 1
//	printf("a = %d\n", !!a);//a = 0
//
//	if (a)
//	{
//		printf("hehe\n");
//	}
//	if (!a)
//	{
//		printf("heihei\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//��ϰ:��д����ʵ��:��һ�������洢���ڴ��еĶ�������1�ĸ���
//
//	//��һ:����10������ⷽ��,����ֻ�ܽ��һ��������,���������޷����
//	//int num = 0;
//	//int count = 0;
//	//printf("please input an integer number:>#");
//	//scanf("%d", &num);
//	//while (num)
//	//{
//	//	if (1 == (num % 2))
//	//	{
//	//		count++;
//	//	}
//	//	num /= 2;
//	//}
//	//printf("��������1�ĸ�����---%d\n", count);
//
//	//����:���ݵײ�������:����������,���Ǳ���ѭ��32��,�ܷ��Ż���?
//	//int num = 0;
//	//int count = 0;
//	//printf("please input an integer number:>#");
//	//scanf("%d", &num);
//	//for (int i = 0; i < 32; i++)
//	//{
//	//	if (1 == ((num >> i) & 1))
//	//	{
//	//		count++;
//	//	}
//	//}
//	//printf("count = %d\n", count);
//
//	//����:�ײ����ݹ���,�����ܺ�,�ﵽ���Ż�Ч�����������뵽
//	int num = 0;
//	int count = 0;
//
//	printf("please input an integer number:>#");
//	scanf("%d", &num);
//	while (num != 0)
//	{
//		count++;
//		num &= num - 1;
//	}
//	printf("count = %d\n", count);
//	system("pause");
//	return 0;
//}
#if 0
int main()
{
	//int num1 = 1;
	//int num2 = 2;
	//printf("%d\n", num1 & num2);//0
	//printf("%d\n", num1 | num2);//3
	//printf("%d\n", num1 ^ num2);//3

	//���ܴ�����ʱ����(����������),ʵ���������Ľ���

	//��һ:�������������:��˵����������,���Ǹ÷�����������Ҫ��
	//���ǹ������ճ�ʹ�þ���ʹ��,ԭ����Ҫ�ж�,��һ,�ɶ��Ժ�,���,Ч�ʽϸ�
	//int a = 3;
	//int b = 5;
	//int tmp = 0;
	//printf("before: a = %d, b = %d\n", a, b);
	//tmp = a;
	//a = b;
	//b = tmp;
	//printf("after : a = %d, b = %d\n", a, b);

	//����:�����������������ɽ���,�������ֽ���������,������������������ܴ�ʱ,��������½����������Ԥ��
	//int a = 3;
	//int b = 5;
	//printf("a = %d, b = %d\n", a, b);
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("a = %d, b = %d\n", a, b);

	//����:�ײ����ݹ���ʵ�������������ݽ���,��Ϊû�в�����λ,���Բ������������,�������������,����ֻ���ڱ���ʱ���Թٰ���,
	//�÷��õĲ���,ȱ����Ҫ������,��һ,�ɶ��Բ�,���,Ч�ʽϵ�
	//int a = 3;
	//int b = 5;
	//printf("a = %d, b = %d\n", a, b);
	//a = a ^ b;
	//b = a ^ b;
	//a = a ^ b;
	//printf("a = %d, b = %d\n", a, b);

	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	////i = a++ && ++b && d++;
	////printf("i = %d\n", i);//0
	////printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	////a = 1
	//// b = 2
	//// c = 3
	////d = 4

	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ || ++b || d++;
	//printf("i = %d\n", i);//1
	//printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	////a = 1
	//// b = 2
	//// c = 3
	////d = 5
	system("pause");
	return 0;
}
#endif
//int main()
//{
//	//^ & |
//	//ע��:���ǵĲ���������������,��Ϊ����Ǹ������洢��ʽ�����Ͳ�ͬ�ò�����ȷ�Ľ��,�ɴ�Ͳ�������������������������
//	//&-��������λ��
//	//int a = 3;
//	//int b = 5;
//	//int c = a & b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101&
//	//00000000000000000000000000000001
//	//1
//	//printf("c = %d\n", c);//1
//
//	//|-��������λ�� 
//	//int a = 3;
//	//int b = 5;
//	//int c = a | b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101 |
//	//00000000000000000000000000000111 
//	//7
//	//printf("c = %d\n", c);//7
//
//	//^-��������λ���
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101 ^
//	//00000000000000000000000000000110
//	//6
//	printf("c = %d\n", c);//6
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//ע��:>> <<�������Ʋ�����������ֻ��������,��Ϊ�������洢�����ʹ洢��ͬ,ǿ�н��и������Ļ�Ҳֻ�����
//	int a = 5;
//	int b = a << 1;//���Ʋ�����,������λ����,��߶���,�ұ߲�0
//	printf("b = %d\n", b);//10
//	int c = 10;
//	//printf("%d\n", c >> -1);//����:������λ������,��Ҫ�ƶ�����λ,����Ǳ�׼δ�����
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	printf("%d\n", a >> 2);//-1
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//<< >>
//	//>>���Ʋ�����
//	//��Ϊ:
//	//��������:��λ��ʧ,��λ��1/0(���Ǹ�����ʱ�����λΪ1,��λ��1,����������ʱ�����λΪ0,��λ��0)
//	//�߼�����:��λ��ʧ,��λֱ�Ӳ�0
//	//16->00000000000000000000000000010000
//	int a = 16 >> 1;
//	printf("a = %d\n", a);//16 >> 1 === /2 = 8
//	int b = -1 >> 1;
//	//-1->11111111111111111111111111111111
//	printf("b = %d\n", b);//-1,˵������������������,������˵��������λ��ʽ,������ͨ������������������s
//	printf("%d\n", 16 >> 2);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 5 / 2;//��2��1
//	printf("a = %d\n", a);
//	a = 5 % 2;
//	printf("a = %d\n", a);
//	double d = 5 / 2.0;
//	printf("d = %lf\n", d);
//	//d = 5 % 2.0;//����:%����������������������
//	system("pause");
//	return 0;
//}