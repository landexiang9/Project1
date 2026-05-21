// 解一元二次方程 ax²+bx+c=0，求实数根
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
int panduanjie(double a, double b, double c);
int jieercifc()
{
	double a, b, c ,x1 ,x2;
	printf("��������η�����a��ֵ");
	scanf("%lf", &a);
	printf("��������η�����b��ֵ");
	scanf("%lf", &b);
	printf("��������η�����c��ֵ");
	scanf("%lf", &c);
	if (panduanjie(a, b, c))
	{
		x1 = (-b + pow(b * b - 4 * a * c, 0.5)) / (2 * a);
		x2 = (-b - pow(b * b - 4 * a * c, 0.5)) / (2 * a);
		printf("����%.0lfx^2+%.0lfx+%.0lf�Ľ�Ϊ", a, b, c);
		printf("\nx1=%lf \nx2=%lf", x1, x2);
	}
	else
		printf("�÷�����ʵ��");

}
int panduanjie(double a, double b, double c)
{ 
	double t=a, z=b,v=c;
	int s;
	if ((pow(z, 2) - 4 * t * v) >= 0)
		s = 1;
	else
		s = 0;
	return s;
}