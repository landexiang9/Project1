/*
 * 调和级数求和
 * 计算 1 + 1/2 + 1/3 + ... + 1/n 的值并输出计算过程。
 * 注意使用 1.0/i 而非 1/i 进行浮点除法，避免整数截断。
 * 该级数发散（n→∞ 时趋于无穷大），增长非常缓慢。
 */
#include<stdio.h>
int nfenziyi()
{
	int n, i;
	double count = 0;           /* 累加和，使用 double 存储小数 */
	printf("请输入n: ");
	scanf("%d", &n);
	/* 遍历 1 到 n，累加 1/i */
	for (i = 1; i <= n; i++)
	{
		count = count + 1.0 / i; /* 1.0/i 为浮点除法，1/i 为整数除法 */
		/* 输出当前项，最后一项不加 + */
		if (i != n)
		{
			printf("1/%d+", i);
		}
		else
		{
			printf("1/%d", i);
		}
		
	}
	printf("=%lf", count);
}