/*
 * 九九乘法表
 * 打印 1×1 到 9×9 的乘法口诀表。
 * 外层循环控制行（乘数 j），内层循环控制列（被乘数 i）。
 * 每行内层循环从 1 到当前行号 j，形成下三角矩阵格式。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int chengfabiao()
{
	int i, j,n;                 /* i: 被乘数，j: 乘数，n: 乘积 */
	/* 外层循环：j 从 1 递增到 9，代表乘数 */
	for (i=1, j=1; j<= 9; j = j + 1)
	{
		/* 内层循环：i 从当前值递增到 j，代表被乘数 */
		for (; i <= j; i = i + 1)
		{
			n = i * j;
			printf("%d*%d=%d ", i, j, n);
			
		}
		/* 每行结束后换行，并将 i 重置为 1 */
		printf("\n");
		i = 1;
	}
}