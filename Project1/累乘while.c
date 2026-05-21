// 计算 n 的阶乘（while 循环实现）
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
double coutcheng(int n)
{
	int i = 1;
	double fact = 1;
	//printf("�������۳˵Ĵ���");
	//scanf("%d", &n);
	if (n > 0)
	{
		while (i <= n)
		{
			fact = fact * i;
			i = i + 1;
		}
		//printf("�۳˵Ľ��Ϊ%lf", fact);
	}
	else
		//printf("����������������");
	return fact;
}