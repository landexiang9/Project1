/*
 * 整数位数判断
 * 输入一个整数，分别用 do-while、while、for 和（不完整的）len 方式判断其位数。
 * 核心算法：反复除以 10 直到结果为 0，除的次数即为位数。
 * 目的：对比三种循环结构的写法与适用场景。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
/* do-while 版本：至少执行一次循环体，适合除 0 外的所有整数 */
int numsize()
{
	long n, m;                  /* n 为工作变量，m 保存原始值 */
	int count = 0;
	printf("please enther a number:");
	scanf("%ld", &n);
	m = n;                      /* 备份原始输入 */
	if (n < 0)                  /* 负数转为正数处理 */
		n = -n;
	do
	{
		n = n / 10;             /* 去掉末尾一位 */
		count = count + 1;      /* 位数加 1 */
	} while (n != 0);           /* 直到 n 变为 0 */
	printf("整数 %ld为%d 位整数",m,count);

}

/* while 版本：先判断后执行，n=0 时不会进入循环体 */
int whilenumsize()
{
	long n, m;
	int count = 0;
	printf("please enther a number:");
	scanf("%ld", &n);
	m = n;
	if (n < 0)
		n = -n;
	while (n != 0)              /* n=0 时直接跳过循环，count 保持 0 */
	{
		n = n / 10;
		count = count + 1;
	}
	printf("整数 %ld为%d 位整数", m, count);

}

/* for 版本：for 循环实现，省略初始化表达式 */
int fornumsize()
{
	long n, m;
	int count = 0;
	printf("please enther a number:");
	scanf("%ld", &n);
	m = n;
	if (n < 0)
		n = -n;
	for ( ;n != 0;)             /* for 相当于 while 的紧凑写法 */
		{
		n = n / 10;
		count = count + 1;
		}
	printf("整数 %ld为%d 位整数", m, count);

}
/* lennumsize 版本：未完成实现，仅输出 count=0（演示函数框架） */
int lennumsize()
{
	long n, m;
	int count = 0;
	char c[]="";
	printf("please enther a number:");
	scanf("%ld", &n);
	m = n;
	if (n < 0)
		n = -n;
	/* 此函数未完成位数计算逻辑，直接输出 0 */
	printf("整数 %ld为%d 位整数", m, count);

}
