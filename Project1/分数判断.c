/*
 * 分数等级判断
 * 输入一个整数分数，根据区间输出不同的评语。
 * 使用 if-else if 结构进行区间判定的典型示例。
 * 注意条件顺序：先判断高分区间，逐步降低判定标准。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main13()
{
	int a;                      /* 存储输入的分数 */
	printf("请输入你的分数:");
	scanf("%d", &a);
	/* 按分数区间输出对应评语 */
	if (a > 90)
		printf("wow!,天才你竟然有%d的高分", a);
	else if (a <= 90 && a >= 80) /* 80~90 分 */
		printf("不戳不戳有%d分", a);
	else if (a >= 70)            /* 70~79 分 */
		printf("还行");
	else if (a >= 60)            /* 60~69 分 */
		printf("努努力，你也能成为人中龙凤");
	else if (a >= 0)             /* 0~59 分 */
		printf("革命尚未成功，同志仍需努力");
	else                         /* 负数（非法输入） */
		printf("你是天才还是人才");



}

