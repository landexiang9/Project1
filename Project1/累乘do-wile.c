/*
 * 阶乘计算（do-while 循环实现）
 * 输入正整数 n，计算 n! = 1×2×3×...×n。
 * do-while 特点：先执行一次循环体，再判断条件，至少执行一次。
 * 使用 long long 类型存储结果，防止较小 n 的溢出。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int docoutcheng()
{
	int n = 0, i = 1;           /* n: 输入值，i: 循环计数器 */
	long long fact = 1;         /* 阶乘结果，使用 long long 应对较大值 */
	printf("请输入累乘的次数");
	scanf("%d", &n);
	if (n > 0)                  /* 只处理正整数 */
	{
		do
		{
			fact = fact * i;    /* 累乘 */
			i = i + 1;          /* 计数器递增 */
		}
		while (i <= n);         /* 当 i 超过 n 时停止 */
		printf("累乘的结果为%lld", fact);
	}
	else
		printf("请输入大于零的整数");
}