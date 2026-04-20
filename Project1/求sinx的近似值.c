#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
double jiecheng(t)
{
	double count=1,i;
	for (i = t; i > 0; i = i - 1)
		count = count * i;
	return count;
}
int sinx()
{
	int  n = 1, s=1;
	double sum=0,x,fz,fm;
	scanf("%lf", &x);
	do
	{
		fz = pow(x, n);
		fm = jiecheng(n);
		n = n + 2;
		sum = sum + s * (fz / fm);
		s = s * -1;
	}
	while (fabs(fz / fm) > 1e-6);
	printf("sum=%lf", sum);
	return 0;
}
