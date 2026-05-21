/*
 * 华氏度转摄氏度
 * 输入华氏温度，利用公式 C = (5/9)×(F-32) 转换为摄氏温度。
 * 注意：分子使用 5*(f-32) 而非 5/9*(f-32)，避免整数截断导致精度丢失。
 * %.2lf 表示保留两位小数输出。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
int huashizhuansheshi()
{
	double f, c;                /* f: 华氏度，c: 摄氏度 */
	printf("请输入华氏度:");
	scanf("%lf", &f);
	/* 摄氏度转换公式：乘以 5 再除以 9 避免整数运算截断 */
	c = (5 * (f - 32)) / 9;
	printf("%.2lf华氏度转化为摄氏度为%.2lf", f, c);
}