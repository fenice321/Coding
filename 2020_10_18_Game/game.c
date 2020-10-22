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
	printf("请登录你的游戏账号:># \n");
	return;
}
void game()
{
	int randNum = (rand() % RAND_BASIC) + 1;//生成1 - 100的随机数
	int num = 0;
	printf("\"我\"已经\"想好了\"一个随机数范围处于<1 ~ 100>, 你可以开始猜了:>#\n");
	while (1)
	{
		printf("你猜:># ");
		scanf("%d", &num);
		if (num < randNum)
		{
			printf("你猜小了!\n");
		}
		else if (num > randNum)
		{
			printf("你猜大了!\n");
		}
		else
		{
			printf("恭喜你猜对了!\n");
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
				printf("恭喜登录成功\n");
				return LOGIN_SUCCESS;
			}
			else
			{
				times--;
				if (times >= 1)
				{
					printf("还有%d次登录机会!\n", times);
				}
				if (!times)
				{
					if (time == MAX_LOGIN_TIMES)
					{
						printf("%d次登录失败,无法进行游戏!\n", MAX_LOGIN_TIMES);
						return LOGIN_FAILED;
					}
					else
					{
						printf("%d次登录失败,请在%ds后再次登录!\n", time, t);
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
		printf("剩余时间/sec)%-3d\r", t);
		Sleep(1000);
	}
	printf("\n");
	return;
}