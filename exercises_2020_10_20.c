#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <math.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
int main()
{
	printf("hello world!!!\n");
	system("pause");
	return 0;
}
#if 0
int DigitSum(/*unsigned */int num)//�ݹ����
{
	if (num > 9)
	{
		return ((num % 10) + DigitSum(num / 10));
	}
	else
	{
		return num;
	}
}
int mySum(/*unsigned */int num)//�������
{
	int sum = 0;
	if (num > 9)
	{
		while (num / 10)
		{
			sum += (num % 10);
			num = num / 10;
		}
		sum += num;
	}
	else
	{
		sum += num;
	}
	return sum;
}
int main()
{
	//��Ŀ����:����һ������ÿλ֮��(�ݹ�ʵ��)
	//��Ŀ����:дһ���ݹ麯��DigitSum(n),����һ���Ǹ�����,���������������֮��
	//���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9,���ĺ���19
	//����:1729,���:19
	int num = 0;
	printf("please input zero or a puls integer number:>#");
	scanf("%d", &num);
	if (num >= 0)
	{
		printf("%d��ÿλ֮����%d\n", num, DigitSum(num));
	}
	else
	{
		printf("ERROR!!!���������%d������Ҫ��!!!\n", num);
	}
	printf("please input zero or a plus integer number:>#");
	scanf("%d", &num);
	if (num >= 0)
	{
		printf("%d��ÿλ֮����%d\n", num, mySum(num));
	}
	else
	{
		printf("ERROR!!!���������%d������Ҫ��!!!\n", num);
	}
	//unsigned int num = 0;
	//printf("please input zero or a plus integer number:>#");
	//scanf("%d", &num);
	//if ((num >= 0) && (num <= ((4294967295 - 1) / 2)))
	//{
	//	printf("%d��ÿλ֮����%d\n", num, DigitSum(num));
	//}
	//else
	//{
	//	printf("ERROR!!!1���������%d������Ҫ��!\n", num);
	//}
	return 0;
}
#endif
#if 0
#define ERR -1
int recurFib(int n)
{
	if (n <= 0)
	{
		return ERR;
	}
	else if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return (recurFib(n - 1) + recurFib(n - 2));
	}
}
int iteraFib(int n)
{
	if (n <= 0)
	{
		return ERR;
	}
	else
	{
		int a = 1;
		int b = 1;
		int c = 1;
		while (n > 2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
		return c;
	}
}
int main()
{
	//��Ŀ����:����쳲�������
    //��Ŀ����:�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������:1 1 2 3 5 8 13...�ӵ����ʼ,ÿ�����ǰ����֮��
    //����:����:5 ���:5
    //����:10,���:55
    //����:2,���:1
	int n = 0;
	printf("please input a plus integer number:>#");
	scanf("%d", &n);
	int ret = recurFib(n);
	if (ret != ERR)
	{
		printf("��%d��쳲���������%d\n", n, ret);
	}
	else
	{
		printf("�������������,0�͸���û��쳲�������!\n");
	}
	printf("please input a plus integer number:>#");
	scanf("%d", &n);
	ret = iteraFib(n);
	if (ret != ERR)
	{
		printf("��%d��쳲���������%d\n", n, iteraFib(n));
	}
	else
	{
		printf("�������������,0�͸���û��쳲�������!\n");
	}
	system("pause");
	return 0;
}
#endif
#if 0
#define ERR_OR -1
int power(int n, int k)//�ݹ����
{
	if (0 == k)
	{
		return 1;
	}
	else if (k > 0)
	{
		return (n * power(n, k - 1));
	}
	else
	{
		return ERR_OR;
	}
}
int Power(int n, int k)//�������
{
	int mul = 1;
	if (k == 0)
	{
		return 1;
	}
	else
	{
		while (k >= 1)
		{
			mul *= n;
			k--;
		}
		return mul;
	}
}
int main()
{
	//��Ŀ����:�ݹ�ʵ��n��k�η�
	//��Ŀ����:��дһ������ʵ��n��k�η�,ʹ�õݹ�ʵ��
	int n = 0;
	int k = 0;
	printf("please input a not zero integer number:>#");
	scanf("%d", &n);
	if (n == 0)
	{
		printf("ERROR!!!������%d", n);
		return ERR_OR;
	}
	printf("please input zero or a plus integer number:>#");
	scanf("%d", &k);
	if (k < 0)
	{
		printf("ERROR!!!�������������Ҫ��!\n");
		return ERR_OR;
	}
	printf("%d^%d�η���%d\n", n, k, Power(n, k));
	//printf("please input an integer number:>#");
	//scanf("%d", &n);
	//printf("please input a plus integer power number or zero:>#");
	//scanf("%d", &k);
	//int ret = power(n, k);
	//if (ret != ERR_OR)
	//{
	//	printf("%d^%d = %d\n", n, k, ret);
	//}
	//else
	//{
	//	printf("����Ϊ����,��ʱ�޷�����!\n");
	//}

	system("pause");
	return 0;
}
#endif
#if 0
int myStrlen(char* pc)
{
	int len = 0;
	while (*pc++)
	{
		len++;
	}
	return len;
}
//�ǵݹ�ʵ�ֵ��ַ�������
void iterative_reverse_string(char* pc)
{
	char ctmp = '\0';
	int left = 0;
	int right = myStrlen(pc) - 1;
	while (left < right)
	{
		ctmp = pc[left];
		pc[left] = pc[right];
		pc[right] = ctmp;
		left++;
		right--;
	}
	return;
}
//�ݹ�ʵ���ַ���������
void recursive_reverse_string(char* pc)
{
	char ctmp = '\0';
	int left = 0;
	int right = myStrlen(pc) - 1;
	ctmp = pc[left];
	pc[left] = pc[right];
	pc[right] = '\0';
	if (myStrlen(pc + 1) >= 2)
	{
		recursive_reverse_string(pc + 1);
	}
	pc[right] = ctmp;
	return;
}
int main()
{
	//��Ŀ����:�ַ�������(�ݹ�ʵ��)
	//��Ŀ����:��дһ������reverse_string(char* string)(�ݹ�ʵ��)
	//ʵ��:�������ַ����е��ַ���������
	//Ҫ��:����ʹ��C�������е��ַ�����������
	char cArr[] = "I love  China!!!";
	printf("before : %s\n", cArr);
	iterative_reverse_string(cArr);
	printf("after  : %s\n", cArr);
	recursive_reverse_string(cArr);
	printf("after  : %s\n", cArr);
	system("pause");
	return 0;
}
#endif
#if 0
int myRecurStrlen(const char* str)//�ݹ�ʵ��strlen�⺯��
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return (1 + myRecurStrlen(str + 1));
	}
}
int myIteraStrlen(const char* str)//����ʵ��strlen�⺯��
{
	int len = 0;
	while (*str++)
	{
		len++;
	}
	return len;
}
int main()
{
	//��Ŀ����:strlen��ģ��(�ݹ�ʵ��)
	//��Ŀ����:�ݹ�ͷǵݹ�ֱ�ʵ��strlen
	const char* pc1 = "I love China!";
	const char* pc2 = "I love Bit!!!";
	printf("%d\n", myRecurStrlen(pc1));
	printf("%d\n", myIteraStrlen(pc2));
	system("pause");
	return 0;
}
#endif
#if 0
int recurFactorial(int n)//�ݹ�ʵ����n�Ľ׳�
{
	if (n == 0)//0! = 1
	{
		return 1;
	}
	else
	{
		return (n * recurFactorial(n - 1));
	}
}
int iteraFactorial(int n)//����ʵ����n�Ľ׳�
{
	int fact = 1;
	for (; n >= 1; n--)
	{
		fact *= n;
	}
	return fact;
}
int main()
{
	//��Ŀ����:��׳�
	//��Ŀ����:�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
	int n = 0;
	printf("please input a plus integer number:>#");
	scanf("%d", &n);
	printf("%d!��%d\n", n, recurFactorial(n));
	printf("************************************************\n");
	printf("please input a plus integer number:>#");
	scanf("%d", &n);
	printf("%d!��%d\n", n, iteraFactorial(n));
	system("pause");
	return 0;
}
#endif
#if 0
//��Ŀ����:��ӡһ������ÿһλ
//��Ŀ����:�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ(˳���ӡ/�����ӡ)
void recurOrderPrint(int num)
{
	if (num > 9)
	{
		recurOrderPrint(num / 10);
	}
	printf("%d\n", num % 10);
}
void recurReverPrint(int num)
{
	if (0 == num)
		return;
	printf("%d\n", num % 10);
	recurReverPrint(num / 10);
	return;
}
void iteraReverPrint(int num)
{
	while (num / 10)
	{
		printf("%d\n", num % 10);
		num /= 10;
	}
	printf("%d\n", num);
	return;
}
int main()
{
	int num = 0;
	printf("please input an integer number:>#");
	scanf("%d", &num);//1234
	//recurOrderPrint(num);
	//recurReverPrint(num);
	iteraReverPrint(num);
	system("pause");
	return 0;
}
#endif
#if 0
void recurPrint1(int num)//���õݹ������ӡһ����������λ����
{
	if (num == 0)
		return;
	printf("%d\n", num % 10);
	recurPrint1(num / 10);
	return;
}
void recurPrint(int num)//�õݹ�˳���ӡһ�������ĸ���λ��
{
	if (num > 9)
	{
		recurPrint(num / 10);
	}
	printf("%d\n", num % 10);
}
void orderPrint(int num)//�õ��������ӡһ�������ĸ���λ��
{
	while (num / 10)
	{
		printf("%d\n", num % 10);
		num /= 10;
	}
	printf("%d\n", num);
	return;
}
int main()
{
	//��Ŀ����:��ӡһ������ÿһλ
	//��Ŀ����:�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ(˳���ӡ/�����ӡ)
	int num = 0;
	printf("please input an integer number:>#");
	scanf("%d", &num);
	recurPrint(num);
	//recurPrint1(num);
	//orderPrint(num);
	system("pause");
	return 0;
}
#endif
#if 0
int Fun(int n)
{
	if (5 == n)
	{
		return 2;
	}
	else
	{
		return (2 * Fun(n + 1));
	}
}
int main()
{
	printf("%d\n", Fun(2));//16
	system("pause");
	return 0;
}
#endif
#if 0
int g_a = 1;
void func(int a)
{
	printf("a = %d\n", a);
	printf("g_a = %d\n", g_a);
	return;
}
int main()
{
	func(g_a);//���������ݴ��ݿ���ʹ��ȫ�ֱ���,��������һ�㲻��(ȫ�ֱ�������Ҫ������Ϊ�������ȫ�ֿ��ð�)
	return 0;
}
#endif
#if 0
void multiTable(int target)
{
	if (target > 0)
	{
		for (int i = 1; i <= target; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				printf("%2d * %2d = %3d ", j, i, j * i);
			}
			putchar(10);
		}
	}
	else
	{
		printf("Error!\n");
	}
	return;
}
int main()
{
	//��ҵ����:�˷��ھ���
	//��ҵ����:ʵ��һ������,��ӡ�˷��ھ���,�ھ���������������Լ�ָ��
	//��:����9,���9 * 9�ھ���,����12,���12 * 12�ĳ˷��ھ���
	int target = 0;
	printf("please input an integer target:>#");
	scanf("%d", &target);
	multiTable(target);
	system("pause");
	return 0;
}
#endif
#if 0
void mySwap(int* pa, int* pb)
{
	int t = *pa;
	*pa = *pb;
	*pb = t;
	return;
}
int main()
{
	//��ҵ����:������������
	//��ҵ����:ʵ��һ�������������������������ݡ�
	int num1 = 0;
	int num2 = 0;
	printf("please input two integer numbers:>#");
	scanf("%d%d", &num1, &num2);
	printf("before: num1 = %d, num2 = %d\n", num1, num2);
	mySwap(&num1, &num2);
	printf("after : num1 = %d, num2 = %d\n", num1, num2);
	system("pause");
	return 0;
}
#endif
#if 0
#define IS_LEAP_YEAR 0
#define ISNOT_LEAP_YEAR 1
int isLeapYear(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		return IS_LEAP_YEAR;
	}
	else
	{
		return ISNOT_LEAP_YEAR;
	}
}
int main()
{
	//��ҵ����:�����ж�����
    //��ҵ����:ʵ�ֺ����ж�year�ǲ�������
	int  year = 0;
	printf("please input a year:>#");
	scanf("%d", &year);
	if (!isLeapYear(year))
	{
		printf("%4d��������!\n", year);
	}
	else
	{
		printf("%4d�겻������!\n", year);
	}
	system("pause");
	return 0;
}
#endif
#if 0
#define IS_PRIME_NUMBER 1
#define ISNOT_PRIME_NUMBER -1
#define START 100
#define END 200
int isPrimeNumber(int n)
{
	int i = 0;
	int tmp = (int)sqrt(n);
	//�м����,���Ч��,�����ռ任ȡʱ��
	for (i = 2; i <= tmp; i++)
	{
		if (!(n % i))
		{
			return ISNOT_PRIME_NUMBER;
		}
	}
	return IS_PRIME_NUMBER;
}
int main()
{
	//��ҵ����:�����ж�����
	//��ҵ����:ʵ��һ���������ж�һ�����ǲ�������.
	//��������ʵ�ֵĺ�����ӡ100��200֮�������.
	int countOfPrime = 0;
	if (START & 1)//STARTΪ����
	{
		for (int i = START; i <= END; i += 2)
		{
			if (isPrimeNumber(i) == IS_PRIME_NUMBER)
			{
				countOfPrime++;
				printf("%d������\n", i);
			}
		}
	}
	else//STARTΪż��
	{
		for (int i = START + 1; i <= END; i += 2)
		{
			if (isPrimeNumber(i) == IS_PRIME_NUMBER)
			{
				countOfPrime++;
				printf("%d������\n", i);
			}
		}
	}
	printf("countOfPrime = %2d\n", countOfPrime);
	system("pause");
	return 0;
}
#endif