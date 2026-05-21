/*
 * 找出 100 以内能被 7 整除的数
 * 包含两个函数：
 *   yibaichuqi()     — 普通循环 + continue 实现每行 5 个
 *   yibaichuqigoto() — 使用 goto 语句实现同样效果（对比演示）
 * 知识点：continue 跳转、goto 语句、格式化输出控制。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int yibaichuqi()
{ 
	int t = 1, s, n=1;          /* s: 当前行已输出个数，n: 当前检查的数 */
	/* 遍历 1 到 100 */
	for(s=0;n<=100;n=n+1)
	{
		if (n % 7 == 0)         /* 能被 7 整除 */
		{
			s = s + 1;          /* 计数加 1 */
			if (s == 5)         /* 已满 5 个，换行并重置计数器 */
			{
				printf("%d\n", n);
				s = 0;
				continue;       /* 跳过后面的空格输出，直接进入下一轮 */
			}
			printf("%d ", n);   /* 未满 5 个，空格分隔 */
		}
		
	}
	return 0;
}
/* goto 版本：功能同 yibaichuqi，但使用 goto 跳转代替 continue */
int yibaichuqigoto()
{
	int t = 1, s, n = 1;
	for (s = 0; n <= 100; n = n + 1)
	{   
		if (n % 7 == 0)
		{
			
			s = s + 1;
			if (s == 5)
			{
				printf("%d\n", n);
				s = 0;
				goto a;         /* 跳转到标签 a 处 */
			}
			printf("%d ", n);
			a:;                 /* 标签 a，goto 跳转目标 */
		}

	}
	return 0;
}