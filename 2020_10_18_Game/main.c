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
			printf("���������ѡ��:<1 OR 2>#");
			scanf("%d", &select);
			switch (select)
			{
			case 1:
				//printf("Game()\n");
				game();
				printf("����һ��???\n");
				break;
			case 2:
				quit = 1;
				printf("��ӭ�´�����~~~\n");
				break;
			default:
				printf("�����ѡ�񲻷���Ҫ��,������ѡ��!\n");
				break;
			}
		}
		else
		{
			quit = -1;
			printf("��¼ʧ��!�����˺�\n");
		}
	}
	system("pause");
	return 0;
}
