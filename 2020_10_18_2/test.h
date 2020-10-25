//#pragma once避免头文件重复包含的方法一
#ifndef __TEST_H__//避免头文件重复包含的方法二,用的多
#define __TEST_H__
#define _CRT_SECURE_NO_WARNINGS 1
#include <windows.h>
#include <stdio.h>
#pragma warning(disable:4996)
//int g_num = 10;//头文件中不能定义全局变量
extern int a;//头文件中可以声明全局变量
extern int a;//可以声明多次
extern int a;
extern int a;
extern int a;
int a;//extern可以省略
int add(int one, int another);
extern int add(int one, int another);
//int sub(int one, int another)//头文件中不能定义函数
//{
//	return one - another;
//}
#endif //__TEST_H__
