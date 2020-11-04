#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//描述一个学生,一些数据
//名字
//年龄
//电话号码
//性别

//struct 结构体关键字 Stu-结构体标签-结构体名   struct Stu-结构体类型
//struct Stu
//{
//	//成员列表-成员变量列表
//	char name[20];
//	short age;
//	char tele[30];
//	char gender[4];
//} s1, s2, s3;//分号不可缺少,C中不能有空结构体
//s1, s2, s3是三个全局结构体变量
//一般地:类型是不占用内存空间的,但是类型生成的变量占内存空间
//typedef struct _Stu
//{
//	char name[20];
//	short age;
//	char tele[20];
//	char sex[5];
//} Stu;
//int main()
//{
//	struct _Stu s;//定义了一个局部结构体变量
//	Stu s1 = { "淘淘", 20, "18855888988", "男" };
//	Stu s2 = { "富贵", 22, "18878898828", "秘密" };
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
	Stu s = { "李四", 40, "18828888388", "男" };
	Print1(s);
	Print2(&s);
	system("pause");
	return 0;
}