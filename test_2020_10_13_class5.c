#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#define LOGIN_SUCCESS 1
#define LOGIN_FAILED -1
#define PASSWD_LENGTH 64
#define NAME_LENGTH 64
#define NAME "taozhouhong"
#define PASSWD "111111"
#define SEC_BASIC 30
void Show1(int time)
{
	for (; time >= 0; time--)
	{
		printf("����ʱ:># %-4d\r", time);
		Sleep(1000);
	}
	printf("\n");
	return;
}
int myLogin(int times)
{
	int t = SEC_BASIC;
	char passwd[PASSWD_LENGTH] = { '\0' };
	char name[NAME_LENGTH] = { '\0' };
	do
	{
		printf("please input your name:>#");
		scanf("%s", name);
		printf("please input your passwd:>#");
		scanf("%s", passwd);
		if (strcmp(name, NAME) == 0 && strcmp(passwd, PASSWD) == 0)
		{
			return LOGIN_SUCCESS;
		}
		else
		{
			times--;
			if (times >= 1)
			{ 
				printf("�ܱ�Ǹ�����ε�¼ʧ��,������%d�λ���!!!\n", times);
			}
			if (0 == times)
			{
				printf("�ܱ�Ǹ��������¼ʧ�ܶ��,%d��������ܼ�����¼:>#\n", t);
				//Sleep(t * 1000);
				Show1(t);
				times = 1;
				t *= 2;
			}
		}
	} while (times > 0);
	return LOGIN_FAILED;
}
int main()
{
	//��д����ʵ��,ģ���û���¼����,����ֻ�ܵ�¼����(ֻ����������������,���������ȷ����ʾ��½�ɹ�,������ξ��������,���˳�����)
	int times = 3;
	//����ֵ:succes:����1,failed:����-1
	if (LOGIN_FAILED ==  myLogin(times))
	{
		printf("���ź����¼ʧ����\n");
	}
	else
	{
		printf("��ӭ��¼www.xxx.com.cn/\n");
	}
	system("pause");
	return 0;
}
void show()
{
	//const char* str = "hello world, hello china!";//����
	//0x00EF7B30
	//0x00EF7B30
	//0x00EF7B30
	//0x00EF7B30
	//printf("0x%p\n", str);
	//printf("0x%p\n", "hello world, hello china!");
	//printf("0x%p\n", &str[0]);
	//printf("0x%p\n", &"hello world, hello china!"[0]);
	char str1[] = "hello world, hello china!";
	char str2[] = "#########################";
	int len = (int)strlen(str1);
	int start = 0;
	int end = 0;
	printf("%s\r", str2);
	for (start = 0, end = len - 1; start <= end; start++, end--)
	{
		//'\r'�ǻس�:���ص����п�ͷ
		//'\n'�ǻس�����:����Ȼص����п�ͷ������һ�н��л���
		str2[start] = str1[start];
		str2[end] = str1[end];
		printf("%s\r", str2);
		Sleep(400);
	}
	printf("\n");
	return;
}
void show2()
{
	int sec = 0;
	for (sec = 10; sec >= 0; sec--)
	{
		printf("%-2d\r", sec);
		Sleep(1000);
	}
	printf("\n");
	return;
}
void show3()
{
	for (;;)
	{
		printf("|\r");
		//Sleep(2000);
		printf("/\r");
		//Sleep(2000);
		printf("-\r");
		//Sleep(2000);
		printf("%c\r", '\\');
		//Sleep(2000);
	}
	return;
}
void show5()
{
	int percent = 0;
	for (percent = 0; percent <= 100; percent++)
	{
		printf("%d%%\r", percent);
		Sleep(100);
	}
	printf("\n");
	return;
}
int main8()
{
	//Q1:��д������ʾ����ַ�,�������ƶ����м���
	//show();
	//Q2:дһ������ʱ
	show2();
	//Q3:дһ����ת���
	//show3();
	//Q4:дһ��������:����൥��ʼˢ��,�������Ľ��ȰٷֱȾ�������ʱ.���ڿγ̻ὲ��
	//Q5:дһ������ʱ
	//show5();
	system("pause");
	return 0;
}
#define NOT_FOUND -1
//����ֵ:success ���ض�Ӧ������±�, failed ����-1
int binSearch(int* pa, int len, int findData)//���ֲ���:Ч�ʷǳ���,ǰ����������
{
	int mid = 0;
	int l = 0;
	int h = len - 1;
	while (l <= h)
	{
		//mid = (l + h) / 2;//û���ǵ�����Ŀ���
		//mid = l + (h - l) / 2;//���ǵ�����Ŀ���,����û�п��ǵ�Ч�ʵ�����
		mid = (l & h) + ((l ^ h) >> 1);//�����ǵ�����Ŀ���,�ֿ��ǵ�Ч�ʵ�����
		if (pa[mid] > findData)
		{
			h = mid - 1;
		}
		else if (pa[mid] < findData)
		{
			l = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return NOT_FOUND;
}
int main7()
{
	//��һ�����������в��Ҿ����ĳ������x.��дint binsearch(int x, int v[], int n);
	//����:��v[0] <= v[1] <= v[2] <= ... <= v[n - 1]�������в���x
	
	//����:����������������,���ҵĹ��̱������ų��Ĺ���
	int findData = 0;
	printf("please input your an integer findData:>#");
	scanf("%d", &findData);
	int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
	int sz = (int)(sizeof(arr) / sizeof(arr[0]));
	int idx = binSearch(arr, sz, findData);
	if (NOT_FOUND != idx)
	{
		printf("�ҵ���%d,�±���%d\n", findData, idx);
	}
	else
	{
		printf("û�����������ҵ�%d\n", findData);
	}

	system("pause");
	return 0;
}
#define START 1
#define END 10
int Fact(int n)
{
	int ret = 1;
	for (int i = n; i >= 1; i--)
	{
		ret *= i;
	}
	return ret;
}
int FactAdd(int start, int end)
{
	int sum = 0;
	for (int i = start; i <= end; i++)
	{
		sum += Fact(i);
	}
	return sum;
}
int main6()
{
	//Q:��1! + 2! + 3! + ... + 10!�ĺ�
	//�������,����
	int total = FactAdd(START, END);
	printf("%d! + ... + %d! = %d\n", START, END, total);
	system("pause");
	return 0;
}
int Factorial(int n)
{
	int res = 1;
	for (int i = n; i >= 1; i--)
	{
		res *= i;
	}
	return res;
}
int main5()
{
	//Q:��n�Ľ׳� 
	int n = 0;
	printf("please input a plus integer number:>#");
	scanf("%d", &n);//����50�ý׳�0,���,��Ϊlong long����Ҳ��0,ͬ�����
	//������ݴ���ֻ�ܽ������������,�Ժ����ô�������������׳�����.�ٶ�����:��������C���԰����о��о�,��������ģ������
	printf("%d�Ľ׳���%d\n", n, Factorial(n));
	system("pause");
	return 0;
}
int main4()
{
	int i = 0;
	do
	{
		if (5 == i)
		{
			printf("out!\n");
			continue;
		}
		printf("i = %d\n", i);
		i++;
		Sleep(300);
	} while (printf("."), i < 10);//while ��printf("")���ȼ���while (0), while (printf(".")) �ȼ��� while (1)
	printf("end!\n");
	//int i = 0;
	//do
	//{
	//	if (5 == i)
	//	{
	//		printf("out!\n");
	//		continue;
	//	}
	//	printf("i = %d\n", i);
	//	i++;
	//	Sleep(200);
	//} while (i < 10);
	//printf("end!\n");//0,1,2,3,4,out!out!....��ѭ��
	//int i = 0;
	//do
	//{
	//	if (5 == i)
	//	{
	//		printf("out!\n");
	//		break;
	//	}
	//	printf("i = %d\n", i);
	//	i++;
	//	Sleep(1000);
	//} while (i < 10);
	//printf("end!\n");
	//while/forѭ������һ��Ҳ��ִ��,����dowhileѭ������ִ��һ��
	//int i = 0;
	//do
	//{
	//	printf("i = %d\n", i);
	//	i++;
	//	Sleep(1000);
	//} while (0);
	//printf("end!\n");
	//int i = 0;
	//do
	//{
	//	printf("i = %d\n", i);
	//	i++;
	//	Sleep(500);
	//} while (i < 10);
	//printf("end!\n");
	system("pause");
	return 0;
}
int get_max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main3()
{
	int a;
	int b;
	scanf_s("����������: %d %d", &a, &b);
	int max = get_max(a, b);
	printf("max=%d\n", max);
	system("pause");
	return 0;
}
int main2()
{
	//if (k == 1)
	//{
	//	//if (0) if (1) 
	//}
	//if (k = 1)//Ӧд��if (1 = k)����д�������ͻ���ǰ����,�����ǵ������Լ�ȥ��bug
	//{
	//	//if (k)
	//}
	//int k = 0;
	//if (k = 1)
	//{
	//	printf("Hello World!");
	//}
	//һ��������:����ѭ��Ҫѭ�����ٴ�	
	//��:ѭ����0��
	//int i = 0;
	//int k = 0;
	//int count = 0;
	//for (i = 0, k = 0; k = 0; i++, k++)
	//{
	//	k++;		
	//	count++;
	//}
	//printf("count = %d\n", count);//0

	//int x = 0;
	//int y = 0;
	//for (x = 5, y = 10; x < 10 && y < 20; x++, y++)
	//{
	//	printf("%d, %d\n", x, y);
	//}
	//int x;
	//x = printf("hello"), printf("world!");
	//printf("x = %d\n", x);
	//printf("\n");
	//x = (printf("hello"), printf("world!"));
	//printf("x = %d\n", x);
	//int x = 100;
	//int a = 0;
	//a = printf("hello world\n"), x = 200, x == 100;
	//printf("a = %d, x = %d\n", a, x);
	//int x = 100;//�ö��Ÿ����Ķ�����ʽ�ļ��Ͼͽ������ű��ʽ
	// //����:1.���������ζ��ᱻִ��	2.���ʽ���ս�������һ�����ʽΪ׼
	//int a = (printf("hello world\n"), x = 200, x == 100);//hello world
	//printf("%d, %d\n", x, a);//200, 0
	//system("pause");
	return 0;
}
int main1()
{
	//for (;;)
	//{
	//	printf(".");
	//	Sleep(100);
	//	break;//break������ѭ��
	//}
	//int arr[10] = { 0 };
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}
	//for (int i = 0; i <= 9; i++)//[)
	//{
	//	printf("%d\n", i);
	//	Sleep(300);
	//}
	//����������д,Ӧд��i < 10��׳��ǿһ��
	//for (int i = 0; i != 10; i++)
	//{
	//	printf("%d\n", i);
	//	Sleep(300);
	//	i += 100;//�������²�����д������
	//}
	//int i = 0;
	//while (i < 10)
	//{
	//	if (5 == i)//��ѭ��
	//	{
	//		printf("out!!!\n");
	//		continue;
	//	}
	//	printf("i = %d\n", i);
	//	i++;
	//	Sleep(500);
	//}
	//for (int i = 0; i < 10; )//��ѭ��
	//{
	//	if (5 == i)
	//	{
	//		printf("out!\n");
	//		continue;
	//	}
	//	printf("i = %d\n", i);
	//	i++;
	//	Sleep(100);
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	if (5 == i)
	//	{
	//		printf("out!!!\n");
	//		continue;
	//	}
	//	printf("i = %d\n", i);
	//	Sleep(100);
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	if (5 == i)
	//	{
	//		printf("out!\n");
	//		break;
	//	}
	//	printf("i = %d\n", i);
	//	Sleep(100);
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("i = %d\n", i);
	//	Sleep(100);
	//}
	//int i = 0;
	//for (; i < 10; i++)
	//{
	//	printf("%d\n", i);
	//	Sleep(100);
	//}
	system("pause");
	return 0;
}