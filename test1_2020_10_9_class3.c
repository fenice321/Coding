#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
//1.为什么有指针?
//设想如果学校宿舍没有宿舍号查找一个人的效率得多么低啊!任何一间宿舍都有宿舍号的存在提高了查找效率
//同理:为了方便查找,提高效率和查找准确率,我们给内存中的每个字节都带上了编号,这里所谓的"编号"在计算机中
//我们称之为地址,而一般的地址具有明显的指向性(我找张三一起打游戏,张三告诉我他宿舍在11栋1楼11寝,我得知
//在脑子里有一个11栋1楼11寝概念,我马上出发去那个地址找他去玩游戏),故我们一般把地址叫做指针
//指针 VS 指针变量
//指针就是地址此处指的是常量,还有一种情况:定义一个指针,此处指针指的是定义了一个变量,变量类型是指针类型,是简称
//指针变量就是一种变量---存储指针/地址的变量
//指针变量:要开辟空间,要有变量名,有变量内容,有地址
#define STARTYEAR 1000
#define ENDYEAR 2000
//闰年判断方法:四年一闰年,百年不闰,四百年再闰
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
	//作业标题: 打印闰年
	//作业内容: 打印1000年到2000年之间的闰年
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
	//作业标题:二分查找 
	//作业内容:编写代码在一个整形有序(升序)数组中查找具体的某个数 
	//要求:找到了就打印数字所在的下标,找不到则输出:找不到。
	int arr[ARRLENGTH] = { 0, 1, 3, 5, 7, 9, 11, 33, 55, 77 };
	int findData = 0;
	printf("please input your findData:>#");
	scanf("%d", &findData);
	int flag = binSearch(arr, ARRLENGTH, findData);
	if (-1 == flag)
	{
		printf("找不到%d\n", findData);
	}
	else
	{
		printf("找到了%d,下标为%d\n", findData, flag);
	}
	system("pause");
	return 0;
}
int main5()
{
	//作业标题:乘法口诀表 作业内容:在屏幕上输出9*9乘法口诀表
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d * %d = %2d ", j, i, j * i);
		}
		//putchar(10);换行:等价于putchar('\n');/printf("\n");/puts("");
		putchar(10);
	}
	system("pause");
	return 0;
}
void mySwap(int* pa, int* pb)//交换
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
//作业标题:求最大值 作业内容:求10 个整数中最大值
	int arr[ARRLENGTH] = { 0 };//初始化清零
	for (int i = 0; i < ARRLENGTH; i++)//输入赋值
	{
		printf("please input an integer array element:>#");
		scanf("%d", &arr[i]);
	}
	int iMax = myArrMax(arr, ARRLENGTH);//找到最大值
	printf("%d个整数中的最大值是%d\n", ARRLENGTH, iMax);
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
	//printf("%d", 1 % 0);//错误:C2124被零除或对零求模	


	int num1 = 0;
	int num2 = 0;
	printf("please input two integer numbers:>#");
	scanf("%d%d", &num1, &num2);
	int res = greatestComDiv(num1, num2);
	if (res != ERR)
	{
		printf("%d与%d的最大公约数是%d\n", num1, num2, res);
	}
	else
	{
		printf("输入数据有误,请重新输入\n");
	}
	system("pause");
	return 0;
}
int main8()
{
	//求最大公约数,最小公倍数
	//思路:最大公约数用辗转相除法,最小公倍数用两数相乘除以最大公约数
	//略优解:
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
	printf("%d与%d最大公约数是%d\n", n1, n2, num2);
	printf("%d与%d最小公倍数是%d\n", n1, n2, (n1 * n2) / num2);
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
	//printf("最大公约数是%d\n", num2);
	//printf("最小公倍数是%d\n", (n1 * n2) / num2);
	return 0;
}
int main2()
{
	//求最大公约数
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
	printf("最大公约数是%d\n", num2);
	//求最小公倍数:(num1 * num2) / 最大公约数; 
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
	//printf("最大公约数是%d\n", num2);
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
	//printf("%d\n", a);//打印a的内容
	//int* p = &a;
	//printf("0x%p\n", &a);
	//printf("0x%p\n", p);//打印p的内容
	//printf("*p = %d\n", *p);
	//解引用,对指针解引用,代表指针所指向的"目标"的内容或者空间,此处是内容
	//此处*p就是a;
	//*p = 100;//用的是*p的空间,通过p间接改了a的内容
	//printf("a = %d\n", a);
	//printf("*p = %d\n", *p);
	//int a = 10;
	//int b = 20;
	//a分别代表什么含义
	//a = b;
	//b = a;
	//int a = 10;
	//int* p = &a;
	//int *q = &a;
	//int a = 10;
	//int b = 20;
	//int* p = &a;
	//p分别代表什么含义
	//p;//这里的p是什么意思呢?不清楚,要结合具体语境分析
	//p = &b;//此时使用的是p的空间,p此时是指针变量属性更多一些,左值
	//int* q = p;//此时使用的是p的内容地址&b,p此时是指针/地址属性多一些,右值
	//int a = 10;
	//a;//问:这里的a指的是内容还是空间?
	//答	:此处无法判断是内容还是空间
	//a分别代表什么含义
	//a = 20;//此处使用的a是空间,左值
	//int b = a;//将a的内容初始化刚定义的变量b,此处使用的a是内容,右值
	//int* a = NULL;//#define NULL (void*)0
	//char* b = NULL;
	//double* c = NULL;
	//printf("sizeof(a) = %d\n", sizeof(a));//32位机下任何类型的指针都是4字节
	//printf("sizeof(b) = %d\n", sizeof(b));
	//printf("sizeof(c) = %d\n", sizeof(c));
	//int a = 10;
	//int b = 20;//开辟了空间
	//int* p = &a;//定义指针(变量)并初始化:要开辟空间4字节,有变量名p,有变量内容&a,有变量地址&p(int**类型)
	system("pause");
	return 0;
}
//#define MAX 1234
//#define add(a, b) a + b
//#define ADD(x, y) ((x) + (y))
//int main()
//{//写代码的时候不要硬编码字面常量
//	//int i = MAX;
//	//printf("i = %d\n", i);
//	printf("%d\n", add(10, 20));
//	printf("%d\n", 10 * add(10, 20));
//	printf("%d\n", ADD(10, 20));
//	printf("%d\n", 10 * ADD(10, 20));
//	system("pause");
//	return 0;
//}
//注意:无论在同文件中还是不同文件中函数先调用后定义可以编译通过,只不过有警告,加声明可以取消警告
//而变量先使用后定义则会编译通不过加声明可以编译通过
//extern void show();//函数声明也可以用extern
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
//extern int g_val;//extern是"通关文牒",extern声明变量和函数,声明变量时只能修饰全局变量
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
//{//变量定义只会初始化一次,但是可以被多次赋值
//  //static修饰局部变量生命周期变成全局的,作用域依旧只在本代码块内有效
//	//static修饰局部变量用来统计某函数历史上被调用了多少次,可以因此来优化函数
//	static int i = 0;//10个1到1-10
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
//	//	//printf("%d\n", i);//错误
//	//}
//	//printf("*pa = %d\n", *pa);
//	//test();
//	system("pause");
//	return 0;
//}