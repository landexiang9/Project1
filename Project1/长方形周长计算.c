/*
 * 长方形周长计算与转义字符演示
 * 展示 C 语言中转义字符的多种表示方法：
 *   \ooo  — 八进制 ASCII 码（如 \43 = '#', \103 = 'C'）
 *   \xhh  — 十六进制 ASCII 码（如 \x2a = '*', \x4c = 'L'）
 *   \"    — 输出双引号
 *   \40   — 八进制空格
 * 同时演示基本算术运算与格式输出（%d、%f、%0.2f）。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include <stdio.h>
void main1()
{
	char b, c, d, e;            /* 演示转义字符的四个字符变量 */
	int num1 = 5, num2 = 60, num3 = 114514;
	double f1 = 20.5, f2 = 3.1, f3;
	/* 用八进制和十六进制转义序列初始化字符 */
	b = '\43';                  /* 八进制 43 = 十进制 35 = '#' */
	c = '\103';                 /* 八进制 103 = 十进制 67 = 'C' */
	d = '\x2a';                 /* 十六进制 2a = 十进制 42 = '*' */
	e = '\x4c';                 /* 十六进制 4c = 十进制 76 = 'L' */
	printf("b = % c, c = % c, d = % c, e = % c", b, c, d, e);
	printf("\"good night\40 \n"); /* 转义输出引号和空格 */
	printf("/123456");
	printf("三个整数%d %d %d ", num1, num2, num3);
	printf("两个浮点数%f,%f", f1, f2);
	f3 = num1 + num2 + f1 + f2; /* 混合运算 */
	printf("长方形的周长为%f，保留两位小数%0.2f", f3,f3);
}
