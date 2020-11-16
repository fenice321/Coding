#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

#if 0
void func1(int x)
{
	int a = x;
	printf("a = %d\n", a);
	{
		int b = 100;
		printf("b = %d\n", b);
	}
	//printf("b = %d\n", b);
}
void func2()
{
	int a = 2;
	printf("a = %d\n", a);
}
int main()
{
	func1(10);
	func2();
	system("pause");
	return 0;
}
#endif
#if 0
int main()
{
	//unsigned long pulArr[] = { 6, 7, 8, 9, 10 };
	//unsigned long* pulP = pulArr;
	//*(pulP + 3) += 3;
	//printf("%d, %d\n", *pulP, *(pulP + 3));
	int i;
	char acNew[20];
	for (i = 0; i < 5; i++)
	{
		acNew[i] = '0';
	}
	printf("%d\n", strlen(acNew));
	system("pause");
	return 0;
}
#endif
#if 0
typedef struct stu
{
	int num;
	char name[10];
	int age;
} Stu;
void func(Stu* ps)
{
	printf("%s\n", (*ps).name);
}
int main()
{
	Stu students[3] = { { 9801, "zhang", 20 }
	, { 9802, "wang", 20 }, { 9803, "zhao", 18 } };
	func(students + 1);
	system("pause");
	return 0;
}
#endif
#if 0
int main()
{
	union
	{
		short k;
		char i[2];
	} *s, a;
	s = &a;
	s->i[0] = 0x39;
	s->i[1] = 0x38;
	printf("%x\n", a.k);
	system("pause");
	return 0;
}
#endif
#if 0
//对于宏运算只要原样替换就行,切记心急吃不了热豆腐
#define N 4
#define Y(n) ((N + 2) * n)
int main()
{
	int z = 2 * (N + Y(5 + 1));
	printf("z = %d\n", z);
	system("pause");
	return 0;
}
#endif
#if 0
#define BUF_LEN 2048
struct AAA
{
	unsigned long ulLen;
	char buf[BUF_LEN];
};
void PrintBufLen(struct AAA* pBuf)
{
	if (NULL == pBuf)
	{
		printf("Error, pBuf is NULL. \n");
		return;
	}
	printf("len = %u\n", pBuf->ulLen);
	return;
}
void PrintBufLen(struct AAA Buf)
{
	printf("len = %u\n", Buf.ulLen);
	return;
}
int main()
{
	system("pause");
	return 0;
}
#endif
#if 0
int main()
{
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;
	c = a + b;
	printf("%d, %d\n", a + b, c);//300 44
	system("pause");
	return 0;
}
#endif
#if 0
#define A 2
#define B 3
#define MAX_SIZE A + B
struct Record_Struct
{
	unsigned char Env_Alarm_ID:4;
	unsigned char Paral:2;
	unsigned char state;
	unsigned char avail:1;
} *Env_Alarm_Record;
int main()
{
	printf("%d\n", sizeof(struct Record_Struct));//3
	struct Record_Strut* pointer = (struct Record_Struct*)malloc(sizeof(struct Record_Struct) * MAX_SIZE);
	system("pause");
	return 0;
}
#endif
#if 0
int main()
{
	char c;
	unsigned char uc;
	unsigned short us;
	c = 128;
	uc = 128;
	us = c + uc;
	printf("0x%x\n", us);
	us = (unsigned char)c + uc;
	printf("0x%x\n", us);
	us = c + (char)uc;
	printf("0x%x\n", us);
	system("pause");
	return 0;
}
#endif
#if 0
unsigned short* sum(unsigned char a, unsigned char b)
{
	/*static*/ unsigned short s = 0;
	s = a + b;
	return &s;
}
int main()
{
	unsigned short* p = NULL;
	unsigned char a = 1, b = 2;
	p = sum(a, b);
	printf("%u + %u", a, b);
	printf("=%u\n", *p);
	system("pause");
	return 0;
}
#endif
#if 0
//#pragma pack(4)
//#pragma pack(1)
#pragma pack(8)
unsigned short* pucCharArray[10][10];
typedef union unRec
{
	//unsigned long ullndex;
	unsigned short ullndes;
	unsigned short usLevel[7];
	unsigned char ucPos;
} REC_S;
REC_S stMax, * pstMax;
int main()
{
	printf("%d\n", sizeof(pucCharArray));//400
	printf("%d\n", sizeof(stMax));//16
	printf("%d\n", sizeof(pstMax));//4
	printf("%d\n", sizeof(*pstMax));//16
	system("pause");
	return 0;
}
#endif
#if 0
struct BBB
{
	long lAl;
	char cA2;
	char cA3;
	long lA4;
	long lA5;
} *p = (struct BBB*)0x100000;
int main()
{
	printf("0x%x\n", p + 0x1);
	printf("0x%x\n", (unsigned long)p + 0x1);
	printf("0x%x\n", (unsigned long*)p + 0x1);
	printf("0x%x\n", (char*)p + 0x1);
	system("pause");
	return 0;
}
#endif
#if 0
#define CHAR char
#define ULONG unsigned long
#define VOID void
CHAR* VOIS_strncpy(CHAR* pcDest, const CHAR* szSrc, ULONG ulLength)
{
	CHAR* pcPoint = pcDest;
	if ((NULL == szSrc) || (NULL == pcDest))
		return NULL;
	while (ulLength && (*pcPoint = *szSrc))
	{
		pcPoint++;
		szSrc++;
		ulLength--;
	}
	if (!ulLength)
	{
		*pcPoint = '\0';
	}
	return pcDest;
}
VOID main(VOID)
{
	CHAR szStrBuf[] = "1234567890";
	CHAR szStrBuf1[] = "1234567890";
	strncpy(szStrBuf, "ABC", strlen("ABC"));
	VOIS_strncpy(szStrBuf1, "ABC", strlen("ABC"));
	printf("Str1 = %s\nStr2 = %s\n", szStrBuf, szStrBuf1);
	system("pause");
	return 0;
}
#endif
#if 0
int fun(int x, int y)
{
	static int m = 0;
	static int i = 2;
	i += m + 1;
	m = i + x + y;
	return m;
}
int main()
{
	int j = 4;
	int m = 1;
	int k;
	k = fun(j, m);
	printf("%d\n", k);
	k = fun(j, m);
	printf("%d\n", k);
	system("pause");
	return 0;
}
#endif
#if 0
//#pragma pack(4)
#pragma pack(1)
union tagAAAA
{
	struct
	{
		char ucFirst;
		short usSecond;
		char ucThird;
	} half;
	short kk;
} number;
struct tagBBBB
{
	char ucFirst;
	short usSecond;
	char ucThird;
	short usForth;
} half;
struct tagCCCC
{
	struct
	{
		char ucFirst;
		short usSecond;
		char ucThird;
	} half;
	long kk;
};
int main()
{
	printf("%d\n", sizeof(union tagAAAA));
	printf("%d\n", sizeof(struct tagBBBB));
	printf("%d\n", sizeof(struct tagCCCC));
	return 0;
}
#endif
#if 0
unsigned long FUNC_C(unsigned long ulAction)
{
	unsigned long  ulResult = 0;
	switch (ulAction)
	{
	case ACTION_A:
		ulResult += 1;
		break;
	case ACTION_B:
		ulResult += 1;
	default:
		ulResult += 1;
	}
	printf("%u\n", ulResult);
	return ulResult;
}
#endif
#if 0
#pragma pack(4)
int main()
{
	unsigned char puc[4];
	struct tagPIM
	{
		unsigned char ucPiml;
		unsigned char unData0 : 1;
		unsigned char unData1 : 2;
		unsigned char unData2 : 3;
	} *pstPimData;
	pstPimData = (struct tagPIM*)puc;
	memset(puc, 0, 4);
	pstPimData->ucPiml = 2;
	pstPimData->unData0 = 3;
	pstPimData->unData1 = 4;
	pstPimData->unData2 = 5;
	printf("%02x, %02x, %02x, %02x\n", puc[0], puc[1], puc[2], puc[3]);
	system("pause");
	return 0;
}
#endif
#if 0
//错题
void AddFunc(unsigned int a, unsigned int b, unsigned int* c)
{
	*c = a + b;
}
int main()
{
	unsigned char e = 20;
	unsigned char f = 100;
	unsigned char g = 0;
	AddFunc((unsigned int)e, (unsigned int)f, (unsigned int*)(&g));
	printf("%d\n", g);
	system("pause");
	return 0;
}
#endif

#if 0
//错题
#define ID_LEN 32
typedef struct STR_A
{
	char aucID[ID_LEN];
	int iA;
} SA;
typedef struct STR_B
{
	char* paucID;
	int iB;
} SB;
void funcA(SA stA, SB* pstB)
{
	pstB->paucID = stA.aucID;
}
int main()
{
	SA stA = { 0 };
	SB stB;
	strcpy(stA.aucID, "12345");
	funcA(stA, &stB);
	printf("%s\n", stB.paucID);
	system("pause");
	return 0;
}

#define ID_LEN 32
typedef struct STR_A
{
	char aucID[ID_LEN];
	int iA;
} SA;
typedef struct STR_B
{
	char* paucID;
	int iB;
} SB;
void funcA(SA* stA, SB* pstB)
{
	pstB->paucID = stA->aucID;
}
int main()
{
	SA stA = { 0 };
	SB stB;
	strcpy(stA.aucID, "12345");
	funcA(&stA, &stB);
	printf("%s\n", stB.paucID);
	system("pause");
	return 0;
}
#endif
#include "myMax.h"
int main()
{
	myMax();
	system("pause");
	return 0;
}
