#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
int main12()
{
	int a,b,c,d;
	scanf("%d",&a);
	d = a;
	b = a / 100;
	a = a - b * 100;
	c = a / 10;
	a = a - c * 10;
	
	if (pow(b, 3) + pow(c, 3) + pow(a, 3)==d)
		printf("%d是水仙花数", d);
	else
		printf("%d不是水仙花数", d);
	return 0;

}