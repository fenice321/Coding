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
int DigitSum(/*unsigned */int num)//递归求解
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
int mySum(/*unsigned */int num)//迭代求解
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
	//题目名称:计算一个数的每位之和(递归实现)
	//题目内容:写一个递归函数DigitSum(n),输入一个非负整数,返回组成它的数字之和
	//例如，调用DigitSum(1729)，则应该返回1+7+2+9,它的和是19
	//输入:1729,输出:19
	int num = 0;
	printf("please input zero or a puls integer number:>#");
	scanf("%d", &num);
	if (num >= 0)
	{
		printf("%d的每位之和是%d\n", num, DigitSum(num));
	}
	else
	{
		printf("ERROR!!!输入的数据%d不符合要求!!!\n", num);
	}
	printf("please input zero or a plus integer number:>#");
	scanf("%d", &num);
	if (num >= 0)
	{
		printf("%d的每位之和是%d\n", num, mySum(num));
	}
	else
	{
		printf("ERROR!!!输入的数据%d不符合要求!!!\n", num);
	}
	//unsigned int num = 0;
	//printf("please input zero or a plus integer number:>#");
	//scanf("%d", &num);
	//if ((num >= 0) && (num <= ((4294967295 - 1) / 2)))
	//{
	//	printf("%d的每位之和是%d\n", num, DigitSum(num));
	//}
	//else
	//{
	//	printf("ERROR!!!1输入的数据%d不符合要求!\n", num);
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
	//题目名称:计算斐波那契数
    //题目内容:递归和非递归分别实现求第n个斐波那契数:1 1 2 3 5 8 13...从第三项开始,每项等于前两项之和
    //例如:输入:5 输出:5
    //输入:10,输出:55
    //输入:2,输出:1
	int n = 0;
	printf("please input a plus integer number:>#");
	scanf("%d", &n);
	int ret = recurFib(n);
	if (ret != ERR)
	{
		printf("第%d个斐波那契数是%d\n", n, ret);
	}
	else
	{
		printf("输入的数据有误,0和负数没有斐波那契数!\n");
	}
	printf("please input a plus integer number:>#");
	scanf("%d", &n);
	ret = iteraFib(n);
	if (ret != ERR)
	{
		printf("第%d个斐波那契数是%d\n", n, iteraFib(n));
	}
	else
	{
		printf("输入的数据有误,0和负数没有斐波那契数!\n");
	}
	system("pause");
	return 0;
}
#endif
#if 0
#define ERR_OR -1
int power(int n, int k)//递归求解
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
int Power(int n, int k)//迭代求解
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
	//题目名称:递归实现n的k次方
	//题目内容:编写一个函数实现n的k次方,使用递归实现
	int n = 0;
	int k = 0;
	printf("please input a not zero integer number:>#");
	scanf("%d", &n);
	if (n == 0)
	{
		printf("ERROR!!!底数是%d", n);
		return ERR_OR;
	}
	printf("please input zero or a plus integer number:>#");
	scanf("%d", &k);
	if (k < 0)
	{
		printf("ERROR!!!输入的幂数不合要求!\n");
		return ERR_OR;
	}
	printf("%d^%d次方是%d\n", n, k, Power(n, k));
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
	//	printf("幂数为负数,暂时无法计算!\n");
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
//非递归实现的字符串逆序
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
//递归实现字符串的逆序
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
	//题目名称:字符串逆序(递归实现)
	//题目内容:编写一个函数reverse_string(char* string)(递归实现)
	//实现:将参数字符串中的字符反向排列
	//要求:不能使用C函数库中的字符串操作函数
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
int myRecurStrlen(const char* str)//递归实现strlen库函数
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
int myIteraStrlen(const char* str)//迭代实现strlen库函数
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
	//题目名称:strlen的模拟(递归实现)
	//题目内容:递归和非递归分别实现strlen
	const char* pc1 = "I love China!";
	const char* pc2 = "I love Bit!!!";
	printf("%d\n", myRecurStrlen(pc1));
	printf("%d\n", myIteraStrlen(pc2));
	system("pause");
	return 0;
}
#endif
#if 0
int recurFactorial(int n)//递归实现求n的阶乘
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
int iteraFactorial(int n)//迭代实现求n的阶乘
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
	//题目名称:求阶乘
	//题目内容:递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
	int n = 0;
	printf("please input a plus integer number:>#");
	scanf("%d", &n);
	printf("%d!是%d\n", n, recurFactorial(n));
	printf("************************************************\n");
	printf("please input a plus integer number:>#");
	scanf("%d", &n);
	printf("%d!是%d\n", n, iteraFactorial(n));
	system("pause");
	return 0;
}
#endif
#if 0
//题目名称:打印一个数的每一位
//题目内容:递归方式实现打印一个整数的每一位(顺序打印/逆序打印)
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
void recurPrint1(int num)//能用递归逆序打印一个整数各个位数吗
{
	if (num == 0)
		return;
	printf("%d\n", num % 10);
	recurPrint1(num / 10);
	return;
}
void recurPrint(int num)//用递归顺序打印一个整数的各个位数
{
	if (num > 9)
	{
		recurPrint(num / 10);
	}
	printf("%d\n", num % 10);
}
void orderPrint(int num)//用迭代逆序打印一个整数的各个位数
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
	//题目名称:打印一个数的每一位
	//题目内容:递归方式实现打印一个整数的每一位(顺序打印/逆序打印)
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
	func(g_a);//函数间数据传递可以使用全局变量,但是我们一般不传(全局变量不必要传参因为他本身就全局可用啊)
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
	//作业标题:乘法口诀表
	//作业内容:实现一个函数,打印乘法口诀表,口诀表的行数和列数自己指定
	//如:输入9,输出9 * 9口诀表,输入12,输出12 * 12的乘法口诀表
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
	//作业标题:交换两个整数
	//作业内容:实现一个函数来交换两个整数的内容。
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
	//作业标题:函数判断闰年
    //作业内容:实现函数判断year是不是闰年
	int  year = 0;
	printf("please input a year:>#");
	scanf("%d", &year);
	if (!isLeapYear(year))
	{
		printf("%4d年是闰年!\n", year);
	}
	else
	{
		printf("%4d年不是闰年!\n", year);
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
	//中间变量,提高效率,牺牲空间换取时间
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
	//作业标题:函数判断素数
	//作业内容:实现一个函数，判断一个数是不是素数.
	//利用上面实现的函数打印100到200之间的素数.
	int countOfPrime = 0;
	if (START & 1)//START为奇数
	{
		for (int i = START; i <= END; i += 2)
		{
			if (isPrimeNumber(i) == IS_PRIME_NUMBER)
			{
				countOfPrime++;
				printf("%d是素数\n", i);
			}
		}
	}
	else//START为偶数
	{
		for (int i = START + 1; i <= END; i += 2)
		{
			if (isPrimeNumber(i) == IS_PRIME_NUMBER)
			{
				countOfPrime++;
				printf("%d是素数\n", i);
			}
		}
	}
	printf("countOfPrime = %2d\n", countOfPrime);
	system("pause");
	return 0;
}
#endif