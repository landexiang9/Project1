// 交换排序（降序），封装为可复用的函数
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
int jiaohuanpaixudiaoyong(int n, int a[])
{
	int  i, j, t;
	for (i = 0; i < n-1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}