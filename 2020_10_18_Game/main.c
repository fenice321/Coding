#include "game.h"
int main()
{
	int times = 3;
	srand((unsigned int)time(NULL));
	//show();
	int select = 0;
	int quit = 0;
	while (!quit)
	{
		menu();
		if (login(times))
		{
			printf("请输入你的选择:<1 OR 2>#");
			scanf("%d", &select);
			switch (select)
			{
			case 1:
				//printf("Game()\n");
				game();
				printf("再玩一把???\n");
				break;
			case 2:
				quit = 1;
				printf("欢迎下次来玩~~~\n");
				break;
			default:
				printf("输入的选择不符合要求,请重新选择!\n");
				break;
			}
		}
		else
		{
			quit = -1;
			printf("登录失败!冻结账号\n");
		}
	}
	system("pause");
	return 0;
}
