// 猴子吃桃问题：每天吃一半加一个，第10天剩1个，求原来桃子数
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int chitao()
{
	int x=1 ,t=0;
	for (; t < 9; t = t + 1)
		x = (x + 1) * 2;
	printf("%d", x);
}