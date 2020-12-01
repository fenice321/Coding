#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <errno.h>
void find2DiffInArr1(int* pa, int sz)
{
	int tmp = 0;
	int i = 0;
	int pos = 0;
	int one = 0;
	int another = 0;
	for (i = 0; i < sz; i++)
	{
		tmp ^= pa[i];
	}
	for (i = 0; i < 32; i++)
	{
		if (1 == ((tmp >> i) & 1))
		{
			pos = i;
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((pa[i] >> pos) & 1) == 1)
		{
			one ^= pa[i];
		}
		else
		{
			another ^= pa[i];
		}
	}
	printf("is:%d %d\n", one, another);
}
void find2DiffInArr2(int* pa, int sz, int* px, int* py)
{
	int i = 0;
	int tmp = 0;
	int pos = 0;
	for (i = 0; i < sz; i++)
	{
		tmp ^= pa[i];
	}
	for (i = 0; i < 32; i++)
	{
		if (1 == ((tmp >> i) & 1))
		{
			pos = i;
			break;
		}
	}
	for (int i = 0; i < sz; i++)
	{
		if (1 == ((pa[i] >> pos) & 1))
		{
			*px ^= pa[i];
		}
		else
		{
			*py ^= pa[i];
		}
	}
}
int main()
{
	//作业标题:找单身狗
	//作业内容:一个数组中只有两个数字是出现一次,其他所有数字都出现了两次
	//编写一个函数找出这两个只出现一次的数字
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 7 };
	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
	find2DiffInArr1(arr, sz);
	int one = 0;
	int another = 0;
	find2DiffInArr2(arr, sz, &one, &another);
	printf("is:%d %d\n", one, another);
	system("pause");
	return 0;
}
#if 0
int main()
{
	int n = 9;
	float* pf = (float*)(&n);
	printf("n = %d, *pf = %.2f\n", n, *pf);
	*pf = 9.0f;
	printf("n = %d, *pf = %.2f\n", n, *pf);
	system("pause");
	return 0;
}
typedef struct _Stuff
{
	char sex[4];
	int age;
} Stuff;
typedef union _UN
{
	char sex[8];
	int age;
} UN;
int main3()
{
	//char p[8] = "";
	void* pv = (void*)malloc(8 * sizeof(char));//申请8字节空间
	if (NULL == pv)
	{
		printf("Err:%s\n", strerror(errno));
		return errno;
	}
	char* pc = (char*)pv;//用char*形式解释八个字节
	for (char i = 0; i < 8; i++)
	{
		pc[i] = 'a' + i;
		printf("pc[%d] = %c ", i, pc[i]);
	}
	puts("");

	short* ps = (short*)pv;//用short形式解释八个字节
	for (short i = 0; i < 8 / 2; i++)
	{
		ps[i] = 10 + i;
		printf("ps[%d] = %d ", i, ps[i]);
	}
	puts("");

	int* pi = (int*)pv;//用int*形式解释八个字节
	for (int i = 0; i < 8 / 4; i++)
	{
		pi[i] = 100 + i;
		printf("pi[%d] = %d ", i, pi[i]);
	}
	puts("");

	float* pf = (float*)pv;//用float*形式解释八个字节
	*pf = 0.0f;
	*(pf + 1) = 0.1f;
	printf("*pf = %.2f *(pf + 1) = %.2f\n", *pf, *(pf + 1));

	double* pd = (double*)pv;//用double*形式解释八个字节
	*pd = 1.12345;
	printf("*pd = %.2lf\n", *pd);

	char* psc = (char*)pv;//用字符串形式解释八个字节
	puts(strcpy(psc, "China"));

	Stuff* pS = (Stuff*)pv;//用结构体*形式解释八个字节
	puts(strcpy(pS->sex, "女"));
	pS->age = 20;
	printf("%d\n", pS->age);

	UN* pu = (UN*)pv;//用共用体*形式解释八个字节
	strcpy(pu->sex, "男");
	pu->age = 30;
	printf("%s, %d\n", pu->sex, pu->age);//共用体中数据的临时有效性
	strcpy(pu->sex, "男");
	printf("%s, %d\n", pu->sex, pu->age);//共用体中数据的临时有效性
	system("pause");
	return 0;
}
int main2()
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long double));
	system("pause");
	return 0;
}
int main1()
{
	char a = 0xff;
	printf("%d\n", a);
	unsigned char c = 0xff;
	printf("%u\n", c);
	system("pause");
	return 0;
}
#endif
#if 0
void findDiffInArr(int* pa, int sz)
{
	int tmp = 0;
	int pos = 0;
	int first = 0;
	int second = 0;
	for (int i = 0; i < sz; i++)
	{
		tmp ^= pa[i];
	}
	for (int i = 0; i < 32; i++)
	{
		if (1 == ((tmp >> i) & 1))
		{
			pos = i;
			break;
		}
	}
	for (int i = 0; i < sz; i++)
	{
		if (1 == ((pa[i] >> pos) & 1))
		{
			first ^= pa[i];
		}
		else
		{
			second ^= pa[i];
		}
	}
	printf("first = %d, second = %d\n", first, second);
}
void findDiffInArr1(int* pa, int sz, int* px, int* py)
{
	int tmp = 0;
	int pos = 0;
	for (int i = 0; i < sz; i++)
	{
		tmp ^= pa[i];
	}
	for (int i = 0; i < 32; i++)
	{
		if (1 == ((tmp >> i) & 1))
		{
			pos = i;
		}
	}
	for (int i = 0; i < sz; i++)
	{
		if (1 == (1 & (pa[i] >> pos)))
		{
			*px = *px ^ pa[i];
		}
		else
		{
			*py = *py ^ pa[i];
		}
	}
}
int main()
{
	//一维数组
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));        //16
	//printf("%d\n", sizeof(a + 0));    //4/8
	//printf("%d\n", sizeof(*a));       //4
	//printf("%d\n", sizeof(a + 1));    //4/8
	//printf("%d\n", sizeof(a[1]));     //4
	//printf("%d\n", sizeof(&a));       //4/8
	//printf("%d\n", sizeof(*&a));      //16
	//printf("%d\n", sizeof(&a + 1));   //4/8
	//printf("%d\n", sizeof(&a[0]));    //4/8
	//printf("%d\n", sizeof(&a[0] + 1));//4/8

	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));        //4/8
	//printf("%d\n", sizeof(p + 1));    //4/8
	//printf("%d\n", sizeof(*p));       //1
	//printf("%d\n", sizeof(p[0]));     //1
	//printf("%d\n", sizeof(&p));       //4/8
	//printf("%d\n", sizeof(&p + 1));   //4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8
	//printf("%d\n", strlen(p));        //6
	//printf("%d\n", strlen(p + 1));    //5
	//printf("%d\n", strlen(*p));       //err
	//printf("%d\n", strlen(p[0]));     //err
	//printf("%d\n", strlen(&p));       //随机值
	//printf("%d\n", strlen(&p + 1));   //随机值
	//printf("%d\n", strlen(&p[0] + 1));//5

	//二维数组
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));           //48
	//printf("%d\n", sizeof(a[0][0]));     //4
	//printf("%d\n", sizeof(a[0]));        //16
	//printf("%d\n", sizeof(a[0] + 1));    //4/8
	//printf("%d\n", sizeof(*(a[0] + 1))); //4
	//printf("%d\n", sizeof(a + 1));       //4/8
	//printf("%d\n", sizeof(*(a + 1)));    //16
	//printf("%d\n", sizeof(&a[0] + 1));   //4/8
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16
	//printf("%d\n", sizeof(*a));          //16
	//printf("%d\n", sizeof(a[3]));        //16
	system("pause");
	return 0;
}
#endif