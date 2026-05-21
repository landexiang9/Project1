/*
 * 求 1 到 n 中能被 3 和 7 同时整除的数之和
 * 遍历 1~n，判断每个数是否能同时被 3 和 7 整除（即能被 21 整除），
 * 将符合条件的数累加并输出求和过程。
 * 知识点：逻辑与（&&）运算、循环遍历、累加器模式。
 */
#include<stdio.h>
int qiu1tonzhijie3he7zhengchu()
{
	int n, i;
	double count = 0;           /* 累加和，使用 double 避免溢出 */
	printf("请输入n: ");
	scanf("%d", &n);
	/* 遍历 1 到 n */
	for (i = 1; i <= n; i++)
	{
		/* 同时被 3 和 7 整除，即被 21 整除 */
		if (i % 3 == 0 && i % 7 == 0)
		{
			count = count + i;
			/* 输出求和表达式（最后一个不加 +） */
			if (i != n)
			{
				printf("%d+", i);
			}
			else
			{
				printf("%d", i);
			}
		}
		
	}
	printf("=%lf", count);
}