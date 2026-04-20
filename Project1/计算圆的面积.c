#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#define PEI 3.1415926
#include<stdio.h>
int main0()
{
	double r, s;
	printf("please enter r");
	scanf("%lf", &r);
	s = PEI * r*r;
	printf("mianjiwei%lf", s);
	return 0;


}