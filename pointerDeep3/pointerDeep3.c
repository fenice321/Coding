#define _CRT_NO_SECURE_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//void test(char** ppc)
//{}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	char** ppc = &pc;
//	test(ppc);
//	test(&pc);
//	test(&(&ch));
//	system("pause");
//	return 0;;
//}
//数组指针-指向数组的指针
//函数指针-指向函数的指针-存放函数的地址
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	//&函数名和函数名都是函数地址
//	printf("%p, %p\n", &Add, Add);
//	//printf("%p, %p\n", &Add + 1, Add + 1);//ERR
//	int(*pa)(int, int) = &Add;
//	printf("%d\n", (*pa)(2, 3));
//	//int(*pb)(int, int) = &Add;
//	//printf("%p, %p\n", pa, pa + 1);
//	//printf("%p, %p\n", pb, pb + 1);
//	system("pause");
//	return 0;
//}
//#include <assert.h>
//void Print(const char* str)
//{
//	assert(str != NULL);
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*pf)(const char*) = Print;
//	(***pf)("hello day");
//	(**pf)("hello world");
//	(*pf)("hello bit");
//	pf("I love you");
//	system("pause");
//	return 0;
//}

//是一个函数声明,函数入参有两个,第一个是int类型,第二个是void(*)(int)型函数指针,
//该函数指针指向一个入参是int,出参是void的函数
//函数出参是void(*)(int)型函数指针,该函数指针指向一个入参int,出参是void的函数
//void(* signal(int, void(*)(int)) )(int);
//typedef void(*ptFunc)(int);
//ptFunc signal(int, ptFunc);
//int main()
//{
//
//	system("pause");
//	return 0;
//}
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pFuncP)(int, int) = add;
//	//printf("%d\n", add(2, 3));
//	//printf("%d\n", pFuncP(2, 3));
//	//printf("%d\n", (*pFuncP)(2, 3));
//	//printf("%d\n", (**pFuncP)(2, 3));
//	//printf("%d\n", (***pFuncP)(2, 3));//此处对函数指针的解引用*毫无意义
//	//printf("%d\n", *pFuncP(2, 3));//err:注意优先级,*优先级低于()
//	pFuncP = &add;
//	printf("%d\n", add(3, 3));
//	printf("%d\n", (*pFuncP)(3, 3));
//	printf("%d\n", pFuncP(3, 3));
//	printf("%d\n", (**pFuncP)(3, 3));
//	printf("%d\n", (***pFuncP)(3, 3));//此处解引用符*毫无意义
//	system("pause");
//	return 0;
//}
//int _add(int x, int y)
//{
//	return x + y;
//}
//int _sub(int x, int y)
//{
//	return x - y;
//}
//int _mul(int x, int y)
//{
//	return x * y;
//}
//int _div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组-数组-保存指针的数组
//	//int* arr[10] = { NULL };
//	//函数指针数组-数组-保存函数指针的数组
//	int(*pa)(int, int) = _add;
//	int(*ps)(int, int) = _sub;
//	int(*pm)(int, int) = _mul;
//	int(*pd)(int, int) = _div;
//	int(*pFuncArr[])(int, int) = { pa, ps, pm, pd };
//	int sz = (int)(sizeof(pFuncArr) / sizeof(pFuncArr[0]));
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", pFuncArr[i](2, 3));
//	}
//	system("pause");
//	return 0;
//}
int main()
{
	int i = -20;
	unsigned int j = 10;
	printf("%d", i + j);
	return 0;
}