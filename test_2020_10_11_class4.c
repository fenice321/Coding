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
		printf("��ѡ��:<1 or 0>#");
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
		printf("�������:<1 ~ 100>#");
		scanf("%d", &num);
		if (num > ret)
		{
			printf("���´���!\n");
		}
		else if (num < ret)
		{
			printf("����С��!\n");
		}
		else
		{
			printf("��ϲ��¶���!\n");
			break;
		}
	}
	
	return;
}
int main12()
{
	//��ҵ����:��������Ϸ
	//��ҵ����:����ϿεĲ�������Ϸ
	srand((unsigned int)time(NULL));//ֻ����һ�������������
	int select = 0;
	do
	{
		Sleep(1000);
		system("cls");
		menu();
		printf("����������ѡ��:<1 or 0>#");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			//printf("����Ϸ!\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("ѡ�����!\n");
			break;
		}
	} while (select);
	system("pause");
	return 0;
}
int main11()
{
	//��ҵ����:�������
	//��ҵ����:����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ,��ӡ�����
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
	//��ҵ����:��ӡ����
	//��ҵ����:дһ�����룺��ӡ100~200֮�������
	//�ж�����:ֻ�ܱ�1������������������������prime number
	
	//int count1 = printPrime1(START, END);
	//printf("%d��%d֮��������%d��\n", START, END, count1);
	//int count2 = printPrime2(START, END);
	//printf("%d��%d֮��������%d��\n", START, END, count2);
	int count4 = printPrime4(START, END);
	printf("%d��%d֮��������%d��\n", START, END, count4);
	system("pause");
	return 0;
}
//int my_ascii(char ch)//�������mapʵ��ASCII��,����ֻ�Ǹ���ʾ��
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
	printf("a = %c\n", a);//����
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
	//getcharû�����,����ֵ��int��Ϊ��EOF�쳣��ʾ
	//EOF:end-of-file�ļ�������־���ļ���ȡ�쳣
	//int getchar(void);
	//int putchar(int character);
	int ch = 0;//ch����Ϊ����
	int x = 0;
	//scanf("%d", &x);//����1234,ʵ�������ַ���"1234"
	//һ�������������ʱ��,��Ӧ������������ݶ����ַ�
	while ((ch = getchar()) != EOF) 
	{//C�����б�ʾ�����ַ�����:ctrl+z������
		putchar(ch);//windows��Ϊ����������л����������ݣ�ctrl+z����ʾ���������������ǰ�����������ֻ�ڵ���һ��ctrl+z��ʱ��ű�ʾ���������
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
	//		break;//����ѭ��,������ѭ��
	//		//continue;//����,������ǰ�ִ�ѭ��,��ǰ�����´�ѭ��
	//	}
	//	printf("%d\n", i);
	//}
	//Q:����Ļ�ϴ�ӡ1~10
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
	//printf("������������ڼ�:>#");
	//scanf("%d", &day);
	//switch (day)
	//{
	//case MON:
	//case TUE:
	//case WED:
	//case THU:
	//case FRI:
	//	printf("����\n");
	//	break;
	//case SAT:
	//case SUN:
	//	printf("��ĩ\n");
	//	break;
	//default:
	//	printf("<1~7>\n");
	//	break;
	//}
	//int day = 0;
	//printf("������������ڼ�:>#");
	//scanf("%d", &day);
	//switch (day)
	//{
	//case MON:
	//	printf("����һ\n");
	//	break;
	//case TUE:
	//	printf("���ڶ�\n");
	//	break;
	//case WED:
	//	printf("������\n");
	//	break;
	//case THU:
	//	printf("������\n");
	//	break;
	//case FRI:
	//	printf("������\n");
	//	break;
	//case SAT:
	//	printf("������\n");
	//	break;
	//case SUN:
	//	printf("������\n");
	//	break;
	//default:
	//	//printf("������<1~7>\n");
	//	break;
	//}
	system("pause");
	return 0;
}
//#define START 1
//#define END 100
int main3()
{
	//Q2:���1-100֮�������
	for (int i = START; i <= END; i++)
	{
		if (i & 1)
		{
			printf("%-3d������\n", i);
		}
	}
	//Q1:�ж�һ�������Ƿ�������
	//���ⷽ��
	//int num = 0;
	//printf("please input an integer number:>#");
	//scanf("%d", &num);
	//if (1 & num)
	//{
	//	printf("%d������\n", num);
	//}
	//else
	//{
	//	printf("%d��������\n", num);
	//}
	//��ͨ����:
	//int num = 0;
	//printf("please input an integer number:>#");
	//scanf("%d", &num);    
	//if (num % 2)
	//{//num % 2�и�������ż�ļ���
	//	printf("%d������\n", num);
	//}
	//else
	//{
	//	printf("%d��������\n", num);
	//}
	system("pause");
	return 0;
}
int main2()
{
	//����else���
	int a = 0;
	int b = 1;
	if (a == 0)
	{
		if (b == 2)
		{
			printf("b == 2\n");
		} 
	}
	else//else���ú����ڵ�ifƥ�� 
	{ 
		printf("a != 0\n");
	}
	//int a = 0;
	//int b = 1;
	//if (a == 0)
	//	if (b == 2)
	//		printf("b == 2\n");
	//else//else���ú����ڵ�ifƥ�� 
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
		printf("�㻹������!\n");
		//printf("���ܰ�,����!\n");//�﷨����
	else if (age >= _AGE && age < 30)
		printf("�㻹�Ǹ�ɧ��!\n");
	else if (age >= 30 && age < 50)
		printf("�㻹�Ǹ�����!\n");
	else if (age >= 50 && age < 100)
		printf("�㻹�Ǹ�������!\n");
		//;//���һ���ֺŶ����﷨����,���else����ʹ��
	else if (age >= 100)
		printf("...\n");
	else
		printf("�����������������,����������!\n");
	//int age = 0;
	//printf("please input your age:>#");
	//scanf("%d", &age);
	//if (age < _AGE && age >= 0)
	//{
	//	printf("�㻹������!\n");
	//}
	//else if (age >= _AGE && age < 30)
	//{
	//	printf("�㻹�Ǹ�ɧ��!\n");
	//}
	//else if (age >= 30 && age < 50)
	//{
	//	printf("�㻹�Ǹ�����!\n");
	//}
	//else if (age >= 50 && age < 100)
	//{
	//	printf("�㻹�Ǹ�������!\n");
	//}
	//else if (age >= 100)
	//{
	//	printf("...\n");
	//}
	//else
	//{
	//	printf("�����������������,����������!\n");
	//}
	//;//�������Ա���ͨ��
	//int a = 10;
	//int b = 20;
	//a = a + b;
	system("pause");
	return 0;
}
//#define SIZE 64
//struct Stu{...};������һ���Զ��������(�����C���Ե���������int/short...����)
//struct Stu
//{
//	char name[SIZE];
//	int age;
//	char sex[SIZE / 8];
//	char telephone[SIZE / 4];
//	//����,���ֳɼ�...
//} cc, *x;
//int main()
//{
//	//int a = 10
//	//����һ���ṹ����������г�ʼ��
//	struct Stu Tom = { "Tom", 19, "��", "1234567" };
//	struct Stu* p = &Tom;
//	printf("%s, %s\n", Tom.name, Tom.telephone);
//	printf("%s, %s\n", (*p).name, (*p).telephone);
//	printf("%s, %d\n", p->sex, p->age);
//	return 0;
//}