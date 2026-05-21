/*
 * 圆柱体表面积和体积计算
 * 输入底面半径和高，计算圆柱体：
 *   体积 V = 底面积 × 高（已封装在计算圆的面积.c 中）
 *   表面积 S = 侧面积（2πr × h）+ 2 × 底面积
 * 知识点：函数调用、数学公式应用、宏常量 PEI。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#define PEI 3.1415926
#include<stdio.h>

double yuandemianji(double r);  /* 声明在计算圆的面积.c 中定义的函数 */

int qiuyuanmianjihebiaomianji()
{
	double r, h, s, v, lo, sums;
	/* r: 底面半径，h: 高，s: 底面积，v: 体积 */
	/* lo: 底面周长，sums: 表面积 */
	printf("请输入原柱的底面半径");
	scanf("%lf", &r);
	printf("请输入高");
	scanf("%lf", &h);
	s = yuandemianji(r);        /* 调用函数计算底面积 */
	v = s * h;                  /* 体积 = 底面积 × 高 */
	lo = PEI * r * 2;           /* 底面周长 = 2πr */
	sums = lo * h + 2 * s;      /* 表面积 = 侧面积 + 两个底面积 */
	printf(" %lf\n", sums);
	printf(" %lf", v);
}