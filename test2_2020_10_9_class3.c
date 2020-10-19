#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//全局变量一般可以跨文件使用
//函数也可以跨文件访问哦~
//static修饰全局变量,该变量只能在本文件内使用
//static int g_val = 1234;
//static修饰函数,函数只能在本文件范围内使用
/*static */void show()//show函数定义
{
	printf("hello bit!\n");
	return;
}