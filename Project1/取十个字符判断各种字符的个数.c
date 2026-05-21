/*
 * 字符分类统计
 * 输入 10 个字符，分别统计其中大写字母、小写字母、数字和其他字符的个数。
 * 核心知识点：
 *   1. getchar() 逐个读取字符
 *   2. ASCII 码范围判断字符类别
 *   3. 字符常量比较（'A' ~ 'Z'、'a' ~ 'z'、'0' ~ '9'）
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int saincount()
{
	/* 四个计数器分别统计不同类型字符的个数 */
	int big=0, small=0,num=0, oth=0, i=0;
	char ch;                    /* 临时存储当前读取的字符 */
	/* 循环读取 10 个字符 */
	for (; i < 10; i++)
	{
		ch = getchar();         /* 从标准输入读入一个字符 */
		/* 判断字符类型并递增对应计数器 */
		if (ch >= 'A' && ch <= 'Z')
			big = big + 1;
		else if (ch >= 'a' && ch <= 'z')
			small = small + 1;
		else if (ch >= '0' && ch <= '9')
			num = num + 1;
		else
			oth = oth + 1;

	}
	/* 输出统计结果 */
	printf("这十个字符中大写字符有%d个，小写字符有%d个，数字有%d个，其他字符有%d个", big, small, num, oth);

}