#include "game1.h"
void menu()
{
	printf("############################\n");
	printf("### 1.play        0.exit ###\n");
	printf("############################\n");
	return;
}
void initBoard(char(*pboard)[COL], int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			pboard[i][j] = CHESS_INIT;
		}
	}
	return;
}
//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   
void displayBoard(char(*pboard)[COL], int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf(" %c ", pboard[i][j]);
			if (j < COL - 1)
			{
				printf("|");
			}
		}
		putchar(10);
		if (i < row - 1)
		{
			for (int j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
				{
					printf("|");
				}
			}
			putchar(10);
		}
	}
	return;
}
void playerMove(char (*pboard)[COL], int row)
{
	int x = 0;
	int y = 0;
	printf("�����:>$\n");
	while (1)
	{
		printf("��������Ҫ�µ�λ�õ�����,ע�ⲻҪ��������λ��:>$");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= COL)
		{
			if (pboard[x - 1][y - 1] == CHESS_INIT)
			{
				pboard[x - 1][y - 1] = PLAYER_CHESS;
				break;
			}
			else
			{
				printf("���µ�λ���Ѿ���������,������������Ҫ�µ�λ�õ�����:>\n");
			}
		}
		else
		{
			printf("�����������λ�ó���Ԥ�ڷ�Χ,����������:>\n");
		}
	}
	return;
}
void computerMove(char(*pboard)[COL], int row)
{
	int x = 0;
	int y = 0;
	printf("������:>$\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % COL;
		if (pboard[x][y] == CHESS_INIT)
		{
			pboard[x][y] = COMPUTER_CHESS;
			break;
		}
	}
	return;
}
int isFull(char(*pboard)[COL], int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (pboard[i][j] == CHESS_INIT)
			{
				return IS_NOT_FULL;
			}
		}
	}
	return IS_FULL;
}
char judgeWinner(char(*pboard)[COL], int row)
{
	for (int i = 0; i < row; i++)
	{
		if (pboard[i][0] == pboard[i][1] && pboard[i][1] == pboard[i][2] && pboard[i][0] != CHESS_INIT)
		{
			return pboard[i][0];
		}
		if (pboard[0][i] == pboard[1][i] && pboard[1][i] == pboard[2][i] && pboard[1][i] != CHESS_INIT)
		{
			return pboard[1][i];
		}	
	}
	if (pboard[1][1] == pboard[2][2] && pboard[0][0] == pboard[1][1] && pboard[1][1] != CHESS_INIT)
	{
		return pboard[1][1];
	}
	if (pboard[1][1] == pboard[2][0] && pboard[2][0] == pboard[0][2] && pboard[1][1] != CHESS_INIT)
	{
		return pboard[1][1];
	}
	if (isFull(pboard, row) == IS_FULL)
	{
		return PEACE_CHESS;
	}
	else
	{
		return CONTINUE_CHESS;
	}
}
//��Ϸ����������ʵ��
void game1()
{
	char ret = '\0';
	//�������߳���������Ϣ
	char board[ROW][COL] = { '\0' };//��ʼ������
	initBoard(board, ROW);//ȫ����' '
	displayBoard(board, ROW);//��ӡ����
	//����
	while (1)
	{
		//������
		playerMove(board, ROW);
		displayBoard(board, ROW);
		//�ж���Ӯ����
		ret = judgeWinner(board, ROW);
		if (ret != CONTINUE_CHESS)
		{
			break;
		}
		//������
		computerMove(board, ROW);
		displayBoard(board, ROW);
		//�жϵ���Ӯ����
		ret = judgeWinner(board, ROW);
		if (ret != CONTINUE_CHESS)
		{
			break;
		}
	}
	if (ret == PLAYER_CHESS)
	{
		printf("��ϲ���Ӯ��!\n");
	}
	else if (ret == COMPUTER_CHESS)
	{
		printf("����Ӯ��!\n");
	}
	else
	{
		printf("ƽ��!\n");
	}
	return;
}
void test()
{
	srand((size_t)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("please input your choice:<an integer number:0 or 1>$");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("play game1!\n");
			game1();
			printf("Ҫ��Ҫ����һ��?\n");
			break;
		case 0:
			printf("�˳���Ϸ......!\n");
			break;
		default:
			printf("���������������,����������!\n");
			break;
		}
	} while (input);
	printf("��ӭ�´�����!\nbyebye~~~\n");
	return;
}