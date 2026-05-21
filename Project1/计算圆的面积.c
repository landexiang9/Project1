/*
 * 圆的面积计算
 * 给定半径 r，计算圆的面积 S = πr²。
 * 使用宏常量 PEI（在求圆柱表面积和体积.c 中定义为 3.1415926）。
 * 被 求圆柱表面积和体积.c 调用作为底面积。
 * 知识点：函数封装、宏常量、浮点运算。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#define PEI 3.1415926
#include<stdio.h>
double yuandemianji(double r)
{
	double s;                   /* 存储面积结果 */
	s = PEI * r*r;              /* 圆面积公式 πr² */
	
	return s;


}