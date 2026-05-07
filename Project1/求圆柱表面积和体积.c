#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#define PEI 3.1415926

int qiuyuanmianjihebiaomianji()
{
	double r, h, s, v, lo, sums;
	printf("请输入原柱的底面半径");
	scanf("%lf", &r);
	printf("请输入高");
	scanf("%lf", &h);
	s = yuandemianji(r);
	v = s * h;
	lo = PEI * r * 2;
	sums = lo * h + 2 * s;
	printf(" %lf\n", sums);
	printf(" %lf", v);
}