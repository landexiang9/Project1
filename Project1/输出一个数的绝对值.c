#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int shichuyigeshudejueduizhi()
{
	int a, * b = &a;
	scanf("%d", b);
	if (*b > 0)
		printf("%d", *b);
	else
		printf("%d", *b * -1);
	return 0;

}