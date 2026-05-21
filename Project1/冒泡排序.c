#define _CRT_SECURE_NO_WARNINGS  1
// 冒泡排序：输入 10 个整数，按升序排序
#pragma warning(disable:6031)
#include<stdio.h>
void maopaoapixu()
{
	int i, j, t, a[10];
	for (i = 0; i < 10; i++)
	{
		printf("�������%d���ɼ�", i + 1);
		scanf("%d", &a[i]);

	}
	for (i = 0; i < 10; i++)
		for (j = 0; j < 10 - i - 1; j++)
			if (a[j] > a[j + 1])
			{
				t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
			}
}