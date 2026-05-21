// 计算圆的面积（通过半径 r 计算 πr²）
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#define PEI 3.1415926
#include<stdio.h>
double yuandemianji(double r)
{
	double s;
	//printf("please enter r");
	//scanf("%lf", &r);
	s = PEI * r*r;
	
	return s;


}