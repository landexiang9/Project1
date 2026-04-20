#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
int huashizhuansheshi()
{
	double f, c;
	printf("请输入华氏度:");
	scanf("%lf", &f);
	c = (5 * (f - 32)) / 9;
	printf("%.2lf华氏度转化为摄氏度为%.2lf", f, c);
}