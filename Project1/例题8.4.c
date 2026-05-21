#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int liti84()
{
	int a, b, * pa = &a, * pb = &b, * pc = NULL;
	scanf("%d,%d", pa, pb);
	if(pa[0]<pb[0])
	{
		pc = pa;
		pa = pb;
		pb = pc;
	}
	printf("最大值是：%d,最小值是：%d,和是：%d\n", pa[0], pb[0], pa[0] + pb[0]);
	return 0;
}