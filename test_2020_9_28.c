#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}
//int main() 
//{
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	if (i = 5)//��ѭ����ӡ5
//	//		printf("%d ", i);
//	//	Sleep(100);
//	//}
//	//printf("%d\n", func(1));//0
//	//int x = 3;
//	//int y = 3;
//	//switch (x % 2) 
//	//{
//	//case 1:
//	//	switch (y)
//	//	{
//	//	case 0:
//	//		printf("first");
//	//	case 1:
//	//		printf("second");
//	//		break;
//	//	default: printf("hello");
//	//	}
//	//case 2:
//	//	printf("third");
//	//}//hellothird
//	return 0;
//}
//C��������ֵû�д�,��ϵͳĬ�Ϸ�������������,���Ǿ��Բ�׼����C�����ķ���ֵ
//����ֻ���ڱ����õ�ʱ��Żᱻ����,���������ڲ���������ʱ������������
//�����ڵ��õ�ʱ��,���������Ҫ�������β�ʵ����,Ҳ����˵��������Ҫ�γɲ����Ŀ���
//myAdd(int _a, int _b)
//{
//	int _res = _a + _b;
//	return _res;
//}
//�����������붨��
//int myAdd(int _a, int _b)//��ʽ����
//{
//	printf("after: _a: %d, _b: %d\n", _a, _b);
//	printf("after: _a: %p, _b: %p\n", &_a, &_b);
//	int _res = _a + _b;
//	return _res;
//}
//int myAdd()//int myAdd(void)�޲�������дҲ����
//{
//	return 0;
//}
//#define SIZE 5
//int main1()
//{
//	int data = 0;
//	printf("please input an integer data:>#");
//	scanf("%d", &data);
//	//if (data % 2 == 0)
//	//	printf("%d ��ż��\n", data);
//	//else
//	//	printf("%d ������\n", data);
//	//if (1 & data)//�µ��ж�����ż������,1&��Ҫ�жϵ���,�õ��Ľ����0����ż��,��1��������
//	//{
//	//	printf("%d ������\n", data);
//	//}
//	//else
//	//{
//	//	printf("%d ��ż��\n", data);
//	//}
//	system("pause");
//}
//int myMax(int x, int y)
//{
//	return x > y ? x : y;//��Ŀ����� 
//
//	//if (x > y)
//	//{
//	//	return x;
//	//}
//	//else
//	//{
//	//	return y;
//	//}
//	//if (x > y)
//	//{
//	//	return x;
//	//}
//	//return y;
//}
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//#define SIZE 3
//void mySort(int* pa, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (pa[i] < pa[j])
//			{
//				pa[i] = pa[i] ^ pa[j];
//				pa[j] = pa[i] ^ pa[j];
//				pa[i] = pa[i] ^ pa[j];
//			}
//		}
//	}
//	return;
//}
//int main()
//{
//	int arr[SIZE];
//	printf("please input SIZE integer datas:>#");
//	for (int i = 0; i < SIZE; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("before sort!\n");
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	mySort(arr, SIZE);
//	printf("\nafter sort!\n");
//	for (int i = 0; i < SIZE; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//int get_max(int num1, int num2)
//{
//	if (num1 > num2)
//	{
//		return num1;
//	}
//	else
//	{
//		return num2;
//	}
//}
//typedef unsigned long long int un_llint;
//void show(void)
//{
//	int i = 0;//i����ʱ����������ʱ��
//	i++;
//	printf("i = %d\n", i);
//	return;
//}
void show()
{
	//static�����ξֲ�������ʱ����������������:
	//1.scope������:�ڱ����������Ч,��static������������򲻱�
	//2.duration��������:��ʱ��,static������ñ������������ڱ��ȫ������
	//3.ע������:int i = 0;�����������ʼ��,�κ�һ��������ֻ���ʼ��һ��!!!
	//��:static int i = 0;�������ִֻ��һ��
	static int i = 0;
	++i;
	printf("i = %d\n", i);
	return;
}
int main()//�ֲ������������ڱ����������Ч
{
	for (int j = 0; j < 10; j++)
	{
		show();//��ӡ1-10
	}
	//for (int i = 0; i < 10; i++)
	//{
	//	show();//ȫ��1
	//}
	//typedef����˼���뵽�����Ͷ���,����ȡ��������,Ӧ��ȡΪtyperename,ʵ����˼������������
	//unsigned long long int x = 100;
	//printf("%llu\n", x);
	//un_llint a = 200;
	//printf("%llu\n", a);
	//int num1 = 0;
	//int num2 = 0;
	//printf("please input two integer data:>#");
	//scanf("%d%d", &num1, &num2);
	//int iMax = get_max(num1, num2);
	//printf("iMax = %d\n", iMax);
	//printf("%d\n", '\060');
	//printf("%c\n", '\060');
	//printf("%d\n", -10 % 3);//-1
	//printf("%d\n", -10 % -3);//-1
	//printf("%d\n", !10);
	//printf("%d\n", !(-10));
	//printf("%d\n", !10);
	//printf("%d\n", !11);
	//printf("%d\n", !12);
	//printf("%d\n", !100);
	//printf("%d\n", !1000);
	//int x = 0;
	//int y = 0;
	//printf("please input two integer data:>#");
	//scanf("%d%d", &x, &y);
	//printf("Max: %d\n", myMax(x, y));
	//int a = 10;
	//int b = 20;
	//if ((a == 20) || (b == 30))
	//{
	//	printf("yes!\n");
	//}
	//else
	//{
	//	printf("no!\n");
	//}
	//int a = 10;
	//int b = 20;
	//if ((a == 20) && (b == 20))
	//{
	//	printf("yes!\n");
	//}
	//else
	//{
	//	printf("no!\n");
	//}
	//if ((a == 10) && (b == 20))
	//{
	//	printf("yes!\n");
	//}
	//else
	//{
	//	printf("no!\n");
	//}
	//printf("%d\n", (1 == 2) && (2 == 2));
	//10 != 20;//1
	//10 == 20;//0
	//��ϵ�����: > < >= <= == !=,ֻ�������Ƚ������Ͳ��ָ�����
	//����:==��!=ֻ�����������������������⸡����(��������ʾ��׼ȷ,�����в��)
	//�ж������ַ����Ƿ����,����ʹ��==,C�������ж��ַ������ʹ��strcmp�����ж�
	//int a = 10;
	//int b = a++;
	//printf("%d\n", b);
	//printf("%d\n", a);
	//int a = 10;
	//int b = ++a;
	//printf("%d\n", b);
	//int a = 10;
	//a++;//����++:��ʹ��,������
	//++a;//ǰ��++:������,��ʹ��
	//a--
	//--a
	//printf("%d\n", a);
	//a += 1;//a++,++a;
	//int a = 0;
	//printf("%d\n", ~a);
	//printf("%u\n", ~a);
	//a = 1;
	//printf("%d\n", ~a);
	//printf("%u\n", ~a);
	//int a = -10;
	//printf("%d\n", sizeof(a));
	//������:sizeof�Ǻ�����?
	//��:sizeof();���Ǻ���!!!�ͺ���û�й�ϵ,sizeof��һ���ؼ���/������/�����
	//֤������:
	//printf("%d\n", sizeof a);
	//sizeof a;����д��û��()֤����sizeof�ⲻ�Ǻ���
	//printf("%d\n", sizeof(int));
	//���Ǻ���,sizeof(int),�õ���ʵ����һ����������,����,��֤��sizeof���Ǻ���
	//printf("%d\n", sizeof int);//�﷨����,sizeof int;����,����sizeof(int)����ʹ��
	//strlen�Ǻ���,

	//int a = -10;
	//printf("%d\n", &a);
	//printf("0X%p\n", &a);
	//printf("%#X\n", &a);
	//32λ����ַ������һ���޷��ŵ�int����,������%d,%x��ӡ,����һ���ӡ��ַ��%p,
	//printf("%x\n", &a);
	//int a = -10;
	//int b = +a;
	//printf("b = %d\n", b);
	//b = -a;
	//printf("b = %d\n", b);
	//int a = 10;
	//int b = a;
	//printf("b = %d\n", b);
	//b = -a;
	//printf("b = %d\n", b);
	//b = +a;
	//printf("b = %d\n", b);
	//printf("%d\n", 10 == 10);
	//printf("%d\n", !(10 == 10));
	//int x = 100;
	//if (!(100 == x))
	//{
	//	printf("yes x is 100!\n");
	//}
	//else
	//{
	//	printf("no!\n");
	//}
	//��ֵ�������͸��ϸ�ֵ������:������Ҫ
	//int a = 10;//��ʼ��
	//a = 20;//��ֵ
	//int a = 10;
	//a += 5;//a = a + 5;
	//printf("%d\n", a);//15
	//a -= 5;//a = a - 5;
	//printf("%d\n", a);//10
	//a *= 5;//a = a * 5;
	//printf("%d\n", a);//50
	//a /= 5;//a = a / 5;
	//printf("%d\n", a);//10
	//a %= 5;//a = a % 5;
	//printf("%d\n", a);//0
	//a &= 5;//a = a & 5;
	//printf("%d\n", a);//0
	//a ^= 5;//a = a ^ 5;
	//printf("%d\n", a);//5
	//a |= 5;//a = a | 5;
	//printf("%d\n", a);//5
	//& ^ |
	//&��λ��
	//^��λ���
	//|��λ��
	//printf("%d\n", 10 & 12);
	//printf("%d\n", 10 | 12);
	//printf("%d\n", 10 ^ 12);
	//int a = 10;
	//printf("%d\n", a << 1);
	//printf("%d\n", a >> 1);//1010
	//printf("%d\n", a);
	//printf("%d\n", a >>= 1);
	//printf("%d\n", a);
	//int a = 10;
	//a >> 1;�ȼ���ԭֵ����2 a / 2 = 5
	//a << 1;�ȼ���ԭֵ����2 a * 2 = 20
	//1 -> 1
	//2 -> 10
	//4 -> 100
	//8 -> 1000
	//16-> 10000
	//2^n -> 1...0(1������n��0)
	//10 -> 1010 -> 1000 + 10 -> 2^3 + 2^1 -> 10
	//17 -> 16 + 1 -> 2^4 + 2^0 -> 10000 + 1 -> 10001
	//37 -> 32 + 4 + 1 -> 2^5 + 2^2 + 2^0 -> 100000 + 100 + 1 -> 100101
	//10 -> 1010
	//10 / 3 = 3...1
	//printf("%d\n", 10 / 3);
	//printf("%d\n", 10 % 3);
	//������/�����operator ������operand
	//int a = 0;
	//int b = 0;
	//int c = a + b;
	//char cArr[] = "hello world";
	//int arr[] = { 11, 22, 33, 44, 55, 66, 33, 55, 0 };
	//printf("%d\n", sizeof(arr));//��������ܴ�С
	//printf("%d\n", sizeof(arr[0]));//�������һ��Ԫ�صĴ�С

	//��̬���������ĸ���
	//int num = sizeof(arr) / sizeof(arr[0]);
	//printf("num: %d\n", num);
	//int a = 0;
	//int b = 0;
	//�����Ǿ�����ͬ�������ݵļ���
	//int arr[5] = { 11, 22, 33 };//���鶨�����ʼ��
	//for (int i = 0; i < 5; i++)//�������
	//{
	//	printf("arr[%d]: %d\n", i, arr[i]);
	//}
	//int arr[SIZE];
	//const int n = 10;//�������г���������,���ʻ��Ǳ���
	//int arr[n];
	//VS�в�֧��VLA,��Щ������֧��VLA(qtcreator/gcc),VLA���ܳ�ʼ����ֻ��һ�α߳��Ļ���
	//int a = 10;
	//int b = 20;
	//printf("before: a: %d, b: %d\n", a, b);
	//printf("before: a: %p, b: %p\n", &a, &b);
	//int result = myAdd();
	//int result = myAdd(a, b);//ʵ��
	//printf("result = %d\n", result);
	system("pause");//�������öԻ���ͣ����
	return 0;
}