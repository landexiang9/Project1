/*
 * 自增自减运算符与运算优先级演示
 * 展示 ++（前缀/后缀）、--、*、% 运算符的结合规则与求值顺序。
 * 重点理解：
 *   1. 前缀 ++s：先加 1 后使用
 *   2. 后缀 n++：先使用后加 1
 *   3. 表达式 ++s * --n % s 中，乘除取模优先级高于自增自减
 * 注意：同一表达式中多次修改同一变量会导致未定义行为（如 ++s * --n % s）。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
int main2()
{
	int s = 65, n = 1, t;
	/* 前缀 ++s：s 先变为 66；后缀 n++：先使用 n=1 再自增 */
	t = ++s+ n++;
	printf("s=%c s=%d n=%d t=%c\n", s,s,n,t);
	/* 复杂的混合表达式：先 ++s、--n，再计算 * 和 % */
	t = ++s * --n % s;
	printf("s = %d n = %d t=%d", s,n,t);
	return 0;
	
}