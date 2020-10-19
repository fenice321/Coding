#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
void menu1()
{
	printf("**************************************\n");
	printf("**************************************\n");
	printf("**************************************\n");
	printf("**************************************\n");
}
int  main()
{
	int select = 0;
	do
	{
		menu1();
		printf("请选择:<1 or 0>#");
		scanf("%d", &select);
		switch (select)
		{
			
		}
	} while ();
	system("pause");
	return 0;
}








void menu()
{
	printf("**************************************************************************\n");
	printf("******************************  1 -> play   ******************************\n");
	printf("******************************  0 -> exit   ******************************\n");
	printf("**************************************************************************\n");
	return;
}
void game()
{
	int ret = rand() % 100 + 1;
	int num = 0;
	while (1)
	{
		printf("请猜数字:<1 ~ 100>#");
		scanf("%d", &num);
		if (num > ret)
		{
			printf("您猜大了!\n");
		}
		else if (num < ret)
		{
			printf("您猜小了!\n");
		}
		else
		{
			printf("恭喜你猜对了!\n");
			break;
		}
	}
	
	return;
}
int main12()
{
	//作业标题:猜数字游戏
	//作业内容:完成上课的猜数字游戏
	srand((unsigned int)time(NULL));//只设置一次随机数发生器
	int select = 0;
	do
	{
		Sleep(1000);
		system("cls");
		menu();
		printf("请输入您的选择:<1 or 0>#");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			//printf("玩游戏!\n");
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("选择错误!\n");
			break;
		}
	} while (select);
	system("pause");
	return 0;
}
int main11()
{
	//作业标题:分数求和
	//作业内容:计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值,打印出结果
	double sum = 0.0;
	double flag = -1.0;
	for (int i = 1; i <= 100; i++)
	{
		flag = -flag;
		sum += flag * 1 / i;
	}
	printf("sum = %lf\n", sum);
	system("pause");
	return 0;
}
#define STA 1
#define END 100
int countOfNine(int sta, int end)
{
	int count = 0;
	for (int i = sta; i <= end; i++)
	{
		if ((i % 10) == 9)
		{
			//printf("%d ", i);
			count++;
		}
		if ((i / 10) == 9)
		{
			//printf("%d ", i);
			count++;
		}
	}
	return count;
}
int main10()
{
	int count = countOfNine(STA, END);
	printf("count = %2d\n", count);
	system("pause");
	return 0;
}
#define START 100
//#define END 200
int printPrime4(int start, int end)
{
	int count = 0;
	int j = 0;
	for (int i = start + 1; i <= end; i += 2)
	{
		for (j = 2; j < i / 2; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i / 2)
		{
			count++;
			printf("%d\n", i);
		}
	}
	return count;
}
int printPrime3(int start, int end)
{
	int count = 0;
	int j = 0;
	for (int i = start + 1; i <= end - 1; i += 2)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d\n", i);
		}
	}
	return count;
}
int printPrime2(int start, int end)
{
	int count = 0;
	int j = 0;
	for (int i = start + 1; i <= end - 1; i += 2)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d\n", i);
		}
	}
	return count;
}
int printPrime1(int start, int end)
{
	int count = 0;
	int j = 0;
	for (int i = start; i <= end; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d\n", i);
		}
	}
	return count;
}
int main9()
{
	//作业标题:打印素数
	//作业内容:写一个代码：打印100~200之间的素数
	//判断素数:只能被1和它本身整除的数叫做素数prime number
	
	//int count1 = printPrime1(START, END);
	//printf("%d到%d之间素数有%d个\n", START, END, count1);
	//int count2 = printPrime2(START, END);
	//printf("%d到%d之间素数有%d个\n", START, END, count2);
	int count4 = printPrime4(START, END);
	printf("%d到%d之间素数有%d个\n", START, END, count4);
	system("pause");
	return 0;
}
//int my_ascii(char ch)//计算机用map实现ASCII表,这里只是个简单示例
//char my_ascii(int in)
//{
//	char ret = -1;
//	switch (in)
//	{
//	case 97:
//		ret = 'a';
//		break;
//	case 122:
//		ret = 'z';
//		break;
//	case 65:
//		ret = 'A';
//		break;
//	case 90:
//		ret = 'Z';
//		break;
//		//......
//	default:
//		break;
//	return ret;
//	int ret = -1;
//	switch (ch)
//	{
//	case 'a':
//		ret = 97;
//		break;
//	case 'z':
//		ret = 122;
//		break;
//	case 'A':
//		ret = 65;
//		break;
//	case 'Z':
//		ret = 90;
//		break;
//		//......
//	default:
//		break;
//	}
//	return ret;
//}
int main8()
{
	//int ch = '\0';
	//printf("%d\n", 'a');//97
	//printf("%c\n", 99);//c
	int a = 'a' + 'c';
	printf("a = %d\n", a);//196
	printf("a = %c\n", a);//乱码
	printf("a = %u\n", a);
	//int ret = my_ascii('a');
	//printf("%d\n", ret);
	//ret = my_ascii('d');
	//printf("%d\n", ret);
	system("pause");
	return 0;
}
int main7()
{
	int ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if ((ch >= 'a') && (ch <= 'z'))
		{
			putchar(ch);
		}
	}
	printf("%d\n", ch);
	//int ch = '\0';
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch > '9' || ch < '0')
	//		continue;
	//	putchar(ch);
	//}
	//printf("%d\n", ch);
	system("pause");
	return 0;
}
int main6()
{
	//getchar没有入参,返回值是int是为了EOF异常显示
	//EOF:end-of-file文件结束标志或文件读取异常
	//int getchar(void);
	//int putchar(int character);
	int ch = 0;//ch定义为整型
	int x = 0;
	//scanf("%d", &x);//输入1234,实际上是字符串"1234"
	//一般在输入输出的时候,对应输入输出的内容都是字符
	while ((ch = getchar()) != EOF) 
	{//C语言中表示输入字符结束:ctrl+z键即可
		putchar(ch);//windows认为，如果缓冲中还有其它内容，ctrl+z不表示输入结束，仅代表当前行输入结束，只在单独一个ctrl+z的时候才表示输入结束。
	}
	printf("%d\n", ch);
	printf("######\n");
	putchar(ch);
	system("pause");
	return 0;
}
//#define START 1
//#define END 10
int main5()
{
	int i = 1;
	while (i <= 10)
	{
		i = i + 1;
		if (5 == i)
		{
			continue;
		}
		printf("%d ", i); //2 3 4 6 7 8 9 10 11
	}
	putchar(10);
	//int i = 1;
	//while (i <= 10)
	//{
	//	if (5 == i)
	//	{
	//		continue;
	//	}
	//	printf("%d ", i);
	//	i = i + 1;
	//}
	//putchar(10);
	//int i = 1;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//	{
	//		break;
	//	}
	//	printf("%d ", i);
	//	i = i + 1;
	//}
	//putchar(10);
	//int count = 0;
	//while (1)
	//{
	//	Sleep(100);
	//	count++;
	//	if (10 == count)
	//	{
	//		//break;
	//		continue;
	//	}
	//	printf("%d\n", count);
	//}
	//int i = START - 1;
	//while (i <= END)
	//{
	//	i++;
	//	Sleep(100);
	//	if (i == 7)
	//	{
	//		//i++;
	//		//printf("%d\n", 7);
	//		break;//跳出循环,结束该循环
	//		//continue;//跳回,结束当前轮次循环,提前进入下次循环
	//	}
	//	printf("%d\n", i);
	//}
	//Q:在屏幕上打印1~10
	//int i = START;
	//while (i <= END)
	//{
	//	printf("%d ", i);
	//	i++;
	//}
	//putchar(10);
	//printf("%d\n", i);
	system("pause");
	return 0;
}
enum Day
{
	MON = 1,
	TUE,
	WED,
	THU,
	FRI,
	SAT,
	SUN
};
int main4()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	//int day = 0;
	//printf("请输入今天星期几:>#");
	//scanf("%d", &day);
	//switch (day)
	//{
	//case MON:
	//case TUE:
	//case WED:
	//case THU:
	//case FRI:
	//	printf("周内\n");
	//	break;
	//case SAT:
	//case SUN:
	//	printf("周末\n");
	//	break;
	//default:
	//	printf("<1~7>\n");
	//	break;
	//}
	//int day = 0;
	//printf("请输入今天星期几:>#");
	//scanf("%d", &day);
	//switch (day)
	//{
	//case MON:
	//	printf("星期一\n");
	//	break;
	//case TUE:
	//	printf("星期二\n");
	//	break;
	//case WED:
	//	printf("星期三\n");
	//	break;
	//case THU:
	//	printf("星期四\n");
	//	break;
	//case FRI:
	//	printf("星期五\n");
	//	break;
	//case SAT:
	//	printf("星期六\n");
	//	break;
	//case SUN:
	//	printf("星期天\n");
	//	break;
	//default:
	//	//printf("请输入<1~7>\n");
	//	break;
	//}
	system("pause");
	return 0;
}
//#define START 1
//#define END 100
int main3()
{
	//Q2:输出1-100之间的奇数
	for (int i = START; i <= END; i++)
	{
		if (i & 1)
		{
			printf("%-3d是奇数\n", i);
		}
	}
	//Q1:判断一个数字是否是奇数
	//特殊方法
	//int num = 0;
	//printf("please input an integer number:>#");
	//scanf("%d", &num);
	//if (1 & num)
	//{
	//	printf("%d是奇数\n", num);
	//}
	//else
	//{
	//	printf("%d不是奇数\n", num);
	//}
	//普通方法:
	//int num = 0;
	//printf("please input an integer number:>#");
	//scanf("%d", &num);    
	//if (num % 2)
	//{//num % 2有负数求奇偶的兼容
	//	printf("%d是奇数\n", num);
	//}
	//else
	//{
	//	printf("%d不是奇数\n", num);
	//}
	system("pause");
	return 0;
}
int main2()
{
	//悬空else语句
	int a = 0;
	int b = 1;
	if (a == 0)
	{
		if (b == 2)
		{
			printf("b == 2\n");
		} 
	}
	else//else采用和相邻的if匹配 
	{ 
		printf("a != 0\n");
	}
	//int a = 0;
	//int b = 1;
	//if (a == 0)
	//	if (b == 2)
	//		printf("b == 2\n");
	//else//else采用和相邻的if匹配 
	//	printf("a != 0\n");
	system("pause");
	return 0;
}
#define _AGE 18
int main1()
{
	int age = 0;
	printf("please input your age:>#");
	scanf("%d", &age);
	if (age < _AGE && age >= 0)
		printf("你还是少年!\n");
		//printf("奔跑吧,后浪!\n");//语法错误
	else if (age >= _AGE && age < 30)
		printf("你还是个骚年!\n");
	else if (age >= 30 && age < 50)
		printf("你还是个中年!\n");
	else if (age >= 50 && age < 100)
		printf("你还是个老年人!\n");
		//;//多打一个分号都会语法错误,造成else单独使用
	else if (age >= 100)
		printf("...\n");
	else
		printf("你输入的年龄有问题,请重新输入!\n");
	//int age = 0;
	//printf("please input your age:>#");
	//scanf("%d", &age);
	//if (age < _AGE && age >= 0)
	//{
	//	printf("你还是少年!\n");
	//}
	//else if (age >= _AGE && age < 30)
	//{
	//	printf("你还是个骚年!\n");
	//}
	//else if (age >= 30 && age < 50)
	//{
	//	printf("你还是个中年!\n");
	//}
	//else if (age >= 50 && age < 100)
	//{
	//	printf("你还是个老年人!\n");
	//}
	//else if (age >= 100)
	//{
	//	printf("...\n");
	//}
	//else
	//{
	//	printf("你输入的年龄有问题,请重新输入!\n");
	//}
	//;//空语句可以编译通过
	//int a = 10;
	//int b = 20;
	//a = a + b;
	system("pause");
	return 0;
}
//#define SIZE 64
//struct Stu{...};定义了一个自定义的类型(相对于C语言的内置类型int/short...而言)
//struct Stu
//{
//	char name[SIZE];
//	int age;
//	char sex[SIZE / 8];
//	char telephone[SIZE / 4];
//	//籍贯,各种成绩...
//} cc, *x;
//int main()
//{
//	//int a = 10
//	//定义一个结构体变量并进行初始化
//	struct Stu Tom = { "Tom", 19, "男", "1234567" };
//	struct Stu* p = &Tom;
//	printf("%s, %s\n", Tom.name, Tom.telephone);
//	printf("%s, %s\n", (*p).name, (*p).telephone);
//	printf("%s, %d\n", p->sex, p->age);
//	return 0;
//}