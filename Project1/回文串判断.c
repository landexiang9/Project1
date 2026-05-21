/*
 * 回文串判断
 * 输入一个字符串，判断其是否为回文串（正序和逆序相同）。
 * 算法：将原字符串逆序存入另一数组 c2，然后使用 strcmp 比较。
 * 回文示例："abcba" 正逆序相同，"hello" 则不同。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<string.h>
#include<stdio.h>
void panduanhuiwenchuang()
{
	int t,n;                    /* t: c1 正序索引，n: c2 逆序索引 */
	char c1[50], c2[50];        /* c1: 原字符串，c2: 逆序字符串 */
	printf("请输入一个字符串");
	gets(c1);                   /* 读取输入字符串 */
	n = strlen(c1)-1;           /* 获取最后一个字符的索引 */
	/* 逆序遍历 c1 并顺序填入 c2，实现反转 */
	for (t = 0; n>= 0; n--)
	{
		c2[n]=c1[t];            /* c1 正序第 t 位 -> c2 逆序第 n 位 */
		t++;
	}
	c2[t] = '\0';               /* 手动添加字符串结束符 */
	/* 比较原串与逆序串是否相等 */
	if (strcmp(c1, c2) == 0)
	{
		printf("same");         /* 相等说明是回文串 */
	}
	else
		printf("not same");     /* 不等则不是回文串 */
	puts(c1);                   /* 输出原串 */
	puts(c2);                   /* 输出逆序串供对照 */

}