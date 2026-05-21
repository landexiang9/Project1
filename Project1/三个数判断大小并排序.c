/*
 * 三个浮点数比较与排序
 * 输入三个浮点数 a、b、c，通过两两比较交换实现升序排列。
 * 算法思路：依次比较 a>b、a>c、b>c，若成立则交换对应的两个数，
 * 最终结果满足 a ≤ b ≤ c。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main10()
{
	float a, b, c, t;          /* a、b、c 为待排序数，t 为交换中间变量 */
	scanf("%f,%f,%f", &a, &b, &c);
	/* 第一步：确保 a ≤ b */
	if (a>b)
	{
		t = a; a = b; b = t;
	}
	/* 第二步：确保 a ≤ c（此时 a 已是最小候选） */
	if  (a>c)
	{
		t = a; a = c; c = t;
	}
	/* 第三步：确保 b ≤ c */
	if (b>c)
	{
		t = b; b = c, c = t;

	}
	/* 输出结果，%5.2f 表示宽度 5、保留两位小数 */
	printf("%5.2f,%5.2f,%5.2f\n", a, b, c);
	return 0;

}