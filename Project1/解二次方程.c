/*
 * 一元二次方程求根
 * 求解 ax² + bx + c = 0 的实数根。
 * 判别式 Δ = b² - 4ac：
 *   Δ ≥ 0 时有实根，x = (-b ± √Δ) / (2a)
 *   Δ < 0  时无实根
 * panduanjie() 函数判断判别式是否非负。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
int panduanjie(double a, double b, double c); /* 前向声明 */

int jieercifc()
{
	double a, b, c ,x1 ,x2;    /* a、b、c 为方程系数，x1、x2 为根 */
	printf("请输入二次方程中a的值");
	scanf("%lf", &a);
	printf("请输入二次方程中b的值");
	scanf("%lf", &b);
	printf("请输入二次方程中c的值");
	scanf("%lf", &c);
	/* 当判别式 ≥ 0 时有实根 */
	if (panduanjie(a, b, c))
	{
		/* 求根公式 */
		x1 = (-b + pow(b * b - 4 * a * c, 0.5)) / (2 * a);
		x2 = (-b - pow(b * b - 4 * a * c, 0.5)) / (2 * a);
		printf("方程%.0lfx^2+%.0lfx+%.0lf的解为", a, b, c);
		printf("\nx1=%lf \nx2=%lf", x1, x2);
	}
	else
		printf("该方程无实根");

}
/* 判断一元二次方程是否有实数根（判别式是否非负） */
int panduanjie(double a, double b, double c)
{ 
	double t=a, z=b,v=c;
	int s;
	if ((pow(z, 2) - 4 * t * v) >= 0) /* Δ ≥ 0 */
		s = 1;                       /* 有实根 */
	else
		s = 0;                       /* 无实根 */
	return s;
}