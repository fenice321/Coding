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
//����ָ��-ָ�������ָ��
//����ָ��-ָ������ָ��-��ź����ĵ�ַ
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
//	//&�������ͺ��������Ǻ�����ַ
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

//��һ����������,�������������,��һ����int����,�ڶ�����void(*)(int)�ͺ���ָ��,
//�ú���ָ��ָ��һ�������int,������void�ĺ���
//����������void(*)(int)�ͺ���ָ��,�ú���ָ��ָ��һ�����int,������void�ĺ���
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
//	//printf("%d\n", (***pFuncP)(2, 3));//�˴��Ժ���ָ��Ľ�����*��������
//	//printf("%d\n", *pFuncP(2, 3));//err:ע�����ȼ�,*���ȼ�����()
//	pFuncP = &add;
//	printf("%d\n", add(3, 3));
//	printf("%d\n", (*pFuncP)(3, 3));
//	printf("%d\n", pFuncP(3, 3));
//	printf("%d\n", (**pFuncP)(3, 3));
//	printf("%d\n", (***pFuncP)(3, 3));//�˴������÷�*��������
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
//	//ָ������-����-����ָ�������
//	//int* arr[10] = { NULL };
//	//����ָ������-����-���溯��ָ�������
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