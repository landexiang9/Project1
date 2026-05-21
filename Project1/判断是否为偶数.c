/*
 * 奇偶判断
 * 输入一个整数，通过模 2 运算判断其为偶数还是奇数。
 * 核心知识点：% 取模运算符，a%2 结果为 0 表示偶数，1 表示奇数。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main9()
{
	int a;
printf("请输入一个整数：");
scanf("%d", &a);
/* 若 a 能被 2 整除则为偶数，否则为奇数 */
if (a % 2 == 0)
printf("%d是偶数", a);
else
printf("%d是奇数", a);
return 0;

}