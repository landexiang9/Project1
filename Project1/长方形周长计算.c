// 长方形周长计算与转义字符演示
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include <stdio.h>
void main1()
{
	char b, c, d, e;
	int num1 = 5, num2 = 60, num3 = 114514;
	double f1 = 20.5, f2 = 3.1, f3;
	b = '\43';
	c = '\103';
	d = '\x2a';
	e = '\x4c';
	printf("b = % c, c = % c, d = % c, e = % c", b, c, d, e);
	printf("\"good night\40 \n");
	printf("/123456");
	printf("��������%d %d %d ", num1, num2, num3);
	printf("����������%f,%f", f1, f2);
	f3 = num1 + num2 + f1 + f2;
	printf("�����ε��ܳ�Ϊ%f��������λС��%0.2f", f3,f3);
}
