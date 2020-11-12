#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <string.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
//#define STRLEN 101
//char* reverseString(char* buffer)
//{
//	assert(buffer != NULL);
//	int left = 0;
//	int right = strlen(buffer) - 1;
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = buffer[left];
//		buffer[left] = buffer[right];
//		buffer[right] = tmp;
//		left++;
//		right--;
//	}
//	return buffer;
//}
//char* reverseString(char* buffer)
//{
//	assert(buffer);
//	char* pH = buffer;
//	char* pT = strlen(buffer) - 1 + pH;
//	char tmp = '\0';
//	while (pH < pT)
//	{
//		tmp = *pH;
//		*pH = *pT;
//		*pT = tmp;
//		pH++;
//		pT--;
//	}
//	return buffer;
//}
//
//int main()
//{
//	char buffer[STRLEN] = "";
//	fgets(buffer, STRLEN, stdin);
//	printf("%s\n", reverseString(buffer));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));//6 ,12
//	system("pause");
//	return 0;
//}
//int addTotal(int base, int  n)
//{
//	int sum = 0;
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ret = ret * 10 + base;
//		sum += ret;
//	}
//	return sum;
//}
//int main()
//{
//	//Sn = a + aa + aaa + aaaa + aaaaa;求前五项之和,其中a是一个数
//	//eg:2 + 22 + 222 + 2222 + 22222
//	int base = 0;
//	printf("please input an integer base number:(1~9)>");
//	scanf("%d", &base);
//	int n = 0;
//	printf("please input an integer total number:>");
//	scanf("%d", &n);
//	printf("前%d项和为%d\n", n, addTotal(base, n));
//	system("pause");
//	return 0;
//}
//#define Head 0
//#define TAIL 100000
//int countOfThreeFlower(int head, int tail)
//{
//	int bitNum = 0;
//	int count = 0;
//	int tmp = 0;
//	int sum = 0;
//	for (int i = head + 1; i <= tail - 1; i++)
//	{
//		sum = 0;
//		bitNum = 1;
//		tmp = i;
//		while (tmp / 10 != 0)
//		{
//			bitNum++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp != 0)
//		{
//			sum += (int)(pow((tmp % 10), bitNum));
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%2d---类水仙花数:%d\n", ++count, i);
//		}
//	}
//	return count;
//}
//int main()
//{
//	int count = countOfThreeFlower(Head, TAIL);
//	printf("%d~%d之间类水仙花数有%d个!\n", Head, TAIL, count);
//	system("pause");
//	return 0;
//}
//#define CHAR '*'
//int main()
//{
//	int line = 0;
//	printf("please input a integer line:>#");
//	scanf("%d", &line);
//	for (int i = 0; i < line; i++)
//	{
//		for (int j = 0; j < line - 1 - i; j++)
//		{
//			putchar(' ');
//		}
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			putchar(CHAR);
//		}
//		putchar(10);
//	}
//	for (int i = 0; i < line - 1; i++)
//	{
//		for (int j = 0; j < i + 1; j++)
//		{
//			putchar(' ');
//		}
//		for (int j = 0; j < 2 * (line - 1) - 1 - 2 * i; j++)
//		{
//			putchar(CHAR);
//		}
//		putchar(10);
//	}
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10][10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (j == 0 || j == i)
//			{
//				arr[i][j] = 1;
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%4d", arr[i][j]);
//		}
//		putchar(10);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	for (char crime = 'A'; crime <= 'D'; crime++)
//	{
//		if (3 ==((crime != 'A') + (crime == 'C') + (crime == 'D') + (crime != 'D')))
//		{
//			printf("凶手crime是:%c\n", crime);
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	for (int A = 1; A <= 5; A++)
//	{
//		for (int B = 1; B <= 5; B++)
//		{
//			for (int C = 1; C <= 5; C++)
//			{
//				for (int D = 1; D <= 5; D++)
//				{
//					for (int E = 1; E <= 5; E++)
//					{
//						if (((B == 2) + (A == 3) == 1)&&
//							((B == 2) + (E == 4) == 1)&&
//							((C == 1) + (D == 2) == 1)&&
//							((C == 5) + (D == 3) == 1)&&
//							((E == 4) + (A == 1) == 1)&&
//							(A * B * C * D * E == 120))
//						{
//							printf("比赛名次如下:\nA:%d\nB:%d\nC:%d\nD:%d\nE:%d\n",
//								A, B, C, D, E);
//							goto End;
//						}
//					}
//				}
//			}
//		}
//	}
//End:
//	system("pause");
//	return 0;
//}

//喝汽水,一瓶汽水1块钱,2个空汽水瓶可以换一瓶汽水,有20块钱,总共能喝多少瓶汽水
//int main()
//{
//	int money = 0;
//	printf("please input a plus integer number:>");
//	scanf("%d", &money);
//	if (money > 0)
//	{
//		int price = 1;
//		int total = 0;
//		total = (money / price) * 2 - 1;
//		printf("能喝%d瓶汽水\n", total);
//	}
//	else
//	{
//		printf("能喝0瓶汽水");
//	}
//	//int money = 0;
//	//printf("please input a plus integer number:>#");
//	//scanf("%d", &money);
//	//if (money >0)
//	//{
//	//	int price = 1;
//	//	int total = 0;
//	//	int empty = 0;
//	//	total = money / price;
//	//	empty = total;
//	//	while (empty >= 2)
//	//	{
//	//		total += empty / 2;
//	//		empty = empty / 2 + empty % 2;
//	//	}
//	//	printf("能喝%d瓶汽水\n", total);
//	//}
//	//else
//	//{
//	//	printf("能喝0瓶汽水\n");
//	//}
//	system("pause");
//	return 0;
//}
//typedef struct stu
//{
//	int num;
//	char name[10];
//	int age;
//} Stu;
//void fun(Stu* p)
//{
//	printf("%s\n", (*p).name);
//}
//int main()
//{
//	Stu student[3] = { { 9801, "zhang", 20 }, { 9802, "wang", 19 }, { 9803, "zhao", 18 } };
//	fun(student + 1);
//	system("pause");
//	return 0;
//}
//#include <time.h>
//#define LENGTH 10
//void initArr(int* pa, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		pa[i] = rand() % 100;
//	}
//}
//void Print(int* pa, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", *pa++);
//	}
//	putchar(10);
//}
//void setArr(int* pa, int len)
//{
//	int left = 0;
//	int tmp = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		while (!(pa[left] & 1))
//		{
//			left++;
//		}
//		while (pa[right] & 1)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = pa[left];
//			pa[left] = pa[right];
//			pa[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	srand(time(NULL));
//	int arr[LENGTH] = { 0 };
//	initArr(arr, LENGTH);
//	Print(arr, LENGTH);
//	setArr(arr, LENGTH);
//	printf("after setArr:\n");
//	Print(arr, LENGTH);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//char arr[101] = "";
//	//fgets(arr, 101, stdin);
//	//char* buf = arr;
//	//char* b = arr;
//	//char* flag = arr;
//	//int left = 0;
//	//int right = strlen(arr) - 1;
//	//char tmp = 0;
//	//while (left < right)
//	//{
//	//	tmp = arr[left];
//	//	arr[left] = arr[right];
//	//	arr[right] = tmp;
//	//	right--;
//	//	left++;
//	//}
//	//while (*b)
//	//{
//	//	while (*b != ' ' && *b != 0)
//	//	{
//	//		b++;
//	//	}
//	//	if (*b == 0)
//	//	{
//
//	//	}
//	//	else
//	//	{
//	//		left = 0;
//	//		right = 
//	//	}
//	//}
//	//puts(arr);
//	double x = 0;
//	double y = 0;
//	x = 2;
//	y = x + 3 / 2;
//	printf("y = %lf", y);
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<string.h>
void reverse(char* s, int begin, int end)
{
	char temp;
	while (end > begin) {
		temp = s[begin];
		s[begin] = s[end];
		s[end] = temp;
		begin++;
		end--;
	}
}
int main()
{
	int a, b;
	a = b = 0;
	char s[100];
	fgets(s, 100, stdin);
	reverse(s, 0, strlen(s) - 1);
	int i = 0;
	while (i < strlen(s)) 
	{
		//跳过空格 
		while (s[i] == ' ' && i < (int)strlen(s)) 
		{
			i++;
		}
		a = i;
		//跳过非空格字符 
		while (s[i] != ' ' && i < (int)strlen(s)) 
		{
			i++;
		}
		b = i - 1;
		//a~b为一个单词的下标的区间 
		reverse(s, a, b);
	}
	puts(s);
	return 0;
}