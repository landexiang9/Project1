/*
 * 闰年判断
 * 输入年份，判断是否为闰年。
 * 闰年规则：能被 400 整除，或能被 4 整除但不能被 100 整除。
 * 同时含有一个趣味彩蛋：输入 2008 年额外输出鼓励信息。
 * 知识点：逻辑运算符组合、模运算。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main11()
{
	int a;                      /* a: 输入的年份 */
	printf("请输入判断的年份：");
	scanf("%d", &a);
	/* 闰年判断条件：满足下述之一即为闰年 */
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0 ))
		printf("%d 年是闰年",a);
	else
	{
		printf("%d年不是闰年", a);
		printf("\nbut你是一个大帅哥");

	}
	/* 彩蛋：2008 年北京奥运会 */
	if (a == 2008)
		printf("\n并且你是大帅哥");


}