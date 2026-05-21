// 计算 n 的阶乘（do-while 循环实现）
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int docoutcheng()
{
	int n = 0, i = 1;
	long long fact = 1;
	printf("�������۳˵Ĵ���");
	scanf("%d", &n);
	if (n > 0)
	{
		do
		{
			fact = fact * i;
			i = i + 1;
		}
		while (i <= n);
		printf("�۳˵Ľ��Ϊ%lld", fact);
	}
	else
		printf("����������������");
}