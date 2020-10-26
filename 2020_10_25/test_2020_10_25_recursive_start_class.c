#define _CRT_SECURE_NO_WARNINGS 1
#include <windows.h>
#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#if 0
void show()
{
	printf("hello bit");
	show();
	return;
}
//程序调用自身的编程技巧称为递归
int main()
{
	show();
	system("pause");
	return 0;
}
#endif
#if 0
int myStrlen1(const char* pc)
{
	int len = 0;
	while (*pc)
	{
		len++;
		pc++;
	}
	return len;
}
int myStrlen2(const char* pc)
{
	if (*pc == '\0')
	{
		return 0;
	}
	else
	{
		return (1 + myStrlen2(pc + 1));
	}
}
int myStrlen3(const char* pc)
{
	while (*pc != '\0')
	{
		return (1 + myStrlen3(pc + 1));
	}
	return 0;
}
int main()
{
	//自实现库函数strlen
	const char* pc = "I love China";
	printf("%d\n", myStrlen1(pc));
	printf("%d\n", myStrlen2(pc));
	printf("%d\n", myStrlen3(pc));
	system("pause");
	return 0;
}
#endif
#if 0
void iterReverse(int num)//迭代逆序打印出一个整数的各个位数
{
	while (num != 0)
	{
		printf("%d\n", num % 10);
		num = num / 10;
	}
	return;
}
void recuOrder(int num)//递归顺序打印出一个证书的各个位数
{
	if (num > 9)
	{
		recuOrder(num / 10);
	}
	printf("%d\n", num % 10);
	return;
}
int main()
{
	//接收一个正整型按照顺序打印的每一位,顺序打印,逆序打印,递归迭代
	int num = 0;
	printf("please input an integer number:>#");
	scanf("%d", &num);
	iterReverse(num);
	recuOrder(num);
	system("pause");
	return 0;
}
#endif
#if 0
int* g_ptr = NULL;
void func()
{
	int a = 10;
	g_ptr = &a;
}
int main()
{
	func();
	//访问的func函数中的a已经释放掉,但是释放不等于清空,只是设置为无效可以进行数据覆盖而已,运气好可以访问到a的内容
	printf("%d\n", *g_ptr);
	system("pause");
	return 0;
}
#endif
#if 0
int myStrlen(const char* ptr_c)
{
	int len = 0;
	while (*ptr_c++)
	{
		len++;
	}
	return len;
}
int myStrlen1(const char* ptr_c)
{
	if (*ptr_c == '\0')
	{
		return 0;
	}
	else
	{
		return (1 + myStrlen1(ptr_c + 1));
	}
}
int main()
{
	const char* ptr_c = "I LOVE CHINA!";
	printf("%d\n", myStrlen(ptr_c));//迭代实现原生strlen函数
	const char* ptr_c1 = "abcd";
	printf("%d\n", myStrlen1(ptr_c1));//递归实现原生strlen函数
	system("pause");
	return 0;
}
#endif
#if 0
void recurPrint(int num)
{
	if (num > 9)
	{
		recurPrint(num / 10);
	}
	printf("%d\n", num % 10);
	return;
}
void iteraPrint(int num)
{
	while (num != 0)
	{
		printf("%d\n", num % 10);
		num /= 10;
	}
	return;
}
void recurReverse(int num)
{
	if (num == 0)
	{
		return;
	}
	printf("%d\n", num % 10);
	recurReverse(num / 10);
}
int main()
{
	int num = 0;
	printf("please input an integer number:>#");
	scanf("%d", &num);
	//recurPrint(num);//递归顺序打印
	//iteraPrint(num);//迭代逆序打印
	//迭代顺序打印思路,1234求出来的4 3 2 1放入一个数组中,逆序打印就完事了
	recurReverse(num);//递归逆序打印
	system("pause");
	return 0;
}
#endif
int iterFactorial(int num)
{
	int fact = 1;
	for (; num >= 1; num--)
	{
		fact *= num;
	}
	fact *= 1;
	return fact;
}
int recurFactorial(int num)
{
	if (num == 0)
		return 1;
	else
		return (recurFactorial(num - 1) * num);
}
int main()
{
	//递归迭代实现小的数据阶乘运算
	int num = 0;
	printf("please input an integer number:>#");
	scanf("%d", &num);
	printf("%d的阶乘是%d\n", num, iterFactorial(num));
	printf("please input an integer number:>#");
	scanf("%d", &num);
	printf("%d的阶乘是%d\n", num, recurFactorial(num));
	system("pause");
	return 0;
}