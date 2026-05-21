// 打印九九乘法表
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int chengfabiao()
{
	int i, j,n,s;
	for (i=1, j=1; j<= 9; j = j + 1)
	{
		for (; i <= j; i = i + 1)
		{
			n = i * j;
			printf("%d*%d=%d ", i, j, n);
			
		}
		printf("\n");
		i = 1;
	}
}