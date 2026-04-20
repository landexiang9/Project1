#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int chitao()
{
	int x=1 ,t=0;
	for (; t<= 9; t = t + 1)
		x = (x + 1) * 2;
	printf("%d", x);
}