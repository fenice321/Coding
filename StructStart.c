#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//����һ��ѧ��,һЩ����
//����
//����
//�绰����
//�Ա�

//struct �ṹ��ؼ��� Stu-�ṹ���ǩ-�ṹ����   struct Stu-�ṹ������
//struct Stu
//{
//	//��Ա�б�-��Ա�����б�
//	char name[20];
//	short age;
//	char tele[30];
//	char gender[4];
//} s1, s2, s3;//�ֺŲ���ȱ��,C�в����пսṹ��
//s1, s2, s3������ȫ�ֽṹ�����
//һ���:�����ǲ�ռ���ڴ�ռ��,�����������ɵı���ռ�ڴ�ռ�
//typedef struct _Stu
//{
//	char name[20];
//	short age;
//	char tele[20];
//	char sex[5];
//} Stu;
//int main()
//{
//	struct _Stu s;//������һ���ֲ��ṹ�����
//	Stu s1 = { "����", 20, "18855888988", "��" };
//	Stu s2 = { "����", 22, "18878898828", "����" };
//
//	system("pause");
//	return 0;
//}
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe", { 100, 't', "hello world!", 3.13 }, arr };
//	printf("%s\n", t.ch);//hehe
//	printf("%d\n", t.s.a);//100
//	printf("%c\n", t.s.c);//t
//	printf("%s\n", t.s.arr);//hello world!
//	printf("%lf\n", t.s.d);//3.130000
//	printf("%s\n", t.pc);//hello bit\n
//	system("pause");
//	return 0;
//}

typedef struct _Stu
{
	char name[20];
	short age;
	char tele[20];
	char sex[5];
} Stu;
void Print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age :%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex :%s\n", tmp.sex);
}
void Print2(Stu* ps)
{
	printf("name:%s\n", ps->name);
	printf("age :%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex :%s\n", ps->sex);
}
int main()
{
	Stu s = { "����", 40, "18828888388", "��" };
	Print1(s);
	Print2(&s);
	system("pause");
	return 0;
}