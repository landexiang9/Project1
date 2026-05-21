// 打印星号金字塔：输入行数 n，输出 n 层等腰三角形
#include<stdio.h>
int jingzita()
{
	int n ,i ,j,k;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		k = n - i;
		for (j = 1;j<=k;j++)
			{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	


}