#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int coutcheng()
{
	int n = 0, i = 1;
	long long fact = 1;
	printf("请输入累乘的次数");
	scanf("%d", &n);
	if (n > 0)
	{
		while (i <= n)
		{
			fact = fact * i;
			i = i + 1;
		}
		printf("累乘的结果为%lld", fact);
	}
	else
		printf("请输入大于零的整数");
}