/*
 * 水仙花数判断
 * 水仙花数指一个三位数，其各位数字的立方和等于该数本身（如 153=1³+5³+3³）。
 * panduanshuixianhuasu(a)：判断 a 是否为水仙花数
 * shengchesuzi()：遍历 100~999 找出所有水仙花数
 * 知识点：数位分离（整除与取模）、循环遍历。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
/* 判断单个三位数是否为水仙花数 */
int panduanshuixianhuasu(int a)
{
	int b,c,d;                  /* b: 百位，c: 十位，a: 个位，d: 原始值 */
	d = a;                      /* 保存原始值用于后续比较 */
	b = a / 100;                /* 取百位 */
	a = a - b * 100;            /* 去掉百位 */
	c = a / 10;                 /* 取十位 */
	a = a - c * 10;             /* 去掉十位，剩下个位 */
	/* 判断立方和是否等于原数 */
	if (b*b*b + c*c*c + a*a*a == d)
		printf("%d是水仙花数\n", d);
	return 0;

}
/* 遍历 100 到 999 范围内的所有三位数 */
int shengchesuzi()
{
	int a;
	for (a = 100; a < 1000; a++)
	{
		panduanshuixianhuasu(a); /* 逐个判断 */
	}
}