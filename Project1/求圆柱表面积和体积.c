#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
// 计算圆柱体的表面积和体积
#define PEI 3.1415926
#include<stdio.h>

double yuandemianji(double r);

int qiuyuanmianjihebiaomianji()
{
	double r, h, s, v, lo, sums;
	printf("������ԭ���ĵ���뾶");
	scanf("%lf", &r);
	printf("�������");
	scanf("%lf", &h);
	s = yuandemianji(r);
	v = s * h;
	lo = PEI * r * 2;
	sums = lo * h + 2 * s;
	printf(" %lf\n", sums);
	printf(" %lf", v);
}