// 求 1 到 n 中能被 3 和 7 同时整除的数之和
#include<stdio.h>
int qiu1tonzhijie3he7zhengchu()
{
	int n, i;
	double count = 0;
	printf("������n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 7 == 0)
		{
			count = count + i;
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