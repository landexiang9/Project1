// 判断整数位数（使用 do-while、while、for 四种循环实现）
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int numsize()
{
	long n, m;
	int count = 0;
	printf("please enther a number:");
	scanf("%ld", &n);
	m = n;
	if (n < 0)
		n = -n;
	do
	{
		n = n / 10;
		count = count + 1;
	} while (n != 0);
	printf("整数 %ld为%d 位整数",m,count);

}


int whilenumsize()
{
	long n, m;
	int count = 0;
	printf("please enther a number:");
	scanf("%ld", &n);
	m = n;
	if (n < 0)
		n = -n;
	while (n != 0)
	{
		n = n / 10;
		count = count + 1;
	}
	printf("整数 %ld为%d 位整数", m, count);

}


int fornumsize()
{
	long n, m;
	int count = 0;
	printf("please enther a number:");
	scanf("%ld", &n);
	m = n;
	if (n < 0)
		n = -n;
	for ( ;n != 0;)
		{
		n = n / 10;
		count = count + 1;
		}
	printf("整数 %ld为%d 位整数", m, count);

}
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
	
	printf("整数 %ld为%d 位整数", m, count);

}
