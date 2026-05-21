/*
 * sin(x) 近似值计算（泰勒级数展开）
 * 使用公式 sin(x) = x - x³/3! + x⁵/5! - x⁷/7! + ...
 * 逐项累加直到末项绝对值小于 1e-6。
 * 知识点：阶乘函数、pow 幂函数、级数求和、符号交替（s = s * -1）。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
/* 计算 t 的阶乘（double 类型避免溢出） */
double jiecheng(double t)
{
	double count=1,i;
	for (i = t; i > 0; i = i - 1)
		count = count * i;
	return count;
}
int sinx()
{
	int  n = 1, s=1;            /* n: 幂次/阶乘数，s: 符号（1 或 -1） */
	double sum=0,x,fz,fm;       /* sum: 累加和，fz: 分子 x^n，fm: 分母 n! */
	scanf("%lf", &x);
	do
	{
		fz = pow(x, n);         /* x 的 n 次幂 */
		fm = jiecheng(n);       /* n 的阶乘 */
		n = n + 2;              /* 每次跳 2：x^1, x^3, x^5... */
		sum = sum + s * (fz / fm); /* 加上当前项（带符号） */
		s = s * -1;             /* 符号交替：+ - + - ... */
	}
	while (fabs(fz / fm) > 1e-6); /* 末项绝对值小于 1e-6 时停止 */
	printf("sum=%lf", sum);
	return 0;
}
