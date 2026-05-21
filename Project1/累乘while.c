/*
 * 阶乘计算（while 循环实现，可复用函数）
 * 与累乘do-wile.c 功能相同，但使用 while 循环并以函数形式封装。
 * 返回 double 类型避免大数溢出（精度有损失但范围更大）。
 * 被 计算x的n次方除以n的阶乘之和.c 调用。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
double coutcheng(int n)
{
	int i = 1;
	double fact = 1;            /* double 类型可容纳更大范围的阶乘值 */
	if (n > 0)
	{
		while (i <= n)
		{
			fact = fact * i;    /* 累乘 */
			i = i + 1;          /* 计数器递增 */
		}
	}
	else
		/* 非正数返回 1（0! = 1） */;
	return fact;
}