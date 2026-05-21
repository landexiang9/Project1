/*
 * 找最大值
 * 输入 10 个浮点数，逐个比较找出其中的最大值。
 * 算法：先将第一个数设为最大值，然后依次读入后续每
 * 个数，若大于当前最大值则更新。
 * 知识点：擂台法求最大值、循环输入。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int max()
{
	int i=2;                    /* i: 第几个数，从第 2 个开始 */
	float a, b,max;             /* a: 第一个数，b: 当前数，max: 最大值 */
	printf("请输入第一个数：");
	scanf("%f", &a);
	max = a;                    /* 初始设第一个数为最大值 */
	/* 依次输入第 2 到第 10 个数并比较 */
	for(;i<=10;i=i+1)
	{
		printf("请输入第%d个数", i);
		scanf("%f", &b);
		if (b > max)            /* 若当前数比最大值大，则更新 */
			max = b;
	}
	printf("最大的数为%f", max);

}