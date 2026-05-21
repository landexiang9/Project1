// 兔子繁殖问题：斐波那契数列，计算第 n 个月的兔子对数
#include<stdio.h>
int tuzhifanzi()
{
	int a=0, b=1, c,n,m;
	printf("���������ӷ�ֳ������:");
	scanf("%d",&n);
	for (m = 1; m <= n; m++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("��%d����������", m);
		printf("%d��\n", c);
	}
	
	



}