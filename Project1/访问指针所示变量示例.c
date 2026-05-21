#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int zhizhengshili()
{
	int a, b;
	int* pa, * pb;
	pa = &a, pb = &b;
	*pa = 10;
	*pb = 100;
	printf("a=%d,*pa=%d\n", a, *pa);
	printf("b=%d,*pb=%d\n", b, *pb);
	pb = pa;
	printf("b=%d,*pb=%d\n", b, *pb);
	return 0;

}