#define _CRT_SECURE_NO_WARNINGS 1
#include <windows.h>
#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#if 0
void show()
{
	printf("hello bit");
	show();
	return;
}
//�����������ı�̼��ɳ�Ϊ�ݹ�
int main()
{
	show();
	system("pause");
	return 0;
}
#endif
#if 0
int myStrlen1(const char* pc)
{
	int len = 0;
	while (*pc)
	{
		len++;
		pc++;
	}
	return len;
}
int myStrlen2(const char* pc)
{
	if (*pc == '\0')
	{
		return 0;
	}
	else
	{
		return (1 + myStrlen2(pc + 1));
	}
}
int myStrlen3(const char* pc)
{
	while (*pc != '\0')
	{
		return (1 + myStrlen3(pc + 1));
	}
	return 0;
}
int main()
{
	//��ʵ�ֿ⺯��strlen
	const char* pc = "I love China";
	printf("%d\n", myStrlen1(pc));
	printf("%d\n", myStrlen2(pc));
	printf("%d\n", myStrlen3(pc));
	system("pause");
	return 0;
}
#endif
#if 0
void iterReverse(int num)//���������ӡ��һ�������ĸ���λ��
{
	while (num != 0)
	{
		printf("%d\n", num % 10);
		num = num / 10;
	}
	return;
}
void recuOrder(int num)//�ݹ�˳���ӡ��һ��֤��ĸ���λ��
{
	if (num > 9)
	{
		recuOrder(num / 10);
	}
	printf("%d\n", num % 10);
	return;
}
int main()
{
	//����һ�������Ͱ���˳���ӡ��ÿһλ,˳���ӡ,�����ӡ,�ݹ����
	int num = 0;
	printf("please input an integer number:>#");
	scanf("%d", &num);
	iterReverse(num);
	recuOrder(num);
	system("pause");
	return 0;
}
#endif
#if 0
int* g_ptr = NULL;
void func()
{
	int a = 10;
	g_ptr = &a;
}
int main()
{
	func();
	//���ʵ�func�����е�a�Ѿ��ͷŵ�,�����ͷŲ��������,ֻ������Ϊ��Ч���Խ������ݸ��Ƕ���,�����ÿ��Է��ʵ�a������
	printf("%d\n", *g_ptr);
	system("pause");
	return 0;
}
#endif
#if 0
int myStrlen(const char* ptr_c)
{
	int len = 0;
	while (*ptr_c++)
	{
		len++;
	}
	return len;
}
int myStrlen1(const char* ptr_c)
{
	if (*ptr_c == '\0')
	{
		return 0;
	}
	else
	{
		return (1 + myStrlen1(ptr_c + 1));
	}
}
int main()
{
	const char* ptr_c = "I LOVE CHINA!";
	printf("%d\n", myStrlen(ptr_c));//����ʵ��ԭ��strlen����
	const char* ptr_c1 = "abcd";
	printf("%d\n", myStrlen1(ptr_c1));//�ݹ�ʵ��ԭ��strlen����
	system("pause");
	return 0;
}
#endif
#if 0
void recurPrint(int num)
{
	if (num > 9)
	{
		recurPrint(num / 10);
	}
	printf("%d\n", num % 10);
	return;
}
void iteraPrint(int num)
{
	while (num != 0)
	{
		printf("%d\n", num % 10);
		num /= 10;
	}
	return;
}
void recurReverse(int num)
{
	if (num == 0)
	{
		return;
	}
	printf("%d\n", num % 10);
	recurReverse(num / 10);
}
int main()
{
	int num = 0;
	printf("please input an integer number:>#");
	scanf("%d", &num);
	//recurPrint(num);//�ݹ�˳���ӡ
	//iteraPrint(num);//���������ӡ
	//����˳���ӡ˼·,1234�������4 3 2 1����һ��������,�����ӡ��������
	recurReverse(num);//�ݹ������ӡ
	system("pause");
	return 0;
}
#endif
int iterFactorial(int num)
{
	int fact = 1;
	for (; num >= 1; num--)
	{
		fact *= num;
	}
	fact *= 1;
	return fact;
}
int recurFactorial(int num)
{
	if (num == 0)
		return 1;
	else
		return (recurFactorial(num - 1) * num);
}
int main()
{
	//�ݹ����ʵ��С�����ݽ׳�����
	int num = 0;
	printf("please input an integer number:>#");
	scanf("%d", &num);
	printf("%d�Ľ׳���%d\n", num, iterFactorial(num));
	printf("please input an integer number:>#");
	scanf("%d", &num);
	printf("%d�Ľ׳���%d\n", num, recurFactorial(num));
	system("pause");
	return 0;
}