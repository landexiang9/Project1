/*
 * 成绩统计与排序
 * 输入 20 个成绩，使用冒泡排序升序排列后输出：
 *   最高分（排序后最后一个）、最低分（排序后第一个）、平均分。
 * 知识点：冒泡排序、数据聚合分析、浮点除法（sum / 20.0 而非 20）。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
void maopaoapixuyinyong()
{
	int i, j, t, a[20];         /* a: 存储成绩数组 */
	/* 读取 20 个成绩 */
	for (i = 0; i < 20; i++)
	{
		printf("请输入第%d个成绩 ", i + 1);
		scanf("%d", &a[i]);

	}
	/* 冒泡排序（升序） */
	for (i = 0; i < 20; i++)
		for (j = 0; j < 20 - i - 1; j++)
			if (a[j] > a[j + 1])
			{
				t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
			}
	/* 排序后第一个为最低分，最后一个为最高分 */
	printf("\n最高分为%d", a[19]);
	printf("\n最低分为%d", a[0]);
	/* 计算总分 */
	int sum = 0;
	double avg;
	for (i = 0; i < 20; i++)
	{
		sum = sum + a[i];

	}
	avg = sum / 20.0;           /* 使用 20.0 确保浮点除法 */
	printf("\n平均分为%.2f", avg);
}
