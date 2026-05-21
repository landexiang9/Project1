// 华氏度转摄氏度：输入华氏度，输出对应的摄氏度
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
int huashizhuansheshi()
{
	double f, c;
	printf("�����뻪�϶�:");
	scanf("%lf", &f);
	c = (5 * (f - 32)) / 9;
	printf("%.2lf���϶�ת��Ϊ���϶�Ϊ%.2lf", f, c);
}