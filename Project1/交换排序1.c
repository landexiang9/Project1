// 交换排序：输入 10 个整数，按降序排序并输出
#include<stdio.h>
int jiaohuanpaixu()
{
	int a[10], i, j, t;
	printf("������10��������");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 9; i++)
	{
		for (j = i+1; j < 10; j++)
		{
			if (a[i] < a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for  (i=0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

}