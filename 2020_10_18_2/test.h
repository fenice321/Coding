//#pragma once����ͷ�ļ��ظ������ķ���һ
#ifndef __TEST_H__//����ͷ�ļ��ظ������ķ�����,�õĶ�
#define __TEST_H__
#define _CRT_SECURE_NO_WARNINGS 1
#include <windows.h>
#include <stdio.h>
#pragma warning(disable:4996)
//int g_num = 10;//ͷ�ļ��в��ܶ���ȫ�ֱ���
extern int a;//ͷ�ļ��п�������ȫ�ֱ���
extern int a;//�����������
extern int a;
extern int a;
extern int a;
int a;//extern����ʡ��
int add(int one, int another);
extern int add(int one, int another);
//int sub(int one, int another)//ͷ�ļ��в��ܶ��庯��
//{
//	return one - another;
//}
#endif //__TEST_H__
