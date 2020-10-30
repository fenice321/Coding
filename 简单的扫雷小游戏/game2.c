#include "game2.h"

void menu()
{
	printf("##################################\n");
	printf("###         1. play           ####\n");
	printf("###         0. exit           ####\n");
	printf("##################################\n");
	return;
}
void initBoard(char(*pboard)[COLS], int rows, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			pboard[i][j] = set;
		}
	}
	return;
}
void displayBoard(char(*pboard)[COLS], int row, int col)
{
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	putchar(10);
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", pboard[i][j]);
		}
		putchar(10);
	}
	return;
}
void initMine(char(*pmine)[COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = ONE_LEVEL_COUNT;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (pmine[x][y] == ORDER)
		{
			pmine[x][y] = MINE;
			count--;
		}
	}
	return;
}
int  countOfMine(char(*pmine)[COLS], int x, int y)
{
	return pmine[x - 1][y] + pmine[x + 1][y] + pmine[x][y - 1] + pmine[x][y + 1] +
		pmine[x - 1][y - 1] + pmine[x - 1][y + 1] + pmine[x + 1][y - 1] + pmine[x + 1][y + 1] - 8 * ORDER;
}
void findMine(char(*pmine)[COLS], char(*pshow)[COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < col * row - ONE_LEVEL_COUNT)
	{
		printf("��������Ҫɨ�׵�����:>#");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (pmine[x][y] == MINE)
			{
				printf("�㱻ը����,GAME OVER!\n");
				displayBoard(pmine, row, col);
				break;
			}
			else
			{
				win++;
				int ret = countOfMine(pmine, x, y);
				pshow[x][y] = ret + ORDER;
				displayBoard(pshow, row, col);
			}
		}
		else
		{
			printf("����������곬����Χ,��������������ɨ��:>#\n");
		}
	}
	if (win == col * row - ONE_LEVEL_COUNT)
	{
		printf("��ϲ��ɨ�׳ɹ�!\n");
		displayBoard(pmine, row, col);
	}
	return;
}
void game2()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	initBoard(mine, ROWS, ORDER);
	initBoard(show, ROWS, SHADOWN);
	//displayBoard(mine, ROW, COL);
	displayBoard(show, ROW, COL);
	initMine(mine, ROW, COL);
	//displayBoard(mine, ROW, COL);
	findMine(mine, show, ROW, COL);
	return;
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("please input your choice:<an integer number: 1 or 0>#");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("ɨ��!\n");
			game2();
			printf("����һ����?\n");
			break;
		case 0:
			printf("�˳���Ϸing......\n");
			break;
		default:
			printf("����ѡ������,��������������ѡ��!\n");
			break;
		}
	} while (input);
	printf("��ӭ�´�����!byebye~~~!\n");
	return;
}