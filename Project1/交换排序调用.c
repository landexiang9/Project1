/*
 * 交换排序（降序）——可复用函数版本
 * 与交换排序1.c 功能相同，但将排序逻辑封装为带参数的函数。
 * 参数 n 指定数组长度，a[] 为待排序数组，提高了代码复用性。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int jiaohuanpaixudiaoyong(int n, int a[])
{
	int  i, j, t;              /* i、j 为循环变量，t 为交换临时变量 */
	/* 外层循环：依次确定每个位置的元素 */
	for (i = 0; i < n-1; i++)
	{
		/* 内层循环：将 a[i] 与后续元素比较 */
		for (j = i + 1; j < n; j++)
		{
			/* 降序排列：若后续元素更大则交换 */
			if (a[i] < a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	/* 输出排序后的数组 */
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}