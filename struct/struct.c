#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <assert.h>

#if 0
//����һ���ṹ������
//����һ��ѧ������,����ͨ��ѧ������������һ��ѧ������(����)
//����ѧ��:����-����+�绰+�Ա�+����
//struct _Stu
//{
//	//��Ա�б�
//	char name[20];//����
//	char tele[12];//�绰
//	char sex[10];//�Ա�
//	int age;
//} s4, s5, s6;//�����б�,�˴�ȫ��ѧ�����Ͷ����ȫ�ֽṹ�����
//struct _Stu s3;//ѧ�����Ͷ����ȫ�ֽṹ�����
//int main()
//{
//	//s1��s2��ѧ�����Ͷ���ľֲ��ṹ�����
//	struct _Stu s1;
//	struct _Stu s2;
//	system("pause");
//	return 0;
//}
struct
{
	int a;
	char b;
	float c;
} x;
struct
{
	int a;
	char b;
	float c;
} a[10], *p;
int main()
{
	//�˴����о���,�������Ὣ��������������������ȫ��ͬ����������,�����ǲ����Ϲ�ص�
	p = &x;
	//����/�����ṹ��,����������һģһ����,������Ҳ���Ὣ�俴�ɵȼ۵�,
	system("pause");
	return 0;
}
#endif
#if 0
////����Ľṹ������������
////struct node
////{
////	int data;
////	struct node next;
////};
//
////��ȷ�Ľṹ�������÷���
//struct node
//{
//	int data;
//	struct node* next;
//};
//int main()
//{
//
//	system("pause");
//	return 0;
//}

//����
//typedef struct
//{
//	int data;
//	Node* next;
//} Node;
//��ȷ��������
//typedef struct node
//{
//	int data;
//	struct node* next;
//} Node;
//int main()
//{
//
//	system("pause");
//	return 0;
//}

//�ṹ������Ķ������ʼ��
//��ʼ���͸�ֵ�ǲ�һ����:
//��ʼ�����ߵĹ�����,�����ɱ�����͸�����ֵ,������ʼ��
//��ֵ�ߵ��Ǹ�ֵ���������,�����ɱ�����,ͨ��=��ֵ,������ֵ
struct T
{
	double d;
	short age;
};
struct S
{
	char c;
	struct T st;
	int a;
	double d;
	char arr[20];
};
struct S1
{
	char c1;
	int in;
	char c2;
};
struct S2
{
	char c1;
	char c2;
	int in;
};
struct Point
{
	int x;
	int y;
} p1;
struct Stu
{
	char name[15];
	int age;
};
struct node
{
	int data;
	struct Point p;
	struct node* next;
} n1 = { 10, { 10, 20 }, NULL };
int main()
{
	//struct S s = { 'c', 20, 3.14, "hello world!" };
	//printf("%c, %d, %.2lf, %s\n", s.c, s.a, s.d, s.arr);
	//struct S s = { 'c', { 45.6, 20 }, 30, 4.14, "I love you China!" };
	//printf("%c, %.2lf, %hd, %d, %.2lf, %s\n", s.c, s.st.d, s.st.age, s.a, s.d, s.arr);
	//struct Point p2;
	struct Point p3 = { 'x', 'y' };
	struct Stu s = { "zhangsan", 20 };
	struct node n2 = { 20, { 20, 30 }, NULL };
#if 0
	struct S1 s1;
	struct S2 s2;
	printf("%d\n", sizeof(s1));//12
	printf("%d\n", sizeof(s2));//8
#endif
	system("pause");
	return 0;
}
#endif
#if 0
//�ṹ���ڴ����
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
struct S3
{
	char ch[13];
	short sh;
};
struct S4
{
	char c1;
	struct S3 s3;
	double d;
};
int main()
{
	printf("%d\n", sizeof(struct S3));
	printf("%d\n", sizeof(struct S4));
	system("pause");
	return 0;
}
#endif

#if 0
struct S
{
	int a;
	char c;
	double d;
};
//void initS(struct S tmp)
//{
//	tmp.a = 100;
//	tmp.c = 'Z';
//	tmp.d = 3.14;
//}
void initS(struct S* ps)
{
	ps->a = 100;
	ps->c = 't';
	ps->d = 3.14;
}
//��ֵ:ֻ�Ǵ�ӡ,Ч�ʽϵ�,������԰�ȫ
void Print1(struct S tmp)
{
	printf("%d, %c, %.2lf\n", tmp.a, tmp.c, tmp.d);
}
//��ַ:ֻ�Ǵ�ӡ,Ч�ʽϸ�,������Բ���ô��ȫ
void Print2(struct S* ps)
{
	printf("%d, %c, %.2lf\n", ps->a, ps->c, ps->d);
}
//��ַ:ֻ�Ǵ�ӡ,Ч�ʽϸ�,��԰�ȫ-----�ռ�����
void Print3(const struct S* const ps)
{
	printf("%d, %c, %.2lf\n", ps->a, ps->c, ps->d);
}

