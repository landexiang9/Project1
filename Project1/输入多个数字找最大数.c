// 输入 10 个数字，找出其中的最大值
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int max()
{
	int i=2;
	float a, b,max;
	printf("�������һ������");
	scanf("%f", &a);
	max = a;
	for(;i<=10;i=i+1)
	{
		printf("�������%d����", i);
		scanf("%f", &b);
		if (b > max)
			max = b;
	}
	printf("������Ϊ%f", max);

}