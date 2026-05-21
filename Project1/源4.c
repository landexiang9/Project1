/*
 * 类型转换与 sizeof 运算符演示
 * 展示 C 语言中强制类型转换与隐式类型转换的区别：
 *   c = (float)(a+b)/2  — 先将 a+b 转为 float 再除，结果为浮点
 *   d = (float)(a/e)    — 先整数除 a/e=1，再转 float → 1.0（精度丢失）
 *   g = (float)(a/(float)e) — 先转 e 为 float，浮点除得正确结果 3.0/2=1.5
 * sizeof 用于获取各类型占用的字节数。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main5()
{
	printf("%zu",sizeof(unsigned));
	int a = 3, b = 4 ,e=2;
	float c,d,f=1.5,g;
	c = (float)(a + b) / 2;      /* a+b=7 → 转 float → 7.0/2=3.5 */
	d = (float)(a / e);          /* a/e=1（整数截断）→ 转 float → 1.0 */
	g = (float)(a / (float)e);   /* e 先转 float → 3.0/2.0=1.5 */
	printf("c=%f,d=%f,g=%f" ,c, d, g);
	printf("%zu,%zu,%zu",sizeof(a), sizeof(b), sizeof(c));
		return 0;

}