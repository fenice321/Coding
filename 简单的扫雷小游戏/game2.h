#ifndef __GAME2_H__
#define __GAME2_H__
#define _CRT_SECURE_NO_WARNINGS 1
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#define ROW 9
#define COL 9
#define ROWS ((ROW) + (2))
#define COLS ((COL) + (2))
#define ORDER '0'
#define SHADOWN '*'
#define MINE '1'
#define ONE_LEVEL_COUNT 10
void test();
void menu();
void game2();
void initBoard(char (*pboard)[COLS], int rows, char set);
void displayBoard(char(*pboard)[COLS], int row, int col);
void initMine(char(*pmine)[COLS], int row, int col);
int  countOfMine(char(*pmine)[COLS], int x, int y);
void findMine(char(*pmine)[COLS], char(*pshow)[COLS], int row, int col);
#endif //__GAME2_H__