#ifndef __GAME1_H__
#define __GAME1_H__
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#define ROW 3
#define COL 3
#define CHESS_INIT ' '
#define PLAYER_CHESS '*'
#define COMPUTER_CHESS '#'
#define PEACE_CHESS 'O'
#define CONTINUE_CHESS 'C'
#define IS_FULL 1
#define IS_NOT_FULL 0
void test();
void menu();
void game1();
void initBoard(char(*pboard)[COL], int row);
void displayBoard(char(*pboard)[COL], int row);
void computerMove(char(*pboard)[COL], int row);
void playerMove(char(*pboard)[COL], int row);
char judgeWinner(char(*pboard)[COL], int row);
int isFull(char(*pboard)[COL], int row);
#endif