//�������ε�ʱ���������Ҫѹջ��,����ʱ��Ϳռ��ϵ�ϵͳ����
//�������һ���ṹ������ʱ��,�ṹ�����,����ѹջ��ϵͳ�����Ƚϴ�,���Իᵼ�����ܵ��½�
//����:�ṹ�崫��Ҫ���ṹ��ָ��
int main()
{
	struct S s = { 0 };
	//initS(s);//��ֵ��ʼ��ʧ��
	initS(&s);//��ַ��ʼ���ɹ�
	Print1(s);//��ֵ��ӡ�ɹ�
	Print2(&s);//��ַ��ӡ�ɹ�
	Print3(&s);
	//s.a = 100;
	//s.c = 'T';
	//s.d = 3.14;
	//printf("%d, %c, %.2lf\n", s.a, s.c, s.d);
	system("pause");
	return 0;
}
#endif
#if 0
//�޸�Ĭ�϶�����
//Windows��Ĭ�϶��������8 #pragma pack(8)
//Linux��û��Ĭ�϶������,����˵Ĭ�϶��������4,�������4�ֽڶ���

//#pragma pack(8)
//struct S1
//{
//	char c1;
//	int in;
//	char c2;
//} s1;
//#pragma pack()
//#pragma pack(1)
//struct S2
//{
//	char c1;
//	char c2;
//	int in;
//} s2;
//#pragma pack()
//int main()
//{
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	system("pause");
//	return 0;
//}

//struct S0
//{
//	char c1;
//	double d;
//};
////����Ĭ�϶�����Ϊ4
//#pragma pack(4)
//struct S1
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////ȡ�����õĶ�����,��ԭΪϵͳ��Ĭ�϶�����
//
////����Ĭ�϶�����Ϊ1
//#pragma pack(1)
//struct S2
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////ȡ�����õĶ�����,��ԭΪϵͳ��Ĭ�϶�����
//int main()
//{
//	printf("%d\n", sizeof(struct S0));
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	system("pause");
//	return 0;
//}
#endif
#if 0
#include <stddef.h>
//offset��ƫ��������˼
//offsetof��һ����,������<stddef.h>ͷ�ļ���
//size_t offsetof(structName, memberName);
//offsetof��һ����,ֻ�ǿ�������������,�������Ǻ���û����������͵ĺ�����,
//��һ�������ǽṹ������,�ڶ��������ǽṹ�еĳ�Ա������,����ֵ�ǳ�Ա������������׵�ַ��ƫ����
struct S
{
	char a;
	int b;
	double c;
};
int main()
{
	printf("%d\n", offsetof(struct S, a));
	printf("%d\n", offsetof(struct S, b));
	printf("%d\n", offsetof(struct S, c));
	system("pause");
	return 0;
}
#endif
struct T
{
	int a;
	int b;
	int c;
	int d;
};

//�ṹ��ʵ��λ��,λ�������ͽṹ������,��������ͬ
//1.λ�εĳ�Ա������signed int/short int/char/ungined int/unsigned short int/unsigned char
//����λ�εĳ�Ա������double/float���ֶ���,һ��λ�����ͳ�Ա��int��ȫ����int,��char����ȫ����char,��ò�Ҫ
//����int����char��ʹ��,��������
//2.λ�εĳ�Ա������һ��ð�ź����һ������

//λ��-һ������Ľṹ������-λ-������λ
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;//λ��ð�ź�������ֲ��ܴ���32/8(int/char)
//};
//int main()
//{
//	printf("%d\n", (int)sizeof(struct T));//16
//	printf("%d\n", (int)sizeof(struct A));//8
//	system("pause");
//	return 0;
//}

//λ���漰�ܶ಻ȷ��������,λ���ǲ���ƽ̨��,ע�ؿ���ֲ�Եĳ���Ӧ�ñ���ʹ��λ��
struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
int main()
{
	struct S s = { 0 };
	printf("%d\n", (int)sizeof(s));//3
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

	system("pause");
	return 0;
}