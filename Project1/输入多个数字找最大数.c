#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int max()
{
	int i=2;
	float a, b,max;
	printf("请输入第一个数：");
	scanf("%f", &a);
	max = a;
	for(;i<=10;i=i+1)
	{
		printf("请输入第%d个数", i);
		scanf("%f", &b);
		if (b > max)
			max = b;
	}
	printf("最大的数为%f", max);

}