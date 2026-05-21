// 输入 n 个值，调用交换排序函数降序排序后输出
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int jiaohuanpaixudiaoyong(int n, int a[]);

void input(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);

	}

}
void kongzhi()
{
	int n, a[20];
	scanf("%d", &n);
	input(a,n);
	jiaohuanpaixudiaoyong(n,a);
}