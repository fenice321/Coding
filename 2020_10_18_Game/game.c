#include "game.h"
//void show()
//{
//	printf("hello bit!\n");
//	return;
//}
void menu()
{
	printf("###############################\n");
	printf("##     1-> Play  2-> Exit    ##\n");
	printf("###############################\n");
	printf("���¼�����Ϸ�˺�:># \n");
	return;
}
void game()
{
	int randNum = (rand() % RAND_BASIC) + 1;//����1 - 100�������
	int num = 0;
	printf("\"��\"�Ѿ�\"�����\"һ���������Χ����<1 ~ 100>, ����Կ�ʼ����:>#\n");
	while (1)
	{
		printf("���:># ");
		scanf("%d", &num);
		if (num < randNum)
		{
			printf("���С��!\n");
		}
		else if (num > randNum)
		{
			printf("��´���!\n");
		}
		else
		{
			printf("��ϲ��¶���!\n");
			break;
		}
	}
	return;
}
int login(int times)
{
	int t = TIME_BASIC;
	int time = times;
	char name[SIZE] = { '\0' };
	char passwd[SIZE] = { '\0' };
	while (1)
	{
		if (times <= 0)
		{
			return LOGIN_FAILED;
		}
		else
		{
			printf("please input your name:>#");
			scanf("%s", name);
			printf("please input your passwd:>#");
			scanf("%s", passwd);
			if ((!strcmp(passwd, PASSWD)) && (!strcmp(name, NAME)))
			{
				printf("��ϲ��¼�ɹ�\n");
				return LOGIN_SUCCESS;
			}
			else
			{
				times--;
				if (times >= 1)
				{
					printf("����%d�ε�¼����!\n", times);
				}
				if (!times)
				{
					if (time == MAX_LOGIN_TIMES)
					{
						printf("%d�ε�¼ʧ��,�޷�������Ϸ!\n", MAX_LOGIN_TIMES);
						return LOGIN_FAILED;
					}
					else
					{
						printf("%d�ε�¼ʧ��,����%ds���ٴε�¼!\n", time, t);
						showTime(t);
						t *= 2;
						times = 1;
						time++;
					}
				}
			}
		}
	}
}
void showTime(int t)
{
	for (; t >= 0; t--)
	{
		printf("ʣ��ʱ��/sec)%-3d\r", t);
		Sleep(1000);
	}
	printf("\n");
	return;
}