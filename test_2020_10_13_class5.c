#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#define LOGIN_SUCCESS 1
#define LOGIN_FAILED -1
#define PASSWD_LENGTH 64
#define NAME_LENGTH 64
#define NAME "taozhouhong"
#define PASSWD "111111"
#define SEC_BASIC 30
void Show1(int time)
{
	for (; time >= 0; time--)
	{
		printf("倒计时:># %-4d\r", time);
		Sleep(1000);
	}
	printf("\n");
	return;
}
int myLogin(int times)
{
	int t = SEC_BASIC;
	char passwd[PASSWD_LENGTH] = { '\0' };
	char name[NAME_LENGTH] = { '\0' };
	do
	{
		printf("please input your name:>#");
		scanf("%s", name);
		printf("please input your passwd:>#");
		scanf("%s", passwd);
		if (strcmp(name, NAME) == 0 && strcmp(passwd, PASSWD) == 0)
		{
			return LOGIN_SUCCESS;
		}
		else
		{
			times--;
			if (times >= 1)
			{ 
				printf("很抱歉您本次登录失败,您还有%d次机会!!!\n", times);
			}
			if (0 == times)
			{
				printf("很抱歉您连续登录失败多次,%d秒后您才能继续登录:>#\n", t);
				//Sleep(t * 1000);
				Show1(t);
				times = 1;
				t *= 2;
			}
		}
	} while (times > 0);
	return LOGIN_FAILED;
}
int main()
{
	//编写代码实现,模拟用户登录场景,并且只能登录三次(只允许输入三次密码,如果密码正确则提示登陆成功,如果三次军输入错误,则退出程序)
	int times = 3;
	//返回值:succes:返回1,failed:返回-1
	if (LOGIN_FAILED ==  myLogin(times))
	{
		printf("很遗憾你登录失败了\n");
	}
	else
	{
		printf("欢迎登录www.xxx.com.cn/\n");
	}
	system("pause");
	return 0;
}
void show()
{
	//const char* str = "hello world, hello china!";//待定
	//0x00EF7B30
	//0x00EF7B30
	//0x00EF7B30
	//0x00EF7B30
	//printf("0x%p\n", str);
	//printf("0x%p\n", "hello world, hello china!");
	//printf("0x%p\n", &str[0]);
	//printf("0x%p\n", &"hello world, hello china!"[0]);
	char str1[] = "hello world, hello china!";
	char str2[] = "#########################";
	int len = (int)strlen(str1);
	int start = 0;
	int end = 0;
	printf("%s\r", str2);
	for (start = 0, end = len - 1; start <= end; start++, end--)
	{
		//'\r'是回车:光标回到本行开头
		//'\n'是回车换行:光标先回到本行开头再另起一行进行换行
		str2[start] = str1[start];
		str2[end] = str1[end];
		printf("%s\r", str2);
		Sleep(400);
	}
	printf("\n");
	return;
}
void show2()
{
	int sec = 0;
	for (sec = 10; sec >= 0; sec--)
	{
		printf("%-2d\r", sec);
		Sleep(1000);
	}
	printf("\n");
	return;
}
void show3()
{
	for (;;)
	{
		printf("|\r");
		//Sleep(2000);
		printf("/\r");
		//Sleep(2000);
		printf("-\r");
		//Sleep(2000);
		printf("%c\r", '\\');
		//Sleep(2000);
	}
	return;
}
void show5()
{
	int percent = 0;
	for (percent = 0; percent <= 100; percent++)
	{
		printf("%d%%\r", percent);
		Sleep(100);
	}
	printf("\n");
	return;
}
int main8()
{
	//Q1:编写代码演示多个字符,从两端移动向中间汇聚
	//show();
	//Q2:写一个倒计时
	show2();
	//Q3:写一个旋转光标
	//show3();
	//Q4:写一个进度条:从左侧单向开始刷新,进度条的进度百分比就是正计时.后期课程会讲解
	//Q5:写一个正计时
	//show5();
	system("pause");
	return 0;
}
#define NOT_FOUND -1
//返回值:success 返回对应数组的下标, failed 返回-1
int binSearch(int* pa, int len, int findData)//二分查找:效率非常高,前提条件有序
{
	int mid = 0;
	int l = 0;
	int h = len - 1;
	while (l <= h)
	{
		//mid = (l + h) / 2;//没考虑到溢出的可能
		//mid = l + (h - l) / 2;//考虑到溢出的可能,但是没有考虑到效率的提升
		mid = (l & h) + ((l ^ h) >> 1);//即考虑到溢出的可能,又考虑到效率的提升
		if (pa[mid] > findData)
		{
			h = mid - 1;
		}
		else if (pa[mid] < findData)
		{
			l = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return NOT_FOUND;
}
int main7()
{
	//在一个有序数组中查找具体的某个数字x.编写int binsearch(int x, int v[], int n);
	//功能:在v[0] <= v[1] <= v[2] <= ... <= v[n - 1]的数组中查找x
	
	//分析:该数组是升序数组,查找的过程本质是排除的过程
	int findData = 0;
	printf("please input your an integer findData:>#");
	scanf("%d", &findData);
	int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
	int idx = binSearch(arr, sz, findData);
	if (NOT_FOUND != idx)
	{
		printf("找到了%d,下标是%d\n", findData, idx);
	}
	else
	{
		printf("没有在数组中找到%d\n", findData);
	}

	system("pause");
	return 0;
}
#define START 1
#define END 10
int Fact(int n)
{
	int ret = 1;
	for (int i = n; i >= 1; i--)
	{
		ret *= i;
	}
	return ret;
}
int FactAdd(int start, int end)
{
	int sum = 0;
	for (int i = start; i <= end; i++)
	{
		sum += Fact(i);
	}
	return sum;
}
int main6()
{
	//Q:求1! + 2! + 3! + ... + 10!的和
	//面向过程,解耦
	int total = FactAdd(START, END);
	printf("%d! + ... + %d! = %d\n", START, END, total);
	system("pause");
	return 0;
}
int Factorial(int n)
{
	int res = 1;
	for (int i = n; i >= 1; i--)
	{
		res *= i;
	}
	return res;
}
int main5()
{
	//Q:求n的阶乘 
	int n = 0;
	printf("please input a plus integer number:>#");
	scanf("%d", &n);//输入50得阶乘0,溢出,改为long long类型也得0,同样溢出
	//所以这份代码只能解决少量的问题,以后运用大数运算解决这个阶乘问题.百度搜索:大数运算C语言版先研究研究,用数组来模拟运算
	printf("%d的阶乘是%d\n", n, Factorial(n));
	system("pause");
	return 0;
}
int main4()
{
	int i = 0;
	do
	{
		if (5 == i)
		{
			printf("out!\n");
			continue;
		}
		printf("i = %d\n", i);
		i++;
		Sleep(300);
	} while (printf("."), i < 10);//while （printf("")）等价于while (0), while (printf(".")) 等价于 while (1)
	printf("end!\n");
	//int i = 0;
	//do
	//{
	//	if (5 == i)
	//	{
	//		printf("out!\n");
	//		continue;
	//	}
	//	printf("i = %d\n", i);
	//	i++;
	//	Sleep(200);
	//} while (i < 10);
	//printf("end!\n");//0,1,2,3,4,out!out!....死循环
	//int i = 0;
	//do
	//{
	//	if (5 == i)
	//	{
	//		printf("out!\n");
	//		break;
	//	}
	//	printf("i = %d\n", i);
	//	i++;
	//	Sleep(1000);
	//} while (i < 10);
	//printf("end!\n");
	//while/for循环可能一次也不执行,但是dowhile循环至少执行一次
	//int i = 0;
	//do
	//{
	//	printf("i = %d\n", i);
	//	i++;
	//	Sleep(1000);
	//} while (0);
	//printf("end!\n");
	//int i = 0;
	//do
	//{
	//	printf("i = %d\n", i);
	//	i++;
	//	Sleep(500);
	//} while (i < 10);
	//printf("end!\n");
	system("pause");
	return 0;
}
int get_max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main3()
{
	int a;
	int b;
	scanf_s("输入两个数: %d %d", &a, &b);
	int max = get_max(a, b);
	printf("max=%d\n", max);
	system("pause");
	return 0;
}
int main2()
{
	//if (k == 1)
	//{
	//	//if (0) if (1) 
	//}
	//if (k = 1)//应写成if (1 = k)这样写编译器就会提前警告,而不是得我们自己去找bug
	//{
	//	//if (k)
	//}
	//int k = 0;
	//if (k = 1)
	//{
	//	printf("Hello World!");
	//}
	//一道笔试题:请问循环要循环多少次	
	//答:循环了0次
	//int i = 0;
	//int k = 0;
	//int count = 0;
	//for (i = 0, k = 0; k = 0; i++, k++)
	//{
	//	k++;		
	//	count++;
	//}
	//printf("count = %d\n", count);//0

	//int x = 0;
	//int y = 0;
	//for (x = 5, y = 10; x < 10 && y < 20; x++, y++)
	//{
	//	printf("%d, %d\n", x, y);
	//}
	//int x;
	//x = printf("hello"), printf("world!");
	//printf("x = %d\n", x);
	//printf("\n");
	//x = (printf("hello"), printf("world!"));
	//printf("x = %d\n", x);
	//int x = 100;
	//int a = 0;
	//a = printf("hello world\n"), x = 200, x == 100;
	//printf("a = %d, x = %d\n", a, x);
	//int x = 100;//用逗号隔开的多个表达式的集合就叫做逗号表达式
	// //特性:1.从左到右依次都会被执行	2.表达式最终结果以最后一个表达式为准
	//int a = (printf("hello world\n"), x = 200, x == 100);//hello world
	//printf("%d, %d\n", x, a);//200, 0
	//system("pause");
	return 0;
}
int main1()
{
	//for (;;)
	//{
	//	printf(".");
	//	Sleep(100);
	//	break;//break跳出死循环
	//}
	//int arr[10] = { 0 };
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}
	//for (int i = 0; i <= 9; i++)//[)
	//{
	//	printf("%d\n", i);
	//	Sleep(300);
	//}
	//不建议这样写,应写成i < 10健壮性强一点
	//for (int i = 0; i != 10; i++)
	//{
	//	printf("%d\n", i);
	//	Sleep(300);
	//	i += 100;//条件更新不建议写在这里
	//}
	//int i = 0;
	//while (i < 10)
	//{
	//	if (5 == i)//死循环
	//	{
	//		printf("out!!!\n");
	//		continue;
	//	}
	//	printf("i = %d\n", i);
	//	i++;
	//	Sleep(500);
	//}
	//for (int i = 0; i < 10; )//死循环
	//{
	//	if (5 == i)
	//	{
	//		printf("out!\n");
	//		continue;
	//	}
	//	printf("i = %d\n", i);
	//	i++;
	//	Sleep(100);
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	if (5 == i)
	//	{
	//		printf("out!!!\n");
	//		continue;
	//	}
	//	printf("i = %d\n", i);
	//	Sleep(100);
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	if (5 == i)
	//	{
	//		printf("out!\n");
	//		break;
	//	}
	//	printf("i = %d\n", i);
	//	Sleep(100);
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("i = %d\n", i);
	//	Sleep(100);
	//}
	//int i = 0;
	//for (; i < 10; i++)
	//{
	//	printf("%d\n", i);
	//	Sleep(100);
	//}
	system("pause");
	return 0;
}