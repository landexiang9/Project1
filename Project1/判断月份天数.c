/*
 * 月份天数判断
 * 输入年份和月份，输出该月的天数。
 * 知识点：
 *   1. switch-case 多分支选择结构
 *   2. 闰年判断规则：能被 400 整除，或能被 4 整除但不能被 100 整除
 *   3. 2 月根据闰年分别有 29 天或 28 天
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main15()
{
	printf("智能天数判断系统\n");
	printf("请输入年月以判断这个月的天数");
	int y, m,d;                 /* y: 年份，m: 月份，d: 天数结果 */
	scanf("%d%d", &y, &m);
	/* switch 根据月份确定天数 */
	switch (m)
	{
	case 1:                     /* 大月：31 天 */
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		d = 31; break;
	case 4:                     /* 小月：30 天 */
	case 6:
	case 9:
	case 11:
		d = 30; break;

	case 2:                     /* 2 月：平年 28 天，闰年 29 天 */
		if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
			d = 29; 
		else
			d = 28;
		break;
	default:                    /* 非法的月份（不在 1-12 范围） */
		d = 0; break;

	}
	/* 输出结果：d=0 表示月份输入有误 */
	if (d != 0)
		printf("%d年的第%d月份是%d天", y, m, d);
	else
		printf("请输入正确的月份");

}