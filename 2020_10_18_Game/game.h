#pragma once //第一种防止头文件被重复包含的语句
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#define RAND_BASIC 100
#define SIZE 128
#define NAME "tim"
#define PASSWD "123456"
#define LOGIN_SUCCESS 1
#define LOGIN_FAILED 0
#define TIME_BASIC 10
#define MAX_LOGIN_TIMES 5
//void show();
void menu();
void game();
int login(int times);
void showTime(int t);