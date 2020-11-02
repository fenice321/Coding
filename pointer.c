#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

#pragma warning(disable:4996)
#pragma warning(disable:6031)
int main()
{

	system("pause");
	return 0;
}
//int countOfDiffBit(int m, int n)
//{
//	int count = 0;
//	int tmp = m ^ n;//两数对应二进制制序列相同位全变为0不同位全变为1存储到tmp中,然后计算tmp中又多少1即可
//	while (tmp)
//	{
//		count++;
//		tmp &= (tmp - 1);
//	}
//	return count;
//}
//int main()
//{
//	//作业标题:求两个数二进制中不同位的个数
//	//作业内容:编程实现:两个int(32位)整数m和n的二进制表达中,有多少个位(bit)不同?
//	//输入例子:1999 2299
//	//输出例子:7
//	int m = 0;
//	int n = 0;
//	printf("please input two integer numbers:>#");
//	scanf("%d%d", &m, &n);
//	printf("%d\n", countOfDiffBit(m, n));
//	system("pause");
//	return 0;
//}
////好孩子-孩子
////指针数组-数组-存放指针的数组
////数组指针-指针
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	//整型数组-存储整型
//	//字符数组-存储字符
//	//指针数组-存储指针
//	//int arr[10];
//	int* arr[] = { &a, &b, &c };
//	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
//	int** ppa = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		//printf("%d\t", *(*ppa++));
//		printf("%d\t", *arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{//二级指针
//	int a = 10;
//	int* pa = &a;//pa是一级指针
//	int** ppa = &pa;//ppa就是二级指针
//	printf("%d\n", **ppa);//10
//	printf("%d\n", *pa);//10
//	int b = 20;
//	*ppa = &b;
//	printf("%d\n", *pa);//20
//	printf("%d\n", **ppa);//20
//	**ppa = 30;
//	printf("%d\n", **ppa);//30
//	printf("%d\n", *pa);//30
//	printf("%d\n", b);//30
//	printf("%d\n", a);//10
//	//int*** pppa = &ppa;//pppa是三级指针
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int sz = (int)(sizeof(arr) / sizeof(*arr));
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d\t", *p++);
//	}
//	putchar(10);
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	printf("%d\t", *p++);
//	//}
//	//putchar(10);
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	printf("&arr[%d] = %p <====> p + %d = %p\n", i, &arr[i], i, p + i);
//	//}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	//arr-首元素的地址除了两种情况:1.sizeof(数组名) 2.&数组名
//	//上述两种情况数组名表示的是整个数组 1.求的是整个数组的大小 2.取的是整个数组的地址
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	//1.&arr-&数组名-数组名不是首元素的地址-数组名表示整个数组-&数组名 取出的是整个数组的地址
//	//2.sizeof(arr)-sizeof(数组名)-数组名表示的整个数组-sizeof(数组名)计算的是整个数组的大小
//	system("pause");
//	return 0;
//}
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = values; vp < &values[N_VALUES];)
//	{//标准规定:指向数组内的元素的指针可以与指向数组最后一个元素后面的内存空间的指针比较,
//		*vp++ = 0;
//	}
//	//vp = values;
//	vp -= 5;
//	for (int i = 0; i < N_VALUES; i++)
//	{
//		printf("%f\n", *vp++);
//	}
//
//	//float values[N_VALUES];
//	//float* vp;
//	//for (vp = &values[N_VALUES]; vp > values;)
//	//{//标准规定:指向数组内元素的指针可以与指向数组最后一个元素后面的内存空间的指针进行比较
//	//	//--vp;
//	//	//*vp = 0;
//	//	*--vp = 0;
//	//}
//	////vp = values;
//	//for (int i = 0; i < N_VALUES; i++)
//	//{
//	//	printf("%f\n", *vp++);
//	//}
//
//	//float values[N_VALUES];
//	//float* vp;
//	////实际在绝大多数编译器是可以顺利完成任务的,然而还是得避免这样写,因为标准并不保证它可行
//	//for (vp = &values[N_VALUES - 1]; vp >= values; )
//	//{//标准规定:指向数组中元素的指针可以与指向数组最后一个元素后面内存空间的指针进行比较
//	//	*vp-- = 0;//但是不能和指向数组第一个元素之前的内存空间的指针进行比较
//	//}
//	////vp++;
//	//vp = values;
//	//for (int i = 0; i < N_VALUES; i++)
//	//{
//	//	printf("%f ", *vp++);
//	//}
//	system("pause");
//	return 0;
//}
//int myStrlen1(const char* str)//计数器法
//{
//	int len = 0;
//	while (*str++)
//	{
//		len++;
//	}
//	return len;
//}
//int myStrlen2(const char* str)//递归求解法
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return (1 + myStrlen2(str + 1));
//	}
//}
//int myStrlen3(const char* str)//指针求解法---指针-指针法
//{
//	const char* ph = str;
//	const char* pt = str;
//	while (*pt)
//	{
//		pt++;
//	}
//	return pt - ph;
//}
//int main()
//{
//	//strlen库函数---求字符串长度
//	//3种方法
//	//1.计数器计算
//	//2.递归法
//	//3.指针运算法---指针-指针
//	const char* p1 = "I love China";
//	const char* p2 = "I love you";
//	const char* p3 = "Do you love me";
//	int len = 0;
//	len = myStrlen1(p1);
//	printf("len = %d\n", len);
//	len = myStrlen2(p2);
//	printf("len = %d\n", len);
//	len = myStrlen3(p3);
//	printf("len = %d\n", len);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char ch[5] = "";
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = (int)(sizeof(arr) / sizeof(*arr));
//	printf("%d\n", &arr[sz - 1] - arr);//9
//	printf("%d\n", arr - &arr[sz - 1]);//-9
//	//printf("%d\n", ch - arr);//errror ==+?  warning C4133: “-”: 从“int *”到“char *”的类型不兼容
//	system("pause");
//	return 0;
//}
//#define N_VALUE 5
//int main()
//{
//	float value[N_VALUE];
//	float* vp;
//	for (vp = value; vp < &value[N_VALUE];)
//	{
//		*vp++ = 0;
//	}
//	vp = value;
//	for (int i = 0; i < N_VALUE; i++)
//	{
//		printf("%d ", *vp++);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//指针运算---指针+-整数
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = (int)(sizeof(arr) / sizeof(*arr));
//	int* pa = &arr[9];
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d\n", *pa--);
//	}
//	//int* p = arr;
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	printf("%d ", *p); 
//	//	p += 2;
//	//}
//	//for (int i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *p++);
//	//	//printf("%d ", *p);
//	//	//p = p + 1;
//	//	//p++;
//	//}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int b = 0;
//	//int a = 10;
//	//int* pa = &a;//初始化
//	//int* p = NULL;//NULL-((void*)0)用来初始化指针,给指针赋值
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;//NULL指针既不可读也不可写
//	//*pa = 10;
//	if (pa != NULL)//指针使用前检查有效性
//	{
//		*pa = 209;
//	}
//	system("pause");
//	return 0;
//}
//int* test()
//{
//	//int a = 10;
//	//return &a;//警告:返回了一个局部变量的地址
//	int arr[10] = { 0 };
//	return arr;//警告:返回了一个局部变量的地址
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);//野指针非法访问内存空间
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a[10] = { 0 };
//	int*p = a;
//	for (int i = 0; i <= 12; i++)
//	{
//		//*p = i;
//		//p++;
//		*p++ = i;
//		//指针对数组越界访问导致的野指针问题
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//未初始化的指针变量
//	int* p;//局部变量不初始化里边默认放的是一个随机值
//	*p = 20;//非法访问操作内存,p是野指针
//	system("pause");
//	return 0;
//}
//如何规避野指针
//1.指针初始化
//2.小心指针越界
//3.指针指向的空间释放即置NULL
//4.指针使用前检查有效性
//int* test()
//{
//	int a = 10;
//	return &a;//warning C4172: 返回局部变量或临时变量的地址: a
//}
//int main()
//{
//	int* p = test();//返回的地址指向的空间被OS回收,是个野指针
//	*p = 20;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 12; i++)//指针越界访问数组也是野指针
//	{
//		*p++ = i;
//	}
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a;//局部变量不初始化,默认值是随机值
//	int* p;//局部指针变量不初始化,默认值也是随机值--即保存了随机地址,指向内存中随机的一段空间,这是很可怕的
//	//*p = 20;//对野指针的操作危险且没有意义
//	system("pause");
//	return 0;
//}
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))//易错题
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *p++);
//		printf("%d\n", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pi = &a;
//	char* pc = (char*)&a;
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	system("pause");
//	return 0;
//}
//int main()
//{
////	printf("%d\n", sizeof(char*));
////	printf("%d\n", sizeof(short*));
////	printf("%d\n", sizeof(int*));
////	printf("%d\n", sizeof(double*));
//	int a = 0x11223344;
//	//int* pi = &a;
//	//*pi = 0;
//	char* pc = &a;//warning C4133: “初始化”: 从“int *”到“char *”的类型不兼容
//	*pc = 0;
//	//printf("pi = %p\n", pi);
//	//printf("pc = %p\n", pc);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("*p = %d\n", *p);
//	system("pause");
//	return 0;
//}