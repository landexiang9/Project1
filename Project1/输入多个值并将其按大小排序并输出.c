/*
 * 多值排序控制程序
 * 先输入值的数量 n，再输入 n 个整数，调用交换排序调用.c 中的
 * jiaohuanpaixudiaoyong() 函数进行降序排序并输出。
 * 演示如何将输入、排序、输出拆分为独立函数进行模块化设计。
 */
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int jiaohuanpaixudiaoyong(int n, int a[]); /* 声明外部排序函数 */

/* input：从标准输入读取 n 个整数存入数组 a */
void input(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);

	}

}
/* kongzhi：控制流程——读取数量 n，输入数据，调用排序并输出 */
void kongzhi()
{
	int n, a[20];               /* a: 数组最多存 20 个整数 */
	scanf("%d", &n);            /* 读取待排序的整数个数 */
	input(a,n);                 /* 读取具体数值 */
	jiaohuanpaixudiaoyong(n,a); /* 调用排序函数（降序输出） */
}